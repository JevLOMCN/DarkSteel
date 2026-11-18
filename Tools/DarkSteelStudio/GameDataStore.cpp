#include "GameDataStore.h"
#include "StudioLogNative.h"
#include <chrono>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cwctype>
#include <fstream>
#include <sstream>
#include <string_view>

#include <rapidjson/document.h>
#include <rapidjson/error/en.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

// Hand-declared Win32 directory enumeration so this translation unit never
// has to #include <Windows.h> (it must stay plain ISO C++17 even though it is
// compiled inside a /clr project). Layout matches WIN32_FIND_DATAW on x64.
namespace
{
    struct Win32FileTime
    {
        unsigned long dwLowDateTime;
        unsigned long dwHighDateTime;
    };

    struct Win32FindDataW
    {
        unsigned long dwFileAttributes;
        Win32FileTime ftCreationTime;
        Win32FileTime ftLastAccessTime;
        Win32FileTime ftLastWriteTime;
        unsigned long nFileSizeHigh;
        unsigned long nFileSizeLow;
        unsigned long dwReserved0;
        unsigned long dwReserved1;
        wchar_t cFileName[260];
        wchar_t cAlternateFileName[14];
    };

    const unsigned long kFileAttributeDirectory = 0x10;   // FILE_ATTRIBUTE_DIRECTORY
    void* const kInvalidHandleValue = reinterpret_cast<void*>(static_cast<intptr_t>(-1));
}

// The find-data parameter is declared as void* on purpose: a parameter type
// from an anonymous namespace has internal linkage, which makes MSVC drop the
// extern "C" and emit a C++-mangled (unresolvable) import.
extern "C" __declspec(dllimport) void* __stdcall FindFirstFileW(const wchar_t* lpFileName, void* lpFindFileData);
extern "C" __declspec(dllimport) int __stdcall FindNextFileW(void* hFindFile, void* lpFindFileData);
extern "C" __declspec(dllimport) int __stdcall FindClose(void* hFindFile);

#pragma comment(lib, "kernel32.lib")

namespace
{
    // ---- UTF conversions (pure C++, no Win32) -------------------------------

    std::wstring Utf8ToWide(const char* text, size_t length)
    {
        std::wstring out;
        out.reserve(length);

        size_t i = 0;
        while (i < length)
        {
            const unsigned char c = static_cast<unsigned char>(text[i]);
            uint32_t codePoint = 0;
            size_t extra = 0;

            if (c < 0x80)            { codePoint = c;        extra = 0; }
            else if ((c & 0xE0) == 0xC0) { codePoint = c & 0x1F; extra = 1; }
            else if ((c & 0xF0) == 0xE0) { codePoint = c & 0x0F; extra = 2; }
            else if ((c & 0xF8) == 0xF0) { codePoint = c & 0x07; extra = 3; }
            else
            {
                out.push_back(L'\xFFFD');
                ++i;
                continue;
            }

            if (i + extra >= length)   // continuation bytes run past the end
            {
                out.push_back(L'\xFFFD');
                ++i;
                continue;
            }

            bool valid = true;
            for (size_t k = 1; k <= extra; ++k)
            {
                const unsigned char cont = static_cast<unsigned char>(text[i + k]);
                if ((cont & 0xC0) != 0x80)
                {
                    valid = false;
                    break;
                }
                codePoint = (codePoint << 6) | (cont & 0x3F);
            }

            if (!valid)
            {
                out.push_back(L'\xFFFD');
                ++i;
                continue;
            }

            if (codePoint >= 0x10000)
            {
                codePoint -= 0x10000;
                out.push_back(static_cast<wchar_t>(0xD800 + (codePoint >> 10)));
                out.push_back(static_cast<wchar_t>(0xDC00 + (codePoint & 0x3FF)));
            }
            else
            {
                out.push_back(static_cast<wchar_t>(codePoint));
            }

            i += extra + 1;
        }
        return out;
    }

