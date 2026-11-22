# Legend of Mir 5 – DarkSteel

C# server implementation, database, data tables and tooling for **Legend of Mir 5 DarkSteel** (Unreal Engine 5.7.1 client).

[Website](https://LOMCN.net) · [Client](https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%205/Leaks/Client%2031.12.25.7z)

---

Client AES - ```0xC51B693F6132AD3E5F298B3E0000803F0000803F9432B63D99A6933D0000803F```

---

## Repository layout

| Folder | What it is |
|---|---|
| [`Client/`](#client) | Decompiled, reorganised view of the Mir 5 game client (reference only, not buildable) |
| [`Server/`](#server) | C# (.NET 10) server, being reworked from a Mir 4 server to serve Mir 5 |
| [`Tools/`](#tools) | Helper tools: the DarkSteel Studio server manager, the proto and icon extractors, and the cooked-asset mappings |

---

## Setup

The quickest way to get a working Mir 5 server and client is **DarkSteel Studio** (`Tools/DarkSteelStudio`). Build it once, point it at your server and client folders, and start and stop everything from it. Studio is a Windows tool.

**You need**

- Windows 10/11, Visual Studio 2022 with the *Desktop development with C++* workload and **C++/CLI support** (to build Studio)
- The .NET 10 SDK (the server)
- MySQL 5.7 or 8 (the `ds_*` databases)
- The Mir 5 client, `Client 31.12.25` (linked at the top), extracted somewhere, for example `F:\Mir5\Client31.12.25\Windows`

**1. Database**

1. Create a MySQL user for the server (the examples use `dev`).
2. Run `DB/mir5_server_db_mysql57.sql` (or `_mysql8.sql`) in MySQL Workbench (*File > Run SQL Script*). It creates the seven `ds_*` schemas.
3. Run the scripts in `DB/migrations` in date order, then optionally `DB/seed_dev.sql` for a `dev` test account and the server list rows. Do not touch any `mm_*` schemas (they are leftovers from Mir 4).

**2. Server settings**

Copy `Server/Config/settings.example.json` to `Server/Bin/Config/settings.json` and fill in the `MySql` section (host, port, user name, password). That folder is not tracked in git. The default ports are 7000 (Gateway HTTP API) and 31101 (game server).

**3. Build and open DarkSteel Studio**

1. Open `Tools/DarkSteelStudio/DarkSteelStudio.sln` in Visual Studio 2022, pick **Release | x64** (or Debug), and build. Or, from a Developer prompt: `MSBuild DarkSteelStudio.vcxproj /p:Configuration=Release /p:Platform=x64` (no `/m`).
2. Run `Tools/DarkSteelStudio/x64/<Configuration>/DarkSteelStudio.exe`.

**4. Configure Studio**

On the **Settings** page:

- **Server folder**: this repo's `Server` folder (the one that contains `Bin/Data`). Browse to it. Paths are stored relative to the tool when they are on the same drive, so a checkout anywhere works.
- **Images folder**: `Tools/DarkSteelStudio/Images`.
- **Game database**: host, port, user and password for the schema you created (default `ds_game`).

On the **Client** page:

- **Client folder**: the folder that contains `ProjectDS\Binaries\Win64\ProjectDS.exe` (the extracted client's `Windows` folder). Browse to it.
- **Game server IP / host and Port**: `127.0.0.1` and `31101` (a LAN or public address if other machines will connect).
- **Width, Height and Windowed**: whatever you like.
- **SSL certificate (.pem)**: browse to `Server/Config/dev-cert.pem`, keep **Skip TLS verification** ticked, and press **Write Engine.ini** (or tick the option that refreshes it on every launch).
- Press **Save** to keep the values for next time.

**5. One-time machine setup (admin)**

The client first asks Wemade's retired config host for its server list, so that name has to point at your Gateway. Add this line to `C:\Windows\System32\drivers\etc\hosts`:

```
127.0.0.1 mir5-master-config.azurewebsites.net
```

If the client log (`<client>\Windows\ProjectDS\Saved\Logs\ProjectDS.log`) shows `libcurl error: 60`, see [Pointing the client at this server](#pointing-the-client-at-this-server) for the certificate options.

**6. Start everything from Studio**

1. Build the server once (Studio only runs what is already built): `dotnet build Server/Server.sln -c Debug`. Do it again after pulling server changes. This fills `Server/Bin/<project>`.
2. On the **Servers** page press **Start All** (or start **Maestro**, the **Gateway** and the **Game Server** one by one). Pick *Open External* to give each its own console window, or *Open Internal* to run it hidden with the log tail on the page.
3. On the **Client** page press **Launch client**. Use **Open client logs** if something goes wrong.
4. In the client press **Login**, then **Access**, and create your character.

Make an account a GM by setting `authority` to `21` for it in `ds_account.player`. The commands are listed in [`Tools/GM Commands.md`](Tools/GM%20Commands.md).

Prefer the command line? `Server/dev.bat` (or `start.bat`) builds and starts the same three services, and `Client/` has nothing to build (it is reference only).

---
## Client

`Client/` is **not original source code**. It is decompiler output from the leaked
Windows client (`Client 31.12.25`, `ProjectDS.exe`, Win64 Development build, linked above),
laid out to look and navigate like a UE project so it is easy to browse and search. Use it as
a reference for protocol, game logic and data formats when working on the server.

### What you get

- `ProjectDS.sln` – Visual Studio solution with nested solution folders
  (`UnrealEngine/Engine/{Runtime,Developer,Editor,Plugins,ThirdParty}`, `ProjectDS/Client`,
  `Platform`), with one `.vcxproj` per build module.
- One `.cpp` per class, grouped under the module it was compiled in, for example
  `UnrealEngine/Engine/Source/Runtime/Engine/Private/AActor.cpp`.
- `_Free/Module.<Name>.N.cpp` files hold functions with no class (templates, lambdas,
  static initialisers), keeping the original unity-build grouping.
- Individually compiled game files keep their real names where the debug info records them
  (for example the `*.pb.cc` protobuf files in the game module).
- Every file starts with a header comment naming the module and its function count.

### What it is not

- **Not buildable.** The `.sln` / `.vcxproj` files exist for navigation, indexing and search
  in Visual Studio. There are no real headers, includes, build rules or original types; the
  code is pseudocode with Ghidra-style locals (`lVar1`, `param_1`, `undefinedN`,
  `field_0x8`) and raw pointer arithmetic.
- **Not complete.** About 0.02% of functions (201) failed to decompile and are missing.
  Class membership is inferred from decompiled signatures, so a few functions may sit in a
  neighbouring file.
- Function, class and namespace names and module/source paths are real, recovered from the
  client's PDB symbols. Everything else (variable names, comments, control-flow shape) is
  decompiler output.

### How it was produced

1. **Binary and symbols.** The client ships `ProjectDS.exe` (about 370 MB) together with a
   matching `ProjectDS.pdb` (about 2.8 GB). The PDB's GUID and age were checked against the
   exe's debug directory and match, so symbol names could be applied.
2. **Decompiling.** The exe was imported into Ghidra 12.1.4 (headless) with the PDB analyser
   enabled and auto-analysed, then every function was run through the Ghidra decompiler with
   a 60-second limit each. About 1.12 million functions were processed, and about 1.107
   million of them carry real names from the PDB. Ghidra needs a large heap for this
   binary: it ran with 20 GB rather than the 2 GB headless default, and the analysis took
   about 12 hours.
3. **Recovering the layout.** The PDB's DBI stream was parsed directly (LLVM's
   `llvm-pdbutil` refuses this 2.8 GB file) to get the module list and section
   contributions. That maps every function address to the object file and build module it
   came from, for example `Development/<Module>/Module.<Module>.N.cpp.obj`, plus
   third-party and CRT libraries. Source folders for Unreal modules came from the reflection
   initialisers in the binary (`Z_CompiledInDeferFile_FID_..._Source_<Module>_...`), which
   embed the original source paths.
4. **Reorganising.** Functions were grouped by module and, inside unity-build modules, by
   class (taken from the namespaced signature, using the UE class prefixes
   `A/U/F/T/E/I/S`). A script then wrote the `.vcxproj` files and the `.sln`.

### Known gaps

- Some modules could not be placed under an original folder path, so wherever they sit is a
  best guess rather than recovered fact.
- Functions the PDB cannot attribute to a module were collected in a separate unmapped group.
- Third-party and platform library files are named from object names and written as `.cpp`
  whether the original was C or C++.

---

## Server

`Server/` is a **C# (.NET 10)** server.

### Layout

The Mir 4 code (the `MirMobile` packet library, the legacy game handlers, the Postgres layer and the Atlas admin web) has been removed; what is left is Mir 5.

| Path | Purpose |
|---|---|
| `M5.Core` | `Config` (reads `Bin/Config/settings.json`), `Engine` (finds the Data/Config folders, loads the data tables), the data-table index and the logger |
| `M5.Protocol` | Compiles `Protos/Global` to typed C# (`MirProto.*`) at build time |
| `M5.Server` | The Mir 5 game server: TCP game port, protocol, world join, skills, combat, GM commands (`Network/Mir5`) |
| `M5.Gateway` | The HTTP(S) API the client bootstraps against: server list, URLs, login, front-end address |
| `M5.Database` | MySQL access for the `ds_*` schemas |
| `M5.Maestro` | Minimal service host (health endpoint); the Mir 4 admin web was removed |
| `Protos/Global` | The `.proto` definitions extracted from the client |
| `Bin/Data` | Game data tables (the client's DataTable export, unmodified, tracked in git) |
| `Config/` | `settings.example.json` (copy to `Bin/Config/settings.json`) and the dev certificate |

### Running

Requires the .NET 10 SDK. From `Server/`:

```bat
dotnet build Server.sln -c Debug
dev.bat      :: build, then run Maestro, the Gateway and the Game Server with dotnet watch (calls legends.bat dev)
start.bat    :: build, then start the three services in their own windows
```

### Status

Work in progress. The decompiled client in `Client/` is the reference for what the Mir 5
protocol and game data look like; the server is being changed to match it.

**Done**

- All services (Maestro, Gateway, M5.Server) start and stay up. Everything builds into
  `Server/Bin/<Project>/`; run from there or with `dev.bat`.
- MySQL `ds_*` schema (`DB/`) imported and an access layer in `M5.Database/Mysql`.
- Static game data (`Server/Bin/Data`) is kept in the client's FModel DataTable export format
  and indexed at startup (about 730 tables / 75k rows).
- Gateway serves the client bootstrap endpoints `GET /api/get_dev_server_list` and
  `GET /api/urls` over HTTP (7000) and HTTPS (443).
- Client launches with the UI (`Mir5_Local.bat`) and reaches our Gateway.

**Working now**

- Client bootstrap, login, server list and front-end address against the MySQL `ds_*` schemas.
- Mir 5 TCP game server on 31101 with the full protocol compiled to typed C# (`Server/M5.Protocol`, from the `.proto` files in `Server/Protos/Global`).
- Character creation (`ds_game.character` + the starting kit from the game data: gear, potions, quest, skills), then entering the world: player data sets, position, skills, equipment, NPC spawns around you, chat.
- GM accounts (`ds_account.player.authority` 21) and the `DS.Chat` console commands: warplocation, charlevel, moneymake...

**Next**

- NPC AI, stats and combat, skill casting, items, quests, shops, party/guild.

See `agent.md` for the protocol notes (frame format, `ErrorCode` values, what each reply must contain) and `Tools/ProtoGet/protoget_full.py` for regenerating the protos from the client.

### Pointing the client at this server

The client first fetches a dev server list from Wemade's Azure host
(`mir5-master-config.azurewebsites.net`, now dead), so that name must be redirected to the
Gateway and its certificate accepted. One-time setup on the machine running the client:

1. **Hosts file** (admin) - add `127.0.0.1 mir5-master-config.azurewebsites.net` to
   `C:\Windows\System32\drivers\etc\hosts`.
2. **Dev certificate** - the Gateway serves HTTPS on 443 when `Server/Bin/Config/dev-cert.pfx`
   exists (self-signed for that host name, password `dev`, gitignored). A PEM copy is kept at
   `Server/Config/dev-cert.pem`.
3. **Client `Engine.ini`** - create
   `<client>\Windows\ProjectDS\Saved\Config\Windows\Engine.ini` with:

   ```ini
   [HTTP.Curl]
   bVerifyPeer=false

   [SSL]
   DebuggingCertificatePath=<path to this repo>/Server/Config/dev-cert.pem
   ```

   Confirmed working. The file went missing once, so mark it read-only after creating it.
   If the log still shows `libcurl error: 60`, import the PEM into the Windows trusted root
   store instead (admin PowerShell):
   `Import-Certificate -FilePath Server\Config\dev-cert.pem -CertStoreLocation Cert:\LocalMachine\Root`
4. **Launch** - use a bat without `-AIPlay`/`-AIServer` (those run with no UI):

   ```bat
   ProjectDS\Binaries\Win64\ProjectDS.exe -game -resx=1280 -resy=720 -windowed -GameServer=127.0.0.1:31101
   ```

   Client log: `ProjectDS\Saved\Logs\ProjectDS.log` (search for `libcurl` and `GetServerList_Http`).

The bootstrap chain, ports and crypto notes are recorded in `agent.md`.

DarkSteel Studio's **Client** page does steps 3 and 4 for you (writes `Engine.ini`, builds the launch command, starts the client).

---

## Tools

| Folder | What it is |
|---|---|
| `Tools/DarkSteelStudio/` | **DarkSteel Studio**, the Windows desktop tool for running the Mir 5 server (C++/CLI + WPF, .NET Framework 4.8, build with Visual Studio 2022 / MSBuild). Its own `README.md` has the details |
| `Tools/DarkSteelStudio/Images/` | Item icons extracted from the client (`Items/<ID_Icon>.png`, 331 of 333), used by the tool's Game Data tab |
| `Tools/DarkSteelStudio/external/` | rapidjson and the MySQL client headers/lib that the tool compiles against |
| `Tools/ExtractImages/` | C# (.NET 10, CUE4Parse) tool that reads the client paks and writes the item icons into `DarkSteelStudio/Images/Items` |
| `Tools/ClientLauncher/` | Clean C++ rebuild of the client's 168 KB launcher `ProjectDS.exe` (Epic's BootstrapPackagedGame stub), rewritten from its decompilation. Adds default arguments such as `-GameServer=127.0.0.1:31101` (overridable with a `ClientLauncher.ini`) so the client starts without a `.bat`. Build with `build.bat`; its `README.md` has the details and an example ini |
| `Tools/ProtoGet/` | Extracts the `.proto` definitions from `ProjectDS.exe` (`protoget_full.py` regenerates `Server/Protos/Global`) |
| `Tools/ProjectDS.usmap` | Unreal mappings file for reading the cooked assets |

**DarkSteel Studio** (`Tools/DarkSteelStudio`, folders are set on its Settings page and saved relative to the tool, so a checkout on another drive works):

- **Servers** - start, stop and restart Maestro, the Gateway and the Game Server (`Server/Bin/<project>/<project>.exe`), hidden or in their own console window, with status and a log tail. *Open Settings* edits the shared `Server/Bin/Config/settings.json`.
- **Client** - launch the Mir 5 client with a chosen server IP, port and resolution, and create or update the client's `Engine.ini` (TLS switch and the SSL certificate path).
- **Game Data** - browse the 987 items from `Server/Bin/Data` with their English names, icons and every field, and copy the `item <id>` GM command.
- **Run Script / Database** - SQL access to the configured schema (default `ds_game`).
- **Settings** - server folder, images folder, database connection.

**ExtractImages** needs the client AES key (the `Client AES` line near the top of this README) in the `MIR5_AES_KEY` environment variable; its own README gives the exact command.

---

## Other projects

<div align="center">
  <img src="https://www.lomcn.net/forum/data/assets/logo/favicon2019_Xf.png" width="32" alt="LOMCN">
</div>

<table align="center" width="100%">

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://github.com/JevLOMCN/mir1/">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir1.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 1</b> •
      <a href="https://github.com/JevLOMCN/mir1/">Project</a> •
      <a href="https://github.com/Suprcode/Carbon.Database">Database</a><br>
      Remake of ActozSoft's 1997 <i>The Legend Of Mir 1</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://github.com/Suprcode/Crystal">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir2.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 2</b> •
      <a href="https://github.com/Suprcode/Crystal">Project</a> •
      <a href="https://github.com/Suprcode/Crystal.Database">Database</a> •
      <a href="https://github.com/Suprcode/Crystal.MapEditor">Map Editor</a><br>
      Remake of ActozSoft / Wemade Entertainment's 1999 <i>The Legend Of Mir 2</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://github.com/Suprcode/Zircon">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir3.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 3</b> •
      <a href="https://github.com/Suprcode/Zircon">Project</a> •
      <a href="https://mirfiles.com/resources/mir3/zircon/Database.7z">Database</a> •
      <a href="https://www.lomcn.net/forum/threads/map-editor.109317/">Map Editor</a><br>
      Remake of Wemade Entertainment's 2003 <i>The Legend Of Mir 3</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://www.lomcn.net/forum/forums/woool-development-project-onyx.857/">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/woool.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>WoOOL</b> •
      <a href="https://www.lomcn.net/forum/forums/woool-development-project-onyx.857/">Project</a> •
      <a href="https://www.lomcn.net/forum/threads/nmp-viewer-editor.114580">Map Editor</a><br>
      Remake of Shanda Games' (Shengqu Games) 2003 <i>The World Of Legend</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://github.com/mir-ethernity/mir-eternal">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir3d.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 3D</b> •
      <a href="https://github.com/JevLOMCN/CQYH">Project</a><br> •
      Remake of Shanda Games' 2016 <i>Legend Eternal</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://github.com/JevLOMCN/mir4">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir4.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 4</b> •
      <a href="https://github.com/JevLOMCN/mir4">Project</a><br>
      Remake of Wemade Entertainment's 2021 <i>Mir 4</i>
    </td>
  </tr>

  <tr>
    <td width="48" align="center" valign="top">
      <a href="https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%205/Leaks/">
        <img src="https://raw.githubusercontent.com/JevLOMCN/mir4/main/Tools/icons/mir5.png" width="32" height="32">
      </a>
    </td>
    <td>
      <b>Mir 5</b> •
      <a href="https://github.com/JevLOMCN/DarkSteel">Project</a> •
      <a href="https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%205/Leaks/">Leaked Files</a> •
      <a href="https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%205/Leaks/Mir5%20Alpha%202.mkv">Gameplay Video (24m)</a><br>
      Remake of Wemade Entertainment's unreleased <i>Mir 5</i>
    </td>
  </tr>

</table>
