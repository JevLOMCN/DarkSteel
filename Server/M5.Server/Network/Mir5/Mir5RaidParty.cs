using Google.Protobuf;
using M5.Core;
using M5.Core.Tables;
using MirProto;
using MirProto.DsProto;
using CM = MirProto.ClientMsg;
using CMT = MirProto.ClientMsgTwoway;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Raid parties (twoway 20900-20918, plain list/search/all-out 20300-20302), kept in memory on this game server (the official one has a separate party service).
/// Create, invite (RaidPartyInviteAlm to the target), accept/decline, join (password), leave, kick, kick vote, delegate leader, ready state, slot swap,
/// settings, password, info, list/search, dungeon start/in/out and "all out".
/// Kick vote: KickVoteReq starts a vote (RaidPartyVoteStartNoti to everyone), each member answers KickVoteResReq (RaidPartyKickVoteNoti carries the counts);
/// a strict majority of the other members kicks the target, otherwise (or after a timeout) the vote is rejected.
/// Dungeons: the leader's client answers RaidPartyDungeonStartNoti with DungeonInReq, the others get a popup and send DungeonInReq when they accept.
/// We teleport the player to DungeonBase.ID_WarpLocation (not an instance: everyone in the dungeon shares the island) and back on DungeonOutReq.
/// Rejoin: a disconnected member stays in the party as OffLine for <see cref="RaidOfflineGrace"/> and gets the party info pushed again when he is back in the world.
/// Not implemented: instanced dungeon maps, dungeon results/rewards, RaidPartyMemberSync (HP/position of members).
/// </summary>
public static partial class Mir5GameServer
{
    private const int RaidMaxMembers = 4;
    private static readonly TimeSpan RaidOfflineGrace = TimeSpan.FromMinutes(5);
    private static readonly TimeSpan RaidVoteTime = TimeSpan.FromSeconds(60);

    private sealed class RaidMember
    {
        public uint Slot;
        public long Uid;
        public string Nick = "";
        public int CharId, Level;
        public RaidMemberState State = RaidMemberState.Waiting;
        public bool InDungeon;
        public bool HasReturn;                                   // where to go back to on DungeonOut
        public int ReturnIsland;
        public double ReturnX, ReturnY, ReturnZ;
        public float ReturnDir;
        public int OfflineToken;                                 // bumped on every disconnect/reconnect; the grace timer only acts if it still matches
    }

    private sealed class RaidVote
    {
        public long Proposer, Target;
        public readonly Dictionary<long, bool> Votes = new();   // voter uid -> agrees
    }

    private sealed class RaidParty
    {
        public long Uid;
        public int DungeonId;
        public string Name = "";
        public string Password = "";
        public bool IsPublic;
        public long LeaderUid;
        public int State;                                        // RaidPartyState
        public RaidVote? Vote;
        public readonly List<RaidMember> Members = new();
        public readonly HashSet<long> Invited = new();
    }

    private static readonly object RaidLock = new();
    private static readonly Dictionary<long, RaidParty> RaidParties = new();
    private static readonly Dictionary<long, long> RaidOfPlayer = new();   // player uid -> party uid
    private static long _nextRaidUid = 1;

    private static RaidPartyInfo RaidInfo(RaidParty p)
    {
        var info = new RaidPartyInfo
        {
            RaidPartyUid = p.Uid, DungeonId = p.DungeonId, PartyName = p.Name, IsPassword = p.Password.Length > 0,
            LeaderUid = p.LeaderUid, IsPublic = p.IsPublic, MemberCount = p.Members.Count, State = p.State,
        };
        foreach (var m in p.Members.OrderBy(x => x.Slot)) info.Members.Add(RaidMemberInfo(m));
        return info;
    }

    private static RaidPartyMemberInfo RaidMemberInfo(RaidMember m) => new()
    {
        SlotIndex = m.Slot, PlayerUid = m.Uid, NickName = m.Nick, MemberState = m.State,
        CharInfo = new RaidCharInfo { CharId = m.CharId, CharLevel = m.Level, CharAscend = 0 },
    };

    private static RaidPartySimpleInfo RaidSimple(RaidParty p) => new()
    {
        RaidPartyUid = p.Uid, DungeonId = p.DungeonId, PartyName = p.Name, IsPassword = p.Password.Length > 0, LeaderUid = p.LeaderUid,
        LeaderNickName = p.Members.FirstOrDefault(m => m.Uid == p.LeaderUid)?.Nick ?? "", IsPublic = p.IsPublic, MemberCount = p.Members.Count,
    };

