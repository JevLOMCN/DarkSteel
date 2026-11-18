using System.Collections.Concurrent;
using Google.Protobuf.WellKnownTypes;
using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CM = MirProto.ClientMsg;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;
using QKind = M5.Database.Mysql.DsQuestRepository.Kind;
using Quest = M5.Database.Mysql.DsQuestRepository.Quest;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Quests. Data: Common/QuestBase (type, objectives, reward), QuestMain / QuestLocal / QuestRepeat (accept + complete rules, next quest),
/// QuestObjective (kind + target + count), QuestReward, QuestMission + QuestMissionGroup (weekly / monthly missions per player grade).
///
/// Kinds and where they live (DsQuestRepository): Main (one active at a time, auto-chains), Local (accepted from NPCs, once), Repeat (accepted
/// from NPCs, up to RepeatCount finishes), Weekly / Monthly missions (assigned automatically for the player's grade, reset every week / month).
/// Daily and instance quests are not implemented.
///
/// The client applies quest changes from DbWorkItem rows (MainQuest / LocalQuest / RepeatQuest / WeeklyQuest / MonthlyQuest, QuestComplete,
/// RepeatQuestComplete, QuestTracking), so every change is pushed that way. Objective kinds progressed here: monster kills (id, any, group,
/// grade, with the Probability variants), talking to an NPC, reaching a coordinate, finishing other quests, and the "state" kinds that are
/// read from the character (item count, level, player grade). Gathering and the rest are not progressed (use the GM command questprogress).
/// </summary>
public static partial class Mir5GameServer
{
    private sealed record Objective(int Id, string Type, int Target, int Parameter, int Count, int Zone);
    private sealed record QuestDef(int Id, string TypeName, QKind? Kind, List<Objective> Objectives, int RewardId, int AutoAccept, bool Manual, int RepeatCount);

    private static readonly ConcurrentDictionary<int, QuestDef?> QuestDefs = new();
    private static QuestDef? FindQuest(int id) => QuestDefs.GetOrAdd(id, LoadQuest);

    private static QKind? KindOf(string type) => type switch
    {
        "Main" => QKind.Main,
        "Local" => QKind.Local,
        "Repeat" => QKind.Repeat,
        "MissionWeekly" => QKind.Weekly,
        "MissionMonthly" => QKind.Monthly,
        _ => null,
    };

    private static QuestDef? LoadQuest(int id)
    {
        var bases = DataTables.Find("Common/QuestBase");
        if (bases == null || !bases.TryGetRow(id, out var b)) return null;
        var objectives = new List<Objective>();
        var objTable = DataTables.Find("Common/QuestObjective");
        if (objTable != null && b.TryGetProperty("ID_QuestObjectiveId", out var ids))
            foreach (var oid in ids.EnumerateArray().Select(x => x.GetInt64()))
                if (objTable.TryGetRow(oid, out var o))
                    objectives.Add(new Objective((int)oid,
                        (o.TryGetProperty("QuestDefineType", out var t) ? t.GetString() ?? "" : "").Split("::").Last(),
                        o.TryGetProperty("QuestDefineTarget", out var tg) ? tg.GetInt32() : 0,
                        o.TryGetProperty("QuestDefineParameter", out var pa) ? pa.GetInt32() : 0,
                        o.TryGetProperty("QuestDefineCount", out var cn) ? Math.Max(1, cn.GetInt32()) : 1,
                        o.TryGetProperty("ID_ProgressZone", out var zn) ? zn.GetInt32() : 0));

        string typeName = (b.TryGetProperty("QuestType", out var qt) ? qt.GetString() ?? "" : "").Split("::").Last();
        int next = 0, repeat = 1; bool manual = true;
        var rule = typeName switch { "Main" => "Common/QuestMain", "Local" => "Common/QuestLocal", _ => null };
        var ruleTable = rule == null ? null : DataTables.Find(rule);
        if (ruleTable != null && ruleTable.TryGetRow(id, out var m))
        {
            next = m.TryGetProperty("ID_AutoAcceptQuestId", out var an) ? an.GetInt32() : 0;
            manual = !m.TryGetProperty("CompleteType", out var ct) || (ct.GetString() ?? "").EndsWith("Manual", StringComparison.Ordinal);
        }
        if (typeName == "Repeat" && DataTables.Find("Common/QuestRepeat") is { } rp && rp.TryGetRow(id, out var rr))
            repeat = rr.TryGetProperty("RepeatCount", out var rc) ? Math.Max(1, rc.GetInt32()) : 1;
        if (typeName is "MissionWeekly" or "MissionMonthly") manual = true;   // claimed from the mission window
        return new QuestDef(id, typeName, KindOf(typeName), objectives,
            b.TryGetProperty("ID_QuestRewardId", out var rw) ? rw.GetInt32() : 0, next, manual, repeat);
    }

