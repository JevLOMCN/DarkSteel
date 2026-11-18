using M5.Core;
using M5.Database.Mysql;
using MirProto;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// The ring menu (RingCommandSettingReq 21300): the player drags commands (actions such as Mount, skills, items) into slots of 3 decks x 8 slots;
/// the request carries the slots to set (deck, slot, command type, value) and the slots to clear. Stored in ds_game.ring_command and sent at login.
/// </summary>
public static partial class Mir5GameServer
{
    private static Ds.DbWorkItem RingItem(Conn c, DsRingRepository.Slot s, bool delete = false) => new()
    {
        RingCommand = new Ds.SqlRingCommandTable { PlayerUid = c.PlayerUid, DeckIndex = s.Deck, SlotIndex = s.Index, CmdType = (RingCmdType)s.CmdType, CmdValue = s.CmdValue },
        DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None,
    };

    private static async Task SendRingAsync(Conn c)
    {
        var items = (await DsRingRepository.ListAsync(c.PlayerUid)).Select(s => RingItem(c, s)).ToList();
        if (items.Count > 0) await PushDbItemsAsync(c, items);
    }

    private static async Task OnRingCommandSettingAsync(Conn c, int field, CMT.RingCommandSettingRequest req)
    {
        var push = new List<Ds.DbWorkItem>();
        foreach (var d in req.Delete)
        {
            await DsRingRepository.DeleteAsync(c.PlayerUid, d.DeckIndex, d.SlotIndex);
            push.Add(RingItem(c, new DsRingRepository.Slot(d.DeckIndex, d.SlotIndex, 0, 0), delete: true));
        }
        foreach (var s in req.Set)
        {
            var slot = new DsRingRepository.Slot(s.SlotDeck?.DeckIndex ?? 0, s.SlotDeck?.SlotIndex ?? 0, (int)s.CmdType, s.CmdValue);
            await DsRingRepository.SetAsync(c.PlayerUid, slot);
            push.Add(RingItem(c, slot));
            Logger.Info($"[Mir5Ring] {c.Nickname} deck {slot.Deck} slot {slot.Index} = {s.CmdType} {slot.CmdValue}");
        }
        if (push.Count > 0) await PushDbItemsAsync(c, push);    // the client only applies slot changes that come back as database rows
        await c.Twoway(Reply(field, new SMT.RingCommandSettingResponse()));
    }
}