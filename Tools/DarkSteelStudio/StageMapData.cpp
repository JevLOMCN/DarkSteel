#include "StageMapData.h"

#include <algorithm>
#include <cstdint>
#include <fstream>
#include <mutex>
#include <sstream>
#include <unordered_map>
#include <utility>

#include <rapidjson/document.h>
#include <rapidjson/error/en.h>

// Plain ISO C++17 (no Windows.h, no managed types) even though this is compiled
// inside the /clr project. See StageMapData.h for the file layouts.

// Hand-declared directory enumeration for the MapMini scan, same approach as
// GameDataStore.cpp. The find-data parameter is void* on purpose: a parameter type
// from an anonymous namespace has internal linkage, which makes MSVC drop the
// extern "C" and emit an unresolvable C++-mangled import (LNK2019).
namespace
{
    struct SmdFileTime
    {
        unsigned long dwLowDateTime;
        unsigned long dwHighDateTime;
    };

    struct SmdFindDataW
    {
        unsigned long dwFileAttributes;
        SmdFileTime ftCreationTime;
        SmdFileTime ftLastAccessTime;
        SmdFileTime ftLastWriteTime;
        unsigned long nFileSizeHigh;
        unsigned long nFileSizeLow;
        unsigned long dwReserved0;
        unsigned long dwReserved1;
        wchar_t cFileName[260];
        wchar_t cAlternateFileName[14];
    };

    const unsigned long kSmdAttributeDirectory = 0x10;   // FILE_ATTRIBUTE_DIRECTORY
    void* const kSmdInvalidHandle = reinterpret_cast<void*>(static_cast<intptr_t>(-1));
}

extern "C" __declspec(dllimport) void* __stdcall FindFirstFileW(const wchar_t* lpFileName, void* lpFindFileData);
extern "C" __declspec(dllimport) int __stdcall FindNextFileW(void* hFindFile, void* lpFindFileData);
extern "C" __declspec(dllimport) int __stdcall FindClose(void* hFindFile);

#pragma comment(lib, "kernel32.lib")

namespace
{
    // ---- paths / IO --------------------------------------------------------

    std::wstring TrimRoot(const std::wstring& root)
    {
        std::wstring out(root);
        if (!out.empty() && (out.back() == L'\\' || out.back() == L'/'))
        {
            out.pop_back();
        }
        return out;
    }

    // Narrow-ish description of a wide path for error text (non-ASCII becomes '?').
    std::string PathForError(const std::wstring& path)
    {
        std::string text;
        text.reserve(path.size());
        for (wchar_t c : path)
        {
            text.push_back(c < 0x80 ? static_cast<char>(c) : '?');
        }
        return text;
    }

    // 1 = read, 0 = missing/unreadable.
    bool ReadFile(const std::wstring& path, std::string& contents)
    {
        std::ifstream in(path, std::ios::binary);
        if (!in.is_open())
        {
            return false;
        }
        std::ostringstream ss;
        ss << in.rdbuf();
        contents = ss.str();
        return true;
    }

    // Reads + parses a JSON file. false => error filled ("file not found: ..." or a parse message).
    bool ParseFile(const std::wstring& path, rapidjson::Document& doc, std::string& error)
    {
        std::string contents;
        if (!ReadFile(path, contents))
        {
            error = "file not found: " + PathForError(path);
            return false;
        }
        doc.Parse(contents.c_str(), contents.size());
        if (doc.HasParseError())
        {
            error = std::string("JSON parse error in ") + PathForError(path) + ": " +
                    rapidjson::GetParseError_En(doc.GetParseError()) +
                    " at offset " + std::to_string(doc.GetErrorOffset());
            return false;
        }
        return true;
    }

    // ---- row extraction ----------------------------------------------------

