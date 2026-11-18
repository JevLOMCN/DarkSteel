# ClientLauncher

A clean C++ rebuild of the Mir 5 client's launcher, `<client>\Windows\ProjectDS.exe` (Epic's `BootstrapPackagedGame` stub, 168 KB).
The real game is `ProjectDS\Binaries\Win64\ProjectDS.exe`; this small exe only finds it and starts it.

| File | What it is |
|---|---|
| `Launcher.cpp` | The rewritten launcher (readable, commented). |
| `Launcher.rc` | Embedded resources: RCDATA 201 = game exe path, 202 = game name, 203 = default arguments (`-GameServer=127.0.0.1:31101`), plus version info. Edit these to point it at another build or server. |
| `ClientLauncher.ini.example` | Copy to `ClientLauncher.ini` next to the launcher to change the default arguments without rebuilding. |
| `build.bat` | Builds `out\ProjectDS.exe` with Visual Studio 2022 (x64). |
| `ProjectDS_launcher.c`, `imports.txt`, `strings.txt` | Raw decompiler output of the original exe (Ghidra 12.1.4 via REA, SHA-256 `d62f3e9d...4ea68e`), kept as the reference. Not buildable. |

## What it does

1. Reads resource 201 (`ProjectDS\Binaries\Win64\ProjectDS.exe`) and 202 (`ProjectDS`). If they are missing it shows "This program is used for packaged games and is not meant to be run directly." and exits with 9000.
2. Checks the Visual C++ runtime (`msvcp140_2.dll`, `vcruntime140_1.dll`, 14.40.33810 or newer): next to the game exe, as the Store framework package, in the machine-wide redistributable, or on the DLL search path. If it is missing it offers to run `Engine\Extras\Redist\en-us\UEPrereqSetup_x64.exe`.
3. Starts `"<folder>\ProjectDS\Binaries\Win64\ProjectDS.exe" ProjectDS <default arguments> <your arguments>`, waits, and returns its exit code.

### Default arguments (our addition)

The original stub had none. This one adds resource 203 (`-GameServer=127.0.0.1:31101`) to every start, so the client can be launched by double-clicking `ProjectDS.exe` with no `.bat`.

- **Change the server without rebuilding:** put a `ClientLauncher.ini` next to the launcher (see `ClientLauncher.ini.example`). Its `Arguments=` line replaces the embedded default (an empty `Arguments=` means no default arguments).
- **Override per start:** a `-Key=` already on the command line replaces the default with the same key, so `ProjectDS.exe -GameServer=10.0.0.5:31101` goes to that server, and `-resx` / `-windowed` just add to the list.

Example `ClientLauncher.ini` (place it in the same folder as the launcher `ProjectDS.exe`, for example `F:\Mir5\Client31.12.25\Windows\`):

```ini
; Lines starting with ; are comments.
[Launcher]
; Replaces the built-in default (-GameServer=127.0.0.1:31101). Separate arguments with spaces.
Arguments=-GameServer=127.0.0.1:31101 -windowed -resx=1280 -resy=720
```

A few variations:

```ini
; Play on a server on your LAN, full screen at 1080p
Arguments=-GameServer=192.168.1.20:31101 -resx=1920 -resy=1080

; No default arguments at all (an empty value is allowed)
Arguments=
```

Exit codes: 9000 resources missing, 9001 prerequisite installer missing, 9002 install declined, 9003 installer failed to start, 9004 installer failed, 9005 CreateProcess failed, 9006 exit code unreadable.

## Differences from the original

Same behaviour and command line (checked with a stub game exe: arguments, working directory and exit code all pass through). The rebuilt exe is a little smaller (about 155 KB) and has no icon or Windows manifest; the original carried Epic's icon. Add an `ICON` and manifest to `Launcher.rc` if you want them.

## Why

It is the one part of the client we can fully understand and rebuild. It lets us ship our own launcher (for example with the server address baked in via resource 202 or extra arguments) without touching the 370 MB game exe.