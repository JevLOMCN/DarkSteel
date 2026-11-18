using M5.Core;
using M5.Database.Mysql;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using System.Text.Json;

namespace M5.Gateway.Controllers
{
    /// <summary>
    /// Mir 5 client HTTP API (api_session / api_system / api_config). The URLs are handed out by
    /// <see cref="DevServerListController.GetUrls"/>; the client posts a protobuf message converted to JSON
    /// (Content-Type application/json) and parses the reply as JSON back into the response message.
    /// Field names are written in proto form (snake_case); the protobuf JSON parser accepts them.
    /// Every response carries response_base { error_code, error_message }; error_code 0 means success.
    /// </summary>
    [ApiController]
    [AllowAnonymous]
    public class Mir5ApiController : ControllerBase
    {
        // ErrorCode enum (ErrorCode.proto): Failure = 0, Success = 1, InvalidParam = 8000.
        private const int ErrOk = 1;
        private const int ErrFail = 0;

        [HttpPost("api/login_and_register_player_request")]
        public async Task<IActionResult> LoginAndRegisterPlayer()
        {
            var body = await ReadBodyAsync();
            var id = Str(body, "id");
            if (string.IsNullOrWhiteSpace(id))
                return Reply(new { response_base = Base(ErrFail, "empty id") });

            try
            {
                var (playerUid, isNew) = await DsAccountRepository.GetOrCreatePlayerAsync(id);
                var world = await PickWorldAsync(Int(body, "prefer_world_id"));
                var session = await DsAccountRepository.CreateSessionAsync(playerUid, world?.RegionIndex ?? 1, world?.WorldId ?? 1, TimeSpan.FromHours(12));

                Logger.Info($"[Mir5Api] login id={id} uid={playerUid} new={isNew} world={session.WorldId}");
                return Reply(new
                {
                    response_base = Base(ErrOk),
                    new_player_uid = playerUid,
                    player_session_uid = new { value = Convert.ToBase64String(session.SessionUid.ToByteArray(bigEndian: true)) }, // UniqueId.value is bytes (base64 in JSON)
                    is_new_player = isNew,
                    world_id = session.WorldId,
                    jwt_key = session.SessionUid.ToString("N"),
                });
            }
            catch (Exception ex)
            {
                Logger.Error($"[Mir5Api] login failed id={id}: {ex.Message}");
                return Reply(new { response_base = Base(ErrFail, "login failed") });
            }
        }

        [HttpPost("api/refresh_jwt_token")]
        [HttpGet("api/refresh_jwt_token")]
        public async Task<IActionResult> RefreshJwt()
        {
            var body = await ReadBodyAsync();
            return Reply(new { player_uid = Long(body, "player_uid"), refresh_jwt_key = Str(body, "jwt_key") });
        }

        /// <summary>api_system.GetFrontEndServerAddr: where the client opens its TCP connection.</summary>
        [HttpPost("api/front_end_server_addr_request")]
        public async Task<IActionResult> FrontEndServerAddr()
        {
            var body = await ReadBodyAsync();
            var world = await PickWorldAsync(Int(body, "world_id"));
            var (host, port) = SplitAddress(world?.Address, "127.0.0.1", 31101);
            int authority = 11;   // AccountAuthority.Normal; Gm = 21 unlocks the DS.Chat console commands
            try { authority = await DsAccountRepository.GetAuthorityAsync(Long(body, "player_uid")); }
            catch (Exception ex) { Logger.Warning($"[Mir5Api] authority lookup failed: {ex.Message}"); }
            Logger.Info($"[Mir5Api] front_end_server_addr world={world?.WorldId} -> {host}:{port} authority={authority}");
            return Reply(new
            {
                response_base = Base(ErrOk),
                addr = host,
                port,
                region_index = world?.RegionIndex ?? 1,
                account_authority = authority,
            });
        }

        /// <summary>api_system.GetServerListInfo: the world list shown on the server select screen.</summary>
        [HttpPost("api/get_server_list_info_request")]
        public async Task<IActionResult> ServerListInfo()
        {
            var games = await SafeGameServersAsync();
            var table = games.Select(g => new
            {
                world_id = g.WorldId,
                region_index = g.RegionIndex,
                timezone_index = g.TimezoneIndex,
                server_type = g.ServerType,
                game_server_state = 0, // client shows "server is under maintenance" for any non-zero value (UDS_VM_W_LoginMenu::SetClick_Access)
                world_name_id = g.WorldNameId,
                game_server_refresh_dt = DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ"),
                name = $"World {g.WorldId}",
            }).ToArray();
            return Reply(new { response_base = Base(ErrOk), table });
        }

