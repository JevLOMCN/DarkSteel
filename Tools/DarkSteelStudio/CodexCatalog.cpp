#include "CodexCatalog.h"
#include "StudioLog.h"
#include "CodexIconCache.h"
#include "GameDataStore.h"
#include "GameDataEnums.h"
#include "StageMapData.h"

#include <msclr/lock.h>
#include <msclr/marshal_cppstd.h>

#include <cstdint>
#include <cstring>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Windows::Media;

    // =========================================================================
    // Local helpers (free functions; managed handles as parameters/returns are
    // fine here, but nothing managed is ever captured or stored natively).
    // =========================================================================
    namespace {

        std::string ToUtf8(String^ value)
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

        String^ FromUtf8(const std::string& value)
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

        String^ FromWide(const std::wstring& value)
        {
            if (value.empty())
            {
                return String::Empty;
            }
            return gcnew String(value.c_str());
        }

        // Loads a table or throws with the native error text.
        std::shared_ptr<GameDataTable> RequireTable(GameDataStore* store, const char* name)
        {
            std::string error;
            std::shared_ptr<GameDataTable> table = store->GetTable(name, error);
            if (!table)
            {
                throw gcnew InvalidOperationException(gcnew String(name) + ": " + FromUtf8(error));
            }
            return table;
        }

        // Loads only the listed columns of a table (cached in the store, much
        // cheaper than the full table) or throws with the native error text.
        std::shared_ptr<GameDataTable> RequireLite(GameDataStore* store, const char* name, const std::vector<std::string>& columns)
        {
            std::string error;
            std::shared_ptr<GameDataTable> table = store->GetLiteTable(name, columns, error);
            if (!table)
            {
                throw gcnew InvalidOperationException(gcnew String(name) + ": " + FromUtf8(error));
            }
            return table;
        }

        // First integer inside array text such as "[0]" / "[123, 45]", read
        // straight from the native text pool with no managed allocation.
        long long FirstNumberInText(const std::wstring& text)
        {
            const size_t n = text.size();
            for (size_t i = 0; i < n; ++i)
            {
                const wchar_t c = text[i];
                const bool negative = (c == L'-' && i + 1 < n && text[i + 1] >= L'0' && text[i + 1] <= L'9');
                if ((c >= L'0' && c <= L'9') || negative)
                {
                    size_t j = negative ? i + 1 : i;
                    long long value = 0;
                    while (j < n && text[j] >= L'0' && text[j] <= L'9')
                    {
                        value = value * 10 + (text[j] - L'0');
                        ++j;
                    }
                    return negative ? -value : value;
                }
            }
            return 0;
        }

        // Numeric value of the first element of an Array/String cell, or the
        // number itself for numeric cells. 0 for null/empty.
        long long FirstArrayNumberCell(const GameDataTable& table, size_t row, int col)
        {
            if (col < 0)
            {
                return 0;
            }
            const GameDataCell& cell = table.Cell(row, static_cast<size_t>(col));
            switch (cell.kind)
            {
            case GameDataCellKind::Array:
            case GameDataCellKind::String:
                return (cell.text < table.TextPool.size()) ? FirstNumberInText(table.TextPool[cell.text]) : 0;
            case GameDataCellKind::Int:
            case GameDataCellKind::Double:
            case GameDataCellKind::Bool:
                return static_cast<long long>(cell.number);
            default:
                return 0;
            }
        }

        // True when any element of an Array/String cell (or the numeric value
        // itself) is a positive integer. Scans the native text, no allocation.
        bool AnyPositiveNumberCell(const GameDataTable& table, size_t row, int col)
        {
            if (col < 0)
            {
                return false;
            }
            const GameDataCell& cell = table.Cell(row, static_cast<size_t>(col));
            switch (cell.kind)
            {
            case GameDataCellKind::Array:
            case GameDataCellKind::String:
            {
                if (cell.text >= table.TextPool.size())
                {
                    return false;
                }
                const std::wstring& text = table.TextPool[cell.text];
                for (size_t i = 0; i < text.size(); ++i)
                {
                    // A digit run counts unless it is negative or all zeros.
                    if (text[i] >= L'1' && text[i] <= L'9' && (i == 0 || text[i - 1] != L'-'))
                    {
                        return true;
                    }
                    if (text[i] == L'-')
                    {
                        while (i + 1 < text.size() && text[i + 1] >= L'0' && text[i + 1] <= L'9')
                        {
                            ++i;   // skip the negative number's digits
                        }
                    }
                }
                return false;
            }
            case GameDataCellKind::Int:
            case GameDataCellKind::Double:
                return cell.number > 0.0;
            default:
                return false;
            }
        }

        // Numeric cell, tolerant of tables (STATUS) that store numbers as JSON strings.
        long long CellInt(const GameDataTable& table, size_t row, int col)
        {
            if (col < 0)
            {
                return 0;
            }
            const GameDataCell& cell = table.Cell(row, static_cast<size_t>(col));
            switch (cell.kind)
            {
            case GameDataCellKind::Int:
            case GameDataCellKind::Double:
            case GameDataCellKind::Bool:
                return static_cast<long long>(cell.number);
            case GameDataCellKind::String:
            {
                String^ text = FromWide(table.CellText(row, static_cast<size_t>(col)))->Trim();
                long long parsed = 0;
                if (Int64::TryParse(text, parsed))
                {
                    return parsed;
                }
                double asDouble = 0.0;
                if (Double::TryParse(text, System::Globalization::NumberStyles::Float,
                                     System::Globalization::CultureInfo::InvariantCulture, asDouble))
                {
                    return static_cast<long long>(asDouble);
                }
                return 0;
            }
            default:
                return 0;
            }
        }

        bool CellBool(const GameDataTable& table, size_t row, int col)
        {
            if (col < 0)
            {
                return false;
            }
            const GameDataCell& cell = table.Cell(row, static_cast<size_t>(col));
            if (cell.kind == GameDataCellKind::String)
            {
                String^ text = FromWide(table.CellText(row, static_cast<size_t>(col)))->Trim();
                if (String::Equals(text, "true", StringComparison::OrdinalIgnoreCase))
                {
                    return true;
                }
                long long parsed = 0;
                return Int64::TryParse(text, parsed) && parsed != 0;
            }
            return cell.kind != GameDataCellKind::Null && cell.number != 0.0;
        }

        String^ CellStr(const GameDataTable& table, size_t row, int col)
        {
            if (col < 0)
            {
                return String::Empty;
            }
            return FromWide(table.CellText(row, static_cast<size_t>(col)));
        }

        // Pulls the integers out of array text such as "[0]" or "[123, 45]".
        List<long long>^ ArrayNumbers(String^ text)
        {
            List<long long>^ numbers = gcnew List<long long>();
            if (String::IsNullOrEmpty(text))
            {
                return numbers;
            }
            int i = 0;
            while (i < text->Length)
            {
                wchar_t c = text[i];
                if (Char::IsDigit(c) || (c == L'-' && i + 1 < text->Length && Char::IsDigit(text[i + 1])))
                {
                    int start = i;
                    ++i;
                    while (i < text->Length && Char::IsDigit(text[i]))
                    {
                        ++i;
                    }
                    long long value = 0;
                    if (Int64::TryParse(text->Substring(start, i - start), value))
                    {
                        numbers->Add(value);
                    }
                }
                else
                {
                    ++i;
                }
            }
            return numbers;
        }

        long long FirstArrayNumber(String^ text)
        {
            List<long long>^ numbers = ArrayNumbers(text);
            return numbers->Count > 0 ? numbers[0] : 0LL;
        }

        bool AnyArrayNumberPositive(String^ text)
        {
            for each (long long value in ArrayNumbers(text))
            {
                if (value > 0)
                {
                    return true;
                }
            }
            return false;
        }

        // STRING_TEMPLATE text in `lang`, falling back to TextKr; "" when unknown.
        String^ ResolveTemplate(GameDataStore* store, long long sid, const std::string& lang)
        {
            if (sid <= 0)
            {
                return String::Empty;
            }
            std::wstring text;
            if (store->TryResolveString(static_cast<int64_t>(sid), lang, text) && !text.empty())
            {
                return FromWide(text)->Trim();
            }
            if (lang != "TextKr" && store->TryResolveString(static_cast<int64_t>(sid), "TextKr", text) && !text.empty())
            {
                return FromWide(text)->Trim();
            }
            return String::Empty;
        }

        // Item names/descriptions: STRING_TEMPLATE first, then STRING_MESSAGE
        // (the site does the same: tpl.get(k) || msg.get(k) || "").
        String^ ResolveItemString(GameDataStore* store, long long sid, const std::string& lang,
                                  const GameDataTable* messages, const std::unordered_map<long long, uint32_t>& messageRows, int messageLangCol)
        {
            String^ text = ResolveTemplate(store, sid, lang);
            if (!String::IsNullOrEmpty(text) || messages == nullptr || messageLangCol < 0)
            {
                return text;
            }
            auto found = messageRows.find(sid);
            if (found == messageRows.end())
            {
                return String::Empty;
            }
            return CellStr(*messages, found->second, messageLangCol)->Trim();
        }

        // Descriptions carry literal "\r\n" / "\n" escape sequences.
        String^ CleanDescription(String^ text)
        {
            if (String::IsNullOrEmpty(text))
            {
                return String::Empty;
            }
            return text->Replace("\\r\\n", "\n")->Replace("\\n", "\n")->Trim();
        }

        String^ YesNo(bool value, String^ yes, String^ no)
        {
            return value ? yes : no;
        }

        // CDN folder that holds the stage minimaps (see CodexIconCache).
        const wchar_t* kMapsBase = L"https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%204/Images/maps/";
        const int kMaxMonsterPois = 4000;
        const int kMaxObjectPois  = 4000;

        // World coordinate -> percentage of the minimap image; false when outside it.
        bool ToPercent(const StageBounds& b, double wx, double wy, double& px, double& py)
        {
            const double spanX = b.rbX - b.ltX;
            const double spanY = b.rbY - b.ltY;
            if (spanX == 0.0 || spanY == 0.0)
            {
                return false;
            }
            px = (wx - b.ltX) / spanX * 100.0;
            py = (wy - b.ltY) / spanY * 100.0;
            return px >= 0.0 && px <= 100.0 && py >= 0.0 && py <= 100.0;
        }

        StagePoi^ NewPoi(String^ type, String^ name, double x, double y)
        {
            StagePoi^ poi = gcnew StagePoi();
            poi->Type            = type;
            poi->Name            = name;
            poi->X               = x;
            poi->Y               = y;
            poi->TargetStageId   = 0;
            poi->TargetStageName = String::Empty;
            poi->Level           = 0;
            poi->Grade           = 0;
            poi->Count           = 0;
            poi->MonsterId       = 0;
            poi->IconUrl         = String::Empty;
            poi->Title           = String::Empty;
            poi->WorldX          = 0.0;
            poi->WorldY          = 0.0;
            poi->WorldZ          = 0.0;
            poi->HasWorldZ       = false;
            poi->EntityId        = 0;
            poi->WarpId          = 0;
            poi->ArrivalStageId  = 0;
            poi->ArrivalX        = 0.0;
            poi->ArrivalY        = 0.0;
            poi->ArrivalZ        = 0.0;
            poi->HasArrival      = false;
            return poi;
        }

        String^ AppendNotice(String^ notice, String^ more)
        {
            if (String::IsNullOrEmpty(notice))
            {
                return more;
            }
            return notice + " " + more;
        }

        String^ N0(long long value)
        {
            return String::Format("{0:N0}", value);
        }

        // "EObject_GatherType::ORE" -> "Ore" (ReMir GATHER_LABEL); NONE -> "".
        String^ GatherLabel(String^ raw)
        {
            if (String::IsNullOrEmpty(raw))
            {
                return String::Empty;
            }
            String^ code = raw;
            int sep = raw->LastIndexOf("::");
            if (sep >= 0)
            {
                code = raw->Substring(sep + 2);
            }
            code = code->Trim();
            if (code->Length == 0 || String::Equals(code, "NONE", StringComparison::OrdinalIgnoreCase))
            {
                return String::Empty;
            }
            if (code == "BOX")               return "Box";
            if (code == "ORE")               return "Ore";
            if (code == "PLANTS")            return "Plants";
            if (code == "BLACKIRON")         return "Black Iron";
            if (code == "JINKI")             return "Jinki";
            if (code == "BALL")              return "Ball";
            if (code == "DEADVALLEY_BALL")   return "Dead Valley Ball";
            if (code == "MULTY_INTERACTION") return "Multi Interaction";
            if (code == "STORAGE_OBJECT")    return "Storage";
            return code;
        }

        bool MatchesSearch(CodexEntry^ entry, String^ needle)
        {
            if (String::IsNullOrEmpty(needle))
            {
                return true;
            }
            if (entry->Name != nullptr && entry->Name->IndexOf(needle, StringComparison::OrdinalIgnoreCase) >= 0)
            {
                return true;
            }
            long long id = entry->Id;
            return id.ToString()->StartsWith(needle);
        }

        // Points the visible cards at the disk-cached copy of their CDN icon
        // (queuing a background download for missing ones). Always derived from
        // SourceIconUrl so repeated queries over the shared entries stay correct.
        void ApplyIcons(List<CodexEntry^>^ entries)
        {
            for each (CodexEntry^ entry in entries)
            {
                if (!String::IsNullOrEmpty(entry->SourceIconUrl))
                {
                    entry->IconUrl = IconCache::Resolve(entry->SourceIconUrl);
                }
            }
        }

        CodexPage^ MakePage(List<CodexEntry^>^ all, int page, int pageSize)
        {
            CodexPage^ result = gcnew CodexPage();
            result->Total = all->Count;

            if (pageSize <= 0)
            {
                ApplyIcons(all);
                result->Entries = all;
                result->Page    = 1;
                result->Pages   = 1;
                return result;
            }

            int pages = Math::Max(1, (all->Count + pageSize - 1) / pageSize);
            page = Math::Max(1, Math::Min(page, pages));

            int start = (page - 1) * pageSize;
            int count = Math::Max(0, Math::Min(pageSize, all->Count - start));

            result->Entries = all->GetRange(start, count);
            ApplyIcons(result->Entries);
            result->Page    = page;
            result->Pages   = pages;
            return result;
        }
    }

    // Keeps the STRING_MESSAGE fallback lookup alive after the item list is
    // built so item descriptions can be resolved lazily in BuildDetail. Native
    // containers are held by pointer (C++/CLI forbids them as ref-class members).
    ref class ItemStringState {
    public:
        ItemStringState(std::shared_ptr<GameDataTable> table, int langCol)
            : m_table(new std::shared_ptr<GameDataTable>(table))
            , m_rows(new std::unordered_map<long long, uint32_t>())
            , m_langCol(langCol)
        {
        }

        ~ItemStringState() { this->!ItemStringState(); }
        !ItemStringState()
        {
            delete m_table; m_table = nullptr;
            delete m_rows;  m_rows  = nullptr;
        }

        const GameDataTable* Table() { return (m_table != nullptr) ? m_table->get() : nullptr; }
        std::unordered_map<long long, uint32_t>& Rows() { return *m_rows; }
        int LangCol() { return m_langCol; }

    private:
        std::shared_ptr<GameDataTable>*           m_table;
        std::unordered_map<long long, uint32_t>*  m_rows;
        int                                       m_langCol;
    };

    // Frozen grade brushes. Frozen Freezables are thread-safe, so the first use
    // may happen on the build thread.
    ref class GradeBrushCache abstract sealed {
    public:
        static Brush^ Get(int grade)
        {
            if (grade >= 1 && grade <= 6)
            {
                return s_brushes[grade];
            }
            return s_muted;
        }

    private:
        static array<Brush^>^ s_brushes;
        static Brush^ s_muted;

        static GradeBrushCache()
        {
            s_brushes = gcnew array<Brush^>(7);
            s_brushes[0] = Make(0x9A, 0x9B, 0xA6);
            s_brushes[1] = Make(0xE6, 0xE3, 0xDC); // Common
            s_brushes[2] = Make(0x63, 0xD4, 0x71); // Uncommon
            s_brushes[3] = Make(0x5A, 0xA9, 0xFF); // Rare
            s_brushes[4] = Make(0xC7, 0x7D, 0xFF); // Epic
            s_brushes[5] = Make(0xD9, 0xB2, 0x6A); // Legendary (gold)
            s_brushes[6] = Make(0xF0, 0x85, 0x7D); // Mystic
            s_muted = s_brushes[0];
        }

        static Brush^ Make(unsigned char r, unsigned char g, unsigned char b)
        {
            SolidColorBrush^ brush = gcnew SolidColorBrush(Color::FromRgb(r, g, b));
            brush->Freeze();
            return brush;
        }
    };

    // Comparers for List::Sort (delegates need managed static members).
    ref class CodexSort abstract sealed {
    public:
        static int Desc(long long a, long long b)
        {
            return (a > b) ? -1 : ((a < b) ? 1 : 0);
        }

        static int ByName(CodexEntry^ a, CodexEntry^ b)
        {
            return String::Compare(a->Name, b->Name, StringComparison::OrdinalIgnoreCase);
        }

        static int ItemByName(ItemEntry^ a, ItemEntry^ b)
        {
            return ByName(a, b);
        }

        static int ItemByGrade(ItemEntry^ a, ItemEntry^ b)
        {
            int c = Desc(a->Grade, b->Grade);
            if (c == 0) c = Desc(a->Tier, b->Tier);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int ItemByTier(ItemEntry^ a, ItemEntry^ b)
        {
            int c = Desc(a->Tier, b->Tier);
            if (c == 0) c = Desc(a->Grade, b->Grade);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int ItemByLevel(ItemEntry^ a, ItemEntry^ b)
        {
            int c = Desc(a->Level, b->Level);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        // Variant order inside a monster group: strongest first.
        static int MonsterVariant(MonsterEntry^ a, MonsterEntry^ b)
        {
            int c = Desc(a->Level, b->Level);
            if (c == 0) c = Desc(a->Grade, b->Grade);
            if (c == 0) c = Desc(a->Cp, b->Cp);
            if (c == 0) c = Desc(a->Hp, b->Hp);
            return c;
        }

        static int MonsterByLevel(MonsterEntry^ a, MonsterEntry^ b)
        {
            int c = Desc(a->Level, b->Level);
            if (c == 0) c = Desc(a->Grade, b->Grade);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int MapSpawnByCount(CodexMapSpawn^ a, CodexMapSpawn^ b)
        {
            int c = (b->Count > a->Count) ? 1 : ((b->Count < a->Count) ? -1 : 0);   // busiest map first
            if (c == 0) c = String::Compare(a->MapName, b->MapName, StringComparison::OrdinalIgnoreCase);
            return c;
        }

        static int MonsterByCp(MonsterEntry^ a, MonsterEntry^ b)
        {
            int c = Desc(a->Cp, b->Cp);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int MonsterByHp(MonsterEntry^ a, MonsterEntry^ b)
        {
            int c = Desc(a->Hp, b->Hp);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int MonsterByExp(MonsterEntry^ a, MonsterEntry^ b)
        {
            int c = Desc(a->Exp, b->Exp);
            if (c == 0) c = ByName(a, b);
            return c;
        }

        static int MonsterByName(MonsterEntry^ a, MonsterEntry^ b)
        {
            return ByName(a, b);
        }

        static int StageByName(StageEntry^ a, StageEntry^ b)
        {
            int c = ByName(a, b);
            if (c == 0) c = -Desc(a->Id, b->Id);   // ascending id
            return c;
        }

        static int StageById(StageEntry^ a, StageEntry^ b)
        {
            return -Desc(a->Id, b->Id);
        }

        static int StageByLevel(StageEntry^ a, StageEntry^ b)
        {
            int c = Desc(a->StageLevel, b->StageLevel);
            if (c == 0) c = StageByName(a, b);
            return c;
        }
    };

    // =========================================================================
    // CodexCatalog
    // =========================================================================

    CodexCatalog::CodexCatalog(GameDataBridge^ bridge)
    {
        if (bridge == nullptr)
        {
            throw gcnew ArgumentNullException("bridge");
        }
        m_buildLock = gcnew Object();   // must exist before Invalidate() takes it
        m_bridge = bridge;
        Lang     = "ENG";
        Invalidate();
    }

    void CodexCatalog::Invalidate()
    {
        msclr::lock guard(m_buildLock);   // waits for an in-flight build
        m_items       = nullptr;
        m_monsters    = nullptr;
        m_objects     = nullptr;
        m_npcs        = nullptr;
        m_stages      = nullptr;
        m_stageById   = nullptr;
        m_itemStrings = nullptr;
        m_itemById    = nullptr;
        m_nameTables  = nullptr;
        m_questStrings = nullptr;
        m_achievementNames = nullptr;
        ItemCount    = 0;
        MonsterCount = 0;
        ObjectCount  = 0;
        NpcCount     = 0;
        StageCount   = 0;
        ::StageMapData::ClearCache();   // MAPUI_MINI bounds cache (native)
    }

    bool CodexCatalog::IsBuilt(String^ mode)
    {
        if (String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase))    return m_items    != nullptr;
        if (String::Equals(mode, "monsters", StringComparison::OrdinalIgnoreCase)) return m_monsters != nullptr;
        if (String::Equals(mode, "objects", StringComparison::OrdinalIgnoreCase))  return m_objects  != nullptr;
        if (String::Equals(mode, "npcs", StringComparison::OrdinalIgnoreCase))     return m_npcs     != nullptr;
        if (String::Equals(mode, "maps", StringComparison::OrdinalIgnoreCase))     return m_stages   != nullptr;
        return true;   // "raw" and unknown modes have nothing to build
    }

    void CodexCatalog::Prewarm(String^ mode)
    {
        StudioLogScope logScope("CodexCatalog.Prewarm");
        // Monster/object/NPC cards only show an image when the CDN folder has
        // one, so load the folder indexes (disk cache or directory listing)
        // before building those lists. Items need no index.
        if (!String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase) &&
            !String::Equals(mode, "raw", StringComparison::OrdinalIgnoreCase))
        {
            IconCache::WarmIndexes();
        }

        if (String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase))         EnsureItems();
        else if (String::Equals(mode, "monsters", StringComparison::OrdinalIgnoreCase)) EnsureMonsters();
        else if (String::Equals(mode, "objects", StringComparison::OrdinalIgnoreCase))  EnsureObjects();
        else if (String::Equals(mode, "npcs", StringComparison::OrdinalIgnoreCase))     EnsureNpcs();
        else if (String::Equals(mode, "maps", StringComparison::OrdinalIgnoreCase))     EnsureStages();
    }

    Brush^ CodexCatalog::GradeBrush(int grade)
    {
        return GradeBrushCache::Get(grade);
    }

    String^ CodexCatalog::ItemGradeLabel(int grade)
    {
        switch (grade)
        {
        case 1:  return "Common";
        case 2:  return "Uncommon";
        case 3:  return "Rare";
        case 4:  return "Epic";
        case 5:  return "Legendary";
        case 6:  return "Mystic";
        default: return "Grade " + grade.ToString();
        }
    }

    String^ CodexCatalog::MonsterGradeLabel(int grade)
    {
        switch (grade)
        {
        case 0:
        case 1:  return "Normal";
        case 2:  return "Elite";
        case 3:  return "Named";
        case 4:  return "Boss";
        case 5:  return "Raid Boss";
        case 6:  return "World Boss";
        default: return "Grade " + grade.ToString();
        }
    }

    // ---- builders -------------------------------------------------------------

    void CodexCatalog::EnsureItems()
    {
        StudioLogScope logScope("CodexCatalog.EnsureItems");
        if (m_items != nullptr)
        {
            return;
        }
        msclr::lock guard(m_buildLock);
        if (m_items != nullptr)
        {
            return;
        }
        System::Diagnostics::Stopwatch^ stopwatch = System::Diagnostics::Stopwatch::StartNew();

        GameDataStore* store = m_bridge->NativeStore();

        // Only the columns the list and detail panel read are loaded (lite tables).
        std::vector<std::string> itemColumns = {
            "ItemId", "ItemID", "NameSid", "NoteSid", "Icon", "Grade", "Tier", "TradeType", "MainType", "SubType",
            "Level", "ClassId", "ReqClassLevel", "SellPrice", "Stackable", "SmeltingMaxCount", "Durability",
            "Durability_RepairAble", "ItemOptionType", "BuffId", "CoolTime", "JewelUpgradeCount" };
        std::vector<std::string> attrColumns = { "ItemId", "ItemID" };
        for (int i = 1; i <= 7; ++i)
        {
            attrColumns.push_back("Attribute" + std::to_string(i) + "Type");
            attrColumns.push_back("Attribute" + std::to_string(i) + "Value");
        }
        std::vector<std::string> statusColumns = { "StatusID", "StringId", "StatusCode" };

        std::shared_ptr<GameDataTable> items  = RequireLite(store, "ITEM", itemColumns);
        std::shared_ptr<GameDataTable> attrs  = RequireLite(store, "ITEM_ATTRIBUTE", attrColumns);
        std::shared_ptr<GameDataTable> status = RequireLite(store, "STATUS", statusColumns);

        const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

        // STRING_MESSAGE fallback (lite: StringId, TextKr, ENG + lang), kept in
        // m_itemStrings so descriptions can be resolved lazily in BuildDetail.
        std::string error;
        std::shared_ptr<GameDataTable> messages = store->GetLiteStringMessage(lang, error); // optional fallback
        ItemStringState^ strings = nullptr;
        if (messages)
        {
            int idCol   = messages->FindColumn("StringId");
            int langCol = messages->FindColumn(lang);
            if (langCol < 0) langCol = messages->FindColumn("ENG");
            if (langCol < 0) langCol = messages->FindColumn("TextKr");
            if (idCol >= 0 && langCol >= 0)
            {
                strings = gcnew ItemStringState(messages, langCol);
                const size_t rows = messages->RowCount();
                strings->Rows().reserve(rows);
                for (size_t r = 0; r < rows; ++r)
                {
                    long long id = CellInt(*messages, r, idCol);
                    if (id > 0)
                    {
                        strings->Rows().emplace(id, static_cast<uint32_t>(r));
                    }
                }
            }
        }
        const GameDataTable* messageTable = (strings != nullptr) ? strings->Table() : nullptr;
        const int messageLangCol = (strings != nullptr) ? strings->LangCol() : -1;
        std::unordered_map<long long, uint32_t> noMessageRows;
        const std::unordered_map<long long, uint32_t>& messageRows = (strings != nullptr) ? strings->Rows() : noMessageRows;

        // STATUS id -> stat name (StringId text, fallback StatusCode).
        Dictionary<long long, String^>^ statNames = gcnew Dictionary<long long, String^>();
        {
            int cId   = status->FindColumn("StatusID");
            int cSid  = status->FindColumn("StringId");
            int cCode = status->FindColumn("StatusCode");
            const size_t rows = status->RowCount();
            for (size_t r = 0; r < rows; ++r)
            {
                long long id = CellInt(*status, r, cId);
                if (id <= 0)
                {
                    continue;
                }
                String^ name = ResolveTemplate(store, CellInt(*status, r, cSid), lang);
                if (String::IsNullOrEmpty(name))
                {
                    name = CellStr(*status, r, cCode)->Trim();
                }
                if (!String::IsNullOrEmpty(name))
                {
                    statNames[id] = name;
                }
            }
        }

        // ITEM_ATTRIBUTE rows by item id, plus the AttributeNType/Value columns that exist.
        std::unordered_map<long long, uint32_t> attrRows;
        std::vector<int> typeCols;
        std::vector<int> valueCols;
        {
            int cItem = attrs->FindColumn("ItemId");
            if (cItem < 0) cItem = attrs->FindColumn("ItemID");
            const size_t rows = attrs->RowCount();
            attrRows.reserve(rows);
            for (size_t r = 0; r < rows; ++r)
            {
                long long id = CellInt(*attrs, r, cItem);
                if (id > 0)
                {
                    attrRows.emplace(id, static_cast<uint32_t>(r));
                }
            }
            for (int i = 1; i <= 7; ++i)
            {
                int t = attrs->FindColumn("Attribute" + std::to_string(i) + "Type");
                int v = attrs->FindColumn("Attribute" + std::to_string(i) + "Value");
                if (t >= 0 && v >= 0)
                {
                    typeCols.push_back(t);
                    valueCols.push_back(v);
                }
            }
        }

        // ITEM columns.
        int cItemId = items->FindColumn("ItemId");
        if (cItemId < 0) cItemId = items->FindColumn("ItemID");
        const int cNameSid   = items->FindColumn("NameSid");
        const int cNoteSid   = items->FindColumn("NoteSid");
        const int cIcon      = items->FindColumn("Icon");
        const int cGrade     = items->FindColumn("Grade");
        const int cTier      = items->FindColumn("Tier");
        const int cTrade     = items->FindColumn("TradeType");
        const int cMainType  = items->FindColumn("MainType");
        const int cSubType   = items->FindColumn("SubType");
        const int cLevel     = items->FindColumn("Level");
        const int cClassId   = items->FindColumn("ClassId");
        const int cReqLevel  = items->FindColumn("ReqClassLevel");
        const int cSellPrice = items->FindColumn("SellPrice");
        const int cStackable = items->FindColumn("Stackable");
        const int cMaxEnh    = items->FindColumn("SmeltingMaxCount");
        const int cDurab     = items->FindColumn("Durability");
        const int cRepair    = items->FindColumn("Durability_RepairAble");
        const int cOption    = items->FindColumn("ItemOptionType");
        const int cBuffId    = items->FindColumn("BuffId");
        const int cCoolTime  = items->FindColumn("CoolTime");
        const int cJewel     = items->FindColumn("JewelUpgradeCount");

        // Strings shared across items instead of rebuilt per row.
        Dictionary<int, String^>^ typeNames = gcnew Dictionary<int, String^>();   // key main * 1000 + sub
        Dictionary<int, String^>^ slotNames = gcnew Dictionary<int, String^>();
        Dictionary<int, String^>^ subtitles = gcnew Dictionary<int, String^>();   // key grade * 100 + tier
        array<String^>^ tierIcons = gcnew array<String^>(6);
        for (int t = 1; t <= 5; ++t)
        {
            tierIcons[t] = GameDataEnums::IconUrl(820 + t);
        }
        String^ tradeIcon = GameDataEnums::IconUrl(100057);
        List<CodexStat^>^ noStats = gcnew List<CodexStat^>();   // shared, never mutated

        List<ItemEntry^>^ list = gcnew List<ItemEntry^>();
        const size_t rows = items->RowCount();
        list->Capacity = static_cast<int>(rows);
        for (size_t r = 0; r < rows; ++r)
        {
            long long id = CellInt(*items, r, cItemId);
            if (id <= 0)
            {
                continue;
            }

            String^ name = ResolveItemString(store, CellInt(*items, r, cNameSid), lang, messageTable, messageRows, messageLangCol);
            if (String::IsNullOrEmpty(name))
            {
                continue; // the site only lists named items
            }

            ItemEntry^ item = gcnew ItemEntry();
            item->Kind = "item";
            item->Id   = id;
            item->Name = name;
            item->NoteSid     = CellInt(*items, r, cNoteSid);   // description is resolved on demand (BuildDetail)
            item->Description = String::Empty;

            int grade = static_cast<int>(CellInt(*items, r, cGrade));
            int tier  = static_cast<int>(CellInt(*items, r, cTier));
            int level = static_cast<int>(CellInt(*items, r, cLevel));
            int req   = static_cast<int>(CellInt(*items, r, cReqLevel));
            if (grade <= 0) grade = 1;
            if (tier  <= 0) tier  = 1;
            if (level <= 0) level = 1;
            if (req   <= 0) req   = 1;

            item->Grade      = grade;
            item->GradeBrush = GradeBrushCache::Get(grade);
            item->Tier       = tier;
            item->Trade      = static_cast<int>(CellInt(*items, r, cTrade));
            item->MainType   = static_cast<int>(CellInt(*items, r, cMainType));
            item->SubType    = static_cast<int>(CellInt(*items, r, cSubType));
            item->Level      = level;
            item->ClassId    = static_cast<int>(CellInt(*items, r, cClassId));
            item->ReqLevel   = req;
            item->SellPrice  = CellInt(*items, r, cSellPrice);
            item->Stackable  = static_cast<int>(CellInt(*items, r, cStackable));
            item->MaxEnhance = static_cast<int>(CellInt(*items, r, cMaxEnh));
            item->Durability = static_cast<int>(CellInt(*items, r, cDurab));
            item->Repairable = CellInt(*items, r, cRepair) == 1;
            item->HasOptions = CellInt(*items, r, cOption) != 0;
            item->GrantsBuff = FirstArrayNumberCell(*items, r, cBuffId) != 0;
            item->CooldownSec = static_cast<int>(CellInt(*items, r, cCoolTime));
            item->JewelSlots  = static_cast<int>(CellInt(*items, r, cJewel));

            const int typeKey = item->MainType * 1000 + item->SubType;
            String^ typeName;
            if (!typeNames->TryGetValue(typeKey, typeName))
            {
                typeName = GameDataEnums::ItemTypeName(item->MainType, item->SubType);
                typeNames[typeKey] = typeName;
                slotNames[typeKey] = GameDataEnums::ItemSlotName(item->MainType, item->SubType);
            }
            item->TypeName = typeName;
            item->Slot     = slotNames[typeKey];

            const int subtitleKey = grade * 100 + tier;
            String^ subtitle;
            if (!subtitles->TryGetValue(subtitleKey, subtitle))
            {
                subtitle = ItemGradeLabel(grade) + " - T" + tier.ToString();
                subtitles[subtitleKey] = subtitle;
            }
            item->Subtitle = subtitle;
            item->Badge    = String::Empty;

            long long icon = CellInt(*items, r, cIcon);
            String^ iconUrl = (icon > 0) ? GameDataEnums::IconUrl(icon) : String::Empty;
            item->IconUrl       = iconUrl;
            item->SourceIconUrl = iconUrl;   // the CDN url; IconUrl is swapped for the disk copy per page
            item->TierIconUrl   = (tier >= 1 && tier <= 5) ? tierIcons[tier] : String::Empty;
            item->TradeIconUrl  = (item->Trade == 1) ? tradeIcon : String::Empty;

            // Base stats.
            List<CodexStat^>^ stats = noStats;
            auto attrFound = attrRows.find(id);
            if (attrFound != attrRows.end())
            {
                const size_t ar = attrFound->second;
                for (size_t i = 0; i < typeCols.size(); ++i)
                {
                    long long type  = CellInt(*attrs, ar, typeCols[i]);
                    long long value = CellInt(*attrs, ar, valueCols[i]);
                    if (type == 0 || value == 0)
                    {
                        continue;
                    }
                    String^ statName;
                    if (statNames->TryGetValue(type, statName))
                    {
                        if (stats == noStats)
                        {
                            stats = gcnew List<CodexStat^>(4);
                        }
                        stats->Add(gcnew CodexStat(statName, N0(value)));
                    }
                }
            }
            item->Stats = stats;

            list->Add(item);
        }

        m_itemStrings = strings;
        m_items       = list;
        ItemCount     = list->Count;
        LastBuildMs   = stopwatch->Elapsed.TotalMilliseconds;
    }

    void CodexCatalog::EnsureMonsters()
    {
        StudioLogScope logScope("CodexCatalog.EnsureMonsters");
        if (m_monsters != nullptr)
        {
            return;
        }
        msclr::lock guard(m_buildLock);
        if (m_monsters != nullptr)
        {
            return;
        }
        System::Diagnostics::Stopwatch^ stopwatch = System::Diagnostics::Stopwatch::StartNew();

        GameDataStore* store = m_bridge->NativeStore();
        std::vector<std::string> monsterColumns = {
            "MonsterId", "MonsterResourceID", "NameSid", "Level", "MonGrade", "MaxHP", "PhysicalAttack",
            "MagicAttack", "PhysicalDefense", "MagicDefense", "Accuracy", "Dodge", "Critical", "AvoidCritical",
            "RunSpeed", "Race", "CombatPower", "Exp" };
        std::shared_ptr<GameDataTable> table = RequireLite(store, "MONSTER", monsterColumns);
        const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

        const int cId     = table->FindColumn("MonsterId");
        const int cRes    = table->FindColumn("MonsterResourceID");
        const int cName   = table->FindColumn("NameSid");
        const int cLevel  = table->FindColumn("Level");
        const int cGrade  = table->FindColumn("MonGrade");
        const int cHp     = table->FindColumn("MaxHP");
        const int cPAtk   = table->FindColumn("PhysicalAttack");
        const int cMAtk   = table->FindColumn("MagicAttack");
        const int cPDef   = table->FindColumn("PhysicalDefense");
        const int cMDef   = table->FindColumn("MagicDefense");
        const int cAcc    = table->FindColumn("Accuracy");
        const int cDodge  = table->FindColumn("Dodge");
        const int cCrit   = table->FindColumn("Critical");
        const int cAvoid  = table->FindColumn("AvoidCritical");
        const int cRun    = table->FindColumn("RunSpeed");
        const int cRace   = table->FindColumn("Race");
        const int cCp     = table->FindColumn("CombatPower");
        const int cExp    = table->FindColumn("Exp");

        IconCache::WarmIndexes();   // no-op when Prewarm already did it

        Dictionary<String^, List<MonsterEntry^>^>^ byName = gcnew Dictionary<String^, List<MonsterEntry^>^>(StringComparer::Ordinal);
        List<String^>^ nameOrder = gcnew List<String^>();
        Dictionary<int, String^>^ subtitles = gcnew Dictionary<int, String^>();   // key level * 16 + grade
        List<MonsterEntry^>^ noVariants = gcnew List<MonsterEntry^>();            // shared, never mutated

        const size_t rows = table->RowCount();
        for (size_t r = 0; r < rows; ++r)
        {
            String^ name = ResolveTemplate(store, CellInt(*table, r, cName), lang);
            if (String::IsNullOrEmpty(name) ||
                name->StartsWith("DEV_") || name->StartsWith("TEST_") ||
                name->StartsWith("Monster #") || name->StartsWith("Dummy"))
            {
                continue;
            }

            MonsterEntry^ m = gcnew MonsterEntry();
            m->Kind       = "monster";
            m->Id         = CellInt(*table, r, cId);
            m->Name       = name;
            m->ResourceId = static_cast<int>(CellInt(*table, r, cRes));
            m->Level      = static_cast<int>(CellInt(*table, r, cLevel));
            int grade     = static_cast<int>(CellInt(*table, r, cGrade));
            if (grade <= 0) grade = 1;
            m->Grade      = grade;
            m->GradeBrush = GradeBrushCache::Get(grade);
            m->Hp         = CellInt(*table, r, cHp);
            m->PAtk       = CellInt(*table, r, cPAtk);
            m->MAtk       = CellInt(*table, r, cMAtk);
            m->PDef       = CellInt(*table, r, cPDef);
            m->MDef       = CellInt(*table, r, cMDef);
            m->Accuracy   = CellInt(*table, r, cAcc);
            m->Dodge      = CellInt(*table, r, cDodge);
            m->Critical   = CellInt(*table, r, cCrit);
            m->AvoidCritical = CellInt(*table, r, cAvoid);
            m->RunSpeed   = static_cast<int>(CellInt(*table, r, cRun));
            m->Race       = static_cast<int>(CellInt(*table, r, cRace));
            m->Cp         = CellInt(*table, r, cCp);
            m->Exp        = CellInt(*table, r, cExp);
            m->VariantCount = 0;
            m->Variants   = noVariants;
            m->Badge      = String::Empty;

            const int subtitleKey = m->Level * 16 + grade;
            String^ subtitle;
            if (!subtitles->TryGetValue(subtitleKey, subtitle))
            {
                subtitle = "Lv " + m->Level.ToString() + " - " + MonsterGradeLabel(grade);
                subtitles[subtitleKey] = subtitle;
            }
            m->Subtitle = subtitle;

            // CDN image is monsters/<MonsterId>.png; only some ids have one.
            String^ art = String::Empty;
            if (IconCache::HasImage("monsters", m->Id))
            {
                art = GameDataEnums::ImageUrl("monsters", m->Id);
            }
            m->IconUrl       = art;
            m->SourceIconUrl = art;

            List<MonsterEntry^>^ group;
            if (!byName->TryGetValue(name, group))
            {
                group = gcnew List<MonsterEntry^>();
                byName->Add(name, group);
                nameOrder->Add(name);
            }
            group->Add(m);
        }

        List<MonsterEntry^>^ list = gcnew List<MonsterEntry^>();
        for each (String^ name in nameOrder)
        {
            List<MonsterEntry^>^ variants = byName[name];
            variants->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterVariant));
            MonsterEntry^ p = variants[0];

            MonsterEntry^ primary = gcnew MonsterEntry();
            primary->Kind       = "monster";
            primary->Id         = p->Id;
            primary->Name       = name;
            primary->ResourceId = p->ResourceId;
            primary->Level      = p->Level;
            primary->Grade      = p->Grade;
            primary->GradeBrush = p->GradeBrush;
            primary->Hp         = p->Hp;
            primary->PAtk       = p->PAtk;
            primary->MAtk       = p->MAtk;
            primary->PDef       = p->PDef;
            primary->MDef       = p->MDef;
            primary->Accuracy   = p->Accuracy;
            primary->Dodge      = p->Dodge;
            primary->Critical   = p->Critical;
            primary->AvoidCritical = p->AvoidCritical;
            primary->RunSpeed   = p->RunSpeed;
            primary->Race       = p->Race;
            primary->Cp         = p->Cp;
            primary->Exp        = p->Exp;
            // The card shows the strongest row's image; if that id has none, borrow
            // the first variant (strongest first) that does, else leave it empty.
            String^ art = p->SourceIconUrl;
            if (String::IsNullOrEmpty(art))
            {
                for each (MonsterEntry^ v in variants)
                {
                    if (!String::IsNullOrEmpty(v->SourceIconUrl))
                    {
                        art = v->SourceIconUrl;
                        break;
                    }
                }
            }
            primary->IconUrl    = art;
            primary->SourceIconUrl = art;
            primary->Subtitle   = p->Subtitle;
            primary->VariantCount = variants->Count;
            primary->Variants   = variants;
            primary->Badge      = (variants->Count > 1) ? ("x" + variants->Count.ToString()) : String::Empty;

            list->Add(primary);
        }

        list->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByLevel));

        m_monsters   = list;
        MonsterCount = list->Count;
        LastBuildMs  = stopwatch->Elapsed.TotalMilliseconds;
    }

    void CodexCatalog::EnsureObjects()
    {
        StudioLogScope logScope("CodexCatalog.EnsureObjects");
        if (m_objects != nullptr)
        {
            return;
        }
        msclr::lock guard(m_buildLock);
        if (m_objects != nullptr)
        {
            return;
        }
        System::Diagnostics::Stopwatch^ stopwatch = System::Diagnostics::Stopwatch::StartNew();

        GameDataStore* store = m_bridge->NativeStore();
        std::vector<std::string> objectColumns = { "ObjectId", "ObjectNameSid", "ObjectGatherType" };
        std::shared_ptr<GameDataTable> table = RequireLite(store, "OBJECT", objectColumns);
        const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

        const int cId     = table->FindColumn("ObjectId");
        const int cName   = table->FindColumn("ObjectNameSid");
        const int cGather = table->FindColumn("ObjectGatherType");

        List<ObjectEntry^>^ list = gcnew List<ObjectEntry^>();
        IconCache::WarmIndexes();   // no-op when Prewarm already did it

        const size_t rows = table->RowCount();
        for (size_t r = 0; r < rows; ++r)
        {
            long long id = CellInt(*table, r, cId);
            if (id <= 0)
            {
                continue;
            }

            ObjectEntry^ o = gcnew ObjectEntry();
            o->Kind = "object";
            o->Id   = id;
            String^ name = ResolveTemplate(store, CellInt(*table, r, cName), lang);
            o->Name = String::IsNullOrEmpty(name) ? ("Object #" + id.ToString()) : name;
            o->Gather     = GatherLabel(CellStr(*table, r, cGather));
            o->Subtitle   = o->Gather;
            // CDN image is objects/<ObjectId>.png; only some ids have one.
            String^ art   = IconCache::HasImage("objects", id) ? GameDataEnums::ImageUrl("objects", id) : String::Empty;
            o->IconUrl       = art;
            o->SourceIconUrl = art;
            o->Badge      = String::Empty;
            o->Grade      = 0;
            o->GradeBrush = GradeBrushCache::Get(0);
            list->Add(o);
        }

        m_objects   = list;
        ObjectCount = list->Count;
        LastBuildMs = stopwatch->Elapsed.TotalMilliseconds;
    }

    void CodexCatalog::EnsureNpcs()
    {
        StudioLogScope logScope("CodexCatalog.EnsureNpcs");
        if (m_npcs != nullptr)
        {
            return;
        }
        msclr::lock guard(m_buildLock);
        if (m_npcs != nullptr)
        {
            return;
        }
        System::Diagnostics::Stopwatch^ stopwatch = System::Diagnostics::Stopwatch::StartNew();

        GameDataStore* store = m_bridge->NativeStore();
        std::vector<std::string> npcColumns = {
            "NpcId", "NameSid", "NameTitleSid", "NpcPortrait", "MerchantNpc", "FactionType", "WaypointNPC", "NpcDialogId" };
        std::shared_ptr<GameDataTable> table = RequireLite(store, "NPC", npcColumns);
        const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

        const int cId       = table->FindColumn("NpcId");
        const int cName     = table->FindColumn("NameSid");
        const int cTitle    = table->FindColumn("NameTitleSid");
        const int cPortrait = table->FindColumn("NpcPortrait");
        const int cMerchant = table->FindColumn("MerchantNpc");
        const int cFaction  = table->FindColumn("FactionType");
        const int cWaypoint = table->FindColumn("WaypointNPC");
        const int cDialog   = table->FindColumn("NpcDialogId");

        IconCache::WarmIndexes();   // no-op when Prewarm already did it

        List<NpcEntry^>^ list = gcnew List<NpcEntry^>();
        const size_t rows = table->RowCount();
        for (size_t r = 0; r < rows; ++r)
        {
            long long id = CellInt(*table, r, cId);
            if (id <= 0)
            {
                continue;
            }

            NpcEntry^ n = gcnew NpcEntry();
            n->Kind = "npc";
            n->Id   = id;
            String^ name = ResolveTemplate(store, CellInt(*table, r, cName), lang);
            n->Name  = String::IsNullOrEmpty(name) ? ("NPC #" + id.ToString()) : name;
            n->Title = ResolveTemplate(store, CellInt(*table, r, cTitle), lang);

            // NPC art is NPC.NpcPortrait, served from the same items folder as item
            // icons: .../Images/items/<NpcPortrait>.png
            long long portrait = CellInt(*table, r, cPortrait);
            n->Portrait = portrait;
            String^ art = (portrait > 0) ? GameDataEnums::IconUrl(portrait) : String::Empty;
            n->IconUrl       = art;
            n->SourceIconUrl = art;
            n->Merchant = CellInt(*table, r, cMerchant) > 0;

            long long faction = CellInt(*table, r, cFaction);
            if (faction == 1)      n->Faction = "Friendly";
            else if (faction == 2) n->Faction = "Hostile";
            else                   n->Faction = "Neutral";

            n->Roaming     = CellBool(*table, r, cWaypoint);
            n->HasDialogue = AnyPositiveNumberCell(*table, r, cDialog);
            n->Badge       = n->Merchant ? gcnew String("Merchant") : String::Empty;
            n->Subtitle    = String::IsNullOrEmpty(n->Title) ? n->Faction : n->Title;
            n->Grade       = 0;
            n->GradeBrush  = GradeBrushCache::Get(0);
            list->Add(n);
        }

        m_npcs      = list;
        NpcCount    = list->Count;
        LastBuildMs = stopwatch->Elapsed.TotalMilliseconds;
    }

    // Stage cards: STAGE rows + the minimap file matched in the CDN maps listing.
    void CodexCatalog::EnsureStages()
    {
        StudioLogScope logScope("CodexCatalog.EnsureStages");
        if (m_stages != nullptr)
        {
            return;
        }
        msclr::lock guard(m_buildLock);
        if (m_stages != nullptr)
        {
            return;
        }
        System::Diagnostics::Stopwatch^ stopwatch = System::Diagnostics::Stopwatch::StartNew();

        GameDataStore* store = m_bridge->NativeStore();
        std::vector<std::string> stageColumns = {
            "StageID", "StageNameSID", "QuestStageNameSID", "StageType", "StageLevel", "GraphicLevel" };
        std::shared_ptr<GameDataTable> table = RequireLite(store, "STAGE", stageColumns);
        const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

        const int cId      = table->FindColumn("StageID");
        const int cName    = table->FindColumn("StageNameSID");
        const int cQuest   = table->FindColumn("QuestStageNameSID");
        const int cType    = table->FindColumn("StageType");
        const int cLevel   = table->FindColumn("StageLevel");
        const int cGraphic = table->FindColumn("GraphicLevel");

        IconCache::WarmIndexes();   // maps name index; no-op when Prewarm already did it

        String^ mapsBase = gcnew String(kMapsBase);
        List<StageEntry^>^ list = gcnew List<StageEntry^>();
        Dictionary<long long, StageEntry^>^ byId = gcnew Dictionary<long long, StageEntry^>();

        const size_t rows = table->RowCount();
        for (size_t r = 0; r < rows; ++r)
        {
            long long id = CellInt(*table, r, cId);
            if (id <= 0 || byId->ContainsKey(id))
            {
                continue;
            }

            StageEntry^ s = gcnew StageEntry();
            s->Kind = "map";
            s->Id   = id;

            String^ name = ResolveTemplate(store, CellInt(*table, r, cName), lang);
            if (String::IsNullOrEmpty(name))
            {
                name = ResolveTemplate(store, CellInt(*table, r, cQuest), lang);
            }
            if (String::IsNullOrEmpty(name))
            {
                name = "Stage " + id.ToString();
            }
            s->Name = name;

            String^ type = CellStr(*table, r, cType)->Replace("EStageType::", "")->Trim();
            if (type->Length == 0)
            {
                type = "Unknown";
            }
            s->StageType  = type;
            s->StageLevel = static_cast<int>(CellInt(*table, r, cLevel));

            // GraphicLevel is a level path such as "/Game/Maps/OutGame/Level_Logo";
            // the minimap png is named after the last segment, matched ignoring case.
            String^ graphic  = CellStr(*table, r, cGraphic)->Trim();
            int slash        = graphic->LastIndexOf('/');
            String^ baseName = (slash >= 0) ? graphic->Substring(slash + 1) : graphic;
            String^ file     = nullptr;
            if (baseName->Length > 0 && !String::Equals(baseName, "0"))
            {
                file = IconCache::FindFileCI("maps", baseName);
            }

            if (file != nullptr)
            {
                s->HasMap = true;
                s->MapFile = file;
                s->MapUrl = mapsBase + Uri::EscapeDataString(file);
            }
            else
            {
                s->HasMap = false;
                s->MapFile = String::Empty;
                s->MapUrl = String::Empty;
            }
            s->IconUrl       = s->MapUrl;
            s->SourceIconUrl = s->MapUrl;

            s->Subtitle = (s->StageLevel > 0) ? (type + " - Lv " + s->StageLevel.ToString()) : type;
            s->Badge      = String::Empty;
            s->Grade      = 0;
            s->GradeBrush = GradeBrushCache::Get(0);

            list->Add(s);
            byId->Add(id, s);
        }

        list->Sort(gcnew Comparison<StageEntry^>(&CodexSort::StageByName));

        m_stageById = byId;   // published first; FindStage keys off m_stages being set
        m_stages    = list;
        StageCount  = list->Count;
        LastBuildMs = stopwatch->Elapsed.TotalMilliseconds;

        // Pay the one-time PORTAL.json + MapMini scan (warp sources) on this build
        // thread so the first "Warps into this map" list is instant. Best effort.
        try
        {
            String^ rootText = m_bridge->DataRoot();
            if (!String::IsNullOrEmpty(rootText))
            {
                ::StageMapData::WarmWarpSources(msclr::interop::marshal_as<std::wstring>(rootText));
            }
        }
        catch (...)
        {
        }
    }

    // ---- queries --------------------------------------------------------------

    CodexPage^ CodexCatalog::QueryStages(String^ search, String^ type, int mapFilter, String^ sort, int page, int pageSize)
    {
        EnsureStages();

        String^ needle  = (search == nullptr) ? String::Empty : search->Trim();
        String^ typeKey = (type == nullptr) ? String::Empty : type->Trim();

        List<StageEntry^>^ filtered = gcnew List<StageEntry^>();
        for each (StageEntry^ s in m_stages)
        {
            if (typeKey->Length > 0 && !String::Equals(s->StageType, typeKey, StringComparison::OrdinalIgnoreCase)) continue;
            if (mapFilter == 1 && !s->HasMap) continue;
            if (mapFilter == 2 && s->HasMap)  continue;
            if (!MatchesSearch(s, needle)) continue;
            filtered->Add(s);
        }

        String^ key = (sort == nullptr) ? String::Empty : sort->ToLowerInvariant();
        if (key == "id")
        {
            filtered->Sort(gcnew Comparison<StageEntry^>(&CodexSort::StageById));
        }
        else if (key == "level")
        {
            filtered->Sort(gcnew Comparison<StageEntry^>(&CodexSort::StageByLevel));
        }
        else
        {
            filtered->Sort(gcnew Comparison<StageEntry^>(&CodexSort::StageByName));
        }

        List<CodexEntry^>^ all = gcnew List<CodexEntry^>(filtered->Count);
        for each (StageEntry^ s in filtered)
        {
            all->Add(s);
        }
        return MakePage(all, page, pageSize);
    }

    List<CodexChoice^>^ CodexCatalog::StageTypeChoices()
    {
        EnsureStages();
        SortedSet<String^>^ present = gcnew SortedSet<String^>(StringComparer::OrdinalIgnoreCase);
        for each (StageEntry^ s in m_stages)
        {
            present->Add(s->StageType);
        }
        List<CodexChoice^>^ choices = gcnew List<CodexChoice^>();
        choices->Add(gcnew CodexChoice(0, "All types"));
        int value = 1;
        for each (String^ type in present)
        {
            choices->Add(gcnew CodexChoice(value, type));
            ++value;
        }
        return choices;
    }

    StageEntry^ CodexCatalog::FindStage(long long stageId)
    {
        if (m_stages == nullptr)
        {
            return nullptr;
        }
        Dictionary<long long, StageEntry^>^ byId = m_stageById;
        StageEntry^ found = nullptr;
        if (byId != nullptr && byId->TryGetValue(stageId, found))
        {
            return found;
        }
        return nullptr;
    }

    // Minimap + markers for one stage, mirroring the website's getStagePois:
    //   MapMini rows -> maplink / gate / npc / npc-special / event / poi
    //   Gen rows     -> monster spawns (GenObjectType 2, ids that exist in MONSTER)
    //                   and object spawns (GenObjectType 1/3, ids that exist in OBJECT)
    // positions are percentages of the image via the MAPUI_MINI bounds; every
    // marker also carries its world coordinates and entity id. Map-movement rows
    // carry the WarpId (MapMini InfoValue) and the WARP_LOCATION arrival.
    String^ CodexCatalog::GenFilePath(long long stageId)
    {
        String^ root = m_bridge->DataRoot();
        if (String::IsNullOrEmpty(root))
        {
            return String::Empty;
        }
        return root->TrimEnd(L'\\', L'/') + "\\Gen\\GENDATA_" + stageId.ToString() + ".json";
    }

    // Warps that arrive in `stageId` (WARP_LOCATION.json), each with the portals and
    // map-movement markers that lead to it. Never throws; empty list on any failure.
    List<CodexWarp^>^ CodexCatalog::WarpsInto(long long stageId)
    {
        List<CodexWarp^>^ result = gcnew List<CodexWarp^>();
        try
        {
            String^ rootText = m_bridge->DataRoot();
            if (String::IsNullOrEmpty(rootText))
            {
                return result;
            }
            const std::wstring root = msclr::interop::marshal_as<std::wstring>(rootText);

            std::vector<WarpInfo> warps;
            std::string error;
            if (!::StageMapData::GetWarpsInto(root, stageId, warps, error))
            {
                return result;
            }

            EnsureStages();   // stage names for the "From:" lines (no-op once built)
            GameDataStore* store = m_bridge->NativeStore();
            const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);

            for (size_t i = 0; i < warps.size(); ++i)
            {
                const WarpInfo& w = warps[i];

                CodexWarp^ warp = gcnew CodexWarp();
                warp->WarpId  = w.warpId;
                warp->Title   = "Warp " + w.warpId.ToString();
                warp->Command = "@cheatmsg warp " + w.warpId.ToString();

                long long ax = static_cast<long long>(Math::Round(w.x));
                long long ay = static_cast<long long>(Math::Round(w.y));
                long long az = static_cast<long long>(Math::Round(w.z));
                warp->ArrivalText = "Arrives at " + ax.ToString() + ", " + ay.ToString() + ", " + az.ToString();

                // Where it is reachable from: portals first, then map-link markers.
                std::vector<WarpSource> sources;
                std::string sourceError;
                ::StageMapData::GetWarpSources(root, w.warpId, sources, sourceError);

                List<String^>^ lines = gcnew List<String^>();
                for (size_t s = 0; s < sources.size(); ++s)
                {
                    const WarpSource& src = sources[s];

                    String^ stageName;
                    StageEntry^ from = FindStage(src.fromStageId);
                    if (from != nullptr && !String::IsNullOrEmpty(from->Name))
                    {
                        stageName = from->Name;
                    }
                    else
                    {
                        stageName = "Stage " + src.fromStageId.ToString();
                    }

                    String^ line;
                    if (src.isPortal)
                    {
                        line = "From: " + stageName + " (portal " + src.portalId.ToString() + ")";
                    }
                    else
                    {
                        String^ marker = ResolveTemplate(store, src.stringId, lang);
                        if (String::IsNullOrEmpty(marker))
                        {
                            line = "From: " + stageName + " - map link";
                        }
                        else
                        {
                            line = "From: " + stageName + " - map link '" + marker + "'";
                        }
                    }

                    if (!lines->Contains(line))
                    {
                        lines->Add(line);
                    }
                }

                if (lines->Count == 0)
                {
                    warp->FromText = "Not linked from a portal or map marker";
                }
                else
                {
                    const int kShown = 3;
                    System::Text::StringBuilder^ text = gcnew System::Text::StringBuilder();
                    for (int n = 0; n < lines->Count && n < kShown; ++n)
                    {
                        if (n > 0)
                        {
                            text->Append("\n");
                        }
                        text->Append(lines[n]);
                    }
                    if (lines->Count > kShown)
                    {
                        text->Append("\n+");
                        text->Append(String::Format("{0}", lines->Count - kShown));
                        text->Append(" more");
                    }
                    warp->FromText = text->ToString();
                }

                result->Add(warp);
            }
        }
        catch (Exception^)
        {
            result->Clear();
        }
        catch (...)
        {
            result->Clear();
        }
        return result;
    }

    StageMapData^ CodexCatalog::BuildStageMap(long long stageId)
    {
        StageMapData^ result = gcnew StageMapData();
        result->StageId    = stageId;
        result->Name       = "Stage " + stageId.ToString();
        result->StageType  = String::Empty;
        result->StageLevel = 0;
        result->MapUrl     = String::Empty;
        result->Pois       = gcnew List<StagePoi^>();
        result->Notice     = String::Empty;

        // The ensure calls take the build lock themselves; failures only cost
        // the data they feed (stage names / NPC portraits / monsters).
        try { EnsureStages(); }
        catch (Exception^ ex) { result->Notice = AppendNotice(result->Notice, "Stages unavailable: " + ex->Message); }
        try { EnsureNpcs(); }
        catch (Exception^ ex) { result->Notice = AppendNotice(result->Notice, "NPCs unavailable: " + ex->Message); }
        try { EnsureMonsters(); }
        catch (Exception^ ex) { result->Notice = AppendNotice(result->Notice, "Monsters unavailable: " + ex->Message); }
        try { EnsureObjects(); }
        catch (Exception^ ex) { result->Notice = AppendNotice(result->Notice, "Objects unavailable: " + ex->Message); }

        StageEntry^ stage = FindStage(stageId);
        if (stage != nullptr)
        {
            result->Name       = stage->Name;
            result->StageType  = stage->StageType;
            result->StageLevel = stage->StageLevel;
            result->MapUrl     = stage->MapUrl;
        }

        try
        {
            GameDataStore* store = m_bridge->NativeStore();
            const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
            String^ rootText = m_bridge->DataRoot();
            const std::wstring root = String::IsNullOrEmpty(rootText)
                ? std::wstring()
                : msclr::interop::marshal_as<std::wstring>(rootText);

            StageBounds bounds;
            std::string error;
            if (!::StageMapData::GetBounds(root, stageId, bounds, error) || !bounds.valid ||
                (bounds.rbX - bounds.ltX) == 0.0 || (bounds.rbY - bounds.ltY) == 0.0)
            {
                result->Notice = AppendNotice(result->Notice, "No map bounds for this stage (MAPUI_MINI).");
                return result;
            }

            // World-unit size of the minimap, so the map window can turn a spawn
            // radius (world units) into image pixels.
            result->SpanX = Math::Abs(bounds.rbX - bounds.ltX);
            result->SpanY = Math::Abs(bounds.rbY - bounds.ltY);

            // name -> stage for map-link targets (prefer stages that have a minimap)
            Dictionary<String^, StageEntry^>^ stageByName = gcnew Dictionary<String^, StageEntry^>(StringComparer::OrdinalIgnoreCase);
            if (m_stages != nullptr)
            {
                for each (StageEntry^ s in m_stages)
                {
                    if (String::Equals(s->Name, "Stage " + s->Id.ToString()))
                    {
                        continue;   // unnamed stage
                    }
                    StageEntry^ existing;
                    if (!stageByName->TryGetValue(s->Name, existing))
                    {
                        stageByName->Add(s->Name, s);
                    }
                    else if (!existing->HasMap && s->HasMap)
                    {
                        stageByName[s->Name] = s;
                    }
                }
            }

            // first NPC per name for portrait/title lookup
            Dictionary<String^, NpcEntry^>^ npcByName = gcnew Dictionary<String^, NpcEntry^>(StringComparer::OrdinalIgnoreCase);
            if (m_npcs != nullptr)
            {
                for each (NpcEntry^ n in m_npcs)
                {
                    if (!n->Name->StartsWith("NPC #") && !npcByName->ContainsKey(n->Name))
                    {
                        npcByName->Add(n->Name, n);
                    }
                }
            }

            // ---- warps that arrive in THIS stage, grouped by the stage they start from ------
            // (a map-movement marker leads to a destination; these are the ways back).
            Dictionary<long long, List<CodexWarp^>^>^ returnByStage = gcnew Dictionary<long long, List<CodexWarp^>^>();
            {
                std::vector<WarpInfo> into;
                std::string intoError;
                if (::StageMapData::GetWarpsInto(root, stageId, into, intoError))
                {
                    for (size_t w = 0; w < into.size(); ++w)
                    {
                        std::vector<WarpSource> sources;
                        std::string sourceError;
                        if (!::StageMapData::GetWarpSources(root, into[w].warpId, sources, sourceError)) continue;

                        HashSet<long long>^ seen = gcnew HashSet<long long>();
                        for (size_t k = 0; k < sources.size(); ++k)
                        {
                            const WarpSource& src = sources[k];
                            if (src.fromStageId <= 0 || !seen->Add(src.fromStageId)) continue;

                            StageEntry^ fromStage = FindStage(src.fromStageId);
                            String^ fromName = (fromStage != nullptr) ? fromStage->Name : String::Format("stage {0}", src.fromStageId);
                            CodexWarp^ back = gcnew CodexWarp();
                            back->WarpId = into[w].warpId;
                            back->Title = String::Format("Warp {0}", into[w].warpId);
                            back->Command = String::Format("@cheatmsg warp {0}", into[w].warpId);
                            back->ArrivalText = String::Format("Arrives at {0:0}, {1:0}, {2:0}", into[w].x, into[w].y, into[w].z);
                            if (src.isPortal)
                            {
                                back->FromText = String::Format("From a portal in {0} (portal {1})", fromName, src.portalId);
                            }
                            else
                            {
                                String^ markerName = ResolveTemplate(store, src.stringId, lang);
                                back->FromText = (markerName->Length > 0)
                                    ? String::Format("From the map link '{0}' in {1}", markerName, fromName)
                                    : String::Format("From a map link in {0}", fromName);
                            }

                            List<CodexWarp^>^ list;
                            if (!returnByStage->TryGetValue(src.fromStageId, list))
                            {
                                list = gcnew List<CodexWarp^>();
                                returnByStage[src.fromStageId] = list;
                            }
                            list->Add(back);
                        }
                    }
                }
            }

            // ---- MapMini markers ----------------------------------------------
            std::vector<MapMiniRow> miniRows;
            if (!::StageMapData::LoadMapMini(root, stageId, miniRows, error))
            {
                result->Notice = AppendNotice(result->Notice, "No MapMini data for this stage.");
            }
            for (size_t i = 0; i < miniRows.size(); ++i)
            {
                const MapMiniRow& row = miniRows[i];
                double px = 0.0, py = 0.0;
                if (!ToPercent(bounds, row.x, row.y, px, py))
                {
                    continue;
                }

                String^ typeName;
                if (row.mainType.find("Waypoint") != std::string::npos)
                {
                    if (row.subType == 1)      typeName = "gate";
                    else if (row.subType == 4) typeName = "npc-special";
                    else if (row.subType == 7) typeName = "event";
                    else                       typeName = "npc";
                }
                else
                {
                    typeName = (row.subType == 2) ? gcnew String("maplink") : gcnew String("poi");
                }

                String^ name = ResolveTemplate(store, row.stringId, lang);
                StagePoi^ poi = NewPoi(typeName, name, px, py);
                poi->WorldX    = row.x;
                poi->WorldY    = row.y;
                poi->WorldZ    = row.z;
                poi->HasWorldZ = row.hasZ;

                if (String::Equals(typeName, "maplink"))
                {
                    // InfoValue is the WarpId (WARP_LOCATION.json); the warp's
                    // Arrival_StageId is the reliable link target.
                    poi->WarpId = row.infoValue;
                    if (row.infoValue > 0)
                    {
                        WarpInfo warp;
                        std::string warpError;
                        if (::StageMapData::GetWarp(root, row.infoValue, warp, warpError) && warp.valid)
                        {
                            poi->ArrivalStageId = warp.arrivalStageId;
                            poi->ArrivalX       = warp.x;
                            poi->ArrivalY       = warp.y;
                            poi->ArrivalZ       = warp.z;
                            poi->HasArrival     = true;

                            StageEntry^ arrival = FindStage(warp.arrivalStageId);
                            if (arrival != nullptr)
                            {
                                poi->TargetStageId   = arrival->Id;
                                poi->TargetStageName = arrival->Name;
                            }
                        }
                    }

                    if (poi->TargetStageId == 0)
                    {
                        StageEntry^ target;
                        if (name->Length > 0 && stageByName->TryGetValue(name, target))
                        {
                            poi->TargetStageId   = target->Id;
                            poi->TargetStageName = target->Name;
                        }
                    }

                    // the ways back: warps from that destination into this map
                    List<CodexWarp^>^ backWarps;
                    if (poi->TargetStageId != 0 && returnByStage->TryGetValue(poi->TargetStageId, backWarps)) poi->ReturnWarps = backWarps;
                    else poi->ReturnWarps = gcnew List<CodexWarp^>();
                }
                else if (String::Equals(typeName, "npc") || String::Equals(typeName, "npc-special") || String::Equals(typeName, "event"))
                {
                    NpcEntry^ npc;
                    if (name->Length > 0 && npcByName->TryGetValue(name, npc))
                    {
                        poi->EntityId = npc->Id;
                        poi->Title = npc->Title;
                        if (npc->Portrait > 0)
                        {
                            poi->IconUrl = IconCache::Resolve(GameDataEnums::IconUrl(npc->Portrait));
                        }
                    }
                }
                result->Pois->Add(poi);
            }

            // ---- Gen monster spawns --------------------------------------------
            std::vector<GenSpawnRow> genRows;
            const bool haveGen = ::StageMapData::LoadGen(root, stageId, genRows, error) && !genRows.empty();
            if (haveGen && m_monsters != nullptr)
            {
                // every MONSTER row by id: group primaries and all of their variants
                Dictionary<long long, MonsterEntry^>^ monsterById = gcnew Dictionary<long long, MonsterEntry^>();
                for each (MonsterEntry^ m in m_monsters)
                {
                    if (m->Variants != nullptr)
                    {
                        for each (MonsterEntry^ v in m->Variants)
                        {
                            if (!monsterById->ContainsKey(v->Id))
                            {
                                monsterById->Add(v->Id, v);
                            }
                        }
                    }
                    if (!monsterById->ContainsKey(m->Id))
                    {
                        monsterById->Add(m->Id, m);
                    }
                }

                // Total spawns per monster id over every Gen row of the stage (counted
                // before the bounds check and the marker cap, so it is the true total).
                Dictionary<long long, int>^ totalById = gcnew Dictionary<long long, int>();
                for (size_t i = 0; i < genRows.size(); ++i)
                {
                    const GenSpawnRow& row = genRows[i];
                    if (row.objectType != 2 || !monsterById->ContainsKey(row.objectId))
                    {
                        continue;
                    }
                    int add = (row.spawnCount > 0) ? row.spawnCount : 1;
                    int sum = 0;
                    totalById->TryGetValue(row.objectId, sum);
                    totalById[row.objectId] = sum + add;
                }

                Dictionary<long long, String^>^ iconById = gcnew Dictionary<long long, String^>();
                int monsterPois = 0;
                for (size_t i = 0; i < genRows.size() && monsterPois < kMaxMonsterPois; ++i)
                {
                    const GenSpawnRow& row = genRows[i];
                    if (row.objectType != 2)
                    {
                        continue;   // 2 = monster; 1/3 are objects (handled below)
                    }
                    MonsterEntry^ monster;
                    if (!monsterById->TryGetValue(row.objectId, monster))
                    {
                        continue;
                    }
                    double px = 0.0, py = 0.0;
                    if (!ToPercent(bounds, row.x, row.y, px, py))
                    {
                        continue;
                    }

                    StagePoi^ poi = NewPoi("monster", monster->Name, px, py);
                    poi->Level     = monster->Level;
                    poi->Grade     = monster->Grade;
                    poi->Count     = (row.spawnCount > 0) ? row.spawnCount : 1;
                    int total = 0;
                    totalById->TryGetValue(row.objectId, total);
                    poi->TotalInMap = total;
                    poi->PosId      = row.posId;
                    poi->RespawnMinSec = row.regMinTime;   // seconds
                    poi->RespawnMaxSec = row.regMaxTime;
                    poi->SpawnRange    = row.spawnRange;   // world units, 0 = fixed point
                    poi->MonsterId = monster->Id;
                    poi->EntityId  = monster->Id;
                    poi->WorldX    = row.x;
                    poi->WorldY    = row.y;
                    poi->WorldZ    = row.z;
                    poi->HasWorldZ = row.hasZ;

                    String^ icon;
                    if (!iconById->TryGetValue(monster->Id, icon))
                    {
                        icon = String::IsNullOrEmpty(monster->SourceIconUrl)
                            ? String::Empty
                            : IconCache::Resolve(monster->SourceIconUrl);
                        iconById->Add(monster->Id, icon);
                    }
                    poi->IconUrl = icon;

                    result->Pois->Add(poi);
                    ++monsterPois;
                }
            }

            // ---- Gen object spawns (GenObjectType 1 / 3, ids from OBJECT) -------
            if (haveGen && m_objects != nullptr)
            {
                Dictionary<long long, ObjectEntry^>^ objectById = gcnew Dictionary<long long, ObjectEntry^>();
                for each (ObjectEntry^ o in m_objects)
                {
                    if (!objectById->ContainsKey(o->Id))
                    {
                        objectById->Add(o->Id, o);
                    }
                }

                Dictionary<long long, String^>^ objectIcons = gcnew Dictionary<long long, String^>();
                int objectPois = 0;
                for (size_t i = 0; i < genRows.size() && objectPois < kMaxObjectPois; ++i)
                {
                    const GenSpawnRow& row = genRows[i];
                    if (row.objectType != 1 && row.objectType != 3)
                    {
                        continue;
                    }
                    ObjectEntry^ obj;
                    if (!objectById->TryGetValue(row.objectId, obj))
                    {
                        continue;
                    }
                    double px = 0.0, py = 0.0;
                    if (!ToPercent(bounds, row.x, row.y, px, py))
                    {
                        continue;
                    }

                    StagePoi^ poi = NewPoi("object", obj->Name, px, py);
                    poi->Count     = (row.spawnCount > 0) ? row.spawnCount : 1;
                    poi->RespawnMinSec = row.regMinTime;   // seconds
                    poi->RespawnMaxSec = row.regMaxTime;
                    poi->SpawnRange    = row.spawnRange;
                    poi->EntityId  = obj->Id;
                    poi->PosId     = row.posId;
                    poi->WorldX    = row.x;
                    poi->WorldY    = row.y;
                    poi->WorldZ    = row.z;
                    poi->HasWorldZ = row.hasZ;

                    String^ icon;
                    if (!objectIcons->TryGetValue(obj->Id, icon))
                    {
                        icon = String::IsNullOrEmpty(obj->SourceIconUrl)
                            ? String::Empty
                            : IconCache::Resolve(obj->SourceIconUrl);
                        objectIcons->Add(obj->Id, icon);
                    }
                    poi->IconUrl = icon;

                    result->Pois->Add(poi);
                    ++objectPois;
                }
            }
        }
        catch (Exception^ ex)
        {
            result->Notice = AppendNotice(result->Notice, "Map data error: " + ex->Message);
        }
        return result;
    }

    CodexPage^ CodexCatalog::QueryItems(String^ search, int mainType, int grade, int classId, String^ sort, int page, int pageSize)
    {
        EnsureItems();

        String^ needle = (search == nullptr) ? String::Empty : search->Trim();
        List<ItemEntry^>^ filtered = gcnew List<ItemEntry^>();
        for each (ItemEntry^ item in m_items)
        {
            if (mainType != 0 && item->MainType != mainType) continue;
            if (grade    != 0 && item->Grade    != grade)    continue;
            if (classId  != 0 && item->ClassId  != classId)  continue;
            if (!MatchesSearch(item, needle)) continue;
            filtered->Add(item);
        }

        String^ key = (sort == nullptr) ? String::Empty : sort->ToLowerInvariant();
        if (key == "grade")
        {
            filtered->Sort(gcnew Comparison<ItemEntry^>(&CodexSort::ItemByGrade));
        }
        else if (key == "tier")
        {
            filtered->Sort(gcnew Comparison<ItemEntry^>(&CodexSort::ItemByTier));
        }
        else if (key == "level")
        {
            filtered->Sort(gcnew Comparison<ItemEntry^>(&CodexSort::ItemByLevel));
        }
        else
        {
            filtered->Sort(gcnew Comparison<ItemEntry^>(&CodexSort::ItemByName));
        }

        List<CodexEntry^>^ all = gcnew List<CodexEntry^>(filtered->Count);
        for each (ItemEntry^ item in filtered)
        {
            all->Add(item);
        }
        return MakePage(all, page, pageSize);
    }

    CodexPage^ CodexCatalog::QueryMonsters(String^ search, int grade, String^ sort, int page, int pageSize)
    {
        EnsureMonsters();

        String^ needle = (search == nullptr) ? String::Empty : search->Trim();
        List<MonsterEntry^>^ filtered = gcnew List<MonsterEntry^>();
        for each (MonsterEntry^ m in m_monsters)
        {
            if (grade != 0 && m->Grade != grade) continue;
            if (!MatchesSearch(m, needle)) continue;
            filtered->Add(m);
        }

        String^ key = (sort == nullptr) ? String::Empty : sort->ToLowerInvariant();
        if (key == "cp")
        {
            filtered->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByCp));
        }
        else if (key == "hp")
        {
            filtered->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByHp));
        }
        else if (key == "exp")
        {
            filtered->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByExp));
        }
        else if (key == "name")
        {
            filtered->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByName));
        }
        else
        {
            filtered->Sort(gcnew Comparison<MonsterEntry^>(&CodexSort::MonsterByLevel));
        }

        List<CodexEntry^>^ all = gcnew List<CodexEntry^>(filtered->Count);
        for each (MonsterEntry^ m in filtered)
        {
            all->Add(m);
        }
        return MakePage(all, page, pageSize);
    }

    CodexPage^ CodexCatalog::QueryObjects(String^ search, int page, int pageSize)
    {
        EnsureObjects();

        String^ needle = (search == nullptr) ? String::Empty : search->Trim();
        List<CodexEntry^>^ all = gcnew List<CodexEntry^>();
        for each (ObjectEntry^ o in m_objects)
        {
            if (MatchesSearch(o, needle))
            {
                all->Add(o);
            }
        }
        return MakePage(all, page, pageSize);
    }

    CodexPage^ CodexCatalog::QueryNpcs(String^ search, String^ role, int page, int pageSize)
    {
        EnsureNpcs();

        String^ needle  = (search == nullptr) ? String::Empty : search->Trim();
        String^ roleKey = (role == nullptr) ? String::Empty : role->Trim()->ToLowerInvariant();

        List<CodexEntry^>^ all = gcnew List<CodexEntry^>();
        for each (NpcEntry^ n in m_npcs)
        {
            if (roleKey == "merchant" && !n->Merchant) continue;
            if (roleKey == "friendly" && !String::Equals(n->Faction, "Friendly")) continue;
            if (roleKey == "hostile"  && !String::Equals(n->Faction, "Hostile"))  continue;
            if (roleKey == "titled"   && String::IsNullOrEmpty(n->Title))         continue;
            if (!MatchesSearch(n, needle)) continue;
            all->Add(n);
        }
        return MakePage(all, page, pageSize);
    }

    // ---- filter choices -------------------------------------------------------

    List<CodexChoice^>^ CodexCatalog::ItemMainTypeChoices()
    {
        EnsureItems();
        SortedSet<int>^ present = gcnew SortedSet<int>();
        for each (ItemEntry^ item in m_items)
        {
            present->Add(item->MainType);
        }
        List<CodexChoice^>^ choices = gcnew List<CodexChoice^>();
        choices->Add(gcnew CodexChoice(0, "All types"));
        for each (int mainType in present)
        {
            if (mainType != 0)
            {
                choices->Add(gcnew CodexChoice(mainType, GameDataEnums::ItemMainTypeName(mainType)));
            }
        }
        return choices;
    }

    List<CodexChoice^>^ CodexCatalog::ItemGradeChoices()
    {
        EnsureItems();
        SortedSet<int>^ present = gcnew SortedSet<int>();
        for each (ItemEntry^ item in m_items)
        {
            present->Add(item->Grade);
        }
        List<CodexChoice^>^ choices = gcnew List<CodexChoice^>();
        choices->Add(gcnew CodexChoice(0, "All grades"));
        for each (int grade in present)
        {
            if (grade != 0)
            {
                choices->Add(gcnew CodexChoice(grade, ItemGradeLabel(grade)));
            }
        }
        return choices;
    }

    List<CodexChoice^>^ CodexCatalog::ItemClassChoices()
    {
        EnsureItems();
        SortedSet<int>^ present = gcnew SortedSet<int>();
        for each (ItemEntry^ item in m_items)
        {
            present->Add(item->ClassId);
        }
        List<CodexChoice^>^ choices = gcnew List<CodexChoice^>();
        choices->Add(gcnew CodexChoice(0, "All classes"));
        for each (int classId in present)
        {
            if (classId != 0)
            {
                choices->Add(gcnew CodexChoice(classId, GameDataEnums::ClassName(classId)));
            }
        }
        return choices;
    }

    List<CodexChoice^>^ CodexCatalog::MonsterGradeChoices()
    {
        EnsureMonsters();
        SortedSet<int>^ present = gcnew SortedSet<int>();
        for each (MonsterEntry^ m in m_monsters)
        {
            present->Add(m->Grade);
        }
        List<CodexChoice^>^ choices = gcnew List<CodexChoice^>();
        choices->Add(gcnew CodexChoice(0, "All grades"));
        for each (int grade in present)
        {
            if (grade != 0)
            {
                choices->Add(gcnew CodexChoice(grade, MonsterGradeLabel(grade)));
            }
        }
        return choices;
    }

    // ---- detail ---------------------------------------------------------------

    CodexDetail^ CodexCatalog::BuildDetail(CodexEntry^ entry)
    {
        CodexDetail^ d = gcnew CodexDetail();
        d->Stats      = gcnew List<CodexStat^>();
        d->Effects    = gcnew List<String^>();
        d->Attributes = gcnew List<CodexStat^>();
        d->Variants   = nullptr;
        d->Description = String::Empty;
        d->StatsTitle  = String::Empty;
        d->Footer      = String::Empty;
        d->TierIconUrl  = String::Empty;
        d->TradeIconUrl = String::Empty;

        if (entry == nullptr)
        {
            d->Name      = String::Empty;
            d->Subtitle  = String::Empty;
            d->IconUrl   = String::Empty;
            d->NameBrush = GradeBrushCache::Get(0);
            return d;
        }

        d->Name      = entry->Name;
        d->IconUrl   = String::IsNullOrEmpty(entry->SourceIconUrl) ? entry->IconUrl : IconCache::Resolve(entry->SourceIconUrl);
        d->NameBrush = (entry->GradeBrush != nullptr) ? entry->GradeBrush : GradeBrushCache::Get(entry->Grade);
        d->Subtitle  = entry->Subtitle;

        ItemEntry^ item = dynamic_cast<ItemEntry^>(entry);
        if (item != nullptr)
        {
            String^ subtitle = ItemGradeLabel(item->Grade);
            if (item->Tier > 0)
            {
                subtitle += " - Tier " + item->Tier.ToString();
            }
            if (!String::IsNullOrEmpty(item->TypeName))
            {
                subtitle += " - " + item->TypeName;
            }
            d->Subtitle     = subtitle;
            d->TierIconUrl  = IconCache::Resolve(item->TierIconUrl);
            d->TradeIconUrl = IconCache::Resolve(item->TradeIconUrl);

            // Descriptions are resolved on first view, then memoized on the entry.
            if (String::IsNullOrEmpty(item->Description) && item->NoteSid > 0)
            {
                const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
                ItemStringState^ strings = m_itemStrings;
                std::unordered_map<long long, uint32_t> noRows;
                const GameDataTable* messageTable = (strings != nullptr) ? strings->Table() : nullptr;
                const int messageLangCol = (strings != nullptr) ? strings->LangCol() : -1;
                const std::unordered_map<long long, uint32_t>& rows = (strings != nullptr) ? strings->Rows() : noRows;
                item->Description = CleanDescription(
                    ResolveItemString(m_bridge->NativeStore(), item->NoteSid, lang, messageTable, rows, messageLangCol));
            }
            d->Description  = item->Description;

            if (item->Stats != nullptr && item->Stats->Count > 0)
            {
                d->StatsTitle = "Base Stats";
                for each (CodexStat^ s in item->Stats)
                {
                    d->Stats->Add(gcnew CodexStat(s->Name, "+" + s->Value));
                }
            }

            if (item->HasOptions)      d->Effects->Add("Rolls bonus stat options");
            if (item->GrantsBuff)      d->Effects->Add("Grants a buff on use");
            if (item->CooldownSec > 0) d->Effects->Add(item->CooldownSec.ToString() + "s cooldown");
            if (item->JewelSlots > 0)
            {
                String^ chip = item->JewelSlots.ToString() + " jewel slot";
                if (item->JewelSlots != 1)
                {
                    chip += "s";
                }
                d->Effects->Add(chip);
            }

            if (!String::IsNullOrEmpty(item->Slot)) d->Attributes->Add(gcnew CodexStat("Equip Slot", item->Slot));
            if (item->Level > 1)                     d->Attributes->Add(gcnew CodexStat("Item Level", N0(item->Level)));
            if (item->ReqLevel > 0)                  d->Attributes->Add(gcnew CodexStat("Required Level", N0(item->ReqLevel)));
            if (item->ClassId > 0)                   d->Attributes->Add(gcnew CodexStat("Class", GameDataEnums::ClassName(item->ClassId)));
            d->Attributes->Add(gcnew CodexStat("Tradeable", YesNo(item->Trade == 1, "Yes", "No - bound")));
            if (item->MaxEnhance > 0)                d->Attributes->Add(gcnew CodexStat("Max Enhancement", "+" + item->MaxEnhance.ToString()));
            if (item->Durability > 0)
            {
                String^ durability = N0(item->Durability);
                if (item->Repairable)
                {
                    durability += " (repairable)";
                }
                d->Attributes->Add(gcnew CodexStat("Durability", durability));
            }
            if (item->SellPrice > 0)                 d->Attributes->Add(gcnew CodexStat("Sell Price", N0(item->SellPrice)));
            if (item->Stackable > 1)                 d->Attributes->Add(gcnew CodexStat("Max Stack", N0(item->Stackable)));
            d->Attributes->Add(gcnew CodexStat("Item ID", item->Id.ToString()));

            d->Footer = "Base stats are the item's fixed values. Random rolled bonuses & enhancement gains are generated per-item in-game and vary.";
            return d;
        }

        MonsterEntry^ monster = dynamic_cast<MonsterEntry^>(entry);
        if (monster != nullptr)
        {
            String^ subtitle = "Lv " + monster->Level.ToString() + " - " + MonsterGradeLabel(monster->Grade);
            if (monster->VariantCount > 0)
            {
                subtitle += " - " + monster->VariantCount.ToString() + " variant";
                if (monster->VariantCount != 1)
                {
                    subtitle += "s";
                }
            }
            d->Subtitle   = subtitle;
            d->StatsTitle = "Stats";
            d->Stats->Add(gcnew CodexStat("Combat Power",     N0(monster->Cp)));
            d->Stats->Add(gcnew CodexStat("Max HP",           N0(monster->Hp)));
            d->Stats->Add(gcnew CodexStat("Physical Attack",  N0(monster->PAtk)));
            d->Stats->Add(gcnew CodexStat("Magic Attack",     N0(monster->MAtk)));
            d->Stats->Add(gcnew CodexStat("Physical Defense", N0(monster->PDef)));
            d->Stats->Add(gcnew CodexStat("Magic Defense",    N0(monster->MDef)));
            d->Stats->Add(gcnew CodexStat("Accuracy",         N0(monster->Accuracy)));
            d->Stats->Add(gcnew CodexStat("Dodge",            N0(monster->Dodge)));
            d->Stats->Add(gcnew CodexStat("Critical",         N0(monster->Critical)));
            d->Stats->Add(gcnew CodexStat("Avoid Critical",   N0(monster->AvoidCritical)));
            d->Stats->Add(gcnew CodexStat("EXP Reward",       N0(monster->Exp)));
            d->Stats->Add(gcnew CodexStat("Run Speed",        N0(monster->RunSpeed)));

            d->Attributes->Add(gcnew CodexStat("Monster ID",  monster->Id.ToString()));
            d->Attributes->Add(gcnew CodexStat("Resource ID", monster->ResourceId.ToString()));
            d->Attributes->Add(gcnew CodexStat("Race",        monster->Race.ToString()));

            if (monster->Variants != nullptr && monster->Variants->Count > 0)
            {
                d->Variants = monster->Variants;
            }
            return d;
        }

        ObjectEntry^ object = dynamic_cast<ObjectEntry^>(entry);
        if (object != nullptr)
        {
            d->Subtitle = String::IsNullOrEmpty(object->Gather) ? gcnew String("Object") : object->Gather;
            d->Attributes->Add(gcnew CodexStat("Gather Type", String::IsNullOrEmpty(object->Gather) ? gcnew String("-") : object->Gather));
            d->Attributes->Add(gcnew CodexStat("Object ID",   object->Id.ToString()));
            return d;
        }

        NpcEntry^ npc = dynamic_cast<NpcEntry^>(entry);
        if (npc != nullptr)
        {
            d->Subtitle = String::IsNullOrEmpty(npc->Title) ? npc->Faction : (npc->Title + " - " + npc->Faction);
            if (!String::IsNullOrEmpty(npc->Title))
            {
                d->Attributes->Add(gcnew CodexStat("Role", npc->Title));
            }
            d->Attributes->Add(gcnew CodexStat("Disposition", npc->Faction));
            d->Attributes->Add(gcnew CodexStat("Merchant",    YesNo(npc->Merchant, "Yes", "No")));
            d->Attributes->Add(gcnew CodexStat("Movement",    YesNo(npc->Roaming, "Roaming", "Stationary")));
            d->Attributes->Add(gcnew CodexStat("Dialogue",    YesNo(npc->HasDialogue, "Yes", "No")));
            d->Attributes->Add(gcnew CodexStat("NPC ID",      npc->Id.ToString()));
            return d;
        }

        StageEntry^ stage = dynamic_cast<StageEntry^>(entry);
        if (stage != nullptr)
        {
            d->Subtitle = (stage->StageLevel > 0) ? (stage->StageType + " - Lv " + stage->StageLevel.ToString()) : stage->StageType;
            d->Attributes->Add(gcnew CodexStat("Stage ID", stage->Id.ToString()));
            d->Attributes->Add(gcnew CodexStat("Type",     stage->StageType));
            if (stage->StageLevel > 0)
            {
                d->Attributes->Add(gcnew CodexStat("Level", N0(stage->StageLevel)));
            }
            d->Attributes->Add(gcnew CodexStat("Minimap",
                String::IsNullOrEmpty(stage->MapFile) ? gcnew String("None") : stage->MapFile));
            d->Footer = "Double-click a stage or press View Map to open the interactive map.";
            return d;
        }

        d->Attributes->Add(gcnew CodexStat("ID", entry->Id.ToString()));
        return d;
    }

    // ---- name lookups used by the character window ---------------------------------

    ItemEntry^ CodexCatalog::FindItem(long long itemId)
    {
        EnsureItems();
        msclr::lock guard(m_buildLock);
        if (m_itemById == nullptr)
        {
            Dictionary<long long, ItemEntry^>^ map = gcnew Dictionary<long long, ItemEntry^>();
            if (m_items != nullptr)
            {
                for each (ItemEntry^ item in m_items)
                {
                    map[item->Id] = item;
                }
            }
            m_itemById = map;
        }
        ItemEntry^ found;
        return m_itemById->TryGetValue(itemId, found) ? found : nullptr;
    }

    String^ CodexCatalog::NameOf(String^ kind, long long id)
    {
        msclr::lock guard(m_buildLock);
        if (m_nameTables == nullptr)
        {
            m_nameTables = gcnew Dictionary<String^, Dictionary<long long, String^>^>();
        }

        Dictionary<long long, String^>^ names;
        if (!m_nameTables->TryGetValue(kind, names))
        {
            names = gcnew Dictionary<long long, String^>();
            const char* table = nullptr;
            const char* idColumn = nullptr;
            const char* nameColumn = nullptr;
            bool questKind = String::Equals(kind, "quest") || String::Equals(kind, "dailyquest") || String::Equals(kind, "relation");
            if (questKind)
            {
                try
                {
                    GameDataStore* store = m_bridge->NativeStore();
                    List<String^>^ files = gcnew List<String^>();
                    if (String::Equals(kind, "quest"))
                    {
                        std::vector<std::string> listColumns = { "QuestFileName" };
                        std::shared_ptr<GameDataTable> list = RequireLite(store, "QUEST_LIST", listColumns);
                        for (size_t r = 0; r < list->RowCount(); ++r) files->Add(CellStr(*list, r, 0)->Trim());
                    }
                    else if (String::Equals(kind, "dailyquest")) files->Add("QUESTDAILY_HOMEWORK");
                    else files->Add("QUEST_RELATION");

                    String^ idName = String::Equals(kind, "quest") ? gcnew String("QuestId") : (String::Equals(kind, "dailyquest") ? gcnew String("QuestDailyHomeworkId") : gcnew String("RelationId"));
                    String^ sidName = String::Equals(kind, "quest") ? gcnew String("QuestTitleSID") : (String::Equals(kind, "dailyquest") ? gcnew String("QuestDailyHomeworkTitleSID") : gcnew String("RelationTitleSID"));
                    for each (String^ file in files)
                    {
                        if (file->Length == 0) continue;
                        try
                        {
                            std::string fileName = ToUtf8(file);
                            std::vector<std::string> cols = { ToUtf8(idName), ToUtf8(sidName) };
                            std::shared_ptr<GameDataTable> t = RequireLite(store, fileName.c_str(), cols);
                            const int cId = t->FindColumn(cols[0]);
                            const int cSid = t->FindColumn(cols[1]);
                            for (size_t r = 0; r < t->RowCount(); ++r)
                            {
                                long long qid = CellInt(*t, r, cId);
                                if (qid <= 0 || names->ContainsKey(qid)) continue;
                                String^ text = QuestString(CellInt(*t, r, cSid));
                                if (!String::IsNullOrEmpty(text)) names[qid] = text;
                            }
                        }
                        catch (Exception^)
                        {
                            // one chapter file missing or odd: skip it
                        }
                    }
                }
                catch (Exception^)
                {
                }
            }
            else if (String::Equals(kind, "stage"))
            {
                try
                {
                    GameDataStore* store = m_bridge->NativeStore();
                    const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
                    std::vector<std::string> columns = { "StageID", "StageNameSID", "QuestStageNameSID" };
                    std::shared_ptr<GameDataTable> st = RequireLite(store, "STAGE", columns);
                    const int cId = st->FindColumn("StageID");
                    const int cName = st->FindColumn("StageNameSID");
                    const int cQuest = st->FindColumn("QuestStageNameSID");
                    for (size_t r = 0; r < st->RowCount(); ++r)
                    {
                        long long stageId = CellInt(*st, r, cId);
                        if (stageId <= 0 || names->ContainsKey(stageId)) continue;
                        String^ text = ResolveTemplate(store, CellInt(*st, r, cName), lang);
                        if (String::IsNullOrEmpty(text)) text = ResolveTemplate(store, CellInt(*st, r, cQuest), lang);
                        if (!String::IsNullOrEmpty(text)) names[stageId] = text;
                    }
                }
                catch (Exception^)
                {
                }
            }
            else if (String::Equals(kind, "skill"))        { table = "SKILL";   idColumn = "SkillId";   nameColumn = "NameSid"; }
            else if (String::Equals(kind, "pet"))     { table = "PET";     idColumn = "PetId";     nameColumn = "NameId"; }
            else if (String::Equals(kind, "vehicle")) { table = "VEHICLE"; idColumn = "VehicleId"; nameColumn = "NameId"; }

            if (table != nullptr)
            {
                try
                {
                    GameDataStore* store = m_bridge->NativeStore();
                    std::vector<std::string> columns = { idColumn, nameColumn };
                    std::shared_ptr<GameDataTable> t = RequireLite(store, table, columns);
                    const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
                    const int cId = t->FindColumn(idColumn);
                    const int cName = t->FindColumn(nameColumn);
                    const size_t rows = t->RowCount();
                    for (size_t r = 0; r < rows; ++r)
                    {
                        long long rowId = CellInt(*t, r, cId);
                        if (rowId <= 0 || names->ContainsKey(rowId)) continue;
                        String^ text = ResolveTemplate(store, CellInt(*t, r, cName), lang);
                        if (!String::IsNullOrEmpty(text)) names[rowId] = text;
                    }
                }
                catch (Exception^)
                {
                    // table missing: names stay empty, the window shows ids only
                }
            }
            m_nameTables[kind] = names;
        }

        String^ name;
        return names->TryGetValue(id, name) ? name : String::Empty;
    }

    // STRING_QUESTTEMPLATE.json text for a string id (language = Lang, fallback TextKr). Caller holds m_buildLock.
    String^ CodexCatalog::QuestString(long long stringId)
    {
        if (stringId <= 0) return String::Empty;
        if (m_questStrings == nullptr)
        {
            Dictionary<long long, String^>^ map = gcnew Dictionary<long long, String^>();
            try
            {
                const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
                std::vector<std::string> columns = { "StringId", lang, "TextKr" };
                std::shared_ptr<GameDataTable> t = RequireLite(m_bridge->NativeStore(), "STRING_QUESTTEMPLATE", columns);
                const int cId = t->FindColumn("StringId");
                const int cLang = t->FindColumn(lang);
                const int cKr = t->FindColumn("TextKr");
                for (size_t r = 0; r < t->RowCount(); ++r)
                {
                    long long id = CellInt(*t, r, cId);
                    String^ text = CellStr(*t, r, cLang)->Trim();
                    if (text->Length == 0) text = CellStr(*t, r, cKr)->Trim();
                    if (id > 0 && text->Length > 0) map[id] = text;
                }
            }
            catch (Exception^)
            {
            }
            m_questStrings = map;
        }
        String^ text;
        return m_questStrings->TryGetValue(stringId, text) ? text : String::Empty;
    }

    String^ CodexCatalog::AchievementName(long long groupId, long long grade)
    {
        msclr::lock guard(m_buildLock);
        if (m_achievementNames == nullptr)
        {
            Dictionary<long long, String^>^ map = gcnew Dictionary<long long, String^>();
            try
            {
                GameDataStore* store = m_bridge->NativeStore();
                const std::string lang = String::IsNullOrWhiteSpace(Lang) ? std::string("ENG") : ToUtf8(Lang);
                std::vector<std::string> columns = { "AchievementGroupId", "AchievementGroupGrade", "AchievementName" };
                std::shared_ptr<GameDataTable> t = RequireLite(store, "ACHIEVEMENT", columns);
                const int cGroup = t->FindColumn("AchievementGroupId");
                const int cGrade = t->FindColumn("AchievementGroupGrade");
                const int cName = t->FindColumn("AchievementName");
                for (size_t r = 0; r < t->RowCount(); ++r)
                {
                    long long key = CellInt(*t, r, cGroup) * 1000 + CellInt(*t, r, cGrade);
                    if (map->ContainsKey(key)) continue;
                    String^ text = ResolveTemplate(store, CellInt(*t, r, cName), lang);
                    if (!String::IsNullOrEmpty(text)) map[key] = text;
                }
            }
            catch (Exception^)
            {
            }
            m_achievementNames = map;
        }
        String^ name;
        return m_achievementNames->TryGetValue(groupId * 1000 + grade, name) ? name : String::Empty;
    }

    // ---- "Found in maps" for the monster panel ----------------------------------------

    List<CodexMapSpawn^>^ CodexCatalog::MapsForMonster(MonsterEntry^ monster)
    {
        List<CodexMapSpawn^>^ maps = gcnew List<CodexMapSpawn^>();
        if (monster == nullptr) return maps;
        try
        {
            EnsureStages();   // stage names

            // every row of the card: the primary plus its variants
            List<MonsterEntry^>^ rows = gcnew List<MonsterEntry^>();
            if (monster->Variants != nullptr && monster->Variants->Count > 0) rows->AddRange(monster->Variants);
            else rows->Add(monster);
            const bool showMonster = rows->Count > 1;

            const std::wstring root = msclr::interop::marshal_as<std::wstring>(m_bridge->DataRoot());
            for each (MonsterEntry^ row in rows)
            {
                std::vector<SpawnStage> stages;
                std::string error;
                if (!::StageMapData::GetMonsterSpawns(root, row->Id, stages, error)) return maps;

                for (size_t i = 0; i < stages.size(); ++i)
                {
                    StageEntry^ stage = FindStage(stages[i].stageId);
                    CodexMapSpawn^ m = gcnew CodexMapSpawn();
                    m->StageId   = stages[i].stageId;
                    String^ mapName = (stage != nullptr) ? stage->Name : String::Format("Stage {0}", stages[i].stageId);
                    m->MapName   = mapName;
                    m->Count     = stages[i].count;
                    m->MonsterId = row->Id;
                    m->Title     = m->MapName;
                    String^ detail = (stages[i].count == 1) ? gcnew String("1 spawn") : String::Format("{0} spawns", stages[i].count);
                    if (showMonster)
                    {
                        detail = detail + String::Format("  -  Lv {0} (monster #{1})", row->Level, row->Id);
                    }
                    m->Detail = detail + String::Format("  -  stage #{0}", m->StageId);
                    maps->Add(m);
                }
            }
            maps->Sort(gcnew Comparison<CodexMapSpawn^>(&CodexSort::MapSpawnByCount));
        }
        catch (Exception^)
        {
            // data missing: the panel simply shows no maps
        }
        return maps;
    }

    MapSpawnJob::MapSpawnJob(CodexCatalog^ catalog, System::Windows::Threading::Dispatcher^ target, System::Action<MapSpawnResult^>^ done)
    {
        m_catalog = catalog;
        m_target  = target;
        m_done    = done;
    }

    void MapSpawnJob::Start()
    {
        System::Threading::Thread^ worker = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MapSpawnJob::Run));
        worker->IsBackground = true;
        worker->Start();
    }

    void MapSpawnJob::Run()
    {
        MapSpawnResult^ result = gcnew MapSpawnResult();
        result->Seq = Seq;
        try
        {
            result->Maps = m_catalog->MapsForMonster(Monster);
        }
        catch (Exception^ ex)
        {
            result->Maps = gcnew List<CodexMapSpawn^>();
            result->Error = ex->Message;
        }
        try
        {
            m_target->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal, m_done, result);
        }
        catch (Exception^)
        {
        }
    }
}
