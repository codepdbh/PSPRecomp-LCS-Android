"""Give the LCS camera the second stick the PSP lacks.

The port of the VCS hook in profiles/vcs/generated/generated_unit_0098.cpp
(ThirteenAG's DualAnalogPatch, after TheFloW's remastered controls). LCS runs
the same camera code at other addresses; they were found by matching the VCS
functions' instructions with immediates masked, and the functions line up one
to one:

    VCS                        LCS
    0x0898E080 camera X read   0x08A98C8C
    0x0898E188 camera Y read   0x08A98D8C
    0x0898DE90 gun aim reads   0x08A98AA8
    0x0898BB4C stick X         0x08A96C60
    0x0898BB8C stick Y         0x08A96CA4

Idempotent: run it after regenerating profiles/lcs/generated.
"""
from pathlib import Path

GENERATED = Path(__file__).resolve().parent.parent / 'generated'
MARK = '// lcs-camera-hook'
HOOK = 'vcs::vcs_camera_hook_enabled()'


def axis(name):
    return ('(static_cast<std::uint32_t>(static_cast<std::int32_t>(vcs::vcs_camera_axis_%s())))' % name)


def after_label(text, label, code):
    anchor = '%s:\n' % label
    assert text.count(anchor) == 1, label
    return text.replace(anchor, anchor + code, 1)


def before_in_block(text, label, needle, code):
    """Insert before the first `needle` that follows `label`."""
    start = text.index('%s:\n' % label)
    at = text.index(needle, start)
    return text[:at] + code + text[at:]


def patch(text):
    # Gun aim: when the game's own stick read comes back centred, the second
    # stick takes over (ThirteenAG's aimX/aimY).
    for label, name in (('L_08A98AB0', 'x'), ('L_08A98ADC', 'x'), ('L_08A98AEC', 'x'),
                        ('L_08A98BA4', 'y'), ('L_08A98C0C', 'y')):
        text = after_label(text, label,
            '    %s gun aim %s: the second stick when the pad reads centred.\n'
            '    if (%s && ctx.gpr[2] == 0u)\n        ctx.gpr[2] = %s;\n' % (MARK, name, HOOK, axis(name)))

    for start, skip_from, skip_to, read_label, resume, name in (
            ('L_08A98C8C', 'L_08A98CB4', 'L_08A98D08', 'L_08A98D28', 'L_08A98D30', 'x'),
            ('L_08A98D8C', 'L_08A98DB4', 'L_08A98DC0', 'L_08A98DE0', 'L_08A98DE8', 'y')):
        # The D-pad ramp counter must read 7 for the camera to run; override
        # the loaded value, not the branch, so the game's reset still happens.
        text = before_in_block(text, start,
            '    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);\n',
            '    %s camera %s: satisfy the D-pad ramp.\n    if (%s) ctx.gpr[5] = (7u);\n' % (MARK, name, HOOK))
        # The player-state test that diverts past the stick read entirely.
        text = after_label(text, skip_from,
            '    %s camera %s: never skip the stick read.\n    if (%s) goto %s;\n' % (MARK, name, HOOK, skip_to))
        # The stick read itself, replaced by the host's second stick.
        text = after_label(text, read_label,
            '    %s camera %s from the touch/mouse/pad second stick.\n'
            '    if (%s) {\n        ctx.gpr[2] = %s;\n        goto %s;\n    }\n'
            % (MARK, name, HOOK, axis(name), resume))
    return text


def main():
    for path in sorted(GENERATED.glob('generated_unit_*.cpp')):
        text = path.read_text(encoding='utf-8')
        if 'L_08A98C8C:\n' not in text:
            continue
        if MARK in text:
            print(path.name, 'already patched')
            return
        text = text.replace('#include "generated_units.hpp"\n',
                            '#include "generated_units.hpp"\n#include "vcs_camera_input.hpp"\n', 1)
        path.write_text(patch(text), encoding='utf-8')
        print(path.name, 'patched')
        return
    raise SystemExit('camera function not found in the LCS corpus')


if __name__ == '__main__':
    main()