    // Calls fn(rowObject) for every row object in either layout:
    //   [ { "Rows": { "1": {...}, ... } } ]   (UE DataTable export)
    //   [ {...}, {...} ]                      (flat array of rows)
    template <typename Fn>
    void ForEachRow(const rapidjson::Value& root, Fn fn)
    {
        if (!root.IsArray())
        {
            return;
        }
        for (const rapidjson::Value& element : root.GetArray())
        {
            if (!element.IsObject())
            {
                continue;
            }
            auto rows = element.FindMember("Rows");
            if (rows != element.MemberEnd() && rows->value.IsObject())
            {
                for (auto it = rows->value.MemberBegin(); it != rows->value.MemberEnd(); ++it)
                {
                    if (it->value.IsObject())
                    {
                        fn(it->value);
                    }
                }
            }
            else
            {
                fn(element);
            }
        }
    }

    bool GetNumber(const rapidjson::Value& obj, const char* key, double& out)
    {
        auto it = obj.FindMember(key);
        if (it == obj.MemberEnd() || !it->value.IsNumber())
        {
            return false;
        }
        out = it->value.GetDouble();
        return true;
    }

    int64_t GetInt64(const rapidjson::Value& obj, const char* key, int64_t fallback = 0)
    {
        auto it = obj.FindMember(key);
        if (it == obj.MemberEnd())
        {
            return fallback;
        }
        const rapidjson::Value& v = it->value;
        if (v.IsInt64())  return v.GetInt64();
        if (v.IsUint64()) return static_cast<int64_t>(v.GetUint64());
        if (v.IsNumber()) return static_cast<int64_t>(v.GetDouble());
        return fallback;
    }

    // {"X": n, "Y": n, ...} member -> x,y.
    bool GetVec2(const rapidjson::Value& obj, const char* key, double& x, double& y)
    {
        auto it = obj.FindMember(key);
        if (it == obj.MemberEnd() || !it->value.IsObject())
        {
            return false;
        }
        return GetNumber(it->value, "X", x) && GetNumber(it->value, "Y", y);
    }

    // {"X": n, "Y": n, "Z": n} member -> optional z (hasZ false when absent).
    void GetOptionalZ(const rapidjson::Value& obj, const char* key, double& z, bool& hasZ)
    {
        hasZ = false;
        auto it = obj.FindMember(key);
        if (it != obj.MemberEnd() && it->value.IsObject())
        {
            hasZ = GetNumber(it->value, "Z", z);
        }
    }

    // ---- bounds cache ------------------------------------------------------

    std::mutex                                 g_boundsMutex;
    std::wstring                               g_boundsRoot;
    bool                                       g_boundsBuilt = false;
    std::unordered_map<int64_t, StageBounds>   g_bounds;

    // ---- WARP_LOCATION cache -----------------------------------------------

    std::mutex                                 g_warpMutex;
    std::wstring                               g_warpRoot;
    bool                                       g_warpBuilt = false;
    std::unordered_map<int64_t, WarpInfo>      g_warps;

    // Fills g_warps from WARP_LOCATION.json when the cache is empty or the data root
    // changed. The caller MUST hold g_warpMutex. false => error filled.
    bool EnsureWarpsLocked(const std::wstring& root, std::string& error)
    {
        if (g_warpBuilt && g_warpRoot == root)
        {
            return true;
        }

        g_warps.clear();
        g_warpBuilt = false;

        rapidjson::Document doc;
        if (!ParseFile(root + L"\\WARP_LOCATION.json", doc, error))
        {
            return false;
        }

        g_warps.reserve(doc.IsArray() ? doc.Size() : 0);
        ForEachRow(doc, [](const rapidjson::Value& row)
        {
            const int64_t id = GetInt64(row, "WarpId");
            if (id <= 0 || g_warps.find(id) != g_warps.end())
            {
                return;
            }

            WarpInfo w;
            w.valid          = true;
            w.warpId         = id;
            w.arrivalStageId = GetInt64(row, "Arrival_StageId");

            auto coord = row.FindMember("Coordinate");
            if (coord != row.MemberEnd() && coord->value.IsObject())
            {
                GetNumber(coord->value, "X", w.x);
                GetNumber(coord->value, "Y", w.y);
                GetNumber(coord->value, "Z", w.z);
            }
            g_warps.emplace(id, w);
        });

        g_warpRoot  = root;
        g_warpBuilt = true;
        return true;
    }

