using System.Text.Json;
using Google.Protobuf;
using Google.Protobuf.WellKnownTypes;
using M5.Core.Tables;
using M5.Database.Mysql;
using MirProto;
using Ds = MirProto.DsGame;
using Msgs = MirProto.Messages;
using SM = MirProto.ServerMsg;
using CM = MirProto.ClientMsg;
using Comp = MirProto.Components;

namespace M5.Server.Network.Mir5;

/// <summary>
/// Builders for the messages that take a Mir 5 client from "joined" to "in the world": JoinMapResponse (entity + zone),
/// UpdateMyInfoResponse carrying DbWorkItems (the player's data sets), status lists and MyCharacterInfoResponseComplete.
/// All messages are the typed classes generated from Server/Protos/Global (project M5.Protocol).
/// </summary>
public static class Mir5World
{
    /// <summary>Entity id carried in PlayerEntity / MainCharacter (uint64 bits). Layout not yet confirmed; uses the player uid.</summary>
    public static ulong EntityBits(long playerUid) => (ulong)playerUid;

    // ---- game data lookups (Server/Bin/Data, FModel DataTable export) ----

    /// <summary>Starting location for a new character: CharacterCreate[charId].ID_InitWarpLocation -> WarpLocation.</summary>
    public static StartLocation GetStartLocation(int charId)
    {
        try
        {
            var create = DataTables.Find("Common/CharacterCreate");
            var warp = DataTables.Find("Common/WarpLocation");
            if (create != null && warp != null && create.TryGetRow(charId, out var cRow) &&
                cRow.TryGetProperty("ID_InitWarpLocation", out var wid) && warp.TryGetRow(wid.GetInt64(), out var w))
            {
                var c = w.GetProperty("WarpLocationCoordinate");
                return new StartLocation(w.GetProperty("ID_ZoneIsland").GetInt32(),
                    c.GetProperty("X").GetDouble(), c.GetProperty("Y").GetDouble(), c.GetProperty("Z").GetDouble(),
                    w.TryGetProperty("WarpDirection", out var d) ? (float)d.GetDouble() : 0f);
            }
        }
        catch (Exception ex) { M5.Core.Logger.Warning($"[Mir5World] start location lookup failed: {ex.Message}"); }
        return new StartLocation(1, -147667.25, -472621.16, 14155.861, 90f);
    }

    /// <summary>Starting items, equipment, quest, icon and halo points from Common/CharacterCreate[charId].</summary>
    public static StartKit GetStartKit(int charId)
    {
        var stack = new List<(int, int)>();
        var equip = new List<StartEquip>();
        int halo = 0, quest = 0, icon = 0, home = 0;
        try
        {
            var create = DataTables.Find("Common/CharacterCreate");
            if (create != null && create.TryGetRow(charId, out var row))
            {
                int Int(string n) => row.TryGetProperty(n, out var v) && v.ValueKind == JsonValueKind.Number ? v.GetInt32() : 0;
                halo = Int("InitHaloPoint"); quest = Int("ID_InitQuest"); icon = Int("ID_InItPlayerIcon"); home = Int("ID_InitReturnHome");

                if (row.TryGetProperty("ID_InitStackableItem", out var ids) && row.TryGetProperty("ID_InitStackableItemCnt", out var cnts))
                {
                    var idList = ids.EnumerateArray().Select(x => x.GetInt32()).ToList();
                    var cntList = cnts.EnumerateArray().Select(x => x.GetInt32()).ToList();
                    for (int i = 0; i < idList.Count && i < cntList.Count; i++)
                        if (idList[i] > 0 && cntList[i] > 0) stack.Add((idList[i], cntList[i]));
                }

                foreach (var key in new[] { "ID_InitWeapon", "ID_InitChest", "ID_InitPants", "ID_InitGloves", "ID_InitShoes", "ID_InitHelmet" })
                {
                    int itemId = Int(key);
                    if (itemId <= 0) continue;
                    var (slotType, slotIndex, durability) = DescribeEquipItem(itemId);
                    if (slotType > 0) equip.Add(new StartEquip(itemId, slotType, slotIndex, durability));
                }
            }
        }
        catch (Exception ex) { M5.Core.Logger.Warning($"[Mir5World] start kit lookup failed: {ex.Message}"); }
        return new StartKit(stack, halo, equip, quest, icon, home);
    }