    std::string WideToUtf8(const std::wstring& text)
    {
        std::string out;
        out.reserve(text.size() * 2);

        for (size_t i = 0; i < text.size(); ++i)
        {
            uint32_t codePoint = text[i];
            if (codePoint >= 0xD800 && codePoint <= 0xDBFF && i + 1 < text.size())
            {
                const uint32_t low = text[i + 1];
                if (low >= 0xDC00 && low <= 0xDFFF)
                {
                    codePoint = 0x10000 + ((codePoint - 0xD800) << 10) + (low - 0xDC00);
                    ++i;
                }
            }

            if (codePoint < 0x80)
            {
                out.push_back(static_cast<char>(codePoint));
            }
            else if (codePoint < 0x800)
            {
                out.push_back(static_cast<char>(0xC0 | (codePoint >> 6)));
                out.push_back(static_cast<char>(0x80 | (codePoint & 0x3F)));
            }
            else if (codePoint < 0x10000)
            {
                out.push_back(static_cast<char>(0xE0 | (codePoint >> 12)));
                out.push_back(static_cast<char>(0x80 | ((codePoint >> 6) & 0x3F)));
                out.push_back(static_cast<char>(0x80 | (codePoint & 0x3F)));
            }
            else
            {
                out.push_back(static_cast<char>(0xF0 | (codePoint >> 18)));
                out.push_back(static_cast<char>(0x80 | ((codePoint >> 12) & 0x3F)));
                out.push_back(static_cast<char>(0x80 | ((codePoint >> 6) & 0x3F)));
                out.push_back(static_cast<char>(0x80 | (codePoint & 0x3F)));
            }
        }
        return out;
    }

    // Table/column names are ASCII; widen by simple extension.
    std::wstring AsciiToWide(const std::string& text)
    {
        return std::wstring(text.begin(), text.end());
    }

    std::string ToUpperAscii(std::string text)
    {
        for (char& c : text)
        {
            if (c >= 'a' && c <= 'z')
            {
                c = static_cast<char>(c - 'a' + 'A');
            }
        }
        return text;
    }

    std::string ToLowerAscii(std::string text)
    {
        for (char& c : text)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = static_cast<char>(c - 'A' + 'a');
            }
        }
        return text;
    }

    bool EndsWith(const std::string& text, const std::string& suffix)
    {
        return text.size() >= suffix.size() &&
               text.compare(text.size() - suffix.size(), suffix.size(), suffix) == 0;
    }

    bool CaseInsensitiveLess(const std::string& a, const std::string& b)
    {
        return ToLowerAscii(a) < ToLowerAscii(b);
    }

    // ---- number formatting -------------------------------------------------

    std::wstring FormatNumber(double value)
    {
        if (std::isnan(value))
        {
            return L"NaN";
        }
        if (std::isinf(value))
        {
            return value > 0 ? L"Infinity" : L"-Infinity";
        }

        if (value == std::floor(value) && std::fabs(value) < 9.0e15)
        {
            return std::to_wstring(static_cast<long long>(value));
        }

        wchar_t buffer[64] = {};
        std::swprintf(buffer, 64, L"%.6f", value);
        std::wstring text(buffer);

        // Trim trailing zeros, then a dangling decimal point.
        const size_t dot = text.find(L'.');
        if (dot != std::wstring::npos)
        {
            size_t end = text.size();
            while (end > dot + 1 && text[end - 1] == L'0')
            {
                --end;
            }
            if (end == dot + 1)
            {
                end = dot;
            }
            text.resize(end);
        }
        return text;
    }

    // ---- search helpers ----------------------------------------------------

    std::wstring ToLowerWide(const std::wstring& text)
    {
        std::wstring out(text);
        for (wchar_t& c : out)
        {
            c = static_cast<wchar_t>(std::towlower(c));
        }
        return out;
    }

    // `needleLower` must already be lower-cased and non-empty.
    bool ContainsCI(const std::wstring& haystack, const std::wstring& needleLower)
    {
        const size_t n = needleLower.size();
        if (haystack.size() < n)
        {
            return false;
        }

        const wchar_t first = needleLower[0];
        for (size_t i = 0; i + n <= haystack.size(); ++i)
        {
            if (static_cast<wchar_t>(std::towlower(haystack[i])) != first)
            {
                continue;
            }
            size_t j = 1;
            while (j < n && static_cast<wchar_t>(std::towlower(haystack[i + j])) == needleLower[j])
            {
                ++j;
            }
            if (j == n)
            {
                return true;
            }
        }
        return false;
    }

    // ---- JSON helpers ------------------------------------------------------

    std::wstring CompactJson(const rapidjson::Value& value)
    {
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
        value.Accept(writer);
        return Utf8ToWide(buffer.GetString(), buffer.GetSize());
    }

    bool ReadWholeFile(const std::wstring& path, std::string& contents)
    {
        // One read straight into the buffer (no stringstream copy).
        std::ifstream in(path, std::ios::binary);
        if (!in.is_open())
        {
            return false;
        }
        in.seekg(0, std::ios::end);
        const std::streamoff size = in.tellg();
        if (size < 0)
        {
            return false;
        }
        in.seekg(0, std::ios::beg);
        contents.resize(static_cast<size_t>(size));
        if (size > 0)
        {
            in.read(&contents[0], static_cast<std::streamsize>(size));
            if (!in)
            {
                return false;
            }
        }
        return true;
    }

    const GameDataCell& NullCell()
    {
        static const GameDataCell cell;
        return cell;
    }
}