        /// <summary>api_config.ServerList (server to server in the official stack; handy for tooling).</summary>
        [HttpPost("api/server_list")]
        [HttpGet("api/server_list")]
        public async Task<IActionResult> ServerList()
        {
            var games = await SafeGameServersAsync();
            return Reply(new
            {
                response_base = Base(ErrOk),
                game_server_list = games.Select(g => new
                {
                    server_index = g.ServerIndex, world_id = g.WorldId, server_type = g.ServerType,
                    region_index = g.RegionIndex, timezone_index = g.TimezoneIndex, address = g.Address,
                    grpc_address = g.GrpcAddress, json = g.Json, game_server_state = 0, world_name_id = g.WorldNameId,
                }),
            });
        }

        /// <summary>GET game_option -> misc.MiscGameOptionMessage (no response_base). Empty = no saved options.</summary>
        [HttpGet("api/game_option")]
        public IActionResult GetGameOption([FromQuery(Name = "player_uid")] long playerUid, [FromQuery(Name = "region_index")] int regionIndex)
        {
            Logger.Info($"[Mir5Api] game_option uid={playerUid}");
            return Reply(new { player_uid = playerUid, version = 0, game_option = "", region_index = regionIndex });
        }

        /// <summary>GET minimap_marker -> misc.MiscMinimapMarkerMessage.</summary>
        [HttpGet("api/minimap_marker")]
        public IActionResult GetMinimapMarker([FromQuery(Name = "player_uid")] long playerUid, [FromQuery(Name = "region_index")] int regionIndex)
        {
            Logger.Info($"[Mir5Api] minimap_marker uid={playerUid}");
            return Reply(new { player_uid = playerUid, region_index = regionIndex, version = 0, minimap_marker = "" });
        }

        /// <summary>GET get_breach -> misc.MiscBreachDataMessage.</summary>
        [HttpGet("api/get_breach")]
        public IActionResult GetBreach([FromQuery(Name = "player_uid")] long playerUid, [FromQuery(Name = "region_index")] int regionIndex,
            [FromQuery(Name = "island_id")] int islandId)
        {
            return Reply(new { island_id = islandId, player_uid = playerUid, region_index = regionIndex });
        }
        /// <summary>mail_list -> mail.MailCategoryListResponse { mail_list }. Empty mailbox for now.</summary>
        [HttpGet("api/mail_list")]
        [HttpPost("api/mail_list")]
        public async Task<IActionResult> MailList()
        {
            await ReadBodyAsync();
            return Reply(new { mail_list = Array.Empty<object>() });
        }
        /// <summary>Calls the client makes after login that have no real data behind them yet. Success with empty data.</summary>
        /// <summary>misc.PlayerList (nickname, level, guild, online) for the guild member list, friends and search.</summary>
        [HttpPost("api/players_by_uids")]
        [HttpGet("api/players_by_uids")]
        [HttpPost("api/players_by_name")]
        [HttpGet("api/players_by_name")]
        public async Task<IActionResult> PlayersLookup()
        {
            var body = await ReadBodyAsync();
            string uidText = Request.Query.TryGetValue("player_uids", out var q) ? q.ToString() : Str(body, "player_uids");
            string name = Request.Query.TryGetValue("nickname", out var nq) ? nq.ToString() : Str(body, "nickname");
            try
            {
                var uids = uidText.Split(',', StringSplitOptions.RemoveEmptyEntries | StringSplitOptions.TrimEntries).Select(s => long.TryParse(s, out var v) ? v : 0).Where(v => v != 0).ToList();
                var infos = Request.Path.Value!.EndsWith("players_by_uids") ? await DsGuildRepository.PlayerInfosAsync(uids) : await DsGuildRepository.PlayerInfosAsync(null, name);
                static string Iso(DateTime t) => t.ToString("yyyy-MM-dd'T'HH:mm:ss'Z'");
                return Reply(new
                {
                    players = infos.Select(i => new
                    {
                        player_uid = i.PlayerUid.ToString(), nickname = i.Nickname, world_id = 1, region_index = 1, main_char_level = i.Level,
                        guild_uid = i.GuildUid.ToString(), guild_name = i.GuildName,
                        login_dt = Iso(i.LoginUtc), logout_dt = i.Online ? Iso(i.LoginUtc.AddSeconds(-1)) : Iso(i.LoginUtc),
                    }).ToArray(),
                });
            }
            catch (Exception ex)
            {
                Logger.Error($"[Mir5Api] players lookup failed: {ex.Message}");
                return Reply(new { players = Array.Empty<object>() });
            }
        }