    private static Dictionary<string, (int SlotType, int SlotIndex)>? _slotByItemType;

    /// <summary>
    /// Equipment slot of an item, from Common/SlotBase. Rows are keyed SlotType * 1000 + SlotNumber (Weapon = 11001, ArmorChest 11002,
    /// ArmorPants 11003, ArmorGloves 11004, ArmorShoes 11005, ArmorHelmet 11006, accessories 11007-11009, emblem 11010, tools 21xxx,
    /// mount gear 51xxx) and list the item types they accept. Equipment rows / EquipRequest carry (slot_type = key / 1000, slot_index = key % 1000).
    /// </summary>
    public static (int SlotType, int SlotIndex, int Durability) DescribeEquipItem(int itemId)
    {
        var items = DataTables.Find("Common/ItemBase");
        if (items == null || !items.TryGetRow(itemId, out var it)) return (0, 0, 0);
        string type = it.TryGetProperty("ItemType", out var t) ? t.GetString() ?? "" : "";
        int durability = it.TryGetProperty("Durability", out var d) && d.ValueKind == JsonValueKind.Number ? d.GetInt32() : 0;

        if (_slotByItemType == null)
        {
            var map = new Dictionary<string, (int, int)>();
            var slots = DataTables.Find("Common/SlotBase");
            if (slots != null)
                foreach (var kv in slots.Rows)
                    if (int.TryParse(kv.Key, out var key) && kv.Value.TryGetProperty("EquipItemType", out var types))
                        foreach (var ty in types.EnumerateArray())
                            map.TryAdd(ty.GetString() ?? "", (key / 1000, key % 1000));
            _slotByItemType = map;
        }
        return _slotByItemType.TryGetValue(type, out var slot) ? (slot.SlotType, slot.SlotIndex, durability) : (0, 0, durability);
    }
    /// <summary>The six base skills of a weapon type: Common/WeaponTypeBase[weapon].ID_BaseSkill01..06.</summary>
    public static List<int> GetBaseSkills(int weaponType)
    {
        var skills = new List<int>();
        try
        {
            var wt = DataTables.Find("Common/WeaponTypeBase");
            if (wt != null && wt.TryGetRow(weaponType, out var row))
                for (int i = 1; i <= 6; i++)
                    if (row.TryGetProperty($"ID_BaseSkill{i:00}", out var s) && s.GetInt32() > 0) skills.Add(s.GetInt32());
        }
        catch (Exception ex) { M5.Core.Logger.Warning($"[Mir5World] base skills lookup failed: {ex.Message}"); }
        return skills;
    }

    /// <summary>ZoneBase / ZoneDistrict ids that exist in the client's tables for an island (first zone listed, first district of it).</summary>
    public static (uint Zone, uint District) GetZone(int islandId)
    {
        try
        {
            var island = DataTables.Find("Common/ZoneIsland");
            var district = DataTables.Find("Common/ZoneDistrict");
            if (island != null && island.TryGetRow(islandId, out var row) && row.TryGetProperty("ID_Zone", out var zones))
            {
                foreach (var z in zones.EnumerateArray())
                {
                    uint zone = z.GetUInt32();
                    if (district == null) return (zone, 0);
                    foreach (var kv in district.Rows)
                        if (kv.Value.TryGetProperty("ID_Zone", out var dz) && dz.GetUInt32() == zone)
                            return (zone, uint.Parse(kv.Key));
                }
            }
        }
        catch (Exception ex) { M5.Core.Logger.Warning($"[Mir5World] zone lookup failed: {ex.Message}"); }
        return (1002, 1002001);
    }

