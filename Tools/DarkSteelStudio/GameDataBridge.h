#pragma once

// =============================================================================
// DarkSteelStudio - GameDataBridge  (managed facade over the native GameDataStore)
//
// The server's Bin\Servers\Data\*.json tables are parsed by the plain-C++
// GameDataStore (rapidjson, see GameDataStore.h). This ref class owns one
// store behind a raw pointer (C++/CLI cannot hold native aggregates by value
// in a ref class) and turns query results into System::Data::DataTable
// objects that a WPF DataGrid can bind to directly (ItemsSource = DefaultView).
//
// Column typing: Int kind -> Int64, Double -> Double, Bool -> Boolean, anything
// else (strings, arrays, objects) -> String. Columns the store recognises as
// STRING_TEMPLATE ids (NameSid, NoteSid, BuffName, ...) get a sibling column
// "<col>_<lang>" holding the resolved text. The sibling uses an underscore
// rather than "<col> (<lang>)" because WPF binding paths treat parentheses
// as type-qualifier syntax and would fail to bind.
// =============================================================================

class GameDataStore; // native, defined in GameDataStore.h (only the .cpp includes it)

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;

    public ref class GameDataBridge {
    public:
        GameDataBridge();
        ~GameDataBridge();
        !GameDataBridge();

        // Folder holding the *.json tables (normally <ServersPath>\Data).
        void    SetDataRoot(String^ dir);
        String^ DataRoot();

        // Table names (file name without .json) found under the data root, sorted.
        List<String^>^ ListTables();

        // Loads `table` on first use (cached afterwards) and returns the rows that
        // match `search` (empty = all rows) as a DataTable. maxRows <= 0 = no cap.
        // totalRows = rows in the table, totalMatches = rows matching the search
        // before the cap, elapsedMs = wall time for load + filter + conversion.
        // Throws InvalidOperationException with the native error if the JSON
        // cannot be read or parsed.
        System::Data::DataTable^ Query(String^ table, String^ search, String^ lang, int maxRows,
                                       [System::Runtime::InteropServices::Out] int% totalRows,
                                       [System::Runtime::InteropServices::Out] int% totalMatches,
                                       [System::Runtime::InteropServices::Out] double% elapsedMs);

        // Drops a cached table (next Query re-reads the file) / drops all of them.
        void Unload(String^ table);
        void UnloadAll();

        // STRING_TEMPLATE lookup; empty string when the id is unknown.
        String^ ResolveString(long long id, String^ lang);

        // Full path of a table's JSON file: <DataRoot>\<table>.json
        String^ TablePath(String^ table);

    internal:
        // Direct access for in-assembly builders (CodexCatalog) that walk the
        // native tables themselves instead of going through DataTable.
        GameDataStore* NativeStore();

    private:
        GameDataStore* m_store;
    };
}
