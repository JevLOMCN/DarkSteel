#pragma once

// =============================================================================
// DarkSteelStudio - CodexCatalog
//
// Builds the website-style codex records (CodexModels.h) from the native
// server tables and answers filtered, sorted, paged queries for the Game Data
// page. Mirrors the ReMir site's builders one for one:
//   items    = ITEM + ITEM_ATTRIBUTE (Attribute1..7Type/Value) -> STATUS.StatusID
//              -> STATUS.StringId for the stat name; NameSid/NoteSid resolved
//              in STRING_TEMPLATE (fallback STRING_MESSAGE). Only items with a
//              name are listed.
//   monsters = MONSTER grouped by resolved name (DEV_/TEST_/"Monster #"/Dummy
//              skipped); strongest row (level, grade, cp, hp) is the primary,
//              all rows are variants.
//   objects  = OBJECT (ObjectNameSid, ObjectGatherType "EObject_GatherType::X").
//   npcs     = NPC (NameSid, NameTitleSid, NpcPortrait, MerchantNpc,
//              FactionType, WaypointNPC, NpcDialogId[]).
//   maps     = STAGE (StageID, StageNameSID/QuestStageNameSID, StageType,
//              StageLevel, GraphicLevel -> minimap file). The interactive map
//              (BuildStageMap) joins MAPUI_MINI bounds with Data\MapMini\
//              MAP_MINI_<stage>.json (links, landmarks, NPCs) and Data\Gen\
//              GENDATA_<stage>.json (monster spawns), via the native StageMapData.
// All images come from the icon CDN (https://mirfiles.co.uk/.../Images/):
//   items    items/<Icon>.png            monsters  monsters/<MonsterId>.png
//   objects  objects/<ObjectId>.png      npcs      items/<NpcPortrait>.png
//   maps     maps/<GraphicLevel base name>.png (matched case-insensitively
//            against the folder's cached listing, IconCache::FindFileCI)
// The CDN only has images for part of the monster/object data, so those folders are
// checked against a cached directory-listing index (IconCache::HasImage) and
// cards without an image simply show none. IconCache keeps a disk copy.
//
// Lists are built once per category on first use and cached until
// Invalidate() (called when the data root changes or the user hits Reload).
// All methods throw InvalidOperationException with the native error text when
// a table fails to load; callers must catch and report.
// =============================================================================

