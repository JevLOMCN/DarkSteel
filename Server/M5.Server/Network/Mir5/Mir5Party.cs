using Google.Protobuf;
using M5.Core;
using MirProto;
using MirProto.DsProto;
using CMT = MirProto.ClientMsgTwoway;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// The normal party (L key; twoway 20100-20109), in memory on this game server. Create, invite (PartyInvitedRes popup on the target), accept/reject,
/// join, kick, leave, dismiss, change leader and slot swap. The client keeps its party from plain messages: PartyInfoRes (20100) carries the party
/// and ALL slots (empty slots too, a later PartySlotChangeRes only updates a slot the client already has), PartySlotChangeRes (20101) one slot,
/// PartyLeaderChangeRes (20103), PartyDismissRes (20105) and PartyKickedRes (20106) clear it. The twoway replies are just acknowledgements.
/// Party chat (ChattingType.Party) is routed to the members only. A member who disconnects leaves the party.
/// Not implemented: PartyMemberSync (HP/position of members), party exp bonus, rejoin after disconnect.
/// </summary>
public static partial class Mir5GameServer
{
    private const int PartyMaxMembers = 5;
    private static readonly TimeSpan PartyInviteTime = TimeSpan.FromSeconds(30);

    private sealed class PartyMember
    {
        public uint Slot;
        public long Uid;
        public string Nick = "";
        public int CharId, Level;
    }

    private sealed class Party
    {
        public long Uid;
        public long LeaderUid;
        public readonly List<PartyMember> Members = new();
        public readonly Dictionary<long, long> Invited = new();      // invited player uid -> inviter uid
    }

    private static readonly object PartyLock = new();
    private static readonly Dictionary<long, Party> Parties = new();
    private static readonly Dictionary<long, long> PartyOfPlayer = new();
    private static long _nextPartyUid = 1;

    private static PartySlotInfo PartySlot(Party p, uint slot)
    {
        var m = p.Members.FirstOrDefault(x => x.Slot == slot);
        var s = new PartySlotInfo { SlotIndex = slot };
        if (m != null) s.Member = new PartyMemberInfo { PlayerUid = m.Uid, Name = m.Nick, Level = m.Level, Online = true, CharId = m.CharId, Dead = false, GameServerIndex = 1 };
        return s;
    }

    private static SM.PartyInfoResponse PartyFullInfo(Party p)
    {
        var res = new SM.PartyInfoResponse { ErrorCode = ErrorCode.Success, Party = new PartyInfo { PartyUid = p.Uid, LeaderUid = p.LeaderUid } };
        for (uint i = 0; i < PartyMaxMembers; i++) res.Slots.Add(PartySlot(p, i));
        return res;
    }

    private static uint FreePartySlot(Party p)
    {
        for (uint i = 0; i < PartyMaxMembers; i++)
            if (p.Members.All(m => m.Slot != i)) return i;
        return uint.MaxValue;
    }

    private static PartyMember NewPartyMember(Conn c, uint slot) => new() { Slot = slot, Uid = c.PlayerUid, Nick = c.Nickname, CharId = c.CharId, Level = c.Level };

    private static List<long> PartyUids(Party p) { lock (PartyLock) return p.Members.Select(m => m.Uid).ToList(); }

    private static Task SendToPartyAsync(Party p, SM.ServerMessages msg, long except = 0) => SendToRaidAsync(PartyUids(p), msg, except);

    private static List<long> PartyMembersOf(long playerUid)
    {
        lock (PartyLock)
            return PartyOfPlayer.TryGetValue(playerUid, out var id) && Parties.TryGetValue(id, out var p) ? p.Members.Select(m => m.Uid).ToList() : new List<long>();
    }