// =============================================================================
// GameDataTable
// =============================================================================

size_t GameDataTable::RowCount() const
{
    return m_rowCount;
}

size_t GameDataTable::ColumnCount() const
{
    return Columns.size();
}

const GameDataCell& GameDataTable::Cell(size_t row, size_t col) const
{
    const size_t cols = Columns.size();
    if (row >= m_rowCount || col >= cols)
    {
        return NullCell();
    }
    return m_cells[row * cols + col];
}

std::wstring GameDataTable::CellText(size_t row, size_t col) const
{
    const GameDataCell& cell = Cell(row, col);
    switch (cell.kind)
    {
    case GameDataCellKind::Null:
        return std::wstring();
    case GameDataCellKind::Bool:
        return cell.number != 0.0 ? L"true" : L"false";
    case GameDataCellKind::Int:
    case GameDataCellKind::Double:
        return FormatNumber(cell.number);
    case GameDataCellKind::String:
    case GameDataCellKind::Array:
    case GameDataCellKind::Object:
        return cell.text < TextPool.size() ? TextPool[cell.text] : std::wstring();
    }
    return std::wstring();
}

int GameDataTable::FindColumn(const std::string& name) const
{
    for (size_t i = 0; i < Columns.size(); ++i)
    {
        if (Columns[i] == name)
        {
            return static_cast<int>(i);
        }
    }
    return -1;
}

uint32_t GameDataTable::Intern(const std::wstring& text)
{
    auto found = m_intern.find(text);
    if (found != m_intern.end())
    {
        return found->second;
    }
    const uint32_t index = static_cast<uint32_t>(TextPool.size());
    TextPool.push_back(text);
    m_intern.emplace(text, index);
    return index;
}

void GameDataTable::Clear()
{
    Columns.clear();
    ColumnKinds.clear();
    TextPool.clear();
    m_cells.clear();
    m_rowCount = 0;
    m_intern.clear();
}

