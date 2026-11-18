using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using AchGroup = M5.Database.Mysql.DsAchievementRepository.Group;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Achievements (Common/AchievementDefine, AchievementBase, AchievementReward; progress in ds_game.achievement_group).
///
/// The tables: a <b>define</b> says what is counted (AchievementDefineType + a value, e.g. ItemTypeUse 1001 = health potions) and how (Add or Set);
/// a <b>group</b> is a chain of steps (AchievementBase rows with the same AchievementGroupId, AchievementGroupStep 1, 2, 3...) that all count the same
/// define; each step has AchievementDefineCountAccrue, the cumulative total that completes it, and a reward row.
///
/// What the client expects (SqlAchievementGroupTable, applied by UDS_AchievementData::SetData): per group the current step, a state and the total count.
/// States are AchievementState 0 None, 1 Progress, 2 Completable (this and only this enables the claim button), 3 Complete (the final step was claimed).
/// The client creates every group itself at step 1 / Progress, so only changes need sending; at login every group is sent anyway.
/// Claiming (AchievementCompleteReq 21500 / CompleteAllReq 21501) pays the reward row, moves the group to the next step (Completable at once if the
/// total already reaches it) and replies with the reward rows for the popup.
///
/// Events (<see cref="AchEventAsync"/>) are raised by the game code: PlayerConnection (each login), PlayerDying, PlayerGrade, MonsterKillAll /
/// MonsterKillZone / MonsterKillZoneGroup / MonsterKillGradeType, QuestCompleteType, ItemTypeUse (1001 health potion, 1002 mana potion), PlayerSkillLevelUp.
/// Not tracked yet: gathering, breaches and gates, dungeon clears, taming, relation grades, skill grow levels, character level appoint, AchievementExp.
/// </summary>
public static partial class Mir5GameServer
{
    private const int AchProgress = 1, AchCompletable = 2, AchComplete = 3;

    private sealed record AchStep(int Id, int Group, int Step, int DefineId, long Accrue, int RewardId, bool Auto);
    private sealed record AchDef(int Id, string Type, long V1, bool Set);

    private static readonly object AchLoadLock = new();
    private static Dictionary<int, List<AchStep>>? _achGroups;
    private static Dictionary<int, AchStep>? _achById;
    private static Dictionary<string, List<(int Group, AchDef Def)>>? _achByType;

    private static void EnsureAchData()
    {
        if (_achByType != null) return;
        lock (AchLoadLock)
        {
            if (_achByType != null) return;
            var defs = new Dictionary<int, AchDef>();
            if (DataTables.Find("Common/AchievementDefine") is { } dt)
                foreach (var kv in dt.Rows)
                {
                    var r = kv.Value;
                    int id = int.Parse(kv.Key);
                    defs[id] = new AchDef(id,
                        r.TryGetProperty("AchievementDefine", out var t) ? (t.GetString() ?? "").Split("::").Last() : "",
                        r.TryGetProperty("AchievementDefineValue1", out var v1) ? v1.GetInt64() : 0,
                        r.TryGetProperty("OperationType", out var op) && (op.GetString() ?? "").EndsWith("Set"));
                }

            var groups = new Dictionary<int, List<AchStep>>();
            var byId = new Dictionary<int, AchStep>();
            if (DataTables.Find("Common/AchievementBase") is { } bt)
                foreach (var kv in bt.Rows)
                {
                    var r = kv.Value;
                    var step = new AchStep(int.Parse(kv.Key),
                        r.TryGetProperty("AchievementGroupId", out var g) ? g.GetInt32() : 0,
                        r.TryGetProperty("AchievementGroupStep", out var s) ? s.GetInt32() : 1,
                        r.TryGetProperty("ID_AchievementDefine", out var d) ? d.GetInt32() : 0,
                        r.TryGetProperty("AchievementDefineCountAccrue", out var a) ? a.GetInt64() : 1,
                        r.TryGetProperty("ID_AchievementReward", out var rw) ? rw.GetInt32() : 0,
                        r.TryGetProperty("IsAutoComplete", out var ac) && ac.ValueKind == System.Text.Json.JsonValueKind.True);
                    if (!groups.TryGetValue(step.Group, out var list)) groups[step.Group] = list = new List<AchStep>();
                    list.Add(step);
                    byId[step.Id] = step;
                }
            foreach (var list in groups.Values) list.Sort((x, y) => x.Step.CompareTo(y.Step));

            var byType = new Dictionary<string, List<(int, AchDef)>>();
            foreach (var (group, steps) in groups)
                if (defs.TryGetValue(steps[0].DefineId, out var def))
                {
                    if (!byType.TryGetValue(def.Type, out var l)) byType[def.Type] = l = new List<(int, AchDef)>();
                    l.Add((group, def));
                }

            _achGroups = groups; _achById = byId; _achByType = byType;
            Logger.Info($"[Mir5Ach] {groups.Count} achievement groups, {byId.Count} steps, {defs.Count} defines ({byType.Count} event types)");
        }
    }

