using Google.Protobuf.WellKnownTypes;
using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using AG = MirProto.ApiGuild;
using CM = MirProto.ClientMsg;
using DG = MirProto.DsGuild;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Guilds (ds_guild). Plain TCP messages: CreateGuild, CheckGuildNameExist, GetGuildList, GetGuild, GetGuildMembers, JoinGuild (free or by approval),
/// ApproveJoinGuild, the pending lists, CancelJoinGuild, LeaveGuild, DeleteGuild (disband), DeleteGuildMember (kick), DelegateGuildMaster,
/// ChangeGuildMemberGrade and the Update* settings. Creating costs money from Common/GuildData (CreateMoneyType / CreateMoneyValue, copper 1000).
/// The client keeps ONE "my guild": CreateGuildRes / JoinedResult / GuildFullInfoRes set it, so the full info is pushed again at login.
/// Not implemented: invitations, guild logs, guild gold/levelling.
/// </summary>
public static partial class Mir5GameServer
{
    private const int GradeMaster = 1, GradeSubMaster = 2, GradeManager = 3, GradeMember = 4;

    private static int GuildData(string key, int fallback)
    {
        var t = DataTables.Find("Common/GuildData");
        if (t == null) return fallback;
        foreach (var kv in t.Rows)
            if (kv.Value.TryGetProperty("ID", out var id) && (id.GetString() ?? "").EndsWith("::" + key, StringComparison.Ordinal) &&
                kv.Value.TryGetProperty("OptionValue", out var v) && int.TryParse(v.GetString(), out var n))
                return n;
        return fallback;
    }

    private static int MaxMembers(int guildLevel) =>
        DataTables.Find("Common/GuildBase") is { } t && t.TryGetRow(guildLevel, out var r) && r.TryGetProperty("MaxMemberNumber", out var m) ? m.GetInt32() : 10;

    private static DG.SqlGuildTable GuildTable(DsGuildRepository.Guild g) => new()
    {
        GuildUid = g.Uid, GuildName = g.Name, MasterPlayerUid = g.MasterUid, MasterNickname = g.MasterNickname, MarkInfo = g.Mark, MemberCount = g.MemberCount,
        Gold = g.Gold, Exp = g.Exp, Level = g.Level, DisbandYn = 0, KickAutoType = g.KickAuto, RecruitType = g.RecruitType, RecruitLevel = g.RecruitLevel,
        RecruitMessage = g.RecruitMessage, Notice = g.Notice, RegTime = Timestamp.FromDateTime(g.RegUtc), UpdateTime = Timestamp.FromDateTime(g.UpdateUtc),
    };

    private static AG.GuildMemberRes MemberRes(DsGuildRepository.Member m)
    {
        int invite = 0, setting = 0, money = 0;
        if (DataTables.Find("Common/GuildMemberGrade") is { } t && t.TryGetRow(m.Grade, out var r))
        {
            invite = r.TryGetProperty("InvitePermission", out var a) ? a.GetInt32() : 0;
            setting = r.TryGetProperty("SettingPermission", out var b) ? b.GetInt32() : 0;
            money = r.TryGetProperty("GuildMoneyPermission", out var d) ? d.GetInt32() : 0;
        }
        return new AG.GuildMemberRes
        {
            GuildMember = new DG.SqlGuildMemberTable { GuildUid = m.GuildUid, PlayerUid = m.PlayerUid, Grade = (GuildMemberGradeType)m.Grade, RegTime = Timestamp.FromDateTime(m.RegUtc), UpdateTime = Timestamp.FromDateTime(m.UpdateUtc) },
            InvitePermission = invite, SettingPermission = setting, GuildMoneyPermission = money,
        };
    }

    private static async Task<AG.GuildFullInfoResponse> FullInfoAsync(DsGuildRepository.Guild g)
    {
        var res = new AG.GuildFullInfoResponse { GuildRes = new AG.GuildRes { Guild = GuildTable(g) } };
        foreach (var m in await DsGuildRepository.MembersAsync(g.Uid)) res.GuildMemberRes.Add(MemberRes(m));
        return res;
    }