bool GameDataTable::Load(const std::wstring& path, std::string& error, const std::vector<std::string>* onlyColumns)
{
    Clear();
    Path = path;
    error.clear();

    std::string contents;
    if (!ReadWholeFile(path, contents))
    {
        error = "Could not open " + WideToUtf8(path);
        return false;
    }

    // In-situ parse: strings in the DOM point into `contents` (declared first,
    // so it outlives `document`) instead of being copied.
    rapidjson::Document document;
    document.ParseInsitu(&contents[0]);
    if (document.HasParseError())
    {
        error = std::string("JSON parse error: ") + rapidjson::GetParseError_En(document.GetParseError()) +
                " at offset " + std::to_string(document.GetErrorOffset());
        return false;
    }
    if (!document.IsArray())
    {
        error = "The root element is not a JSON array";
        return false;
    }

    // Column lookup keys are views into the DOM's member names (valid while
    // `document` lives), so no std::string is built per member.
    using View = std::string_view;
    const bool lite = (onlyColumns != nullptr);

    std::unordered_map<View, int> wanted;          // lite mode: requested columns (views into *onlyColumns)
    if (lite)
    {
        wanted.reserve(onlyColumns->size() * 2);
        for (const std::string& name : *onlyColumns)
        {
            wanted.emplace(View(name), 1);
        }
    }

    // Pass 1: kept columns in first-appearance order. Rows almost always list
    // their members in the same order, so each member position remembers the
    // name it last saw (expName) and the column it mapped to (expCol, -1 =
    // skipped); a matching name needs no hashing. Lite mode stops as soon as
    // every requested column has been seen.
    std::unordered_map<View, int> columnIndex;
    std::vector<View> expName;
    std::vector<int> expCol;
    for (const rapidjson::Value& row : document.GetArray())
    {
        if (!row.IsObject())
        {
            continue;
        }

        size_t k = 0;
        for (auto it = row.MemberBegin(); it != row.MemberEnd(); ++it, ++k)
        {
            const View name(it->name.GetString(), it->name.GetStringLength());
            if (k < expName.size() && expName[k] == name)
            {
                continue;   // already resolved (kept or skipped) at this position
            }

            int col = -1;
            if (!lite || wanted.find(name) != wanted.end())
            {
                auto found = columnIndex.find(name);
                if (found == columnIndex.end())
                {
                    col = static_cast<int>(Columns.size());
                    columnIndex.emplace(name, col);
                    Columns.emplace_back(name);
                }
                else
                {
                    col = found->second;
                }
            }

            if (k >= expName.size())
            {
                expName.resize(k + 1);
                expCol.resize(k + 1, -1);
            }
            expName[k] = name;
            expCol[k]  = col;
        }

        if (lite && columnIndex.size() == wanted.size())
        {
            break;
        }
    }

    const size_t cols = Columns.size();
    const size_t rows = document.Size();
    m_rowCount = rows;
    m_cells.assign(rows * cols, GameDataCell());

    // Strings are interned (deduplicated) into one pool; reserve up front so
    // the pool and its hash map do not rehash repeatedly on a big table.
    if (cols > 0)
    {
        const size_t reserveCount = std::min<size_t>(rows * 2, 524288);
        TextPool.reserve(reserveCount);
        m_intern.reserve(reserveCount);
    }
    expName.clear();
    expCol.clear();

    // Per-column kind tracking.
    std::vector<unsigned char> sawBool(cols, 0), sawNumber(cols, 0), sawNonIntegral(cols, 0), sawOther(cols, 0);

    // Pass 2: fill cells.
    size_t rowIndex = 0;
    for (const rapidjson::Value& row : document.GetArray())
    {
        GameDataCell* cells = (cols > 0) ? &m_cells[rowIndex * cols] : nullptr;
        ++rowIndex;

        if (cells == nullptr || !row.IsObject())
        {
            continue;   // leaves the whole row Null
        }

        size_t k = 0;
        for (auto it = row.MemberBegin(); it != row.MemberEnd(); ++it, ++k)
        {
            const View name(it->name.GetString(), it->name.GetStringLength());

            int colIndex;
            if (k < expName.size() && expName[k] == name)
            {
                colIndex = expCol[k];
            }
            else
            {
                auto found = columnIndex.find(name);
                colIndex = (found == columnIndex.end()) ? -1 : found->second;
                if (k >= expName.size())
                {
                    expName.resize(k + 1);
                    expCol.resize(k + 1, -1);
                }
                expName[k] = name;
                expCol[k]  = colIndex;
            }

            if (colIndex < 0)
            {
                continue;   // column not kept: nothing is converted or interned
            }

            const uint32_t col = static_cast<uint32_t>(colIndex);
            GameDataCell& cell = cells[col];
            const rapidjson::Value& value = it->value;

            if (value.IsNull())
            {
                cell.kind = GameDataCellKind::Null;
            }
            else if (value.IsBool())
            {
                cell.kind = GameDataCellKind::Bool;
                cell.number = value.GetBool() ? 1.0 : 0.0;
                sawBool[col] = 1;
            }
            else if (value.IsInt64())
            {
                cell.kind = GameDataCellKind::Int;
                cell.number = static_cast<double>(value.GetInt64());
                sawNumber[col] = 1;
            }
            else if (value.IsUint64())
            {
                cell.kind = GameDataCellKind::Int;
                cell.number = static_cast<double>(value.GetUint64());
                sawNumber[col] = 1;
            }
            else if (value.IsNumber())
            {
                const double d = value.GetDouble();
                cell.kind = GameDataCellKind::Double;
                cell.number = d;
                sawNumber[col] = 1;
                if (d != std::floor(d))
                {
                    sawNonIntegral[col] = 1;
                }
            }
            else if (value.IsString())
            {
                cell.kind = GameDataCellKind::String;
                cell.text = Intern(Utf8ToWide(value.GetString(), value.GetStringLength()));
                sawOther[col] = 1;
            }
            else if (value.IsArray())
            {
                cell.kind = GameDataCellKind::Array;
                cell.text = Intern(CompactJson(value));
                sawOther[col] = 1;
            }
            else if (value.IsObject())
            {
                cell.kind = GameDataCellKind::Object;
                cell.text = Intern(CompactJson(value));
                sawOther[col] = 1;
            }
        }
    }

    ColumnKinds.resize(cols, GameDataCellKind::String);
    for (size_t c = 0; c < cols; ++c)
    {
        if (sawOther[c])
        {
            ColumnKinds[c] = GameDataCellKind::String;
        }
        else if (sawBool[c] && !sawNumber[c])
        {
            ColumnKinds[c] = GameDataCellKind::Bool;
        }
        else if (sawNumber[c] && !sawBool[c])
        {
            ColumnKinds[c] = sawNonIntegral[c] ? GameDataCellKind::Double : GameDataCellKind::Int;
        }
        else
        {
            ColumnKinds[c] = GameDataCellKind::String;   // mixed bool/number, or all null
        }
    }

    // The intern map is only needed while loading; drop it to free memory.
    std::unordered_map<std::wstring, uint32_t>().swap(m_intern);
    return true;
}