    private static Ds.DbWorkItem AchItem(Conn c, AchGroup g) => new()
    {
        AchievementGroup = new Ds.SqlAchievementGroupTable { PlayerUid = c.PlayerUid, GroupId = g.GroupId, Step = g.Step, State = g.State, TotalCount = g.TotalCount },
    };

    /// <summary>The state a group is in at its current step, given the total: Completable once the total reaches the step's cumulative count.</summary>
    private static int AchStateFor(int group, int step, long total)
    {
        var steps = _achGroups![group];
        var row = steps.FirstOrDefault(s => s.Step == step);
        return row != null && total >= row.Accrue ? AchCompletable : AchProgress;
    }

    /// <summary>Loads the player's progress and sends every group to the client (the client then shows the right counts and which ones can be claimed).</summary>
    private static async Task SendAchievementsAsync(Conn c)
    {
        EnsureAchData();
        var saved = (await DsAchievementRepository.ListAsync(c.PlayerUid)).ToDictionary(g => g.GroupId);
        var all = new Dictionary<int, AchGroup>();
        var fixedRows = new List<AchGroup>();
        foreach (var (group, steps) in _achGroups!)
        {
            var row = saved.TryGetValue(group, out var s) ? s : new AchGroup(group, 1, AchProgress, 0);
            if (row.State != AchComplete)         // a changed table (or a row written before the count was reached) can leave a stale state
            {
                int want = AchStateFor(group, row.Step, row.TotalCount);
                if (want != row.State) { row = row with { State = want }; fixedRows.Add(row); }
            }
            all[group] = row;
        }
        c.Ach = all;
        foreach (var g in fixedRows) await DsAchievementRepository.UpsertAsync(c.PlayerUid, g);

        var items = all.Values.Select(g => AchItem(c, g)).ToList();
        for (int i = 0; i < items.Count; i += 40) await PushDbItemsAsync(c, items.Skip(i).Take(40));
        Logger.Info($"[Mir5Ach] {c.Nickname}: sent {items.Count} groups ({all.Values.Count(g => g.State == AchCompletable)} claimable, {all.Values.Count(g => g.State == AchComplete)} complete)");
    }

    /// <summary>
    /// Something happened that achievements count: <paramref name="type"/> is the AchievementDefineType name, <paramref name="value"/> the define's
    /// value (zone id, item type, grade...; a define with value 0 counts every event of its type) and <paramref name="amount"/> how much to add
    /// (or, for "Set" defines, the new absolute value).
    /// </summary>
    private static async Task AchEventAsync(Conn c, string type, long value = 0, long amount = 1)
    {
        try
        {
            if (c.Ach == null || amount <= 0) return;
            EnsureAchData();
            if (!_achByType!.TryGetValue(type, out var candidates)) return;

            var changed = new List<AchGroup>();
            foreach (var (group, def) in candidates)
            {
                if (def.V1 != 0 && def.V1 != value) continue;
                AchGroup row;
                lock (c.Ach)
                {
                    row = c.Ach.TryGetValue(group, out var cur) ? cur : new AchGroup(group, 1, AchProgress, 0);
                    if (row.State == AchComplete) continue;
                    long total = def.Set ? Math.Max(row.TotalCount, amount) : row.TotalCount + amount;
                    if (total == row.TotalCount) continue;
                    row = row with { TotalCount = total, State = row.State == AchProgress ? AchStateFor(group, row.Step, total) : row.State };
                    c.Ach[group] = row;
                }
                changed.Add(row);
            }
            if (changed.Count == 0) return;

            var work = new List<Ds.DbWorkItem>();
            foreach (var g in changed)
            {
                await DsAchievementRepository.UpsertAsync(c.PlayerUid, g);
                work.Add(AchItem(c, g));
                if (g.State == AchCompletable)
                {
                    var step = _achGroups![g.GroupId].First(s => s.Step == g.Step);
                    Logger.Info($"[Mir5Ach] {c.Nickname}: achievement {step.Id} (group {g.GroupId} step {g.Step}) can be claimed");
                    if (step.Auto)
                    {
                        var rewards = new List<Ds.DbWorkItem>();
                        if (await AchClaimAsync(c, step.Id, rewards) == ErrorCode.Success) work.AddRange(rewards);
                    }
                }
            }
            await PushDbItemsAsync(c, work);
        }
        catch (Exception ex) { Logger.Warning($"[Mir5Ach] event {type} failed for {c.Nickname}: {ex.Message}"); }
    }