    // ---- warp source index (PORTAL.json + MapMini markers) ------------------

    std::mutex                                                 g_srcMutex;
    std::wstring                                               g_srcRoot;
    bool                                                       g_srcBuilt = false;
    std::unordered_map<int64_t, std::vector<WarpSource>>       g_sources;

    // Marker rows from one MAP_MINI file are appended to `markers` as (warpId, source).
    void CollectMarkers(const std::wstring& path, int64_t stageId,
                        std::vector<std::pair<int64_t, WarpSource>>& markers)
    {
        rapidjson::Document doc;
        std::string ignored;
        if (!ParseFile(path, doc, ignored))
        {
            return;   // one unreadable file must not abort the whole scan
        }

        ForEachRow(doc, [&markers, stageId](const rapidjson::Value& row)
        {
            if (GetInt64(row, "InfoSubType") != 2)
            {
                return;
            }
            auto type = row.FindMember("InfoMainType");
            if (type == row.MemberEnd() || !type->value.IsString() ||
                std::string(type->value.GetString(), type->value.GetStringLength()).find("Default") == std::string::npos)
            {
                return;
            }
            const int64_t warpId = GetInt64(row, "InfoValue");
            if (warpId <= 0)
            {
                return;
            }

            WarpSource s;
            s.isPortal    = false;
            s.fromStageId = stageId;
            s.stringId    = GetInt64(row, "InfoStringId");
            GetVec2(row, "InfoCoordinate", s.x, s.y);
            markers.emplace_back(warpId, s);
        });
    }

    // Builds g_sources if missing / data root changed. Caller MUST hold g_srcMutex.
    // false => error filled (neither PORTAL.json nor the MapMini folder could be read).
    bool EnsureSourcesLocked(const std::wstring& root, std::string& error)
    {
        if (g_srcBuilt && g_srcRoot == root)
        {
            return true;
        }

        g_sources.clear();
        g_srcBuilt = false;

        bool anySource = false;

        // 1. PORTAL.json rows: CurrentStageId is where the portal stands.
        {
            rapidjson::Document doc;
            std::string portalError;
            if (ParseFile(root + L"\\PORTAL.json", doc, portalError))
            {
                anySource = true;
                ForEachRow(doc, [](const rapidjson::Value& row)
                {
                    const int64_t warpId = GetInt64(row, "WarpId");
                    if (warpId <= 0)
                    {
                        return;
                    }
                    WarpSource s;
                    s.isPortal    = true;
                    s.fromStageId = GetInt64(row, "CurrentStageId");
                    s.portalId    = GetInt64(row, "PortalTriggerId");
                    g_sources[warpId].push_back(s);
                });
            }
        }

        // 2. Every MapMini\MAP_MINI_<stage>.json: map-movement markers (Default/2).
        {
            std::vector<std::pair<int64_t, WarpSource>> markers;
            const std::wstring folder = root + L"\\MapMini\\";
            const std::wstring pattern = folder + L"MAP_MINI_*.json";

            SmdFindDataW data = {};
            void* handle = ::FindFirstFileW(pattern.c_str(), &data);
            if (handle != kSmdInvalidHandle)
            {
                anySource = true;
                const std::wstring prefix = L"MAP_MINI_";
                do
                {
                    if (data.dwFileAttributes & kSmdAttributeDirectory)
                    {
                        continue;
                    }
                    const std::wstring name(data.cFileName);
                    if (name.size() <= prefix.size() + 5)
                    {
                        continue;
                    }

                    // MAP_MINI_<digits>.json -> stage id
                    const std::wstring digits = name.substr(prefix.size(), name.size() - prefix.size() - 5);
                    if (digits.empty() || digits.find_first_not_of(L"0123456789") != std::wstring::npos)
                    {
                        continue;
                    }
                    const int64_t stageId = std::stoll(digits);
                    CollectMarkers(folder + name, stageId, markers);
                }
                while (::FindNextFileW(handle, &data));
                ::FindClose(handle);
            }

            // Stable order: by stage id, so results are deterministic regardless of
            // directory enumeration order.
            std::stable_sort(markers.begin(), markers.end(),
                [](const std::pair<int64_t, WarpSource>& a, const std::pair<int64_t, WarpSource>& b)
                {
                    return a.second.fromStageId < b.second.fromStageId;
                });
            for (const auto& entry : markers)
            {
                g_sources[entry.first].push_back(entry.second);
            }
        }

        if (!anySource)
        {
            error = "neither PORTAL.json nor the MapMini folder could be read";
            return false;
        }

        g_srcRoot  = root;
        g_srcBuilt = true;
        return true;
    }
}

