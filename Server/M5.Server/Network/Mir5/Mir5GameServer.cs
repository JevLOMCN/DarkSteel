using System.Collections.Concurrent;
using System.Net;
using System.Net.Sockets;
using Google.Protobuf;
using Google.Protobuf.Reflection;
using M5.Core;
using M5.Database.Mysql;
using MirProto;
using CM = MirProto.ClientMsg;
using CMT = MirProto.ClientMsgTwoway;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;
using Msgs = MirProto.Messages;

namespace M5.Server.Network.Mir5;

/// <summary>
/// TCP game server for the Mir 5 client (UDS_NetworkManager). Framing (from UDS_NetworkManager::SendPacketInternal and
/// FDS_ReadPacketRunner::Run), identical in both directions and not encrypted:
///   [int32 LE length = payload + 1][1 byte message type][protobuf payload]
/// Client types: 'Y' (0x59) / 'e' (0x65) = ClientMessagesTwoway (request/response pairs matched by the oneof field number),
/// anything else = ClientMessages. Server type 'b' = ServerMessagesTwoway, anything else = ServerMessages.
/// Messages are the generated classes from M5.Protocol.
/// </summary>
public static partial class Mir5GameServer
{
    private const byte TypeServerTwoway = (byte)'b';
    private const byte TypeServerPlain = 0x0C;
    private const int MaxFrame = 0x7FFF;
    private static readonly TimeSpan SaveInterval = TimeSpan.FromSeconds(30);

    private static readonly ConcurrentDictionary<int, Conn> Connections = new();
    private static int _nextConnId;

    public static async Task StartAsync()
    {
        var ip = IPAddress.TryParse(Config.Data.IpAddress, out var parsed) ? parsed : IPAddress.Loopback;
        var listener = new TcpListener(ip, Config.Data.GamePort);
        listener.Start();
        Logger.Info($"[Mir5Game] listening on {ip}:{Config.Data.GamePort}");
        _ = Task.Run(AiLoopAsync);      // monster AI + player regeneration (Mir5Ai.cs)
        while (true)
        {
            var tcp = await listener.AcceptTcpClientAsync();
            tcp.NoDelay = true;
            _ = Task.Run(() => HandleAsync(tcp));
        }
    }

    private sealed class Conn
    {
        public required TcpClient Tcp { get; init; }
        public int Id;
        public NetworkStream Stream => Tcp.GetStream();
        public long PlayerUid;
        public string Nickname = "";
        public int WorldId = 1;
        public int CharId;                       // weapon type == char id
        public bool InWorld;                     // JoinMap sent
        public int Authority = 11;               // AccountAuthority (ds_account.player.authority); 21+ = GM
        public bool Immortal;
        public double Hp = -1;                   // current health; -1 = not initialised, EnsureHp sets it to the level's maximum
        public double Mp = -1;                   // current mana, same convention (EnsureMp)
        public double Vigor = -1;                // special-skill gauge (EnsureVigor)
        public Dictionary<int, DsAchievementRepository.Group>? Ach;     // achievement progress by group (Mir5Achievements.cs), null until login is done
        public readonly Dictionary<string, DateTime> ItemCooldowns = new();   // item use cooldowns by cooldown type
        public WarpType WarpKind = WarpType.Device;     // type of the warp in progress (PrepareWarp -> WarpArrive)
        public ResurrectType? PendingResurrect;          // a revive that completes when the warp arrives
        public bool Dead;
        public int DeathWarp;                    // WarpLocation the "base" resurrection goes to (set when the player dies)
        public int DeathCount;
        public DateTime LastHit = DateTime.MinValue;
        public Mir5Spawns.Npc? MountNpc;         // the mount NPC while the player rides
        public int IslandId = 1;
        public int DungeonId;                    // DungeonBase id while the player is inside a raid/party dungeon (0 = none)
        public double X, Y, Z;
        public float Direction;
        public bool PositionDirty;
        public int Level = 1;
        public long Exp;
        public readonly ConcurrentDictionary<int, Mir5Spawns.Npc> Visible = new();   // NPCs the client currently knows about (by spawn id)
        public int VisBusy;
        public DateTime LastVis = DateTime.MinValue;
        public DateTime LastSave = DateTime.UtcNow;
        public readonly SemaphoreSlim SendLock = new(1, 1);

        public async Task SendAsync(byte type, IMessage message) => await SendAsync(type, message.ToByteArray());

