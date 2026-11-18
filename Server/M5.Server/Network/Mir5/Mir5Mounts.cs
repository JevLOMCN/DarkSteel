using M5.Core;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using CM = MirProto.ClientMsg;
using CMT = MirProto.ClientMsgTwoway;
using Ds = MirProto.DsGame;
using SM = MirProto.ServerMsg;
using SMT = MirProto.ServerMsgTwoway;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Mounts. The player owns mounts (ds_game.mount_list, MountBase ids from Common/MountBase) and picks one as the companion
/// (mount_inven_info.selected_mount_uid; MountChangeCompanionReq 22101). MountReq (490) spawns the mount as an NPC (MountBase.ID_NpcBase)
/// at the player and answers MountRes (591) with that entity; DisMountReq (491) removes it again (DisMountRes 592, is_despawn).
/// Delete / rename / extra slots are twoway requests 22100-22103. Not done: equipment on the mount, hunger/fatigue, taming, lost mounts,
/// mount movement sync (the client moves the mount itself).
/// </summary>
public static partial class Mir5GameServer
{
    private static Ds.DbWorkItem MountItem(Conn c, DsMountRepository.Mount m, bool delete = false)
    {
        var row = new Ds.SqlMountListTable { PlayerUid = c.PlayerUid, MountUid = m.MountUid, MountId = m.MountId, MountNickname = m.Nickname, Hunger = m.Hunger, Fatigue = m.Fatigue };
        row.EquipItemIds.AddRange(m.Equip);
        return new Ds.DbWorkItem { MountList = row, DirtyFlag = delete ? DirtyFlag.Delete : DirtyFlag.None };
    }

    private static Ds.DbWorkItem MountInvenItem(Conn c, int slots, long selected) => new()
    {
        MountInvenInfo = new Ds.SqlMountInvenInfoTable { PlayerUid = c.PlayerUid, ExtendedSlotCount = slots, SelectedMountUid = selected },
    };

    private const int ActionFunctionMount = 6;      // EDS_ActionFunctionType::Mount: the "Mount" entry of the ring menu Action tab

    private static Ds.DbWorkItem ActionItem(Conn c, int action) => new() { ActionFunction = new Ds.SqlActionFunctionTable { PlayerUid = c.PlayerUid, ActionBaseId = (ActionFunctionType)action } };

    /// <summary>Unlocks the ring-menu Mount action (needed before the client lets you register/use a mount) and tells the client.</summary>
    private static async Task UnlockMountActionAsync(Conn c)
    {
        if (await DsMountRepository.UnlockActionAsync(c.PlayerUid, ActionFunctionMount)) await PushDbItemsAsync(c, new[] { ActionItem(c, ActionFunctionMount) });
    }

    /// <summary>At login: the unlocked ring-menu actions, the mount list and which one is selected.</summary>
    private static async Task SendMountsAsync(Conn c)
    {
        var mounts = await DsMountRepository.ListAsync(c.PlayerUid);
        var skills = await DsSkillRepository.ListAsync(c.PlayerUid);
        if (mounts.Count > 0 || skills.Any(s => s.SkillType is 9 or 10 or 11)) await DsMountRepository.UnlockActionAsync(c.PlayerUid, ActionFunctionMount);
        var items = (await DsMountRepository.ActionsAsync(c.PlayerUid)).Select(a => ActionItem(c, a)).ToList();
        items.AddRange(mounts.Select(m => MountItem(c, m)));
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        items.Add(MountInvenItem(c, inven.ExtendedSlots, inven.SelectedUid));
        await PushDbItemsAsync(c, items);
    }

    /// <summary>GM mountadd.</summary>
    private static async Task GmMountAddAsync(Conn c, string[] args)
    {
        if (args.Length < 1 || !int.TryParse(args[0], out var mountId)) { await SystemMessageAsync(c, "usage: mountadd <MountBase ID>   (see Common/MountBase: 5, 6, 7, 77, 999, 10001, 10002)"); return; }
        if (DataTables.Find("Common/MountBase") is not { } t || !t.TryGetRow(mountId, out _)) { await SystemMessageAsync(c, $"Unknown MountBase id {mountId}."); return; }
        var (mount, selected) = await DsMountRepository.AddAsync(c.PlayerUid, mountId);
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        await UnlockMountActionAsync(c);
        await PushDbItemsAsync(c, new[] { MountItem(c, mount), MountInvenItem(c, inven.ExtendedSlots, selected) });
        await SystemMessageAsync(c, $"Mount {mountId} added (uid {mount.MountUid}){(selected == mount.MountUid ? " and selected as your companion" : "")}.");
    }

    private static int MountNpcOf(int mountId) =>
        DataTables.Find("Common/MountBase") is { } t && t.TryGetRow(mountId, out var r) && r.TryGetProperty("ID_NpcBase", out var n) ? n.GetInt32() : 0;