bool StageMapData::GetBounds(const std::wstring& dataRoot, int64_t stageId, StageBounds& out, std::string& error)
{
    out = StageBounds();
    error.clear();

    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_boundsMutex);

        if (!g_boundsBuilt || g_boundsRoot != root)
        {
            g_bounds.clear();
            g_boundsBuilt = false;

            rapidjson::Document doc;
            if (!ParseFile(root + L"\\MAPUI_MINI.json", doc, error))
            {
                return false;
            }

            g_bounds.reserve(doc.IsArray() ? doc.Size() : 0);
            ForEachRow(doc, [](const rapidjson::Value& row)
            {
                const int64_t id = GetInt64(row, "MiniStageId");
                if (id == 0 || g_bounds.find(id) != g_bounds.end())
                {
                    return;
                }

                StageBounds b;
                if (!GetVec2(row, "MiniMapCoordinateLT", b.ltX, b.ltY) ||
                    !GetVec2(row, "MiniMapCoordinateRB", b.rbX, b.rbY))
                {
                    return;
                }
                b.valid = (b.rbX - b.ltX) != 0.0 && (b.rbY - b.ltY) != 0.0;
                g_bounds.emplace(id, b);
            });

            g_boundsRoot  = root;
            g_boundsBuilt = true;
        }

        auto found = g_bounds.find(stageId);
        if (found != g_bounds.end())
        {
            out = found->second;
        }
        return true;
    }
    catch (...)
    {
        out = StageBounds();
        error = "unexpected error reading MAPUI_MINI.json";
        return false;
    }
}

bool StageMapData::LoadMapMini(const std::wstring& dataRoot, int64_t stageId, std::vector<MapMiniRow>& rows, std::string& error)
{
    rows.clear();
    error.clear();

    try
    {
        const std::wstring path = TrimRoot(dataRoot) + L"\\MapMini\\MAP_MINI_" + std::to_wstring(stageId) + L".json";

        rapidjson::Document doc;
        if (!ParseFile(path, doc, error))
        {
            return false;
        }

        ForEachRow(doc, [&rows](const rapidjson::Value& row)
        {
            MapMiniRow r;
            if (!GetVec2(row, "InfoCoordinate", r.x, r.y))
            {
                return;   // not placed on the map
            }

            auto type = row.FindMember("InfoMainType");
            if (type != row.MemberEnd() && type->value.IsString())
            {
                r.mainType.assign(type->value.GetString(), type->value.GetStringLength());
            }
            r.subType   = static_cast<int>(GetInt64(row, "InfoSubType"));
            r.stringId  = GetInt64(row, "InfoStringId");
            r.infoValue = GetInt64(row, "InfoValue");   // WarpId on Default/2 map-movement rows
            GetOptionalZ(row, "InfoCoordinate", r.z, r.hasZ);
            rows.push_back(std::move(r));
        });
        return true;
    }
    catch (...)
    {
        rows.clear();
        error = "unexpected error reading MAP_MINI data";
        return false;
    }
}