    /// <summary>A monster died: counts for "kill any monster", per grade (Normal 1, Elite 2, Named 3, Boss 4, StageBoss 5, WorldBoss 6), per zone and per zone group.</summary>
    private static async Task AchKillEventsAsync(Conn killer, Mir5Spawns.Npc npc)
    {
        await AchEventAsync(killer, "MonsterKillAll");
        int grade = npc.BattleGrade switch { "Normal" => 1, "Elite" => 2, "Named" => 3, "Boss" => 4, "StageBoss" => 5, "WorldBoss" => 6, _ => 0 };
        if (grade > 0) await AchEventAsync(killer, "MonsterKillGradeType", grade);
        if (npc.Zone > 0)
        {
            await AchEventAsync(killer, "MonsterKillZone", npc.Zone);
            if (DataTables.Find("Common/ZoneBase") is { } zones && zones.TryGetRow(npc.Zone, out var z) && z.TryGetProperty("ID_ZoneGroup", out var zg) && zg.GetInt32() > 0)
                await AchEventAsync(killer, "MonsterKillZoneGroup", zg.GetInt32());
        }
    }

    /// <summary>
    /// A dungeon monster died: when no attackable monster of that dungeon is left, the run is cleared. Everybody inside gets a "DungeonClearType"
    /// event (1 Normal, 2 Heroic, 3 Raid, the DungeonTypeData order). The official server decides this from the dungeon script; without it
    /// "all monsters of the dungeon's spawn table are dead" is the closest rule.
    /// </summary>
    private static async Task AchDungeonClearCheckAsync(Mir5Spawns.Npc npc)
    {
        if (npc.Island < Mir5Spawns.DungeonKeyBase || npc.Dynamic) return;
        int dungeonId = npc.Island - Mir5Spawns.DungeonKeyBase;
        var list = Mir5Spawns.ForIsland(npc.Island);
        bool anyAlive;
        lock (list) anyAlive = list.Any(n => n.Alive && n.S.Attackable && !n.Dynamic);
        if (anyAlive || !Mir5Spawns.MarkDungeonCleared(dungeonId)) return;

        string typeName = DataTables.Find("Common/DungeonBase") is { } d && d.TryGetRow(dungeonId, out var row) && row.TryGetProperty("DungeonType", out var dt)
            ? (dt.GetString() ?? "").Split("::").Last() : "Normal";
        int type = typeName switch { "Heroic" => 2, "Raid" => 3, _ => 1 };
        Logger.Info($"[Mir5Ach] dungeon {dungeonId} ({typeName}) cleared");
        foreach (var p in Connections.Values.Where(x => x.InWorld && x.DungeonId == dungeonId).ToList())
        {
            await SystemMessageAsync(p, "Dungeon cleared!");
            await AchEventAsync(p, "DungeonClearType", type);
        }
    }