    private static async Task OnMountAsync(Conn c, CM.MountRequest req)
    {
        var res = new SM.MountResponse { EntityId = Mir5World.EntityBits(c.PlayerUid), ErrorCode = ErrorCode.Success };
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        var mount = (await DsMountRepository.ListAsync(c.PlayerUid)).FirstOrDefault(m => m.MountUid == inven.SelectedUid);
        if (c.MountNpc != null) res.ErrorCode = ErrorCode.MountAlreadyMounted;
        else if (mount == null) res.ErrorCode = ErrorCode.MountNotEquipped;
        else
        {
            int npcBase = MountNpcOf(mount.MountId);
            double rad = c.Direction * Math.PI / 180.0;
            var npc = npcBase == 0 ? null : Mir5Spawns.SpawnDynamic(c.IslandId, npcBase, c.X + Math.Cos(rad) * 100, c.Y + Math.Sin(rad) * 100, c.Z, c.Direction);
            if (npc == null) res.ErrorCode = ErrorCode.MountSkillNotFound;
            else
            {
                c.MountNpc = npc;
                c.Visible[npc.S.Id] = npc;
                await c.Plain(Mir5Spawns.Build(npc, Mir5World.EntityBits(c.PlayerUid), req.SeatIndex));
                res.MountInfo = new SM.MountInfo { MountEntity = npc.EntityId, SeatIndex = req.SeatIndex };
                Logger.Info($"[Mir5Mount] {c.Nickname} mounts {mount.MountId} (npc {npcBase}, entity {npc.EntityId:X})");
            }
        }
        if (res.ErrorCode != ErrorCode.Success) Logger.Info($"[Mir5Mount] mount refused: {res.ErrorCode}");
        await c.Plain(new SM.ServerMessages { MountRes = res });
    }

    /// <summary>Removes the player's mount NPC (dismount, logout).</summary>
    private static async Task DespawnMountAsync(Conn c, bool notify)
    {
        var npc = c.MountNpc;
        if (npc == null) return;
        c.MountNpc = null;
        c.Visible.TryRemove(npc.S.Id, out _);
        Mir5Spawns.DropDynamic(npc);
        if (notify) await c.Plain(Mir5Spawns.Remove(new[] { npc.S.Id }));
    }

    private static async Task OnDisMountAsync(Conn c)
    {
        Logger.Info($"[Mir5Mount] {c.Nickname} dismounts (mount npc {(c.MountNpc == null ? "none" : c.MountNpc.EntityId.ToString("X"))})");
        await DespawnMountAsync(c, notify: true);
        await c.Plain(new SM.ServerMessages { DisMountRes = new SM.DisMountResponse { Entity = Mir5World.EntityBits(c.PlayerUid), IsDespawn = true } });
    }

    private static async Task OnMountChangeCompanionAsync(Conn c, int field, CMT.MountChangeCompanionRequest req)
    {
        var body = new SMT.MountChangeCompanionResponse { MountUid = req.MountUid };
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        if (req.MountUid != 0 && (await DsMountRepository.ListAsync(c.PlayerUid)).All(m => m.MountUid != req.MountUid)) { await c.Twoway(Failed(field, body, ErrorCode.MountDestroyed)); return; }
        await DsMountRepository.SelectAsync(c.PlayerUid, req.MountUid);
        await PushDbItemsAsync(c, new[] { MountInvenItem(c, inven.ExtendedSlots, req.MountUid) });
        await c.Twoway(Reply(field, body));
    }

    private static async Task OnMountDeleteAsync(Conn c, int field, CMT.MountDeleteRequest req)
    {
        var body = new SMT.MountDeleteResponse { MountUid = req.MountUid };
        var mount = (await DsMountRepository.ListAsync(c.PlayerUid)).FirstOrDefault(m => m.MountUid == req.MountUid);
        if (mount == null || !await DsMountRepository.DeleteAsync(c.PlayerUid, req.MountUid)) { await c.Twoway(Failed(field, body, ErrorCode.MountDestroyed)); return; }
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        await PushDbItemsAsync(c, new[] { MountItem(c, mount, delete: true), MountInvenItem(c, inven.ExtendedSlots, inven.SelectedUid) });
        await c.Twoway(Reply(field, body));
    }

    private static async Task OnMountRenameAsync(Conn c, int field, CMT.MountChangeNickNameRequest req)
    {
        var body = new SMT.MountChangeNickNameResponse { MountUid = req.MountUid };
        string name = (req.MountNickname ?? "").Trim();
        if (name.Length < 1 || name.Length > 12) { await c.Twoway(Failed(field, body, ErrorCode.MountWrongNameLength)); return; }
        if (!await DsMountRepository.RenameAsync(c.PlayerUid, req.MountUid, name)) { await c.Twoway(Failed(field, body, ErrorCode.MountDestroyed)); return; }
        var mount = (await DsMountRepository.ListAsync(c.PlayerUid)).First(m => m.MountUid == req.MountUid);
        await PushDbItemsAsync(c, new[] { MountItem(c, mount) });
        await c.Twoway(Reply(field, body));
    }

    private static async Task OnMountExtendAsync(Conn c, int field)
    {
        var body = new SMT.MountListSlotExtendResponse();
        int slots = await DsMountRepository.ExtendSlotsAsync(c.PlayerUid, 1);
        var inven = await DsMountRepository.GetInvenAsync(c.PlayerUid);
        await PushDbItemsAsync(c, new[] { MountInvenItem(c, slots, inven.SelectedUid) });
        await c.Twoway(Reply(field, body));
    }
}