bool StageMapData::LoadGen(const std::wstring& dataRoot, int64_t stageId, std::vector<GenSpawnRow>& rows, std::string& error)
{
    rows.clear();
    error.clear();

    try
    {
        const std::wstring path = TrimRoot(dataRoot) + L"\\Gen\\GENDATA_" + std::to_wstring(stageId) + L".json";

        rapidjson::Document doc;
        if (!ParseFile(path, doc, error))
        {
            return false;
        }

        if (doc.IsArray())
        {
            rows.reserve(doc.Size());
        }
        ForEachRow(doc, [&rows](const rapidjson::Value& row)
        {
            GenSpawnRow g;
            if (!GetNumber(row, "LocationX", g.x) || !GetNumber(row, "LocationY", g.y))
            {
                return;
            }
            g.hasZ       = GetNumber(row, "LocationZ", g.z);
            g.posId      = GetInt64(row, "PosID", 0);
            g.objectId   = GetInt64(row, "GenObjectID");
            g.objectType = static_cast<int>(GetInt64(row, "GenObjectType"));
            const int64_t count = GetInt64(row, "SpawnCount", 1);
            g.spawnCount = count > 0 ? static_cast<int>(count) : 1;

            // Respawn window (seconds) and spawn radius (world units; 0 = fixed point).
            const int64_t regMin = GetInt64(row, "RegMinTime", 0);
            const int64_t regMax = GetInt64(row, "RegMaxTime", 0);
            g.regMinTime = regMin > 0 ? static_cast<int>(regMin) : 0;
            g.regMaxTime = regMax > 0 ? static_cast<int>(regMax) : 0;
            double range = 0.0;
            if (GetNumber(row, "SpawnRange", range) && range > 0.0)
            {
                g.spawnRange = range;
            }
            rows.push_back(g);
        });
        return true;
    }
    catch (...)
    {
        rows.clear();
        error = "unexpected error reading GENDATA data";
        return false;
    }
}

bool StageMapData::GetWarp(const std::wstring& dataRoot, int64_t warpId, WarpInfo& out, std::string& error)
{
    out = WarpInfo();
    error.clear();

    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_warpMutex);

        if (!EnsureWarpsLocked(root, error))
        {
            return false;
        }

        auto found = g_warps.find(warpId);
        if (found != g_warps.end())
        {
            out = found->second;
        }
        return true;
    }
    catch (...)
    {
        out = WarpInfo();
        error = "unexpected error reading WARP_LOCATION.json";
        return false;
    }
}

bool StageMapData::GetWarpsInto(const std::wstring& dataRoot, int64_t stageId, std::vector<WarpInfo>& out, std::string& error)
{
    out.clear();
    error.clear();

    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_warpMutex);

        if (!EnsureWarpsLocked(root, error))
        {
            return false;
        }

        for (const auto& entry : g_warps)
        {
            if (entry.second.arrivalStageId == stageId)
            {
                out.push_back(entry.second);
            }
        }
        std::sort(out.begin(), out.end(),
            [](const WarpInfo& a, const WarpInfo& b) { return a.warpId < b.warpId; });
        return true;
    }
    catch (...)
    {
        out.clear();
        error = "unexpected error reading WARP_LOCATION.json";
        return false;
    }
}

// ---- monster spawn index (Gen\GENDATA_<stage>.json) -------------------------------

namespace
{
    std::mutex                                              g_spawnMutex;
    std::wstring                                            g_spawnRoot;
    bool                                                    g_spawnBuilt = false;
    std::unordered_map<int64_t, std::vector<SpawnStage>>    g_spawns;