    private static async Task GiveAchRewardAsync(Conn c, int rewardId, List<Ds.DbWorkItem> work)
    {
        if (rewardId <= 0 || DataTables.Find("Common/AchievementReward") is not { } rewards || !rewards.TryGetRow(rewardId, out var r)) return;
        if (r.TryGetProperty("RewardMoneyType", out var types) && r.TryGetProperty("RewardMoneyCount", out var counts))
            for (int i = 0; i < types.GetArrayLength() && i < counts.GetArrayLength(); i++)
            {
                long amount = counts[i].GetInt64();
                if (amount > 0 && System.Enum.TryParse<MoneyType>((types[i].GetString() ?? "").Split("::").Last(), out var money) && money != MoneyType.None)
                    work.Add(MoneyItem(c, (int)money, await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, (int)money, amount, set: false)));
            }
        if (r.TryGetProperty("ID_RewardItemId", out var ids) && r.TryGetProperty("RewardItemCount", out var cnts))
            for (int i = 0; i < ids.GetArrayLength() && i < cnts.GetArrayLength(); i++)
                if (ids[i].GetInt32() > 0) await GiveItemAsync(c, ids[i].GetInt32(), cnts[i].GetInt32(), work);
    }

    /// <summary>Claims one achievement step: pays its reward and moves the group on. <paramref name="work"/> collects the changed database rows.</summary>
    private static async Task<ErrorCode> AchClaimAsync(Conn c, int achievementId, List<Ds.DbWorkItem> work)
    {
        EnsureAchData();
        if (c.Ach == null || !_achById!.TryGetValue(achievementId, out var step)) return ErrorCode.Failure;
        AchGroup row;
        lock (c.Ach)
        {
            row = c.Ach.TryGetValue(step.Group, out var cur) ? cur : new AchGroup(step.Group, 1, AchProgress, 0);
            if (row.Step > step.Step || (row.Step == step.Step && row.State == AchComplete)) return ErrorCode.AchievementAlreadyComplete;
            if (row.Step != step.Step || row.TotalCount < step.Accrue) return ErrorCode.AchievementNotCompletableCondition;
        }

        await GiveAchRewardAsync(c, step.RewardId, work);

        var next = _achGroups![step.Group].FirstOrDefault(s => s.Step == step.Step + 1);
        var updated = next != null
            ? new AchGroup(step.Group, next.Step, row.TotalCount >= next.Accrue ? AchCompletable : AchProgress, row.TotalCount)
            : new AchGroup(step.Group, step.Step, AchComplete, row.TotalCount);
        lock (c.Ach) c.Ach[step.Group] = updated;
        await DsAchievementRepository.UpsertAsync(c.PlayerUid, updated);
        work.Add(AchItem(c, updated));
        Logger.Info($"[Mir5Ach] {c.Nickname} claimed achievement {achievementId} (group {step.Group} step {step.Step}); now step {updated.Step} state {updated.State}");
        return ErrorCode.Success;
    }

    private static async Task OnAchievementCompleteAsync(Conn c, int field, CMT.AchievementCompleteRequest req)
    {
        var work = new List<Ds.DbWorkItem>();
        var error = await AchClaimAsync(c, req.AchievementId, work);
        var res = new SMT.AchievementCompleteResponse { AchievementId = req.AchievementId };
        if (error == ErrorCode.Success)
        {
            await PushDbItemsAsync(c, work);
            res.RewardView.AddRange(work.Where(w => w.AchievementGroup == null));
        }
        else Logger.Info($"[Mir5Ach] claim of {req.AchievementId} refused: {error}");
        await c.Twoway(RaidReply(field, res, error));
    }

    private static async Task OnAchievementCompleteAllAsync(Conn c, int field, CMT.AchievementCompleteAllRequest req)
    {
        var work = new List<Ds.DbWorkItem>();
        var res = new SMT.AchievementCompleteAllResponse();
        foreach (var id in req.AchievementIds.Distinct())
            if (await AchClaimAsync(c, id, work) == ErrorCode.Success) res.AchievementIds.Add(id);
        await PushDbItemsAsync(c, work);
        res.RewardView.AddRange(work.Where(w => w.AchievementGroup == null));
        await c.Twoway(RaidReply(field, res, res.AchievementIds.Count > 0 || req.AchievementIds.Count == 0 ? ErrorCode.Success : ErrorCode.AchievementNotCompletableCondition));
    }
}