    /// <summary>CharacterCustomInfo as the proto-JSON string the client keeps in GPlayer.custom_info (parsed by DS_JsonStringToProtoMessage).</summary>
    public static string BuildCustomJson(CharacterAppearance a)
    {
        var info = new CM.CharacterCustomInfo
        {
            Gender = a.Gender, VoiceType = a.VoiceType, SkinColor = a.SkinColor, Pitch = a.Pitch,
            HeadInfo = new CM.CharacterCustomHead { HeadType = a.HeadType, HeadColor = a.HeadColor, FaceType = a.FaceType, HairType = a.HairType },
            BodyInfo = new CM.CharacterCustomBody { BodyType = a.BodyType, BodySize = a.BodySize, BodyHeadSize = a.BodyHeadSize, BodyHandSize = a.BodyHandSize, BodyFootSize = a.BodyFootSize },
        };
        return JsonFormatter.Default.Format(info);
    }

    public static CharacterAppearance ToAppearance(int weapon, CM.CharacterCustomInfo c)
    {
        var h = c?.HeadInfo ?? new CM.CharacterCustomHead();
        var b = c?.BodyInfo ?? new CM.CharacterCustomBody();
        return new CharacterAppearance(weapon, c?.Gender ?? 0, c?.VoiceType ?? 0, c?.SkinColor ?? 0, c?.Pitch ?? 0f,
            h.HeadType, h.HeadColor, h.FaceType, h.HairType, b.BodyType, b.BodySize, b.BodyHeadSize, b.BodyHandSize, b.BodyFootSize);
    }

    // ---- message builders ----

    private static MirProto.Vector Vec(double x, double y, double z) => new() { X = x, Y = y, Z = z };

    /// <summary>JoinMapResponse (ServerMessages 3) with one MainCharacter entity pair.</summary>
    public static SM.ServerMessages JoinMap(DsPlayerRepository.CharacterState c, int charId)
    {
        var (zone, district) = GetZone(c.IslandId);
        var res = new SM.JoinMapResponse
        {
            ErrorCode = ErrorCode.Success,
            WorldTicks = 0,
            ServerTime = Timestamp.FromDateTime(DateTime.UtcNow),
            ZoneId = zone,
            PlayerEntityId = EntityBits(c.PlayerUid),
            DistrictId = district,
            IslandId = (uint)c.IslandId,
            Nickname = c.Nickname,
        };
        res.EntityPair.Add(new SM.CharacterEntityPair
        {
            EntityType = new Msgs.CharacterEntityType { Main = new Msgs.MainCharacter { Bits = EntityBits(c.PlayerUid) } },
            CharId = charId,
        });
        return new SM.ServerMessages { JoinMapRes = res };
    }

