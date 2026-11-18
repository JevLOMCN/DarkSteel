#pragma once

// =============================================================================
// DarkSteelStudio - GameDataStore
//
// Read-only, in-memory view of the server's Data\*.json tables (ITEM.json,
// MONSTER.json, STRING_TEMPLATE.json, ...) for the Game Data tab. Every file
// is a JSON array of flat objects; this loads one file into a column/row
// grid (GameDataTable), caches loaded tables (GameDataStore), resolves
// STRING_TEMPLATE ids to text, and runs case-insensitive searches.
//
// Plain ISO C++17 + rapidjson. No managed types and no <Windows.h> (the few
// Win32 calls needed are hand-declared in the .cpp) even though this is
// compiled inside the /clr project - the managed bridge wraps this class.
//
// Memory: cells are 16 bytes and strings are interned per table into a
// UTF-16 pool, so the 50 MB tables (STRING_TEMPLATE, DROP_ITEM) stay
// manageable.
//
// Speed: the huge string tables (STRING_TEMPLATE 52 MB, STRING_MESSAGE 21 MB)
// are only ever read through "lite" tables that keep just StringId plus the
// language columns actually used (GetLiteTable). Parsing is in-situ (no string
// copies in the DOM) and member -> column lookup uses a per-position guess, so
// a lite load costs roughly one DOM parse plus two interned strings per row.
// The full-width table (GetTable) is only built when the raw browser asks for
// it.
//
// Threading: all GameDataStore methods are serialised by an internal recursive
// mutex, so a worker thread can build codex lists while the UI thread idles.
// Loaded GameDataTable objects are immutable, so a shared_ptr obtained from
// the store can be read without any lock.
// =============================================================================

#include <cstdint>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

enum class GameDataCellKind : uint8_t { Null = 0, Bool, Int, Double, String, Array, Object };

struct GameDataCell {
    double number = 0.0;          // Bool/Int/Double value (bool as 0/1)
    uint32_t text = UINT32_MAX;   // index into GameDataTable::TextPool for String/Array/Object (arrays/objects stored as compact JSON text)
    GameDataCellKind kind = GameDataCellKind::Null;
};

class GameDataTable {
public:
    std::string Name;                       // e.g. "ITEM" (file basename without .json)
    std::wstring Path;                      // full path of the JSON file
    std::vector<std::string> Columns;       // column names, first-appearance order
    std::vector<GameDataCellKind> ColumnKinds; // dominant kind per column: Int if every non-null value is an integral number, Double if numeric but not all integral, Bool if all bool, else String (arrays/objects count as String)
    std::vector<std::wstring> TextPool;     // interned cell strings (UTF-16)

    size_t RowCount() const;
    size_t ColumnCount() const;
    const GameDataCell& Cell(size_t row, size_t col) const;   // Null cell for missing keys
    std::wstring CellText(size_t row, size_t col) const;      // display text: integral numbers without decimals, doubles with up to 6 decimals trimmed, bools "true"/"false", Null -> L"", strings as-is
    int FindColumn(const std::string& name) const;            // -1 if absent

    // Loads the JSON array at path. On failure returns false and fills error
    // (UTF-8, with rapidjson offset). Replaces previous content.
    // onlyColumns == nullptr: keep every column (the normal, full table).
    // onlyColumns != nullptr: keep only the listed columns that exist in the
    // file (in first-appearance order, unknown names ignored); every other
    // member is skipped without being converted or interned. Row count and
    // row order are unchanged, so row indices match the full table.
    bool Load(const std::wstring& path, std::string& error, const std::vector<std::string>* onlyColumns = nullptr);

private:
    std::vector<GameDataCell> m_cells;      // row-major, RowCount*ColumnCount
    size_t m_rowCount = 0;
    std::unordered_map<std::wstring, uint32_t> m_intern;   // only populated while Load() runs

    uint32_t Intern(const std::wstring& text);
    void Clear();
};

