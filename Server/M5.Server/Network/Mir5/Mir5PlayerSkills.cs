using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Ascender (life) skills: PlayerSkillLearn/LevelUp/Reset (21600-21602). Common/PlayerSkillBase gives ID_LevelGroup and MaxLevel;
/// Common/PlayerSkillLevel (Group, SkillLevel) gives the cost of reaching a level: ID_LevelUpItem x LevelUpItemCount and
/// SkillLevelUpHaloPointCount halo points (learning = reaching level 1). Reset removes the skill, refunds the halo points spent and charges
/// ResetMoenyType x ResetMoenyCount (use_money) or ID_ResetItem x ResetItemCount. Changes reach the client as DbWorkItems.
/// </summary>
public static partial class Mir5GameServer
{
    private static JsonRow? SkillLevelRow(int group, int level)
    {
        var t = DataTables.Find("Common/PlayerSkillLevel");
        if (t == null) return null;
        foreach (var kv in t.Rows)
            if (kv.Value.TryGetProperty("Group", out var g) && g.GetInt32() == group && kv.Value.TryGetProperty("SkillLevel", out var l) && l.GetInt32() == level)
                return new JsonRow(kv.Value);
        return null;
    }

    private readonly record struct JsonRow(System.Text.Json.JsonElement E)
    {
        public int Int(string n) => E.TryGetProperty(n, out var v) ? v.GetInt32() : 0;
        public List<int> Ints(string n) => E.TryGetProperty(n, out var v) ? v.EnumerateArray().Select(x => x.GetInt32()).ToList() : new();
        public string Str(string n) => E.TryGetProperty(n, out var v) ? v.GetString() ?? "" : "";
    }

    private static bool SkillBase(int skillType, out int group, out int maxLevel)
    {
        group = 0; maxLevel = 0;
        if (DataTables.Find("Common/PlayerSkillBase") is not { } t || !t.TryGetRow(skillType, out var r)) return false;
        group = r.GetProperty("ID_LevelGroup").GetInt32();
        maxLevel = r.GetProperty("MaxLevel").GetInt32();
        return true;
    }

    private static Ds.DbWorkItem SkillItem(Conn c, DsSkillRepository.Skill s, bool delete = false) => new()
    {
        PlayerSkill = new Ds.SqlPlayerSkillTable { PlayerUid = c.PlayerUid, SkillType = (PlayerSkillType)s.SkillType, Level = s.Level, AccHaloPoint = s.AccHaloPoint },
        DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None,
    };

    private static Ds.DbWorkItem HaloItem(Conn c, int halo) => new() { HaloPoint = new Ds.SqlHaloPointTable { PlayerUid = c.PlayerUid, HaloPoint = halo } };

    private static ErrorCode SkillError(DsSkillRepository.Result r) => r switch
    {
        DsSkillRepository.Result.Duplicated => ErrorCode.PlayerSkillDuplicated,
        DsSkillRepository.Result.NotFound => ErrorCode.PlayerSkillNotFound,
        DsSkillRepository.Result.MaxLevel => ErrorCode.PlayerSkillAscendNotAble,
        DsSkillRepository.Result.NoItems => ErrorCode.ItemNotEnough,
        DsSkillRepository.Result.NoMoney => ErrorCode.MoneyNotEnough,
        DsSkillRepository.Result.NoHalo => ErrorCode.PlayerSkillAscendNotAble,
        _ => ErrorCode.Failure,
    };

    /// <summary>At login: all learned ascender skills.</summary>
    private static async Task SendPlayerSkillsAsync(Conn c)
    {
        var items = (await DsSkillRepository.ListAsync(c.PlayerUid)).Select(s => SkillItem(c, s)).ToList();
        if (items.Count > 0) await PushDbItemsAsync(c, items);
    }