    private static Dictionary<int, int>? _zoneIsland;
    /// <summary>Island that contains a zone id (Common/ZoneIsland: each island row lists its ID_Zone values); 0 when unknown.</summary>
    private static int IslandOfZone(int zone)
    {
        if (_zoneIsland == null)
        {
            var map = new Dictionary<int, int>();
            var table = DataTables.Find("Common/ZoneIsland");
            if (table != null)
                foreach (var kv in table.Rows)
                    if (int.TryParse(kv.Key, out var island) && kv.Value.TryGetProperty("ID_Zone", out var zones))
                        foreach (var z in zones.EnumerateArray()) map[z.GetInt32()] = island;
            _zoneIsland = map;
        }
        return _zoneIsland.TryGetValue(zone, out var i) ? i : 0;
    }

    // ---- DbWorkItems ----

    private static Ds.DbWorkItem QuestItem(Conn c, QKind kind, Quest q, bool delete = false)
    {
        var ts = Timestamp.FromDateTime(DateTime.SpecifyKind(q.CreatedUtc, DateTimeKind.Utc));
        var item = new Ds.DbWorkItem { DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None };
        switch (kind)
        {
            case QKind.Main:
            {
                var t = new Ds.SqlMainQuestTable { PlayerUid = c.PlayerUid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = ts };
                t.ObjectiveCount.AddRange(q.Counts); item.MainQuest = t; break;
            }
            case QKind.Local:
            {
                var t = new Ds.SqlLocalQuestTable { PlayerUid = c.PlayerUid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = ts, AutoTracking = q.AutoTracking };
                t.ObjectiveCount.AddRange(q.Counts); item.LocalQuest = t; break;
            }
            case QKind.Repeat:
            {
                var t = new Ds.SqlRepeatQuestTable { PlayerUid = c.PlayerUid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = ts, AutoTracking = q.AutoTracking };
                t.ObjectiveCount.AddRange(q.Counts); item.RepeatQuest = t; break;
            }
            case QKind.Weekly:
            {
                var t = new Ds.SqlWeeklyQuestTable { PlayerUid = c.PlayerUid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = ts };
                t.ObjectiveCount.AddRange(q.Counts); item.WeeklyQuest = t; break;
            }
            default:
            {
                var t = new Ds.SqlMonthlyQuestTable { PlayerUid = c.PlayerUid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = ts };
                t.ObjectiveCount.AddRange(q.Counts); item.MonthlyQuest = t; break;
            }
        }
        return item;
    }

    private static Ds.DbWorkItem TrackingItem(Conn c, int questId) =>
        new() { QuestTracking = new Ds.SqlQuestTrackingTable { PlayerUid = c.PlayerUid, QuestId = questId } };

    private static Ds.DbWorkItem CompletedItem(Conn c, int questId, bool delete = false) =>
        new() { QuestComplete = new Ds.SqlQuestCompleteTable { PlayerUid = c.PlayerUid, QuestId = questId }, DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None };

    private static Ds.DbWorkItem RepeatCountItem(Conn c, int questId, int count) =>
        new() { RepeatQuestComplete = new Ds.SqlRepeatQuestCompleteTable { PlayerUid = c.PlayerUid, QuestId = questId, CompleteCount = count } };

    /// <summary>Every active quest of the player with its kind.</summary>
    private static async Task<List<(QKind Kind, Quest Quest)>> ActiveQuestsAsync(long playerUid)
    {
        var all = new List<(QKind, Quest)>();
        foreach (QKind k in System.Enum.GetValues<QKind>())
            foreach (var q in await DsQuestRepository.ListAsync(k, playerUid)) all.Add((k, q));
        return all;
    }

