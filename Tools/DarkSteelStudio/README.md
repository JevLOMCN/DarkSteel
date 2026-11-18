# DarkSteel Studio

Internal desktop tool for managing the Mir 5 (DarkSteel) private server from one place.
It started as the Mir 4 server tool and is being reworked section by section.

Status of the sections:

| Section | State |
| --- | --- |
| Game Data | **Mir 5, Items only** (see below) |
| Client | **Mir 5**: launches the client, edits the IP / resolution and manages `Engine.ini` (see below) |
| Settings (folders, DB, UI path), Run Script, Database | Work against whatever schema is configured (default `ds_game` / `ds_account`; **never `mm_*`**) |
| Servers | **Mir 5**: Maestro, Gateway and the Game Server, started from `Server\Bin\<Project>\<Project>.exe`. Open Internal (hidden) / Open External (own console); status, log tail and the shared `Bin\Config\settings.json` editor |
| Accounts, Characters, Items and Mail | Mir 4 stored-procedure based; removed from the sidebar until they are ported (the XAML pages and `PlayerAdmin` code are still in the project) |

## Stack

- C++/CLI (`/clr`) on .NET Framework 4.8, v143 toolset, x64. Same conventions
  as `Code/Tools/Mir4PakTool`.
- WPF for the UI. A `.vcxproj` cannot compile XAML, so every `.xaml` file is
  loaded at runtime with `XamlReader.Load` from the `Xaml` folder next to the
  executable. The post-build step copies that folder beside the exe.
- Settings persist to `DarkSteelStudio.config.json` next to the exe
  (`ToolConfig.h/.cpp` native JSON via rapidjson, `StudioSettings.h` managed
  wrapper).

## Build

Open `DarkSteelStudio.sln` in Visual Studio 2022 (with the C++/CLI workload), pick `Debug | x64` or `Release | x64`, build.
Command line: `MSBuild DarkSteelStudio.vcxproj /p:Configuration=Debug /p:Platform=x64` (no `/m`; a full `/t:Rebuild` is needed after header changes).
The output is `x64\<Configuration>\DarkSteelStudio.exe` with the `Xaml` folder, the config file and `libmysql.dll` beside it.
rapidjson and the MySQL client headers/lib live in `external` inside this folder (copied from the Mir 4 repo); the item icons are in `Images\Items`.

## Layout

| File | Purpose |
| --- | --- |
| `Program.cpp` | STA entry point, creates the WPF `Application` and runs the main window |
| `MainWindow.h/.cpp` | Loads the theme and shell XAML, wires navigation, settings and the pages |
| `StudioSettings.h` | Managed settings object, marshals to/from the native `ToolConfig` |
| `ToolConfig.h/.cpp` | Plain C++17 JSON config load/save |
| `Xaml/Theme.xaml` | Dark theme resource dictionary (brushes and styles), merged into `Application.Resources` first |
| `Xaml/MainWindow.xaml` | Shell: sidebar navigation, header bar, content host, status bar |
| `Xaml/Pages/*.xaml` | One `UserControl` per section |

## Game Data section (Mir 5 items)

`Xaml/Pages/GameData.xaml` + `ItemBrowser.h/.cpp`. Reads the server's data folder directly (the client DataTable export,
unmodified, the same files the server loads):

| What | File |
| --- | --- |
| Items (987) | `Server\Bin\Data\Common\ItemBase.json` |
| Names and descriptions | `Server\Bin\Data\String\Eng\StringItem_Eng.json` (`ItemBase.ID_Name.ID` / `ID_Explain.ID` -> `Text`) |
| Icons | `DarkSteelStudio\Images\Items\<ID_Icon>.png` (written by `Tools\ExtractImages`; 331 of 333 icons exist) |

**Folders are chosen on the Settings page** (Server folder = the one containing `Bin\Data`, Images folder = the `Images` folder in this directory, each with a
Browse button; Save re-reads them). They are saved in `DarkSteelStudio.config.json` **relative to the exe folder** when they are on the same
drive (for example `..\..\..\..\Server`), so a checkout elsewhere or another dev's layout works; only a folder on a different drive is stored
absolute. If a box is empty (or wrong) the tool walks up from the exe / working directory looking for `Server\Bin\Data` and `Images\Items`.
Re-exporting the tables after a client patch needs no conversion step.

- List: icon, id, name, type, item type, grade, required level. The search box matches name, id or item type; the two
  combo boxes filter by main type and grade. **Reload** re-reads the files.
- Detail panel: icon, name, description, and every `ItemBase` column as Field / Value / Text (`ID_*` columns show the resolved string,
  enum prefixes like `EDS_GradeType::` are stripped).
- **Copy GM command** puts `item <id> 1` on the clipboard for the in-game chat (`Mir5Gm`, account authority 21+).
- The parsing uses `System.Web.Extensions` `JavaScriptSerializer` (987 items + 2,056 strings load in about 0.2 s).