    private static async Task OnPlayerSkillAdvanceAsync(Conn c, int field, PlayerSkillType type, bool learn)
    {
        int skill = (int)type;
        var empty = learn ? (Google.Protobuf.IMessage)new MirProto.ServerMsgTwoway.PlayerSkillLearnResponse() : new MirProto.ServerMsgTwoway.PlayerSkillLevelUpResponse();
        if (!SkillBase(skill, out int group, out int maxLevel)) { await c.Twoway(Failed(field, empty, ErrorCode.PlayerSkillNotFound)); return; }

        var (result, row, halo, left) = await DsSkillRepository.AdvanceAsync(c.PlayerUid, skill, learn, maxLevel, level =>
        {
            var r = SkillLevelRow(group, level);
            var items = new List<(int, int)>();
            if (r is { } rr) { var ids = rr.Ints("ID_LevelUpItem"); var counts = rr.Ints("LevelUpItemCount"); for (int i = 0; i < ids.Count; i++) if (ids[i] != 0) items.Add((ids[i], i < counts.Count ? counts[i] : 1)); }
            return (items, r?.Int("SkillLevelUpHaloPointCount") ?? 0);
        });
        if (result != DsSkillRepository.Result.Ok)
        {
            Logger.Info($"[Mir5Skill] {c.Nickname} {(learn ? "learn" : "level up")} skill {skill} refused: {result}");
            await c.Twoway(Failed(field, empty, SkillError(result)));
            return;
        }
        var push = new List<Ds.DbWorkItem> { SkillItem(c, row!), HaloItem(c, halo) };
        foreach (var (item, qty) in left) push.Add(StackableItem(c, item, qty));
        await PushDbItemsAsync(c, push);
        if (skill is 9 or 10 or 11) await UnlockMountActionAsync(c);   // a mount skill unlocks the ring-menu Mount action
        Logger.Info($"[Mir5Skill] {c.Nickname} {(learn ? "learned" : "levelled")} skill {skill} -> level {row!.Level}");
        await c.Twoway(Reply(field, empty));
        await AchEventAsync(c, "PlayerSkillLevelUp", skill, row.Level);      // "Set" define: the skill's new level
    }

    private static async Task OnPlayerSkillResetAsync(Conn c, int field, CMT.PlayerSkillResetRequest req)
    {
        int skill = (int)req.SkillType;
        var empty = new MirProto.ServerMsgTwoway.PlayerSkillResetResponse();
        var current = (await DsSkillRepository.ListAsync(c.PlayerUid)).FirstOrDefault(s => s.SkillType == skill);
        if (current == null || !SkillBase(skill, out int group, out _)) { await c.Twoway(Failed(field, empty, ErrorCode.PlayerSkillNotFound)); return; }
        var r = SkillLevelRow(group, current.Level);
        var itemCost = new List<(int, int)>();
        int moneyId = 11; long moneyCost = 0;
        if (r is { } rr)
        {
            var ids = rr.Ints("ID_ResetItem"); var counts = rr.Ints("ResetItemCount");
            for (int i = 0; i < ids.Count; i++) if (ids[i] != 0) itemCost.Add((ids[i], i < counts.Count ? counts[i] : 1));
            moneyCost = rr.Int("ResetMoenyCount");
            moneyId = rr.Str("ResetMoenyType").EndsWith("Copper") ? 1 : 11;
        }
        var (result, halo, money, left) = await DsSkillRepository.ResetAsync(c.PlayerUid, skill, moneyId, moneyCost, itemCost, req.UseMoney);
        if (result != DsSkillRepository.Result.Ok) { await c.Twoway(Failed(field, empty, SkillError(result))); return; }
        var push = new List<Ds.DbWorkItem> { SkillItem(c, current, delete: true), HaloItem(c, halo) };
        if (req.UseMoney) push.Add(MoneyItem(c, moneyId, money));
        foreach (var (item, qty) in left) push.Add(StackableItem(c, item, qty));
        await PushDbItemsAsync(c, push);
        Logger.Info($"[Mir5Skill] {c.Nickname} reset skill {skill} (halo now {halo})");
        await c.Twoway(Reply(field, empty));
    }
}