#include "GameDataBridge.h"
#include "GameDataStore.h"

#include <msclr/marshal_cppstd.h>

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <memory>
#include <numeric>
#include <string>
#include <vector>

namespace DarkSteelStudio {

    using namespace System::Data;
    using namespace System::Diagnostics;
    using namespace System::Text;

    namespace {

        // ---- string marshalling ---------------------------------------------

        std::wstring ToNativeW(String^ value)
        {
            if (value == nullptr)
            {
                return std::wstring();
            }
            return msclr::interop::marshal_as<std::wstring>(value);
        }

        // UTF-8 rather than marshal_as<std::string> (which uses the ANSI code
        // page) so error messages and non-ASCII text survive the round trip.
        std::string ToNativeUtf8(String^ value)
        {
            if (String::IsNullOrEmpty(value))
            {
                return std::string();
            }
            array<Byte>^ bytes = Encoding::UTF8->GetBytes(value);
            if (bytes->Length == 0)
            {
                return std::string();
            }
            pin_ptr<Byte> pinned = &bytes[0];
            return std::string(reinterpret_cast<const char*>(pinned), static_cast<size_t>(bytes->Length));
        }

        String^ FromNativeUtf8(const std::string& value)
        {
            if (value.empty())
            {
                return String::Empty;
            }
            array<Byte>^ bytes = gcnew array<Byte>(static_cast<int>(value.size()));
            pin_ptr<Byte> pinned = &bytes[0];
            std::memcpy(pinned, value.data(), value.size());
            return Encoding::UTF8->GetString(bytes);
        }

        String^ FromNativeW(const std::wstring& value)
        {
            if (value.empty())
            {
                return String::Empty;
            }
            return gcnew String(value.c_str());
        }

        // ---- column typing ----------------------------------------------------

        // 0 = String, 1 = Int64, 2 = Double, 3 = Boolean
        int KindToCode(GameDataCellKind kind)
        {
            switch (kind)
            {
            case GameDataCellKind::Int:    return 1;
            case GameDataCellKind::Double: return 2;
            case GameDataCellKind::Bool:   return 3;
            default:                       return 0;
            }
        }

        Type^ CodeToType(int code)
        {
            switch (code)
            {
            case 1:  return Int64::typeid;
            case 2:  return Double::typeid;
            case 3:  return Boolean::typeid;
            default: return String::typeid;
            }
        }

        bool IsNumericKind(GameDataCellKind kind)
        {
            return kind == GameDataCellKind::Int
                || kind == GameDataCellKind::Double
                || kind == GameDataCellKind::Bool;
        }

        // Converts one native cell into a value acceptable for a DataColumn of
        // the given type code. Mixed columns (e.g. an Int column holding the odd
        // "0" string) are parsed; anything that still does not fit becomes DBNull
        // instead of throwing out of DataRowCollection::Add.
        Object^ ConvertCell(const GameDataTable& table, size_t row, size_t col, int typeCode)
        {
            const GameDataCell& cell = table.Cell(row, col);
            if (cell.kind == GameDataCellKind::Null)
            {
                return DBNull::Value;
            }

            const bool numeric = IsNumericKind(cell.kind);

            switch (typeCode)
            {
            case 1: // Int64
            {
                if (numeric)
                {
                    return static_cast<long long>(cell.number);
                }
                long long parsed = 0;
                if (Int64::TryParse(FromNativeW(table.CellText(row, col)), parsed))
                {
                    return parsed;
                }
                return DBNull::Value;
            }
            case 2: // Double
            {
                if (numeric)
                {
                    return cell.number;
                }
                double parsed = 0.0;
                if (Double::TryParse(FromNativeW(table.CellText(row, col)),
                                     System::Globalization::NumberStyles::Float,
                                     System::Globalization::CultureInfo::InvariantCulture,
                                     parsed))
                {
                    return parsed;
                }
                return DBNull::Value;
            }
            case 3: // Boolean
            {
                if (numeric)
                {
                    return (cell.number != 0.0);
                }
                bool parsed = false;
                if (Boolean::TryParse(FromNativeW(table.CellText(row, col)), parsed))
                {
                    return parsed;
                }
                return DBNull::Value;
            }
            default: // String (also arrays / objects, rendered as text by the store)
                return FromNativeW(table.CellText(row, col));
            }
        }

        // STRING_TEMPLATE text for an id cell, or "" when the id is 0 / unknown /
        // not numeric.
        String^ ResolveCellString(GameDataStore* store, const GameDataTable& table, size_t row, size_t col, const std::string& lang)
        {
            const GameDataCell& cell = table.Cell(row, col);
            if (cell.kind != GameDataCellKind::Int && cell.kind != GameDataCellKind::Double)
            {
                return String::Empty;
            }

            const long long id = static_cast<long long>(cell.number);
            if (id == 0)
            {
                return String::Empty;
            }

            std::wstring text;
            if (!store->TryResolveString(static_cast<int64_t>(id), lang, text))
            {
                return String::Empty;
            }
            return FromNativeW(text);
        }

        // DataColumn names are case-insensitive and must be unique.
        String^ UniqueColumnName(DataTable^ table, String^ wanted)
        {
            String^ candidate = wanted;
            int suffix = 1;
            while (table->Columns->Contains(candidate))
            {
                ++suffix;
                candidate = wanted + "_" + suffix.ToString();
            }
            return candidate;
        }
    }

    // =========================================================================
    // Lifetime
    // =========================================================================

    GameDataBridge::GameDataBridge()
        : m_store(new GameDataStore())
    {
    }

    GameDataBridge::~GameDataBridge()
    {
        this->!GameDataBridge();
    }

    GameDataBridge::!GameDataBridge()
    {
        delete m_store;
        m_store = nullptr;
    }

