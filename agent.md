# Mir 5 (DarkSteel) – Agent Guide

**Goal: get the leaked Mir 5 client (`ProjectDS.exe`, UE 5.7.1) connected to the C# server in `Server/`.**
The server started as a port of the Mir 4 server and is being reworked to speak the Mir 5 protocol.
The Mir 4 code (the `MirMobile` packet library, the legacy game/world/guild handlers, the Postgres EF layer, the Atlas admin web) was **removed on 22 Oct 2026**; what is left is Mir 5 code. A few Mir 4 traces remain (the `legends.bat` file name, Portuguese log strings in `M5.Core/Utils/Logger.cs`). Old code is in git history (`git log -- Server/MirMobile`).

## Key locations

| What | Path |
|---|---|
| This repo (server + client decompile + DB + tools) | `E:\Mir 5 Git\mir5-private` |
| Playable client (Win64 Development build, `Client 31.12.25`) | `F:\Mir5\Client31.12.25\Windows` |
| Client export (FModel dump of the cooked game: `Config`, `Content`, `Plugins`, `AssetRegistry.bin`, `ProjectDS.uproject`) | `E:\FModel\Output\Exports\ProjectDS` |
| Mir 4 server source (reference, **C++ not C#**) | `G:\Mir4\mir4-private-main\mir4-private` |

Client folder extras: `F:\Mir5\Client31.12.25\mir5_server_db.sql` (same as `DB/mir5_server_db.sql`), `info.txt` (origin build: `DailyBuild260103`).
Client logs: `F:\Mir5\Client31.12.25\Windows\ProjectDS\Saved\Logs\ProjectDS.log`; crash dumps in `Saved\Crashes`.

## Repo layout (`E:\Mir 5 Git\mir5-private`)

- `Client/` – **decompiler output, reference only, not buildable.** Ghidra 12.1.4 pseudocode of `ProjectDS.exe` laid out like a UE project (`Client/ProjectDS.sln`).
  Real function/class/namespace/module names come from the PDB; locals are `lVar1`/`param_1`/`field_0x8`. ~201 functions are missing.
  Game code: `Client/ProjectDS/Client/Source/ProjectDS`. Protobuf `*.pb.cc` files keep real names. One `.cpp` per class; classless functions are in `_Free/Module.<Name>.N.cpp`.
- `Server/` – C# (.NET 10), `Server.sln`.
  - `M5.Core` shared lib: `Config` (settings.json), `Engine` (Data/Config folder lookup + `DataTables.Load`), `Providers/Data/DataTables.cs`, `Utils/Logger.cs`. Nothing else.
  - `M5.Gateway` the HTTP(S) API the client bootstraps against: `Program.cs`, `Controllers/Patcher/DevServerListController.cs` (server list + URLs) and `Controllers/Mir5/Mir5ApiController.cs` (login, front-end address, config).
  - `M5.Server` the Mir 5 game server: `Program.cs` + `Network/Mir5/*` (TCP on the game port, protocol, world join, skills, combat, GM). Plain .NET SDK, no web stack.
  - `M5.Database` MySQL access for the `ds_*` schemas only (`Mysql/DsDatabase`, `DsAccountRepository`, `DsConfigRepository`, `DsPlayerRepository`).
  - `M5.Maestro` a minimal host (health endpoint on port 2025). The Mir 4 admin controllers were removed; kept so the service and its port still exist. `M5.Protocol` compiles `Server/Protos/Global` to C# at build time.
  - `Protos/Global` – 200 `.proto` files extracted from the client (`client_msg*.proto`, `api_*.proto`, `components.proto`, `ds_*` table protos, `enum/`), compiled by `M5.Protocol`.
  - `Data/` – static game data as JSON (`Character`, `ClientTable`, `Common`, `Construction`, `Curve`, `String`, `Widget`) exported from client DataTables.
  - `Config/` – `settings.example.json` (copy to `Bin/Config/settings.json`) and `dev-cert.pem`.
- `DB/mir5_server_db.sql` – MySQL 8 schema, 81 tables / 7 schemas (`ds_account, ds_config, ds_game, ds_guild, ds_mail, ds_rank, ds_world`) generated from the client's `Sql*Table` protos. **Not yet run against MySQL.** See `DB/readme.txt` for assumptions. Static data stays in JSON, not the DB.
- `Tools/ProtoGet` – extracts `.proto`s from `ProjectDS.exe` (put the exe in that folder, `pip install protobuf`, run `GetProtos.bat`; `GetProtosC.bat` also emits `.protoc`). `Tools/ProjectDS.usmap` – UE mappings for reading cooked assets.
- `Tools/ExtractImages` – C# (CUE4Parse, .NET 10) tool that extracts the item icons from the paks into `Tools/DarkSteelStudio/Images/Items/<ID_Icon>.png` (`ItemBase.ID_Icon` -> `ResourceIcon` sprite -> atlas crop). Needs the AES key in env `MIR5_AES_KEY`; see its README.
- `Tools/ClientLauncher` – clean C++ rebuild (`Launcher.cpp`, `build.bat`) of the client's small launcher `ProjectDS.exe` (BootstrapPackagedGame), with the raw decompile kept beside it (`ProjectDS_launcher.c`). Adds default args (resource 203, `-GameServer=127.0.0.1:31101`, overridable via `ClientLauncher.ini`). Tested only against a stub game exe.
- `Tools/DarkSteelStudio` – WPF/C++/CLI server-management tool (was the Mir 4 "Topaz Studio"). Pages: Servers (start/stop Maestro, Gateway, Game Server), Client (launch the client, Engine.ini), Game Data (Mir 5 items from `Server/Bin/Data` + English strings + the extracted icons), Run Script, Database, Settings. Build with MSBuild (VS 2022), no `/m`; its README has the details. Never point it at `mm_*` schemas.

## Running the server

Needs .NET 10 SDK. From `Server/`:
- `dotnet build Server.sln -c Debug`
- `dev.bat` → `legends.bat dev`: `dotnet watch run` for Maestro, Gateway (as "Front Server") and M5.Server in Windows Terminal tabs.
- `start.bat`: builds, then starts Gateway index 0 (Global), Gateway index 1 (Regional), and M5.Server.
- `legends.bat db update|migrate|reset|menu` for EF migrations (run from `M5.Database`).
- Ports (from `Server/Bin/Config/settings.json`): Gateway API `AuthPort` (7000), game server `GamePort` (31101), Maestro 2025. The old internal server sockets (33001-33011) and the Gateway front socket (31000) no longer exist.
  `Server/Config/settings.example.json` shows the keys Mir 5 reads (`world`, `IPAddress`, `AuthPort`, `GamePort`, `Client.Version`, `MySql`); other keys in the file are ignored.
- Note: `settings.json` may contain secrets (DB password); `Server/Bin/Config` is gitignored. Never copy secrets into docs, commits or chat.

## Running the client

`F:\Mir5\Client31.12.25\Windows` has `Mir5_UserControl.bat` / `Mir5_AIControl.bat`:
```
ProjectDS\Binaries\Win64\ProjectDS.exe -game -resx=1280 -resy=720 -windowed -GameServer=<ip>:<port> [-AIServer=<ip>:<port> | -AIPlay]
```
Both bats currently point at Wemade's dev servers (`-GameServer=20.41.116.92:32101`). To point at ours use `-GameServer=127.0.0.1:<port>`.
The build ships `UE4SS.dll` and `dwmapi.dll` (UE4SS injection) beside the exe, plus `ProjectDS.pdb` (2.8 GB, matches the exe) – useful for debuggers/Frida/Ghidra.
Content is in IoStore: `Content\Paks\ProjectDS-Windows.{utoc,ucas,pak}`.

## Protocol / crypto notes

- Client packets are Protobuf. Message definitions are in `Server/Protos/Global`; opcodes/enums are in `enum/` and `_db_enum.proto`.
- **Client AES key** (from the README): `0xC51B693F6132AD3E5F298B3E0000803F0000803F9432B63D99A6933D0000803F`
- Server crypto code: `M5.Core/Network/PacketCryptoProfile.cs`, `M5.Server/Network/PacketCryptor.cs`.
- Mir 4 equivalent: the Gateway encrypts/decrypts all client traffic and internal servers talk plaintext.

## Using the Mir 4 source (`G:\Mir4\mir4-private-main\mir4-private`)

C++ (VS solution `Code/Workspace/Solutions/All/SLN_MIR4_ALL.sln`), not C#. Use it as a behavioural reference when a Mir 5 packet has a Mir 4 ancestor.
- Servers: Auth, Front (HTTP login data), Gateway (client connection, crypto), World, Game, Chatting, Conquer. Stores: MySQL, Couchbase, Redis.
- `Code/Servers/*` per-server source; `Code/Libraries/Common/CS_SHARE/Proto` Mir 4 messages; opcodes in `info_protocol.proto`.
- `Bin/Servers/Data` JSON tables, `Bin/DB/Latest DB.sql`, `Bin/Tools/*` (ProtoGet, Sniffer, Pack Tool).
- Many design docs in the root (`GAMESERVER_ACTIVE_SYSTEMS.md`, `PROTOCOL_COMPARISON_MIR4134.md`, `GATEWAY_PERFORMANCE_ANALYSIS.md`, `CONQUER_SERVER_DESIGN.md`, ...).
- Mir 5 is UE 5.7.1 vs Mir 4's UE 4.24.3 and uses SQL-Server-style tables with `ds_*` schemas, so expect protocol, login flow and DB structure to differ; verify against `Client/` before copying.

## Working rules

- Treat `Client/` as the source of truth for packet shapes, login flow and data formats; grep it (e.g. by message or class name) rather than guessing.
- The decompile is not buildable; never try to compile it.
- Don't commit large binaries, client files, logs or secrets. The client and export live outside the repo.
- Bash tool is broken in this environment (fork errors); use PowerShell for shell work.
- `dotnet` fails with a workload-manifest error here; set `MSBuildEnableWorkloadResolver=false` before dotnet commands.

## Status / next steps

- [x] DB imported (MySQL 5.7.44 locally, `dev`/`1111` on 127.0.0.1:3306; files `DB/mir5_server_db_mysql57.sql` and `_mysql8.sql`). Ignore the `mm_*` schemas (Mir 4). `DB/seed_dev.sql` seeds `ds_config` server lists (state/type values unverified) and a `dev` player.
- [x] MySQL access layer in `M5.Database/Mysql` (`DsDatabase`, `DsAccountRepository`, `DsConfigRepository`; config section `MySql` in settings.json, `MYSQL_PASSWORD` env overrides). The old Postgres EF contexts were removed.
- [ ] Wire the new repos into the Mir 5 HTTP front end: `api_session.LoginAndRegisterPlayer` and `api_config.ServerList` (protos in `Server/Protos/Global`).
- [ ] Work out the Mir 5 connection sequence from `Client/` (login → server list → gateway → game) and capture what the client sends when launched with `-GameServer=127.0.0.1:<port>`.
- [ ] Align `M5.Gateway`/`M5.Server` handlers and crypto to the Mir 5 protos.
- [ ] Record findings here as they are confirmed (ports, handshake order, opcodes, crypto details).

## Leaked official server build (`F:\Mir5\Server 19.01.26\Server`)

Contains the real `game_server.exe` and `front_end_server.exe` (Rust, 19.01.26), the game data folders (`CellDataMap`, `NavMesh`, `HeightMap`, `VoxelDatas`...) and `Json/`.
**It holds Azure keys (Service Bus, Event Hubs). Never copy them into the repo or docs.**
- `start_server.bat` (game server env): `LISTEN=0.0.0.0:31101`, `GRPC_LISTEN=0.0.0.0:31201`, `DATA_TABLE_URL=http://127.0.0.1:7000` (front end / config API), `GAME_SERVER_INDEX=1`, `REGION_INDEX=1`, `SERVER_TYPE=1`, `TIMEZONE_INDEX=1`.
- Client `-GameServer=ip:port` is the game server's own address (original bats used `20.41.116.92:32101`, the `ai-gym` entry in `Json/DevServerList.json`). `DevServerList.json` has a `localhost` entry (region 2010, FrontEnd 10, GameServer 20011). The client may fetch the dev server list from `mir5-master-config.azurewebsites.net`; redirecting that is still to do.
- Our local config follows these ports: `Server/Bin/Config/settings.json` (gitignored; GamePort 31101, AuthPort 7000, MySql section). `Config.Load()` finds it by walking up from the running folder (so `Server/Bin/Config`) or via `SETTINGS_JSON_PATH`; `M5.Server/settings.json` is not read.
- Both servers log the MySQL status at startup (`DsDatabase.VerifyAsync`). The client bats in `F:\Mir5\Client31.12.25\Windows` now point at `127.0.0.1:31101` (originals kept as `*.bat.orig`); the AI bat's `-AIServer` is `127.0.0.1:34000` and nothing listens there.

## Server startup state (22 Oct 2026)

All three services (Maestro, Gateway, M5.Server) build into `Server/Bin/<Project>/` (`dev.bat`, `start.bat` or the DarkSteel Studio Servers page). Listeners: Gateway API 7000 (+ HTTPS 443 when `Bin/Config/dev-cert.pfx` exists), M5.Server game port 31101, Maestro 2025. MySQL (`ds_*`) is the only database; **Redis/Memurai and Postgres are no longer used.**
- `Engine.InitializeAsync` only runs `DataTables.Load()`. The Mir 4 CSV loaders, providers and startup audits were deleted with MirMobile.
- Batch files: `legends.bat dev|build`, `start.bat`, `dev.bat` (all English).
- Client transport (from the decompile): raw TCP via `FTcpSocketBuilder` in `UDS_NetworkManager::Connect`; protobuf `ClientMessages`/`ServerMessages` with a oneof case and a 1-byte type flag in `SendPacketInternal` (value `'d'` for oneof 0x1869e, else `'\f'`). Byte framing and encryption not yet read. `UDS_PacketProcessor` and `UDS_SendPacketManager` are the next files to read. Searching the whole decompile with Grep times out; target a single file.
- Client: DLSS prints a handled ensure ("deprecated value") but runs. Not tried against our server yet.

## Client bootstrap chain (22 Oct 2026)

Found by reading the decompile and the FModel export; this is what the client does before any game TCP connection.
- `-AIPlay` / `-AIServer` run the client in AI mode with **no UI** (black screen). For a visible UI use `Mir5_Local.bat` (no AI flags) in the client folder.
- `UDS_SyncServer::GetServerList_Http`: `bUseHttp=true` (`DefaultGame.ini [/Script/ProjectDS.DS_SyncServer]`). GET `DevServerListUrl&data_stage=Master`, where the URL is in the pak table `Datas/Common/DataStageValue` = `https://mir5-master-config.azurewebsites.net/api/get_dev_server_list?` (host is dead). Response: `{"data":[{ID,RegionIndex,Urls,ServerAddr,AiAddr,ServerName,FrontEndServerIndex,GameServerIndex}]}` (same shape as `Datas/Common/DevServerList.json`, which already has a `localhost` row, ID 2011).
- Each row's `Urls` = `.../api/urls?server_name=<name>` (also Azure). Response is a JSON `UrlsResponse` (`urls.pb.cc`, missing from extracted protos): one URL string per API: `refresh_jwt_token, front_end_server_addr_request, get_server_list_info_request, login_and_register_player_request, players_by_name, players_by_uids, search_nickname, mail_list, mail_read, game_option, update_game_option, minimap_marker, update_minimap_marker, get_breach` and the guild calls.
- Then: `api_session.LoginAndRegisterPlayer` -> session uid/world/jwt, `api_config.ServerList` / `api_system.GetFrontEndServerAddr`, then TCP. `DefaultGame.ini [DS_Urls] FrontEndPort=32101` (the original bats used `:32101`), so the client's TCP target may be the front end on 32101, not the game server on 31101. Unconfirmed.
- Transport: raw TCP (`FTcpSocketBuilder`), protobuf `ClientMessages`, 1-byte type flag. Framing/encryption still unread.
- Our side: `M5.Gateway/Controllers/Patcher/DevServerListController.cs` serves `GET /api/get_dev_server_list` and `GET /api/urls`; the Gateway also listens on HTTPS 443 when `Server/Bin/Config/dev-cert.pfx` exists (self-signed cert for `mir5-master-config.azurewebsites.net`, gitignored, not installed in any trust store; password `dev`). To use it the hosts file must map that name to 127.0.0.1 (admin): `127.0.0.1 mir5-master-config.azurewebsites.net`. Whether the client's curl accepts the cert (it logs `bVerifyPeer = true`) is untested; on failure look for `libcurl error: 60` in the client log.
- The auto-mode classifier blocked an earlier attempt to do the hosts/certificate setup in one command; the user chose to run the hosts edit themselves.

## Build layout and data loading (22 Oct 2026)

- **Everything builds into `Server/Bin/<Project>/`** (`Server/Directory.Build.props`: `OutputPath`, no TFM subfolder). Run services from there (`Server/Bin/M5.Server/M5.Server.exe`) or via `dev.bat`/`dotnet run`; both work.
- **`Server/Bin/Data/`** (tracked in git) holds all game data as JSON **in the client's FModel DataTable export format, unmodified** (`[{ "Type":"DataTable","Name":..,"Properties":{"RowStruct":..},"Rows":{ "<id>": {...} } }]`). To update after a client patch: re-export the DataTables and overwrite the files; no conversion step. `.gitignore` re-includes `Server/Bin/Data` (the global `**/bin` rule would otherwise hide it).
- **`Server/Bin/Config/`** (not tracked): `settings.json`, `dev-cert.pfx` (password `dev`), `dev-cert.pem`. A copy of `dev-cert.pem` is also kept at `Server/Config/dev-cert.pem` because the client's `Saved/Config/Windows/Engine.ini` (`[SSL] DebuggingCertificatePath=`) points there.
- Services find `Data` and `Config` by walking up from their own folder and the working directory (`Engine.DATA_PATH`, `Engine.FindWorkspaceFile`), so the working directory does not matter.
- **`M5.Core/Providers/Data/DataTables.cs`** (`M5.Core.Tables`): `DataTables.Load()` runs at startup (`Engine.InitializeAsync`) and indexes every `*.json` under Data: 731 tables / 75,256 rows / 770 files in ~0.1 s. `DataTables.Get("ItemBase")` (unique table names) or `DataTables.Get("Common/NpcSpawn/Dungeon/1")` (path, for the 76 names shared by several files, e.g. per-map spawn tables). Rows stay raw JSON: `table.Get<T>(id)`, `table.TryGetRow(id, out JsonElement)`, `table.All<T>()`. 39 non-table exports (character workspaces) are skipped.
- The Gateway accepts JWT keys as PEM, base64-of-PEM (settings files) or base64-of-DER (launchSettings env vars). Running the exe directly (no launchSettings) previously crashed on the settings.json format.
- ImageSharp 4.1.3 (from the NuGet update) refuses **Release** builds without a Six Labors licence key; Debug builds are fine.

## Client TLS / Engine.ini (22 Oct 2026)

Client log showed `libcurl error: 60 ... self signed certificate` for `GetServerList_Http` (hosts entry and Gateway 443 were fine). Fix attempted: `<client>\Windows\ProjectDS\Saved\Config\Windows\Engine.ini` with `[HTTP.Curl] bVerifyPeer=false` and `[SSL] DebuggingCertificatePath=`; the file had vanished (client likely deletes it), so it is recreated read-only. `[HTTP.Curl] bVerifyPeer` key name is unverified. Fallback: import `Server/Config/dev-cert.pem` into LocalMachine\Root (admin). **Confirmed working (22 Oct 2026):** client fetches the server list and URLs from our Gateway. Next failure: `UDS_LoginCore::Response_LoginAndRegisterPlayer_Failed` (RegisterPlayer Failure) -> implement `api_session.LoginAndRegisterPlayer` / `api_config.ServerList`.

## Hard rules (read first)

- **NEVER touch the `mm_*` schemas/tables in MySQL.** They are leftover Mir 4 data. Do not alter, drop, migrate, seed or query them. All Mir 5 work goes in the `ds_*` schemas (`ds_account, ds_config, ds_game, ds_guild, ds_mail, ds_rank, ds_world`).
- **The Bash tool does not work here (fork errors).** Use the Grep/Glob/Read tools and PowerShell instead.
- `ds_*` schema changes are allowed when the server needs them, but keep `DB/mir5_server_db*.sql` in sync with any change.
## Login + game connection flow (confirmed 22 Oct 2026)

Working end to end through character creation. Details read from the decompile (`Client/_Modules/DS_Login`) and verified against client/server logs.
- **Use Login then Access.** The "straight to character creation" shortcut button skips login and `UDS_NetworkManager::Connect`, so create-character cannot send (`SendPacketInternal: Not connected`).
- **HTTP (Gateway `Controllers/Mir5/Mir5ApiController.cs`, plain HTTP 7000):** bodies are protobuf-as-JSON, replies too. `/api/urls` must give every URL a trailing `?` (the client appends `&k=v` for GET calls). `login_and_register_player_request` -> `get_server_list_info_request` -> `front_end_server_addr_request` (returns 127.0.0.1:31101) -> GETs `game_option`, `minimap_marker`, `get_breach` (plain messages, no `response_base`).
- **ErrorCode (extracted to `Server/Protos/Global/ErrorCode.proto`): Failure=0, Success=1** (not 0!), NotExistNickname=31, InvalidNickname=9003, CreateCharacterInvalidData=9021, DuplicatedNickname=9022. `UniqueId.value` is `bytes` (base64 in JSON). A world with non-zero `game_server_state` shows "under maintenance": we send 0.
- **TCP (`M5.Server/Network/Mir5/Mir5GameServer.cs`, port 31101):** frame = `[int32 LE len = payload+1][1 type byte][protobuf]`, same both ways, no encryption. Client types: 'Y'/'e' = ClientMessagesTwoway, others = ClientMessages ('d' for heartbeat 99998, 0x0C normal). Server: 'b' = ServerMessagesTwoway, anything else ServerMessages. The message id is the oneof field number; twoway replies must reuse the request's number and carry `error_code` (field 100000000) = Success, else the client treats them as errors.
- **Join without a character:** reply to JoinGameServerReq (72) with wrapper `error_code = NotExistNickname (31)` and the client opens character creation. CreateCharacterReq (321) -> `ds_account.nickname`, `ds_game.player/character/g_player/...`. `ds_game.character` (added by us, `DB/migrations/20261022_ds_game_character.sql`) stores weapon + appearance; `character` is a reserved word, always quote it.
- **Protos**: files without a `package` line were missed by `Tools/ProtoGet` (ErrorCode, _api_common, _unique_id, _options, _vector...). Find them by searching the exe for `\x0a<len>Name.proto` and parsing with `google.protobuf.descriptor_pb2` (needs a field-extent walk, fields 1-12 only).
- (superseded by the section below: JoinMap, data sets, equipment, skills, spawns are now implemented)
- The user starts/stops the servers (not Claude). Rebuild to a scratch folder to check compilation: `dotnet build <csproj> -c Debug -p:OutputPath=<scratch>\`.
## Typed protocol, world join, GM (22 Oct 2026, evening)

- **`Server/M5.Protocol`** compiles every `.proto` in `Server/Protos/Global` to C# at build time (protoc from the `Google.Protobuf.Tools` package, output `obj/Generated`). Namespaces are `MirProto.*` (`MirProto.ServerMsg`, `.ClientMsg`, `.ClientMsgTwoway`, `.ServerMsgTwoway`, `.DsGame`, `.Messages`, `.Components`; package-less files such as `ErrorCode`, `Vector`, `StatusType`, `MoneyType` are in `MirProto`). They must not live in the global namespace: they would shadow the legacy Mir 4 types (`QuestType`, ...). The Mir 5 game server (`M5.Server/Network/Mir5`) uses these classes; no hand encoding.
- **The protos in `Server/Protos/Global` were regenerated** with `Tools/ProtoGet/protoget_full.py` because `protod3.py` missed all files without a `package` line and truncated big ones (client_msg 28 of 98 messages, server_msg 213 of 273, client_msg_twoway, api_config, api_guild). The script is reproducible (re-running it gives byte-identical files). After a client patch: run it, then rebuild. `.proto.protoc` files are stale and unused.
- **Join sequence implemented** (`Mir5GameServer`, `Mir5World`): on JoinContinentReq the server sends JoinMapRes (entity pair + valid zone/district from `Common/ZoneIsland`/`ZoneDistrict`), UpdateMyInfoRes with DbWorkItems (CharacterLevel first, Position, GPlayer custom_info JSON, PlayerGrade, Money, Status, Skin, CombatPower, Pvp, ItemStackable, HaloPoint, ItemEquipment+Equipment, WeaponSkillSlot+LearnedSkill, MainQuest, PlayerIcon(+Equip), ReturnHome), MyStatusRes, MyCurrentStatusRes, MyCharacterInfoResComplete (client then loads the level). WeaponSkillSlot.weapon_base_id is the weapon type; the client initialises all skill data from `Common/WeaponTypeBase`. Char id == weapon type (CharacterCreate rows are keyed by it).
- **New character** (`Mir5World.GetStartKit/GetStartLocation`, `DsPlayerRepository.CreateCharacterAsync`): start position from `CharacterCreate.ID_InitWarpLocation` -> `WarpLocation`; items/equipment/quest/halo/icon/return home from the same CharacterCreate row. **Equipment slots (corrected):** `ds_game.equipment` / EquipRequest carry `slot_type` = `EDS_SlotType` (EquipBattle = **11**, EquipTool = 21, MountGear = 51) and `slot_index` = the `SlotNumber` of `Common/SlotBase` (battle slots: 1 Weapon, 2 Chest, 3 Pants, 4 Gloves, 5 Shoes, 6 Helmet, 7-9 Accessory1-3, 10 Emblem). The client key is `slot_type*1000+slot_index` (11001 = weapon). `Mir5World.DescribeEquipItem` reads the item-type -> slot mapping from `Common/SlotBase`. UE enum member names are stored in declaration order in the exe but the numeric values can be explicit (EDS_SlotType, EDS_EquipSlotType = SlotBase row keys), so check the data tables for values.
- **Other game packets handled:** Ping, Heartbeat (99998, type 'd'), TimeSync, NetSync (position remembered and saved every 30 s / on logout), JoinMapReadyComplete (triggers NPC spawns), Chat (broadcast ChatRes 21000), Logout, Weather. Unhandled twoway requests get an empty Success reply built by reflection so the client never waits forever; unhandled plain messages are logged once per type.
- **NPC spawns** (`Mir5Spawns`): `Common/NpcSpawn/Island/<id>` spawn points within 20000 units are sent as SpawnNpcResponse (12) and removed (RemoveEntitiesResponse 5) beyond 24000. Static: no AI, wandering, respawn, real stats (hp is a placeholder 500) yet.
- **Account authority:** `ds_account.player.authority` is the client's `AccountAuthority` (0 None, 11 Normal, 21 Gm, 22 GmInvisible (hides the HUD), 31 Official, 41 Premium, 51 Parametrix). The client reads it from the `front_end_server_addr_request` reply (`account_authority`), so the Gateway returns the DB value. Default is 11; the `dev` and `JevLOMCN` accounts are 21. Migration `DB/migrations/20261022_account_authority.sql`. Mir 4 used account_grade 2 for the same purpose.
- **GM commands** (`Mir5Gm.cs`, Gm+ only): the client's `DS.Chat <cmd>` arrives as a ChatRequest; the server handles `help, warplocation <id> (also warplocation2), jumpisland1/2, gotopos x y [z], getpos, charlevel, charexp, playergrade, moneymake/money_set [type] n, immortal/mortal`. The full official list is `Common/CheatKeyBase.json`. Teleport uses GameServerChangeResponse (untested for island changes).
- **Handy lookups:** `ErrorCode.proto` (Success=1!), `MoneyType` (Copper 1, Gold 11, NotTradeGold 12, Mileage 51), `QuestStateType` (Progress 0, Complete 1, Failure 2, Rewarded 3), `InventoryType` (PlayerNormal 1, PlayerQuest 2, PlayerWareHouse 3, Mount 6).
- **Still to do:** NPC/monster AI, stats and combat, skill use (CastSkill), item moves/equip/use, quest accept/complete logic, shops, party/guild, real stat tables (Status* are placeholders), day/night/weather, mounts, mail, logout persistence beyond position.
- The user starts and stops the servers; check compilation with `dotnet build <csproj> -c Debug -p:OutputPath=<scratch>\`. The first build of `M5.Protocol` runs protoc over ~200 files.
## Combat v1, equipment, GM chat (22 Oct 2026, night)

- **Equip:** `EquipRequest` (client_msg 700) -> `EquipResponse` (700); `DsPlayerRepository.EquipAsync` validates the item against its slot (`Mir5World.DescribeEquipItem`) and rewrites `ds_game.equipment`. The client keys equipment slots as `slot_type * 1000 + slot_index`. GM `item <id> <qty> <tradeable qty>` (the official cheat-panel syntax) or `additem <id> [n]` puts items in the bag.
- **Chat -> GM commands:** the chat box sends everything that is not a channel command (`/w`, `/p`...) to the server as `ChatRequest`, with or without a leading `/`. `Mir5Gm` strips `/` and `ds.chat`, runs the command for Gm+ accounts, and answers "not implemented yet" for the other official commands (`Common/CheatKeyBase`, plus getchar/teleport/suicide/buff/party seen in `E:\FModel\...\EditorOnly\Cheat`).
- **Stats** (`Mir5Stats`): player = `Common/CharacterLevel` (Group 1, AscendLevel 0) row for the level: Hp 4096, Mp 614, PhysicalAttack 200, PhysicalDefense 50 at level 1, `ReqCharExp` per level. NPC = `Common/NpcStatusLevel[level]` scaled by `Common/NpcStatusGrade[grade]` percentages (grade from `NpcBattle.ID_NpcStatusGrade`). MyStatusRes now lists every stat of the level row.
- **Skills** (`Mir5Skills`): `Skill` -> `ID_SkillActLevelGroup` -> `SkillActLevel` (row of that group at SkillLevel 1: CoolTime, `ID_AttackLink`, `LinkStartTime`) -> `SkillAttack` (ImpactType SelfCircle/SelfDirect/TargetCircle/Target, AttackDistanceMax, AttackAngle, AttackWidth, TargetValue = max targets, MulDamage[0]/1e6 = damage multiplier, ImpactTime = hit delays).
- **Combat v1** (`Mir5Combat`): CastSkillRequest (7) -> CastSkillResponse (18) to the caster and CastSkillTarget{Entity,Position}Response (14/15) to other players; each SkillAttack hit is resolved after its impact delay against live NPCs (`Mir5Spawns.Npc`, shared state): damage = PhysicalAttack * MulDamage * 0.9-1.1 (10% crit x1.5), reduced by 100/(100+defense). Results go out as GroupDamageEventResponse (6) + CurrentStatusResponse (57, npc hp), death as DiedResponse (50, EntityDied), then exp (`ExpChangeResponse` 36, level up `LevelChangeResponse` 68 + DbWorkItem CharacterLevel + new MyStatus), body removal after `BodyClearTime`, respawn after the spawn row's `RespawnTimeMin/Max`. `Mir5GameServer.ExpRate` (default 10) multiplies `NpcBattle.CharExp`. Only `FactionType::BattleNpc` NPCs can be attacked.
- **Monster AI v1 + player health** (`Mir5Ai.cs`, 23 Oct 2026, untested against the client): 200 ms loop over monsters that some player sees. Idle -> aggro on a player within `NpcBattle.RecognizeRadius` (or whoever hit it) -> Chase at `NpcBase.RunSpeed` -> attack with a weighted `ID_NormalAttack` skill -> Return/heal when the target is gone or beyond `BattleActivityRange` of the spawn. The client moves NPCs from `NetSyncResponse` (position + `destination` + `move_mode` Run, resent every 0.6 s; Idle/Stop to halt) and plays the attack from `CastSkillTargetEntityResponse` (caster = npc entity); damage is a server `GroupDamageEventResponse` (normal-attack skills have empty `MulDamage` = 100%). Player health is `Conn.Hp` (-1 = full): own bar via `MyCurrentStatusResponse`, others via `CurrentStatusResponse`; death = `DiedResponse.MainDied`, revive on `ResurrectWarpReq` (20503) or after 15 s (in a dungeon back to its entrance), regen 3%/s after 6 s without damage. Dungeon spawns come from `Common/NpcSpawn/Dungeon/<id>` (pseudo island `DungeonKeyBase + id`, ids `100000000 + dungeon*1000 + row`).
- **Combat v2** (23 Oct 2026, untested): *Vigor* is the special-skill gauge (max = PlayerGrade 100000, sent as such in `Mir5World.Status`; `AttackVigorPoint`/`HitVigorPoint` of `SkillAttack` fill it, `RegenVigor` too, special skills cost it in parts per million of the max; starts full). *MP/Vigor costs* are charged in `OnCastSkillAsync` (`TryPaySkill`, errors `CastSkillNotEnoughMp/Vigor`). *Wandering*: spawn rows with `IsWandering` (radius, wait times) walk at `WalkSpeed` (`WanderAsync`). *Skills*: monsters use `ID_NormalAttack`, `ID_SkillAttack` (every `SkillAttackConditionValue` normals for `NormalAttackUseCount`, else 1 in 4) and `ID_RangedSkillAttack` beyond `RangedDistance`; per-skill cooldowns; monster hits reach every player in the hit shape. *Drops* (`Mir5Drops.cs`): `ID_DropGroup` -> `DropBase` -> `DropList`, or the zone's `DropZone` table; loot goes straight to the killer as `RewardResponse(Drop)`; `Mir5GameServer.DropRate` / `MoneyDropRate` scale it. Not done: boss event skills / `PhaseHpRate` phases / `ID_EventActionSkill` (scripted on the official server), skill dashes, projectiles, buffs and abnormal states, party loot, lucky drops, ground items.
- **Achievements** (`Mir5Achievements.cs`, `DsAchievementRepository`, 23 Oct 2026, untested): `AchievementBase` rows form groups of steps; `AchievementDefine` says what is counted (type + value, Add/Set); progress is `ds_game.achievement_group` (step, state, total_count). `AchievementState`: 0 None, 1 Progress, 2 Completable (the only state that enables the claim button; `UDS_VM_AchievementData::IsClaimAble`), 3 Complete. A step completes when total >= its `AchievementDefineCountAccrue`. All groups are sent at login; claims (twoway 21500/21501) pay `AchievementReward` (money, items; AchievementExp ignored) and advance the step. Events: PlayerConnection, PlayerDying, PlayerGrade, MonsterKill*, QuestCompleteType, ItemTypeUse (1001 HP potion, 1002 MP potion; guessed from the item type names), PlayerSkillLevelUp. Potions (`Mir5Items.cs`, ItemUseReq 21): `ID_Template` -> `BuffBase` (BuffIndex 3002 Hp / 3004 Mp, BuffValue ppm of max, Dot over BuffTime/Period), cooldown by `ID_CoolDown` type.
- **Not in combat v1 (before AI):** monsters do not move, aggro or hit back (no player damage/death yet), no drops, no skill costs or cooldown checks, no PK, no buffs/abnormal states, no mana use. Needs: NPC AI + MoveSyncResponse, NPC skills (`NpcBattle.ID_NormalAttack/ID_SkillAttack`), player death (MainDied), drops (`ID_DropGroup`).

## Mir 4 removal (22 Oct 2026)

- Removed `Server/MirMobile` (the Mir 4 packet/model library; it was *not* actually unused: ~400 legacy files imported it), the legacy handlers in `M5.Server` (~550 files), the Gateway login/queue/Redis/Postgres services and Mir 4 controllers, the Postgres models/contexts/migrations in `M5.Database`, the Mir 4 models/providers in `M5.Core`, the Maestro admin controllers, `M5.Debugger`, `Protos/ProtoCompiler`, `Server/setup` (Docker/nginx), the Mir 4 test configs and the stale `Bin` output. NuGet packages (Postgres/EF, Couchbase, Elastic, Firebase, AWS, Redis, ImageSharp, MoonSharp...) were trimmed; a Release build now works.
- What each project keeps is listed in "Repo layout" above. Everything Mir 5 needs from the old code was rewritten as small `Program.cs` files.
- Mir 4 behaviour you may want as a reference later (login queue, guild, dominion, shop...) is in git history and in the Mir 4 C++ source.
## Crafting, quests, guilds, ascender skills, mounts, ring menu (22-23 Oct 2026)

- **General rule learned:** the client applies changes to its own items, money, quests, skills, mounts and ring slots only from DbWorkItem rows in a normal `UpdateMyInfoResponse` (`PushDbItemsAsync`); db_work_items inside a twoway reply are ignored. `DirtyFlag.Delete` removes a row. Send the rows first, then the reply. Every handler is wrapped: an exception is logged and answered with Failure instead of dropping the connection.
- **Crafting** (`Mir5Craft.cs`, `DsCraftRepository`): queue in `ds_game.wait_complete`, claim/cancel/accelerate. **Quests** (`Mir5Quests.cs`, `DsQuestRepository`): main/local/repeat/weekly/monthly. Gaps: gather/daily/instance objectives.
- **Guilds** (`Mir5Guilds.cs`, `DsGuildRepository`): create (1000 copper from `Common/GuildData`), list, join (free/approval), approve, leave, disband, kick, delegate, grades, mark/name/settings. `g_guild.disband_time` has no default (we write the 1970 epoch). The last member leaving disbands (rows deleted). Member names come from the HTTP `players_by_uids` call (Gateway). Not done: invitations, guild history/log, guild gold/levelling.
- **Ascender skills** (`Mir5PlayerSkills.cs`, `DsSkillRepository`): PlayerSkillLearn/LevelUp/Reset (21600-21602), costs from `Common/PlayerSkillLevel` (items + halo points), stored in `ds_game.player_skill`.
- **Mounts** (`Mir5Mounts.cs`, `DsMountRepository`): `mountadd`, mount list, companion select/rename/delete. Riding: MountReq (490) spawns the mount NPC (`MountBase.ID_NpcBase`) **with `rider_info` set to the player** (without it the client treats it as a tameable NPC: T prompt, no dismount, no steering) and answers MountRes (591); DisMountReq (491) removes it. Dismount key is X, sprint Left Shift. The ring-menu Mount action is unlocked via `ds_game.action_function` (ActionFunctionType Mount = 6): unlocked by owning a mount or learning a Ground/Air/Water skill. Not done: mount equipment, hunger/fatigue, taming, lost mounts, other players seeing the rider.
- **Ring menu** (`Mir5Ring.cs`, `DsRingRepository`): RingCommandSettingReq (21300) stores deck/slot/command in `ds_game.ring_command` (3 decks x 8 slots) and echoes the rows back as DbWorkItems.
- **Inventory expand with gold** (`Mir5Inventory.cs`, 24 Oct 2026): last client packet before close was unhandled plain 82 (`InvenExtendReq`). Confirm on the bag/warehouse + button sends `extend_id` from CommonData (`ID_InventoryExpansionMoneyInfo` = InventoryExtend row 1, `ID_WareHouseExpansionMoneyInfo` = 11) and `extend_count` from the slider. Row 1/11 cost 1 gold per slot (`ExtendMoneyType` Gold, `ExtendValue` 1); row 2/12 are the +5 ticket items. Persist extras in `ds_game.inven_extend_info` (`extend_type` = InventoryType PlayerNormal 1 / PlayerWareHouse 3, `extend_slot_count` = extras on top of InventoryBase.DefaultSlotCount 100; max extras 100 bag / 400 warehouse). Push `InvenExtendInfo` + `Money` as a normal UpdateMyInfo (the client applies bag size from that, not from a dedicated reply). Ticket items use the same packet.
- **Raid parties** (`Mir5RaidParty.cs`, 23 Oct 2026): in-memory, max 4 members. Create/invite/join/leave/kick/delegate/ready/slot/settings/list/search, kick votes (`RaidPartyVoteStartNoti` -> `KickVoteResReq` -> `RaidPartyKickVoteNoti`; `KickVoteResReq.vote_player_uid` is the *target*; the VoteKick notifies must still list the target because the client looks up his nickname), dungeon start (`RaidPartyDungeonStartNoti` goes to everyone, the leader's client answers with `DungeonInReq`, the others via a popup), DungeonIn/Out/AllDungeonOut (teleport to `DungeonBase.ID_WarpLocation` and back; not instanced), offline members stay 5 min as `OffLine` and get `RaidPartyInfoNoti` again at JoinMapReady. Not done: instanced maps, results/rewards, `RaidPartyMemberSync`. Untested against the client.
- GM command reference with status: `Tools/GM Commands.md` (keep it in sync with `Mir5Gm.cs`).