    /// <summary>Sends a message to every online member of a guild (optionally except one player).</summary>
    private static async Task SendToGuildAsync(long guildUid, SM.ServerMessages msg, long exceptPlayer = 0)
    {
        var members = (await DsGuildRepository.MembersAsync(guildUid)).Select(m => m.PlayerUid).ToHashSet();
        foreach (var conn in Connections.Values.Where(x => x.InWorld && x.PlayerUid != exceptPlayer && members.Contains(x.PlayerUid)).ToList())
            try { await conn.Plain(msg); } catch { /* connection closing */ }
    }

    private static Task SendToPlayerAsync(long playerUid, SM.ServerMessages msg)
    {
        var conn = Connections.Values.FirstOrDefault(x => x.InWorld && x.PlayerUid == playerUid);
        return conn == null ? Task.CompletedTask : conn.Plain(msg);
    }

    /// <summary>The caller's membership and guild, or an error code.</summary>
    private static async Task<(DsGuildRepository.Guild? Guild, DsGuildRepository.Member? Member, ErrorCode Error)> MyGuildAsync(Conn c, long guildUid)
    {
        var member = await DsGuildRepository.GetMembershipAsync(c.PlayerUid);
        if (member == null || (guildUid != 0 && member.GuildUid != guildUid)) return (null, null, ErrorCode.NotFoundGuildMember);
        var guild = await DsGuildRepository.GetAsync(member.GuildUid);
        return guild == null ? (null, null, ErrorCode.NotExistGuild) : (guild, member, ErrorCode.Success);
    }

    // ---- requests ----

    private static async Task OnCreateGuildAsync(Conn c, CM.CreateGuildRequest req)
    {
        string name = (req.GuildName ?? "").Trim();
        Logger.Info($"[Mir5Guild] {c.Nickname} creates guild '{name}' (recruit {req.RecruitType}, level {req.RecruitLevel})");
        ErrorCode error = ErrorCode.Success;
        if (name.Length < GuildData("MinNameLength", 2) || name.Length > GuildData("MaxNameLength", 8)) error = ErrorCode.GuildNameInvalid;
        else if ((req.RecruitMessage ?? "").Length > GuildData("MaxIntroductionLength", 100)) error = ErrorCode.GuildRecruitMessageInvalid;
        else if ((req.Notice ?? "").Length > GuildData("MaxDescLength", 999)) error = ErrorCode.GuildNoticeInvalid;

        if (error == ErrorCode.Success)
        {
            int moneyId = GuildData("CreateMoneyType", 1);
            long cost = GuildData("CreateMoneyValue", 1000);
            var (result, guild, member, left) = await DsGuildRepository.CreateAsync(c.PlayerUid, c.Nickname, name, req.MarkInfo ?? "",
                (int)req.RecruitType, req.RecruitLevel, req.RecruitMessage ?? "", req.Notice ?? "", moneyId, cost);
            if (result == DsGuildRepository.CreateResult.Ok)
            {
                await PushDbItemsAsync(c, new[] { MoneyItem(c, moneyId, left) });
                Logger.Info($"[Mir5Guild] guild {guild!.Uid} '{name}' created by {c.Nickname} (cost {cost} of money {moneyId})");
                await c.Plain(new SM.ServerMessages
                {
                    CreateGuildRes = new SM.CreateGuildResponse { ErrorCode = ErrorCode.Success, GuildInfoRes = new AG.GuildRes { Guild = GuildTable(guild) }, GuildMemberRes = MemberRes(member!) },
                });
                return;
            }
            error = result switch
            {
                DsGuildRepository.CreateResult.NameExists => ErrorCode.GuildNameExist,
                DsGuildRepository.CreateResult.AlreadyInGuild => ErrorCode.PrevGuildMemberExist,
                _ => ErrorCode.GuildNotEnoughMoney,
            };
        }
        Logger.Info($"[Mir5Guild] create refused: {error}");
        await c.Plain(new SM.ServerMessages { CreateGuildRes = new SM.CreateGuildResponse { ErrorCode = error } });
    }

    private static async Task OnCheckGuildNameAsync(Conn c, string name)
    {
        name = (name ?? "").Trim();
        ErrorCode error = name.Length < GuildData("MinNameLength", 2) || name.Length > GuildData("MaxNameLength", 8) ? ErrorCode.GuildNameInvalid
            : await DsGuildRepository.NameExistsAsync(name) ? ErrorCode.GuildNameExist : ErrorCode.Success;
        await c.Plain(new SM.ServerMessages { CheckGuildNameExistRes = new SM.CheckGuildNameExistResponse { ErrorCode = error } });
    }

