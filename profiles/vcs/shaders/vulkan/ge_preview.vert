#version 450

layout(location = 0) in vec4 in_position;
layout(location = 1) in vec4 in_color;
layout(location = 2) in vec2 in_uv;
layout(location = 3) in float in_q;
layout(location = 4) in float in_fog;
layout(location = 0) out vec4 vertex_color;
layout(location = 1) out vec2 vertex_uv;
layout(location = 2) out float vertex_q;
layout(location = 3) out float vertex_fog;

layout(push_constant) uniform DrawScale {
    vec4 scale_offset;
    // x: 1 = hardware transform, y: index into transforms[].
    layout(offset = 80) uvec4 control;
} draw;

// Hardware transform (same as the DX12 backend's TransformControl.x == 1):
// the rows fold model->clip and the PSP viewport into this target's NDC, so
// the CPU hands over model-space vertices and skips projection, clipping and
// triangle preparation.
struct Transform {
    vec4 row0;
    vec4 row1;
    vec4 row2;
    vec4 row3;
    vec4 view_z;
    vec4 uv_scale_offset;
    vec4 fog;           // x: fog end, y: fog slope
    uvec4 flags;        // x: depth clip, y: affine vertex colour
    vec4 color_mul;
    vec4 color_add;
};
layout(std430, set = 1, binding = 0) readonly buffer Transforms {
    Transform transforms[];
};

void main() {
    if (draw.control.x == 1u) {
        Transform t = transforms[draw.control.y];
        vec4 p = vec4(in_position.xyz, 1.0);
        float clip_w = dot(t.row3, p);
        if (!(abs(clip_w) >= 1.0e-12)) clip_w = 1.0;
        float clip_z = dot(t.row2, p);
        if (t.flags.x == 0u) clip_z = clamp(clip_z, 0.0, clip_w);
        gl_Position = vec4(dot(t.row0, p), dot(t.row1, p), clip_z, clip_w);
        vertex_uv = in_uv * t.uv_scale_offset.xy + t.uv_scale_offset.zw;
        vertex_fog = clamp((dot(t.view_z, p) + t.fog.x) * t.fog.y, 0.0, 1.0);
        vec4 color = in_color;
        if (t.flags.y != 0u)
            color = floor(clamp(color * t.color_mul + t.color_add, 0.0, 1.0) * 255.0) * (1.0 / 255.0);
        vertex_color = color;
        vertex_q = 1.0;
        return;
    }
    // Positions arrive already in PSP screen space, but carry their clip W.
    // Handing W back to the rasterizer (NDC * w, w) is what makes it
    // interpolate UV/Q/colour perspective-correctly - with W fixed at 1 the
    // ground textures were mapped affinely and warped as the camera moved.
    // Same mapping as screen_to_d3d() in the DX12 backend, minus its Y flip.
    float w = in_position.w;
    if (!(abs(w) >= 1.0e-12)) w = 1.0;
    vec2 ndc = in_position.xy * draw.scale_offset.xy + draw.scale_offset.zw;
    gl_Position = vec4(ndc * w, clamp(in_position.z / 65535.0, 0.0, 1.0) * w, w);
    vertex_color = in_color;
    vertex_uv = in_uv;
    vertex_q = in_q;
    vertex_fog = in_fog;
}