    /// <summary>UpdateMyInfoResponse (34): the player's data sets as DbWorkItems.</summary>
    public static SM.ServerMessages MyInfo(DsPlayerRepository.CharacterState c)
    {
        long uid = c.PlayerUid;
        var pos = ParsePosition(c.PositionJson);
        var res = new SM.UpdateMyInfoResponse { ErrorCode = ErrorCode.Success };
        void Add(Ds.DbWorkItem item) => res.DbWorkItems.Add(item);

        // Level first: it creates the main character data the other sets attach to.
        Add(new() { CharacterLevel = new() { PlayerUid = uid, CharLevel = c.Level, Exp = c.Exp, Ascend = c.Ascend, Evolve = c.Evolve } });
        Add(new() { Position = new() { PlayerUid = uid, IslandId = c.IslandId, Position = Vec(pos.X, pos.Y, pos.Z), Direction = c.Direction } });
        Add(new() { GPlayer = new() { PlayerUid = uid, CustomInfo = c.CustomInfo } });
        Add(new() { PlayerGrade = new() { PlayerUid = uid, PlayerGrade = c.PlayerGrade, PlayerGradeCap = c.PlayerGradeCap, Exp = c.PlayerGradeExp } });
        Add(new() { Money = new() { PlayerUid = uid, MoneyId = MoneyType.Gold, Quantity = c.Gold } });
        var lv = Mir5Stats.Character(c.Level);
        Add(new() { Status = new() { PlayerUid = uid, Hp = (int)Mir5Stats.Get(lv?.Stats, "Hp", c.Hp), Mp = (int)Mir5Stats.Get(lv?.Stats, "Mp", c.Mp),
            Stamina = (int)Mir5Stats.Get(Mir5Stats.PlayerGrade(Math.Max(1, c.PlayerGrade)), "Stamina", Math.Max(100, c.Stamina)),
            Hunger = (int)Mir5Stats.Get(Mir5Stats.PlayerGrade(Math.Max(1, c.PlayerGrade)), "Hunger", c.Hunger), Fatigue = c.Fatigue } });
        Add(new() { Skin = new() { PlayerUid = uid, SkinId = 0 } });
        Add(new() { CombatPower = new() { PlayerUid = uid, CombatPower = c.CombatPower } });
        Add(new() { Pvp = new() { PlayerUid = uid, PkMode = 1, CriminalPoint = 0 } });

        // Stackable items (potions...) and halo points
        foreach (var (itemId, qty) in c.Stackables)
            Add(new() { ItemStackable = new() { PlayerUid = uid, ItemId = itemId, Quantity = qty } });
        Add(new() { HaloPoint = new() { PlayerUid = uid, HaloPoint = c.HaloPoint } });

        // Equipment: the item, then the slot that holds it
        foreach (var e in c.Equipment)
        {
            Add(new() { ItemEquipment = new() { PlayerUid = uid, ItemUid = e.ItemUid, ItemId = e.ItemId, InventoryType = InventoryType.PlayerNormal, Level = e.Level, Durability = e.Durability } });
            Add(new() { Equipment = new() { PlayerUid = uid, CharId = c.Appearance.Weapon, SlotType = e.SlotType, SlotIndex = e.SlotIndex, ItemUid = e.ItemUid } });
        }

        // Skills: a WeaponSkillSlot row makes the client init all skill data for that weapon type
        // (UDS_SkillDataSet::InitSkillDataByWeaponType) and put the skill into deck slot (slot_index + 1).
        int weapon = c.Appearance.Weapon;
        var baseSkills = GetBaseSkills(weapon);
        for (int i = 0; i < baseSkills.Count; i++)
        {
            Add(new() { WeaponSkillSlot = new() { PlayerUid = uid, WeaponBaseId = weapon, SlotIndex = i, SelectedSkillId = baseSkills[i], SkillLevel = 1 } });
            Add(new() { LearnedSkill = new() { PlayerUid = uid, SkillId = baseSkills[i] } });
        }

        // Quests, player icon, return home
        foreach (var q in c.MainQuests)
        {
            var quest = new Ds.SqlMainQuestTable { PlayerUid = uid, QuestId = q.QuestId, QuestState = (QuestStateType)q.State, CreateDt = Timestamp.FromDateTime(DateTime.UtcNow) };
            quest.ObjectiveCount.AddRange(new[] { q.Count1, q.Count2, q.Count3 });
            Add(new() { MainQuest = quest });
        }
        if (c.PlayerIconId > 0)
        {
            Add(new() { PlayerIcon = new() { PlayerUid = uid, PlayerIconId = c.PlayerIconId } });
            Add(new() { PlayerIconEquip = new() { PlayerUid = uid, PlayerIconId = c.PlayerIconId } });
        }
        if (c.ReturnHomeId > 0)
            Add(new() { ReturnHome = new() { PlayerUid = uid, ReturnHomeId = c.ReturnHomeId } });

        return new SM.ServerMessages { UpdateMyInfoRes = res };
    }