    private static RaidMember NewRaidMember(Conn c, uint slot) => new() { Slot = slot, Uid = c.PlayerUid, Nick = c.Nickname, CharId = c.CharId, Level = c.Level };

    private static uint FreeRaidSlot(RaidParty p)
    {
        for (uint i = 0; i < RaidMaxMembers; i++)
            if (p.Members.All(m => m.Slot != i)) return i;
        return uint.MaxValue;
    }

    private static Conn? OnlineConn(long uid) => Connections.Values.FirstOrDefault(x => x.InWorld && x.PlayerUid == uid);

    /// <summary>Sends a plain message to the online players in the list.</summary>
    private static async Task SendToRaidAsync(IEnumerable<long> uids, SM.ServerMessages msg, long except = 0)
    {
        var set = uids.Where(u => u != except).ToHashSet();
        foreach (var conn in Connections.Values.Where(x => x.InWorld && set.Contains(x.PlayerUid)).ToList())
            try { await conn.Plain(msg); } catch { /* connection closing */ }
    }

    private static List<long> RaidMembersOf(long playerUid)
    {
        lock (RaidLock)
            return RaidOfPlayer.TryGetValue(playerUid, out var id) && RaidParties.TryGetValue(id, out var p) ? p.Members.Select(m => m.Uid).ToList() : new List<long>();
    }

    private static List<long> RaidUids(RaidParty p) { lock (RaidLock) return p.Members.Select(m => m.Uid).ToList(); }

    /// <summary>RaidPartyInfoNoti with the current info to every member (optionally except one).</summary>
    private static Task NotifyRaidInfoAsync(RaidParty p, RaidPartyNotifyType type, long target, long except = 0)
    {
        List<long> uids; RaidPartyInfo info;
        lock (RaidLock) { uids = p.Members.Select(m => m.Uid).ToList(); info = RaidInfo(p); }
        return SendToRaidAsync(uids, new SM.ServerMessages { RaidPartyInfoNoti = new SM.RaidPartyInfoNotify { NotifyType = type, RaidPartyInfo = info, TargetPlayerUid = target } }, except);
    }

    private static Task NotifyRaidStateAsync(RaidParty p, long playerUid, RaidMemberState state, long except = 0) =>
        SendToRaidAsync(RaidUids(p), new SM.ServerMessages { RaidPartyMemberUpdateStateNoti = new SM.RaidPartyMemberUpdateStateNotify { RaidPartyUid = p.Uid, PlayerUid = playerUid, MemberState = state } }, except);

    private static SMT.ServerMessagesTwoway RaidReply(int field, IMessage body, ErrorCode error = ErrorCode.Success)
    {
        var r = Reply(field, body);
        r.ErrorCode = error;
        return r;
    }

