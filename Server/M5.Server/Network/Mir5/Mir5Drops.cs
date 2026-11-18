using System.Text.Json;
using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Monster drops. The table chain (Server/Bin/Data/Common):
///   NpcBattle.ID_DropGroup (and ID_FixedDropGroup) -> DropBase row: money (DropMoneyType / Min / Max / Rate, MoneyLoopCount rolls) and
///   ID_DropListGroup[i] with ID_DropListGroupRate[i] (chance to roll that group, parts per million) -> DropList rows of the group: ID_Template
///   (item), DropMinCount..DropMaxCount, DropRate (parts per million, rolled per row).
///   A monster without its own group uses the zone table: ZoneBase.ID_DropZoneGroup -> DropZone rows (monster type, grade and level range) -> ID_DropGroup.
/// The client has no ground-item messages, so loot goes straight to the killer: money and items are added in the database and sent as a
/// RewardResponse (RewardType.Drop) carrying the changed rows, which also shows the pickup notice.
/// Not implemented: lucky drops, trade-able split (everything is treated as normal), party loot sharing, DropStuffSpawn objects.
/// </summary>
public static partial class Mir5GameServer
{
    /// <summary>Multiplier on item drop chances (1 = the data).</summary>
    public static double DropRate = 1;

    /// <summary>Multiplier on money drops.</summary>
    public static double MoneyDropRate = 1;

    private static Dictionary<int, List<JsonElement>>? _dropLists;

    private static List<JsonElement> DropListGroup(int group)
    {
        if (_dropLists == null)
        {
            var index = new Dictionary<int, List<JsonElement>>();
            if (DataTables.Find("Common/DropList") is { } t)
                foreach (var kv in t.Rows)
                    if (kv.Value.TryGetProperty("DropListGroupID", out var g))
                    {
                        if (!index.TryGetValue(g.GetInt32(), out var list)) index[g.GetInt32()] = list = new List<JsonElement>();
                        list.Add(kv.Value);
                    }
            _dropLists = index;
        }
        return _dropLists.TryGetValue(group, out var rows) ? rows : new List<JsonElement>();
    }

    /// <summary>The monster's own drop group, else the zone's drop table for its type, grade and level.</summary>
    private static int ResolveDropGroup(Mir5Spawns.Npc npc)
    {
        if (npc.DropGroup > 0) return npc.DropGroup;
        int zone;
        if (npc.Island >= Mir5Spawns.DungeonKeyBase)
            zone = DataTables.Find("Common/DungeonBase") is { } d && d.TryGetRow(npc.Island - Mir5Spawns.DungeonKeyBase, out var dr) && dr.TryGetProperty("ID_ZoneBase", out var zb) ? zb.GetInt32() : 0;
        else
            zone = (int)Mir5World.GetZone(npc.Island).Zone;
        if (zone <= 0 || DataTables.Find("Common/ZoneBase") is not { } zones || !zones.TryGetRow(zone, out var z) || !z.TryGetProperty("ID_DropZoneGroup", out var dzg)) return 0;
        int zoneGroup = dzg.GetInt32();
        if (DataTables.Find("Common/DropZone") is not { } dropZone) return 0;
        foreach (var kv in dropZone.Rows)
        {
            var r = kv.Value;
            if (!r.TryGetProperty("DropZoneGroupID", out var gid) || gid.GetInt32() != zoneGroup) continue;
            string type = r.TryGetProperty("NpcBattleType", out var bt) ? (bt.GetString() ?? "").Split("::").Last() : "";
            string grade = r.TryGetProperty("NpcBattleGrade", out var bg) ? (bg.GetString() ?? "").Split("::").Last() : "";
            int min = r.TryGetProperty("NpcMinLevel", out var lo) ? lo.GetInt32() : 0, max = r.TryGetProperty("NpcMaxLevel", out var hi) ? hi.GetInt32() : int.MaxValue;
            if ((type == "" || npc.BattleType == "" || type == npc.BattleType) && (grade == "" || npc.BattleGrade == "" || grade == npc.BattleGrade) &&
                npc.S.Level >= min && npc.S.Level <= max && r.TryGetProperty("ID_DropGroup", out var dg))
                return dg.GetInt32();
        }
        return 0;
    }

    private static bool Chance(double partsPerMillion) => Rng.NextDouble() * 1_000_000.0 < partsPerMillion;