    private static async Task OnGetGuildListAsync(Conn c, CM.GetGuildListRequest req)
    {
        long offset = req.HasCursor ? req.Cursor : 0;
        int size = req.HasSize ? req.Size : GuildData("GuildListBatchSize", 20);
        var guilds = await DsGuildRepository.ListAsync(offset, size, req.HasGuildSortCriterion ? (int)req.GuildSortCriterion : 0);
        var res = new SM.GetGuildListResponse { ErrorCode = ErrorCode.Success, Cursor = offset + guilds.Count };
        res.GuildInfos.AddRange(guilds.Select(GuildTable));
        await c.Plain(new SM.ServerMessages { GetGuildListRes = res });
    }

    private static async Task OnGetGuildAsync(Conn c, long guildUid)
    {
        var g = await DsGuildRepository.GetAsync(guildUid);
        var res = new SM.GetGuildResponse { ErrorCode = g == null ? ErrorCode.NotExistGuild : ErrorCode.Success };
        if (g != null) res.GuildInfo = GuildTable(g);
        await c.Plain(new SM.ServerMessages { GetGuildRes = res });
    }

    private static async Task OnGetGuildMembersAsync(Conn c, long guildUid)
    {
        var res = new SM.GetGuildMembersResponse { ErrorCode = ErrorCode.Success };
        foreach (var m in await DsGuildRepository.MembersAsync(guildUid)) res.GuildMembersRes.Add(MemberRes(m));
        await c.Plain(new SM.ServerMessages { GetGuildMembersRes = res });
    }

    /// <summary>At login: if the player is in a guild, give the client its full guild info (this is what sets "my guild").</summary>
    private static async Task SendGuildAsync(Conn c)
    {
        var member = await DsGuildRepository.GetMembershipAsync(c.PlayerUid);
        var guild = member == null ? null : await DsGuildRepository.GetAsync(member.GuildUid);
        if (guild != null) await c.Plain(new SM.ServerMessages { GuildFullInfoRes = await FullInfoAsync(guild) });
    }

    private static async Task OnJoinGuildAsync(Conn c, long guildUid)
    {
        var res = new SM.JoinGuildResponse { GuildUid = guildUid, PlayerUid = c.PlayerUid };
        var guild = await DsGuildRepository.GetAsync(guildUid);
        if (guild == null) res.ErrorCode = ErrorCode.NotExistGuild;
        else if (await DsGuildRepository.GetMembershipAsync(c.PlayerUid) != null) res.ErrorCode = ErrorCode.PrevGuildMemberExist;
        else if (c.Level < guild.RecruitLevel) res.ErrorCode = ErrorCode.GuildMemberNotEnoughLevel;
        else if (guild.MemberCount >= MaxMembers(guild.Level)) res.ErrorCode = ErrorCode.GuildMemberCountOver;
        else if (guild.RecruitType == (int)GuildJoinType.Private) res.ErrorCode = ErrorCode.GuildPermissionInvalid;
        else if (guild.RecruitType == (int)GuildJoinType.Approval)
        {
            await DsGuildRepository.AddRequestAsync(c.PlayerUid, guildUid, 1, TimeSpan.FromSeconds(GuildData("JoinRequestDuration", 259200)));
            res.ErrorCode = ErrorCode.Success;
            res.PendingResult = new AG.PendingResult();
            Logger.Info($"[Mir5Guild] {c.Nickname} asked to join guild {guildUid}");
        }
        else if (!await DsGuildRepository.AddMemberAsync(guildUid, c.PlayerUid, GradeMember)) res.ErrorCode = ErrorCode.PrevGuildMemberExist;
        else
        {
            guild = (await DsGuildRepository.GetAsync(guildUid))!;
            res.ErrorCode = ErrorCode.Success;
            res.JoinedResult = new SM.JoinedResult { GuildFullInfo = await FullInfoAsync(guild) };
            var me = (await DsGuildRepository.GetMembershipAsync(c.PlayerUid))!;
            await SendToGuildAsync(guildUid, new SM.ServerMessages
            {
                NotifyGuildMsg = new AG.NotifyGuildMessage { NotifyGuildMemberAddMsg = new AG.NotifyGuildMemberAddMessage { GuildRes = new AG.GuildRes { Guild = GuildTable(guild) }, GuildMemberRes = MemberRes(me) } },
            }, exceptPlayer: c.PlayerUid);
            Logger.Info($"[Mir5Guild] {c.Nickname} joined guild {guildUid}");
        }
        await c.Plain(new SM.ServerMessages { JoinGuildRes = res });
    }