        public async Task SendAsync(byte type, byte[] payload)
        {
            var frame = new byte[5 + payload.Length];
            BitConverter.TryWriteBytes(frame.AsSpan(0, 4), payload.Length + 1);
            frame[4] = type;
            payload.CopyTo(frame, 5);
            await SendLock.WaitAsync();
            try { await Stream.WriteAsync(frame); }
            finally { SendLock.Release(); }
        }

        public Task Plain(SM.ServerMessages m) => SendAsync(TypeServerPlain, m);
        public Task Twoway(SMT.ServerMessagesTwoway m) => SendAsync(TypeServerTwoway, m);
    }

    private static async Task HandleAsync(TcpClient tcp)
    {
        var remote = tcp.Client.RemoteEndPoint;
        var c = new Conn { Tcp = tcp, Id = Interlocked.Increment(ref _nextConnId) };
        Connections[c.Id] = c;
        Logger.Info($"[Mir5Game] connected {remote}");
        try
        {
            var header = new byte[4];
            while (true)
            {
                await ReadExactAsync(c.Stream, header, 4);
                int len = BitConverter.ToInt32(header);
                if (len <= 0 || len > MaxFrame)
                {
                    Logger.Warning($"[Mir5Game] {remote} bad frame length {len}, closing");
                    break;
                }
                var body = new byte[len];
                await ReadExactAsync(c.Stream, body, len);
                if (!await DispatchAsync(c, body[0], body.AsMemory(1).ToArray())) break;
            }
        }
        catch (EndOfStreamException) { }
        catch (IOException) { }
        catch (Exception ex) { Logger.Error($"[Mir5Game] {remote} error: {ex}"); }
        finally
        {
            Connections.TryRemove(c.Id, out _);
            await DespawnMountAsync(c, notify: false);
            await RaidDisconnectAsync(c);
            await PartyDisconnectAsync(c);
            await SavePositionAsync(c, force: true);
            tcp.Close();
            Logger.Info($"[Mir5Game] disconnected {remote} (uid={c.PlayerUid})");
        }
    }

    private static async Task ReadExactAsync(Stream s, byte[] buf, int count)
    {
        int read = 0;
        while (read < count)
        {
            int n = await s.ReadAsync(buf.AsMemory(read, count - read));
            if (n == 0) throw new EndOfStreamException();
            read += n;
        }
    }

    // Plain message ids we have seen but deliberately ignore / have already warned about.
    private static readonly ConcurrentDictionary<string, bool> WarnedUnhandled = new();
    private static void WarnOnce(string kind, int field)
    {
        if (WarnedUnhandled.TryAdd($"{kind}:{field}", true))
            Logger.Warning($"[Mir5Game] unhandled {kind} message field {field}");
    }

    /// <summary>
    /// Runs one message. A handler that throws (database error, bad data...) is logged and answered with a Failure reply for twoway requests,
    /// but never drops the player's connection.
    /// </summary>
    private static async Task<bool> DispatchAsync(Conn c, byte type, byte[] payload)
    {
        try
        {
            return await DispatchCoreAsync(c, type, payload);
        }
        catch (Exception ex) when (ex is not (EndOfStreamException or IOException))
        {
            Logger.Error($"[Mir5Game] handler failed for uid={c.PlayerUid} (type 0x{type:X2}): {ex}");
            if (type == (byte)'Y' || type == (byte)'e')
            {
                try
                {
                    int field = (int)CMT.ClientMessagesTwoway.Parser.ParseFrom(payload).ClientMessageTwowayCase;
                    var reply = EmptyReply(field);
                    reply.ErrorCode = ErrorCode.Failure;
                    await c.Twoway(reply);
                }
                catch { /* connection or payload unusable */ }
            }
            return true;
        }
    }

