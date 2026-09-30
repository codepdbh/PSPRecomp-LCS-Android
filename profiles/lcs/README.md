# Liberty City Stories profile

Grand Theft Auto: Liberty City Stories for PSP (USA, **ULUS10041**), recompiled with PSPRecomp.

LCS shares Vice City Stories' engine and PSP services, so it runs on the VCS host code in `profiles/vcs/host`. This folder only holds what is specific to LCS:

- `generated/` — the AOT C++ corpus for the ULUS10041 executable (SHA-256 `85fb68879359dbbc3f85c0747ef8dd61ff62a9b8219c12a5078f7d8867a7a160`).
- `game/`, `analysis/` — the user's own game data and local analysis. Ignored by Git; never commit them.

## How it is built

The Android app has one flavor per game. `assembleLcsDebug` builds `com.psprecomp.lcs`, which links this corpus and defines `PSPRECOMP_TITLE_LCS`. With that define, `profiles/vcs/host/guest_title.hpp` switches off the patches keyed to VCS executable addresses: the 60 FPS unlock, the host replacements of VCS guest functions, the native fast paths, Project2DFX and draw distance, the UMD streaming handoff, and the radar move.

## Regenerating the corpus

1. Dump the decrypted executable from your own copy with PPSSPP (Settings → Tools → Developer tools → dump decrypted EBOOT). The dump lands in `memstick/PSP/SYSTEM/DUMP/ULUS10041_EBOOT.BIN`.
2. Copy it to `profiles/lcs/game/`.
3. Run the VCS generator in generic mode, which disables its VCS-address lowerings:

```text
vcs_recomp profiles/lcs/game/ULUS10041_EBOOT.BIN --auto profiles/lcs/generated 0x08804000 0x4000 --generic
```

## Game data on the phone

Extract the ISO with `tools/extract_psp_iso.py` and copy `PSP_GAME` to **Internal storage/LCS**, with the decrypted executable at `LCS/PSP_GAME/SYSDIR/EBOOT_DECRYPTED.ELF`.

## Status

It boots, draws on the GPU, plays audio and runs the intro. Not yet available on LCS: the 60 FPS mode, the camera stick, Project2DFX and the radar move, until their LCS addresses are found. Its wifi multiplayer answers "no network".
