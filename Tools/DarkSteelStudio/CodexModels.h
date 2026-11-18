#pragma once

// =============================================================================
// DarkSteelStudio - CodexModels
//
// Managed view models for the Game Data "codex" (the same records the ReMir
// website renders: items, monsters, objects, NPCs). Every member is a
// property, not a field, because WPF data binding ({Binding Name} in the
// card DataTemplates) only sees properties. Built by CodexCatalog from the
// native tables; the XAML binds to them directly.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Media;

    // One "label: value" line (base stats, attributes, monster stats, ...).
    public ref class CodexStat {
    public:
        CodexStat(String^ name, String^ value) { Name = name; Value = value; }
        property String^ Name;
        property String^ Value;
    };

    // Base card shown in the grids. Kind is "item" / "monster" / "object" / "npc".
    public ref class CodexEntry {
    public:
        property String^   Kind;
        property long long Id;
        property String^   Name;
        property String^   Subtitle;     // short line under the name on list cards (e.g. "Lv 45 - Elite")
        property String^   IconUrl;      // what the card binds to: local cached file, CDN url, local art path, or empty
        property String^   SourceIconUrl; // original CDN url set at build time (empty when the CDN has no image); IconUrl is re-derived from it per page (IconCache)
        property String^   Badge;        // small corner text (e.g. "x3" variants, "Merchant"); empty = hidden
        property int       Grade;        // 1..6 items, MonGrade for monsters, 0 when not applicable
        property Brush^    GradeBrush;   // border/name colour for the grade (see CodexCatalog::GradeBrush)
    };

    public ref class ItemEntry : CodexEntry {
    public:
        property String^ Description;    // resolved lazily in BuildDetail from NoteSid (empty in the list)
        property long long NoteSid;      // STRING id of the description
        property int     Tier;
        property int     Trade;          // 1 = tradeable
        property int     MainType;
        property int     SubType;
        property int     Level;
        property int     ClassId;
        property int     ReqLevel;
        property long long SellPrice;
        property int     Stackable;
        property int     MaxEnhance;
        property int     Durability;
        property bool    Repairable;
        property bool    HasOptions;
        property bool    GrantsBuff;
        property int     CooldownSec;
        property int     JewelSlots;
        property String^ TypeName;       // "Common Weapon", "Health Potions", ... (GameDataEnums sub-type label)
        property String^ Slot;           // "Weapon", "Helmet", ... or empty
        property String^ TierIconUrl;    // CDN overlay for Tier 1-5 (ids 821-825) or empty
        property String^ TradeIconUrl;   // CDN overlay 100057 when Trade == 1, else empty
        property List<CodexStat^>^ Stats; // base stats from ITEM_ATTRIBUTE joined to STATUS names
    };

    public ref class MonsterEntry : CodexEntry {
    public:
        property int       ResourceId;
        property int       Level;
        property long long Hp;
        property long long PAtk;
        property long long MAtk;
        property long long PDef;
        property long long MDef;
        property long long Accuracy;
        property long long Dodge;
        property long long Critical;
        property long long AvoidCritical;
        property int       RunSpeed;
        property int       Race;
        property long long Cp;
        property long long Exp;
        property int       VariantCount;
        property List<MonsterEntry^>^ Variants;  // every same-named row, strongest first (primary is Variants[0]); empty on variants themselves
    };

    public ref class ObjectEntry : CodexEntry {
    public:
        property String^ Gather;         // "Ore", "Plants", ... or empty
    };

    public ref class NpcEntry : CodexEntry {
    public:
        property String^ Title;
        property long long Portrait;     // NPC.NpcPortrait (icon id in the CDN items folder), 0 = none
        property bool    Merchant;
        property String^ Faction;        // "Friendly" / "Hostile" / "Neutral"
        property bool    Roaming;
        property bool    HasDialogue;
    };

    // Everything the detail panel needs, laid out like the website popups:
    // header (icon, name, subtitle), description, a stats box, effect chips,
    // and a two-column attribute list.
    public ref class CodexDetail {
    public:
        property String^ Name;
        property Brush^  NameBrush;
        property String^ Subtitle;        // e.g. "Epic - Tier 3 - Lionheart Weapon"
        property String^ IconUrl;
        property String^ TierIconUrl;
        property String^ TradeIconUrl;
        property String^ Description;     // empty hides the block
        property String^ StatsTitle;      // "Base Stats" / "Stats"; empty hides the box
        property List<CodexStat^>^ Stats;
        property List<String^>^    Effects;    // chips; empty hides the row
        property List<CodexStat^>^ Attributes; // two-column key/value grid
        property String^ Footer;          // small print; empty hides it
        property List<MonsterEntry^>^ Variants; // monster variant picker; null/empty hides it
    };

    // One page of a query.
    public ref class CodexPage {
    public:
        property List<CodexEntry^>^ Entries;
        property int Page;        // 1-based
        property int Pages;
        property int Total;       // entries matching the filter (all pages)
    };

    // ---- Maps (stages) -----------------------------------------------------------
    // Kind is "map". Id = STAGE.StageID. IconUrl/SourceIconUrl = the minimap png
    // on the CDN (.../Images/maps/<file>.png) or empty when the stage has none.
    public ref class StageEntry : CodexEntry {
    public:
        property String^ StageType;      // "Field", "Bido", "EliteDungeon", ... (EStageType:: prefix stripped)
        property int     StageLevel;
        property bool    HasMap;
        property String^ MapFile;        // actual CDN file name incl. extension (case as on the CDN), or empty
        property String^ MapUrl;         // full CDN url of the minimap, or empty
    };

    // One warp (WARP_LOCATION row) that arrives in a stage, for the map detail panel's
    // "Warps into this map" list. Bound by the XAML DataTemplate, so properties only.
    public ref class CodexWarp {
    public:
        property long long WarpId;
        property String^   Title;        // "Warp 1076"
        property String^   FromText;     // "From: Bicheon Town (portal 101)\nFrom: Map link 'Bicheon' in Mountain Pass" ... or "Not linked from a portal or map marker"
        property String^   ArrivalText;  // "Arrives at X, Y, Z"
        property String^   Command;      // "@cheatmsg warp 1076"
    };

    // One marker on a stage map. X/Y are percentages (0-100) of the minimap image.
    // Type is one of: "maplink" | "gate" | "npc" | "npc-special" | "event" | "poi" | "monster".
    public ref class StagePoi {
    public:
        property String^   Type;           // also "object" (Gen rows of GenObjectType 1/3 whose id is an OBJECT id)
        property String^   Name;
        property double    X;
        property double    Y;
        // World (game) coordinates of the marker: MapMini InfoCoordinate for
        // links/landmarks/NPCs, Gen LocationX/Y/Z for monster and object spawns.
        property double    WorldX;
        property double    WorldY;
        property double    WorldZ;
        property bool      HasWorldZ;      // false when only X/Y are known (Z shown as unknown)
        // Entity id behind the marker: MonsterId (monster), ObjectId (object),
        // NpcId (npc types, matched by name; 0 when no NPC matched).
        property long long EntityId;
        // maplink: MapMini InfoValue = WarpId (row of WARP_LOCATION.json). 0 = none.
        property long long WarpId;
        // maplink: where that warp lands (WARP_LOCATION Arrival_StageId + Coordinate).
        property long long ArrivalStageId;
        property double    ArrivalX;
        property double    ArrivalY;
        property double    ArrivalZ;
        property bool      HasArrival;
        property long long TargetStageId;  // maplink: ArrivalStageId when known, else stage matched by name (0 = none)
        // maplink: the warps that take you FROM the destination map BACK INTO this map (WARP_LOCATION arrivals
        // here whose source is a portal / map link in the destination). Never null for maplinks; may be empty.
        property List<CodexWarp^>^ ReturnWarps;
        property String^   TargetStageName;
        property int       Level;          // monster
        property int       Grade;          // monster (MonGrade)
        property int       Count;          // monster spawn count at this point
        // Monster: total spawns of this same MonsterId in this stage = the sum of
        // SpawnCount over ALL its Gen rows (not just the markers drawn/within bounds). 0 = n/a.
        property int       TotalInMap;
        // Monster/object: PosID of the spawn row in the stage's Gen\GENDATA_<stage>.json (0 = n/a).
        property long long PosId;
        // Monster/object respawn, in SECONDS (server: random between min and max, x1000 ms).
        property int       RespawnMinSec;
        property int       RespawnMaxSec;
        // Gen SpawnRange in WORLD units (same units as WorldX/WorldY). 0 = spawns at the
        // fixed point (about 99% of monsters); the data also has 4000 and 5000.
        property double    SpawnRange;
        property long long MonsterId;      // monster
        property String^   IconUrl;        // npc portrait or monster image (CDN url, may be empty)
        property String^   Title;          // npc title
    };

    // Everything the map window needs for one stage.
    public ref class StageMapData {
    public:
        property long long StageId;
        property String^   Name;
        property String^   StageType;
        property int       StageLevel;
        property String^   MapUrl;         // minimap image (CDN), empty when none
        // World-unit size of the minimap (MAPUI_MINI RB - LT). The map window converts a
        // radius in world units to image pixels as radius / SpanX * imageWidth (and
        // radius / SpanY * imageHeight). 0 when the bounds are unknown.
        property double    SpanX;
        property double    SpanY;
        property List<StagePoi^>^ Pois;    // never null
        property String^   Notice;         // non-fatal message for the UI (e.g. "No MapMini data for this stage"), empty when fine
    };

    // One map a monster spawns in (monster detail panel, "Found in maps"). Properties only (data-bound).
    public ref class CodexMapSpawn {
    public:
        property long long StageId;
        property String^   MapName;
        property int       Count;         // spawn count in that map
        property long long MonsterId;     // which monster row spawns there (variants differ per map)
        property String^   Title;          // "Bicheon Town"
        property String^   Detail;         // "12 spawns  -  Lv 45  -  stage #100002010"
    };

    // Combo-box choice for a filter (e.g. item main type 2 = "Weapon").
    public ref class CodexChoice {
    public:
        CodexChoice(int value, String^ label) { Value = value; Label = label; }
        property int     Value;
        property String^ Label;
        virtual String^ ToString() override { return Label; }
    };
}