struct GameDataSearchResult {
    std::vector<uint32_t> rows;   // matching row indices (in table order), capped at maxResults
    size_t totalMatches = 0;      // matches before the cap
};

class GameDataStore {
public:
    void SetDataRoot(const std::wstring& dataDir);   // also clears all cached tables
    const std::wstring& DataRoot() const;
    std::vector<std::string> ListTables() const;     // basenames (no extension) of *.json directly in DataRoot, case-insensitive sorted; empty if folder missing

    // Cached full-width load. Returns nullptr and fills error on failure.
    std::shared_ptr<GameDataTable> GetTable(const std::string& name, std::string& error);
    std::shared_ptr<GameDataTable> GetLoadedTable(const std::string& name) const; // nullptr if not loaded (full tables only)

    // Cached column-subset load (see GameDataTable::Load onlyColumns). Cached
    // separately from GetTable under UPPER(name) + "|lite|" + joined columns;
    // only an identical column list reuses an entry. Returns nullptr and fills
    // error on failure. Row indices match the full table.
    std::shared_ptr<GameDataTable> GetLiteTable(const std::string& name, const std::vector<std::string>& columns, std::string& error);

    // Lite STRING_MESSAGE with {"StringId","TextKr","ENG"} plus `lang` when it
    // is something else. nullptr + error when the file is missing.
    std::shared_ptr<GameDataTable> GetLiteStringMessage(const std::string& lang, std::string& error);

    // Drops the full table and every lite table of that name (and, for
    // STRING_TEMPLATE, the cached string indexes).
    void Unload(const std::string& name);
    void UnloadAll();

    // STRING_TEMPLATE resolution. lang is a column name ("ENG", "TextKr",
    // "CHT", ...). Lazily loads a LITE STRING_TEMPLATE ({"StringId","TextKr",
    // "ENG"} plus lang when different) and builds a StringId->row index once
    // per distinct table; returns false if the table/column/id is missing.
    // ENG and TextKr share one table, so switching between them is free.
    bool TryResolveString(int64_t stringId, const std::string& lang, std::wstring& out);

    // Heuristic for columns holding STRING_TEMPLATE ids: column name ends with
    // "sid" or "stringid" (case-insensitive), or is exactly "BuffName" /
    // "BuffExplain"; never true for tables named STRING_* (their StringId is a
    // key, not a reference).
    static bool IsStringIdColumn(const std::string& tableName, const std::string& columnName);

    // Case-insensitive substring search of needle over every cell's display
    // text AND, for string-id columns, over the resolved text in `lang`.
    // Empty needle matches all rows. Results in table order; stops collecting
    // after maxResults but keeps counting totalMatches.
    GameDataSearchResult Search(const GameDataTable& table, const std::wstring& needle, const std::string& lang, size_t maxResults);

private:
    // StringId -> row index over one lite STRING_TEMPLATE table.
    struct StringIndex {
        std::shared_ptr<GameDataTable> table;                 // null when loading failed (cached so it is not retried)
        std::unordered_map<int64_t, uint32_t> rows;
        std::unordered_map<std::string, int> langCols;       // lang -> column index in `table`, cached
    };

    mutable std::recursive_mutex m_mutex;                     // guards everything below
    std::wstring m_dataRoot;
    std::unordered_map<std::string, std::shared_ptr<GameDataTable>> m_tables;   // key: upper-cased name
    std::unordered_map<std::string, std::shared_ptr<GameDataTable>> m_lite;     // key: UPPER(name)|lite|col,col,...
    std::unordered_map<std::string, StringIndex> m_stringIndexes;               // key: "ENG" group or the lang
    std::string m_lastLang;                                   // one-entry cache for EnsureStringIndex
    StringIndex* m_lastIndex = nullptr;

    static std::string Key(const std::string& name);
    StringIndex* EnsureStringIndex(const std::string& lang);   // nullptr if unavailable; caller holds m_mutex
    void ClearStringIndexes();
};