        [HttpPost("api/mail_read")]
        [HttpGet("api/mail_read")]
        [HttpPost("api/game_option")]
        [HttpPost("api/update_game_option")]
        [HttpGet("api/update_game_option")]
        [HttpPost("api/minimap_marker")]
        [HttpPost("api/update_minimap_marker")]
        [HttpGet("api/update_minimap_marker")]
        [HttpPost("api/get_breach")]
        public async Task<IActionResult> EmptyOk()
        {
            await ReadBodyAsync();
            Logger.Info($"[Mir5Api] stub {Request.Path}");
            return Reply(new { response_base = Base(ErrOk) });
        }

        /// <summary>api_session.SearchNicknameResponse: checks a nickname against ds_account.nickname.</summary>
        [HttpPost("api/search_nickname")]
        [HttpGet("api/search_nickname")]
        public async Task<IActionResult> SearchNickname()
        {
            var body = await ReadBodyAsync();
            var nickname = Str(body, "nickname");
            if (string.IsNullOrEmpty(nickname) && Request.Query.TryGetValue("nickname", out var q))
                nickname = q.ToString();
            Logger.Info($"[Mir5Api] search_nickname '{nickname}'");
            try
            {
                var taken = await DsPlayerRepository.NicknameExistsAsync(nickname);
                return Reply(taken
                    ? new { error_code = ErrOk, nickname, data = new { } }
                    : (object)new { error_code = ErrOk, nickname });
            }
            catch (Exception ex)
            {
                Logger.Error($"[Mir5Api] search_nickname failed: {ex.Message}");
                return Reply(new { error_code = ErrFail });
            }
        }

        // ---- helpers ----

        private async Task<GameServerRow?> PickWorldAsync(int preferWorld)
        {
            var games = await SafeGameServersAsync();
            return games.FirstOrDefault(g => preferWorld > 0 && g.WorldId == preferWorld) ?? games.FirstOrDefault();
        }

        private static async Task<List<GameServerRow>> SafeGameServersAsync()
        {
            try { return await DsConfigRepository.GetGameServersAsync(); }
            catch (Exception ex)
            {
                Logger.Error($"[Mir5Api] game_server_list read failed: {ex.Message}");
                return new List<GameServerRow>();
            }
        }

        private static (string Host, int Port) SplitAddress(string? addr, string defHost, int defPort)
        {
            if (string.IsNullOrWhiteSpace(addr)) return (defHost, defPort);
            var i = addr.LastIndexOf(':');
            if (i > 0 && int.TryParse(addr[(i + 1)..], out var p)) return (addr[..i], p);
            return (addr, defPort);
        }

        private static object Base(int code, string message = "") => new { error_code = code, error_message = message };

        private IActionResult Reply(object o) => Content(JsonSerializer.Serialize(o), "application/json");

        private async Task<JsonElement> ReadBodyAsync()
        {
            try
            {
                using var reader = new StreamReader(Request.Body);
                var text = await reader.ReadToEndAsync();
                if (!string.IsNullOrWhiteSpace(text))
                {
                    Logger.Info($"[Mir5Api] {Request.Path} body={(text.Length > 300 ? text[..300] : text)}");
                    return JsonDocument.Parse(text).RootElement.Clone();
                }
            }
            catch (Exception ex) { Logger.Warning($"[Mir5Api] bad body on {Request.Path}: {ex.Message}"); }
            return JsonDocument.Parse("{}").RootElement.Clone();
        }

        // Accepts both proto names (player_uid) and protobuf-JSON camelCase (playerUid).
        private static bool TryGet(JsonElement e, string name, out JsonElement v)
        {
            v = default;
            if (e.ValueKind != JsonValueKind.Object) return false;
            if (e.TryGetProperty(name, out v)) return true;
            var parts = name.Split('_');
            var camel = parts[0] + string.Concat(parts.Skip(1).Select(p => p.Length == 0 ? p : char.ToUpper(p[0]) + p[1..]));
            return e.TryGetProperty(camel, out v);
        }

        private static string Str(JsonElement e, string n) => TryGet(e, n, out var v) ? (v.ValueKind == JsonValueKind.String ? v.GetString() ?? "" : v.ToString()) : "";
        private static int Int(JsonElement e, string n) => (int)Long(e, n);
        private static long Long(JsonElement e, string n)
        {
            if (!TryGet(e, n, out var v)) return 0;
            if (v.ValueKind == JsonValueKind.Number && v.TryGetInt64(out var l)) return l;
            return long.TryParse(v.ToString(), out l) ? l : 0;
        }
    }
}
