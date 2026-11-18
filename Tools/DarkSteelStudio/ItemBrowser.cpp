#include "ItemBrowser.h"
#include "StudioLog.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Globalization;
    using namespace System::Collections;
    using namespace System::Web::Script::Serialization;
    using System::Collections::IDictionary;
    using System::Collections::IEnumerable;
    using System::Collections::DictionaryEntry;

    // =========================================================================
    // Construction / lifetime
    // =========================================================================

    ItemBrowser::ItemBrowser(Window^ window, StudioSettings^ settings, System::Action<String^>^ status)
        : m_window(window), m_settings(settings), m_status(status), m_items(nullptr),
          m_dataRoot(nullptr), m_iconRoot(nullptr), m_loadNote(nullptr), m_updating(false)
    {
    }

    Object^ ItemBrowser::Named(FrameworkElement^ root, String^ name)
    {
        Object^ found = root->FindName(name);
        if (found == nullptr)
        {
            throw gcnew InvalidOperationException("GameData.xaml is missing a control named '" + name + "'.");
        }
        return found;
    }

    void ItemBrowser::Leave()
    {
        m_search = nullptr;  m_typeBox = nullptr;  m_gradeBox = nullptr;  m_reload = nullptr;
        m_count = nullptr;   m_footer = nullptr;   m_grid = nullptr;      m_detailIcon = nullptr;
        m_detailTitle = nullptr;  m_detailMeta = nullptr;  m_detailText = nullptr;
        m_fieldGrid = nullptr;    m_copyId = nullptr;      m_copyCmd = nullptr;
    }

    void ItemBrowser::Show(FrameworkElement^ page)
    {
        StudioLogScope logScope("ItemBrowser.Show");

        m_search      = safe_cast<TextBox^>(Named(page, "ItemSearchBox"));
        m_typeBox     = safe_cast<ComboBox^>(Named(page, "ItemTypeBox"));
        m_gradeBox    = safe_cast<ComboBox^>(Named(page, "ItemGradeBox"));
        m_reload      = safe_cast<Button^>(Named(page, "ItemReloadButton"));
        m_count       = safe_cast<TextBlock^>(Named(page, "ItemCountText"));
        m_footer      = safe_cast<TextBlock^>(Named(page, "ItemFooterText"));
        m_grid        = safe_cast<DataGrid^>(Named(page, "ItemGrid"));
        m_detailIcon  = safe_cast<Image^>(Named(page, "ItemDetailIcon"));
        m_detailTitle = safe_cast<TextBlock^>(Named(page, "ItemDetailTitle"));
        m_detailMeta  = safe_cast<TextBlock^>(Named(page, "ItemDetailMeta"));
        m_detailText  = safe_cast<TextBlock^>(Named(page, "ItemDetailText"));
        m_fieldGrid   = safe_cast<DataGrid^>(Named(page, "ItemFieldGrid"));
        m_copyId      = safe_cast<Button^>(Named(page, "ItemCopyIdButton"));
        m_copyCmd     = safe_cast<Button^>(Named(page, "ItemCopyCommandButton"));

        m_search->TextChanged        += gcnew TextChangedEventHandler(this, &ItemBrowser::OnSearchChanged);
        m_typeBox->SelectionChanged  += gcnew System::Windows::Controls::SelectionChangedEventHandler(this, &ItemBrowser::OnFilterChanged);
        m_gradeBox->SelectionChanged += gcnew System::Windows::Controls::SelectionChangedEventHandler(this, &ItemBrowser::OnFilterChanged);
        m_grid->SelectionChanged     += gcnew System::Windows::Controls::SelectionChangedEventHandler(this, &ItemBrowser::OnGridSelection);
        m_reload->Click              += gcnew RoutedEventHandler(this, &ItemBrowser::OnReloadClick);
        m_copyId->Click              += gcnew RoutedEventHandler(this, &ItemBrowser::OnCopyIdClick);
        m_copyCmd->Click             += gcnew RoutedEventHandler(this, &ItemBrowser::OnCopyCommandClick);

        if (m_items == nullptr)
        {
            Load();
        }
        FillFilters();
        ApplyFilters();
        m_footer->Text = m_loadNote;
        ShowDetail(nullptr);
    }

    // =========================================================================
    // Data loading
    // =========================================================================

    // Walks up from startDir (up to 10 levels) and returns the first existing "<dir>\<relative>" folder.
    String^ ItemBrowser::FindUp(String^ startDir, array<String^>^ relatives)
    {
        if (String::IsNullOrEmpty(startDir)) return nullptr;
        String^ dir = startDir;
        for (int level = 0; level < 10 && !String::IsNullOrEmpty(dir); ++level)
        {
            for each (String^ rel in relatives)
            {
                String^ candidate = Path::Combine(dir, rel);
                if (Directory::Exists(candidate)) return candidate;
            }
            DirectoryInfo^ parent = Directory::GetParent(dir);
            dir = (parent == nullptr) ? nullptr : parent->FullName;
        }
        return nullptr;
    }

    String^ ItemBrowser::StripEnum(String^ value)
    {
        // "EDS_ItemMainType::Weapon" -> "Weapon"
        if (value != nullptr && value->StartsWith("EDS_", StringComparison::Ordinal))
        {
            int p = value->IndexOf("::", StringComparison::Ordinal);
            if (p > 0) return value->Substring(p + 2);
        }
        return value;
    }

    String^ ItemBrowser::Str(Object^ value)
    {
        if (value == nullptr) return String::Empty;
        String^ s = dynamic_cast<String^>(value);
        if (s != nullptr) return StripEnum(s);

        IDictionary^ dict = dynamic_cast<IDictionary^>(value);
        if (dict != nullptr)
        {
            // {"ID":123} references are shown as the bare id
            StringBuilder^ sb = gcnew StringBuilder();
            for each (DictionaryEntry de in dict)
            {
                if (sb->Length > 0) sb->Append(", ");
                sb->Append(dict->Count > 1 ? de.Key->ToString() + "=" : String::Empty)->Append(Str(de.Value));
            }
            return sb->ToString();
        }

        IEnumerable^ list = dynamic_cast<IEnumerable^>(value);
        if (list != nullptr)
        {
            StringBuilder^ sb = gcnew StringBuilder();
            for each (Object^ element in list)
            {
                if (sb->Length > 0) sb->Append(", ");
                sb->Append(Str(element));
            }
            return sb->Length == 0 ? "(none)" : sb->ToString();
        }

        if (dynamic_cast<bool^>(value) != nullptr) return safe_cast<bool>(value) ? "true" : "false";
        return Convert::ToString(value, CultureInfo::InvariantCulture);
    }

    // Both data files are FModel DataTable exports: [ { "Rows": { "<id>": { ... } } } ]
    IDictionary^ ItemBrowser::ReadRows(String^ path)
    {
        JavaScriptSerializer^ json = gcnew JavaScriptSerializer();
        json->MaxJsonLength = Int32::MaxValue;
        json->RecursionLimit = 200;
        Object^ root = json->DeserializeObject(File::ReadAllText(path, Encoding::UTF8));
        for each (Object^ table in safe_cast<IEnumerable^>(root))
        {
            IDictionary^ dict = dynamic_cast<IDictionary^>(table);
            if (dict != nullptr && dict->Contains("Rows")) return safe_cast<IDictionary^>(dict["Rows"]);
        }
        return nullptr;
    }

    // String id referenced by an ID_ column: {"ID": 123}
    String^ ItemBrowser::TextOf(Dictionary<long long, String^>^ strings, Object^ reference)
    {
        IDictionary^ dict = dynamic_cast<IDictionary^>(reference);
        if (dict == nullptr || !dict->Contains("ID")) return String::Empty;
        String^ text;
        return strings->TryGetValue(Convert::ToInt64(dict["ID"], CultureInfo::InvariantCulture), text) ? text : String::Empty;
    }

    int ItemBrowser::CompareItems(M5Item^ a, M5Item^ b)
    {
        return a->Id.CompareTo(b->Id);
    }
    void ItemBrowser::Load()
    {
        StudioLogScope logScope("ItemBrowser.Load");
        m_items = gcnew List<M5Item^>();
        m_dataRoot = nullptr;
        m_iconRoot = nullptr;

        array<String^>^ dataRel = gcnew array<String^> { "Server\\Bin\\Data", "Bin\\Data" };
        array<String^>^ iconRel = gcnew array<String^> { "Images\\Items", "Tools\\DarkSteelStudio\\Images\\Items" };

        // 1) the folders chosen on the Settings page
        String^ server = m_settings->ServersPath;
        if (!String::IsNullOrWhiteSpace(server))
        {
            array<String^>^ candidates = gcnew array<String^> { Path::Combine(server, "Bin\\Data"), Path::Combine(server, "Data"), server };
            for each (String^ candidate in candidates)
            {
                if (File::Exists(Path::Combine(candidate, "Common\\ItemBase.json"))) { m_dataRoot = candidate; break; }
            }
        }
        String^ images = m_settings->ImagesPath;
        if (!String::IsNullOrWhiteSpace(images))
        {
            if (Directory::Exists(Path::Combine(images, "Items"))) m_iconRoot = Path::Combine(images, "Items");
            else if (Directory::Exists(images)) m_iconRoot = images;
        }

        // 2) fall back to searching upwards from the exe / working directory
        String^ baseDir = AppDomain::CurrentDomain->BaseDirectory;
        if (m_dataRoot == nullptr) m_dataRoot = FindUp(baseDir, dataRel);
        if (m_dataRoot == nullptr) m_dataRoot = FindUp(Directory::GetCurrentDirectory(), dataRel);
        if (m_iconRoot == nullptr) m_iconRoot = FindUp(baseDir, iconRel);
        if (m_iconRoot == nullptr) m_iconRoot = FindUp(Directory::GetCurrentDirectory(), iconRel);

        if (m_dataRoot == nullptr)
        {
            m_loadNote = "Could not find the item data. Set the Server folder on the Settings page (it must contain Bin\\Data\\Common\\ItemBase.json).";
            StudioLog::Info("ItemBrowser: " + m_loadNote);
            return;
        }

        String^ itemFile   = Path::Combine(m_dataRoot, "Common\\ItemBase.json");
        String^ stringFile = Path::Combine(m_dataRoot, "String\\Eng\\StringItem_Eng.json");
        if (!File::Exists(itemFile))
        {
            m_loadNote = "Missing " + itemFile;
            StudioLog::Info("ItemBrowser: " + m_loadNote);
            return;
        }

        System::Diagnostics::Stopwatch^ clock = System::Diagnostics::Stopwatch::StartNew();
        IDictionary^ itemRows = ReadRows(itemFile);

        Dictionary<long long, String^>^ strings = gcnew Dictionary<long long, String^>();
        if (File::Exists(stringFile))
        {
            IDictionary^ stringRows = ReadRows(stringFile);
            if (stringRows != nullptr)
            {
                for each (DictionaryEntry de in stringRows)
                {
                    IDictionary^ row = dynamic_cast<IDictionary^>(de.Value);
                    if (row != nullptr && row->Contains("Text"))
                    {
                        strings[Convert::ToInt64(de.Key, CultureInfo::InvariantCulture)] = Str(row["Text"]);
                    }
                }
            }
        }

        int withIcon = 0;
        if (itemRows != nullptr)
        {
            for each (DictionaryEntry de in itemRows)
            {
                IDictionary^ row = dynamic_cast<IDictionary^>(de.Value);
                if (row == nullptr) continue;

                M5Item^ item = gcnew M5Item();
                item->Id          = Convert::ToInt64(de.Key, CultureInfo::InvariantCulture);
                item->Name        = row->Contains("ID_Name")    ? TextOf(strings, row["ID_Name"])    : String::Empty;
                item->Description = row->Contains("ID_Explain") ? TextOf(strings, row["ID_Explain"]) : String::Empty;
                if (String::IsNullOrEmpty(item->Name)) item->Name = "(item " + item->Id + ")";
                item->MainType = row->Contains("MainType")    ? Str(row["MainType"])    : String::Empty;
                item->ItemType = row->Contains("ItemType")    ? Str(row["ItemType"])    : String::Empty;
                item->Grade    = row->Contains("ID_GradeType") ? Str(row["ID_GradeType"]) : String::Empty;
                item->Level    = row->Contains("RequireLevel") ? Convert::ToInt32(row["RequireLevel"], CultureInfo::InvariantCulture) : 0;
                item->IconId   = row->Contains("ID_Icon")      ? Convert::ToInt64(row["ID_Icon"], CultureInfo::InvariantCulture) : 0;

                item->IconPath = nullptr;
                if (m_iconRoot != nullptr && item->IconId != 0)
                {
                    String^ png = Path::Combine(m_iconRoot, item->IconId + ".png");
                    if (File::Exists(png)) { item->IconPath = png; ++withIcon; }
                }

                item->Fields = gcnew List<M5ItemField^>();
                for each (DictionaryEntry field in row)
                {
                    M5ItemField^ f = gcnew M5ItemField();
                    f->Field = field.Key->ToString();
                    f->Value = Str(field.Value);
                    f->Text  = f->Field->StartsWith("ID_", StringComparison::Ordinal) ? TextOf(strings, field.Value) : String::Empty;
                    item->Fields->Add(f);
                }
                m_items->Add(item);
            }
        }

        m_items->Sort(gcnew Comparison<M5Item^>(&ItemBrowser::CompareItems));

        m_loadNote = String::Format("{0} items, {1} names, {2} icons  |  {3}  |  {4:0} ms",
                                    m_items->Count, strings->Count, withIcon, m_dataRoot,
                                    (double)clock->ElapsedMilliseconds);
        if (m_iconRoot == nullptr) m_loadNote += "  |  no icon folder found (set the Images folder on the Settings page)";
        StudioLog::Info("ItemBrowser: " + m_loadNote);
    }

    // =========================================================================
    // Filters
    // =========================================================================

    void ItemBrowser::FillFilters()
    {
        m_updating = true;

        String^ keepType  = (m_typeBox->SelectedItem  != nullptr) ? m_typeBox->SelectedItem->ToString()  : nullptr;
        String^ keepGrade = (m_gradeBox->SelectedItem != nullptr) ? m_gradeBox->SelectedItem->ToString() : nullptr;

        SortedDictionary<String^, int>^ types  = gcnew SortedDictionary<String^, int>();
        SortedDictionary<String^, int>^ grades = gcnew SortedDictionary<String^, int>();
        for each (M5Item^ item in m_items)
        {
            if (!String::IsNullOrEmpty(item->MainType)) types[item->MainType] = 1;
            if (!String::IsNullOrEmpty(item->Grade))    grades[item->Grade]   = 1;
        }

        m_typeBox->Items->Clear();
        m_typeBox->Items->Add("All types");
        for each (KeyValuePair<String^, int> kv in types) m_typeBox->Items->Add(kv.Key);
        m_typeBox->SelectedItem = (keepType != nullptr && m_typeBox->Items->Contains(keepType)) ? (Object^)keepType : m_typeBox->Items[0];

        m_gradeBox->Items->Clear();
        m_gradeBox->Items->Add("All grades");
        for each (KeyValuePair<String^, int> kv in grades) m_gradeBox->Items->Add(kv.Key);
        m_gradeBox->SelectedItem = (keepGrade != nullptr && m_gradeBox->Items->Contains(keepGrade)) ? (Object^)keepGrade : m_gradeBox->Items[0];

        m_updating = false;
    }

    void ItemBrowser::ApplyFilters()
    {
        if (m_grid == nullptr || m_items == nullptr) return;

        String^ text = m_search->Text->Trim();
        String^ type  = (m_typeBox->SelectedIndex  > 0) ? m_typeBox->SelectedItem->ToString()  : nullptr;
        String^ grade = (m_gradeBox->SelectedIndex > 0) ? m_gradeBox->SelectedItem->ToString() : nullptr;

        List<M5Item^>^ shown = gcnew List<M5Item^>();
        for each (M5Item^ item in m_items)
        {
            if (type != nullptr  && !String::Equals(item->MainType, type,  StringComparison::Ordinal)) continue;
            if (grade != nullptr && !String::Equals(item->Grade,    grade, StringComparison::Ordinal)) continue;
            if (text->Length > 0)
            {
                bool hit = item->Name->IndexOf(text, StringComparison::OrdinalIgnoreCase) >= 0
                        || item->ItemType->IndexOf(text, StringComparison::OrdinalIgnoreCase) >= 0
                        || item->Id.ToString()->Contains(text);
                if (!hit) continue;
            }
            shown->Add(item);
        }

        m_grid->ItemsSource = shown;
        m_count->Text = String::Format("{0:N0} of {1:N0} items", shown->Count, m_items->Count);
        if (shown->Count > 0) m_grid->SelectedIndex = 0;
        else ShowDetail(nullptr);
    }

    void ItemBrowser::ShowDetail(M5Item^ item)
    {
        if (m_detailTitle == nullptr) return;
        if (item == nullptr)
        {
            m_detailIcon->Source = nullptr;
            m_detailTitle->Text  = "Select an item";
            m_detailMeta->Text   = String::Empty;
            m_detailText->Text   = String::Empty;
            m_fieldGrid->ItemsSource = nullptr;
            m_copyId->IsEnabled  = false;
            m_copyCmd->IsEnabled = false;
            return;
        }

        System::Windows::Media::Imaging::BitmapImage^ image = nullptr;
        if (item->IconPath != nullptr)
        {
            try
            {
                image = gcnew System::Windows::Media::Imaging::BitmapImage();
                image->BeginInit();
                image->CacheOption = System::Windows::Media::Imaging::BitmapCacheOption::OnLoad;   // do not lock the PNG
                image->UriSource   = gcnew Uri(item->IconPath);
                image->EndInit();
            }
            catch (Exception^) { image = nullptr; }
        }
        m_detailIcon->Source = image;

        m_detailTitle->Text = item->Name;
        m_detailMeta->Text  = String::Format("ID {0}  |  {1} / {2}  |  {3}  |  required level {4}",
                                             item->Id, item->MainType, item->ItemType, item->Grade, item->Level);
        m_detailText->Text  = item->Description;
        m_fieldGrid->ItemsSource = item->Fields;
        m_copyId->IsEnabled  = true;
        m_copyCmd->IsEnabled = true;
    }

    // =========================================================================
    // Events
    // =========================================================================

    void ItemBrowser::OnFilterChanged(Object^ sender, System::Windows::Controls::SelectionChangedEventArgs^ e)
    {
        if (!m_updating) ApplyFilters();
    }

    void ItemBrowser::OnSearchChanged(Object^ sender, TextChangedEventArgs^ e)
    {
        if (!m_updating) ApplyFilters();
    }

    void ItemBrowser::OnGridSelection(Object^ sender, System::Windows::Controls::SelectionChangedEventArgs^ e)
    {
        if (m_grid != nullptr) ShowDetail(dynamic_cast<M5Item^>(m_grid->SelectedItem));
    }

    void ItemBrowser::OnReloadClick(Object^ sender, RoutedEventArgs^ e)
    {
        try
        {
            Load();
            FillFilters();
            ApplyFilters();
            m_footer->Text = m_loadNote;
            if (m_status != nullptr) m_status->Invoke("Items reloaded: " + m_items->Count + " items");
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("ItemBrowser.Reload", ex);
            if (m_status != nullptr) m_status->Invoke("Could not read the item data: " + ex->Message);
        }
    }

    void ItemBrowser::OnCopyIdClick(Object^ sender, RoutedEventArgs^ e)
    {
        M5Item^ item = dynamic_cast<M5Item^>(m_grid->SelectedItem);
        if (item == nullptr) return;
        Clipboard::SetText(item->Id.ToString());
        if (m_status != nullptr) m_status->Invoke("Copied item id " + item->Id);
    }

    // The in-game chat GM command (Mir5Gm): "item <id> <qty>".
    void ItemBrowser::OnCopyCommandClick(Object^ sender, RoutedEventArgs^ e)
    {
        M5Item^ item = dynamic_cast<M5Item^>(m_grid->SelectedItem);
        if (item == nullptr) return;
        String^ command = "item " + item->Id + " 1";
        Clipboard::SetText(command);
        if (m_status != nullptr) m_status->Invoke("Copied GM command: " + command);
    }
}