    private static async Task OnApproveJoinGuildAsync(Conn c, CM.ApproveJoinGuildRequest req)
    {
        var res = new SM.ApproveJoinGuildResponse { AcceptFlag = req.ApproveFlag, PlayerUid = req.PlayerUid };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade > GradeManager) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success)
        {
            var pending = (await DsGuildRepository.RequestsAsync(guild!.Uid, req.PlayerUid)).FirstOrDefault();
            if (pending == null) error = ErrorCode.NotFoundGuildMember;
            else if (req.ApproveFlag && guild.MemberCount >= MaxMembers(guild.Level)) error = ErrorCode.GuildMemberCountOver;
            else
            {
                await DsGuildRepository.RemoveRequestAsync(guild.Uid, req.PlayerUid);
                bool joined = req.ApproveFlag && await DsGuildRepository.AddMemberAsync(guild.Uid, req.PlayerUid, GradeMember);
                var fresh = (await DsGuildRepository.GetAsync(guild.Uid))!;
                var result = new SM.JoinGuildResultResponse { ErrorCode = ErrorCode.Success, AcceptFlag = joined };
                if (joined) result.GuildFullInfo = await FullInfoAsync(fresh);
                await SendToPlayerAsync(req.PlayerUid, new SM.ServerMessages { JoinGuildResultRes = result });
                Logger.Info($"[Mir5Guild] {c.Nickname} {(joined ? "approved" : "declined")} join request of {req.PlayerUid} for guild {guild.Uid}");
            }
        }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { ApproveJoinGuildRes = res });
    }

    private static async Task OnGuildPendingListAsync(Conn c, CM.GetGuildPendingListRequest req)
    {
        var res = new SM.GetGuildPendingListResponse { ErrorCode = ErrorCode.Success, JoinType = req.JoinType };
        foreach (var r in await DsGuildRepository.RequestsAsync(req.GuildUid, null))
            res.GuildPendingList.Add(new AG.GuildPendingInfo { PlayerUid = r.PlayerUid, ExpiredTime = Timestamp.FromDateTime(r.ExpiredUtc) });
        await c.Plain(new SM.ServerMessages { GetGuildPendingListRes = res });
    }

    private static async Task OnMyPendingListAsync(Conn c, CM.GetMyPendingListRequest req)
    {
        var res = new SM.GetMyPendingListResponse { ErrorCode = ErrorCode.Success, JoinType = req.JoinType };
        foreach (var r in await DsGuildRepository.RequestsAsync(null, c.PlayerUid))
            if (await DsGuildRepository.GetAsync(r.GuildUid) is { } g)
                res.PlayerPendingList.Add(new AG.PlayerPendingInfo { GuildInfo = GuildTable(g), ExpiredTime = Timestamp.FromDateTime(r.ExpiredUtc) });
        await c.Plain(new SM.ServerMessages { GetMyPendingListRes = res });
    }

    private static async Task OnCancelJoinGuildAsync(Conn c, long guildUid)
    {
        await DsGuildRepository.RemoveRequestAsync(guildUid, c.PlayerUid);
        await c.Plain(new SM.ServerMessages { CancelJoinGuildRes = new SM.CancelJoinGuildResponse { ErrorCode = ErrorCode.Success, GuildUid = guildUid } });
    }

    private static async Task OnLeaveGuildAsync(Conn c, long guildUid)
    {
        var (guild, member, error) = await MyGuildAsync(c, guildUid);
        if (error == ErrorCode.Success)
        {
            if (member!.Grade == GradeMaster)
            {
                if (guild!.MemberCount <= 1) { await DsGuildRepository.DisbandAsync(guild.Uid); Logger.Info($"[Mir5Guild] guild {guild.Uid} disbanded (last member left)"); }
                else error = ErrorCode.NotEnableGuildMemberRole;      // the master must hand the guild over first
            }
            else
            {
                await DsGuildRepository.RemoveMemberAsync(guild!.Uid, c.PlayerUid);
                await SendToGuildAsync(guild.Uid, new SM.ServerMessages
                {
                    NotifyGuildMsg = new AG.NotifyGuildMessage { NotifyGuildMemberRemoveMsg = new AG.NotifyGuildMemberRemoveMessage { GuildMemberRes = MemberRes(member) } },
                });
                Logger.Info($"[Mir5Guild] {c.Nickname} left guild {guild.Uid}");
            }
        }
        await c.Plain(new SM.ServerMessages { LeaveGuildRes = new SM.LeaveGuildResponse { ErrorCode = error, GuildUid = guildUid } });
    }

    private static async Task OnDeleteGuildAsync(Conn c, long guildUid)
    {
        var (guild, member, error) = await MyGuildAsync(c, guildUid);
        if (error == ErrorCode.Success && member!.Grade != GradeMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success)
        {
            var others = (await DsGuildRepository.MembersAsync(guild!.Uid)).Select(m => m.PlayerUid).Where(p => p != c.PlayerUid).ToList();
            await DsGuildRepository.DisbandAsync(guild.Uid);
            foreach (var p in others) await SendToPlayerAsync(p, new SM.ServerMessages { DeleteGuildRes = new SM.DeleteGuildResponse { ErrorCode = ErrorCode.Success } });
            Logger.Info($"[Mir5Guild] {c.Nickname} disbanded guild {guild.Uid}");
        }
        await c.Plain(new SM.ServerMessages { DeleteGuildRes = new SM.DeleteGuildResponse { ErrorCode = error } });
    }

    private static async Task OnKickGuildMemberAsync(Conn c, CM.DeleteGuildMemberRequest req)
    {
        var res = new SM.DeleteGuildMemberResponse { PlayerUid = req.PlayerUid };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success)
        {
            var target = (await DsGuildRepository.MembersAsync(guild!.Uid)).FirstOrDefault(m => m.PlayerUid == req.PlayerUid);
            if (target == null) error = ErrorCode.NotFoundGuildMember;
            else if (member!.Grade > GradeManager || target.Grade <= member.Grade) error = ErrorCode.GuildPermissionInvalid;
            else
            {
                await DsGuildRepository.RemoveMemberAsync(guild.Uid, req.PlayerUid);
                await SendToPlayerAsync(req.PlayerUid, new SM.ServerMessages { LeaveGuildRes = new SM.LeaveGuildResponse { ErrorCode = ErrorCode.Success, GuildUid = guild.Uid } });
                await SendToGuildAsync(guild.Uid, new SM.ServerMessages
                {
                    NotifyGuildMsg = new AG.NotifyGuildMessage { NotifyGuildMemberRemoveMsg = new AG.NotifyGuildMemberRemoveMessage { GuildMemberRes = MemberRes(target) } },
                });
            }
        }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { DeleteGuildMemberRes = res });
    }

    private static async Task OnDelegateGuildMasterAsync(Conn c, CM.DelegateGuildMasterRequest req)
    {
        var res = new SM.DelegateGuildMasterResponse { NewMasterUid = req.PlayerUid };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade != GradeMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success && (await DsGuildRepository.MembersAsync(guild!.Uid)).All(m => m.PlayerUid != req.PlayerUid)) error = ErrorCode.NotFoundGuildMember;
        if (error == ErrorCode.Success)
        {
            await DsGuildRepository.DelegateMasterAsync(guild!.Uid, c.PlayerUid, req.PlayerUid, await DsGuildRepository.NicknameAsync(req.PlayerUid));
            await NotifyGuildChangedAsync(guild.Uid);
        }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { DelegateGuildMasterRes = res });
    }

    private static async Task OnChangeGuildMemberGradeAsync(Conn c, CM.ChangeGuildMemberGradeRequest req)
    {
        var res = new SM.ChangeGuildMemberGradeResponse();
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade > GradeSubMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success)
        {
            var members = await DsGuildRepository.MembersAsync(guild!.Uid);
            foreach (var change in req.ChangeGradeMemberList)
            {
                var target = members.FirstOrDefault(m => m.PlayerUid == change.PlayerUid);
                int grade = (int)change.NewGrade;
                if (target == null || target.Grade == GradeMaster || grade <= member!.Grade || grade > 5) continue;
                await DsGuildRepository.SetMemberGradeAsync(guild.Uid, target.PlayerUid, grade);
                res.ChangedGradeMemberList.Add(change);
            }
            await NotifyGuildChangedAsync(guild.Uid);
        }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { ChangeGuildMemberGradeRes = res });
    }

    /// <summary>Tells every online member that the guild or its members changed (they get the full info again).</summary>
    private static async Task NotifyGuildChangedAsync(long guildUid)
    {
        var guild = await DsGuildRepository.GetAsync(guildUid);
        if (guild == null) return;
        await SendToGuildAsync(guildUid, new SM.ServerMessages { GuildFullInfoRes = await FullInfoAsync(guild) });
    }

    private static async Task<bool> ChargeAsync(Conn c, string moneyKey, string valueKey)
    {
        int moneyId = GuildData(moneyKey, 11);
        long cost = GuildData(valueKey, 1000);
        var have = (await DsPlayerRepository.GetMoneyAsync(c.PlayerUid)).FirstOrDefault(m => m.MoneyId == moneyId).Quantity;
        if (have < cost) return false;
        long left = await DsPlayerRepository.ChangeMoneyAsync(c.PlayerUid, moneyId, -cost, set: false);
        await PushDbItemsAsync(c, new[] { MoneyItem(c, moneyId, left) });
        return true;
    }

    private static async Task OnUpdateGuildMarkAsync(Conn c, CM.UpdateGuildMarkRequest req)
    {
        var res = new SM.UpdateGuildMarkResponse { GuildUid = req.GuildUid, MarkInfo = req.MarkInfo };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade > GradeSubMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success && !await ChargeAsync(c, "MarkChangeMoneyType", "MarkChangeMoneyValue")) error = ErrorCode.GuildNotEnoughMoney;
        if (error == ErrorCode.Success) { await DsGuildRepository.UpdateAsync(guild!.Uid, null, req.MarkInfo, null, null, null, null, null); await NotifyGuildChangedAsync(guild.Uid); }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { UpdateGuildMarkRes = res });
    }

    private static async Task OnUpdateGuildNameAsync(Conn c, CM.UpdateGuildNameRequest req)
    {
        string name = (req.GuildName ?? "").Trim();
        var res = new SM.UpdateGuildNameResponse { GuildUid = req.GuildUid, GuildName = name };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade > GradeSubMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success && (name.Length < GuildData("MinNameLength", 2) || name.Length > GuildData("MaxNameLength", 8))) error = ErrorCode.GuildNameInvalid;
        if (error == ErrorCode.Success && await DsGuildRepository.NameExistsAsync(name)) error = ErrorCode.GuildNameExist;
        if (error == ErrorCode.Success && !await ChargeAsync(c, "NameChangeMoneyType", "NameChangeMoneyValue")) error = ErrorCode.GuildNotEnoughMoney;
        if (error == ErrorCode.Success) { await DsGuildRepository.UpdateAsync(guild!.Uid, name, null, null, null, null, null, null); await NotifyGuildChangedAsync(guild.Uid); }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { UpdateGuildNameRes = res });
    }

    private static async Task OnUpdateGuildSettingAsync(Conn c, CM.UpdateGuildSettingRequest req)
    {
        var res = new SM.UpdateGuildSettingResponse { GuildUid = req.GuildUid, KickAutoType = req.KickAutoType, RecruitType = req.RecruitType, RecruitLevel = req.RecruitLevel, RecruitMessage = req.RecruitMessage, Notice = req.Notice };
        var (guild, member, error) = await MyGuildAsync(c, req.GuildUid);
        if (error == ErrorCode.Success && member!.Grade > GradeSubMaster) error = ErrorCode.GuildPermissionInvalid;
        if (error == ErrorCode.Success && (req.RecruitMessage ?? "").Length > GuildData("MaxIntroductionLength", 100)) error = ErrorCode.GuildRecruitMessageInvalid;
        if (error == ErrorCode.Success && (req.Notice ?? "").Length > GuildData("MaxDescLength", 999)) error = ErrorCode.GuildNoticeInvalid;
        if (error == ErrorCode.Success)
        {
            await DsGuildRepository.UpdateAsync(guild!.Uid, null, null, (int)req.KickAutoType, (int)req.RecruitType, req.RecruitLevel, req.RecruitMessage ?? "", req.Notice ?? "");
            await NotifyGuildChangedAsync(guild.Uid);
        }
        res.ErrorCode = error;
        await c.Plain(new SM.ServerMessages { UpdateGuildSettingRes = res });
    }
}
