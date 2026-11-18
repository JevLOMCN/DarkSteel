#pragma once

// =============================================================================
// DarkSteelStudio - GameDataEnums
//
// Human-readable meanings for well-known enum columns in the server Data
// tables (ITEM.Grade, ITEM.MainType/SubType, MONSTER.MonGrade, ClassId, ...).
// The mappings were lifted from the ReMir codex site (src/lib/gearSlots.ts,
// src/lib/mir4.ts, ItemPopup.tsx, MonsterBestiary.tsx) so the studio shows
// the same labels players see there. Used by the Game Data row-detail panel;
// Describe() returns nullptr when it has nothing to say about a column.
//
// Header-only managed static class. Extend the tables below as new enums are
// confirmed; keep unknown values unmapped rather than guessing.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Data;

    public ref class GameDataEnums abstract sealed {
    public:
        // Icon ids (ITEM.Icon, NPC.NpcPortrait, VEHICLE_RIDE.IconId, ...) are
        // served as PNGs from the team's CDN, same as the ReMir site.
        static String^ IconUrl(long long iconId)
        {
            return "https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%204/Images/items/" + iconId.ToString() + ".png";
        }

        // "Common Weapon", "Health Potions", ... (ReMir TYPE_NAMES); unmapped
        // combos read "Type <main>-<sub>".
        static String^ ItemTypeName(int mainType, int subType)
        {
            String^ label;
            if (s_itemSubType->TryGetValue(mainType.ToString() + "/" + subType.ToString(), label))
            {
                return label;
            }
            return "Type " + mainType.ToString() + "-" + subType.ToString();
        }

        // "Weapon", "Armour", ... (ReMir MAINTYPE_NAMES); unmapped reads "Type N".
        static String^ ItemMainTypeName(int mainType)
        {
            String^ label = Lookup(s_itemMainType, mainType);
            return (label != nullptr) ? label : ("Type " + mainType.ToString());
        }

        // Equip slot (ReMir SLOT_LABELS): exact sub-type slot, else the main
        // type's default slot, else "" for things that are not equipment.
        static String^ ItemSlotName(int mainType, int subType)
        {
            switch (mainType)
            {
            case 2:
            case 20:
                return "Weapon";
            case 26:
                return "Accessory";
            case 3:
                switch (subType)
                {
                case 1:  return "Helmet";
                case 2:  return "Armor";
                case 3:  return "Gloves";
                case 4:  return "Boots";
                default: return "Armor";
                }
            case 4:
                switch (subType)
                {
                case 1:  return "Necklace";
                case 2:  return "Bracelet";
                case 3:  return "Ring";
                case 4:  return "Earrings";
                case 5:  return "Medallion";
                case 6:  return "Charm";
                default: return "Accessory";
                }
            default:
                return String::Empty;
            }
        }

        // "Warrior".."Spirit Summoner"; unmapped reads "Class N".
        static String^ ClassName(int classId)
        {
            String^ label = Lookup(s_class, classId);
            return (label != nullptr) ? label : ("Class " + classId.ToString());
        }

        // Entity images (<id>.png) live in one CDN folder per kind:
        // "monsters" (MonsterId), "objects" (ObjectId). NPCs do not use this:
        // their art is items\<NpcPortrait>.png via IconUrl().
        // Coverage is partial; see IconCache::HasImage.
        static String^ ImageUrl(String^ folder, long long id)
        {
            return "https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%204/Images/" + folder + "/" + id.ToString() + ".png";
        }

        // Returns a short meaning for row[columnName], or nullptr if the column
        // is not a known enum (or the value is unmapped).
        static String^ Describe(String^ tableName, String^ columnName, DataRow^ row)
        {
            if (row == nullptr || String::IsNullOrEmpty(columnName))
            {
                return nullptr;
            }

            String^ table = (tableName == nullptr) ? String::Empty : tableName->ToUpperInvariant();

            if (Is(columnName, "SubType"))
            {
                long long mainType, subType;
                if (TryGetInt(row, "MainType", mainType) && TryGetInt(row, columnName, subType))
                {
                    String^ key = mainType.ToString() + "/" + subType.ToString();
                    String^ label;
                    if (s_itemSubType->TryGetValue(key, label))
                    {
                        return label;
                    }
                }
                return nullptr;
            }

            long long value;
            if (!TryGetInt(row, columnName, value))
            {
                return nullptr;
            }

            if (Is(columnName, "MainType"))
            {
                return Lookup(s_itemMainType, value);
            }
            if (Is(columnName, "Grade") && !table->StartsWith("MONSTER"))
            {
                return Lookup(s_itemGrade, value);
            }
            if (Is(columnName, "MonGrade"))
            {
                return Lookup(s_monsterGrade, value);
            }
            if (Is(columnName, "ClassId") || Is(columnName, "ClassID"))
            {
                if (value == 0)
                {
                    return "All classes";
                }
                return Lookup(s_class, value);
            }
            if (Is(columnName, "FactionType"))
            {
                if (value == 1) return "Friendly";
                if (value == 2) return "Hostile";
                return "Neutral";
            }
            if (Is(columnName, "DamageType") && table->StartsWith("SKILL"))
            {
                if (value == 1) return "Physical";
                if (value == 2) return "Magic";
                return nullptr;
            }
            if (Is(columnName, "Icon") || Is(columnName, "Icon_Big") || Is(columnName, "NpcPortrait") ||
                Is(columnName, "IconId") || Is(columnName, "BuildingIcon"))
            {
                return (value > 0) ? IconUrl(value) : nullptr;
            }

            return nullptr;
        }

    private:
        static Dictionary<long long, String^>^ s_itemGrade;
        static Dictionary<long long, String^>^ s_monsterGrade;
        static Dictionary<long long, String^>^ s_class;
        static Dictionary<long long, String^>^ s_itemMainType;
        static Dictionary<String^, String^>^   s_itemSubType;

        static GameDataEnums()
        {
            s_itemGrade = gcnew Dictionary<long long, String^>();
            s_itemGrade[1] = "Common";
            s_itemGrade[2] = "Uncommon";
            s_itemGrade[3] = "Rare";
            s_itemGrade[4] = "Epic";
            s_itemGrade[5] = "Legendary";
            s_itemGrade[6] = "Mystic";

            s_monsterGrade = gcnew Dictionary<long long, String^>();
            s_monsterGrade[0] = "Normal";
            s_monsterGrade[1] = "Normal";
            s_monsterGrade[2] = "Elite";
            s_monsterGrade[3] = "Named";
            s_monsterGrade[4] = "Boss";
            s_monsterGrade[5] = "Raid Boss";
            s_monsterGrade[6] = "World Boss";

            s_class = gcnew Dictionary<long long, String^>();
            s_class[1] = "Warrior";
            s_class[2] = "Sorcerer";
            s_class[3] = "Taoist";
            s_class[4] = "Arbalist";
            s_class[5] = "Lancer";
            s_class[6] = "Darkist";
            s_class[7] = "Lionheart";
            s_class[8] = "Spirit Summoner";

            s_itemMainType = gcnew Dictionary<long long, String^>();
            s_itemMainType[2]  = "Weapon";
            s_itemMainType[3]  = "Armour";
            s_itemMainType[4]  = "Jewelry";
            s_itemMainType[5]  = "Enhancement Materials";
            s_itemMainType[6]  = "Consumables";
            s_itemMainType[7]  = "Promotion Material";
            s_itemMainType[8]  = "Magic Stone";
            s_itemMainType[10] = "Mystery";
            s_itemMainType[12] = "Skill Tomes";
            s_itemMainType[22] = "Dragon Artifact";
            s_itemMainType[23] = "Soul Orb";
            s_itemMainType[24] = "Transference Equipment";
            s_itemMainType[26] = "Ancient Treasure";
            s_itemMainType[27] = "Conquest Treasure";
            s_itemMainType[28] = "Soul Orb";

            s_itemSubType = gcnew Dictionary<String^, String^>();
            // Weapons
            s_itemSubType["2/1"] = "Common Weapon";
            s_itemSubType["2/2"] = "Wizard Weapon";
            s_itemSubType["2/3"] = "Taoist Weapon";
            s_itemSubType["2/4"] = "Arbalist Weapon";
            s_itemSubType["2/5"] = "Lancer Weapon";
            s_itemSubType["2/6"] = "Darkist Weapon";
            s_itemSubType["2/7"] = "Lionheart Weapon";
            s_itemSubType["2/8"] = "Summoner Weapon";
            // Armour
            s_itemSubType["3/1"] = "Armour";
            s_itemSubType["3/2"] = "Bottoms";
            s_itemSubType["3/3"] = "Gloves";
            s_itemSubType["3/4"] = "Boots";
            s_itemSubType["3/5"] = "Belt";
            // Jewelry
            s_itemSubType["4/1"] = "Necklace";
            s_itemSubType["4/2"] = "Bracelet";
            s_itemSubType["4/3"] = "Ring";
            s_itemSubType["4/4"] = "Earrings";
            s_itemSubType["4/5"] = "Medallion";
            s_itemSubType["4/6"] = "Charm";
            s_itemSubType["4/7"] = "Seal";
            // Materials
            s_itemSubType["5/1"]  = "Training Material";
            s_itemSubType["5/8"]  = "Enhancement Material";
            s_itemSubType["5/12"] = "Codex";
            s_itemSubType["5/16"] = "Training Material Manuals";
            s_itemSubType["5/21"] = "Enchant Material";
            s_itemSubType["5/23"] = "Enhancement Material";
            s_itemSubType["5/24"] = "Enhancement Material";
            s_itemSubType["5/25"] = "Enhancement Material";
            s_itemSubType["5/26"] = "Mystique Material";
            s_itemSubType["5/27"] = "Special Enhancement Material";
            s_itemSubType["5/28"] = "Subsidiary Material";
            s_itemSubType["5/29"] = "Enhancement Material [Dragon Artifact]";
            s_itemSubType["5/30"] = "Subsidiary Enhancement Material [Dragon Artifact]";
            s_itemSubType["5/31"] = "Enhancement Material [Dragon Artifact]";
            s_itemSubType["5/32"] = "Dragon Forge Material";
            s_itemSubType["5/33"] = "Magical Soul Orb Enhancement";
            s_itemSubType["5/34"] = "Enhancement Material";
            s_itemSubType["5/35"] = "Full Renewal";
            s_itemSubType["5/36"] = "Common Ancient Tablet";
            s_itemSubType["5/37"] = "Special Ancient Tablet";
            s_itemSubType["5/38"] = "Divine Dragon Descent Yearning";
            s_itemSubType["5/39"] = "Unlocking Material [Divine Dragon Descent]";
            s_itemSubType["5/41"] = "Dragon Forge Material";
            s_itemSubType["5/42"] = "Dragon Artifact Benediction Upgrade Material";
            s_itemSubType["5/43"] = "Enhancement Material [Ancient Treasure]";
            s_itemSubType["5/44"] = "Enhancement Material [Ancient Treasure]";
            s_itemSubType["5/45"] = "Enhancement Material [Ancient Treasure]";
            s_itemSubType["5/46"] = "Enhancement Material [Ancient Treasure]";
            s_itemSubType["5/47"] = "Enhancement Material [Ancient Treasure]";
            s_itemSubType["5/48"] = "Disenchant Material";
            s_itemSubType["5/49"] = "Manifest Ability Material";
            s_itemSubType["5/50"] = "Infusion Material";
            s_itemSubType["5/51"] = "Spirit Slot Expansion Material";
            // Consumables
            s_itemSubType["6/3"]  = "Unseal Boxes";
            s_itemSubType["6/4"]  = "Health Potions";
            s_itemSubType["6/5"]  = "Mana Potions";
            s_itemSubType["6/6"]  = "Buff Potions";
            s_itemSubType["6/12"] = "ID Badge";
            s_itemSubType["6/20"] = "Tangled Inner Force Cure";
            s_itemSubType["6/21"] = "Fast Travel Scrolls";
            s_itemSubType["6/22"] = "Jump Scrolls";
            s_itemSubType["6/23"] = "Chests";
            s_itemSubType["6/24"] = "Chests";
            s_itemSubType["6/25"] = "Vigor";
            s_itemSubType["6/28"] = "Health Potions";
            s_itemSubType["6/29"] = "Buff Potions";
            s_itemSubType["6/30"] = "Buff Potions";
            s_itemSubType["6/31"] = "Incense Burner";
            s_itemSubType["6/32"] = "Bag Expansion Tickets";
            s_itemSubType["6/33"] = "Chests";
            s_itemSubType["6/34"] = "Buff Potions";
            s_itemSubType["6/35"] = "Unidentified Magic Stone";
            s_itemSubType["6/36"] = "Unidentified Spirit Treasure";
            s_itemSubType["6/37"] = "Unidentified Codex Gear";
            s_itemSubType["6/38"] = "Unidentified Mystical Piece";
            s_itemSubType["6/39"] = "Gold Box";
            s_itemSubType["6/40"] = "Chests";
            s_itemSubType["6/41"] = "Magical Soul Orb Coffer";
            s_itemSubType["6/45"] = "Private Warehouse";
            // Others
            s_itemSubType["7/1"]  = "Promotion Material";
            for (int sub = 1; sub <= 11; ++sub)
            {
                s_itemSubType["8/" + sub.ToString()] = "Magic Stone";
            }
            s_itemSubType["23/1"] = "Soul Orb";
            for (int sub = 1; sub <= 10; ++sub)
            {
                s_itemSubType["24/" + sub.ToString()] = "Transference Equipment";
            }
            s_itemSubType["26/1"] = "Ancient Treasure Ring";
            s_itemSubType["26/2"] = "Ancient Treasure Necklace";
            s_itemSubType["26/3"] = "Ancient Treasure Bracelet";
            s_itemSubType["26/4"] = "Ancient Treasure Earrings";
            s_itemSubType["27/1"] = "Conquest Treasure";
            for (int sub = 1; sub <= 4; ++sub)
            {
                s_itemSubType["28/" + sub.ToString()] = "Soul Orb";
            }
        }

        static bool Is(String^ column, String^ name)
        {
            return String::Equals(column, name, StringComparison::OrdinalIgnoreCase);
        }

        static String^ Lookup(Dictionary<long long, String^>^ map, long long key)
        {
            String^ label;
            return map->TryGetValue(key, label) ? label : nullptr;
        }

        // Reads row[column] as an integer; false when the column is absent,
        // DBNull, or not numeric.
        static bool TryGetInt(DataRow^ row, String^ column, long long% value)
        {
            value = 0;
            if (row->Table == nullptr || !row->Table->Columns->Contains(column))
            {
                return false;
            }
            Object^ raw = row[column];
            if (raw == nullptr || raw == DBNull::Value)
            {
                return false;
            }
            try
            {
                value = Convert::ToInt64(raw);
                return true;
            }
            catch (Exception^)
            {
                return false;
            }
        }
    };
}