    private static async Task OnRaidPartyAsync(Conn c, int field, CMT.ClientMessagesTwoway msg)
    {
        switch (msg.ClientMessageTwowayCase)
        {
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyCreateReq: await RaidCreateAsync(c, field, msg.RaidPartyCreateReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyInviteReq: await RaidInviteAsync(c, field, msg.RaidPartyInviteReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyInvitedResReq: await RaidInvitedResAsync(c, field, msg.RaidPartyInvitedResReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyJoinReq: await RaidJoinAsync(c, field, msg.RaidPartyJoinReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyLeaveReq: await RaidLeaveAsync(c, field, msg.RaidPartyLeaveReq.RaidPartyUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyKickReq: await RaidKickAsync(c, field, msg.RaidPartyKickReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyKickVoteReq: await RaidKickVoteAsync(c, field, msg.RaidPartyKickVoteReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyKickVoteResReq: await RaidKickVoteResAsync(c, field, msg.RaidPartyKickVoteResReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyDelegateLeaderReq: await RaidDelegateAsync(c, field, msg.RaidPartyDelegateLeaderReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyMemberUpdateStateReq: await RaidStateAsync(c, field, msg.RaidPartyMemberUpdateStateReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartySlotChangeReq: await RaidSlotChangeAsync(c, field, msg.RaidPartySlotChangeReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyChangeSettingReq: await RaidSettingAsync(c, field, msg.RaidPartyChangeSettingReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.GetRaidPartyPassWordReq: await RaidPasswordAsync(c, field, msg.GetRaidPartyPassWordReq.RaidPartyUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.GetRaidPartyInfoReq: await RaidGetInfoAsync(c, field, msg.GetRaidPartyInfoReq.RaidPartyUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyDungeonStartReq: await RaidStartAsync(c, field, msg.RaidPartyDungeonStartReq.RaidPartyUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.DungeonInReq: await RaidDungeonInAsync(c, field, msg.DungeonInReq.RaidPartyUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.DungeonOutReq: await RaidDungeonOutAsync(c, field, msg.DungeonOutReq.RaidPartyUid); break;
        }
    }

    private static async Task RaidCreateAsync(Conn c, int field, CMT.RaidPartyCreateRequest req)
    {
        RaidParty p;
        lock (RaidLock)
        {
            if (RaidOfPlayer.ContainsKey(c.PlayerUid)) { p = null!; }
            else
            {
                p = new RaidParty { Uid = _nextRaidUid++, DungeonId = req.DungeonId, Name = req.PartyName, Password = req.Password ?? "", IsPublic = req.IsPublic, LeaderUid = c.PlayerUid };
                p.Members.Add(NewRaidMember(c, 0));
                RaidParties[p.Uid] = p;
                RaidOfPlayer[c.PlayerUid] = p.Uid;
            }
        }
        if (p == null) { await c.Twoway(RaidReply(field, new SMT.RaidPartyCreateResponse(), ErrorCode.AlreadyRaidPartyMemberExist)); return; }
        Logger.Info($"[Mir5Raid] {c.Nickname} created party {p.Uid} '{p.Name}' dungeon {p.DungeonId}");
        RaidPartyInfo info; lock (RaidLock) info = RaidInfo(p);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyCreateResponse { RaidPartyInfo = info }));
    }

    private static async Task RaidInviteAsync(Conn c, int field, CMT.RaidPartyInviteRequest req)
    {
        var target = OnlineConn(req.TargetPlayerUid);
        RaidPartyInfo? info = null; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            if (!RaidParties.TryGetValue(req.RaidPartyUid, out var p) || p.Members.All(m => m.Uid != c.PlayerUid)) error = ErrorCode.NotFoundRaidParty;
            else if (target == null) error = ErrorCode.TargetUserNotRaidPartyMember;
            else if (RaidOfPlayer.ContainsKey(target.PlayerUid)) error = ErrorCode.AlreadyRaidPartyMemberExist;
            else if (p.Members.Count >= RaidMaxMembers) error = ErrorCode.RaidMemberIsFull;
            else if (p.State != 0) error = ErrorCode.NotEnableInviteRaidStart;
            else { p.Invited.Add(target.PlayerUid); info = RaidInfo(p); }
        }
        if (info != null)
            await target!.Plain(new SM.ServerMessages { RaidPartyInviteAlm = new SM.RaidPartyInviteAlarm { InvitePlayerNickName = c.Nickname, RaidPartyInfo = info } });
        await c.Twoway(RaidReply(field, new SMT.RaidPartyInviteResponse(), error));
    }

    private static async Task RaidInvitedResAsync(Conn c, int field, CMT.RaidPartyInvitedResRequest req)
    {
        RaidParty? p; RaidPartyInfo? info = null; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (!p.Invited.Remove(c.PlayerUid)) error = ErrorCode.NotFoundRaidParty;
            else if (req.IsAccept)
            {
                if (RaidOfPlayer.ContainsKey(c.PlayerUid)) error = ErrorCode.AlreadyRaidPartyMemberExist;
                else if (p.Members.Count >= RaidMaxMembers) error = ErrorCode.RaidMemberIsFull;
                else if (p.State != 0) error = ErrorCode.NotEnableJoinRaidStart;
                else { p.Members.Add(NewRaidMember(c, FreeRaidSlot(p))); RaidOfPlayer[c.PlayerUid] = p.Uid; info = RaidInfo(p); }
            }
        }
        if (info != null) await NotifyRaidInfoAsync(p!, RaidPartyNotifyType.Join, c.PlayerUid, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyInvitedResResponse { RaidPartyInfo = info }, error));
    }

    private static async Task RaidJoinAsync(Conn c, int field, CMT.RaidPartyJoinRequest req)
    {
        RaidParty? p; RaidPartyInfo? info = null; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (RaidOfPlayer.ContainsKey(c.PlayerUid)) error = ErrorCode.AlreadyRaidPartyMemberExist;
            else if (p.Members.Count >= RaidMaxMembers) error = ErrorCode.RaidMemberIsFull;
            else if (p.State != 0) error = ErrorCode.NotEnableJoinRaidStart;
            else if (p.Password.Length > 0 && p.Password != req.Password) error = ErrorCode.RaidPartyInvalidPassword;
            else { p.Members.Add(NewRaidMember(c, FreeRaidSlot(p))); RaidOfPlayer[c.PlayerUid] = p.Uid; info = RaidInfo(p); }
        }
        if (info != null) await NotifyRaidInfoAsync(p!, RaidPartyNotifyType.Join, c.PlayerUid, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyJoinResponse { RaidPartyInfo = info }, error));
    }

    /// <summary>
    /// Removes a player from his party (leave, kick, offline timeout). Returns the party if it still exists; <paramref name="voteCleared"/> is set when a
    /// running kick vote ended because the target or the proposer left.
    /// </summary>
    private static RaidParty? RaidRemove(long playerUid, out bool existed, out bool voteCleared)
    {
        lock (RaidLock)
        {
            existed = false; voteCleared = false;
            if (!RaidOfPlayer.Remove(playerUid, out var partyUid) || !RaidParties.TryGetValue(partyUid, out var p)) return null;
            existed = true;
            p.Members.RemoveAll(m => m.Uid == playerUid);
            if (p.Members.Count == 0) { RaidParties.Remove(p.Uid); return null; }
            if (p.LeaderUid == playerUid) p.LeaderUid = p.Members.OrderBy(m => m.Slot).First().Uid;
            if (p.Vote != null && (p.Vote.Target == playerUid || p.Vote.Proposer == playerUid)) { p.Vote = null; voteCleared = true; }
            else p.Vote?.Votes.Remove(playerUid);
            if (p.State != 0 && !p.Members.Any(m => m.InDungeon)) p.State = 0;
            return p;
        }
    }

    /// <summary>Removes a player, tells the rest of the party and settles a vote that was waiting for him.</summary>
    private static async Task RaidRemoveAndNotifyAsync(long playerUid, RaidPartyNotifyType type)
    {
        var p = RaidRemove(playerUid, out _, out var voteCleared);
        if (p == null) return;
        await NotifyRaidInfoAsync(p, voteCleared ? RaidPartyNotifyType.VoteUserLeave : type, playerUid);
        await RaidVoteCheckAsync(p);
    }

    private static async Task RaidLeaveAsync(Conn c, int field, long partyUid)
    {
        var error = ErrorCode.Success;
        lock (RaidLock) if (!RaidOfPlayer.TryGetValue(c.PlayerUid, out var mine) || mine != partyUid) error = ErrorCode.NotRaidPartyMember;
        if (error == ErrorCode.Success)
        {
            Logger.Info($"[Mir5Raid] {c.Nickname} left party {partyUid}");
            await RaidRemoveAndNotifyAsync(c.PlayerUid, RaidPartyNotifyType.Leave);
        }
        await c.Twoway(RaidReply(field, new SMT.RaidPartyLeaveResponse { RaidPartyUid = partyUid }, error));
    }

    private static async Task RaidKickAsync(Conn c, int field, CMT.RaidPartyKickRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success; var kicked = false; RaidPartyInfo? before = null;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else if (p.Members.All(m => m.Uid != req.TargetPlayerUid) || req.TargetPlayerUid == c.PlayerUid) error = ErrorCode.NotFoundRaidPartyMember;
            else { kicked = true; before = RaidInfo(p); }
        }
        if (kicked)
        {
            // the kicked player clears his own party when the Kick notify names him, so he must get it too
            await SendToRaidAsync([req.TargetPlayerUid], new SM.ServerMessages { RaidPartyInfoNoti = new SM.RaidPartyInfoNotify { NotifyType = RaidPartyNotifyType.Kick, RaidPartyInfo = before, TargetPlayerUid = req.TargetPlayerUid } });
            await RaidRemoveAndNotifyAsync(req.TargetPlayerUid, RaidPartyNotifyType.Kick);
        }
        await c.Twoway(RaidReply(field, new SMT.RaidPartyKickResponse { RaidPartyUid = req.RaidPartyUid, KickPlayerUid = req.TargetPlayerUid }, error));
    }

    // ---- kick vote ----

    private static async Task RaidKickVoteAsync(Conn c, int field, CMT.RaidPartyKickVoteRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success; RaidVote? vote = null; RaidPartyInfo? info = null;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.Members.All(m => m.Uid != c.PlayerUid)) error = ErrorCode.NotRaidPartyMember;
            else if (p.Members.All(m => m.Uid != req.TargetPlayerUid) || req.TargetPlayerUid == c.PlayerUid) error = ErrorCode.NotFoundRaidPartyMember;
            else if (p.Vote != null || p.Members.Count < 3) error = ErrorCode.Failure;
            else { vote = p.Vote = new RaidVote { Proposer = c.PlayerUid, Target = req.TargetPlayerUid }; info = RaidInfo(p); }
        }
        if (vote != null)
        {
            Logger.Info($"[Mir5Raid] {c.Nickname} started a kick vote against {req.TargetPlayerUid} in party {req.RaidPartyUid}");
            await SendToRaidAsync(RaidUids(p!), new SM.ServerMessages { RaidPartyVoteStartNoti = new SM.RaidPartyVoteStartNotify { RaidPartyInfo = info, SuggestPlayerUid = c.PlayerUid, TargetPlayerUid = req.TargetPlayerUid } });
            _ = RaidVoteTimeoutAsync(p!, vote);
        }
        await c.Twoway(RaidReply(field, new SMT.RaidPartyKickVoteResponse { RaidPartyUid = req.RaidPartyUid, TargetPlayerUid = req.TargetPlayerUid }, error));
    }

    private static async Task RaidKickVoteResAsync(Conn c, int field, CMT.RaidPartyKickVoteResRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success; int agree = 0, reject = 0;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.Vote == null || p.Vote.Target != req.VotePlayerUid) error = ErrorCode.Failure;
            else if (p.Members.All(m => m.Uid != c.PlayerUid) || p.Vote.Target == c.PlayerUid) error = ErrorCode.NotRaidPartyMember;
            else
            {
                p.Vote.Votes[c.PlayerUid] = req.IsAgreement;
                agree = p.Vote.Votes.Count(v => v.Value); reject = p.Vote.Votes.Count(v => !v.Value);
            }
        }
        if (error == ErrorCode.Success)
        {
            await SendToRaidAsync(RaidUids(p!), new SM.ServerMessages { RaidPartyKickVoteNoti = new SM.RaidPartyKickVoteNotify { RaidPartyUid = req.RaidPartyUid, VotePlayerUid = req.VotePlayerUid, AgreementCount = agree, RejectCount = reject } });
            await RaidVoteCheckAsync(p!);
        }
        await c.Twoway(RaidReply(field, new SMT.RaidPartyKickVoteResResponse { RaidPartyUid = req.RaidPartyUid, VotePlayerUid = req.VotePlayerUid, IsKick = req.IsAgreement }, error));
    }

    /// <summary>Ends the running vote when the outcome is decided: more than half of the voters agree (kick) or too many reject for that to happen.</summary>
    private static async Task RaidVoteCheckAsync(RaidParty p)
    {
        long target = 0; bool? kick = null;
        lock (RaidLock)
        {
            if (p.Vote == null) return;
            int voters = p.Members.Count(m => m.Uid != p.Vote.Target);
            int agree = p.Vote.Votes.Count(v => v.Value), reject = p.Vote.Votes.Count(v => !v.Value);
            if (voters == 0 || agree * 2 > voters) kick = true;
            else if ((agree + (voters - agree - reject)) * 2 <= voters) kick = false;     // even if everyone left voted yes it would not be a majority
            if (kick != null) { target = p.Vote.Target; p.Vote = null; }
        }
        if (kick == null) return;
        await RaidVoteEndAsync(p, target, kick.Value);
    }

    private static async Task RaidVoteEndAsync(RaidParty p, long target, bool kick)
    {
        Logger.Info($"[Mir5Raid] kick vote against {target} in party {p.Uid}: {(kick ? "kicked" : "rejected")}");
        // the client looks the target's nickname up in its member list for the message, so the notify still lists him
        await NotifyRaidInfoAsync(p, kick ? RaidPartyNotifyType.VoteKickAgreement : RaidPartyNotifyType.VoteKickReject, target);
        if (!kick) return;
        var rest = RaidRemove(target, out _, out _);
        if (rest != null) await NotifyRaidInfoAsync(rest, RaidPartyNotifyType.UpdateRaidParty, target);
    }

    private static async Task RaidVoteTimeoutAsync(RaidParty p, RaidVote vote)
    {
        await Task.Delay(RaidVoteTime);
        long target;
        lock (RaidLock)
        {
            if (p.Vote != vote) return;
            target = vote.Target; p.Vote = null;
        }
        await RaidVoteEndAsync(p, target, kick: false);
    }

    // ---- the rest of the party management ----

    private static async Task RaidDelegateAsync(Conn c, int field, CMT.RaidPartyDelegateLeaderRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else if (p.Members.All(m => m.Uid != req.TargetPlayerUid)) error = ErrorCode.NotFoundRaidPartyMember;
            else p.LeaderUid = req.TargetPlayerUid;
        }
        if (error == ErrorCode.Success) await NotifyRaidInfoAsync(p!, RaidPartyNotifyType.DelegateLeader, req.TargetPlayerUid, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyDelegateLeaderResponse { RaidPartyUid = req.RaidPartyUid, LeaderPlayerUid = req.TargetPlayerUid }, error));
    }

    private static async Task RaidStateAsync(Conn c, int field, CMT.RaidPartyMemberUpdateStateRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            var me = p?.Members.FirstOrDefault(m => m.Uid == c.PlayerUid);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (me == null) error = ErrorCode.NotRaidPartyMember;
            else me.State = req.MemberState;
        }
        if (error == ErrorCode.Success) await NotifyRaidStateAsync(p!, c.PlayerUid, req.MemberState, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyMemberUpdateStateResponse { RaidPartyUid = req.RaidPartyUid, MemberState = req.MemberState }, error));
    }