// =============================================================================
// GameDataStore
// =============================================================================

std::string GameDataStore::Key(const std::string& name)
{
    return ToUpperAscii(name);
}

void GameDataStore::SetDataRoot(const std::wstring& dataDir)
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_dataRoot = dataDir;
    while (!m_dataRoot.empty() && (m_dataRoot.back() == L'\\' || m_dataRoot.back() == L'/'))
    {
        m_dataRoot.pop_back();
    }
    UnloadAll();
}

const std::wstring& GameDataStore::DataRoot() const
{
    return m_dataRoot;
}

std::vector<std::string> GameDataStore::ListTables() const
{
    std::vector<std::string> names;
    std::wstring root;
    {
        std::lock_guard<std::recursive_mutex> lock(m_mutex);
        root = m_dataRoot;
    }
    if (root.empty())
    {
        return names;
    }

    Win32FindDataW data = {};
    const std::wstring pattern = root + L"\\*.json";
    void* handle = ::FindFirstFileW(pattern.c_str(), &data);
    if (handle == kInvalidHandleValue)
    {
        return names;
    }

    do
    {
        if (data.dwFileAttributes & kFileAttributeDirectory)
        {
            continue;
        }
        std::wstring fileName(data.cFileName);
        // "*.json" also matches e.g. "*.jsonx" on some filesystems; re-check.
        if (fileName.size() < 5)
        {
            continue;
        }
        std::wstring ext = ToLowerWide(fileName.substr(fileName.size() - 5));
        if (ext != L".json")
        {
            continue;
        }
        names.push_back(WideToUtf8(fileName.substr(0, fileName.size() - 5)));
    }
    while (::FindNextFileW(handle, &data));

    ::FindClose(handle);

    std::sort(names.begin(), names.end(), CaseInsensitiveLess);
    return names;
}

std::shared_ptr<GameDataTable> GameDataStore::GetTable(const std::string& name, std::string& error)
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    error.clear();
    const std::string key = Key(name);

    auto found = m_tables.find(key);
    if (found != m_tables.end())
    {
        return found->second;
    }

    if (m_dataRoot.empty())
    {
        error = "Data folder is not set";
        return nullptr;
    }

    auto table = std::make_shared<GameDataTable>();
    table->Name = name;
    const std::wstring path = m_dataRoot + L"\\" + AsciiToWide(name) + L".json";
    StudioLogNative((L"Loading table " + AsciiToWide(name) + L"  <-  " + path).c_str());
    const auto loadStart = std::chrono::steady_clock::now();
    const bool loaded = table->Load(path, error);
    const long long loadMs = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - loadStart).count();
    if (!loaded)
    {
        StudioLogNative((L"FAILED to load table " + AsciiToWide(name) + L" after " + std::to_wstring(loadMs) + L" ms: " + AsciiToWide(error)).c_str());
        return nullptr;
    }
    StudioLogNative((L"Loaded table " + AsciiToWide(name) + L" in " + std::to_wstring(loadMs) + L" ms").c_str());

    m_tables.emplace(key, table);
    return table;
}