    private static void RollDropList(int group, bool guaranteed, List<(int Item, int Count)> items)
    {
        foreach (var row in DropListGroup(group))
        {
            double rate = row.TryGetProperty("DropRate", out var dr) ? dr.GetDouble() : 0;
            if (!guaranteed && !Chance(rate * DropRate)) continue;
            int item = row.TryGetProperty("ID_Template", out var it) ? it.GetInt32() : 0;
            int min = row.TryGetProperty("DropMinCount", out var mn) ? mn.GetInt32() : 1, max = row.TryGetProperty("DropMaxCount", out var mx) ? mx.GetInt32() : min;
            if (item > 0) items.Add((item, Rng.Next(Math.Max(1, min), Math.Max(min, max) + 1)));
            if (guaranteed) break;      // a guaranteed group gives one of its rows
        }
    }

    private static void RollDropBase(int groupId, List<(int Item, int Count)> items, Dictionary<int, long> money)
    {
        if (DataTables.Find("Common/DropBase") is not { } t || !t.TryGetRow(groupId, out var r)) return;

        int loops = r.TryGetProperty("MoneyLoopCount", out var ml) ? ml.GetInt32() : 0;
        if (loops > 0 && r.TryGetProperty("DropMoneyType", out var types) && r.TryGetProperty("DropMoneyMinCount", out var mins) &&
            r.TryGetProperty("DropMoneyMaxCount", out var maxs) && r.TryGetProperty("DropMoneyRate", out var rates))
        {
            for (int loop = 0; loop < loops; loop++)
                for (int i = 0; i < types.GetArrayLength() && i < mins.GetArrayLength() && i < maxs.GetArrayLength() && i < rates.GetArrayLength(); i++)
                {
                    if (!Chance(rates[i].GetDouble()) || !System.Enum.TryParse<MoneyType>((types[i].GetString() ?? "").Split("::").Last(), out var mt) || mt == MoneyType.None) continue;
                    long lo = mins[i].GetInt64(), hi = Math.Max(lo, maxs[i].GetInt64());
                    long amount = (long)Math.Round((lo + (long)(Rng.NextDouble() * (hi - lo + 1))) * MoneyDropRate);
                    if (amount > 0) money[(int)mt] = money.GetValueOrDefault((int)mt) + amount;
                }
        }

        if (r.TryGetProperty("ID_DropListGroup", out var groups) && r.TryGetProperty("ID_DropListGroupRate", out var groupRates))
            for (int i = 0; i < groups.GetArrayLength() && i < groupRates.GetArrayLength(); i++)
                if (Chance(groupRates[i].GetDouble())) RollDropList(groups[i].GetInt32(), guaranteed: false, items);

        if (r.TryGetProperty("ID_DropListGroupGuaranteed", out var sure))
            foreach (var g in sure.EnumerateArray())
                if (g.GetInt32() > 0) RollDropList(g.GetInt32(), guaranteed: true, items);
    }

    /// <summary>Rolls the monster's drops and gives them to the killer.</summary>
    private static async Task DropLootAsync(Conn killer, Mir5Spawns.Npc npc)
    {
        var groups = new List<int>();
        int own = ResolveDropGroup(npc);
        if (own > 0) groups.Add(own);
        if (npc.FixedDropGroup > 0) groups.Add(npc.FixedDropGroup);
        if (groups.Count == 0) return;

        var items = new List<(int Item, int Count)>();
        var money = new Dictionary<int, long>();
        foreach (var g in groups) RollDropBase(g, items, money);
        if (items.Count == 0 && money.Count == 0) return;

        var work = new List<Ds.DbWorkItem>();
        foreach (var (moneyId, amount) in money)
            work.Add(MoneyItem(killer, moneyId, await DsPlayerRepository.ChangeMoneyAsync(killer.PlayerUid, moneyId, amount, set: false)));
        foreach (var grp in items.GroupBy(x => x.Item))
            await GiveItemAsync(killer, grp.Key, grp.Sum(x => x.Count), work);
        if (work.Count == 0) return;

        Logger.Info($"[Mir5Drops] {killer.Nickname} gets {string.Join(", ", items.GroupBy(x => x.Item).Select(g => $"{g.Sum(x => x.Count)}x {g.Key}"))}" +
                    (money.Count > 0 ? $" + money {string.Join(", ", money.Select(m => $"{m.Value} of {m.Key}"))}" : "") + $" from npc {npc.S.NpcBase} (drop group {string.Join("/", groups)})");
        // the client applies item and money changes from a normal inventory update (see Mir5Craft / quests); the reward message adds the pickup notice
        await PushDbItemsAsync(killer, work);
        var res = new SM.RewardResponse { RewardType = RewardType.Drop };
        res.DbWorkItems.AddRange(work);
        await killer.Plain(new SM.ServerMessages { RewardRes = res });
    }
}
