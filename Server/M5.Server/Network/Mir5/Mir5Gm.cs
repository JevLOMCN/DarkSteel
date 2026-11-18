using System.Text.RegularExpressions;
using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using Ds = MirProto.DsGame;
using Msgs = MirProto.Messages;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// GM commands typed in the client as `DS.Chat &lt;command&gt;` (the client's cheat panel list is Common/CheatKeyBase). They arrive as a normal
/// ChatRequest, so the server interprets the text. Only accounts whose ds_account.player.authority is Gm (21) or higher may use them
/// (AccountAuthority: 11 Normal, 21 Gm, 22 GmInvisible, 31 Official). Replies go back as System chat lines.
/// </summary>
public static partial class Mir5GameServer
{
    private const int AuthorityGm = 21;

    private static readonly Regex NumberRx = new(@"-?\d+(\.\d+)?", RegexOptions.Compiled);

    /// <returns>true when the text was a GM command (so it must not be broadcast as chat).</returns>
    private static async Task<bool> TryGmCommandAsync(Conn c, string text)
    {
        var t = text.Trim();
        if (t.StartsWith('/')) t = t[1..].TrimStart();
        if (t.StartsWith("ds.chat", StringComparison.OrdinalIgnoreCase)) t = t[7..].TrimStart();
        if (t.Length == 0) return false;

        var parts = t.Split(' ', StringSplitOptions.RemoveEmptyEntries);
        var cmd = parts[0].ToLowerInvariant();
        var args = parts.Skip(1).ToArray();

        // Accept the "warplocation2" spelling as well as "warplocation 2".
        var glued = Regex.Match(cmd, @"^(warplocation|jumpisland|charlevel|charexp|playergrade)(\d+)$");
        if (glued.Success) { cmd = glued.Groups[1].Value; args = new[] { glued.Groups[2].Value }.Concat(args).ToArray(); }

        bool implemented = KnownGmCommands.Contains(cmd);
        if (!implemented && !OfficialGmCommands.Value.Contains(cmd)) return false;
        if (!implemented)
        {
            // An official cheat command (Common/CheatKeyBase) that this server does not implement yet: say so instead of posting it as chat.
            if (c.Authority >= AuthorityGm) await SystemMessageAsync(c, $"GM command '{cmd}' is not implemented on this server yet.");
            return c.Authority >= AuthorityGm;
        }
        if (c.Authority < AuthorityGm)
        {
            await SystemMessageAsync(c, "Permission denied: this account is not a GM (ds_account.player.authority must be 21 or higher).");
            return true;
        }

        Logger.Info($"[Mir5Gm] {c.Nickname} (uid={c.PlayerUid}): {t}");
        try { await RunGmCommandAsync(c, cmd, args); }
        catch (Exception ex)
        {
            Logger.Warning($"[Mir5Gm] '{t}' failed: {ex.Message}");
            await SystemMessageAsync(c, $"Command failed: {ex.Message}");
        }
        return true;
    }

    /// <summary>Every `ds.chat &lt;command&gt;` in the client's cheat panel table (Common/CheatKeyBase) plus a few seen in the cheat widgets.</summary>
    private static readonly Lazy<HashSet<string>> OfficialGmCommands = new(() =>
    {
        var set = new HashSet<string>(StringComparer.OrdinalIgnoreCase) { "getchar", "jumpisland", "teleport", "suicide", "buff", "party", "maploadingwarp" };
        try
        {
            var table = DataTables.Find("Common/CheatKeyBase");
            if (table != null)
                foreach (var kv in table.Rows)
                    if (kv.Value.TryGetProperty("Command", out var cmd) && (cmd.GetString() ?? "") is { } text &&
                        text.StartsWith("ds.chat ", StringComparison.OrdinalIgnoreCase))
                        set.Add(text[8..].Trim().Split(' ')[0].ToLowerInvariant());
        }
        catch (Exception ex) { Logger.Warning($"[Mir5Gm] CheatKeyBase read failed: {ex.Message}"); }
        return set;
    });

    private static readonly HashSet<string> KnownGmCommands = new()
    {
        "item", "npcmake", "questset", "questprogress", "questcomplete", "queststatus", "questaccept", "questreset",
        "help", "commands", "warplocation", "jumpisland", "jumpisland1", "jumpisland2", "gotopos", "charlevel", "charexp", "playergrade",
        "moneymake", "money_set", "immortal", "mortal", "getpos", "additem", "getitem", "mountadd", "deviceactivateall",
    };