    private static async Task RaidSlotChangeAsync(Conn c, int field, CMT.RaidPartySlotChangeRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else if (req.DestSlotIndex >= RaidMaxMembers || req.ChangeSlotIndex >= RaidMaxMembers) error = ErrorCode.Failure;
            else
            {
                var a = p.Members.FirstOrDefault(m => m.Slot == req.DestSlotIndex);
                var b = p.Members.FirstOrDefault(m => m.Slot == req.ChangeSlotIndex);
                if (a != null) a.Slot = req.ChangeSlotIndex;
                if (b != null) b.Slot = req.DestSlotIndex;
            }
        }
        if (error == ErrorCode.Success) await NotifyRaidInfoAsync(p!, RaidPartyNotifyType.ChangePartyChangeSlot, 0, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartySlotChangeResponse { RaidPartyUid = req.RaidPartyUid, DestSlotIndex = req.DestSlotIndex, ChangeSlotIndex = req.ChangeSlotIndex }, error));
    }

    private static async Task RaidSettingAsync(Conn c, int field, CMT.RaidPartyChangeSettingRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else { p.Name = req.PartyName; p.Password = req.Password ?? ""; p.IsPublic = req.IsPublic; }
        }
        if (error == ErrorCode.Success) await NotifyRaidInfoAsync(p!, RaidPartyNotifyType.ChangePartyInfo, 0, except: c.PlayerUid);
        await c.Twoway(RaidReply(field, new SMT.RaidPartyChangeSettingResponse { RaidPartyUid = req.RaidPartyUid, PartyName = req.PartyName, Password = req.Password ?? "", IsPublic = req.IsPublic }, error));
    }

    private static async Task RaidPasswordAsync(Conn c, int field, long partyUid)
    {
        string password = ""; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            if (!RaidParties.TryGetValue(partyUid, out var p)) error = ErrorCode.NotFoundRaidParty;
            else if (p.Members.All(m => m.Uid != c.PlayerUid)) error = ErrorCode.NotRaidPartyMember;
            else password = p.Password;
        }
        await c.Twoway(RaidReply(field, new SMT.GetRaidPartyPassWordResponse { RaidPartyUid = partyUid, Password = password }, error));
    }

    private static async Task RaidGetInfoAsync(Conn c, int field, long partyUid)
    {
        RaidPartyInfo? info = null; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            if (RaidParties.TryGetValue(partyUid, out var p)) info = RaidInfo(p); else error = ErrorCode.NotFoundRaidParty;
        }
        await c.Twoway(RaidReply(field, new SMT.GetRaidPartyInfoResponse { RaidPartyUid = partyUid, RaidPartyInfo = info }, error));
    }

    // ---- dungeon ----

    private static async Task RaidStartAsync(Conn c, int field, long partyUid)
    {
        RaidParty? p; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(partyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else if (p.State != 0) error = ErrorCode.AlreadyRaidPartyStart;
            else p.State = (int)RaidPartyState.Starting;
        }
        if (error == ErrorCode.Success)
        {
            Logger.Info($"[Mir5Raid] {c.Nickname} started party {partyUid}");
            // everyone including the leader: the leader's client answers the notify with DungeonInReq, the others get an "enter now?" popup
            await SendToRaidAsync(RaidUids(p!), new SM.ServerMessages { RaidPartyDungeonStartNoti = new SM.RaidPartyDungeonStartNotify { RaidPartyUid = partyUid } });
        }
        await c.Twoway(RaidReply(field, new SMT.RaidPartyDungeonStartResponse { RaidPartyUid = partyUid }, error));
    }

    private static async Task RaidDungeonInAsync(Conn c, int field, long partyUid)
    {
        RaidParty? p; RaidMember? me = null; var error = ErrorCode.Success;
        lock (RaidLock)
        {
            RaidParties.TryGetValue(partyUid, out p);
            me = p?.Members.FirstOrDefault(m => m.Uid == c.PlayerUid);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (me == null) error = ErrorCode.NotRaidPartyMember;
            else if (p.State == 0) error = ErrorCode.NotEnableRaidingMemberState;           // the leader has not started
            else if (!me.InDungeon)
            {
                me.HasReturn = true; me.ReturnIsland = c.IslandId; me.ReturnX = c.X; me.ReturnY = c.Y; me.ReturnZ = c.Z; me.ReturnDir = c.Direction;
                me.InDungeon = true; me.State = RaidMemberState.DungeonInPlay;
                p.State = (int)RaidPartyState.Raiding;
            }
            else p = null;                                                                  // already inside: just acknowledge
        }
        await c.Twoway(RaidReply(field, new SMT.DungeonInResponse { RaidPartyUid = partyUid }, error));
        if (error != ErrorCode.Success || p == null) return;

        int warp = DataTables.Find("Common/DungeonBase") is { } t && t.TryGetRow(p.DungeonId, out var row) && row.TryGetProperty("ID_WarpLocation", out var w) ? w.GetInt32() : 0;
        Logger.Info($"[Mir5Raid] {c.Nickname} enters dungeon {p.DungeonId} (warp location {warp}) with party {partyUid}");
        c.DungeonId = p.DungeonId;                                      // before the teleport: its visibility update then includes the dungeon's monsters
        if (warp == 0 || !await TeleportToLocationAsync(c, warp))
            await SystemMessageAsync(c, $"Dungeon {p.DungeonId} has no valid warp location.");
        await NotifyRaidStateAsync(p, c.PlayerUid, RaidMemberState.DungeonInPlay);
        await NotifyRaidInfoAsync(p, RaidPartyNotifyType.UpdateRaidParty, 0, except: c.PlayerUid);
    }

    private static async Task RaidDungeonOutAsync(Conn c, int field, long partyUid)
    {
        await c.Twoway(RaidReply(field, new SMT.DungeonOutResponse { RaidPartyUid = partyUid }));
        RaidParty? p;
        lock (RaidLock) p = RaidParties.TryGetValue(partyUid, out var found) ? found : null;
        if (p != null) await RaidBringOutAsync(c, p);
    }

    /// <summary>Teleports a member back to where he entered from and resets his state; the party goes back to Waiting when the dungeon is empty.</summary>
    private static async Task RaidBringOutAsync(Conn c, RaidParty p, bool teleport = true)
    {
        RaidMember? me; bool empty = false; int island = 1; double x = 0, y = 0, z = 0; float dir = 0; bool hasReturn;
        lock (RaidLock)
        {
            me = p.Members.FirstOrDefault(m => m.Uid == c.PlayerUid);
            if (me == null || !me.InDungeon) return;
            me.InDungeon = false; me.State = RaidMemberState.Waiting;
            hasReturn = me.HasReturn; island = me.ReturnIsland; x = me.ReturnX; y = me.ReturnY; z = me.ReturnZ; dir = me.ReturnDir;
            me.HasReturn = false;
            if (!p.Members.Any(m => m.InDungeon)) { p.State = 0; empty = true; }
        }
        int leftDungeon = c.DungeonId;
        c.DungeonId = 0;
        if (leftDungeon > 0 && !Connections.Values.Any(v => v != c && v.DungeonId == leftDungeon)) Mir5Spawns.ResetDungeon(leftDungeon);   // last one out: monsters respawn next time
        if (!teleport) { }                                       // the caller moves the player itself
        else if (hasReturn) await TeleportAsync(c, island, x, y, z, dir);
        else await TeleportToLocationAsync(c, FirstWarpLocationOfIsland(1));
        Logger.Info($"[Mir5Raid] {c.Nickname} left the dungeon of party {p.Uid}");
        await NotifyRaidStateAsync(p, c.PlayerUid, RaidMemberState.Waiting);
        if (empty) await NotifyRaidInfoAsync(p, RaidPartyNotifyType.UpdateRaidParty, 0);
    }

    /// <summary>RaidPartyAllDungeonOutReq (plain 20302): the leader sends everybody out of the dungeon.</summary>
    private static async Task OnRaidAllDungeonOutAsync(Conn c, CM.RaidPartyAllDungeonOutRequest req)
    {
        RaidParty? p; var error = ErrorCode.Success; List<long> inside = new();
        lock (RaidLock)
        {
            RaidParties.TryGetValue(req.RaidPartyUid, out p);
            if (p == null) error = ErrorCode.NotFoundRaidParty;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.NotEnableRaidPartyMaster;
            else inside = p.Members.Where(m => m.InDungeon).Select(m => m.Uid).ToList();
        }
        if (error == ErrorCode.Success)
            foreach (var uid in inside)
                if (OnlineConn(uid) is { } conn) await RaidBringOutAsync(conn, p!);
        await c.Plain(new SM.ServerMessages { RaidPartyAllDungeonOutRes = new SM.RaidPartyAllDungeonOutResponse { ErrorCode = error } });
    }

    // ---- plain messages ----

    private static async Task OnRaidPartyListAsync(Conn c, CM.RaidPartyListRequest req)
    {
        var res = new SM.RaidPartyListResponse { IsLast = true };
        lock (RaidLock)
            foreach (var p in RaidParties.Values.Where(p => p.IsPublic && p.State == 0 &&
                         (req.DungeonIds.Count == 0 || req.DungeonIds.Contains(p.DungeonId)) && (!req.IsEnableJoin || p.Members.Count < RaidMaxMembers)))
                res.RaidPartySimpleList.Add(RaidSimple(p));
        await c.Plain(new SM.ServerMessages { RaidPartyListRes = res });
    }

    private static async Task OnRaidPartySearchAsync(Conn c, CM.GetRaidPartyInfoSearchRequest req)
    {
        var res = new SM.GetRaidPartyInfoSearchResponse { SearchText = req.SearchText, IsLast = true };
        lock (RaidLock)
            foreach (var p in RaidParties.Values.Where(p => p.Name.Contains(req.SearchText, StringComparison.OrdinalIgnoreCase) || p.Uid.ToString() == req.SearchText))
                res.RaidPartySimpleList.Add(RaidSimple(p));
        await c.Plain(new SM.ServerMessages { GetRaidPartyInfoSearchRes = res });
    }

    // ---- disconnect / rejoin ----

    /// <summary>
    /// A closing connection: the member stays in the party as OffLine; if he is not back within <see cref="RaidOfflineGrace"/> he is removed.
    /// A party whose members are all offline lives on until the timers remove them.
    /// </summary>
    private static async Task RaidDisconnectAsync(Conn c)
    {
        if (c.PlayerUid == 0) return;
        RaidParty? p; int token = 0;
        lock (RaidLock)
        {
            p = RaidOfPlayer.TryGetValue(c.PlayerUid, out var partyUid) && RaidParties.TryGetValue(partyUid, out var found) ? found : null;
            var me = p?.Members.FirstOrDefault(m => m.Uid == c.PlayerUid);
            if (me == null) return;
            me.State = RaidMemberState.OffLine;
            token = ++me.OfflineToken;
        }
        Logger.Info($"[Mir5Raid] {c.Nickname} went offline in party {p!.Uid}");
        await NotifyRaidStateAsync(p, c.PlayerUid, RaidMemberState.OffLine, except: c.PlayerUid);
        _ = RaidOfflineTimeoutAsync(c.PlayerUid, p, token);
    }

    private static async Task RaidOfflineTimeoutAsync(long uid, RaidParty p, int token)
    {
        await Task.Delay(RaidOfflineGrace);
        lock (RaidLock)
        {
            var me = p.Members.FirstOrDefault(m => m.Uid == uid);
            if (me == null || me.OfflineToken != token || me.State != RaidMemberState.OffLine) return;   // came back or already gone
        }
        Logger.Info($"[Mir5Raid] {uid} did not come back to party {p.Uid}, removing him");
        await RaidRemoveAndNotifyAsync(uid, RaidPartyNotifyType.Leave);
    }

    /// <summary>
    /// Called once the client has loaded the map (JoinMapReadyComplete): a player who is still in a party gets its info again and his state is restored.
    /// </summary>
    private static async Task RaidRejoinAsync(Conn c)
    {
        RaidParty? p; RaidPartyInfo? info = null; RaidMemberState state = RaidMemberState.Waiting;
        lock (RaidLock)
        {
            p = RaidOfPlayer.TryGetValue(c.PlayerUid, out var partyUid) && RaidParties.TryGetValue(partyUid, out var found) ? found : null;
            var me = p?.Members.FirstOrDefault(m => m.Uid == c.PlayerUid);
            if (me == null) return;
            me.OfflineToken++;                                      // cancels the pending removal
            me.Nick = c.Nickname; me.Level = c.Level; me.CharId = c.CharId;
            me.State = state = me.InDungeon ? RaidMemberState.DungeonInPlay : RaidMemberState.Waiting;
            c.DungeonId = me.InDungeon ? p!.DungeonId : 0;
            info = RaidInfo(p!);
        }
        Logger.Info($"[Mir5Raid] {c.Nickname} is back in party {p!.Uid}");
        await c.Plain(new SM.ServerMessages { RaidPartyInfoNoti = new SM.RaidPartyInfoNotify { NotifyType = RaidPartyNotifyType.UpdateRaidParty, RaidPartyInfo = info, TargetPlayerUid = c.PlayerUid } });
        await NotifyRaidStateAsync(p, c.PlayerUid, state, except: c.PlayerUid);
    }
}