    private static async Task OnPartyAsync(Conn c, int field, CMT.ClientMessagesTwoway msg)
    {
        switch (msg.ClientMessageTwowayCase)
        {
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyCreateReq: await PartyCreateAsync(c, field); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyInviteReq: await PartyInviteAsync(c, field, msg.PartyInviteReq); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyInvitedAcceptReq: await PartyJoinCoreAsync(c, field, msg.PartyInvitedAcceptReq.PartyId, invited: true); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyInvitedRejectReq: await PartyRejectAsync(c, field, msg.PartyInvitedRejectReq.PartyId); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyJoinReq: await PartyJoinCoreAsync(c, field, msg.PartyJoinReq.PartyId, invited: false); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyKickReq: await PartyKickAsync(c, field, msg.PartyKickReq.TargetPlayerUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyLeaveReq: await PartyLeaveAsync(c, field); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyDismissReq: await PartyDismissAsync(c, field); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyLeaderChangeReq: await PartyLeaderChangeAsync(c, field, msg.PartyLeaderChangeReq.TargetPlayerUid); break;
            case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartySlotChangeReq: await PartySlotChangeAsync(c, field, msg.PartySlotChangeReq); break;
        }
    }

    private static async Task PartyCreateAsync(Conn c, int field)
    {
        Party? p = null;
        lock (PartyLock)
        {
            if (!PartyOfPlayer.ContainsKey(c.PlayerUid))
            {
                p = new Party { Uid = _nextPartyUid++, LeaderUid = c.PlayerUid };
                p.Members.Add(NewPartyMember(c, 0));
                Parties[p.Uid] = p;
                PartyOfPlayer[c.PlayerUid] = p.Uid;
            }
        }
        if (p == null) { await c.Twoway(RaidReply(field, new SMT.PartyCreateResponse(), ErrorCode.PartyAlreadyExist)); return; }
        Logger.Info($"[Mir5Party] {c.Nickname} created party {p.Uid}");
        // the client finishes "create" when the party info arrives, so the info goes before the acknowledgement
        SM.PartyInfoResponse info; lock (PartyLock) info = PartyFullInfo(p);
        await c.Plain(new SM.ServerMessages { PartyInfoRes = info });
        await c.Twoway(RaidReply(field, new SMT.PartyCreateResponse { PartyUid = p.Uid }));
    }

    private static async Task PartyInviteAsync(Conn c, int field, CMT.PartyInviteRequest req)
    {
        var target = OnlineConn(req.TargetPlayerUid);
        Party? p = null; var error = ErrorCode.Success; long partyUid = 0; int level = c.Level;
        lock (PartyLock)
        {
            if (!PartyOfPlayer.TryGetValue(c.PlayerUid, out partyUid) || !Parties.TryGetValue(partyUid, out p)) error = ErrorCode.PartyNotFound;
            else if (target == null) error = ErrorCode.PartyNotConnected;
            else if (PartyOfPlayer.ContainsKey(target.PlayerUid)) error = ErrorCode.PartyAlreadyExist;
            else if (p.Members.Count >= PartyMaxMembers) error = ErrorCode.PartyNotEnoughSlot;
            else if (p.Invited.ContainsKey(target.PlayerUid)) error = ErrorCode.PartyAlreadyInvited;
            else p.Invited[target.PlayerUid] = c.PlayerUid;
        }
        if (error == ErrorCode.Success)
        {
            Logger.Info($"[Mir5Party] {c.Nickname} invited {target!.Nickname} to party {partyUid}");
            await target.Plain(new SM.ServerMessages
            {
                PartyInvitedRes = new SM.PartyInvitedResponse
                {
                    Invited = new PartyInvitedInfo { PartyId = partyUid, EndTime = ServerTicks() + PartyInviteTime.TotalSeconds, SenderUid = c.PlayerUid, SenderLevel = level, SenderName = c.Nickname },
                },
            });
            _ = PartyInviteExpireAsync(p!, target.PlayerUid, c.PlayerUid);
        }
        await c.Twoway(RaidReply(field, new SMT.PartyInviteResponse(), error));
    }

    private static async Task PartyInviteExpireAsync(Party p, long targetUid, long inviterUid)
    {
        await Task.Delay(PartyInviteTime);
        bool expired;
        lock (PartyLock) expired = p.Invited.TryGetValue(targetUid, out var who) && who == inviterUid && p.Invited.Remove(targetUid);
        if (expired)
            await SendToRaidAsync([inviterUid], new SM.ServerMessages { PartyRejectInfoRes = new SM.PartyRejectInfoResponse { RejectInfo = new PartyInviteRejectInfo { SenderUid = targetUid, IsTimeout = true } } });
    }

    private static async Task PartyRejectAsync(Conn c, int field, long partyId)
    {
        long inviter = 0;
        lock (PartyLock)
            if (Parties.TryGetValue(partyId, out var p) && p.Invited.TryGetValue(c.PlayerUid, out inviter)) p.Invited.Remove(c.PlayerUid); else inviter = 0;
        if (inviter != 0)
            await SendToRaidAsync([inviter], new SM.ServerMessages { PartyRejectInfoRes = new SM.PartyRejectInfoResponse { RejectInfo = new PartyInviteRejectInfo { SenderUid = c.PlayerUid, IsTimeout = false } } });
        await c.Twoway(RaidReply(field, new SMT.PartyInvitedRejectResponse()));
    }

    private static async Task PartyJoinCoreAsync(Conn c, int field, long partyId, bool invited)
    {
        Party? p; var error = ErrorCode.Success; uint slot = 0; SM.PartyInfoResponse? info = null; SM.PartySlotChangeResponse? slotMsg = null;
        lock (PartyLock)
        {
            Parties.TryGetValue(partyId, out p);
            if (p == null) error = ErrorCode.PartyNotFound;
            else if (PartyOfPlayer.ContainsKey(c.PlayerUid)) error = ErrorCode.PartyAlreadyExist;
            else if (invited && !p.Invited.ContainsKey(c.PlayerUid)) error = ErrorCode.PartyNotInvited;
            else if ((slot = FreePartySlot(p)) == uint.MaxValue) error = ErrorCode.PartyNotEnoughSlot;
            else
            {
                p.Invited.Remove(c.PlayerUid);
                p.Members.Add(NewPartyMember(c, slot));
                PartyOfPlayer[c.PlayerUid] = p.Uid;
                info = PartyFullInfo(p);
                slotMsg = new SM.PartySlotChangeResponse { ErrorCode = ErrorCode.Success, Slot = PartySlot(p, slot) };
            }
        }
        if (error == ErrorCode.Success)
        {
            Logger.Info($"[Mir5Party] {c.Nickname} joined party {partyId} (slot {slot})");
            await c.Plain(new SM.ServerMessages { PartyInfoRes = info });
            await SendToPartyAsync(p!, new SM.ServerMessages { PartySlotChangeRes = slotMsg }, except: c.PlayerUid);
        }
        await c.Twoway(RaidReply(field, invited ? new SMT.PartyInvitedAcceptResponse() : new SMT.PartyJoinResponse(), error));
    }

    /// <summary>Removes a member. Returns the party if it still exists and the slot that became free.</summary>
    private static Party? PartyRemove(long uid, out uint freedSlot, out bool leaderChanged)
    {
        lock (PartyLock)
        {
            freedSlot = 0; leaderChanged = false;
            if (!PartyOfPlayer.Remove(uid, out var partyUid) || !Parties.TryGetValue(partyUid, out var p)) return null;
            freedSlot = p.Members.First(m => m.Uid == uid).Slot;
            p.Members.RemoveAll(m => m.Uid == uid);
            p.Invited.Remove(uid);
            if (p.Members.Count == 0) { Parties.Remove(p.Uid); return null; }
            if (p.LeaderUid == uid) { p.LeaderUid = p.Members.OrderBy(m => m.Slot).First().Uid; leaderChanged = true; }
            return p;
        }
    }

    /// <summary>Tells the rest of the party that a member went away (empty slot, new leader).</summary>
    private static async Task PartyAnnounceRemovalAsync(Party? p, uint freedSlot, bool leaderChanged)
    {
        if (p == null) return;
        SM.PartySlotChangeResponse slotMsg; long leader;
        lock (PartyLock) { slotMsg = new SM.PartySlotChangeResponse { ErrorCode = ErrorCode.Success, Slot = PartySlot(p, freedSlot) }; leader = p.LeaderUid; }
        await SendToPartyAsync(p, new SM.ServerMessages { PartySlotChangeRes = slotMsg });
        if (leaderChanged)
            await SendToPartyAsync(p, new SM.ServerMessages { PartyLeaderChangeRes = new SM.PartyLeaderChangeResponse { ErrorCode = ErrorCode.Success, LeaderUid = leader } });
    }

    private static async Task PartyKickAsync(Conn c, int field, long targetUid)
    {
        Party? p; var error = ErrorCode.Success; var ok = false;
        lock (PartyLock)
        {
            p = PartyOfPlayer.TryGetValue(c.PlayerUid, out var id) && Parties.TryGetValue(id, out var found) ? found : null;
            if (p == null) error = ErrorCode.PartyNotFound;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.PartyNotLeader;
            else if (targetUid == c.PlayerUid || p.Members.All(m => m.Uid != targetUid)) error = ErrorCode.PartyMemberNotFound;
            else ok = true;
        }
        if (ok)
        {
            var rest = PartyRemove(targetUid, out var slot, out var leaderChanged);
            await SendToRaidAsync([targetUid], new SM.ServerMessages { PartyKickedRes = new SM.PartyKickedResponse() });
            await PartyAnnounceRemovalAsync(rest, slot, leaderChanged);
            Logger.Info($"[Mir5Party] {c.Nickname} kicked {targetUid}");
        }
        await c.Twoway(RaidReply(field, new SMT.PartyKickResponse(), error));
    }

    private static async Task PartyLeaveAsync(Conn c, int field)
    {
        var rest = PartyRemove(c.PlayerUid, out var slot, out var leaderChanged);
        // the leaver's own client only clears its party on a dismiss message
        await c.Plain(new SM.ServerMessages { PartyDismissRes = new SM.PartyDismissResponse { ErrorCode = ErrorCode.Success } });
        await PartyAnnounceRemovalAsync(rest, slot, leaderChanged);
        Logger.Info($"[Mir5Party] {c.Nickname} left his party");
        await c.Twoway(RaidReply(field, new SMT.PartyLeaveResponse()));
    }

    private static async Task PartyDismissAsync(Conn c, int field)
    {
        Party? p; var error = ErrorCode.Success; List<long> uids = new();
        lock (PartyLock)
        {
            p = PartyOfPlayer.TryGetValue(c.PlayerUid, out var id) && Parties.TryGetValue(id, out var found) ? found : null;
            if (p == null) error = ErrorCode.PartyNotFound;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.PartyNotLeader;
            else
            {
                uids = p.Members.Select(m => m.Uid).ToList();
                foreach (var u in uids) PartyOfPlayer.Remove(u);
                Parties.Remove(p.Uid);
            }
        }
        if (error == ErrorCode.Success)
        {
            Logger.Info($"[Mir5Party] {c.Nickname} dismissed party {p!.Uid}");
            await SendToRaidAsync(uids, new SM.ServerMessages { PartyDismissRes = new SM.PartyDismissResponse { ErrorCode = ErrorCode.Success } });
        }
        await c.Twoway(RaidReply(field, new SMT.PartyDismissResponse(), error));
    }

    private static async Task PartyLeaderChangeAsync(Conn c, int field, long targetUid)
    {
        Party? p; var error = ErrorCode.Success;
        lock (PartyLock)
        {
            p = PartyOfPlayer.TryGetValue(c.PlayerUid, out var id) && Parties.TryGetValue(id, out var found) ? found : null;
            if (p == null) error = ErrorCode.PartyNotFound;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.PartyNotLeader;
            else if (p.Members.All(m => m.Uid != targetUid)) error = ErrorCode.PartyMemberNotFound;
            else p.LeaderUid = targetUid;
        }
        if (error == ErrorCode.Success)
            await SendToPartyAsync(p!, new SM.ServerMessages { PartyLeaderChangeRes = new SM.PartyLeaderChangeResponse { ErrorCode = ErrorCode.Success, LeaderUid = targetUid } });
        await c.Twoway(RaidReply(field, new SMT.PartyLeaderChangeResponse(), error));
    }

    private static async Task PartySlotChangeAsync(Conn c, int field, CMT.PartySlotChangeRequest req)
    {
        Party? p; var error = ErrorCode.Success; List<SM.PartySlotChangeResponse> msgs = new();
        lock (PartyLock)
        {
            p = PartyOfPlayer.TryGetValue(c.PlayerUid, out var id) && Parties.TryGetValue(id, out var found) ? found : null;
            if (p == null) error = ErrorCode.PartyNotFound;
            else if (p.LeaderUid != c.PlayerUid) error = ErrorCode.PartyNotLeader;
            else if (req.BeforeSlot >= PartyMaxMembers || req.AfterSlot >= PartyMaxMembers) error = ErrorCode.PartySlotNotChange;
            else
            {
                var a = p.Members.FirstOrDefault(m => m.Slot == req.BeforeSlot);
                var b = p.Members.FirstOrDefault(m => m.Slot == req.AfterSlot);
                if (a != null) a.Slot = req.AfterSlot;
                if (b != null) b.Slot = req.BeforeSlot;
                msgs.Add(new SM.PartySlotChangeResponse { ErrorCode = ErrorCode.Success, Slot = PartySlot(p, req.BeforeSlot) });
                msgs.Add(new SM.PartySlotChangeResponse { ErrorCode = ErrorCode.Success, Slot = PartySlot(p, req.AfterSlot) });
            }
        }
        if (error == ErrorCode.Success)
            foreach (var m in msgs) await SendToPartyAsync(p!, new SM.ServerMessages { PartySlotChangeRes = m });
        await c.Twoway(RaidReply(field, new SMT.PartySlotChangeResponse(), error));
    }

    /// <summary>A closing connection: the player leaves his party.</summary>
    private static async Task PartyDisconnectAsync(Conn c)
    {
        if (c.PlayerUid == 0) return;
        var rest = PartyRemove(c.PlayerUid, out var slot, out var leaderChanged);
        await PartyAnnounceRemovalAsync(rest, slot, leaderChanged);
    }
}
