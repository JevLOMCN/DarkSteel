#pragma once

// =============================================================================
// DarkSteelStudio - StageMapData  (native, plain ISO C++17 + rapidjson)
//
// Reads the raw map files for one stage straight from the server Data folder
// and returns plain structs; CodexCatalog (managed) joins them with names,
// monsters and NPCs. No managed types, no <Windows.h>.
//
//   <Data>\MAPUI_MINI.json                  flat array; per stage: MiniStageId,
//                                           MiniMapCoordinateLT/RB {X,Y,Z}
//   <Data>\MapMini\MAP_MINI_<stage>.json    UE DataTable export:
//                                           [ { "Rows": { "1": { InfoMainType,
//                                           InfoSubType, InfoStringId,
//                                           InfoCoordinate{X,Y,Z} }, ... } } ]
//                                           (a flat array of the same row objects
//                                           is accepted too)
//   <Data>\Gen\GENDATA_<stage>.json         flat array; GenObjectID, GenObjectType,
//                                           SpawnCount, LocationX, LocationY
// =============================================================================

#include <cstdint>
#include <string>
#include <vector>

struct StageBounds
{
    bool   valid = false;
    double ltX = 0.0, ltY = 0.0;   // MiniMapCoordinateLT
    double rbX = 0.0, rbY = 0.0;   // MiniMapCoordinateRB
};

struct MapMiniRow
{
    std::string mainType;          // e.g. "EMapMiniInfoMainType::Waypoint" / "...::Default"
    int         subType = 0;
    int64_t     stringId = 0;      // InfoStringId
    int64_t     infoValue = 0;     // InfoValue (for Default/2 map-movement rows this is the WarpId)
    double      x = 0.0, y = 0.0;  // InfoCoordinate X/Y (world units)
    double      z = 0.0;           // InfoCoordinate Z
    bool        hasZ = false;
};

// One row of WARP_LOCATION.json.
struct WarpInfo
{
    bool    valid = false;
    int64_t warpId = 0;            // WarpId
    int64_t arrivalStageId = 0;    // Arrival_StageId
    double  x = 0.0, y = 0.0, z = 0.0;   // Coordinate
};

struct GenSpawnRow
{
    int64_t posId = 0;             // PosID (the row's id inside the stage's GENDATA file)
    int64_t objectId = 0;          // GenObjectID
    int     objectType = 0;        // GenObjectType (2 monster in the sample data, 3 other)
    int     spawnCount = 1;        // SpawnCount (>= 1)
    int     regMinTime = 0;        // RegMinTime (seconds)
    int     regMaxTime = 0;        // RegMaxTime (seconds)
    double  spawnRange = 0.0;      // SpawnRange (world units; 0 = fixed point)
    double  x = 0.0, y = 0.0;      // LocationX / LocationY
    double  z = 0.0;               // LocationZ
    bool    hasZ = false;
};

// Where a warp is reachable from: a PORTAL.json row (CurrentStageId + PortalTriggerId)
// or a map-movement marker (MapMini Default/2 row whose InfoValue is the WarpId).
struct WarpSource
{
    bool    isPortal = false;      // true = PORTAL.json row, false = MapMini marker
    int64_t fromStageId = 0;       // portal: CurrentStageId; marker: the stage whose MAP_MINI file holds it
    int64_t portalId = 0;          // portal: PortalTriggerId
    int64_t stringId = 0;          // marker: InfoStringId (the marker's name)
    double  x = 0.0, y = 0.0;      // marker: InfoCoordinate X/Y (portals have none: 0)
};

// A stage a monster spawns in (from Gen\GENDATA_<stage>.json, GenObjectType 2).
struct SpawnStage
{
    int64_t stageId = 0;
    int     count = 0;         // sum of SpawnCount over that stage's Gen rows for the monster
};

class StageMapData
{
public:
    // Every stage that spawns monsterId, with its spawn count. The index scans ALL Gen files
    // (~1,000 files, a few seconds) once per data root and is cached: call the first time off
    // the UI thread. Unknown monster => true + empty. false only when no Gen file could be read.
    static bool GetMonsterSpawns(const std::wstring& dataRoot, int64_t monsterId, std::vector<SpawnStage>& out, std::string& error);
    // All WARP_LOCATION rows whose Arrival_StageId == stageId, ascending WarpId.
    // Same return convention as GetWarp (false only when the file is missing/bad).
    static bool GetWarpsInto(const std::wstring& dataRoot, int64_t stageId, std::vector<WarpInfo>& out, std::string& error);

    // Everything that leads to `warpId`: PORTAL.json rows with that WarpId plus every
    // MapMini Default/2 marker whose InfoValue == warpId. The index is built once per
    // dataRoot (parses PORTAL.json and scans MapMini\MAP_MINI_*.json, ~550 small
    // files; do the first call off the UI thread) and cached. Thread-safe. Results are
    // ordered portals first, then markers by stage id. Unknown warp => true + empty.
    static bool GetWarpSources(const std::wstring& dataRoot, int64_t warpId, std::vector<WarpSource>& out, std::string& error);

    // Builds the warp-source index now if it is not built yet (same cost as the first
    // GetWarpSources call). Never throws.
    static void WarmWarpSources(const std::wstring& dataRoot);

    // Parses MAPUI_MINI.json once per (dataRoot) and caches it; the first row per
    // MiniStageId wins. Returns false (and fills error) when the file is missing
    // or malformed. Thread-safe.
    static bool GetBounds(const std::wstring& dataRoot, int64_t stageId, StageBounds& out, std::string& error);

    // Rows of MapMini\MAP_MINI_<stageId>.json. Returns false with an error such as
    // "file not found" when absent (callers show a notice); an existing file with
    // zero rows returns true and an empty vector.
    static bool LoadMapMini(const std::wstring& dataRoot, int64_t stageId, std::vector<MapMiniRow>& rows, std::string& error);

    // Rows of Gen\GENDATA_<stageId>.json. Same return convention.
    static bool LoadGen(const std::wstring& dataRoot, int64_t stageId, std::vector<GenSpawnRow>& rows, std::string& error);

    // One WARP_LOCATION.json row by WarpId (file parsed once per dataRoot and cached,
    // thread-safe). Returns false + error only when the file is missing/unparseable;
    // an unknown WarpId returns true with out.valid == false.
    static bool GetWarp(const std::wstring& dataRoot, int64_t warpId, WarpInfo& out, std::string& error);

    // Drops the cached MAPUI_MINI bounds and WARP_LOCATION rows (call when the data
    // root changes or on Reload).
    static void ClearCache();
};