    GameDataStore* GameDataBridge::NativeStore()
    {
        return m_store;
    }

    // =========================================================================
    // Data root / table listing
    // =========================================================================

    void GameDataBridge::SetDataRoot(String^ dir)
    {
        m_store->SetDataRoot(ToNativeW(dir));
    }

    String^ GameDataBridge::DataRoot()
    {
        return FromNativeW(m_store->DataRoot());
    }

    List<String^>^ GameDataBridge::ListTables()
    {
        List<String^>^ result = gcnew List<String^>();

        std::vector<std::string> names = m_store->ListTables();
        for (size_t i = 0; i < names.size(); ++i)
        {
            result->Add(FromNativeUtf8(names[i]));
        }

        result->Sort(StringComparer::OrdinalIgnoreCase);
        return result;
    }

    String^ GameDataBridge::TablePath(String^ table)
    {
        return System::IO::Path::Combine(DataRoot(), table + ".json");
    }

    void GameDataBridge::Unload(String^ table)
    {
        if (!String::IsNullOrWhiteSpace(table))
        {
            m_store->Unload(ToNativeUtf8(table));
        }
    }

    void GameDataBridge::UnloadAll()
    {
        m_store->UnloadAll();
    }

    String^ GameDataBridge::ResolveString(long long id, String^ lang)
    {
        std::string langName = String::IsNullOrWhiteSpace(lang) ? std::string("ENG") : ToNativeUtf8(lang);
        std::wstring text;
        if (m_store->TryResolveString(static_cast<int64_t>(id), langName, text))
        {
            return FromNativeW(text);
        }
        return String::Empty;
    }

    // =========================================================================
    // Query
    // =========================================================================

    DataTable^ GameDataBridge::Query(String^ table, String^ search, String^ lang, int maxRows,
                                     int% totalRows, int% totalMatches, double% elapsedMs)
    {
        totalRows    = 0;
        totalMatches = 0;
        elapsedMs    = 0.0;

        if (String::IsNullOrWhiteSpace(table))
        {
            throw gcnew ArgumentException("No table name given.", "table");
        }

        Stopwatch^ stopwatch = Stopwatch::StartNew();

        std::string tableName = ToNativeUtf8(table);
        std::string langName  = String::IsNullOrWhiteSpace(lang) ? std::string("ENG") : ToNativeUtf8(lang);

        std::string error;
        std::shared_ptr<GameDataTable> loaded = m_store->GetTable(tableName, error);
        if (!loaded)
        {
            String^ message = error.empty() ? gcnew String("Failed to load the table.") : FromNativeUtf8(error);
            throw gcnew InvalidOperationException(table + ": " + message);
        }

        const GameDataTable& native = *loaded;
        const size_t columnCount = native.ColumnCount();
        const size_t rowCount    = native.RowCount();
        totalRows = static_cast<int>(rowCount);

        String^ effectiveLang = FromNativeUtf8(langName);

        DataTable^ result = gcnew DataTable(table);
        result->Locale = System::Globalization::CultureInfo::InvariantCulture;

        // ---- column plan ------------------------------------------------------
        std::vector<int>  typeCodes(columnCount, 0);
        std::vector<char> resolve(columnCount, 0);
        int managedColumnCount = 0;

        for (size_t c = 0; c < columnCount; ++c)
        {
            GameDataCellKind kind = (c < native.ColumnKinds.size()) ? native.ColumnKinds[c] : GameDataCellKind::String;
            typeCodes[c] = KindToCode(kind);

            String^ name = UniqueColumnName(result, FromNativeUtf8(native.Columns[c]));
            result->Columns->Add(gcnew DataColumn(name, CodeToType(typeCodes[c])));
            ++managedColumnCount;

            if (GameDataStore::IsStringIdColumn(tableName, native.Columns[c]))
            {
                resolve[c] = 1;
                result->Columns->Add(gcnew DataColumn(UniqueColumnName(result, name + "_" + effectiveLang), String::typeid));
                ++managedColumnCount;
            }
        }

        // ---- row selection ----------------------------------------------------
        String^ trimmedSearch = (search == nullptr) ? String::Empty : search->Trim();
        std::wstring needle = ToNativeW(trimmedSearch);

        const size_t limit = (maxRows > 0) ? static_cast<size_t>(maxRows) : rowCount;

        std::vector<uint32_t> rows;
        if (!needle.empty())
        {
            GameDataSearchResult found = m_store->Search(native, needle, langName, limit);
            rows.swap(found.rows);
            totalMatches = static_cast<int>(found.totalMatches);
            if (rows.size() > limit)
            {
                rows.resize(limit);
            }
        }
        else
        {
            totalMatches = static_cast<int>(rowCount);
            const size_t take = (limit < rowCount) ? limit : rowCount;
            rows.resize(take);
            std::iota(rows.begin(), rows.end(), static_cast<uint32_t>(0));
        }

        // ---- fill -------------------------------------------------------------
        result->BeginLoadData();
        try
        {
            for (size_t i = 0; i < rows.size(); ++i)
            {
                const size_t r = rows[i];
                if (r >= rowCount)
                {
                    continue;
                }

                array<Object^>^ values = gcnew array<Object^>(managedColumnCount);
                int m = 0;
                for (size_t c = 0; c < columnCount; ++c)
                {
                    values[m++] = ConvertCell(native, r, c, typeCodes[c]);
                    if (resolve[c])
                    {
                        values[m++] = ResolveCellString(m_store, native, r, c, langName);
                    }
                }
                result->Rows->Add(values);
            }
        }
        finally
        {
            result->EndLoadData();
        }

        stopwatch->Stop();
        elapsedMs = stopwatch->Elapsed.TotalMilliseconds;
        return result;
    }
}