    // Builds g_spawns if missing / data root changed. Caller MUST hold g_spawnMutex.
    bool EnsureSpawnsLocked(const std::wstring& root, std::string& error)
    {
        if (g_spawnBuilt && g_spawnRoot == root)
        {
            return true;
        }

        g_spawns.clear();
        g_spawnBuilt = false;

        const std::wstring folder = root + L"\\Gen\\";
        const std::wstring pattern = folder + L"GENDATA_*.json";
        SmdFindDataW data = {};
        void* handle = ::FindFirstFileW(pattern.c_str(), &data);
        if (handle == kSmdInvalidHandle)
        {
            error = "no Gen\\GENDATA_*.json files found";
            return false;
        }

        const std::wstring prefix = L"GENDATA_";
        do
        {
            if (data.dwFileAttributes & kSmdAttributeDirectory)
            {
                continue;
            }
            const std::wstring name(data.cFileName);
            if (name.size() <= prefix.size() + 5)
            {
                continue;
            }
            const std::wstring digits = name.substr(prefix.size(), name.size() - prefix.size() - 5);
            if (digits.empty() || digits.find_first_not_of(L"0123456789") != std::wstring::npos)
            {
                continue;
            }
            const int64_t stageId = std::stoll(digits);

            rapidjson::Document doc;
            std::string ignored;
            if (!ParseFile(folder + name, doc, ignored))
            {
                continue;   // one unreadable file must not abort the scan
            }

            std::unordered_map<int64_t, int> perStage;
            ForEachRow(doc, [&perStage](const rapidjson::Value& row)
            {
                if (GetInt64(row, "GenObjectType") != 2)
                {
                    return;
                }
                const int64_t id = GetInt64(row, "GenObjectID");
                if (id <= 0)
                {
                    return;
                }
                const int64_t n = GetInt64(row, "SpawnCount", 1);
                perStage[id] += (n > 0) ? static_cast<int>(n) : 1;
            });
            for (const auto& entry : perStage)
            {
                SpawnStage s;
                s.stageId = stageId;
                s.count   = entry.second;
                g_spawns[entry.first].push_back(s);
            }
        }
        while (::FindNextFileW(handle, &data));
        ::FindClose(handle);

        g_spawnRoot = root;
        g_spawnBuilt = true;
        return true;
    }
}

bool StageMapData::GetMonsterSpawns(const std::wstring& dataRoot, int64_t monsterId, std::vector<SpawnStage>& out, std::string& error)
{
    out.clear();
    error.clear();
    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_spawnMutex);
        if (!EnsureSpawnsLocked(root, error))
        {
            return false;
        }
        auto found = g_spawns.find(monsterId);
        if (found != g_spawns.end())
        {
            out = found->second;
        }
        return true;
    }
    catch (...)
    {
        out.clear();
        error = "unexpected error building the monster spawn index";
        return false;
    }
}
bool StageMapData::GetWarpSources(const std::wstring& dataRoot, int64_t warpId, std::vector<WarpSource>& out, std::string& error)
{
    out.clear();
    error.clear();

    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_srcMutex);

        if (!EnsureSourcesLocked(root, error))
        {
            return false;
        }

        auto found = g_sources.find(warpId);
        if (found != g_sources.end())
        {
            out = found->second;   // portals first, then markers by stage id (built that way)
        }
        return true;
    }
    catch (...)
    {
        out.clear();
        error = "unexpected error building the warp source index";
        return false;
    }
}

void StageMapData::WarmWarpSources(const std::wstring& dataRoot)
{
    try
    {
        const std::wstring root = TrimRoot(dataRoot);
        std::lock_guard<std::mutex> lock(g_srcMutex);
        std::string ignored;
        EnsureSourcesLocked(root, ignored);
    }
    catch (...)
    {
        // Best effort only.
    }
}

void StageMapData::ClearCache()
{
    {
        std::lock_guard<std::mutex> lock(g_spawnMutex);
        g_spawns.clear();
        g_spawnRoot.clear();
        g_spawnBuilt = false;
    }
    {
        std::lock_guard<std::mutex> lock(g_srcMutex);
        g_sources.clear();
        g_srcRoot.clear();
        g_srcBuilt = false;
    }
    {
        std::lock_guard<std::mutex> lock(g_boundsMutex);
        g_bounds.clear();
        g_boundsRoot.clear();
        g_boundsBuilt = false;
    }
    {
        std::lock_guard<std::mutex> lock(g_warpMutex);
        g_warps.clear();
        g_warpRoot.clear();
        g_warpBuilt = false;
    }
}