The old Mir 4 Game Data code (`GameDataStore`, `GameDataBridge`, `CodexCatalog`, `StageMap*`, `GameDataEnums`) is still compiled
because the character/stage windows use it, but nothing in the sidebar reaches it any more.
## Client page (launcher)

The **Client** entry in the sidebar (right after Servers; `Xaml/Pages/Client.xaml`, logic in `ClientPanel.h/.cpp`). Starts the Mir 5 client from the tool, the same command `Mir5_Local.bat` uses:

`<Client>\ProjectDS\Binaries\Win64\ProjectDS.exe -game -resx=<w> -resy=<h> [-windowed] -GameServer=<host>:<port> [extra args]`

| Setting | Notes |
| --- | --- |
| Client folder | The client `Windows` folder (Browse...). Saved relative to the tool when on the same drive, like the server/images folders |
| Game server IP / port | `-GameServer=` (default `127.0.0.1:31101`) |
| Width / height / windowed | `-resx` / `-resy` / `-windowed` |
| Extra arguments | Appended as typed, e.g. `-AIPlay` or `-log` |
| SSL certificate (.pem) | Written to `Engine.ini` `[SSL] DebuggingCertificatePath`. Empty = `<Server>\Config\dev-cert.pem`. Saved relative; Engine.ini itself gets the absolute path with forward slashes |
| Skip TLS verification | `[HTTP.Curl] bVerifyPeer=false` |
| Create or refresh Engine.ini on launch | On by default |

The **Command** box shows the exact command line as you edit. **Launch client** uses what is on screen (the page's own **Save** button keeps it for next time) and runs from
the client folder. **Write Engine.ini** creates `ProjectDS\Saved\Config\Windows\Engine.ini` or patches only the two keys above (other lines are kept) and
sets it read-only, because the client deletes it otherwise. The status line says whether the existing file is missing, matches or differs. **Open client
logs** opens `ProjectDS\Saved\Logs`.

## Rules for the XAML

Because the files are parsed at runtime there is no code-behind:

- No `x:Class`, no `Click="..."` style event attributes. Give controls an
  `x:Name` and wire events in `MainWindow.cpp` with `FindName`.
- `{StaticResource}` keys must come from `Theme.xaml`. Every page starts
  with a `UserControl.Resources` block that merges `../Theme.xaml` (copy it
  from any existing page). That is what lets the VS XAML designer resolve
  the keys instead of reporting XDG-0001; at runtime the loader sets
  `ParserContext.BaseUri` to the file so the relative `Source` resolves.
- Attributes on a root element that reference the theme (like the Window's
  `Background`) must use `{DynamicResource}`, since they are applied before
  the element's own resources are parsed.
- Press **F5** (or the "Reload UI" button) in the running app to reload the
  theme and the current page from disk without rebuilding.

## Adding a section

1. Create `Xaml/Pages/MyFeature.xaml` with a `UserControl` root.
2. Add `<ListBoxItem Tag="MyFeature.xaml" Content="My Feature"/>` to `NavList`
   in `Xaml/MainWindow.xaml`.
3. Register the file in `DarkSteelStudio.vcxproj` (`<None Include=...>`) and the
   `.filters` file so it shows in Solution Explorer.
4. If the page needs logic, add a `PopulateMyFeaturePage(FrameworkElement^)`
   in `MainWindow.cpp` and call it from `NavigateTo` when the tag matches.

## Next steps

- MySQL access (reference a managed connector such as MySql.Data for .NET
  Framework and add a connection test to Settings).
- Server process control on the Servers page (start/stop/restart, PID, uptime)
  driven by `ServersPath`.
- Account, character, item and mail lookups backed by the game DB procs.
## Log file (crash diagnosis)

DarkSteel Studio writes `logs\DarkSteelStudio.log` next to the exe (or `%LOCALAPPDATA%\DarkSteelStudio\logs` when the exe
folder is read-only). Each run starts with a header (versions, OS, folders), then one line per step: page
navigation, every Game Data table read from disk (with timing), background builds. Unhandled .NET exceptions
are logged with a full stack trace; UI-thread errors also show a message box and the tool keeps running.
A native crash (access violation etc.) writes the exception code, address, module and stack to the log plus a
`DarkSteelStudio-crash-<time>.dmp` minidump. The last line before a crash shows where it died: a `BEGIN x` with no
`END x` means the process died inside `x`. Send the log (and any .dmp) when reporting a crash.

## Running on older servers

The tool is built with the v143 toolset. A machine with an old Visual C++ runtime (msvcp140.dll older than 14.40) crashed the first
time a std::mutex was locked, so the project defines _DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR. Installing the latest x64 Visual C++ Redistributable
(https://aka.ms/vs/17/release/vc_redist.x64.exe) on the server is still recommended.