    /// <returns>false to close the connection.</returns>
    private static async Task<bool> DispatchCoreAsync(Conn c, byte type, byte[] payload)
    {
        bool twoway = type == (byte)'Y' || type == (byte)'e';
        try
        {
            if (twoway)
            {
                var msg = CMT.ClientMessagesTwoway.Parser.ParseFrom(payload);
                var which = msg.ClientMessageTwowayCase;
                Logger.Info($"[Mir5Game] recv twoway {which} ({(int)which})");
                switch (which)
                {
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PingReq: await OnPingAsync(c, msg.PingReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.JoinGameServerReq: await OnJoinGameServerAsync(c, msg.JoinGameServerReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.WeatherReq: await c.Twoway(Reply((int)which, new SMT.WeatherResponse())); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.QuestMoveReq: await OnQuestMoveAsync(c, (int)which); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.QuestNpcTalkReq: await OnQuestNpcTalkAsync(c, (int)which, msg.QuestNpcTalkReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.QuestCompleteAllReq: await OnQuestCompleteAllAsync(c, (int)which, msg.QuestCompleteAllReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.AccelWaitReq: await OnAccelWaitAsync(c, (int)which, msg.AccelWaitReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PlayerSkillLearnReq: await OnPlayerSkillAdvanceAsync(c, (int)which, msg.PlayerSkillLearnReq.SkillType, true); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PlayerSkillLevelUpReq: await OnPlayerSkillAdvanceAsync(c, (int)which, msg.PlayerSkillLevelUpReq.SkillType, false); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PlayerSkillResetReq: await OnPlayerSkillResetAsync(c, (int)which, msg.PlayerSkillResetReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.MountChangeCompanionReq: await OnMountChangeCompanionAsync(c, (int)which, msg.MountChangeCompanionReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.MountDeleteReq: await OnMountDeleteAsync(c, (int)which, msg.MountDeleteReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.MountChangeNickNameReq: await OnMountRenameAsync(c, (int)which, msg.MountChangeNickNameReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.MountListSlotExtendReq: await OnMountExtendAsync(c, (int)which); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RingCommandSettingReq: await OnRingCommandSettingAsync(c, (int)which, msg.RingCommandSettingReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.WarpDeviceWarpReq: await OnWarpDeviceWarpAsync(c, (int)which, msg.WarpDeviceWarpReq); break;
                case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.ItemCraftReq: await OnItemCraftAsync(c, (int)which, msg.ItemCraftReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.ItemCraftWaitCompleteReq: await OnItemCraftClaimAsync(c, (int)which, msg.ItemCraftWaitCompleteReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.ItemCraftWaitCompleteAllReq: await OnItemCraftClaimAllAsync(c, (int)which); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.ItemCraftWaitCompleteCancelReq: await OnItemCraftCancelAsync(c, (int)which, msg.ItemCraftWaitCompleteCancelReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.AchievementCompleteReq: await OnAchievementCompleteAsync(c, (int)which, msg.AchievementCompleteReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.AchievementCompleteAllReq: await OnAchievementCompleteAllAsync(c, (int)which, msg.AchievementCompleteAllReq); break;
                    case CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.ResurrectWarpReq: await OnResurrectAsync(c, (int)which, msg.ResurrectWarpReq); break;
                    case >= CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyCreateReq and <= CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.PartyJoinReq:
                        await OnPartyAsync(c, (int)which, msg);
                        break;
                    case >= CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.RaidPartyCreateReq and <= CMT.ClientMessagesTwoway.ClientMessageTwowayOneofCase.DungeonOutReq:
                        await OnRaidPartyAsync(c, (int)which, msg);
                        break;
                    default:
                        WarnOnce("twoway", (int)which);
                        await c.Twoway(EmptyReply((int)which));
                        break;
                }
                return true;
            }

            var plain = CM.ClientMessages.Parser.ParseFrom(payload);
            var kind = plain.ClientMessageCase;
            switch (kind)
            {
                case CM.ClientMessages.ClientMessageOneofCase.NetSyncReq: OnNetSync(c, plain.NetSyncReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.HeartbeatReq:
                    await c.Plain(new SM.ServerMessages { HeartbeatRes = new SM.HeartbeatResponse() });
                    await SavePositionAsync(c, force: false);
                    break;
                case CM.ClientMessages.ClientMessageOneofCase.TimeSyncReq: await OnTimeSyncAsync(c, plain.TimeSyncReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.CreateCharacterReq: Logger.Info("[Mir5Game] recv CreateCharacterReq"); await OnCreateCharacterAsync(c, plain.CreateCharacterReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.JoinContinentReq: Logger.Info("[Mir5Game] recv JoinContinentReq"); await OnJoinContinentAsync(c); break;
                case CM.ClientMessages.ClientMessageOneofCase.JoinMapReadyCompleteReq:
                    Logger.Info("[Mir5Game] recv JoinMapReadyCompleteReq");
                    await UpdateVisibilityAsync(c);
                    await PushMyHpAsync(c);     // the client is ready now: (re)send current Hp / Mp so the bars are right
                    await RaidRejoinAsync(c);
                    break;
                case CM.ClientMessages.ClientMessageOneofCase.ChatReq: await OnChatAsync(c, plain.ChatReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.EquipReq: await OnEquipAsync(c, plain.EquipReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.WarpLoadingReq: await OnWarpLoadingAsync(c); break;
                case CM.ClientMessages.ClientMessageOneofCase.WarpArriveReq: await OnWarpArriveAsync(c); break;
                case CM.ClientMessages.ClientMessageOneofCase.WarpCancelReq: await OnWarpCancelAsync(c); break;
                case CM.ClientMessages.ClientMessageOneofCase.MountReq: await OnMountAsync(c, plain.MountReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.DisMountReq: await OnDisMountAsync(c); break;
                case CM.ClientMessages.ClientMessageOneofCase.CreateGuildReq: await OnCreateGuildAsync(c, plain.CreateGuildReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.CheckGuildNameExistReq: await OnCheckGuildNameAsync(c, plain.CheckGuildNameExistReq.GuildName); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetGuildListReq: await OnGetGuildListAsync(c, plain.GetGuildListReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetGuildReq: await OnGetGuildAsync(c, plain.GetGuildReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetGuildMembersReq: await OnGetGuildMembersAsync(c, plain.GetGuildMembersReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.JoinGuildReq: await OnJoinGuildAsync(c, plain.JoinGuildReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.ApproveJoinGuildReq: await OnApproveJoinGuildAsync(c, plain.ApproveJoinGuildReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetGuildPendingListReq: await OnGuildPendingListAsync(c, plain.GetGuildPendingListReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetMyPendingListReq: await OnMyPendingListAsync(c, plain.GetMyPendingListReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.CancelJoinGuildReq: await OnCancelJoinGuildAsync(c, plain.CancelJoinGuildReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.LeaveGuildReq: await OnLeaveGuildAsync(c, plain.LeaveGuildReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.DeleteGuildReq: await OnDeleteGuildAsync(c, plain.DeleteGuildReq.GuildUid); break;
                case CM.ClientMessages.ClientMessageOneofCase.DeleteGuildMemberReq: await OnKickGuildMemberAsync(c, plain.DeleteGuildMemberReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.DelegateGuildMasterReq: await OnDelegateGuildMasterAsync(c, plain.DelegateGuildMasterReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.ChangeGuildMemberGradeReq: await OnChangeGuildMemberGradeAsync(c, plain.ChangeGuildMemberGradeReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.UpdateGuildMarkReq: await OnUpdateGuildMarkAsync(c, plain.UpdateGuildMarkReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.UpdateGuildNameReq: await OnUpdateGuildNameAsync(c, plain.UpdateGuildNameReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.UpdateGuildSettingReq: await OnUpdateGuildSettingAsync(c, plain.UpdateGuildSettingReq); break;                case CM.ClientMessages.ClientMessageOneofCase.QuestTrackingReq: await OnQuestTrackingAsync(c, plain.QuestTrackingReq.QuestId); break;
                case CM.ClientMessages.ClientMessageOneofCase.QuestAutoTrackingReq: await OnQuestAutoTrackingAsync(c, plain.QuestAutoTrackingReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.QuestCompleteReq: await OnQuestCompleteRequestAsync(c, plain.QuestCompleteReq.QuestId); break;
                case CM.ClientMessages.ClientMessageOneofCase.QuestAcceptReq: await OnQuestAcceptAsync(c, plain.QuestAcceptReq.QuestId); break;
                case CM.ClientMessages.ClientMessageOneofCase.QuestCancelReq: await OnQuestCancelAsync(c, plain.QuestCancelReq.QuestId); break;
                case CM.ClientMessages.ClientMessageOneofCase.LogoutReq:
                    Logger.Info($"[Mir5Game] recv LogoutReq uid={c.PlayerUid}");
                    await c.Plain(new SM.ServerMessages { LogOutRes = new SM.LogOutSuccess() });
                    return false;
                case CM.ClientMessages.ClientMessageOneofCase.ItemUseReq: await OnItemUseAsync(c, plain.ItemUseReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.InvenExtendReq: await OnInvenExtendAsync(c, plain.InvenExtendReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.RaidPartyListReq: await OnRaidPartyListAsync(c, plain.RaidPartyListReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.RaidPartyAllDungeonOutReq: await OnRaidAllDungeonOutAsync(c, plain.RaidPartyAllDungeonOutReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.GetRaidPartyInfoSearchReq: await OnRaidPartySearchAsync(c, plain.GetRaidPartyInfoSearchReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.CastSkillReq: await OnCastSkillAsync(c, plain.CastSkillReq); break;
                case CM.ClientMessages.ClientMessageOneofCase.TerminateSkillReq:
                case CM.ClientMessages.ClientMessageOneofCase.StopSkillMoveReq:
                case CM.ClientMessages.ClientMessageOneofCase.NetSkillAttackSyncReq:
                case CM.ClientMessages.ClientMessageOneofCase.LogTimeSyncReq:
                case CM.ClientMessages.ClientMessageOneofCase.MoveSyncReq:
                    break; // tracked client side; nothing to answer yet
                default:
                    WarnOnce("client", (int)kind);
                    break;
            }
        }
        catch (InvalidProtocolBufferException ex)
        {
            Logger.Warning($"[Mir5Game] unparsable {(twoway ? "twoway" : "plain")} packet type=0x{type:X2} len={payload.Length}: {ex.Message}");
        }
        return true;
    }

    // ---- reply helpers ----

    /// <summary>ServerMessagesTwoway with the same oneof field as the request and error_code (field 100000000) Success.</summary>
    private static SMT.ServerMessagesTwoway Reply(int field, IMessage body)
    {
        var reply = new SMT.ServerMessagesTwoway { ErrorCode = ErrorCode.Success };
        SMT.ServerMessagesTwoway.Descriptor.FindFieldByNumber(field).Accessor.SetValue(reply, body);
        return reply;
    }

    /// <summary>Success reply with an empty body for a twoway request we don't implement yet, so the client does not wait forever.</summary>
    private static SMT.ServerMessagesTwoway EmptyReply(int field)
    {
        var fd = SMT.ServerMessagesTwoway.Descriptor.FindFieldByNumber(field);
        if (fd?.FieldType != FieldType.Message)
            return new SMT.ServerMessagesTwoway { ErrorCode = ErrorCode.Success };
        return Reply(field, (IMessage)Activator.CreateInstance(fd.MessageType.ClrType)!);
    }

    // ---- twoway handlers ----

    private static async Task OnPingAsync(Conn c, CMT.PingRequest req) =>
        await c.Twoway(Reply(5, new SMT.PongResponse { ServerTicks = ServerTicks(), ClientTicks = req.ClientTicks }));

    /// <summary>JoinGameServerRequest (twoway 72) -> JoinGameServerResponse.</summary>
    private static async Task OnJoinGameServerAsync(Conn c, CMT.JoinGameServerRequest req)
    {
        long playerUid = req.PlayerUid;
        c.WorldId = Math.Max(1, req.WorldId);

        var sidBytes = req.PlayerSessionUid?.Value;
        if (sidBytes is { Length: 16 })
        {
            var sid = new Guid(sidBytes.ToByteArray(), bigEndian: true);
            var session = await DsAccountRepository.GetSessionAsync(sid);
            if (session != null) playerUid = session.PlayerUid;
            else Logger.Warning($"[Mir5Game] join: session {sid} not found or expired (uid from packet={playerUid})");
        }

        c.PlayerUid = playerUid;
        c.Authority = playerUid > 0 ? await DsAccountRepository.GetAuthorityAsync(playerUid) : 11;
        c.Nickname = playerUid > 0 ? await DsPlayerRepository.GetNicknameAsync(playerUid) ?? "" : "";
        Logger.Info($"[Mir5Game] join uid={playerUid} world={c.WorldId} nickname='{c.Nickname}' authority={c.Authority}");

        if (string.IsNullOrEmpty(c.Nickname))
        {
            // No character yet: NotExistNickname makes the client spawn the character-creation room
            // (FDS_LoginService::ProcessJoinGameServerError). It still reads gmt_offset from the body.
            Logger.Info($"[Mir5Game] uid={playerUid} has no character -> NotExistNickname (character creation)");
            var noChar = new SMT.ServerMessagesTwoway { ErrorCode = ErrorCode.NotExistNickname };
            noChar.JoinGameServerRes = new SMT.JoinGameServerResponse { GmtOffset = 0 };
            await c.Twoway(noChar);
            return;
        }

        var res = new SMT.JoinGameServerResponse
        {
            ErrorCode = ErrorCode.Success,
            FrontEndClientSession = new Msgs.FrontEndClientSession { ServerIndex = 1, ClientSessionId = (ulong)playerUid },
            Player = new Msgs.PlayerEntity { Bits = Mir5World.EntityBits(playerUid) },
            MainCharacter = new Msgs.MainCharacter { Bits = Mir5World.EntityBits(playerUid) },
            GmtOffset = 0,
            NickName = c.Nickname,
            CharLevel = 1,
            LastZoneId = 1,
        };
        await c.Twoway(Reply(72, res));
    }

    // ---- plain handlers ----

    /// <summary>CreateCharacterRequest (321) -> CreateCharacterResponse (321).</summary>
    private static async Task OnCreateCharacterAsync(Conn c, CM.CreateCharacterRequest req)
    {
        long playerUid = req.PlayerUid != 0 ? req.PlayerUid : c.PlayerUid;
        string nickname = req.Nickname ?? "";
        int weapon = req.Weapon;   // weapon type == char id (Common/CharacterCreate rows are keyed 1,2,3,4,5,11,12,21,22 by weapon)
        Logger.Info($"[Mir5Game] create character uid={playerUid} nickname='{nickname}' weapon={weapon}");

        var error = ErrorCode.Success;
        try
        {
            if (playerUid <= 0 || string.IsNullOrWhiteSpace(nickname) || nickname.Length > 12)
                error = ErrorCode.CreateCharacterInvalidData;
            else
            {
                var appearance = Mir5World.ToAppearance(weapon, req.CustomInfo);
                if (!await DsPlayerRepository.CreateCharacterAsync(playerUid, nickname, c.WorldId, appearance,
                        Mir5World.BuildCustomJson(appearance), Mir5World.GetStartLocation(weapon), Mir5World.GetStartKit(weapon)))
                    error = ErrorCode.DuplicatedNickname; // nickname taken or player already has a character
            }
        }
        catch (Exception ex)
        {
            Logger.Error($"[Mir5Game] create character failed: {ex.Message}");
            error = ErrorCode.CreateCharacterInvalidData;
        }

        var res = new SM.CreateCharacterResponse { ErrorCode = error };
        if (error == ErrorCode.Success)
        {
            c.PlayerUid = playerUid;
            c.Nickname = nickname;
            res.FrontEndClientSession = new Msgs.FrontEndClientSession { ServerIndex = 1, ClientSessionId = (ulong)playerUid };
            res.Player = new Msgs.PlayerEntity { Bits = Mir5World.EntityBits(playerUid) };
            res.MainCharacter = new Msgs.MainCharacter { Bits = Mir5World.EntityBits(playerUid) };
            res.PlayerUid = playerUid;
        }
        Logger.Info($"[Mir5Game] create character -> {error}");
        await c.Plain(new SM.ServerMessages { CreateCharacterRes = res });
    }

    /// <summary>JoinContinentRequest (2): send the whole join sequence.</summary>
    private static async Task OnJoinContinentAsync(Conn c)
    {
        var state = c.PlayerUid > 0 ? await DsPlayerRepository.GetCharacterAsync(c.PlayerUid) : null;
        if (state == null)
        {
            Logger.Warning($"[Mir5Game] join continent: uid={c.PlayerUid} has no character");
            await c.Plain(new SM.ServerMessages { JoinMapRes = new SM.JoinMapResponse { ErrorCode = ErrorCode.NotExistNickname } });
            return;
        }

        c.CharId = state.Appearance.Weapon;
        c.IslandId = state.IslandId;
        var pos = System.Text.Json.JsonDocument.Parse(state.PositionJson).RootElement;
        c.X = pos.TryGetProperty("X", out var px) ? px.GetDouble() : 0;
        c.Y = pos.TryGetProperty("Y", out var py) ? py.GetDouble() : 0;
        c.Z = pos.TryGetProperty("Z", out var pz) ? pz.GetDouble() : 0;
        c.Direction = state.Direction;
        c.Level = state.Level;
        c.Exp = state.Exp;
        c.Visible.Clear();
        Logger.Info($"[Mir5Game] join continent uid={state.PlayerUid} '{state.Nickname}' charId={c.CharId} island={state.IslandId} items={state.Stackables.Count}+{state.Equipment.Count}eq");

        // Order matters: JoinMap creates the entity/data containers that the DbWorkItems then fill, and
        // MyCharacterInfoResponseComplete is what lets the client start loading the level.
        await c.Plain(Mir5World.JoinMap(state, c.CharId));
        await c.Plain(Mir5World.MyInfo(state));
        await SendMoneyAsync(c);      // every currency, not just gold (the craft window reads copper from here)
        await SendInvenExtendAsync(c); // bought extra bag / warehouse slots
        await SendWaitRowsAsync(c);   // queued crafts survive a relog
        await SendPlayerSkillsAsync(c); // learned ascender skills
        await SendMountsAsync(c);       // mount list + selected companion
        await SendRingAsync(c);         // ring menu slots
        await SendWarpDevicesAsync(c);  // activated warp devices
        await SendQuestStateAsync(c); // which quest is tracked
        await SendGuildAsync(c);      // "my guild" for the guild window
        await SendAchievementsAsync(c);   // achievement progress (the client shows 0/N and a claim button from this)
        foreach (var status in Mir5World.Status(state, c.CharId))
            await c.Plain(status);
        await c.Plain(Mir5World.InfoComplete(state));
        c.InWorld = true;
        await AchEventAsync(c, "PlayerConnection");                                   // every login counts
        await AchEventAsync(c, "PlayerGrade", amount: Math.Max(1, state.PlayerGrade));  // "Set" define: the current grade
        await AchEventAsync(c, "CharacterLevelUpAppoint", c.CharId, Math.Max(1, state.Level));   // "Set" define per character id: the character's level
    }

    /// <summary>Sends every ds_game.money row of the player (copper, gold, mileage...) as inventory updates.</summary>
    private static async Task SendMoneyAsync(Conn c)
    {
        var rows = await DsPlayerRepository.GetMoneyAsync(c.PlayerUid);
        if (rows.Count == 0) return;
        var update = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        foreach (var (moneyId, quantity) in rows)
            update.DbWorkItems.Add(new MirProto.DsGame.DbWorkItem { Money = new MirProto.DsGame.SqlMoneyTable { PlayerUid = c.PlayerUid, MoneyId = (MoneyType)moneyId, Quantity = quantity } });
        await c.Plain(new SM.ServerMessages { UpdateMyInfoRes = update });
    }

    /// <summary>
    /// EquipRequest (700). item_uid 0 empties the slot (the client sends that when you click a worn item). The client applies changes to
    /// its OWN character from DbWorkItem Equipment rows (item_uid 0 = clear slot; FDS_EquipmentItemCharacterData::UpdateEquipmentData) and
    /// uses EquipResponse only for other players' characters, so both are sent.
    /// </summary>
    private static async Task OnEquipAsync(Conn c, CM.EquipRequest req)
    {
        Logger.Info($"[Mir5Game] equip slot={req.SlotType}/{req.SlotIndex} item_uid={req.ItemUid}");
        var res = new SM.EquipResponse { EntityId = Mir5World.EntityBits(c.PlayerUid), SlotType = req.SlotType, SlotIndex = req.SlotIndex, ItemUid = req.ItemUid };
        IReadOnlyList<(int SlotType, int SlotIndex)> freed = Array.Empty<(int, int)>();
        try
        {
            var (result, itemId, moved) = await DsPlayerRepository.EquipAsync(c.PlayerUid, c.CharId, req.SlotType, req.SlotIndex, req.ItemUid,
                id => { var d = Mir5World.DescribeEquipItem(id); return (d.SlotType, d.SlotIndex); });
            freed = moved;
            res.ItemId = itemId;
            res.ErrorCode = result switch
            {
                DsPlayerRepository.EquipResult.Ok => ErrorCode.Success,
                DsPlayerRepository.EquipResult.ItemNotFound => ErrorCode.ItemNotFound,
                _ => ErrorCode.ItemEquipSlotWrong,
            };
            Logger.Info($"[Mir5Game] equip -> {res.ErrorCode} item_id={itemId}");
        }
        catch (Exception ex)
        {
            Logger.Error($"[Mir5Game] equip failed: {ex.Message}");
            res.ErrorCode = ErrorCode.Failure;
        }

        if (res.ErrorCode == ErrorCode.Success)
        {
            var update = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
            foreach (var (slotType, slotIndex) in freed)   // the item moved: empty the slots it left
                update.DbWorkItems.Add(new MirProto.DsGame.DbWorkItem { Equipment = new MirProto.DsGame.SqlEquipmentTable { PlayerUid = c.PlayerUid, CharId = c.CharId, SlotType = slotType, SlotIndex = slotIndex, ItemUid = 0 } });
            update.DbWorkItems.Add(new MirProto.DsGame.DbWorkItem { Equipment = new MirProto.DsGame.SqlEquipmentTable { PlayerUid = c.PlayerUid, CharId = c.CharId, SlotType = req.SlotType, SlotIndex = req.SlotIndex, ItemUid = req.ItemUid } });
            await c.Plain(new SM.ServerMessages { UpdateMyInfoRes = update });
            await BroadcastNearAsync(c.IslandId, c.X, c.Y, new SM.ServerMessages { EquipRes = res }, except: c);   // other players see the change
        }
        else
        {
            await c.Plain(new SM.ServerMessages { EquipRes = res });   // error code only
        }
    }
    private static async Task OnTimeSyncAsync(Conn c, CM.TimeSyncRequest req) =>
        await c.Plain(new SM.ServerMessages
        {
            TimeSyncRes = new SM.TimeSyncResponse { EntityId = Mir5World.EntityBits(c.PlayerUid), ServerTicks = ServerTicks(), ClientTicks = req.ClientTicks },
        });

    /// <summary>NetSyncRequest (6): the client reports its position about every few hundred ms. Remember it for saving.</summary>
    private static void OnNetSync(Conn c, CM.NetSyncRequest req)
    {
        if (!c.InWorld || req.Position == null) return;
        c.X = req.Position.X; c.Y = req.Position.Y; c.Z = req.Position.Z;
        if (req.Direction != null)
            c.Direction = (float)(Math.Atan2(req.Direction.Y, req.Direction.X) * 180.0 / Math.PI);
        c.PositionDirty = true;
        if (DateTime.UtcNow - c.LastVis > TimeSpan.FromSeconds(1.5)) _ = UpdateVisibilityAsync(c);
    }

    /// <summary>Spawn NPCs that came into range and remove the ones that left it.</summary>
    private static async Task UpdateVisibilityAsync(Conn c)
    {
        if (!c.InWorld || Interlocked.Exchange(ref c.VisBusy, 1) == 1) return;
        try
        {
            c.LastVis = DateTime.UtcNow;
            double hide2 = Mir5Spawns.HideRadius * Mir5Spawns.HideRadius;
            var gone = c.Visible.Values.Where(n => Mir5Spawns.Distance2(n, c.X, c.Y) > hide2).Select(n => n.S.Id).ToList();
            if (gone.Count > 0)
            {
                foreach (var id in gone) c.Visible.TryRemove(id, out _);
                await c.Plain(Mir5Spawns.Remove(gone));
            }

            var fresh = Mir5Spawns.Near(c.IslandId, c.DungeonId, c.X, c.Y, Mir5Spawns.ShowRadius)
                .Where(n => !c.Visible.ContainsKey(n.S.Id))
                .OrderBy(n => Mir5Spawns.Distance2(n, c.X, c.Y)).Take(60).ToList();
            foreach (var n in fresh)
            {
                c.Visible[n.S.Id] = n;
                await c.Plain(Mir5Spawns.Build(n));
            }
            if (fresh.Count > 0 || gone.Count > 0)
                Logger.Info($"[Mir5Game] spawns for uid={c.PlayerUid}: +{fresh.Count} -{gone.Count} (visible {c.Visible.Count})");
        }
        catch (Exception ex) { Logger.Warning($"[Mir5Game] visibility update failed: {ex.Message}"); }
        finally { Interlocked.Exchange(ref c.VisBusy, 0); }
    }

    /// <summary>ChatRequest (20900) -> ChatResponse (21000) to everyone connected.</summary>
    private static async Task OnChatAsync(Conn c, CM.ChatRequest req)
    {
        Logger.Info($"[Mir5Game] chat {c.Nickname}: {req.Text}");
        if (await TryGmCommandAsync(c, req.Text ?? "")) return;
        var msg = new SM.ServerMessages
        {
            ChatRes = new SM.ChatResponse { Text = req.Text, ChattingType = req.ChattingType, SenderName = c.Nickname, SenderPlayerUid = c.PlayerUid },
        };
        // party / raid party channels only reach the members of the sender's party
        if (req.ChattingType == ChattingType.Party) { await SendToRaidAsync(PartyMembersOf(c.PlayerUid), msg); return; }
        if (req.ChattingType == ChattingType.RaidParty) { await SendToRaidAsync(RaidMembersOf(c.PlayerUid), msg); return; }
        foreach (var other in Connections.Values.Where(x => x.InWorld).ToList())
        {
            try { await other.Plain(msg); } catch { /* connection is closing */ }
        }
    }

    private static async Task SavePositionAsync(Conn c, bool force)
    {
        if (!c.InWorld || !c.PositionDirty) return;
        if (!force && DateTime.UtcNow - c.LastSave < SaveInterval) return;
        c.LastSave = DateTime.UtcNow;
        c.PositionDirty = false;
        try { await DsPlayerRepository.SavePositionAsync(c.PlayerUid, c.IslandId, c.X, c.Y, c.Z, c.Direction); }
        catch (Exception ex) { Logger.Warning($"[Mir5Game] save position failed for uid={c.PlayerUid}: {ex.Message}"); }
    }

    // ---- helpers ----


    /// <summary>Server clock in seconds since start (the client uses it for time sync only).</summary>
    /// <summary>
    /// Server time as Unix seconds. The client builds its "server date-time" (craft timers, the clock in the menu...) from this value in the
    /// ping / time-sync replies, so it must be real time; seconds since server start made every timer read as 1970.
    /// </summary>
    private static double ServerTicks() => (DateTime.UtcNow - DateTime.UnixEpoch).TotalSeconds;
}