std::shared_ptr<GameDataTable> GameDataStore::GetLoadedTable(const std::string& name) const
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    auto found = m_tables.find(Key(name));
    return found != m_tables.end() ? found->second : nullptr;
}

std::shared_ptr<GameDataTable> GameDataStore::GetLiteTable(const std::string& name, const std::vector<std::string>& columns, std::string& error)
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    error.clear();

    std::string key = Key(name) + "|lite|";
    for (size_t i = 0; i < columns.size(); ++i)
    {
        if (i > 0)
        {
            key.push_back(',');
        }
        key += columns[i];
    }

    auto found = m_lite.find(key);
    if (found != m_lite.end())
    {
        return found->second;
    }

    if (m_dataRoot.empty())
    {
        error = "Data folder is not set";
        return nullptr;
    }

    auto table = std::make_shared<GameDataTable>();
    table->Name = name;
    const std::wstring path = m_dataRoot + L"\\" + AsciiToWide(name) + L".json";
    StudioLogNative((L"Loading table (lite, " + std::to_wstring(columns.size()) + L" columns) " + AsciiToWide(name) + L"  <-  " + path).c_str());
    const auto loadStart = std::chrono::steady_clock::now();
    const bool loaded = table->Load(path, error, &columns);
    const long long loadMs = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - loadStart).count();
    if (!loaded)
    {
        StudioLogNative((L"FAILED to load table (lite) " + AsciiToWide(name) + L" after " + std::to_wstring(loadMs) + L" ms: " + AsciiToWide(error)).c_str());
        return nullptr;
    }
    StudioLogNative((L"Loaded table (lite) " + AsciiToWide(name) + L" in " + std::to_wstring(loadMs) + L" ms").c_str());

    m_lite.emplace(key, table);
    return table;
}

namespace
{
    // {"StringId","TextKr","ENG"} plus `lang` when it is a different column.
    std::vector<std::string> StringColumns(const std::string& lang)
    {
        std::vector<std::string> columns = { "StringId", "TextKr", "ENG" };
        if (!lang.empty() && lang != "TextKr" && lang != "ENG" && lang != "StringId")
        {
            columns.push_back(lang);
        }
        return columns;
    }
}

std::shared_ptr<GameDataTable> GameDataStore::GetLiteStringMessage(const std::string& lang, std::string& error)
{
    return GetLiteTable("STRING_MESSAGE", StringColumns(lang), error);
}

void GameDataStore::Unload(const std::string& name)
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);

    const std::string key = Key(name);
    m_tables.erase(key);

    const std::string litePrefix = key + "|lite|";
    for (auto it = m_lite.begin(); it != m_lite.end();)
    {
        if (it->first.compare(0, litePrefix.size(), litePrefix) == 0)
        {
            it = m_lite.erase(it);
        }
        else
        {
            ++it;
        }
    }

    if (key == "STRING_TEMPLATE")
    {
        ClearStringIndexes();
    }
}

void GameDataStore::UnloadAll()
{
    std::lock_guard<std::recursive_mutex> lock(m_mutex);
    m_tables.clear();
    m_lite.clear();
    ClearStringIndexes();
}

void GameDataStore::ClearStringIndexes()
{
    m_stringIndexes.clear();
    m_lastLang.clear();
    m_lastIndex = nullptr;
}

// Returns the StringId index for `lang`, building it (and its lite table) on
// first use. ENG and TextKr share one table. A failed build is remembered as
// an entry with a null table, so it is not retried on every lookup.
GameDataStore::StringIndex* GameDataStore::EnsureStringIndex(const std::string& lang)
{
    if (m_lastIndex != nullptr && lang == m_lastLang)
    {
        return m_lastIndex;
    }

    const bool shared = (lang == "ENG" || lang == "TextKr");
    const std::string group = shared ? std::string("ENG") : lang;

    auto found = m_stringIndexes.find(group);
    if (found == m_stringIndexes.end())
    {
        StringIndex& index = m_stringIndexes[group];

        std::string error;
        std::shared_ptr<GameDataTable> strings = GetLiteTable("STRING_TEMPLATE", StringColumns(lang), error);
        if (strings)
        {
            const int idColumn = strings->FindColumn("StringId");
            if (idColumn >= 0)
            {
                const size_t rows = strings->RowCount();
                index.rows.reserve(rows);
                for (size_t r = 0; r < rows; ++r)
                {
                    const GameDataCell& cell = strings->Cell(r, static_cast<size_t>(idColumn));
                    if (cell.kind == GameDataCellKind::Int || cell.kind == GameDataCellKind::Double)
                    {
                        index.rows.emplace(static_cast<int64_t>(cell.number), static_cast<uint32_t>(r));
                    }
                }
                if (!index.rows.empty())
                {
                    index.table = strings;
                }
            }
        }
        found = m_stringIndexes.find(group);
    }

    StringIndex* index = (found->second.table != nullptr) ? &found->second : nullptr;
    if (index != nullptr)
    {
        m_lastLang  = lang;
        m_lastIndex = index;
    }
    return index;
}