    private static async Task StartQuestAsync(Conn c, QKind kind, int questId, List<Ds.DbWorkItem> push, bool track)
    {
        var q = new Quest(questId, 0, 0, 0, 0, DateTime.UtcNow);
        await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, q);
        push.Add(QuestItem(c, kind, q));
        if (track)
        {
            await DsQuestRepository.SetTrackingAsync(c.PlayerUid, questId);
            push.Add(TrackingItem(c, questId));
        }
        Logger.Info($"[Mir5Quest] {c.Nickname} started {kind} quest {questId}");
    }

    // ---- progress ----

    /// <summary>Applies <paramref name="matches"/> to every active quest in progress; finished quests become claimable (or complete by themselves).</summary>
    private static async Task QuestAdvanceAsync(Conn c, Func<Objective, int, bool> matches, int amount = 1, bool absolute = false)
    {
        foreach (var (kind, q0) in await ActiveQuestsAsync(c.PlayerUid))
        {
            if (q0.State != 0) continue;
            var def = FindQuest(q0.QuestId);
            if (def == null || def.Objectives.Count == 0) continue;

            var counts = q0.Counts;
            bool changed = false;
            int n = Math.Min(def.Objectives.Count, 3);
            for (int i = 0; i < n; i++)
            {
                var o = def.Objectives[i];
                if (!matches(o, i)) continue;
                int target = absolute ? Math.Min(o.Count, amount) : Math.Min(o.Count, counts[i] + amount);
                if (target == counts[i] || (!absolute && counts[i] >= o.Count)) continue;
                counts[i] = target;
                changed = true;
            }
            if (!changed) continue;

            bool done = Enumerable.Range(0, n).All(i => counts[i] >= def.Objectives[i].Count);
            var q = q0.WithCounts(counts) with { State = done ? 1 : 0 };
            await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, q);
            await PushDbItemsAsync(c, new[] { QuestItem(c, kind, q) });
            Logger.Info($"[Mir5Quest] {c.Nickname} {kind} quest {q.QuestId}: {string.Join("/", counts.Take(n))} of {string.Join("/", def.Objectives.Take(n).Select(o => o.Count))}{(done ? " - objectives complete" : "")}");
            if (done && !def.Manual) await QuestCompleteAsync(c, q.QuestId);
        }
    }

    private static int NpcGradeValue(string name) => name.Split("::").Last() switch { "Normal" => 1, "Elite" => 2, "Named" or "Boss" or "WorldBoss" or "StageBoss" => 3, _ => 0 };

    /// <summary>Called when the player kills a monster.</summary>
    private static Task QuestOnKillAsync(Conn c, int npcBase)
    {
        var table = DataTables.Find("Common/NpcBase");
        int grade = 0; var groups = new HashSet<int>();
        if (table != null && table.TryGetRow(npcBase, out var row))
        {
            if (row.TryGetProperty("NpcBattleGrade", out var g)) grade = NpcGradeValue(g.GetString() ?? "");
            if (row.TryGetProperty("NpcQuestGroup", out var qg)) foreach (var x in qg.EnumerateArray()) groups.Add(x.GetInt32());
        }
        bool Chance(Objective o) => o.Type.StartsWith("Probability", StringComparison.Ordinal) ? Rng.Next(1_000_000) < Math.Max(0, o.Parameter) : true;
        return QuestAdvanceAsync(c, (o, _) =>
        {
            var kind = o.Type.Replace("Probability", "").Replace("Party", "");
            return kind switch
            {
                "NpcAllKill" => Chance(o),
                "NpcAppointKill" => o.Target == npcBase && Chance(o),
                "NpcGroupKill" => groups.Contains(o.Target) && Chance(o),
                "NpcGradeKill" => grade == o.Target && Chance(o),
                _ => false,
            };
        });
    }

    /// <summary>QuestMoveRequest (twoway 20200): the client reached a quest coordinate.</summary>
    private static async Task OnQuestMoveAsync(Conn c, int field)
    {
        await QuestAdvanceAsync(c, (o, _) => o.Type == "MoveProgressCoordinate" && (o.Zone == 0 || IslandOfZone(o.Zone) == c.IslandId || IslandOfZone(o.Zone) == 0));
        await c.Twoway(Reply(field, new SMT.QuestMoveResponse()));
    }

    /// <summary>QuestNpcTalkRequest (twoway 20201): the player talked to the NPC of a "talk" objective.</summary>
    private static async Task OnQuestNpcTalkAsync(Conn c, int field, CMT.QuestNpcTalkRequest req)
    {
        await QuestAdvanceAsync(c, (o, _) => o.Id == req.ObjectiveId && o.Type == "TalkAppointNpc");
        await c.Twoway(Reply(field, new SMT.QuestNpcTalkResponse()));
    }

    /// <summary>Objectives that mirror the character instead of counting events: owned item count, level, player grade.</summary>
    private static async Task QuestRefreshStateObjectivesAsync(Conn c)
    {
        var state = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
        int grade = state?.PlayerGrade ?? 1;
        var stack = state?.Stackables.ToDictionary(s => s.ItemId, s => s.Quantity) ?? new Dictionary<int, int>();
        await QuestSetAbsoluteAsync(c, o => o.Type switch
        {
            "ItemAppointTake" => stack.TryGetValue(o.Target, out var have) ? have : 0,
            "LevelAppointChar" => c.Level,
            "PlayerGrade" => grade,
            _ => -1,
        });
    }

    /// <summary>Sets objective counters to values computed from the character (-1 = leave the objective alone).</summary>
    private static async Task QuestSetAbsoluteAsync(Conn c, Func<Objective, int> value)
    {
        foreach (var (kind, q0) in await ActiveQuestsAsync(c.PlayerUid))
        {
            if (q0.State != 0) continue;
            var def = FindQuest(q0.QuestId);
            if (def == null) continue;
            var counts = q0.Counts; bool changed = false;
            int n = Math.Min(def.Objectives.Count, 3);
            for (int i = 0; i < n; i++)
            {
                int v = value(def.Objectives[i]);
                if (v < 0) continue;
                v = Math.Min(def.Objectives[i].Count, v);
                if (v != counts[i]) { counts[i] = v; changed = true; }
            }
            if (!changed) continue;
            bool done = Enumerable.Range(0, n).All(i => counts[i] >= def.Objectives[i].Count);
            var q = q0.WithCounts(counts) with { State = done ? 1 : 0 };
            await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, q);
            await PushDbItemsAsync(c, new[] { QuestItem(c, kind, q) });
            if (done && !def.Manual) await QuestCompleteAsync(c, q.QuestId);
        }
    }

    // ---- completion ----

    private static async Task GiveItemAsync(Conn c, int itemId, int count, List<Ds.DbWorkItem> items)
    {
        var table = DataTables.Find("Common/ItemBase");
        if (table == null || !table.TryGetRow(itemId, out var row) || count <= 0) return;
        bool equip = row.TryGetProperty("IsEquip", out var ie) && ie.ValueKind == System.Text.Json.JsonValueKind.True;
        if (equip)
        {
            var (_, _, durability) = Mir5World.DescribeEquipItem(itemId);
            for (int i = 0; i < Math.Min(count, 20); i++)
            {
                long uid = await DsPlayerRepository.AddEquipmentItemAsync(c.PlayerUid, itemId, durability);
                items.Add(new Ds.DbWorkItem
                {
                    ItemEquipment = new Ds.SqlItemEquipmentTable
                    { PlayerUid = c.PlayerUid, ItemUid = uid, ItemId = itemId, InventoryType = InventoryType.PlayerNormal, Level = 1, Durability = durability },
                });
            }
        }
        else
        {
            int total = await DsPlayerRepository.AddStackableAsync(c.PlayerUid, itemId, count);
            items.Add(StackableItem(c, itemId, total));
        }
    }

    /// <summary>Turns a quest in: pays the reward, records the completion and (main / local) starts the next quest.</summary>
    private static async Task<ErrorCode> QuestCompleteAsync(Conn c, int questId)
    {
        var def = FindQuest(questId);
        if (def?.Kind == null) return ErrorCode.QuestNotFound;
        var kind = def.Kind.Value;
        var q = await DsQuestRepository.GetAsync(kind, c.PlayerUid, questId);
        if (q == null) return ErrorCode.QuestNotFound;
        int n = Math.Min(def.Objectives.Count, 3);
        bool done = q.State == 1 || Enumerable.Range(0, n).All(i => q.Counts[i] >= def.Objectives[i].Count);
        if (q.State == 3) return ErrorCode.QuestAlreadyComplete;
        if (!done) return ErrorCode.QuestNotCompleteState;

        var items = new List<Ds.DbWorkItem>();
        long charExp = 0, playerExp = 0;
        var rewards = DataTables.Find("Common/QuestReward");
        if (rewards != null && def.RewardId > 0 && rewards.TryGetRow(def.RewardId, out var r))
        {
            charExp = r.TryGetProperty("CharExp", out var ce) ? ce.GetInt64() : 0;
            playerExp = r.TryGetProperty("PlayerExp", out var pe) ? pe.GetInt64() : 0;
            if (r.TryGetProperty("RewardMoneyType", out var mt) && r.TryGetProperty("RewardMoneyCount", out var mc))
            {
                var types = mt.EnumerateArray().Select(x => (x.GetString() ?? "").Split("::").Last()).ToList();
                var counts = mc.EnumerateArray().Select(x => x.GetInt64()).ToList();
                for (int i = 0; i < types.Count && i < counts.Count; i++)
                    if (counts[i] > 0 && System.Enum.TryParse<MoneyType>(types[i], out var money) && money != MoneyType.None)
                        items.Add(MoneyItem(c, (int)money, await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, (int)money, counts[i], set: false)));
            }
            if (r.TryGetProperty("ID_RewardItemId", out var rid) && r.TryGetProperty("RewardItemCount", out var rcn))
            {
                var ids = rid.EnumerateArray().Select(x => x.GetInt32()).ToList();
                var cnts = rcn.EnumerateArray().Select(x => x.GetInt32()).ToList();
                for (int i = 0; i < ids.Count && i < cnts.Count; i++)
                    if (ids[i] > 0) await GiveItemAsync(c, ids[i], cnts[i], items);
            }
        }

        switch (kind)
        {
            case QKind.Weekly:
            case QKind.Monthly:
            {
                var rewarded = q with { State = 3 };                           // stays listed (as rewarded) until the next reset
                await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, rewarded);
                items.Add(QuestItem(c, kind, rewarded));
                break;
            }
            case QKind.Repeat:
            {
                await DsQuestRepository.DeleteAsync(kind, c.PlayerUid, questId);
                items.Add(QuestItem(c, kind, q, delete: true));
                items.Add(RepeatCountItem(c, questId, await DsQuestRepository.AddRepeatCompleteAsync(c.PlayerUid, questId)));
                break;
            }
            default:   // Main, Local
            {
                await DsQuestRepository.DeleteAsync(kind, c.PlayerUid, questId);
                items.Add(QuestItem(c, kind, q, delete: true));
                await DsQuestRepository.MarkCompletedAsync(c.PlayerUid, questId);
                items.Add(CompletedItem(c, questId));
                if (def.AutoAccept > 0 && def.AutoAccept != questId && !await DsQuestRepository.IsCompletedAsync(c.PlayerUid, def.AutoAccept)
                    && FindQuest(def.AutoAccept)?.Kind is { } nextKind)
                    await StartQuestAsync(c, nextKind, def.AutoAccept, items, track: kind == QKind.Main);
                break;
            }
        }

        if (playerExp > 0)
        {
            var state = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
            if (state != null)
            {
                long exp = state.PlayerGradeExp + playerExp;
                await DsPlayerRepository.SetPlayerGradeAsync(c.PlayerUid, state.PlayerGrade, exp);
                items.Add(new Ds.DbWorkItem { PlayerGrade = new Ds.SqlPlayerGradeTable { PlayerUid = c.PlayerUid, PlayerGrade = state.PlayerGrade, PlayerGradeCap = state.PlayerGradeCap, Exp = exp } });
            }
        }

        Logger.Info($"[Mir5Quest] {c.Nickname} completed {kind} quest {questId} (reward {def.RewardId})");
        await PushDbItemsAsync(c, items);
        await c.Plain(new SM.ServerMessages { QuestCompleteRes = new SM.QuestCompleteResponse { ErrorCode = ErrorCode.Success, QuestId = questId } });
        if (charExp > 0) await GrantExpAsync(c, charExp);

        // finishing a quest can progress "complete N quests" objectives
        int typeNumber = def.TypeName switch { "Main" => 1, "Local" => 2, "Daily" => 5, "MissionWeekly" => 6, "MissionMonthly" => 7, "Instance" => 8, "Repeat" => 9, _ => 0 };
        await QuestAdvanceAsync(c, (o, _) => (o.Type == "QuestTypeComplete" && o.Target == typeNumber) || (o.Type == "QuestAppointComplete" && o.Target == questId));
        if (typeNumber > 0) await AchEventAsync(c, "QuestCompleteType", typeNumber);
        return ErrorCode.Success;
    }

    // ---- client requests ----

    private static async Task OnQuestCompleteRequestAsync(Conn c, int questId)
    {
        var error = await QuestCompleteAsync(c, questId);
        if (error != ErrorCode.Success)
        {
            Logger.Info($"[Mir5Quest] complete quest {questId} refused: {error}");
            await c.Plain(new SM.ServerMessages { QuestCompleteRes = new SM.QuestCompleteResponse { ErrorCode = error, QuestId = questId } });
        }
    }

    /// <summary>QuestCompleteAllRequest (twoway 20203): claim several quests (the weekly / monthly mission window).</summary>
    private static async Task OnQuestCompleteAllAsync(Conn c, int field, CMT.QuestCompleteAllRequest req)
    {
        foreach (var id in req.QuestIds) await QuestCompleteAsync(c, id);
        await c.Twoway(Reply(field, new SMT.QuestCompleteAllResponse()));
    }

    /// <summary>QuestTrackingRequest: show this quest in the HUD tracker (the client has one tracked quest).</summary>
    private static async Task OnQuestTrackingAsync(Conn c, int questId)
    {
        await DsQuestRepository.SetTrackingAsync(c.PlayerUid, questId);
        await PushDbItemsAsync(c, new[] { TrackingItem(c, questId) });
        await c.Plain(new SM.ServerMessages { QuestTrackingRes = new SM.QuestTrackingResponse { ErrorCode = ErrorCode.Success, QuestId = questId } });
    }

    private static async Task OnQuestAutoTrackingAsync(Conn c, CM.QuestAutoTrackingRequest req)
    {
        var def = FindQuest(req.QuestId);
        if (def?.Kind is QKind.Local or QKind.Repeat)
        {
            var kind = def.Kind.Value;
            var q = await DsQuestRepository.GetAsync(kind, c.PlayerUid, req.QuestId);
            if (q != null)
            {
                q = q with { AutoTracking = req.AutoTracking };
                await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, q);
                await PushDbItemsAsync(c, new[] { QuestItem(c, kind, q) });
            }
        }
        await c.Plain(new SM.ServerMessages { QuestAutoTrackingRes = new SM.QuestAutoTrackingResponse { ErrorCode = ErrorCode.Success, QuestId = req.QuestId, AutoTracking = req.AutoTracking } });
    }

    /// <summary>QuestAcceptRequest: accept a main, local or repeat quest from an NPC / the repeat quest list.</summary>
    private static async Task OnQuestAcceptAsync(Conn c, int questId)
    {
        var def = FindQuest(questId);
        ErrorCode error = ErrorCode.Success;
        if (def?.Kind is not (QKind.Main or QKind.Local or QKind.Repeat)) error = ErrorCode.QuestNotFound;
        else
        {
            var kind = def.Kind.Value;
            if (await DsQuestRepository.GetAsync(kind, c.PlayerUid, questId) != null) error = ErrorCode.QuestAlreadyAccept;
            else if (kind == QKind.Main && (await DsQuestRepository.ListAsync(QKind.Main, c.PlayerUid)).Count > 0) error = ErrorCode.QuestAlreadyAccept;
            else if (kind != QKind.Repeat && await DsQuestRepository.IsCompletedAsync(c.PlayerUid, questId)) error = ErrorCode.QuestAlreadyComplete;
            else if (kind == QKind.Repeat && (await DsQuestRepository.GetRepeatCountsAsync(c.PlayerUid)).GetValueOrDefault(questId) >= def.RepeatCount) error = ErrorCode.QuestNotAcceptRepeatCount;
        }

        if (error == ErrorCode.Success)
        {
            var items = new List<Ds.DbWorkItem>();
            bool track = def!.Kind == QKind.Main || await DsQuestRepository.GetTrackingAsync(c.PlayerUid) == 0;
            await StartQuestAsync(c, def.Kind!.Value, questId, items, track);
            await PushDbItemsAsync(c, items);
            await c.Plain(new SM.ServerMessages { QuestAcceptRes = new SM.QuestAcceptResponse { ErrorCode = ErrorCode.Success } });
            await QuestRefreshStateObjectivesAsync(c);
        }
        else
        {
            Logger.Info($"[Mir5Quest] accept quest {questId} refused: {error}");
            await c.Plain(new SM.ServerMessages { QuestAcceptRes = new SM.QuestAcceptResponse { ErrorCode = error } });
        }
    }

    /// <summary>QuestCancelRequest: local and repeat quests can be abandoned; main quests and missions cannot.</summary>
    private static async Task OnQuestCancelAsync(Conn c, int questId)
    {
        var def = FindQuest(questId);
        ErrorCode error = ErrorCode.QuestNotCancel;
        if (def?.Kind is QKind.Local or QKind.Repeat)
        {
            var kind = def.Kind.Value;
            var q = await DsQuestRepository.GetAsync(kind, c.PlayerUid, questId);
            if (q == null) error = ErrorCode.QuestNotFound;
            else
            {
                await DsQuestRepository.DeleteAsync(kind, c.PlayerUid, questId);
                var items = new List<Ds.DbWorkItem> { QuestItem(c, kind, q, delete: true) };
                if (await DsQuestRepository.GetTrackingAsync(c.PlayerUid) == questId) await DsQuestRepository.SetTrackingAsync(c.PlayerUid, 0);
                await PushDbItemsAsync(c, items);
                error = ErrorCode.Success;
                Logger.Info($"[Mir5Quest] {c.Nickname} abandoned {kind} quest {questId}");
            }
        }
        await c.Plain(new SM.ServerMessages { QuestCancelRes = new SM.QuestCancelResponse { ErrorCode = error, QuestId = questId } });
    }

    // ---- weekly / monthly missions ----

    private static DateTime WeekStartUtc(DateTime now) => now.Date.AddDays(-(((int)now.DayOfWeek + 6) % 7));   // Monday 00:00 UTC
    private static DateTime MonthStartUtc(DateTime now) => new(now.Year, now.Month, 1, 0, 0, 0, DateTimeKind.Utc);

    /// <summary>
    /// Makes sure the player has this week's and this month's missions for their player grade (Common/QuestMissionGroup picks the group,
    /// Common/QuestMission lists the quests of a group) and resets them when the period has rolled over.
    /// </summary>
    private static async Task EnsureMissionQuestsAsync(Conn c, int playerGrade, List<Ds.DbWorkItem> push)
    {
        var groups = DataTables.Find("Common/QuestMissionGroup");
        var missions = DataTables.Find("Common/QuestMission");
        if (groups == null || missions == null) return;
        int weeklyGroup = 0, monthlyGroup = 0, bestGrade = -1;
        foreach (var kv in groups.Rows)
        {
            int g = kv.Value.TryGetProperty("PlayerGrade", out var pg) ? pg.GetInt32() : 0;
            if (g <= playerGrade && g > bestGrade)
            {
                bestGrade = g;
                weeklyGroup = kv.Value.TryGetProperty("QuestWeeklyGroup", out var w) ? w.GetInt32() : 0;
                monthlyGroup = kv.Value.TryGetProperty("QuestMonthlyGroup", out var m) ? m.GetInt32() : 0;
            }
        }

        async Task Ensure(QKind kind, int group, DateTime periodStart)
        {
            if (group <= 0) return;
            var wanted = missions.Rows.Where(kv => kv.Value.TryGetProperty("QuestMissionGroup", out var qg) && qg.GetInt32() == group)
                .Select(kv => int.Parse(kv.Key)).Where(id => FindQuest(id)?.Kind == kind).ToList();
            var have = await DsQuestRepository.ListAsync(kind, c.PlayerUid);
            if (have.Any(q => q.CreatedUtc < periodStart))                       // period rolled over: start fresh
            {
                foreach (var q in have) push.Add(QuestItem(c, kind, q, delete: true));
                await DsQuestRepository.DeleteAllAsync(kind, c.PlayerUid);
                have.Clear();
            }
            foreach (var id in wanted)
            {
                if (have.Any(q => q.QuestId == id)) continue;
                await DsQuestRepository.UpsertAsync(kind, c.PlayerUid, new Quest(id, 0, 0, 0, 0, DateTime.UtcNow));
            }
        }
        var now = DateTime.UtcNow;
        await Ensure(QKind.Weekly, weeklyGroup, WeekStartUtc(now));
        await Ensure(QKind.Monthly, monthlyGroup, MonthStartUtc(now));
    }

    // ---- login ----

    /// <summary>At login: tell the client every quest it has, what is finished, the repeat counts and which quest is tracked.</summary>
    private static async Task SendQuestStateAsync(Conn c)
    {
        var state = await DsPlayerRepository.GetCharacterAsync(c.PlayerUid);
        var items = new List<Ds.DbWorkItem>();
        await EnsureMissionQuestsAsync(c, state?.PlayerGrade ?? 1, items);

        var active = await ActiveQuestsAsync(c.PlayerUid);
        foreach (var (kind, q) in active) items.Add(QuestItem(c, kind, q));
        foreach (var id in await DsQuestRepository.GetCompletedAsync(c.PlayerUid)) items.Add(CompletedItem(c, id));
        foreach (var (id, count) in await DsQuestRepository.GetRepeatCountsAsync(c.PlayerUid)) items.Add(RepeatCountItem(c, id, count));

        int tracked = await DsQuestRepository.GetTrackingAsync(c.PlayerUid);
        var main = active.FirstOrDefault(a => a.Kind == QKind.Main);
        if (tracked == 0 || (main.Quest != null && !active.Any(a => a.Quest.QuestId == tracked)))
        {
            tracked = main.Quest?.QuestId ?? tracked;
            if (tracked > 0) await DsQuestRepository.SetTrackingAsync(c.PlayerUid, tracked);
        }
        if (tracked > 0) items.Add(TrackingItem(c, tracked));
        await PushDbItemsAsync(c, items);
        await QuestRefreshStateObjectivesAsync(c);
    }

    // ---- GM helpers ----

    /// <summary>queststatus | questprogress [n] | questcomplete [id] | questset &lt;main id&gt; | questaccept &lt;id&gt; | questreset &lt;id&gt;</summary>
    private static async Task GmQuestAsync(Conn c, string cmd, string[] args)
    {
        var active = await ActiveQuestsAsync(c.PlayerUid);
        switch (cmd)
        {
            case "queststatus":
            {
                if (active.Count == 0) { await SystemMessageAsync(c, "No active quests."); break; }
                foreach (var (kind, q) in active.Where(a => a.Kind is QKind.Main or QKind.Local or QKind.Repeat).Take(8))
                {
                    var def = FindQuest(q.QuestId);
                    int n = Math.Max(1, Math.Min(3, def?.Objectives.Count ?? 1));
                    await SystemMessageAsync(c, $"{kind} {q.QuestId} state {q.State}: {string.Join(" / ", q.Counts.Take(n))} of {string.Join(" / ", def?.Objectives.Take(n).Select(o => $"{o.Count} ({o.Type} {o.Target})") ?? Array.Empty<string>())}");
                }
                await SystemMessageAsync(c, $"{active.Count(a => a.Kind == QKind.Weekly)} weekly and {active.Count(a => a.Kind == QKind.Monthly)} monthly missions.");
                break;
            }
            case "questset":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var id) || FindQuest(id)?.Kind != QKind.Main) { await SystemMessageAsync(c, "usage: questset <main quest id>   e.g. questset 1000001"); break; }
                var items = new List<Ds.DbWorkItem>();
                foreach (var (kind, q) in active.Where(a => a.Kind == QKind.Main)) items.Add(QuestItem(c, kind, q, delete: true));
                await DsQuestRepository.UnmarkCompletedAsync(c.PlayerUid, id);
                await StartQuestAsync(c, QKind.Main, id, items, track: true);
                await PushDbItemsAsync(c, items);
                await SystemMessageAsync(c, $"Main quest is now {id}.");
                break;
            }
            case "questaccept":
            {
                if (args.Length < 1 || !int.TryParse(args[0], out var id) || FindQuest(id)?.Kind == null) { await SystemMessageAsync(c, "usage: questaccept <quest id>  (any main / local / repeat quest, ignores the normal conditions)"); break; }
                var def = FindQuest(id)!; var kind = def.Kind!.Value;
                if (kind is QKind.Weekly or QKind.Monthly) { await SystemMessageAsync(c, "Missions are assigned automatically."); break; }
                await DsQuestRepository.UnmarkCompletedAsync(c.PlayerUid, id);
                var items = new List<Ds.DbWorkItem>();
                await StartQuestAsync(c, kind, id, items, track: true);
                await PushDbItemsAsync(c, items);
                await SystemMessageAsync(c, $"Accepted {kind} quest {id}.");
                break;
            }
            case "questreset":
            {
                // forget completion / repeat counts of a quest so it can be accepted again
                if (args.Length < 1 || !int.TryParse(args[0], out var id)) { await SystemMessageAsync(c, "usage: questreset <quest id>"); break; }
                await DsQuestRepository.UnmarkCompletedAsync(c.PlayerUid, id);
                await DsQuestRepository.ResetRepeatAsync(c.PlayerUid, id);
                await PushDbItemsAsync(c, new[] { CompletedItem(c, id, delete: true), RepeatCountItem(c, id, 0) });
                await SystemMessageAsync(c, $"Quest {id} can be accepted again.");
                break;
            }
            case "questprogress":
            {
                int amount = args.Length > 0 && int.TryParse(args[0], out var a) ? Math.Max(1, a) : 1;
                await QuestAdvanceAsync(c, (_, _) => true, amount);
                await SystemMessageAsync(c, $"Advanced every objective of every active quest by {amount}.");
                break;
            }
            case "questcomplete":
            {
                int id = args.Length > 0 && int.TryParse(args[0], out var a) ? a : active.FirstOrDefault(x => x.Kind == QKind.Main).Quest?.QuestId ?? 0;
                var hit = active.FirstOrDefault(x => x.Quest.QuestId == id);
                if (hit.Quest == null) { await SystemMessageAsync(c, id == 0 ? "No active main quest." : $"Quest {id} is not active."); break; }
                var def = FindQuest(id);
                var full = def == null ? hit.Quest : hit.Quest.WithCounts(Enumerable.Range(0, 3).Select(i => i < def.Objectives.Count ? def.Objectives[i].Count : 0).ToArray()) with { State = 1 };
                await DsQuestRepository.UpsertAsync(hit.Kind, c.PlayerUid, full);
                var error = await QuestCompleteAsync(c, id);
                await SystemMessageAsync(c, error == ErrorCode.Success ? $"Quest {id} completed." : $"Could not complete quest {id}: {error}");
                break;
            }
        }
    }
}
