#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0214[1211] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
};
void recomp_unit_0214_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B5C000u;
        entry_id = (entry_delta < 4844u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0214[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B5C000;
    case 2u: goto L_08B5C004;
    case 3u: goto L_08B5C008;
    case 4u: goto L_08B5C048;
    case 5u: goto L_08B5C0BC;
    case 6u: goto L_08B5C174;
    case 7u: goto L_08B5C19C;
    case 8u: goto L_08B5C234;
    case 9u: goto L_08B5C2DC;
    case 10u: goto L_08B5C394;
    case 11u: goto L_08B5C3DC;
    case 12u: goto L_08B5C424;
    case 13u: goto L_08B5C46C;
    case 14u: goto L_08B5C4B4;
    case 15u: goto L_08B5C4FC;
    case 16u: goto L_08B5C544;
    case 17u: goto L_08B5C58C;
    case 18u: goto L_08B5C62C;
    case 19u: goto L_08B5C6D4;
    case 20u: goto L_08B5C824;
    case 21u: goto L_08B5C974;
    case 22u: goto L_08B5CA24;
    case 23u: goto L_08B5CADC;
    case 24u: goto L_08B5CC2C;
    case 25u: goto L_08B5CC8C;
    case 26u: goto L_08B5CCEC;
    case 27u: goto L_08B5CDAC;
    case 28u: goto L_08B5CEFC;
    case 29u: goto L_08B5CFB4;
    case 30u: goto L_08B5D05C;
    case 31u: goto L_08B5D06C;
    case 32u: goto L_08B5D124;
    case 33u: goto L_08B5D1DC;
    case 34u: goto L_08B5D288;
    case 35u: goto L_08B5D2E8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B5C000:
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B5C004;
L_08B5C004:
    // nop
    goto L_08B5C008;
L_08B5C008:
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C048:
    // nop
    ctx.pc = 0x028BC470u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C0BC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C13E40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C174:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C19C:
    // nop
    // nop
    ctx.pc = 0x026767E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C234:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16590u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C2DC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C394:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C3DC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C424:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C46C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C4B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C4FC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C544:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C58C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028BFDD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C62C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C199D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C6D4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C824:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C974:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C1A4B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CA24:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CADC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CC2C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CC8C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C031B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CCEC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CDAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CEFC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CFB4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028BFDD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D05C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C21A60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D06C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C249B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D124:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D1DC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C257F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D288:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C2D340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D2E8:
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02C2D560u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0214(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0214_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_214(Runtime &runtime) {
    runtime.register_generated_unit(214u, 0x08B5C000u, 16384u, &recomp_unit_0214, &recomp_unit_0214_entry);
    runtime.register_function(0x08B5C000u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C004u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C008u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C048u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C0BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C174u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C19Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C234u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C2DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C394u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C3DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C424u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C46Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C544u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C58Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C62Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C824u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C974u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CADCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CDACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CEFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CFB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D05Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D06Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D124u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D288u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2E8u, &recomp_unit_0214, "recomp_unit_0214");
}
} // namespace psprecomp