bool GameDataStore::TryResolveString(int64_t stringId, const std::string& lang, std::wstring& out)
{
    // The lock is held for the whole lookup so the index cannot be cleared
    // underneath us; it is uncontended and recursive, so it costs ~nothing.
    std::lock_guard<std::recursive_mutex> lock(m_mutex);

    StringIndex* index = EnsureStringIndex(lang);
    if (index == nullptr)
    {
        return false;
    }

    int langColumn;
    auto cached = index->langCols.find(lang);
    if (cached != index->langCols.end())
    {
        langColumn = cached->second;
    }
    else
    {
        langColumn = index->table->FindColumn(lang);
        index->langCols.emplace(lang, langColumn);
    }
    if (langColumn < 0)
    {
        return false;
    }

    auto found = index->rows.find(stringId);
    if (found == index->rows.end())
    {
        return false;
    }

    out = index->table->CellText(found->second, static_cast<size_t>(langColumn));
    return true;
}
bool GameDataStore::IsStringIdColumn(const std::string& tableName, const std::string& columnName)
{
    if (ToUpperAscii(tableName).compare(0, 7, "STRING_") == 0)
    {
        return false;
    }
    if (columnName == "BuffName" || columnName == "BuffExplain")
    {
        return true;
    }
    const std::string lower = ToLowerAscii(columnName);
    return EndsWith(lower, "sid") || EndsWith(lower, "stringid");
}

GameDataSearchResult GameDataStore::Search(const GameDataTable& table, const std::wstring& needle, const std::string& lang, size_t maxResults)
{
    GameDataSearchResult result;
    const size_t rows = table.RowCount();
    const size_t cols = table.ColumnCount();

    if (needle.empty())
    {
        result.totalMatches = rows;
        const size_t take = std::min(rows, maxResults);
        result.rows.reserve(take);
        for (size_t r = 0; r < take; ++r)
        {
            result.rows.push_back(static_cast<uint32_t>(r));
        }
        return result;
    }

    const std::wstring needleLower = ToLowerWide(needle);

    std::vector<unsigned char> isStringId(cols, 0);
    for (size_t c = 0; c < cols; ++c)
    {
        isStringId[c] = IsStringIdColumn(table.Name, table.Columns[c]) ? 1 : 0;
    }

    std::wstring resolved;
    for (size_t r = 0; r < rows; ++r)
    {
        bool matched = false;
        for (size_t c = 0; c < cols && !matched; ++c)
        {
            const GameDataCell& cell = table.Cell(r, c);
            switch (cell.kind)
            {
            case GameDataCellKind::Null:
                break;
            case GameDataCellKind::String:
            case GameDataCellKind::Array:
            case GameDataCellKind::Object:
                if (cell.text < table.TextPool.size() && ContainsCI(table.TextPool[cell.text], needleLower))
                {
                    matched = true;
                }
                break;
            case GameDataCellKind::Bool:
            case GameDataCellKind::Int:
            case GameDataCellKind::Double:
                if (ContainsCI(table.CellText(r, c), needleLower))
                {
                    matched = true;
                }
                else if (isStringId[c] && cell.kind != GameDataCellKind::Bool && cell.number != 0.0 &&
                         TryResolveString(static_cast<int64_t>(cell.number), lang, resolved) &&
                         ContainsCI(resolved, needleLower))
                {
                    matched = true;
                }
                break;
            }
        }

        if (matched)
        {
            ++result.totalMatches;
            if (result.rows.size() < maxResults)
            {
                result.rows.push_back(static_cast<uint32_t>(r));
            }
        }
    }

    return result;
}