    private static async Task RunGmCommandAsync(Conn c, string cmd, string[] args)
    {
        switch (cmd)
        {
            case "help":
            case "commands":
                await SystemMessageAsync(c, "GM commands: warplocation <id> | jumpisland1 | jumpisland2 | gotopos <x> <y> [z] | getpos | " +
                                            "charlevel <n> | charexp <n> | playergrade <n> | moneymake [type] <n> | money_set [type] <n> | item <itemId> [qty] [tradeable] | npcmake <npcId> [count] | mountadd <MountBase id> | queststatus | questprogress [n] | questcomplete [id] | questset <id> | questaccept <id> | questreset <id> | immortal | mortal");
                break;

            case "getpos":
                await SystemMessageAsync(c, $"island {c.IslandId} X={c.X:0.##} Y={c.Y:0.##} Z={c.Z:0.##} dir={c.Direction:0.#}");
                break;

            case "warplocation":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var id)) { await SystemMessageAsync(c, "usage: warplocation <id>"); break; }
                await WarpToLocationAsync(c, id);
                break;
            }

            case "jumpisland1":
            case "jumpisland2":
                await WarpToLocationAsync(c, cmd == "jumpisland1" ? 1 : FirstWarpLocationOfIsland(2));
                break;

            case "jumpisland":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var island)) { await SystemMessageAsync(c, "usage: jumpisland <island>"); break; }
                await WarpToLocationAsync(c, FirstWarpLocationOfIsland(island));
                break;
            }

            case "gotopos":
            {
                var n = NumberRx.Matches(string.Join(' ', args)).Select(m => double.Parse(m.Value, System.Globalization.CultureInfo.InvariantCulture)).ToArray();
                if (n.Length < 2) { await SystemMessageAsync(c, "usage: gotopos <x> <y> [z]"); break; }
                await TeleportAsync(c, c.IslandId, n[0], n[1], n.Length > 2 ? n[2] : c.Z, c.Direction);
                break;
            }

            case "charlevel":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var lvl) || lvl < 1) { await SystemMessageAsync(c, "usage: charlevel <n>"); break; }
                await DsPlayerRepository.SetLevelAsync(c.PlayerUid, lvl, 0);
                await SendDbItemAsync(c, new Ds.DbWorkItem { CharacterLevel = new Ds.SqlCharacterLevelTable { PlayerUid = c.PlayerUid, CharLevel = lvl, Exp = 0 } });
                c.Level = lvl; c.Exp = 0; c.Hp = -1; c.Mp = -1;      // the live session follows (max Hp / Mp, achievements)
                var lvlState = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
                if (lvlState != null) foreach (var m in Mir5World.Status(lvlState, c.CharId)) await c.Plain(m);
                await PushMyHpAsync(c);
                await AchEventAsync(c, "CharacterLevelUpAppoint", c.CharId, lvl);
                await SystemMessageAsync(c, $"Character level set to {lvl}.");
                break;
            }

            case "charexp":
            {
                if (args.Length < 1 || !long.TryParse(args[0], out var exp)) { await SystemMessageAsync(c, "usage: charexp <n>"); break; }
                var st = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
                int lvl = st?.Level ?? 1;
                await DsPlayerRepository.SetLevelAsync(c.PlayerUid, lvl, exp);
                await SendDbItemAsync(c, new Ds.DbWorkItem { CharacterLevel = new Ds.SqlCharacterLevelTable { PlayerUid = c.PlayerUid, CharLevel = lvl, Exp = exp } });
                await SystemMessageAsync(c, $"Character exp set to {exp}.");
                break;
            }

            case "playergrade":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var grade) || grade < 1) { await SystemMessageAsync(c, "usage: playergrade <n>"); break; }
                await DsPlayerRepository.SetPlayerGradeAsync(c.PlayerUid, grade, 0);
                var st = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
                await SendDbItemAsync(c, new Ds.DbWorkItem { PlayerGrade = new Ds.SqlPlayerGradeTable { PlayerUid = c.PlayerUid, PlayerGrade = grade, PlayerGradeCap = st?.PlayerGradeCap ?? 0, Exp = 0 } });
                await AchEventAsync(c, "PlayerGrade", amount: grade);
                await SystemMessageAsync(c, $"Player grade set to {grade}.");
                break;
            }

            case "moneymake":
            case "money_set":
            {
                // "moneymake <amount>" (Gold 11) or "moneymake <type> <amount>"
                if (args.Length < 1) { await SystemMessageAsync(c, $"usage: {cmd} [type] <amount>   (types: 1 copper, 11 gold, 12 non-tradable gold, 51 mileage)"); break; }
                int type = 11; long amount;
                if (args.Length >= 2) { if (!int.TryParse(args[0], out type) || !long.TryParse(args[1], out amount)) { await SystemMessageAsync(c, "bad numbers"); break; } }
                else if (!long.TryParse(args[0], out amount)) { await SystemMessageAsync(c, "bad number"); break; }
                var total = await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, type, amount, set: cmd == "money_set");
                await SendDbItemAsync(c, new Ds.DbWorkItem { Money = new Ds.SqlMoneyTable { PlayerUid = c.PlayerUid, MoneyId = (MoneyType)type, Quantity = total } });
                await SystemMessageAsync(c, $"Money {type} is now {total}.");
                break;
            }

            case "questset":
            case "questaccept":
            case "questreset":
            case "questprogress":
            case "questcomplete":
            case "queststatus":
                await GmQuestAsync(c, cmd, args);
                break;

            case "item":      // official syntax from the cheat panel: item <id> <qty> <tradeable qty>
            case "additem":
            case "getitem":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var itemId)) { await SystemMessageAsync(c, "usage: item <itemId> [qty] [tradeable qty]   (also additem <id> [count])"); break; }
                int count = 0;
                for (int i = 1; i < args.Length; i++) if (int.TryParse(args[i], out var q) && q > 0) count += q;
                if (count <= 0) count = 1;
                var items = DataTables.Find("Common/ItemBase");
                if (items == null || !items.TryGetRow(itemId, out var row)) { await SystemMessageAsync(c, $"Unknown item {itemId}."); break; }
                bool equip = row.TryGetProperty("IsEquip", out var ie) && ie.ValueKind == System.Text.Json.JsonValueKind.True;
                if (equip)
                {
                    var (_, _, durability) = Mir5World.DescribeEquipItem(itemId);
                    for (int i = 0; i < Math.Min(count, 20); i++)
                    {
                        long uid = await DsPlayerRepository.AddEquipmentItemAsync(c.PlayerUid, itemId, durability);
                        await SendDbItemAsync(c, new Ds.DbWorkItem
                        {
                            ItemEquipment = new Ds.SqlItemEquipmentTable
                            { PlayerUid = c.PlayerUid, ItemUid = uid, ItemId = itemId, InventoryType = InventoryType.PlayerNormal, Level = 1, Durability = durability },
                        });
                    }
                    await SystemMessageAsync(c, $"Added {Math.Min(count, 20)} x equipment {itemId} to the bag.");
                }
                else
                {
                    int total = await DsPlayerRepository.AddStackableAsync(c.PlayerUid, itemId, count);
                    await SendDbItemAsync(c, new Ds.DbWorkItem { ItemStackable = new Ds.SqlItemStackableTable { PlayerUid = c.PlayerUid, ItemId = itemId, Quantity = total } });
                    await SystemMessageAsync(c, $"Item {itemId} is now x{total}.");
                }
                break;
            }

            case "npcmake":     // npcmake <NpcBase id> [count]: spawn monsters in front of you
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var npcId)) { await SystemMessageAsync(c, "usage: npcmake <NpcBase id> [count]   e.g. npcmake 210021003"); break; }
                int n = args.Length > 1 && int.TryParse(args[1], out var cnt) ? Math.Clamp(cnt, 1, 20) : 1;
                double rad = c.Direction * Math.PI / 180.0;
                int made = 0; string name = "";
                for (int i = 0; i < n; i++)
                {
                    // a loose row in front of the player, 3 m away, 1.5 m apart
                    double dist = 300 + (i / 5) * 150, side = ((i % 5) - 2) * 150;
                    double x = c.X + Math.Cos(rad) * dist - Math.Sin(rad) * side, y = c.Y + Math.Sin(rad) * dist + Math.Cos(rad) * side;
                    var npc = Mir5Spawns.SpawnDynamic(c.IslandId, npcId, x, y, c.Z, c.Direction + 180f);
                    if (npc == null) break;
                    made++;
                    name = $"lvl {npc.S.Level}, hp {npc.MaxHp:0}, {(npc.S.Attackable ? "hostile" : "not attackable")}";
                }
                if (made == 0) { await SystemMessageAsync(c, $"Unknown NpcBase id {npcId} (see Common/NpcBase)."); break; }
                foreach (var conn in Connections.Values.Where(v => v.InWorld && v.IslandId == c.IslandId).ToList()) _ = UpdateVisibilityAsync(conn);
                await SystemMessageAsync(c, $"Spawned {made} x NpcBase {npcId} ({name}).");
                break;
            }

            case "deviceactivateall":
                await GmActivateAllWarpDevicesAsync(c);
                break;

            case "mountadd":
                await GmMountAddAsync(c, args);
                break;

            case "immortal":
            case "mortal":
                c.Immortal = cmd == "immortal";
                await SystemMessageAsync(c, c.Immortal ? "Immortal on (monsters still hit, but you take no damage)." : "Immortal off.");
                break;
        }
    }

    // ---- helpers ----

    private static int FirstWarpLocationOfIsland(int island)
    {
        var warp = DataTables.Find("Common/WarpLocation");
        if (warp != null)
            foreach (var kv in warp.Rows)
                if (kv.Value.TryGetProperty("ID_ZoneIsland", out var i) && i.GetInt32() == island) return int.Parse(kv.Key);
        return 1;
    }

    private static async Task WarpToLocationAsync(Conn c, int warpId)
    {
        if (!await TeleportToLocationAsync(c, warpId))
        {
            await SystemMessageAsync(c, $"Unknown warp location {warpId}.");
            return;
        }
        await SystemMessageAsync(c, $"Warped to location {warpId}.");
    }

    /// <summary>Teleports to a Common/WarpLocation row; false when the row does not exist.</summary>
    private static async Task<bool> TeleportToLocationAsync(Conn c, int warpId)
    {
        var warp = DataTables.Find("Common/WarpLocation");
        if (warp == null || !warp.TryGetRow(warpId, out var w)) return false;
        var p = w.GetProperty("WarpLocationCoordinate");
        await TeleportAsync(c, w.GetProperty("ID_ZoneIsland").GetInt32(), p.GetProperty("X").GetDouble(), p.GetProperty("Y").GetDouble(),
            p.GetProperty("Z").GetDouble(), w.TryGetProperty("WarpDirection", out var d) ? (float)d.GetDouble() : 0f);
        return true;
    }

    /// <summary>
    /// Move the character. Uses GameServerChangeResponse (FDS_WarpService::ReceiveGameServerChange), whose ZoneIsland location makes the
    /// client call ADS_MainCharacter::OnTeleport. Island changes are untested.
    /// </summary>
    private static async Task TeleportAsync(Conn c, int island, double x, double y, double z, float dir)
    {
        c.IslandId = island; c.X = x; c.Y = y; c.Z = z; c.Direction = dir;
        c.PositionDirty = true;
        c.Visible.Clear();
        await SavePositionAsync(c, force: true);
        var me = new Msgs.PlayerEntity { Bits = Mir5World.EntityBits(c.PlayerUid) };
        await c.Plain(new SM.ServerMessages
        {
            GameServerChangeRes = new SM.GameServerChangeResponse
            {
                OldPlayerEntity = me,
                PlayerEntity = me,
                GameServerIndex = 1,
                ServerChangeType = new Msgs.ServerChangeType
                {
                    ZoneIsland = new Msgs.LocationType { Id = island, Position = new MirProto.Vector { X = x, Y = y, Z = z }, Direction = dir },
                },
            },
        });
        // the client's zone manager (world map, warp devices, zone name HUD) only learns the island/zone from these messages
        var (zone, district) = Mir5World.GetZone(island);
        await c.Plain(new SM.ServerMessages { ZoneIdChangeRes = new SM.ZoneIdChangeResponse { ZoneId = zone, DistrictId = district, IslandId = (uint)island } });
        _ = UpdateVisibilityAsync(c);
    }

    private static Task SendDbItemAsync(Conn c, Ds.DbWorkItem item)
    {
        var res = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        res.DbWorkItems.Add(item);
        return c.Plain(new SM.ServerMessages { UpdateMyInfoRes = res });
    }

    /// <summary>A System-channel chat line shown only to this player.</summary>
    private static Task SystemMessageAsync(Conn c, string text) =>
        c.Plain(new SM.ServerMessages
        {
            ChatRes = new SM.ChatResponse { Text = text, ChattingType = ChattingType.System, SenderName = "System", SenderPlayerUid = 0 },
        });
}
