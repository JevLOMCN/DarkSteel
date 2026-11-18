using M5.Core;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using System.Text.Json;

namespace M5.Gateway.Controllers
{
    /// <summary>
    /// Replacement for the retired Azure endpoint the client calls at startup
    /// (https://mir5-master-config.azurewebsites.net/api/get_dev_server_list?&amp;data_stage=Master).
    /// The client (UDS_SyncServer::GetServerList_Http) reads a top-level "data" array whose rows match the
    /// leaked server's Json/DevServerList.json. Point the hostname at this machine to use it.
    /// </summary>
    [ApiController]
    [AllowAnonymous]
    public class DevServerListController : ControllerBase
    {
        [HttpGet("api/get_dev_server_list")]
        public IActionResult GetDevServerList([FromQuery(Name = "data_stage")] string? dataStage)
        {
            var host = string.IsNullOrWhiteSpace(Config.Data.IpAddress) ? "127.0.0.1" : Config.Data.IpAddress;
            var apiPort = Config.Data.AuthPort > 0 ? Config.Data.AuthPort : 7000;

            var rows = new object[]
            {
                new Dictionary<string, object>
                {
                    ["ID"] = 2011,
                    ["RegionIndex"] = 2010,
                    ["Urls"] = $"http://{host}:{apiPort}/api/urls?server_name=localhost",
                    ["ServerAddr"] = host,
                    ["AiAddr"] = $"{host}:36000",
                    ["ServerName"] = "localhost",
                    ["FrontEndServerIndex"] = new[] { 10 },
                    ["GameServerIndex"] = new[] { 20011 },
                },
            };

            Logger.Info($"[DevServerList] data_stage={dataStage} -> localhost ({host})");
            var json = JsonSerializer.Serialize(new Dictionary<string, object> { ["data"] = rows });
            return Content(json, "application/json");
        }

        /// <summary>
        /// The "Urls" link of a DevServerList row. The client parses the body as a JSON-encoded UrlsResponse
        /// (urls.proto, recovered from urls.pb.cc): one URL string per HTTP API it uses afterwards.
        /// </summary>
        [HttpGet("api/urls")]
        public IActionResult GetUrls([FromQuery(Name = "server_name")] string? serverName)
        {
            var host = string.IsNullOrWhiteSpace(Config.Data.IpAddress) ? "127.0.0.1" : Config.Data.IpAddress;
            var apiPort = Config.Data.AuthPort > 0 ? Config.Data.AuthPort : 7000;
            var baseUrl = $"http://{host}:{apiPort}/api";

            // UrlsResponse fields; each maps to <baseUrl>/<field>.
            string[] fields =
            {
                "refresh_jwt_token", "front_end_server_addr_request", "get_server_list_info_request",
                "login_and_register_player_request", "players_by_name", "players_by_uids", "search_nickname",
                "mail_list", "mail_read", "game_option", "update_game_option", "minimap_marker",
                "update_minimap_marker", "get_breach", "accept_guild_member", "all_guild_info", "guild_info",
                "create_guild", "update_guild", "join_guild_member", "delete_guild", "delete_guild_member",
                "delegate_guild_master", "change_guild_member_role", "guild_member_infos", "all_guild_member_info",
                "get_guild_member_list",
            };
            // Trailing "?": the client appends "&key=value" pairs straight onto these strings for its GET calls.
            var body = fields.ToDictionary(x => x, x => $"{baseUrl}/{x}?");

            Logger.Info($"[Urls] server_name={serverName} -> {baseUrl}/*");
            return Content(JsonSerializer.Serialize(body), "application/json");
        }
    }
}