    /// <summary>
    /// MyStatusResponse (37) + MyCurrentStatusResponse (38). Max values are every stat of the character's row in Common/CharacterLevel
    /// (Hp, Mp, PhysicalAttack, PhysicalDefense, ...) plus the player-grade stats from Common/PlayerGrade (crafting queue size...);
    /// current Hp/Mp start full.
    /// </summary>
    public static IEnumerable<SM.ServerMessages> Status(DsPlayerRepository.CharacterState c, int charId)
    {
        var row = Mir5Stats.Character(c.Level);
        var max = new SM.MyStatusResponse { CharId = charId };
        var cur = new SM.MyCurrentStatusResponse { CharId = charId };
        var seen = new HashSet<StatusType>();
        if (row != null)
            foreach (var kv in row.Stats)
                if (System.Enum.TryParse<StatusType>(kv.Key, out var t) && seen.Add(t))
                    max.StatusList.Add(new SM.StatusInteger { StatusType = t, StatusValue = (int)kv.Value });
        // grade stats (crafting queue size, fusion queue size, load capacity, stamina, vigor, ...)
        foreach (var kv in Mir5Stats.PlayerGrade(Math.Max(1, c.PlayerGrade)))
            if (System.Enum.TryParse<StatusType>(kv.Key, out var gt) && seen.Add(gt))
                max.StatusList.Add(new SM.StatusInteger { StatusType = gt, StatusValue = (int)kv.Value });
        if (seen.Add(StatusType.Stamina)) max.StatusList.Add(new SM.StatusInteger { StatusType = StatusType.Stamina, StatusValue = Math.Max(100, c.Stamina) });

        cur.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Hp, StatusValue = (float)Mir5Stats.Get(row?.Stats, "Hp", c.Hp) });
        cur.StatusList.Add(new SM.StatusFloat { StatusType = StatusType.Mp, StatusValue = (float)Mir5Stats.Get(row?.Stats, "Mp", c.Mp) });
        // Vigor: the level row has a small Vigor (100), the player grade the real gauge size (100000) that the vigor gains and costs are scaled to
        double gradeVigor = Mir5Stats.Get(Mir5Stats.PlayerGrade(Math.Max(1, c.PlayerGrade)), "Vigor", 0);
        if (gradeVigor > 0 && max.StatusList.FirstOrDefault(x => x.StatusType == StatusType.Vigor) is { } vigorRow) vigorRow.StatusValue = (int)gradeVigor;
        // Stamina / Vigor / Hunger are gauges too: start them full (the stored 100 against a 100000 maximum showed as an empty bar).
        foreach (var gauge in new[] { StatusType.Stamina, StatusType.Vigor, StatusType.Hunger })
            if (max.StatusList.FirstOrDefault(x => x.StatusType == gauge) is { } m)
                cur.StatusList.Add(new SM.StatusFloat { StatusType = gauge, StatusValue = m.StatusValue });
        yield return new SM.ServerMessages { MyStatusRes = max };
        yield return new SM.ServerMessages { MyCurrentStatusRes = cur };
    }
    /// <summary>MyCharacterInfoResponseComplete (35): tells the client its data is complete so it may load the level.</summary>
    public static SM.ServerMessages InfoComplete(DsPlayerRepository.CharacterState c)
    {
        var pos = ParsePosition(c.PositionJson);
        return new SM.ServerMessages
        {
            MyCharacterInfoResComplete = new SM.MyCharacterInfoResponseComplete
            {
                Direction = c.Direction,
                Destination = Vec(pos.X, pos.Y, pos.Z),
                MoveMode = Comp.MoveMode.Idle,
            },
        };
    }

    private static (double X, double Y, double Z) ParsePosition(string json)
    {
        try
        {
            using var d = JsonDocument.Parse(json);
            double Get(string n) => d.RootElement.TryGetProperty(n, out var v) ? v.GetDouble()
                : d.RootElement.TryGetProperty(n.ToLowerInvariant(), out var v2) ? v2.GetDouble() : 0;
            return (Get("X"), Get("Y"), Get("Z"));
        }
        catch { return (0, 0, 0); }
    }
}