#include "CodexModels.h"
#include "GameDataBridge.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;

    ref class ItemStringState;   // defined in CodexCatalog.cpp (holds native lookup tables)

    // Answer of MapSpawnJob.
    public ref class MapSpawnResult {
    public:
        property int Seq;
        property List<CodexMapSpawn^>^ Maps;
        property String^ Error;
    };

    public ref class CodexCatalog {
    public:
        // `bridge` supplies the native store.
        CodexCatalog(GameDataBridge^ bridge);

        property String^ Lang;           // STRING_TEMPLATE column used for names, default "ENG"

        // Drops every cached list (next query rebuilds). Waits for a running
        // build, so call it from the UI thread only when no build is in flight.
        void Invalidate();

        // Builds one category's list ("items" | "monsters" | "objects" | "npcs" | "maps")
        // without querying it. Safe on a worker thread: it only reads native
        // tables and creates managed lists and frozen brushes. A concurrent
        // query for the same category waits on the build lock instead of
        // building twice.
        void Prewarm(String^ mode);

        // True once that category's list exists (queries will not block on a build).
        bool IsBuilt(String^ mode);

        // Wall time of the most recent list build, for the status line.
        property double LastBuildMs;

        // Counts of the full (unfiltered) lists; 0 until that category is built.
        property int ItemCount;
        property int MonsterCount;
        property int ObjectCount;
        property int NpcCount;

        // ---- queries (page is 1-based; pageSize <= 0 means everything) ---------
        // search matches name (and id as text), case-insensitive substring.
        // mainType / grade / classId: 0 = any.  sort: "name" | "grade" | "tier" | "level".
        CodexPage^ QueryItems(String^ search, int mainType, int grade, int classId, String^ sort, int page, int pageSize);
        // grade: 0 = any (MonGrade 1-6).  sort: "level" | "cp" | "hp" | "exp" | "name".
        CodexPage^ QueryMonsters(String^ search, int grade, String^ sort, int page, int pageSize);
        CodexPage^ QueryObjects(String^ search, int page, int pageSize);
        // role: "" | "merchant" | "friendly" | "hostile" | "titled".
        CodexPage^ QueryNpcs(String^ search, String^ role, int page, int pageSize);

        // ---- Maps (mode "maps") ---------------------------------------------------
        // Stage cards from STAGE (name = StageNameSID, fallback QuestStageNameSID;
        // minimap = lower-cased last path segment of GraphicLevel + ".png" matched
        // case-insensitively against the CDN maps folder listing). Page entries are
        // StageEntry. `type` = StageEntry::StageType text or "" for any;
        // `mapFilter`: 0 any, 1 only stages with a minimap, 2 only without.
        // sort: "name" | "id" | "level".
        CodexPage^ QueryStages(String^ search, String^ type, int mapFilter, String^ sort, int page, int pageSize);
        // Distinct stage types present (first element is the "All types" choice with Value 0,
        // then one choice per type with Value = 1.. in alphabetical order; Label = type text).
        List<CodexChoice^>^ StageTypeChoices();
        property int StageCount;
        // One stage by id (null when unknown or the list is not built yet).
        StageEntry^ FindStage(long long stageId);
        // Minimap + markers for one stage: MapMini (links, landmarks, NPCs) and
        // Gen (monster spawns) converted to percentages with the MAPUI_MINI bounds.
        // Runs file IO + joins; call it from a worker thread or accept a short
        // UI pause. Never throws for missing stage data: returns an empty Pois list
        // with a Notice instead. Builds the stage, NPC and monster lists first
        // (they take the build lock themselves). `StageMapData` here is the
        // managed model in CodexModels.h; the native reader of the same name is
        // global (::StageMapData in StageMapData.h) and is only used in the .cpp.
        StageMapData^ BuildStageMap(long long stageId);
        // Full path of the stage's respawn file: <Data>\Gen\GENDATA_<stageId>.json
        // (the file may not exist; callers check File::Exists).
        String^ GenFilePath(long long stageId);
        // Every warp (WARP_LOCATION.json) whose arrival stage is `stageId`, ascending
        // WarpId, with where each one is reachable from (PORTAL rows and map-movement
        // markers). The first call builds the source index (scans MapMini + PORTAL), so
        // EnsureStages warms it on the worker thread; later calls are fast. Never throws:
        // returns an empty list when the data is missing.
        List<CodexWarp^>^ WarpsInto(long long stageId);

        // Filter choices actually present in the data (value 0 = "All ..." first).
        List<CodexChoice^>^ ItemMainTypeChoices();
        List<CodexChoice^>^ ItemGradeChoices();
        List<CodexChoice^>^ ItemClassChoices();
        List<CodexChoice^>^ MonsterGradeChoices();

        // ---- name lookups for the character window (thread-safe; first call builds the table) ----
        // One item (null when unknown). Builds the items list on first use.
        ItemEntry^ FindItem(long long itemId);
        // Display name for an id: kind = "skill" (SKILL.json), "pet" (PET.json: spirits) or "vehicle"
        // (VEHICLE.json: mounts). Empty string when unknown.
        String^ NameOf(String^ kind, long long id);
        // More kinds for NameOf: "quest" (QUEST_<n> tables listed in QUEST_LIST: QuestId/QuestTitleSID),
        // "dailyquest" (QUESTDAILY_HOMEWORK) and "relation" (QUEST_RELATION: RelationTitleSID), all
        // resolved through STRING_QUESTTEMPLATE.json. Achievements link by group + grade:
        String^ AchievementName(long long groupId, long long grade);   // ACHIEVEMENT.json AchievementName -> STRING_TEMPLATE

        // Every map the monster (all variants of its card) spawns in, busiest first. The first call builds
        // the spawn index from ~1,000 Gen files (seconds): use MapSpawnJob from the UI. Never throws.
        List<CodexMapSpawn^>^ MapsForMonster(MonsterEntry^ monster);

        // Detail panel content for any entry (ItemEntry, MonsterEntry, ...).
        CodexDetail^ BuildDetail(CodexEntry^ entry);

        // Grade colours as on the site: 1 #E6E3DC, 2 #63D471, 3 #5AA9FF,
        // 4 #C77DFF, 5 gold #D9B26A, 6 #F0857D; anything else = muted grey.
        static System::Windows::Media::Brush^ GradeBrush(int grade);
        static String^ ItemGradeLabel(int grade);     // "Common".."Mystic" or "Grade N"
        static String^ MonsterGradeLabel(int grade);  // "Normal".."World Boss" or "Grade N"

    private:
        GameDataBridge^       m_bridge;
        List<ItemEntry^>^     m_items;
        List<MonsterEntry^>^  m_monsters;
        List<ObjectEntry^>^   m_objects;
        List<NpcEntry^>^      m_npcs;
        List<StageEntry^>^    m_stages;
        Dictionary<long long, ItemEntry^>^                 m_itemById;      // FindItem
        Dictionary<long long, String^>^                    m_questStrings;  // STRING_QUESTTEMPLATE: StringId -> text
        Dictionary<long long, String^>^                    m_achievementNames; // group * 1000 + grade -> name
        String^ QuestString(long long stringId);
        Dictionary<String^, Dictionary<long long, String^>^>^ m_nameTables;  // NameOf: kind -> id -> name
        Dictionary<long long, StageEntry^>^ m_stageById;   // published before m_stages

        Object^              m_buildLock;
        ItemStringState^      m_itemStrings;        // lazy-description lookup (STRING_MESSAGE fallback), built with the item list

        void EnsureItems();
        void EnsureMonsters();
        void EnsureObjects();
        void EnsureNpcs();
        void EnsureStages();
    };

    // Runs MapsForMonster on a worker thread and posts the result to the dispatcher.
    public ref class MapSpawnJob {
    public:
        MapSpawnJob(CodexCatalog^ catalog, System::Windows::Threading::Dispatcher^ target, System::Action<MapSpawnResult^>^ done);
        property MonsterEntry^ Monster;
        property int Seq;
        void Start();

    private:
        CodexCatalog^ m_catalog;
        System::Windows::Threading::Dispatcher^ m_target;
        System::Action<MapSpawnResult^>^ m_done;
        void Run();
    };
}
