#include "MainWindow.h"
#include "GameDataEnums.h"

namespace DarkSteelStudio {

    using namespace System::Collections::Generic;
    using namespace System::Collections::ObjectModel;
    using namespace System::Windows::Markup;
    using namespace System::Windows::Media;

    namespace {
        const int kMaxWalkUpLevels = 10;
    }

    // =========================================================================
    // Construction
    // =========================================================================

    MainWindow::MainWindow()
    {
        String^ baseDir = AppDomain::CurrentDomain->BaseDirectory;

        m_configPath = Path::Combine(baseDir, "DarkSteelStudio.config.json");
        m_settings   = StudioSettings::Load(m_configPath);

        if (String::IsNullOrWhiteSpace(m_settings->ServersPath))
        {
            m_settings->ServersPath = DetectServersPath(baseDir);
        }
        if (String::IsNullOrWhiteSpace(m_settings->ImagesPath))
        {
            // the "Images" folder (with Items inside) that ships next to this tool
            DirectoryInfo^ dir = gcnew DirectoryInfo(baseDir);
            for (int level = 0; level < kMaxWalkUpLevels && dir != nullptr; ++level, dir = dir->Parent)
            {
                array<String^>^ candidates = gcnew array<String^> { Path::Combine(dir->FullName, "Images"), Path::Combine(dir->FullName, "Tools\\DarkSteelStudio\\Images") };
                String^ found = nullptr;
                for each (String^ images in candidates)
                {
                    if (Directory::Exists(Path::Combine(images, "Items"))) { found = images; break; }
                }
                if (found != nullptr) { m_settings->ImagesPath = found; break; }
            }
        }

        m_xamlRoot = ResolveXamlRoot();
        LoadTheme();

        Object^ root = LoadXamlObject("MainWindow.xaml");
        m_window = dynamic_cast<Window^>(root);
        if (m_window == nullptr)
        {
            throw gcnew InvalidOperationException("Xaml\\MainWindow.xaml: the root element must be a <Window>.");
        }

        BindControls();
        WireEvents();
        RestoreWindowState();
        UpdateDbStatus();
        LoadDbParamsFromSettings();
        StartDbTask("test");   // background connection check; the header shows the result
        SelectInitialSection();
    }

    Window^ MainWindow::GetWindow()
    {
        return m_window;
    }

    // =========================================================================
    // Startup helpers
    // =========================================================================

    // Walks up from startDir looking for the Mir 5 "Server" folder ("<dir>\Server" that has Bin\Data\Common).
    // Returns an absolute path (it is only stored relative when the settings are saved).
    String^ MainWindow::DetectServersPath(String^ startDir)
    {
        try
        {
            DirectoryInfo^ dir = gcnew DirectoryInfo(startDir);
            for (int level = 0; level < kMaxWalkUpLevels && dir != nullptr; ++level)
            {
                String^ candidate = Path::Combine(dir->FullName, "Server");
                if (Directory::Exists(Path::Combine(candidate, "Bin\\Data\\Common")))
                {
                    return candidate;
                }
                dir = dir->Parent;
            }
        }
        catch (Exception^)
        {
            // Best-effort detection only.
        }
        return String::Empty;
    }

    // Order: configured XamlRoot -> "<exe dir>\Xaml" -> walk up from the exe dir
    // (so a Debug build run straight from x64\Debug finds the project's Xaml
    // folder even before the post-build copy has happened).
    String^ MainWindow::ResolveXamlRoot()
    {
        if (!String::IsNullOrWhiteSpace(m_settings->XamlRoot) &&
            File::Exists(Path::Combine(m_settings->XamlRoot, "MainWindow.xaml")))
        {
            return m_settings->XamlRoot;
        }

        String^ baseDir = AppDomain::CurrentDomain->BaseDirectory;

        String^ beside = Path::Combine(baseDir, "Xaml");
        if (File::Exists(Path::Combine(beside, "MainWindow.xaml")))
        {
            return beside;
        }

        DirectoryInfo^ dir = gcnew DirectoryInfo(baseDir);
        for (int level = 0; level < kMaxWalkUpLevels && dir != nullptr; ++level)
        {
            String^ candidate = Path::Combine(dir->FullName, "Xaml");
            if (File::Exists(Path::Combine(candidate, "MainWindow.xaml")))
            {
                return candidate;
            }
            dir = dir->Parent;
        }

        throw gcnew FileNotFoundException(
            "Could not locate the Xaml folder (MainWindow.xaml). Looked in the configured XamlRoot, "
            "next to the executable, and up the directory tree from " + baseDir + ".");
    }

    String^ MainWindow::XamlPath(String^ relative)
    {
        return Path::Combine(m_xamlRoot, relative);
    }

    Object^ MainWindow::LoadXamlObject(String^ relative)
    {
        String^ fullPath = XamlPath(relative);

        // BaseUri = the file itself, so relative Source="Theme.xaml" /
        // "../Theme.xaml" merged dictionaries inside the XAML resolve against
        // the file's own folder (XamlReader has no base URI otherwise).
        ParserContext^ context = gcnew ParserContext();
        context->BaseUri = gcnew Uri(fullPath, UriKind::Absolute);

        FileStream^ stream = gcnew FileStream(fullPath, FileMode::Open, FileAccess::Read, FileShare::Read);
        try
        {
            return XamlReader::Load(stream, context);
        }
        finally
        {
            stream->Close();
        }
    }

    Object^ MainWindow::FindRequired(FrameworkElement^ root, String^ name)
    {
        Object^ found = (root == nullptr) ? nullptr : root->FindName(name);
        if (found == nullptr)
        {
            throw gcnew InvalidOperationException("XAML is missing a required element named '" + name + "'.");
        }
        return found;
    }

    Object^ MainWindow::FindOptional(FrameworkElement^ root, String^ name)
    {
        return (root == nullptr) ? nullptr : root->FindName(name);
    }

    void MainWindow::LoadTheme()
    {
        if (Application::Current == nullptr)
        {
            throw gcnew InvalidOperationException("A WPF Application must exist before the theme is loaded.");
        }

        ResourceDictionary^ theme = dynamic_cast<ResourceDictionary^>(LoadXamlObject("Theme.xaml"));
        if (theme == nullptr)
        {
            throw gcnew InvalidOperationException("Xaml\\Theme.xaml: the root element must be a <ResourceDictionary>.");
        }

        Collection<ResourceDictionary^>^ merged = Application::Current->Resources->MergedDictionaries;
        if (m_theme != nullptr)
        {
            merged->Remove(m_theme);
        }
        merged->Add(theme);
        m_theme = theme;
    }

    void MainWindow::BindControls()
    {
        m_navList          = safe_cast<ListBox^>(FindRequired(m_window, "NavList"));
        m_contentHost      = safe_cast<ContentControl^>(FindRequired(m_window, "ContentHost"));
        m_pageTitle        = safe_cast<TextBlock^>(FindRequired(m_window, "PageTitle"));
        m_statusText       = safe_cast<TextBlock^>(FindRequired(m_window, "StatusText"));
        m_dbStatusText     = safe_cast<TextBlock^>(FindRequired(m_window, "DbStatusText"));
        m_reloadXamlButton = safe_cast<Button^>(FindRequired(m_window, "ReloadXamlButton"));
        m_aboutButton      = safe_cast<Button^>(FindRequired(m_window, "AboutButton"));
    }

    void MainWindow::WireEvents()
    {
        m_navList->SelectionChanged  += gcnew SelectionChangedEventHandler(this, &MainWindow::OnNavSelectionChanged);
        m_reloadXamlButton->Click    += gcnew RoutedEventHandler(this, &MainWindow::OnReloadXamlClick);
        m_aboutButton->Click         += gcnew RoutedEventHandler(this, &MainWindow::OnAboutClick);
        m_window->KeyDown            += gcnew System::Windows::Input::KeyEventHandler(this, &MainWindow::OnWindowKeyDown);
        m_window->Closing            += gcnew System::ComponentModel::CancelEventHandler(this, &MainWindow::OnWindowClosing);
    }

    void MainWindow::RestoreWindowState()
    {
        if (m_settings->WindowWidth >= 640)
        {
            m_window->Width = m_settings->WindowWidth;
        }
        if (m_settings->WindowHeight >= 480)
        {
            m_window->Height = m_settings->WindowHeight;
        }
        if (m_settings->WindowMaximized)
        {
            m_window->WindowState = WindowState::Maximized;
        }
    }

    void MainWindow::SelectInitialSection()
    {
        ListBoxItem^ match = nullptr;

        for each (Object^ entry in m_navList->Items)
        {
            ListBoxItem^ item = dynamic_cast<ListBoxItem^>(entry);
            if (item == nullptr)
            {
                continue;
            }
            if (match == nullptr)
            {
                match = item; // first page is the fallback
            }

            String^ tag = dynamic_cast<String^>(item->Tag);
            if (tag != nullptr && String::Equals(tag, m_settings->LastSection, StringComparison::OrdinalIgnoreCase))
            {
                match = item;
                break;
            }
        }

        if (match == nullptr)
        {
            SetStatus("NavList has no ListBoxItem entries - nothing to show.");
            return;
        }

        m_navList->SelectedItem = match; // raises SelectionChanged -> NavigateTo

        // If the item was already selected in XAML, no SelectionChanged fires.
        if (m_currentPageFile == nullptr)
        {
            OnNavSelectionChanged(m_navList, nullptr);
        }
    }

    // =========================================================================
    // Navigation / pages
    // =========================================================================

    void MainWindow::OnNavSelectionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        ListBoxItem^ item = dynamic_cast<ListBoxItem^>(m_navList->SelectedItem);
        if (item == nullptr)
        {
            return;
        }

        String^ tag = dynamic_cast<String^>(item->Tag);
        if (String::IsNullOrWhiteSpace(tag))
        {
            return;
        }

        String^ title = (item->Content == nullptr) ? tag : item->Content->ToString();
        NavigateTo(tag, title);
    }

    void MainWindow::NavigateTo(String^ pageFile, String^ title)
    {
        StudioLog::Info("Navigate to page: " + pageFile);
        m_currentPageFile  = pageFile;
        m_currentPageTitle = title;
        m_pageTitle->Text  = title;

        // Page-specific control handles belong to the object graph being
        // replaced; drop them so stale handlers can't touch a dead page.
        ClearGameDataPageHandles();
        ClearServersHandles();
        ClearDatabaseHandles();
        ClearBrowserHandles();
        if (m_players != nullptr) m_players->Leave();
        if (m_itemBrowser != nullptr) m_itemBrowser->Leave();

        FrameworkElement^ page = nullptr;
        try
        {
            page = dynamic_cast<FrameworkElement^>(LoadXamlObject(Path::Combine("Pages", pageFile)));
            if (page == nullptr)
            {
                throw gcnew InvalidOperationException("The page root must be a FrameworkElement (use a <UserControl>).");
            }
        }
        catch (Exception^ ex)
        {
            ShowLoadError(pageFile, ex);
            return;
        }

        m_currentPage = page;
        m_contentHost->Content = page;

        try
        {
            if (String::Equals(pageFile, "Settings.xaml", StringComparison::OrdinalIgnoreCase))
            {
                PopulateSettingsPage(page);
            }
            else if (String::Equals(pageFile, "GameData.xaml", StringComparison::OrdinalIgnoreCase))
            {
                if (m_itemBrowser == nullptr)
                {
                    m_itemBrowser = gcnew ItemBrowser(m_window, m_settings,
                                                      gcnew System::Action<String^>(this, &MainWindow::SetStatus));
                }
                m_itemBrowser->Show(page);
            }
            else if (String::Equals(pageFile, "Servers.xaml", StringComparison::OrdinalIgnoreCase))
            {
                PopulateServersPage(page);
            }
            else if (String::Equals(pageFile, "Client.xaml", StringComparison::OrdinalIgnoreCase))
            {
                // a fresh panel per visit: the page is a new object graph every time it is loaded
                m_clientPanel = gcnew ClientPanel(m_window, m_settings, m_configPath,
                                                  gcnew System::Action<String^>(this, &MainWindow::SetStatus));
                m_clientPanel->Bind(page);
            }
            else if (String::Equals(pageFile, "Database.xaml", StringComparison::OrdinalIgnoreCase))
            {
                PopulateDatabasePage(page);
            }
            else if (String::Equals(pageFile, "DatabaseBrowser.xaml", StringComparison::OrdinalIgnoreCase))
            {
                PopulateBrowserPage(page);
            }
            else if (String::Equals(pageFile, "Accounts.xaml", StringComparison::OrdinalIgnoreCase))
            {
                EnsurePlayers();
                m_players->ShowAccounts(page);
            }
            else if (String::Equals(pageFile, "Characters.xaml", StringComparison::OrdinalIgnoreCase))
            {
                EnsurePlayers();
                String^ preset = m_pendingCharSearch;
                m_pendingCharSearch = nullptr;
                m_players->ShowCharacters(page, preset);
            }
        }
        catch (Exception^ ex)
        {
            // The page is on screen; only the data fill failed (e.g. a renamed control).
            SetStatus("Loaded " + pageFile + " but could not populate it: " + ex->Message);
            return;
        }

        SetStatus("Loaded " + pageFile);
    }

    void MainWindow::ShowLoadError(String^ pageFile, Exception^ ex)
    {
        StudioLog::Error("loading page " + pageFile, ex);
        TextBlock^ message = gcnew TextBlock();
        message->Text = "Failed to load Pages\\" + pageFile + "\r\n\r\n" + ex->Message;
        message->TextWrapping = TextWrapping::Wrap;
        message->Foreground = Brushes::OrangeRed;
        message->Margin = Thickness(8.0);

        m_currentPage = nullptr;
        m_contentHost->Content = message;
        SetStatus("Error loading " + pageFile + ": " + ex->Message);
    }

    // Re-reads Theme.xaml and the current page from disk. Note: the shell
    // window itself was parsed with {StaticResource} lookups, so brush changes
    // only show on reloaded pages until the app is restarted.
    void MainWindow::ReloadUi()
    {
        try
        {
            m_xamlRoot = ResolveXamlRoot();
            LoadTheme();
            if (m_currentPageFile != nullptr)
            {
                NavigateTo(m_currentPageFile, m_currentPageTitle);
            }
            SetStatus("UI reloaded from " + m_xamlRoot);
        }
        catch (Exception^ ex)
        {
            SetStatus("Reload failed: " + ex->Message);
        }
    }

    void MainWindow::PopulateSettingsPage(FrameworkElement^ page)
    {
        TextBox^     serversPathBox = safe_cast<TextBox^>(FindRequired(page, "ServersPathBox"));
        Button^      browseButton   = safe_cast<Button^>(FindRequired(page, "BrowseServersButton"));
        TextBox^     dbHostBox      = safe_cast<TextBox^>(FindRequired(page, "DbHostBox"));
        TextBox^     dbPortBox      = safe_cast<TextBox^>(FindRequired(page, "DbPortBox"));
        TextBox^     dbUserBox      = safe_cast<TextBox^>(FindRequired(page, "DbUserBox"));
        PasswordBox^ dbPassBox      = safe_cast<PasswordBox^>(FindRequired(page, "DbPassBox"));
        TextBox^     gameSchemaBox  = safe_cast<TextBox^>(FindRequired(page, "GameSchemaBox"));
        TextBox^     xamlRootBox    = safe_cast<TextBox^>(FindRequired(page, "XamlRootBox"));
        Button^      saveButton     = safe_cast<Button^>(FindRequired(page, "SaveSettingsButton"));
        TextBlock^   statusText     = safe_cast<TextBlock^>(FindRequired(page, "SettingsStatusText"));

        int port = m_settings->DbPort;

        String^ configDir = StudioSettings::ConfigDir(m_configPath);
        serversPathBox->Text = StudioSettings::StorePath(m_settings->ServersPath, configDir);   // shown the way it is saved (relative if possible)
        safe_cast<TextBox^>(FindRequired(page, "ImagesPathBox"))->Text = StudioSettings::StorePath(m_settings->ImagesPath, configDir);
        dbHostBox->Text      = m_settings->DbHost;
        dbPortBox->Text      = port.ToString();
        dbUserBox->Text      = m_settings->DbUser;
        dbPassBox->Password  = m_settings->DbPass;
        gameSchemaBox->Text  = m_settings->GameSchema;
        xamlRootBox->Text    = m_settings->XamlRoot;
        statusText->Text     = "Config file: " + m_configPath;

        // The page is a fresh object graph every time it is loaded, so wiring
        // here never double-subscribes.
        browseButton->Click += gcnew RoutedEventHandler(this, &MainWindow::OnBrowseServersClick);
        safe_cast<Button^>(FindRequired(page, "BrowseImagesButton"))->Click += gcnew RoutedEventHandler(this, &MainWindow::OnBrowseImagesClick);
        UpdateFoldersNote(page);
        safe_cast<Button^>(FindRequired(page, "TestDbButton"))->Click += gcnew RoutedEventHandler(this, &MainWindow::OnTestDbClick);
        saveButton->Click   += gcnew RoutedEventHandler(this, &MainWindow::OnSaveSettingsClick);
    }

    // =========================================================================
    // Game Data page (Xaml\Pages\GameData.xaml)
    //
    // Left: a TreeView of every *.json under <ServersPath>\Data, grouped by the
    // text before the first underscore (ITEM, MONSTER, STRING, ...). Right: a
    // DataGrid bound to the DataTable the GameDataBridge builds for the chosen
    // table (optionally filtered by the search box), and a Field/Value detail
    // grid for the selected row. STRING_TEMPLATE ids get a "<col>_<lang>"
    // sibling column with the resolved text.
    // =========================================================================

    namespace {
        // Groups that start expanded when no filter is active.
        bool IsDefaultExpandedGroup(String^ group)
        {
            return String::Equals(group, "ITEM",    StringComparison::OrdinalIgnoreCase)
                || String::Equals(group, "MONSTER", StringComparison::OrdinalIgnoreCase)
                || String::Equals(group, "NPC",     StringComparison::OrdinalIgnoreCase)
                || String::Equals(group, "SKILL",   StringComparison::OrdinalIgnoreCase)
                || String::Equals(group, "STRING",  StringComparison::OrdinalIgnoreCase);
        }
    }

    void MainWindow::ClearGameDataPageHandles()
    {
        m_gdTableTree         = nullptr;
        m_gdTableFilterBox    = nullptr;
        m_gdSearchBox         = nullptr;
        m_gdSearchButton      = nullptr;
        m_gdLangBox           = nullptr;
        m_gdMaxRowsBox        = nullptr;
        m_gdReloadTableButton = nullptr;
        m_gdOpenJsonButton    = nullptr;
        m_gdDataTableGrid     = nullptr;
        m_gdDetailGrid        = nullptr;
        m_gdDetailTitleText   = nullptr;
        m_gdTableStatusText   = nullptr;
        m_gdDataRootText      = nullptr;

        // Codex mode handles
        m_gdModeItemsButton     = nullptr;
        m_gdModeMonstersButton  = nullptr;
        m_gdModeObjectsButton   = nullptr;
        m_gdModeNpcsButton      = nullptr;
        m_gdModeMapsButton      = nullptr;
        m_gdDetailViewMapButton = nullptr;
        m_gdDetailOpenGenButton = nullptr;
        m_gdDetailMapsBox       = nullptr;
        m_gdDetailMapsTitle     = nullptr;
        m_gdDetailMapsList      = nullptr;
        m_gdDetailWarpsBox      = nullptr;
        m_gdDetailWarpsTitle    = nullptr;
        m_gdDetailWarpsList     = nullptr;
        m_gdModeRawButton       = nullptr;
        m_gdCodexPanel          = nullptr;
        m_gdRawPanel            = nullptr;
        m_gdCodexSearchBox      = nullptr;
        m_gdCodexSearchButton   = nullptr;
        m_gdCodexFilter1Box     = nullptr;
        m_gdCodexFilter2Box     = nullptr;
        m_gdCodexFilter3Box     = nullptr;
        m_gdCodexSortBox        = nullptr;
        m_gdCodexReloadButton   = nullptr;
        m_gdCodexList           = nullptr;
        m_gdCodexPrevButton     = nullptr;
        m_gdCodexPageText       = nullptr;
        m_gdCodexNextButton     = nullptr;
        m_gdCodexCountText      = nullptr;
        m_gdDetailEmptyText     = nullptr;
        m_gdDetailScroll        = nullptr;
        m_gdDetailIconFrame     = nullptr;
        m_gdDetailIcon          = nullptr;
        m_gdDetailTradeIcon     = nullptr;
        m_gdDetailTierIcon      = nullptr;
        m_gdDetailName          = nullptr;
        m_gdDetailSubtitle      = nullptr;
        m_gdDetailDescription   = nullptr;
        m_gdDetailStatsBox      = nullptr;
        m_gdDetailStatsTitle    = nullptr;
        m_gdDetailStatsList     = nullptr;
        m_gdDetailEffectsList   = nullptr;
        m_gdDetailAttrsList     = nullptr;
        m_gdDetailVariantsBox   = nullptr;
        m_gdDetailVariantsList  = nullptr;
        m_gdDetailFooter        = nullptr;
        m_gdDetailOpenRawButton = nullptr;
        m_gdDetailCopyCommandButton = nullptr;
        m_codexCurrentPage      = nullptr;
        m_codexSelected         = nullptr;
    }

    // Creates the bridge on first use and (re)points it at <ServersPath>\Data
    // whenever the servers path has changed since the last visit.
    void MainWindow::EnsureGameDataBridge()
    {
        StudioLogScope logScope("MainWindow.EnsureGameDataBridge");
        if (m_gameData == nullptr)
        {
            m_gameData = gcnew GameDataBridge();
        }

        String^ root = String::IsNullOrWhiteSpace(m_settings->ServersPath)
            ? String::Empty
            : Path::Combine(m_settings->ServersPath, "Data");

        if (!String::Equals(root, m_gameDataRootApplied, StringComparison::OrdinalIgnoreCase))
        {
            m_gameData->UnloadAll();
            m_gameData->SetDataRoot(root);
            m_gameDataRootApplied = root;
            m_gdCurrentTable      = nullptr;
            m_gdLastTable         = nullptr;
            if (m_codex != nullptr)
            {
                m_codex->Invalidate();
            }
            m_codexCurrentPage = nullptr;
            m_codexSelected    = nullptr;
            m_codexPage        = 1;
        }
    }

    void MainWindow::PopulateGameDataPage(FrameworkElement^ page)
    {
        StudioLogScope logScope("MainWindow.PopulateGameDataPage");
        m_gdTableTree         = safe_cast<TreeView^>(FindRequired(page, "TableTree"));
        m_gdTableFilterBox    = safe_cast<TextBox^>(FindRequired(page, "TableFilterBox"));
        m_gdSearchBox         = safe_cast<TextBox^>(FindRequired(page, "SearchBox"));
        m_gdSearchButton      = safe_cast<Button^>(FindRequired(page, "SearchButton"));
        m_gdLangBox           = safe_cast<ComboBox^>(FindRequired(page, "LangBox"));
        m_gdMaxRowsBox        = safe_cast<ComboBox^>(FindRequired(page, "MaxRowsBox"));
        m_gdReloadTableButton = safe_cast<Button^>(FindRequired(page, "ReloadTableButton"));
        m_gdOpenJsonButton    = safe_cast<Button^>(FindRequired(page, "OpenJsonButton"));
        m_gdDataTableGrid     = safe_cast<DataGrid^>(FindRequired(page, "DataTableGrid"));
        m_gdDetailGrid        = safe_cast<DataGrid^>(FindRequired(page, "DetailGrid"));
        m_gdDetailTitleText   = safe_cast<TextBlock^>(FindRequired(page, "DetailTitleText"));
        m_gdTableStatusText   = safe_cast<TextBlock^>(FindRequired(page, "TableStatusText"));
        m_gdDataRootText      = safe_cast<TextBlock^>(FindRequired(page, "DataRootText"));

        // Fresh object graph on every navigation, so this never double-subscribes.
        m_gdTableTree->SelectedItemChanged     += gcnew RoutedPropertyChangedEventHandler<Object^>(this, &MainWindow::OnGdTreeSelectionChanged);
        m_gdTableFilterBox->TextChanged        += gcnew TextChangedEventHandler(this, &MainWindow::OnGdTableFilterChanged);
        m_gdSearchBox->KeyDown                 += gcnew System::Windows::Input::KeyEventHandler(this, &MainWindow::OnGdSearchKeyDown);
        m_gdSearchButton->Click                += gcnew RoutedEventHandler(this, &MainWindow::OnGdSearchClick);
        m_gdLangBox->SelectionChanged          += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdOptionChanged);
        m_gdMaxRowsBox->SelectionChanged       += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdOptionChanged);
        m_gdReloadTableButton->Click           += gcnew RoutedEventHandler(this, &MainWindow::OnGdReloadClick);
        m_gdOpenJsonButton->Click              += gcnew RoutedEventHandler(this, &MainWindow::OnGdOpenJsonClick);
        m_gdDataTableGrid->SelectionChanged    += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdGridSelectionChanged);
        m_gdDataTableGrid->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);
        m_gdDetailGrid->AutoGeneratingColumn    += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);

        // ---- codex mode controls ------------------------------------------------
        m_gdModeItemsButton     = safe_cast<Button^>(FindRequired(page, "ModeItemsButton"));
        m_gdModeMonstersButton  = safe_cast<Button^>(FindRequired(page, "ModeMonstersButton"));
        m_gdModeObjectsButton   = safe_cast<Button^>(FindRequired(page, "ModeObjectsButton"));
        m_gdModeNpcsButton      = safe_cast<Button^>(FindRequired(page, "ModeNpcsButton"));
        m_gdModeMapsButton      = safe_cast<Button^>(FindRequired(page, "ModeMapsButton"));
        m_gdDetailViewMapButton = safe_cast<Button^>(FindRequired(page, "DetailViewMapButton"));
        m_gdDetailOpenGenButton = safe_cast<Button^>(FindRequired(page, "DetailOpenGenButton"));
        m_gdDetailMapsBox       = safe_cast<Border^>(FindRequired(page, "DetailMapsBox"));
        m_gdDetailMapsTitle     = safe_cast<TextBlock^>(FindRequired(page, "DetailMapsTitle"));
        m_gdDetailMapsList      = safe_cast<ItemsControl^>(FindRequired(page, "DetailMapsList"));
        m_gdDetailMapsList->MouseDoubleClick += gcnew System::Windows::Input::MouseButtonEventHandler(this, &MainWindow::OnGdMonsterMapDoubleClick);
        m_gdDetailWarpsBox      = safe_cast<Border^>(FindRequired(page, "DetailWarpsBox"));
        m_gdDetailWarpsTitle    = safe_cast<TextBlock^>(FindRequired(page, "DetailWarpsTitle"));
        m_gdDetailWarpsList     = safe_cast<ItemsControl^>(FindRequired(page, "DetailWarpsList"));
        m_gdModeRawButton       = safe_cast<Button^>(FindRequired(page, "ModeRawButton"));
        m_gdCodexPanel          = safe_cast<FrameworkElement^>(FindRequired(page, "CodexPanel"));
        m_gdRawPanel            = safe_cast<FrameworkElement^>(FindRequired(page, "RawPanel"));
        m_gdCodexSearchBox      = safe_cast<TextBox^>(FindRequired(page, "CodexSearchBox"));
        m_gdCodexSearchButton   = safe_cast<Button^>(FindRequired(page, "CodexSearchButton"));
        m_gdCodexFilter1Box     = safe_cast<ComboBox^>(FindRequired(page, "CodexFilter1Box"));
        m_gdCodexFilter2Box     = safe_cast<ComboBox^>(FindRequired(page, "CodexFilter2Box"));
        m_gdCodexFilter3Box     = safe_cast<ComboBox^>(FindRequired(page, "CodexFilter3Box"));
        m_gdCodexSortBox        = safe_cast<ComboBox^>(FindRequired(page, "CodexSortBox"));
        m_gdCodexReloadButton   = safe_cast<Button^>(FindRequired(page, "CodexReloadButton"));
        m_gdCodexList           = safe_cast<ListBox^>(FindRequired(page, "CodexList"));
        m_gdCodexPrevButton     = safe_cast<Button^>(FindRequired(page, "CodexPrevButton"));
        m_gdCodexPageText       = safe_cast<TextBlock^>(FindRequired(page, "CodexPageText"));
        m_gdCodexNextButton     = safe_cast<Button^>(FindRequired(page, "CodexNextButton"));
        m_gdCodexCountText      = safe_cast<TextBlock^>(FindRequired(page, "CodexCountText"));
        m_gdDetailEmptyText     = safe_cast<TextBlock^>(FindRequired(page, "DetailEmptyText"));
        m_gdDetailScroll        = safe_cast<FrameworkElement^>(FindRequired(page, "DetailScroll"));
        m_gdDetailIconFrame     = safe_cast<Border^>(FindRequired(page, "DetailIconFrame"));
        m_gdDetailIcon          = safe_cast<Image^>(FindRequired(page, "DetailIcon"));
        m_gdDetailTradeIcon     = safe_cast<Image^>(FindRequired(page, "DetailTradeIcon"));
        m_gdDetailTierIcon      = safe_cast<Image^>(FindRequired(page, "DetailTierIcon"));
        m_gdDetailName          = safe_cast<TextBlock^>(FindRequired(page, "DetailName"));
        m_gdDetailSubtitle      = safe_cast<TextBlock^>(FindRequired(page, "DetailSubtitle"));
        m_gdDetailDescription   = safe_cast<TextBlock^>(FindRequired(page, "DetailDescription"));
        m_gdDetailStatsBox      = safe_cast<Border^>(FindRequired(page, "DetailStatsBox"));
        m_gdDetailStatsTitle    = safe_cast<TextBlock^>(FindRequired(page, "DetailStatsTitle"));
        m_gdDetailStatsList     = safe_cast<ItemsControl^>(FindRequired(page, "DetailStatsList"));
        m_gdDetailEffectsList   = safe_cast<ItemsControl^>(FindRequired(page, "DetailEffectsList"));
        m_gdDetailAttrsList     = safe_cast<ItemsControl^>(FindRequired(page, "DetailAttrsList"));
        m_gdDetailVariantsBox   = safe_cast<Border^>(FindRequired(page, "DetailVariantsBox"));
        m_gdDetailVariantsList  = safe_cast<ListBox^>(FindRequired(page, "DetailVariantsList"));
        m_gdDetailFooter        = safe_cast<TextBlock^>(FindRequired(page, "DetailFooter"));
        m_gdDetailOpenRawButton = safe_cast<Button^>(FindRequired(page, "DetailOpenRawButton"));
        m_gdDetailCopyCommandButton = safe_cast<Button^>(FindRequired(page, "DetailCopyCommandButton"));

        m_gdModeItemsButton->Click      += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdModeMonstersButton->Click   += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdModeObjectsButton->Click    += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdModeNpcsButton->Click       += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdModeMapsButton->Click       += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdDetailViewMapButton->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnGdDetailViewMapClick);
        m_gdDetailOpenGenButton->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnGdDetailOpenGenClick);
        // The Copy buttons live inside a DataTemplate (no event attributes in runtime XAML),
        // so their clicks are caught once as they bubble up to the list.
        m_gdDetailWarpsList->AddHandler(Button::ClickEvent, gcnew RoutedEventHandler(this, &MainWindow::OnGdWarpCopyClick));
        m_gdCodexList->MouseDoubleClick += gcnew System::Windows::Input::MouseButtonEventHandler(this, &MainWindow::OnGdCodexListDoubleClick);
        m_gdModeRawButton->Click        += gcnew RoutedEventHandler(this, &MainWindow::OnGdModeClick);
        m_gdCodexSearchBox->KeyDown     += gcnew System::Windows::Input::KeyEventHandler(this, &MainWindow::OnGdCodexSearchKeyDown);
        m_gdCodexSearchButton->Click    += gcnew RoutedEventHandler(this, &MainWindow::OnGdCodexSearchClick);
        m_gdCodexFilter1Box->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdCodexFilterChanged);
        m_gdCodexFilter2Box->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdCodexFilterChanged);
        m_gdCodexFilter3Box->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdCodexFilterChanged);
        m_gdCodexSortBox->SelectionChanged    += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdCodexFilterChanged);
        m_gdCodexReloadButton->Click    += gcnew RoutedEventHandler(this, &MainWindow::OnGdCodexReloadClick);
        m_gdCodexPrevButton->Click      += gcnew RoutedEventHandler(this, &MainWindow::OnGdCodexPrevClick);
        m_gdCodexNextButton->Click      += gcnew RoutedEventHandler(this, &MainWindow::OnGdCodexNextClick);
        m_gdCodexList->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdCodexListSelectionChanged);
        m_gdDetailVariantsList->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnGdDetailVariantSelectionChanged);
        m_gdDetailOpenRawButton->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnGdDetailOpenRawClick);
        m_gdDetailCopyCommandButton->Click += gcnew RoutedEventHandler(this, &MainWindow::OnGdDetailCopyCommandClick);

        if (String::IsNullOrEmpty(m_codexMode))
        {
            m_codexMode = "items";
        }
        if (m_codexPage < 1)
        {
            m_codexPage = 1;
        }

        StudioLog::Info("GameData: controls bound (codex mode " + m_codexMode + ")");
        EnsureGameDataBridge();
        EnsureCodex();

        // Data root banner.
        String^ root = m_gameDataRootApplied;
        bool haveRoot = !String::IsNullOrEmpty(root) && Directory::Exists(root);
        if (String::IsNullOrEmpty(root))
        {
            m_gdDataRootText->Text = "Servers path not set - open Settings";
        }
        else if (!haveRoot)
        {
            m_gdDataRootText->Text = root + " (missing)";
        }
        else
        {
            m_gdDataRootText->Text = root;
        }

        StudioLog::Info("GameData: data root = " + (String::IsNullOrEmpty(root) ? gcnew String("(empty)") : root) + ", exists = " + (haveRoot ? gcnew String("yes") : gcnew String("NO")));
        m_gdDetailTitleText->Text = "Select a row";

        if (!haveRoot)
        {
            m_gdTableStatusText->Text = "No Data folder to read - set the servers path in Settings.";
            return;
        }

        try
        {
            int tableCount = RebuildGameDataTree(String::Empty);
            m_gdTableStatusText->Text = String::Format("{0:N0} tables found - pick one on the left.", tableCount);
            StudioLog::Info(String::Format("GameData: {0} tables listed", tableCount));

            // First visit while parked on Raw tables: build the Items list in the
            // background now so the first Items click is instant. (In a codex
            // mode the build below starts anyway; OnCodexBuildDone chains it.)
            if (!m_codexPrewarmDone && !m_codexBusy && m_codex != nullptr &&
                String::Equals(m_codexMode, "raw", StringComparison::OrdinalIgnoreCase) && !m_codex->IsBuilt("items"))
            {
                m_codexPrewarmDone = true;
                StartCodexBuild("items", false);
            }

            // A character window asked to show an item: put its id in the search box first.
            if (!String::IsNullOrEmpty(m_pendingItemSearch))
            {
                m_gdCodexSearchBox->Text = m_pendingItemSearch;
                m_pendingItemSearch = nullptr;
            }

            // Shows the right panel for the remembered mode and runs its query
            // (raw: the current table if any; codex: the current page).
            StudioLog::Info("GameData: SetCodexMode(" + m_codexMode + ")");
            SetCodexMode(m_codexMode);
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("PopulateGameDataPage", ex);
            ReportGameDataError(ex->Message);
        }
    }

    // Rebuilds the table tree; `filter` (case-insensitive substring) narrows the
    // table names and forces every group open. Returns the number of tables shown.
    int MainWindow::RebuildGameDataTree(String^ filter)
    {
        StudioLogScope logScope("MainWindow.RebuildGameDataTree");
        if (m_gdTableTree == nullptr || m_gameData == nullptr)
        {
            return 0;
        }

        String^ needle   = (filter == nullptr) ? String::Empty : filter->Trim();
        bool   filtering = !String::IsNullOrEmpty(needle);

        List<String^>^ tables = m_gameData->ListTables();

        SortedDictionary<String^, List<String^>^>^ groups =
            gcnew SortedDictionary<String^, List<String^>^>(StringComparer::OrdinalIgnoreCase);

        int shown = 0;
        for each (String^ name in tables)
        {
            if (filtering && name->IndexOf(needle, StringComparison::OrdinalIgnoreCase) < 0)
            {
                continue;
            }

            int underscore = name->IndexOf(L'_');
            String^ group = (underscore > 0) ? name->Substring(0, underscore) : name;

            List<String^>^ members = nullptr;
            if (!groups->TryGetValue(group, members))
            {
                members = gcnew List<String^>();
                groups->Add(group, members);
            }
            members->Add(name);
            ++shown;
        }

        m_gdSuppressTreeEvents = true;
        try
        {
            m_gdTableTree->Items->Clear();

            for each (KeyValuePair<String^, List<String^>^> entry in groups)
            {
                TreeViewItem^ groupItem = gcnew TreeViewItem();
                groupItem->Header     = String::Format("{0} ({1})", entry.Key, entry.Value->Count);
                groupItem->IsExpanded = filtering || IsDefaultExpandedGroup(entry.Key);

                for each (String^ name in entry.Value)
                {
                    TreeViewItem^ child = gcnew TreeViewItem();
                    child->Header = name;
                    child->Tag    = name;
                    if (m_gdCurrentTable != nullptr &&
                        String::Equals(name, m_gdCurrentTable, StringComparison::OrdinalIgnoreCase))
                    {
                        child->IsSelected = true;
                        groupItem->IsExpanded = true;
                    }
                    groupItem->Items->Add(child);
                }

                m_gdTableTree->Items->Add(groupItem);
            }
        }
        finally
        {
            m_gdSuppressTreeEvents = false;
        }

        return shown;
    }

    String^ MainWindow::GameDataLang()
    {
        if (m_gdLangBox != nullptr)
        {
            ComboBoxItem^ item = dynamic_cast<ComboBoxItem^>(m_gdLangBox->SelectedItem);
            if (item != nullptr && item->Content != nullptr)
            {
                String^ lang = item->Content->ToString()->Trim();
                if (!String::IsNullOrEmpty(lang))
                {
                    return lang;
                }
            }
        }
        return "ENG";
    }

    // Row cap from MaxRowsBox (Tag = "1000" / "5000" / "20000" / "0" = all).
    int MainWindow::GameDataMaxRows()
    {
        if (m_gdMaxRowsBox != nullptr)
        {
            ComboBoxItem^ item = dynamic_cast<ComboBoxItem^>(m_gdMaxRowsBox->SelectedItem);
            if (item != nullptr)
            {
                String^ tag = dynamic_cast<String^>(item->Tag);
                int value = 0;
                if (tag != nullptr && Int32::TryParse(tag->Trim(), value))
                {
                    return value;
                }
            }
        }
        return 5000;
    }

    void MainWindow::ReportGameDataError(String^ message)
    {
        StudioLog::Info("Game Data error shown to the user: " + message);
        if (m_gdTableStatusText != nullptr)
        {
            m_gdTableStatusText->Text = message;
        }
        if (m_gdDataTableGrid != nullptr)
        {
            m_gdDataTableGrid->ItemsSource = nullptr;
        }
        if (m_gdDetailGrid != nullptr)
        {
            m_gdDetailGrid->ItemsSource = nullptr;
        }
        SetStatus("Game data: " + message);
    }

    // Loads (or re-filters) the current table into the main grid.
    void MainWindow::RunGameDataQuery()
    {
        if (m_gameData == nullptr || m_gdDataTableGrid == nullptr || String::IsNullOrEmpty(m_gdCurrentTable))
        {
            return;
        }

        String^ table  = m_gdCurrentTable;
        String^ search = (m_gdSearchBox == nullptr) ? String::Empty : m_gdSearchBox->Text->Trim();
        String^ lang   = GameDataLang();
        int     cap    = GameDataMaxRows();

        System::Windows::Input::Mouse::OverrideCursor = System::Windows::Input::Cursors::Wait;
        try
        {
            SetStatus("Loading " + table + "...");

            int    totalRows    = 0;
            int    totalMatches = 0;
            double elapsedMs    = 0.0;

            System::Data::DataTable^ data = m_gameData->Query(table, search, lang, cap, totalRows, totalMatches, elapsedMs);

            m_gdLastTable = data;
            m_gdLastLang  = lang;

            m_gdDataTableGrid->ItemsSource = data->DefaultView;
            m_gdDetailGrid->ItemsSource    = nullptr;
            m_gdDetailTitleText->Text      = "Select a row";

            array<Object^>^ args = gcnew array<Object^> { table, totalRows, data->Rows->Count, totalMatches, elapsedMs };
            m_gdTableStatusText->Text = String::Format("{0}: {1:N0} rows  |  {2:N0} of {3:N0} matches shown  |  {4:N0} ms", args);
            SetStatus("Loaded " + table);
        }
        catch (Exception^ ex)
        {
            ReportGameDataError(ex->Message);
        }
        finally
        {
            System::Windows::Input::Mouse::OverrideCursor = nullptr;
        }
    }

    // Field / Value / Text rows for the selected DataRowView. Generated
    // "<col>_<lang>" columns are folded into the Text column of their source.
    void MainWindow::FillGameDataDetail(System::Data::DataRowView^ rowView)
    {
        if (m_gdDetailGrid == nullptr || m_gdDetailTitleText == nullptr)
        {
            return;
        }

        if (rowView == nullptr)
        {
            m_gdDetailGrid->ItemsSource = nullptr;
            m_gdDetailTitleText->Text   = "Select a row";
            return;
        }

        String^ suffix = "_" + (String::IsNullOrEmpty(m_gdLastLang) ? gcnew String("ENG") : m_gdLastLang);

        System::Data::DataTable^ source = rowView->Row->Table;
        System::Data::DataTable^ detail = gcnew System::Data::DataTable("Detail");
        detail->Columns->Add("Field", String::typeid);
        detail->Columns->Add("Value", String::typeid);
        detail->Columns->Add("Text",  String::typeid);

        for each (System::Data::DataColumn^ column in source->Columns)
        {
            String^ columnName = column->ColumnName;
            if (columnName->EndsWith(suffix) && source->Columns->Contains(columnName->Substring(0, columnName->Length - suffix->Length)))
            {
                continue; // a generated text column - shown on its source row below
            }

            Object^ raw   = rowView->Row[column];
            String^ value = (raw == nullptr || raw == DBNull::Value) ? String::Empty : raw->ToString();

            String^ text = String::Empty;
            String^ resolvedName = columnName + suffix;
            if (source->Columns->Contains(resolvedName))
            {
                Object^ resolved = rowView->Row[resolvedName];
                if (resolved != nullptr && resolved != DBNull::Value)
                {
                    text = resolved->ToString();
                }
            }

            // Not a string id: maybe a known enum (Grade, MainType/SubType,
            // ClassId, MonGrade, ...) or an icon id we can turn into a URL.
            if (String::IsNullOrEmpty(text))
            {
                String^ meaning = GameDataEnums::Describe(m_gdCurrentTable, columnName, rowView->Row);
                if (meaning != nullptr)
                {
                    text = meaning;
                }
            }

            System::Data::DataRow^ row = detail->NewRow();
            row[0] = columnName;
            row[1] = value;
            row[2] = text;
            detail->Rows->Add(row);
        }

        m_gdDetailGrid->ItemsSource = detail->DefaultView;

        if (source->Columns->Count > 0)
        {
            System::Data::DataColumn^ first = source->Columns[0];
            Object^ firstValue = rowView->Row[first];
            String^ firstText  = (firstValue == nullptr || firstValue == DBNull::Value) ? String::Empty : firstValue->ToString();
            m_gdDetailTitleText->Text = String::Format("{0} row: {1} = {2}", m_gdCurrentTable, first->ColumnName, firstText);
        }
        else
        {
            m_gdDetailTitleText->Text = m_gdCurrentTable;
        }
    }

    // =========================================================================
    // Misc helpers
    // =========================================================================

    void MainWindow::UpdateDbStatus()
    {
        m_dbStatusText->Text = DbSummary() + "  |  " + (String::IsNullOrEmpty(m_dbState) ? gcnew String("not connected") : m_dbState);
    }

    void MainWindow::SetStatus(String^ text)
    {
        if (m_statusText != nullptr)
        {
            m_statusText->Text = text;
        }
    }

    String^ MainWindow::DbSummary()
    {
        return String::Format("DB {0}:{1} / {2}", m_settings->DbHost, m_settings->DbPort, m_settings->GameSchema);
    }

    String^ MainWindow::AppVersion()
    {
        Version^ version = System::Reflection::Assembly::GetExecutingAssembly()->GetName()->Version;
        return (version == nullptr) ? gcnew String("0.0.0.0") : version->ToString();
    }

    // =========================================================================
    // Event handlers
    // =========================================================================

    void MainWindow::OnReloadXamlClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        ReloadUi();
    }

    void MainWindow::OnWindowKeyDown(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::F5)
        {
            ReloadUi();
            e->Handled = true;
        }
    }

    void MainWindow::OnAboutClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        String^ serversPath = String::IsNullOrWhiteSpace(m_settings->ServersPath)
            ? gcnew String("(not set)")
            : m_settings->ServersPath;

        String^ imagesPath = String::IsNullOrWhiteSpace(m_settings->ImagesPath)
            ? gcnew String("(not set)")
            : m_settings->ImagesPath;

        String^ text = String::Format(
            "DarkSteel Studio {0}\nMir 5 server management studio\n\n"
            "Config:  {1}\nXAML:    {2}\nServer:  {3}\nImages:  {4}",
            AppVersion(), m_configPath, m_xamlRoot, serversPath, imagesPath);

        MessageBox::Show(m_window, text, "About DarkSteel Studio", MessageBoxButton::OK, MessageBoxImage::Information);
    }

    void MainWindow::OnWindowClosing(Object^ /*sender*/, System::ComponentModel::CancelEventArgs^ /*e*/)
    {
        try
        {
            if (m_currentPageFile != nullptr)
            {
                m_settings->LastSection = m_currentPageFile;
            }

            bool maximized = (m_window->WindowState == WindowState::Maximized);
            m_settings->WindowMaximized = maximized;

            if (maximized)
            {
                Rect restore = m_window->RestoreBounds;
                if (!restore.IsEmpty && restore.Width > 0 && restore.Height > 0)
                {
                    m_settings->WindowWidth  = static_cast<int>(restore.Width);
                    m_settings->WindowHeight = static_cast<int>(restore.Height);
                }
            }
            else if (m_window->WindowState == WindowState::Normal)
            {
                m_settings->WindowWidth  = static_cast<int>(m_window->ActualWidth);
                m_settings->WindowHeight = static_cast<int>(m_window->ActualHeight);
            }

            m_settings->Save(m_configPath);
        }
        catch (Exception^)
        {
            // Never block shutdown over a settings save.
        }
    }

    void MainWindow::OnBrowseServersClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        BrowseInto("ServersPathBox", "Select the Mir 5 Server folder (the one that contains Bin\\Data)");
    }

    void MainWindow::OnBrowseImagesClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        BrowseInto("ImagesPathBox", "Select the Images folder (the one that contains the Items folder, normally the Images folder next to this tool)");
    }

    // Shows a folder picker for the settings box `boxName`. The box gets the path the way it will be saved:
    // relative to this tool when the folder is on the same drive, absolute otherwise.
    void MainWindow::BrowseInto(String^ boxName, String^ description)
    {
        if (m_currentPage == nullptr)
        {
            return;
        }

        try
        {
            TextBox^ box = safe_cast<TextBox^>(FindRequired(m_currentPage, boxName));
            String^ configDir = StudioSettings::ConfigDir(m_configPath);

            // WPF on .NET Framework 4.8 has no folder picker of its own; borrow
            // the WinForms one (fully qualified - never `using` that namespace,
            // it clashes with System::Windows on Application/MessageBox).
            System::Windows::Forms::FolderBrowserDialog^ dialog = gcnew System::Windows::Forms::FolderBrowserDialog();
            try
            {
                dialog->Description = description;
                dialog->ShowNewFolderButton = false;
                String^ current = StudioSettings::ResolvePath(box->Text, configDir);   // a relative entry is relative to the exe folder
                if (!String::IsNullOrWhiteSpace(current) && Directory::Exists(current))
                {
                    dialog->SelectedPath = current;
                }

                if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
                {
                    box->Text = StudioSettings::StorePath(dialog->SelectedPath, configDir);
                    UpdateFoldersNote(m_currentPage);
                }
            }
            finally
            {
                delete dialog;
            }
        }
        catch (Exception^ ex)
        {
            SetStatus("Browse failed: " + ex->Message);
        }
    }

    // Tells the user what the two folder boxes currently resolve to and whether the data / icons are there.
    void MainWindow::UpdateFoldersNote(FrameworkElement^ page)
    {
        TextBlock^ note = dynamic_cast<TextBlock^>(FindOptional(page, "FoldersNoteText"));
        TextBox^ serversBox = dynamic_cast<TextBox^>(FindOptional(page, "ServersPathBox"));
        TextBox^ imagesBox  = dynamic_cast<TextBox^>(FindOptional(page, "ImagesPathBox"));
        if (note == nullptr || serversBox == nullptr || imagesBox == nullptr)
        {
            return;
        }

        String^ configDir = StudioSettings::ConfigDir(m_configPath);
        String^ server = StudioSettings::ResolvePath(serversBox->Text, configDir);
        String^ images = StudioSettings::ResolvePath(imagesBox->Text, configDir);

        String^ dataText = String::IsNullOrEmpty(server) ? "Server folder: not set (auto-detect)"
            : File::Exists(Path::Combine(server, "Bin\\Data\\Common\\ItemBase.json"))
                ? "Server folder: " + server + "  (Bin\\Data found)"
                : "Server folder: " + server + "  (Bin\\Data\\Common\\ItemBase.json NOT found)";
        String^ imageText = String::IsNullOrEmpty(images) ? "Images folder: not set (auto-detect)"
            : Directory::Exists(Path::Combine(images, "Items"))
                ? "Images folder: " + images + "  (Items found)"
                : "Images folder: " + images + "  (no Items folder there)";
        note->Text = dataText + "\r\n" + imageText;
    }
    void MainWindow::OnSaveSettingsClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_currentPage == nullptr)
        {
            return;
        }

        try
        {
            TextBox^     serversPathBox = safe_cast<TextBox^>(FindRequired(m_currentPage, "ServersPathBox"));
            TextBox^     dbHostBox      = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbHostBox"));
            TextBox^     dbPortBox      = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbPortBox"));
            TextBox^     dbUserBox      = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbUserBox"));
            PasswordBox^ dbPassBox      = safe_cast<PasswordBox^>(FindRequired(m_currentPage, "DbPassBox"));
            TextBox^     gameSchemaBox  = safe_cast<TextBox^>(FindRequired(m_currentPage, "GameSchemaBox"));
            TextBox^     xamlRootBox    = safe_cast<TextBox^>(FindRequired(m_currentPage, "XamlRootBox"));
            TextBlock^   statusText     = safe_cast<TextBlock^>(FindRequired(m_currentPage, "SettingsStatusText"));

            int port = 0;
            if (!Int32::TryParse(dbPortBox->Text->Trim(), port) || port <= 0 || port > 65535)
            {
                statusText->Text = "DB port must be a whole number between 1 and 65535.";
                return;
            }

            String^ configDir = StudioSettings::ConfigDir(m_configPath);
            m_settings->ServersPath = StudioSettings::ResolvePath(serversPathBox->Text, configDir);   // saved relative again by Save()
            m_settings->ImagesPath  = StudioSettings::ResolvePath(safe_cast<TextBox^>(FindRequired(m_currentPage, "ImagesPathBox"))->Text, configDir);
            m_settings->DbHost      = dbHostBox->Text->Trim();
            m_settings->DbPort      = port;
            m_settings->DbUser      = dbUserBox->Text->Trim();
            m_settings->DbPass      = dbPassBox->Password;
            m_settings->GameSchema  = gameSchemaBox->Text->Trim();
            m_settings->XamlRoot    = xamlRootBox->Text->Trim();

            m_settings->Save(m_configPath);
            UpdateFoldersNote(m_currentPage);
            if (m_itemBrowser != nullptr) m_itemBrowser->Invalidate();   // re-read the data/icon folders on the next visit
            m_dbState = nullptr;
            m_brSchemas = nullptr;     // reload the Database browser with the new connection
            UpdateDbStatus();
            LoadDbParamsFromSettings();
            StartDbTask("test");   // re-check with the saved values

            statusText->Text = "Saved to " + m_configPath;
            SetStatus("Settings saved.");
        }
        catch (Exception^ ex)
        {
            SetStatus("Failed to save settings: " + ex->Message);
        }
    }

    // ---- Game Data page handlers --------------------------------------------

    void MainWindow::OnGdTreeSelectionChanged(Object^ /*sender*/, RoutedPropertyChangedEventArgs<Object^>^ e)
    {
        if (m_gdSuppressTreeEvents || e == nullptr)
        {
            return;
        }

        try
        {
            TreeViewItem^ item = dynamic_cast<TreeViewItem^>(e->NewValue);
            if (item == nullptr)
            {
                return;
            }

            String^ tag = dynamic_cast<String^>(item->Tag);
            if (String::IsNullOrEmpty(tag))
            {
                return; // a group header
            }

            m_gdCurrentTable = tag;
            if (m_gdSearchBox != nullptr)
            {
                m_gdSearchBox->Text = String::Empty;
            }
            RunGameDataQuery();
        }
        catch (Exception^ ex)
        {
            ReportGameDataError(ex->Message);
        }
    }

    void MainWindow::OnGdTableFilterChanged(Object^ /*sender*/, TextChangedEventArgs^ /*e*/)
    {
        try
        {
            if (m_gdTableFilterBox != nullptr)
            {
                RebuildGameDataTree(m_gdTableFilterBox->Text);
            }
        }
        catch (Exception^ ex)
        {
            ReportGameDataError(ex->Message);
        }
    }

    void MainWindow::OnGdSearchKeyDown(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::Enter)
        {
            RunGameDataQuery();
            e->Handled = true;
        }
    }

    void MainWindow::OnGdSearchClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        RunGameDataQuery();
    }

    void MainWindow::OnGdOptionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        RunGameDataQuery();
    }

    void MainWindow::OnGdReloadClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            if (m_gameData != nullptr && !String::IsNullOrEmpty(m_gdCurrentTable))
            {
                m_gameData->Unload(m_gdCurrentTable);
            }
            RunGameDataQuery();
        }
        catch (Exception^ ex)
        {
            ReportGameDataError(ex->Message);
        }
    }

    void MainWindow::OnGdOpenJsonClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            if (m_gameData == nullptr || String::IsNullOrEmpty(m_gdCurrentTable))
            {
                SetStatus("Pick a table first.");
                return;
            }

            String^ path = m_gameData->TablePath(m_gdCurrentTable);
            if (!File::Exists(path))
            {
                SetStatus("File not found: " + path);
                return;
            }

            System::Diagnostics::Process::Start(path);
            SetStatus("Opened " + path);
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not open the JSON file: " + ex->Message);
        }
    }

    void MainWindow::OnGdGridSelectionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        try
        {
            if (m_gdDataTableGrid == nullptr)
            {
                return;
            }
            FillGameDataDetail(dynamic_cast<System::Data::DataRowView^>(m_gdDataTableGrid->SelectedItem));
        }
        catch (Exception^ ex)
        {
            SetStatus("Game data detail: " + ex->Message);
        }
    }

    // The default DataGridColumnHeader template treats "_" as an access-key
    // marker and swallows it, which mangles names like Durability_RepairAble
    // and the generated NameSid_ENG columns. Escape it for display only.
    void MainWindow::OnGdAutoGeneratingColumn(Object^ /*sender*/, DataGridAutoGeneratingColumnEventArgs^ e)
    {
        if (e != nullptr && e->Column != nullptr && e->PropertyName != nullptr)
        {
            e->Column->Header = e->PropertyName->Replace("_", "__");
        }
    }

    // =========================================================================
    // Game Data page - codex mode
    //
    // Website-style browsing: Items / Monsters / Objects / NPCs as icon cards
    // (CodexCatalog builds the records the way the ReMir site does), a pager,
    // and a detail panel filled from CodexCatalog::BuildDetail. "Raw tables"
    // is the grid browser above. Mode, page and filters live in members so the
    // page comes back where it was after navigating away.
    // =========================================================================

    void MainWindow::EnsureCodex()
    {
        StudioLogScope logScope("MainWindow.EnsureCodex");
        if (m_codex == nullptr)
        {
            m_codex = gcnew CodexCatalog(m_gameData);
        }
    }

    int MainWindow::CodexPageSize()
    {
        return String::Equals(m_codexMode, "items", StringComparison::OrdinalIgnoreCase) ? 60 : 40;
    }

    void MainWindow::SetVisible(UIElement^ element, bool visible)
    {
        if (element != nullptr)
        {
            element->Visibility = visible ? Visibility::Visible : Visibility::Collapsed;
        }
    }

    // Active mode button gets the gold primary style; the others fall back to
    // the implicit Button style.
    void MainWindow::HighlightModeButton(Button^ button, String^ mode)
    {
        if (button == nullptr)
        {
            return;
        }

        if (String::Equals(mode, m_codexMode, StringComparison::OrdinalIgnoreCase))
        {
            Style^ primary = dynamic_cast<Style^>(button->TryFindResource("PrimaryButtonStyle"));
            if (primary != nullptr)
            {
                button->Style = primary;
            }
        }
        else
        {
            button->ClearValue(FrameworkElement::StyleProperty);
        }
    }

    void MainWindow::SetCodexMode(String^ mode)
    {
        if (String::IsNullOrEmpty(mode))
        {
            mode = "items";
        }
        m_codexMode = mode;

        bool raw = String::Equals(mode, "raw", StringComparison::OrdinalIgnoreCase);
        SetVisible(m_gdCodexPanel, !raw);
        SetVisible(m_gdRawPanel, raw);

        HighlightModeButton(m_gdModeItemsButton,    "items");
        HighlightModeButton(m_gdModeMonstersButton, "monsters");
        HighlightModeButton(m_gdModeObjectsButton,  "objects");
        HighlightModeButton(m_gdModeNpcsButton,     "npcs");
        HighlightModeButton(m_gdModeMapsButton,     "maps");
        HighlightModeButton(m_gdModeRawButton,      "raw");

        if (raw)
        {
            if (!String::IsNullOrEmpty(m_gdCurrentTable))
            {
                RunGameDataQuery();
            }
            return;
        }

        if (m_codex == nullptr)
        {
            return;
        }

        // The first visit to a category parses its tables. That happens on a
        // worker thread; the page is rebuilt from OnCodexBuildDone.
        if (m_codexBusy || !m_codex->IsBuilt(mode))
        {
            StartCodexBuild(mode, true);
            return;
        }

        bool modeChanged = !String::Equals(mode, m_codexFilterMode, StringComparison::OrdinalIgnoreCase);

        System::Windows::Input::Mouse::OverrideCursor = System::Windows::Input::Cursors::Wait;
        try
        {
            PopulateCodexFilters();            // lists are built, so this is just a scan
            RunCodexQuery(modeChanged ? 1 : Math::Max(1, m_codexPage));
        }
        catch (Exception^ ex)
        {
            if (m_gdCodexCountText != nullptr)
            {
                m_gdCodexCountText->Text = ex->Message;
            }
            SetStatus("Game data: " + ex->Message);
        }
        finally
        {
            System::Windows::Input::Mouse::OverrideCursor = nullptr;
        }
    }

    // Starts the background list build for `mode`. While a build is running,
    // further requests only record that a query is wanted afterwards.
    void MainWindow::StartCodexBuild(String^ mode, bool runQueryAfter)
    {
        StudioLog::Info("StartCodexBuild mode=" + mode + " runQueryAfter=" + (runQueryAfter ? gcnew String("yes") : gcnew String("no")));
        if (m_codex == nullptr)
        {
            return;
        }

        if (runQueryAfter)
        {
            m_codexQueryPending = true;
            SetCodexControlsEnabled(false);
            if (m_gdCodexCountText != nullptr)
            {
                m_gdCodexCountText->Text = "Loading " + m_codexMode + "...";
            }
            SetStatus("Building " + m_codexMode + " list...");
        }

        if (m_codexBusy)
        {
            return;   // OnCodexBuildDone re-evaluates the current mode
        }

        m_codexBusy       = true;
        m_codexBuildMode  = mode;
        m_codexBuildError = nullptr;

        m_codexThread = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MainWindow::CodexBuildThread));
        m_codexThread->IsBackground = true;
        m_codexThread->Name = "Codex build";
        m_codexThread->Start();
    }

    // Worker thread: parses the tables and builds the list. Touches no UI.
    void MainWindow::CodexBuildThread()
    {
        StudioLogScope logScope("MainWindow.CodexBuildThread (mode " + m_codexBuildMode + ")");
        try
        {
            m_codex->Prewarm(m_codexBuildMode);
            m_codexBuildMs = m_codex->LastBuildMs;
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("codex build thread", ex);
            m_codexBuildError = ex->Message;
        }

        try
        {
            m_window->Dispatcher->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal,
                                              gcnew System::Action(this, &MainWindow::OnCodexBuildDone));
        }
        catch (Exception^)
        {
            // The window is closing; nothing left to update.
        }
    }

    // UI thread: the build finished (or failed).
    void MainWindow::OnCodexBuildDone()
    {
        StudioLog::Info("OnCodexBuildDone");
        m_codexBusy   = false;
        m_codexThread = nullptr;

        bool pending = m_codexQueryPending;

        // The page may have been navigated away from while the thread ran.
        if (m_gdCodexList == nullptr || m_gdCodexCountText == nullptr)
        {
            return;   // PopulateGameDataPage -> SetCodexMode picks it up on return
        }

        SetCodexControlsEnabled(true);

        if (m_codexBuildError != nullptr)
        {
            m_codexQueryPending = false;
            if (pending)
            {
                m_gdCodexCountText->Text = m_codexBuildError;
            }
            SetStatus("Game data: " + m_codexBuildError);
            return;
        }

        m_codexShowBuildTime = true;

        if (pending)
        {
            m_codexQueryPending = false;
            if (!String::Equals(m_codexMode, "raw", StringComparison::OrdinalIgnoreCase))
            {
                SetCodexMode(m_codexMode);
            }
        }

        // One-time background build of the items list, so the first Items click is instant.
        if (!m_codexPrewarmDone && !m_codexBusy && m_codex != nullptr && !m_codex->IsBuilt("items"))
        {
            m_codexPrewarmDone = true;
            StartCodexBuild("items", false);
        }
    }

    void MainWindow::SetCodexControlsEnabled(bool enabled)
    {
        if (m_gdCodexSearchBox != nullptr)    m_gdCodexSearchBox->IsEnabled    = enabled;
        if (m_gdCodexSearchButton != nullptr) m_gdCodexSearchButton->IsEnabled = enabled;
        if (m_gdCodexFilter1Box != nullptr)   m_gdCodexFilter1Box->IsEnabled   = enabled;
        if (m_gdCodexFilter2Box != nullptr)   m_gdCodexFilter2Box->IsEnabled   = enabled;
        if (m_gdCodexFilter3Box != nullptr)   m_gdCodexFilter3Box->IsEnabled   = enabled;
        if (m_gdCodexSortBox != nullptr)      m_gdCodexSortBox->IsEnabled      = enabled;
        if (m_gdCodexReloadButton != nullptr) m_gdCodexReloadButton->IsEnabled = enabled;
        if (!enabled)
        {
            if (m_gdCodexPrevButton != nullptr) m_gdCodexPrevButton->IsEnabled = false;
            if (m_gdCodexNextButton != nullptr) m_gdCodexNextButton->IsEnabled = false;
        }
        // Prev/Next are re-enabled by the next RunCodexQuery (which knows the page count).
    }

    void MainWindow::FillChoiceCombo(ComboBox^ box, List<CodexChoice^>^ choices)
    {
        if (box == nullptr)
        {
            return;
        }
        box->Items->Clear();
        if (choices != nullptr)
        {
            for each (CodexChoice^ choice in choices)
            {
                box->Items->Add(choice);
            }
        }
        box->SelectedIndex = (box->Items->Count > 0) ? 0 : -1;
        box->Visibility = Visibility::Visible;
    }

    void MainWindow::FillTagCombo(ComboBox^ box, array<String^>^ labels, array<String^>^ tags)
    {
        if (box == nullptr)
        {
            return;
        }
        box->Items->Clear();
        for (int i = 0; i < labels->Length; ++i)
        {
            ComboBoxItem^ item = gcnew ComboBoxItem();
            item->Content = labels[i];
            item->Tag     = tags[i];
            box->Items->Add(item);
        }
        box->SelectedIndex = (labels->Length > 0) ? 0 : -1;
        box->Visibility = Visibility::Visible;
    }

    void MainWindow::HideCombo(ComboBox^ box)
    {
        if (box == nullptr)
        {
            return;
        }
        box->Items->Clear();
        box->Visibility = Visibility::Collapsed;
    }

    int MainWindow::ComboChoiceValue(ComboBox^ box)
    {
        if (box == nullptr || box->Visibility != Visibility::Visible)
        {
            return 0;
        }
        CodexChoice^ choice = dynamic_cast<CodexChoice^>(box->SelectedItem);
        return (choice == nullptr) ? 0 : choice->Value;
    }

    String^ MainWindow::ComboTag(ComboBox^ box, String^ fallback)
    {
        if (box == nullptr || box->Visibility != Visibility::Visible)
        {
            return fallback;
        }
        ComboBoxItem^ item = dynamic_cast<ComboBoxItem^>(box->SelectedItem);
        String^ tag = (item == nullptr) ? nullptr : dynamic_cast<String^>(item->Tag);
        return (tag == nullptr) ? fallback : tag;
    }

    // Filter / sort combos for the current mode. Items: type, grade, class,
    // sort. Monsters: grade, sort. NPCs: role. Objects: none.
    void MainWindow::PopulateCodexFilters()
    {
        if (m_codex == nullptr)
        {
            return;
        }

        m_gdSuppressCodexEvents = true;
        try
        {
            String^ mode = m_codexMode;

            if (String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase))
            {
                FillChoiceCombo(m_gdCodexFilter1Box, m_codex->ItemMainTypeChoices());
                FillChoiceCombo(m_gdCodexFilter2Box, m_codex->ItemGradeChoices());
                FillChoiceCombo(m_gdCodexFilter3Box, m_codex->ItemClassChoices());
                FillTagCombo(m_gdCodexSortBox,
                             gcnew array<String^> { "Sort: Name", "Sort: Grade", "Sort: Tier", "Sort: Level" },
                             gcnew array<String^> { "name", "grade", "tier", "level" });
            }
            else if (String::Equals(mode, "monsters", StringComparison::OrdinalIgnoreCase))
            {
                FillChoiceCombo(m_gdCodexFilter1Box, m_codex->MonsterGradeChoices());
                HideCombo(m_gdCodexFilter2Box);
                HideCombo(m_gdCodexFilter3Box);
                FillTagCombo(m_gdCodexSortBox,
                             gcnew array<String^> { "Sort: Level", "Sort: Combat Power", "Sort: HP", "Sort: EXP", "Sort: Name" },
                             gcnew array<String^> { "level", "cp", "hp", "exp", "name" });
            }
            else if (String::Equals(mode, "npcs", StringComparison::OrdinalIgnoreCase))
            {
                FillTagCombo(m_gdCodexFilter1Box,
                             gcnew array<String^> { "All roles", "Merchant", "Friendly", "Hostile", "Titled" },
                             gcnew array<String^> { "", "merchant", "friendly", "hostile", "titled" });
                HideCombo(m_gdCodexFilter2Box);
                HideCombo(m_gdCodexFilter3Box);
                HideCombo(m_gdCodexSortBox);
            }
            else if (String::Equals(mode, "maps", StringComparison::OrdinalIgnoreCase))
            {
                // Filter1 = stage type, Filter2 = minimap yes/no (default: with minimap).
                FillChoiceCombo(m_gdCodexFilter1Box, m_codex->StageTypeChoices());
                FillTagCombo(m_gdCodexFilter2Box,
                             gcnew array<String^> { "All stages", "With minimap", "No minimap" },
                             gcnew array<String^> { "0", "1", "2" });
                if (m_gdCodexFilter2Box != nullptr)
                {
                    m_gdCodexFilter2Box->SelectedIndex = 1;
                }
                HideCombo(m_gdCodexFilter3Box);
                FillTagCombo(m_gdCodexSortBox,
                             gcnew array<String^> { "Sort: Name", "Sort: ID", "Sort: Level" },
                             gcnew array<String^> { "name", "id", "level" });
            }
            else
            {
                HideCombo(m_gdCodexFilter1Box);
                HideCombo(m_gdCodexFilter2Box);
                HideCombo(m_gdCodexFilter3Box);
                HideCombo(m_gdCodexSortBox);
            }

            m_codexFilterMode = mode;
        }
        finally
        {
            m_gdSuppressCodexEvents = false;
        }
    }

    void MainWindow::RunCodexQuery(int page)
    {
        if (m_codex == nullptr || m_gdCodexList == nullptr)
        {
            return;
        }

        String^ mode = m_codexMode;
        if (String::Equals(mode, "raw", StringComparison::OrdinalIgnoreCase))
        {
            return;
        }

        // Never parse tables on the UI thread: build in the background and come back.
        if (m_codexBusy || !m_codex->IsBuilt(mode))
        {
            StartCodexBuild(mode, true);
            return;
        }

        String^ search   = (m_gdCodexSearchBox == nullptr) ? String::Empty : m_gdCodexSearchBox->Text->Trim();
        int     pageSize = CodexPageSize();
        if (page < 1)
        {
            page = 1;
        }

        System::Windows::Input::Mouse::OverrideCursor = System::Windows::Input::Cursors::Wait;
        try
        {
            CodexPage^ result = nullptr;

            if (String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase))
            {
                result = m_codex->QueryItems(search,
                                             ComboChoiceValue(m_gdCodexFilter1Box),
                                             ComboChoiceValue(m_gdCodexFilter2Box),
                                             ComboChoiceValue(m_gdCodexFilter3Box),
                                             ComboTag(m_gdCodexSortBox, "name"),
                                             page, pageSize);
            }
            else if (String::Equals(mode, "monsters", StringComparison::OrdinalIgnoreCase))
            {
                result = m_codex->QueryMonsters(search,
                                                ComboChoiceValue(m_gdCodexFilter1Box),
                                                ComboTag(m_gdCodexSortBox, "level"),
                                                page, pageSize);
            }
            else if (String::Equals(mode, "objects", StringComparison::OrdinalIgnoreCase))
            {
                result = m_codex->QueryObjects(search, page, pageSize);
            }
            else if (String::Equals(mode, "npcs", StringComparison::OrdinalIgnoreCase))
            {
                result = m_codex->QueryNpcs(search, ComboTag(m_gdCodexFilter1Box, String::Empty), page, pageSize);
            }
            else if (String::Equals(mode, "maps", StringComparison::OrdinalIgnoreCase))
            {
                // Filter1 value 0 = all types, else the choice label is the type text.
                String^ stageType = String::Empty;
                if (m_gdCodexFilter1Box != nullptr && m_gdCodexFilter1Box->Visibility == Visibility::Visible &&
                    ComboChoiceValue(m_gdCodexFilter1Box) != 0)
                {
                    CodexChoice^ typeChoice = dynamic_cast<CodexChoice^>(m_gdCodexFilter1Box->SelectedItem);
                    if (typeChoice != nullptr)
                    {
                        stageType = typeChoice->Label;
                    }
                }

                int mapFilter = 1;
                Int32::TryParse(ComboTag(m_gdCodexFilter2Box, "1"), mapFilter);

                result = m_codex->QueryStages(search, stageType, mapFilter,
                                              ComboTag(m_gdCodexSortBox, "name"), page, pageSize);
            }

            if (result == nullptr)
            {
                return;
            }

            m_codexCurrentPage = result;
            m_codexPage        = result->Page;

            m_gdSuppressCodexEvents = true;
            try
            {
                m_gdCodexList->ItemsSource = result->Entries;
            }
            finally
            {
                m_gdSuppressCodexEvents = false;
            }

            m_gdCodexPageText->Text  = String::Format("Page {0:N0} / {1:N0}", result->Page, result->Pages);

            // Noun for the count line: "maps" mode lists stages.
            String^ noun = mode;
            if (String::Equals(mode, "maps", StringComparison::OrdinalIgnoreCase))
            {
                noun = "stages";
            }

            if (m_codexShowBuildTime)
            {
                // First query after a build: say how long the build took.
                m_codexShowBuildTime = false;
                m_gdCodexCountText->Text = String::Format("{0:N0} {1} - built in {2:0.0} s",
                                                          result->Total, noun, m_codexBuildMs / 1000.0);
            }
            else
            {
                m_gdCodexCountText->Text = String::Format("{0:N0} {1}", result->Total, noun);
            }
            m_gdCodexPrevButton->IsEnabled = (result->Page > 1);
            m_gdCodexNextButton->IsEnabled = (result->Page < result->Pages);

            ShowCodexDetail(nullptr);

            // Opened from the character window: select that item's card so its detail shows straight away.
            if (m_pendingItemSelect != 0 && String::Equals(mode, "items", StringComparison::OrdinalIgnoreCase))
            {
                CodexEntry^ match = nullptr;
                for each (CodexEntry^ candidate in result->Entries)
                {
                    if (candidate->Id == m_pendingItemSelect) { match = candidate; break; }
                }
                if (match == nullptr && result->Entries->Count > 0) match = result->Entries[0];   // id not listed: best hit
                m_pendingItemSelect = 0;
                if (match != nullptr)
                {
                    m_gdCodexList->SelectedItem = match;    // raises the selection handler -> detail panel
                    m_gdCodexList->ScrollIntoView(match);
                }
            }
            SetStatus(String::Format("{0}: {1:N0} entries", mode, result->Total));
        }
        catch (Exception^ ex)
        {
            if (m_gdCodexCountText != nullptr)
            {
                m_gdCodexCountText->Text = ex->Message;
            }
            m_gdCodexList->ItemsSource = nullptr;
            SetStatus("Game data: " + ex->Message);
        }
        finally
        {
            System::Windows::Input::Mouse::OverrideCursor = nullptr;
        }
    }

    // Loads a png from a CDN url or a local path into an Image; hides the
    // Image when there is nothing to show or the url is malformed. Download
    // failures (404) just leave the Image blank.
    void MainWindow::SetImageSource(Image^ image, String^ url)
    {
        if (image == nullptr)
        {
            return;
        }

        if (String::IsNullOrWhiteSpace(url))
        {
            image->Source     = nullptr;
            image->Visibility = Visibility::Collapsed;
            return;
        }

        try
        {
            Uri^ uri = gcnew Uri(url, UriKind::Absolute);
            System::Windows::Media::Imaging::BitmapImage^ bitmap = gcnew System::Windows::Media::Imaging::BitmapImage();
            bitmap->BeginInit();
            bitmap->UriSource = uri;
            bitmap->EndInit();
            image->Source     = bitmap;
            image->Visibility = Visibility::Visible;
        }
        catch (Exception^)
        {
            image->Source     = nullptr;
            image->Visibility = Visibility::Collapsed;
        }
    }

    void MainWindow::ShowCodexDetail(CodexEntry^ entry)
    {
        m_codexSelected = entry;

        if (m_gdDetailEmptyText == nullptr || m_gdDetailScroll == nullptr)
        {
            return;
        }

        if (entry == nullptr || m_codex == nullptr)
        {
            ShowStageWarps(nullptr);
            ShowMonsterMaps(nullptr);
            SetVisible(m_gdDetailEmptyText, true);
            SetVisible(m_gdDetailScroll, false);
            return;
        }

        try
        {
            CodexDetail^ detail = m_codex->BuildDetail(entry);
            ApplyCodexDetail(detail, true);
            ShowStageWarps(entry);
            ShowMonsterMaps(entry);
            if (m_gdDetailCopyCommandButton != nullptr)
            {
                // NPCs and maps have no spawn/give command.
                SetVisible(m_gdDetailCopyCommandButton, CodexCommandFor(entry) != nullptr);
            }
            if (m_gdDetailViewMapButton != nullptr)
            {
                SetVisible(m_gdDetailViewMapButton, dynamic_cast<StageEntry^>(entry) != nullptr);
            }
            if (m_gdDetailOpenGenButton != nullptr)
            {
                // Respawn list exists per stage, so only map cards get this button.
                SetVisible(m_gdDetailOpenGenButton, dynamic_cast<StageEntry^>(entry) != nullptr);
            }
            SetVisible(m_gdDetailEmptyText, false);
            SetVisible(m_gdDetailScroll, true);
        }
        catch (Exception^ ex)
        {
            SetVisible(m_gdDetailEmptyText, true);
            SetVisible(m_gdDetailScroll, false);
            SetStatus("Game data detail: " + ex->Message);
        }
    }

    // Lists every warp that arrives in the selected stage (WARP_LOCATION.json), with
    // where each one is reachable from. Collapsed for non-map entries and when none.
    void MainWindow::ShowStageWarps(CodexEntry^ entry)
    {
        if (m_gdDetailWarpsBox == nullptr || m_gdDetailWarpsList == nullptr || m_gdDetailWarpsTitle == nullptr)
        {
            return;
        }

        StageEntry^ stage = dynamic_cast<StageEntry^>(entry);
        if (stage == nullptr || m_codex == nullptr)
        {
            m_gdDetailWarpsList->ItemsSource = nullptr;
            SetVisible(m_gdDetailWarpsBox, false);
            return;
        }

        try
        {
            System::Collections::Generic::List<CodexWarp^>^ warps = m_codex->WarpsInto(stage->Id);
            if (warps == nullptr || warps->Count == 0)
            {
                m_gdDetailWarpsList->ItemsSource = nullptr;
                SetVisible(m_gdDetailWarpsBox, false);
                return;
            }

            m_gdDetailWarpsList->ItemsSource = warps;
            m_gdDetailWarpsTitle->Text = String::Format("WARPS INTO THIS MAP ({0:N0})", warps->Count);
            SetVisible(m_gdDetailWarpsBox, true);
        }
        catch (Exception^ ex)
        {
            m_gdDetailWarpsList->ItemsSource = nullptr;
            SetVisible(m_gdDetailWarpsBox, false);
            SetStatus("Warp list: " + ex->Message);
        }
    }

    // Any Copy button in the warps list: its Tag holds "@cheatmsg warp <id>".
    void MainWindow::OnGdWarpCopyClick(Object^ /*sender*/, RoutedEventArgs^ e)
    {
        try
        {
            if (e == nullptr)
            {
                return;
            }

            // OriginalSource may be the button's inner content; walk up to the Button.
            DependencyObject^ node = dynamic_cast<DependencyObject^>(e->OriginalSource);
            Button^ button = nullptr;
            while (node != nullptr && button == nullptr)
            {
                button = dynamic_cast<Button^>(node);
                if (button == nullptr)
                {
                    node = System::Windows::Media::VisualTreeHelper::GetParent(node);
                }
            }
            if (button == nullptr)
            {
                return;
            }

            String^ command = dynamic_cast<String^>(button->Tag);
            if (String::IsNullOrEmpty(command))
            {
                return;
            }

            System::Windows::Clipboard::SetDataObject(command, true);
            SetStatus("Copied: " + command);
            e->Handled = true;
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not copy to the clipboard: " + ex->Message);
        }
    }

    // Pushes a CodexDetail into the panel controls. updateVariants=false keeps
    // the variants list as it is (used when the user picks a variant).
    void MainWindow::ApplyCodexDetail(CodexDetail^ detail, bool updateVariants)
    {
        if (detail == nullptr)
        {
            return;
        }

        Brush^ nameBrush = detail->NameBrush;
        if (nameBrush == nullptr)
        {
            nameBrush = dynamic_cast<Brush^>(m_gdDetailName->TryFindResource("Brush.Text"));
        }
        Brush^ frameBrush = detail->NameBrush;
        if (frameBrush == nullptr)
        {
            frameBrush = dynamic_cast<Brush^>(m_gdDetailIconFrame->TryFindResource("Brush.Border"));
        }

        m_gdDetailName->Text = (detail->Name == nullptr) ? String::Empty : detail->Name;
        if (nameBrush != nullptr)
        {
            m_gdDetailName->Foreground = nameBrush;
        }
        if (frameBrush != nullptr)
        {
            m_gdDetailIconFrame->BorderBrush = frameBrush;
        }
        m_gdDetailSubtitle->Text = (detail->Subtitle == nullptr) ? String::Empty : detail->Subtitle;

        SetImageSource(m_gdDetailIcon,      detail->IconUrl);
        SetImageSource(m_gdDetailTradeIcon, detail->TradeIconUrl);
        SetImageSource(m_gdDetailTierIcon,  detail->TierIconUrl);

        bool hasDescription = !String::IsNullOrWhiteSpace(detail->Description);
        m_gdDetailDescription->Text = hasDescription ? detail->Description : String::Empty;
        SetVisible(m_gdDetailDescription, hasDescription);

        bool hasStats = (detail->Stats != nullptr && detail->Stats->Count > 0);
        m_gdDetailStatsTitle->Text = String::IsNullOrEmpty(detail->StatsTitle)
            ? gcnew String("STATS")
            : detail->StatsTitle->ToUpperInvariant();
        m_gdDetailStatsList->ItemsSource = hasStats ? detail->Stats : nullptr;
        SetVisible(m_gdDetailStatsBox, hasStats);

        bool hasEffects = (detail->Effects != nullptr && detail->Effects->Count > 0);
        m_gdDetailEffectsList->ItemsSource = hasEffects ? detail->Effects : nullptr;
        SetVisible(m_gdDetailEffectsList, hasEffects);

        bool hasAttrs = (detail->Attributes != nullptr && detail->Attributes->Count > 0);
        m_gdDetailAttrsList->ItemsSource = hasAttrs ? detail->Attributes : nullptr;
        SetVisible(m_gdDetailAttrsList, hasAttrs);

        if (updateVariants)
        {
            bool hasVariants = (detail->Variants != nullptr && detail->Variants->Count > 1);
            m_gdSuppressCodexEvents = true;
            try
            {
                m_gdDetailVariantsList->ItemsSource = hasVariants ? detail->Variants : nullptr;
                if (hasVariants)
                {
                    m_gdDetailVariantsList->SelectedIndex = 0;
                }
            }
            finally
            {
                m_gdSuppressCodexEvents = false;
            }
            SetVisible(m_gdDetailVariantsBox, hasVariants);
        }

        bool hasFooter = !String::IsNullOrWhiteSpace(detail->Footer);
        m_gdDetailFooter->Text = hasFooter ? detail->Footer : String::Empty;
        SetVisible(m_gdDetailFooter, hasFooter);
    }

    // ---- codex handlers -----------------------------------------------------

    void MainWindow::OnGdModeClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        try
        {
            Button^ button = dynamic_cast<Button^>(sender);
            String^ mode   = (button == nullptr) ? nullptr : dynamic_cast<String^>(button->Tag);
            if (String::IsNullOrEmpty(mode))
            {
                return;
            }
            SetCodexMode(mode);
        }
        catch (Exception^ ex)
        {
            SetStatus("Game data: " + ex->Message);
        }
    }

    void MainWindow::OnGdCodexSearchKeyDown(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::Enter)
        {
            RunCodexQuery(1);
            e->Handled = true;
        }
    }

    void MainWindow::OnGdCodexSearchClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        RunCodexQuery(1);
    }

    void MainWindow::OnGdCodexFilterChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_gdSuppressCodexEvents)
        {
            return;
        }
        RunCodexQuery(1);
    }

    void MainWindow::OnGdCodexReloadClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            if (m_codexBusy)
            {
                SetStatus("Game data: a list is still building - try again in a moment.");
                return;   // Invalidate() would block the UI thread until the build ends
            }
            if (m_codex != nullptr)
            {
                m_codex->Invalidate();
            }
            if (m_gameData != nullptr)
            {
                m_gameData->UnloadAll();
            }
            m_codexFilterMode = nullptr;   // forces the combos to rebuild from fresh data
            SetCodexMode(m_codexMode);
        }
        catch (Exception^ ex)
        {
            SetStatus("Game data: " + ex->Message);
        }
    }

    void MainWindow::OnGdCodexPrevClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_codexCurrentPage != nullptr && m_codexCurrentPage->Page > 1)
        {
            RunCodexQuery(m_codexCurrentPage->Page - 1);
        }
    }

    void MainWindow::OnGdCodexNextClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_codexCurrentPage != nullptr && m_codexCurrentPage->Page < m_codexCurrentPage->Pages)
        {
            RunCodexQuery(m_codexCurrentPage->Page + 1);
        }
    }

    void MainWindow::OnGdCodexListSelectionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_gdSuppressCodexEvents || m_gdCodexList == nullptr)
        {
            return;
        }
        ShowCodexDetail(dynamic_cast<CodexEntry^>(m_gdCodexList->SelectedItem));
    }

    // Picking a monster variant re-fills the stats for that row but keeps the
    // variant list (and the card selection) as they are.
    void MainWindow::OnGdDetailVariantSelectionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_gdSuppressCodexEvents || m_gdDetailVariantsList == nullptr || m_codex == nullptr)
        {
            return;
        }

        try
        {
            MonsterEntry^ variant = dynamic_cast<MonsterEntry^>(m_gdDetailVariantsList->SelectedItem);
            if (variant == nullptr)
            {
                return;
            }
            ApplyCodexDetail(m_codex->BuildDetail(variant), false);
        }
        catch (Exception^ ex)
        {
            SetStatus("Game data detail: " + ex->Message);
        }
    }

    // Opens the zoomable map window for a StageEntry; ignores any other kind.
    void MainWindow::OpenStageMapWindow(CodexEntry^ entry)
    {
        StageEntry^ stage = dynamic_cast<StageEntry^>(entry);
        if (stage == nullptr || m_codex == nullptr)
        {
            return;
        }

        try
        {
            StageMapWindow^ w = gcnew StageMapWindow(m_codex, m_window, m_xamlRoot, stage->Id);
            w->Show();
            SetStatus("Opened map: " + stage->Name);
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not open the map window: " + ex->Message);
        }
    }

    void MainWindow::OnGdDetailViewMapClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        OpenStageMapWindow(m_codexSelected);
    }

    // Opens the selected stage's respawn list (Data\Gen\GENDATA_<stage>.json).
    void MainWindow::OnGdDetailOpenGenClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            StageEntry^ stage = dynamic_cast<StageEntry^>(m_codexSelected);
            if (stage == nullptr || m_codex == nullptr)
            {
                return;
            }

            String^ path = m_codex->GenFilePath(stage->Id);
            if (String::IsNullOrEmpty(path) || !File::Exists(path))
            {
                SetStatus("No respawn file for this stage: " + path);
                return;
            }

            System::Diagnostics::Process::Start(path);
            SetStatus("Opened " + path);
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not open the respawn file: " + ex->Message);
        }
    }

    void MainWindow::OnGdCodexListDoubleClick(Object^ /*sender*/, System::Windows::Input::MouseButtonEventArgs^ /*e*/)
    {
        if (m_gdCodexList == nullptr)
        {
            return;
        }
        OpenStageMapWindow(dynamic_cast<CodexEntry^>(m_gdCodexList->SelectedItem));
    }

    // In-game cheat command for an entry, or nullptr when there is none.
    //   item    -> @cheatmsg makeitem <id> 1
    //   monster -> @cheatmsg gen <id> 1
    //   object  -> @cheatmsg genobject <id> 1
    String^ MainWindow::CodexCommandFor(CodexEntry^ entry)
    {
        if (entry == nullptr || entry->Kind == nullptr)
        {
            return nullptr;
        }

        long long id = entry->Id;
        String^ kind = entry->Kind->ToLowerInvariant();

        if (String::Equals(kind, "item"))
        {
            return "@cheatmsg makeitem " + id.ToString() + " 1";
        }
        if (String::Equals(kind, "monster"))
        {
            // The monster card is the strongest row; use the variant the user picked, if any.
            if (m_gdDetailVariantsList != nullptr)
            {
                MonsterEntry^ variant = dynamic_cast<MonsterEntry^>(m_gdDetailVariantsList->SelectedItem);
                if (variant != nullptr)
                {
                    id = variant->Id;
                }
            }
            return "@cheatmsg gen " + id.ToString() + " 1";
        }
        if (String::Equals(kind, "object"))
        {
            return "@cheatmsg genobject " + id.ToString() + " 1";
        }
        return nullptr;
    }

    void MainWindow::OnGdDetailCopyCommandClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            String^ command = CodexCommandFor(m_codexSelected);
            if (command == nullptr)
            {
                SetStatus("No command for this entry.");
                return;
            }

            // The clipboard can be briefly locked by another app; SetDataObject
            // with copy=true retries internally and persists after exit.
            System::Windows::Clipboard::SetDataObject(command, true);
            SetStatus("Copied: " + command);
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not copy to the clipboard: " + ex->Message);
        }
    }

    // Jumps to the raw table that backs the selected card, searched by its id.
    void MainWindow::OnGdDetailOpenRawClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_codexSelected == nullptr)
        {
            return;
        }

        try
        {
            String^ kind  = (m_codexSelected->Kind == nullptr) ? String::Empty : m_codexSelected->Kind->ToLowerInvariant();
            String^ table = nullptr;
            if (String::Equals(kind, "item"))         table = "ITEM";
            else if (String::Equals(kind, "monster")) table = "MONSTER";
            else if (String::Equals(kind, "object"))  table = "OBJECT";
            else if (String::Equals(kind, "npc"))     table = "NPC";
            else if (String::Equals(kind, "map"))     table = "STAGE";
            if (table == nullptr)
            {
                return;
            }

            long long id = m_codexSelected->Id;
            m_gdCurrentTable = table;
            if (m_gdSearchBox != nullptr)
            {
                m_gdSearchBox->Text = id.ToString();
            }
            if (m_gdTableFilterBox != nullptr)
            {
                RebuildGameDataTree(m_gdTableFilterBox->Text);   // re-selects the current table node
            }
            SetCodexMode("raw");
        }
        catch (Exception^ ex)
        {
            SetStatus("Game data: " + ex->Message);
        }
    }

    // =========================================================================
    // Servers page: process status + start / stop / restart (ServerControl)
    // =========================================================================

    void MainWindow::ClearServersHandles()
    {
        if (m_srvTimer != nullptr)
        {
            m_srvTimer->Stop();
            m_srvTimer = nullptr;
        }
        m_srvGrid = nullptr;
        m_srvStatusText = nullptr;
        m_srvStartAll = nullptr;
        m_srvStopAll = nullptr;
        m_srvStart = nullptr;
        m_srvStop = nullptr;
        m_srvRestart = nullptr;
        m_srvRefresh = nullptr;
        m_srvLaunchMode = nullptr;
        m_srvConfig = nullptr;
        m_srvLogBox = nullptr;
        m_srvLogTitle = nullptr;
        m_srvLogFollow = nullptr;
        m_srvLogOpenFile = nullptr;
        m_srvLogOpenFolder = nullptr;
        m_srvLogFile = nullptr;
        m_srvLogStamp = 0;
        // m_srvLogIndex is kept so the same server's log reappears after a page round trip.
    }

    void MainWindow::PopulateServersPage(FrameworkElement^ page)
    {
        m_srvGrid       = safe_cast<DataGrid^>(FindRequired(page, "ServersGrid"));
        m_srvStatusText = safe_cast<TextBlock^>(FindRequired(page, "SrvStatusText"));
        m_srvStartAll   = safe_cast<Button^>(FindRequired(page, "SrvStartAllButton"));
        m_srvStopAll    = safe_cast<Button^>(FindRequired(page, "SrvStopAllButton"));
        m_srvStart      = safe_cast<Button^>(FindRequired(page, "SrvStartButton"));
        m_srvStop       = safe_cast<Button^>(FindRequired(page, "SrvStopButton"));
        m_srvRestart    = safe_cast<Button^>(FindRequired(page, "SrvRestartButton"));
        m_srvRefresh    = safe_cast<Button^>(FindRequired(page, "SrvRefreshButton"));
        m_srvConfig        = safe_cast<Button^>(FindRequired(page, "SrvConfigButton"));
        m_srvConfig->Click += gcnew RoutedEventHandler(this, &MainWindow::OnSrvConfigClick);
        m_srvLaunchMode    = safe_cast<ComboBox^>(FindRequired(page, "SrvLaunchModeBox"));
        m_srvLaunchMode->SelectedIndex = m_settings->ServerLaunchHidden ? 1 : 0;   // before the handler is attached
        m_srvLaunchMode->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnSrvLaunchModeChanged);
        m_srvLogBox        = safe_cast<TextBox^>(FindRequired(page, "LogTextBox"));
        m_srvLogTitle      = safe_cast<TextBlock^>(FindRequired(page, "LogTitleText"));
        m_srvLogFollow     = safe_cast<CheckBox^>(FindRequired(page, "LogFollowCheck"));
        m_srvLogOpenFile   = safe_cast<Button^>(FindRequired(page, "LogOpenFileButton"));
        m_srvLogOpenFolder = safe_cast<Button^>(FindRequired(page, "LogOpenFolderButton"));
        m_srvLogOpenFile->Click   += gcnew RoutedEventHandler(this, &MainWindow::OnSrvLogOpenFileClick);
        m_srvLogOpenFolder->Click += gcnew RoutedEventHandler(this, &MainWindow::OnSrvLogOpenFolderClick);
        m_srvGrid->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnSrvSelectionChanged);
        if (m_srvLogIndex == 0 && m_srvLogFile == nullptr) { m_srvLogIndex = -1; }   // first visit: nothing selected

        m_srvStartAll->Click += gcnew RoutedEventHandler(this, &MainWindow::OnSrvStartAllClick);
        m_srvStopAll->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnSrvStopAllClick);
        m_srvStart->Click    += gcnew RoutedEventHandler(this, &MainWindow::OnSrvSelectedClick);
        m_srvStop->Click     += gcnew RoutedEventHandler(this, &MainWindow::OnSrvSelectedClick);
        m_srvRestart->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnSrvSelectedClick);
        m_srvRefresh->Click  += gcnew RoutedEventHandler(this, &MainWindow::OnSrvRefreshClick);

        if (m_servers == nullptr)
        {
            m_servers = gcnew ServerControl();
        }
        m_servers->ServersPath = m_settings->ServersPath;
        m_servers->LaunchHidden = m_settings->ServerLaunchHidden;

        if (String::IsNullOrWhiteSpace(m_settings->ServersPath))
        {
            m_srvStatusText->Text = "Server folder is not set (Settings): status works, Start needs it.";
        }

        m_srvTimer = gcnew System::Windows::Threading::DispatcherTimer();
        m_srvTimer->Interval = TimeSpan::FromSeconds(3.0);
        m_srvTimer->Tick += gcnew EventHandler(this, &MainWindow::OnSrvTimerTick);
        m_srvTimer->Start();

        StartServerWorker(String::Empty, nullptr);
    }

    // Open External (0) / Open Internal (1): applies to the next Start and is remembered.
    void MainWindow::OnSrvLaunchModeChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_srvLaunchMode == nullptr || m_servers == nullptr)
        {
            return;
        }
        bool hidden = (m_srvLaunchMode->SelectedIndex == 1);
        m_servers->LaunchHidden = hidden;
        m_settings->ServerLaunchHidden = hidden;
        try { m_settings->Save(m_configPath); } catch (Exception^) {}
        if (m_srvStatusText != nullptr)
        {
            m_srvStatusText->Text = hidden
                ? gcnew String("Open Internal: servers will start hidden. Use the log panel to watch them.")
                : gcnew String("Open External: each server opens its own console window.");
        }
    }

    // All Mir 5 services read one settings file (Server\Bin\Config\settings.json), so no server needs to be selected.
    void MainWindow::OnSrvConfigClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            m_servers->ServersPath = m_settings->ServersPath;
            String^ path = m_servers->ConfigPath(0);   // any index: the file is shared by all services
            if (path == nullptr)
            {
                m_srvStatusText->Text = "settings.json not found. Set the Server folder in Settings (it must contain Bin\\Config\\settings.json).";
                return;
            }
            ConfigEditorWindow^ editor = gcnew ConfigEditorWindow(m_window, m_xamlRoot, "Server settings (shared by all services)", path);
            editor->Show();
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not open the config: " + ex->Message);
        }
    }

    void MainWindow::OnSrvTimerTick(Object^ /*sender*/, EventArgs^ /*e*/)
    {
        StartServerWorker(String::Empty, nullptr);   // ignored while a worker is running
    }

    void MainWindow::OnSrvRefreshClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        StartServerWorker(String::Empty, nullptr);
    }

    array<int>^ MainWindow::SelectedServerIndexes()
    {
        List<int>^ picked = gcnew List<int>();
        if (m_srvGrid != nullptr)
        {
            for each (Object^ item in m_srvGrid->SelectedItems)
            {
                ServerRow^ row = dynamic_cast<ServerRow^>(item);
                if (row != nullptr)
                {
                    picked->Add(row->Index);
                }
            }
        }
        picked->Sort();
        return picked->ToArray();
    }

    void MainWindow::OnSrvStartAllClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        StartServerWorker("start", ServerControl::StartOrder());
    }

    void MainWindow::OnSrvStopAllClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(
            m_window, "Stop every Mir 5 server process?\nPlayers will be disconnected.",
            "Stop all servers", System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
        if (answer == System::Windows::MessageBoxResult::Yes)
        {
            StartServerWorker("stop", ServerControl::StopOrder());
        }
    }

    void MainWindow::OnSrvSelectedClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        array<int>^ picked = SelectedServerIndexes();
        if (picked->Length == 0)
        {
            if (m_srvStatusText != nullptr) m_srvStatusText->Text = "Select one or more servers first.";
            return;
        }

        String^ action = "start";
        if (Object::ReferenceEquals(sender, m_srvStop))         action = "stop";
        else if (Object::ReferenceEquals(sender, m_srvRestart)) action = "restart";

        if (!String::Equals(action, "start"))
        {
            // Stop in reverse start order, like Stop All.
            Array::Reverse(picked);
        }
        StartServerWorker(action, picked);
    }

    // Runs one action (or just a status refresh when action is empty) on a worker
    // thread. Refresh requests are dropped while busy; action requests report it.
    void MainWindow::StartServerWorker(String^ action, array<int>^ indexes)
    {
        if (m_servers == nullptr)
        {
            return;
        }
        if (m_srvBusy)
        {
            if (!String::IsNullOrEmpty(action) && m_srvStatusText != nullptr)
            {
                m_srvStatusText->Text = "Busy - wait for the current operation to finish.";
            }
            return;
        }

        m_srvBusy    = true;
        m_srvAction  = action;
        m_srvIndexes = indexes;
        m_srvResult  = String::Empty;
        m_servers->ServersPath = m_settings->ServersPath;

        if (!String::IsNullOrEmpty(action))
        {
            array<Button^>^ buttons = gcnew array<Button^> { m_srvStartAll, m_srvStopAll, m_srvStart, m_srvStop, m_srvRestart };
            for each (Button^ b in buttons)
            {
                if (b != nullptr) b->IsEnabled = false;
            }
            if (m_srvStatusText != nullptr) m_srvStatusText->Text = "Working...";
        }

        System::Threading::Thread^ worker = gcnew System::Threading::Thread(
            gcnew System::Threading::ThreadStart(this, &MainWindow::ServerWorker));
        worker->IsBackground = true;
        worker->Start();
    }

    void MainWindow::ServerWorker()
    {
        try
        {
            if (!String::IsNullOrEmpty(m_srvAction) && m_srvIndexes != nullptr)
            {
                List<String^>^ problems = gcnew List<String^>();
                int ok = 0;
                bool restart = String::Equals(m_srvAction, "restart");

                if (String::Equals(m_srvAction, "stop") || restart)
                {
                    for each (int index in m_srvIndexes)
                    {
                        String^ r = m_servers->Stop(index);
                        if (r->StartsWith("Stopped")) ++ok; else problems->Add(r);
                    }
                    if (restart)
                    {
                        System::Threading::Thread::Sleep(1500);
                        Array::Reverse(m_srvIndexes);   // start in launch order again
                    }
                }
                if (String::Equals(m_srvAction, "start") || restart)
                {
                    ok = restart ? 0 : ok;
                    for (int i = 0; i < m_srvIndexes->Length; ++i)
                    {
                        String^ r = m_servers->Start(m_srvIndexes[i]);
                        if (r->StartsWith("Started"))
                        {
                            ++ok;
                            if (i + 1 < m_srvIndexes->Length) System::Threading::Thread::Sleep(1500);   // let each server bind first
                        }
                        else problems->Add(r);
                    }
                }

                String^ verb = String::Equals(m_srvAction, "stop") ? gcnew String("Stopped")
                             : (restart ? gcnew String("Restarted") : gcnew String("Started"));
                m_srvResult = verb + " " + ok.ToString() + " server(s).";
                if (problems->Count > 0)
                {
                    m_srvResult = m_srvResult + " Problems: " + String::Join("; ", problems);
                }
            }
            m_srvSnapshot = m_servers->Snapshot();
        }
        catch (Exception^ ex)
        {
            m_srvResult = "Server control error: " + ex->Message;
        }

        try
        {
            m_window->Dispatcher->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal,
                                              gcnew System::Action(this, &MainWindow::OnServerWorkerDone));
        }
        catch (Exception^)
        {
            m_srvBusy = false;   // window is closing
        }
    }

    // ---- server log panel ----------------------------------------------------

    void MainWindow::OnSrvSelectionChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_srvSuppressSel || m_srvGrid == nullptr)
        {
            return;
        }
        ServerRow^ row = dynamic_cast<ServerRow^>(m_srvGrid->SelectedItem);
        int index = (row == nullptr) ? -1 : row->Index;
        if (index != m_srvLogIndex)
        {
            m_srvLogIndex = index;
            RefreshServerLog(true);
        }
    }

    // Shows the last ~256 KB of the newest log of the selected server. Cheap enough
    // for the UI thread; skipped when the file has not changed since the last read.
    void MainWindow::RefreshServerLog(bool force)
    {
        if (m_srvLogBox == nullptr || m_servers == nullptr)
        {
            return;
        }

        if (m_srvLogIndex < 0)
        {
            m_srvLogTitle->Text = "LOG - select a server above";
            m_srvLogBox->Text = String::Empty;
            m_srvLogFile = nullptr;
            return;
        }

        String^ name = ServerControl::NameOf(m_srvLogIndex);
        m_servers->ServersPath = m_settings->ServersPath;
        String^ path = m_servers->LatestLog(m_srvLogIndex);
        if (path == nullptr)
        {
            String^ folder = m_servers->LogFolder(m_srvLogIndex);
            m_srvLogTitle->Text = "LOG - " + name;
            m_srvLogBox->Text = (folder == nullptr)
                ? gcnew String("This entry has no log file.")
                : ("No log file found in " + folder);
            m_srvLogFile = nullptr;
            return;
        }

        try
        {
            FileInfo^ info = gcnew FileInfo(path);
            long long stamp = info->Length + info->LastWriteTimeUtc.Ticks;
            if (!force && String::Equals(path, m_srvLogFile) && stamp == m_srvLogStamp)
            {
                return;
            }

            const long long kTailBytes = 256 * 1024;
            String^ text;
            FileStream^ stream = gcnew FileStream(path, FileMode::Open, FileAccess::Read, FileShare::ReadWrite | FileShare::Delete);
            try
            {
                long long start = (stream->Length > kTailBytes) ? stream->Length - kTailBytes : 0;
                stream->Seek(start, SeekOrigin::Begin);
                array<Byte>^ buffer = gcnew array<Byte>(static_cast<int>(stream->Length - start));
                int read = stream->Read(buffer, 0, buffer->Length);
                text = System::Text::Encoding::UTF8->GetString(buffer, 0, read);
                if (start > 0)
                {
                    int firstBreak = text->IndexOf(L'\n');   // drop the partial first line
                    if (firstBreak >= 0) text = text->Substring(firstBreak + 1);
                }
            }
            finally
            {
                stream->Close();
            }

            m_srvLogFile  = path;
            m_srvLogStamp = stamp;
            m_srvLogTitle->Text = "LOG - " + name + "  |  " + Path::GetFileName(path) + "  |  " + String::Format("{0:N0}", info->Length / 1024) + " KB";
            m_srvLogBox->Text = text;
            if (m_srvLogFollow->IsChecked.HasValue && m_srvLogFollow->IsChecked.Value)
            {
                m_srvLogBox->ScrollToEnd();
            }
        }
        catch (Exception^ ex)
        {
            m_srvLogTitle->Text = "LOG - " + name;
            m_srvLogBox->Text = "Could not read the log: " + ex->Message;
        }
    }

    void MainWindow::OnSrvLogOpenFileClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            if (String::IsNullOrEmpty(m_srvLogFile) || !File::Exists(m_srvLogFile)) { SetStatus("No log file selected."); return; }
            System::Diagnostics::Process::Start(m_srvLogFile);
        }
        catch (Exception^ ex) { SetStatus("Could not open the log: " + ex->Message); }
    }

    void MainWindow::OnSrvLogOpenFolderClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            String^ folder = (m_servers == nullptr || m_srvLogIndex < 0) ? nullptr : m_servers->LogFolder(m_srvLogIndex);
            if (String::IsNullOrEmpty(folder) || !Directory::Exists(folder)) { SetStatus("No log folder for this server."); return; }
            System::Diagnostics::Process::Start(folder);
        }
        catch (Exception^ ex) { SetStatus("Could not open the folder: " + ex->Message); }
    }

    void MainWindow::OnServerWorkerDone()
    {
        m_srvBusy = false;

        // The page may have been navigated away from while the worker ran.
        if (m_srvGrid == nullptr)
        {
            return;
        }

        // Keep the selection across the refresh (rows are rebuilt each time).
        HashSet<int>^ selected = gcnew HashSet<int>();
        for each (Object^ item in m_srvGrid->SelectedItems)
        {
            ServerRow^ row = dynamic_cast<ServerRow^>(item);
            if (row != nullptr) selected->Add(row->Index);
        }

        if (m_srvSnapshot != nullptr)
        {
            m_srvSuppressSel = true;   // rebuilding rows must not look like the user changing selection
            try
            {
                m_srvGrid->ItemsSource = m_srvSnapshot;
                for each (ServerRow^ row in m_srvSnapshot)
                {
                    if (selected->Contains(row->Index) ||
                        (selected->Count == 0 && row->Index == m_srvLogIndex && m_srvLogIndex >= 0))
                    {
                        m_srvGrid->SelectedItems->Add(row);
                    }
                }
            }
            finally
            {
                m_srvSuppressSel = false;
            }
            RefreshServerLog(false);   // pick up new log lines every poll
        }

        array<Button^>^ buttons = gcnew array<Button^> { m_srvStartAll, m_srvStopAll, m_srvStart, m_srvStop, m_srvRestart };
        for each (Button^ b in buttons)
        {
            if (b != nullptr) b->IsEnabled = true;
        }

        if (!String::IsNullOrEmpty(m_srvResult) && m_srvStatusText != nullptr)
        {
            m_srvStatusText->Text = m_srvResult;
            SetStatus(m_srvResult);
        }
    }

    // =========================================================================
    // MySQL connection (DbBridge) + Database page
    // =========================================================================

    void MainWindow::LoadDbParamsFromSettings()
    {
        m_dbHost   = m_settings->DbHost;
        m_dbPort   = m_settings->DbPort;
        m_dbUser   = m_settings->DbUser;
        m_dbPass   = m_settings->DbPass;
        m_dbSchema = m_settings->GameSchema;
    }

    // Runs "test" (connect with the m_db* fields) or "query" (m_dbSql) on a worker thread.
    void MainWindow::StartDbTask(String^ action)
    {
        if (m_dbBusy)
        {
            return;
        }
        if (m_db == nullptr)
        {
            m_db = gcnew DbBridge();
        }
        m_dbBusy   = true;
        m_dbAction = action;
        m_dbOk     = false;
        m_dbMessage = String::Empty;
        m_dbTable  = nullptr;

        if (String::Equals(action, "test"))
        {
            m_dbState = "connecting...";
            UpdateDbStatus();
        }

        System::Threading::Thread^ worker = gcnew System::Threading::Thread(
            gcnew System::Threading::ThreadStart(this, &MainWindow::DbWorker));
        worker->IsBackground = true;
        worker->Start();
    }

    void MainWindow::DbWorker()
    {
        try
        {
            String^ message = String::Empty;
            bool needConnect = String::Equals(m_dbAction, "test") || !m_db->Connected;
            bool connected = true;
            if (needConnect)
            {
                connected = m_db->Connect(m_dbHost, m_dbPort, m_dbUser, m_dbPass, m_dbSchema, message);
            }

            if (!connected)
            {
                m_dbOk = false;
                m_dbMessage = message;
            }
            else if (String::Equals(m_dbAction, "test"))
            {
                m_dbOk = true;
                m_dbMessage = message;   // server version
            }
            else if (String::Equals(m_dbAction, "schemas"))
            {
                bool truncated = false;
                long long affected = 0;
                double ms = 0.0;
                System::Data::DataTable^ names = m_db->Query("SHOW DATABASES", 0, truncated, affected, ms);
                System::Collections::Generic::List<String^>^ list = gcnew System::Collections::Generic::List<String^>();
                for each (System::Data::DataRow^ row in names->Rows)
                {
                    String^ schemaName = Convert::ToString(row[0]);
                    if (!DbBrowser::IsHiddenSchema(schemaName)) list->Add(schemaName);
                }
                list->Sort(StringComparer::OrdinalIgnoreCase);
                m_dbSchemas = list;
                m_dbOk = true;
            }
            else
            {
                bool truncated = false;
                long long affected = 0;
                double ms = 0.0;
                if (!String::IsNullOrEmpty(m_dbRunSchema))
                {
                    String^ switchError;
                    if (!m_db->SelectSchema(m_dbRunSchema, switchError))
                    {
                        throw gcnew InvalidOperationException("Cannot use schema '" + m_dbRunSchema + "': " + switchError);
                    }
                }
                m_dbTable = m_db->Query(m_dbSql, 5000, truncated, affected, ms);
                m_dbTruncated = truncated;
                m_dbAffected = affected;
                m_dbMs = ms;
                m_dbOk = true;
            }
        }
        catch (Exception^ ex)
        {
            m_dbOk = false;
            m_dbMessage = ex->Message;
        }

        try
        {
            m_window->Dispatcher->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal,
                                              gcnew System::Action(this, &MainWindow::OnDbWorkerDone));
        }
        catch (Exception^)
        {
            m_dbBusy = false;   // window is closing
        }
    }

    void MainWindow::OnDbWorkerDone()
    {
        m_dbBusy = false;

        if (String::Equals(m_dbAction, "test"))
        {
            m_dbState = m_dbOk ? ("connected (MySQL " + m_dbMessage + ")") : ("connection failed: " + m_dbMessage);
            UpdateDbStatus();

            if (m_currentPage != nullptr && String::Equals(m_currentPageFile, "Settings.xaml"))
            {
                TextBlock^ status = dynamic_cast<TextBlock^>(m_currentPage->FindName("SettingsStatusText"));
                if (status != nullptr) status->Text = "Database: " + m_dbState;
            }
            SetStatus("Database: " + m_dbState);
        }
        else if (String::Equals(m_dbAction, "schemas"))
        {
            FillSchemaBox();
            if (m_dbStatus != nullptr)
            {
                int schemaCount = (m_dbSchemas == nullptr) ? 0 : m_dbSchemas->Count;
                m_dbStatus->Text = m_dbOk ? String::Format("Schema list loaded ({0}).", schemaCount)
                                          : ("Could not list schemas: " + m_dbMessage);
            }
            if (m_dbRunButton != nullptr) m_dbRunButton->IsEnabled = true;
        }
        else
        {
            if (m_dbOk && (String::IsNullOrEmpty(m_dbState) || !m_dbState->StartsWith("connected")))
            {
                m_dbState = "connected";
                UpdateDbStatus();
            }
            if (m_dbGrid != nullptr && m_dbStatus != nullptr)
            {
                if (!m_dbOk)
                {
                    m_dbGrid->ItemsSource = nullptr;
                    m_dbStatus->Text = "Error: " + m_dbMessage;
                }
                else if (m_dbTable != nullptr && m_dbTable->Columns->Count > 0)
                {
                    m_dbGrid->ItemsSource = m_dbTable->DefaultView;
                    m_dbStatus->Text = String::Format("{0:N0} row(s) in {1:N0} ms", m_dbTable->Rows->Count, m_dbMs) +
                        (m_dbTruncated ? gcnew String("  (limited to the first 5,000 rows)") : String::Empty);
                }
                else
                {
                    m_dbGrid->ItemsSource = nullptr;
                    m_dbStatus->Text = String::Format("OK - {0:N0} row(s) affected in {1:N0} ms", m_dbAffected, m_dbMs);
                }
            }
            if (m_dbRunButton != nullptr) m_dbRunButton->IsEnabled = true;
        }
    }

    void MainWindow::OnTestDbClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_currentPage == nullptr) return;
        try
        {
            TextBox^     host   = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbHostBox"));
            TextBox^     port   = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbPortBox"));
            TextBox^     user   = safe_cast<TextBox^>(FindRequired(m_currentPage, "DbUserBox"));
            PasswordBox^ pass   = safe_cast<PasswordBox^>(FindRequired(m_currentPage, "DbPassBox"));
            TextBox^     schema = safe_cast<TextBox^>(FindRequired(m_currentPage, "GameSchemaBox"));
            TextBlock^   status = safe_cast<TextBlock^>(FindRequired(m_currentPage, "SettingsStatusText"));

            int portNumber = 0;
            if (!Int32::TryParse(port->Text->Trim(), portNumber) || portNumber <= 0 || portNumber > 65535)
            {
                status->Text = "DB port must be a whole number between 1 and 65535.";
                return;
            }
            if (m_dbBusy)
            {
                status->Text = "A database operation is already running - try again in a moment.";
                return;
            }

            // Test the values as typed (not yet saved).
            m_dbHost = host->Text->Trim();  m_dbPort = portNumber;  m_dbUser = user->Text->Trim();
            m_dbPass = pass->Password;      m_dbSchema = schema->Text->Trim();
            status->Text = "Testing connection to " + m_dbHost + ":" + portNumber.ToString() + " ...";
            StartDbTask("test");
        }
        catch (Exception^ ex)
        {
            SetStatus("Test failed to start: " + ex->Message);
        }
    }

    void MainWindow::ClearDatabaseHandles()
    {
        m_dbSqlBox = nullptr;
        m_dbRunButton = nullptr;
        m_dbClearButton = nullptr;
        m_dbGrid = nullptr;
        m_dbStatus = nullptr;
        m_dbSchemaBox = nullptr;
        m_dbSchemaRefresh = nullptr;
    }

    void MainWindow::PopulateDatabasePage(FrameworkElement^ page)
    {
        m_dbSqlBox      = safe_cast<TextBox^>(FindRequired(page, "SqlEditorBox"));
        m_dbRunButton   = safe_cast<Button^>(FindRequired(page, "SqlRunButton"));
        m_dbClearButton = safe_cast<Button^>(FindRequired(page, "SqlClearButton"));
        m_dbGrid        = safe_cast<DataGrid^>(FindRequired(page, "SqlResultsGrid"));
        m_dbStatus      = safe_cast<TextBlock^>(FindRequired(page, "SqlStatusText"));
        m_dbSchemaBox     = safe_cast<ComboBox^>(FindRequired(page, "SqlSchemaBox"));
        m_dbSchemaRefresh = safe_cast<Button^>(FindRequired(page, "SqlSchemaRefreshButton"));
        if (String::IsNullOrEmpty(m_dbRunSchema)) m_dbRunSchema = m_settings->GameSchema;   // default to the game schema
        FillSchemaBox();   // before the handler is attached
        m_dbSchemaBox->SelectionChanged += gcnew SelectionChangedEventHandler(this, &MainWindow::OnDbSchemaChanged);
        m_dbSchemaRefresh->Click += gcnew RoutedEventHandler(this, &MainWindow::OnDbSchemaRefreshClick);

        m_dbRunButton->Click   += gcnew RoutedEventHandler(this, &MainWindow::OnDbRunClick);
        m_dbClearButton->Click += gcnew RoutedEventHandler(this, &MainWindow::OnDbClearClick);
        m_dbSqlBox->KeyDown    += gcnew System::Windows::Input::KeyEventHandler(this, &MainWindow::OnDbSqlKeyDown);
        m_dbGrid->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);

        m_dbStatus->Text = DbSummary() + "  |  " + (String::IsNullOrEmpty(m_dbState) ? gcnew String("not connected") : m_dbState);
        if (m_dbRunButton != nullptr) m_dbRunButton->IsEnabled = !m_dbBusy;

        if (m_dbSchemas == nullptr && !m_dbBusy)
        {
            LoadDbParamsFromSettings();
            StartDbTask("schemas");   // fills the dropdown
        }
    }

    // Rebuilds the dropdown from the SHOW DATABASES list (or just the current schema until it loads).
    void MainWindow::FillSchemaBox()
    {
        if (m_dbSchemaBox == nullptr) return;
        m_dbSuppressSchema = true;
        try
        {
            m_dbSchemaBox->Items->Clear();
            bool found = false;
            if (m_dbSchemas != nullptr)
            {
                for each (String^ name in m_dbSchemas)
                {
                    m_dbSchemaBox->Items->Add(name);
                    if (String::Equals(name, m_dbRunSchema, StringComparison::OrdinalIgnoreCase)) found = true;
                }
            }
            if (!found && !String::IsNullOrEmpty(m_dbRunSchema)) m_dbSchemaBox->Items->Insert(0, m_dbRunSchema);
            m_dbSchemaBox->SelectedItem = m_dbRunSchema;
            if (m_dbSchemaBox->SelectedIndex < 0) m_dbSchemaBox->SelectedIndex = 0;
        }
        finally
        {
            m_dbSuppressSchema = false;
        }
    }

    void MainWindow::OnDbSchemaChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_dbSuppressSchema || m_dbSchemaBox == nullptr) return;
        String^ chosen = dynamic_cast<String^>(m_dbSchemaBox->SelectedItem);
        if (!String::IsNullOrEmpty(chosen))
        {
            m_dbRunSchema = chosen;
            if (m_dbStatus != nullptr) m_dbStatus->Text = "Scripts will run against schema '" + chosen + "'.";
        }
    }

    void MainWindow::OnDbSchemaRefreshClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_dbBusy) { if (m_dbStatus != nullptr) m_dbStatus->Text = "A database operation is already running - try again in a moment."; return; }
        LoadDbParamsFromSettings();
        StartDbTask("schemas");
    }

    void MainWindow::OnDbClearClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_dbSqlBox != nullptr) m_dbSqlBox->Clear();
        if (m_dbGrid != nullptr) m_dbGrid->ItemsSource = nullptr;
        if (m_dbStatus != nullptr) m_dbStatus->Text = "Cleared.";
    }

    void MainWindow::OnDbSqlKeyDown(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        bool ctrl = (System::Windows::Input::Keyboard::Modifiers & System::Windows::Input::ModifierKeys::Control) ==
                    System::Windows::Input::ModifierKeys::Control;
        if (ctrl && e->Key == System::Windows::Input::Key::Enter)
        {
            OnDbRunClick(nullptr, nullptr);
            e->Handled = true;
        }
    }

    void MainWindow::OnDbRunClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_dbSqlBox == nullptr || m_dbStatus == nullptr) return;

        // Run the selection if there is one, otherwise the whole box.
        String^ sql = (m_dbSqlBox->SelectionLength > 0) ? m_dbSqlBox->SelectedText : m_dbSqlBox->Text;
        sql = sql->Trim();
        if (sql->Length == 0)
        {
            m_dbStatus->Text = "Type a statement first.";
            return;
        }
        if (m_dbBusy)
        {
            m_dbStatus->Text = "A database operation is already running - try again in a moment.";
            return;
        }

        // Anything that is not a plain read asks first: this is the live game database.
        System::Text::RegularExpressions::Match^ first = System::Text::RegularExpressions::Regex::Match(sql, "^\\s*([A-Za-z]+)");
        String^ word = first->Success ? first->Groups[1]->Value->ToLowerInvariant() : String::Empty;
        bool readOnly = word == "select" || word == "show" || word == "describe" || word == "desc" ||
                        word == "explain" || word == "use" || word == "with";
        if (!readOnly)
        {
            System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(
                m_window, "This statement can change data in the game database:\n\n" +
                (sql->Length > 400 ? sql->Substring(0, 400) + "..." : sql) + "\n\nSchema: " + (m_dbSchemaBox == nullptr ? gcnew String("(default)") : Convert::ToString(m_dbSchemaBox->SelectedItem)) + "\n\nRun it?",
                "Confirm SQL", System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
            if (answer != System::Windows::MessageBoxResult::Yes) return;
        }

        LoadDbParamsFromSettings();
        String^ chosenSchema = (m_dbSchemaBox == nullptr) ? nullptr : dynamic_cast<String^>(m_dbSchemaBox->SelectedItem);
        if (!String::IsNullOrEmpty(chosenSchema)) m_dbRunSchema = chosenSchema;
        m_dbSql = sql;
        m_dbRunButton->IsEnabled = false;
        m_dbStatus->Text = "Running on schema '" + m_dbRunSchema + "...";
        StartDbTask("query");
    }

    // =========================================================================
    // Database browser page: schemas -> objects, with data / columns / indexes / DDL
    // =========================================================================

    static const int kBrowserPageSize = 500;

    void MainWindow::ClearBrowserHandles()
    {
        m_brTree = nullptr;  m_brFilter = nullptr;  m_brRefresh = nullptr;
        m_brTitle = nullptr;  m_brInfo = nullptr;  m_brStatus = nullptr;  m_brPageText = nullptr;
        m_brTabs = nullptr;
        m_brData = nullptr;  m_brCols = nullptr;  m_brIdx = nullptr;
        m_brDdl = nullptr;
        m_brPrev = nullptr;  m_brNext = nullptr;  m_brCopyDdl = nullptr;
    }

    void MainWindow::PopulateBrowserPage(FrameworkElement^ page)
    {
        m_brTree     = safe_cast<TreeView^>(FindRequired(page, "BrowserTree"));
        m_brFilter   = safe_cast<TextBox^>(FindRequired(page, "BrowserFilterBox"));
        m_brRefresh  = safe_cast<Button^>(FindRequired(page, "BrowserRefreshButton"));
        m_brTitle    = safe_cast<TextBlock^>(FindRequired(page, "BrowserTitleText"));
        m_brInfo     = safe_cast<TextBlock^>(FindRequired(page, "BrowserInfoText"));
        m_brStatus   = safe_cast<TextBlock^>(FindRequired(page, "BrowserStatusText"));
        m_brPageText = safe_cast<TextBlock^>(FindRequired(page, "BrowserPageText"));
        m_brTabs     = safe_cast<TabControl^>(FindRequired(page, "BrowserTabs"));
        m_brData     = safe_cast<DataGrid^>(FindRequired(page, "BrowserDataGrid"));
        m_brCols     = safe_cast<DataGrid^>(FindRequired(page, "BrowserColumnsGrid"));
        m_brIdx      = safe_cast<DataGrid^>(FindRequired(page, "BrowserIndexesGrid"));
        m_brDdl      = safe_cast<TextBox^>(FindRequired(page, "BrowserDdlBox"));
        m_brPrev     = safe_cast<Button^>(FindRequired(page, "BrowserPrevButton"));
        m_brNext     = safe_cast<Button^>(FindRequired(page, "BrowserNextButton"));
        m_brCopyDdl  = safe_cast<Button^>(FindRequired(page, "BrowserCopyDdlButton"));

        m_brTree->SelectedItemChanged += gcnew RoutedPropertyChangedEventHandler<Object^>(this, &MainWindow::OnBrTreeSelected);
        m_brFilter->TextChanged       += gcnew TextChangedEventHandler(this, &MainWindow::OnBrFilterChanged);
        m_brRefresh->Click            += gcnew RoutedEventHandler(this, &MainWindow::OnBrRefreshClick);
        m_brPrev->Click               += gcnew RoutedEventHandler(this, &MainWindow::OnBrPrevClick);
        m_brNext->Click               += gcnew RoutedEventHandler(this, &MainWindow::OnBrNextClick);
        m_brCopyDdl->Click            += gcnew RoutedEventHandler(this, &MainWindow::OnBrCopyDdlClick);
        m_brData->CellEditEnding      += gcnew EventHandler<DataGridCellEditEndingEventArgs^>(this, &MainWindow::OnBrCellEditEnding);
        m_brData->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);
        m_brCols->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);
        m_brIdx->AutoGeneratingColumn  += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &MainWindow::OnGdAutoGeneratingColumn);

        if (m_browser == nullptr)
        {
            m_browser = gcnew DbBrowser();
        }
        m_browser->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);

        m_brPrev->IsEnabled = false;
        m_brNext->IsEnabled = false;
        m_brPageText->Text = String::Empty;

        if (m_brSchemas != nullptr)
        {
            BuildBrowserTree();
            m_brStatus->Text = String::Format("{0} schema(s) (cached - Refresh to reload).", m_brSchemas->Count);
        }
        else
        {
            m_brStatus->Text = "Loading schemas...";
            StartBrowserJob("catalog", nullptr, 0);
        }
    }

    void MainWindow::StartBrowserJob(String^ action, BrowseNode^ node, int offset)
    {
        if (m_browser == nullptr) return;

        BrowserJob^ job = gcnew BrowserJob(m_browser, m_window->Dispatcher,
                                           gcnew System::Action<BrowserResult^>(this, &MainWindow::OnBrowserDone));
        job->Action = action;
        job->Offset = offset;
        job->Limit  = kBrowserPageSize;
        if (node != nullptr)
        {
            job->Schema = node->Schema;
            job->Name   = node->Name;
            job->Kind   = node->Kind;
        }
        if (String::Equals(action, "catalog"))      job->Seq = ++m_brSeqCatalog;
        else if (String::Equals(action, "data"))    job->Seq = ++m_brSeqData;
        else if (String::Equals(action, "columns")) job->Seq = ++m_brSeqCols;
        else if (String::Equals(action, "indexes")) job->Seq = ++m_brSeqIdx;
        else                                        job->Seq = ++m_brSeqDdl;
        job->Start();
    }

    // Applies a finished request; answers older than the newest request of their kind are dropped.
    void MainWindow::OnBrowserDone(BrowserResult^ r)
    {
        if (r == nullptr) return;

        if (String::Equals(r->Action, "catalog"))
        {
            if (r->Seq != m_brSeqCatalog) return;
            if (r->Ok) m_brSchemas = r->Schemas;
            if (m_brStatus == nullptr) return;   // page was left; the cache is kept for the next visit
            if (!r->Ok)
            {
                m_brStatus->Text = "Could not load schemas: " + r->Error;
                return;
            }
            BuildBrowserTree();
            m_brStatus->Text = String::Format("{0} schema(s) loaded in {1:N0} ms.", m_brSchemas->Count, r->Ms);
            return;
        }

        if (String::Equals(r->Action, "exec"))
        {
            BrowserEdit^ edit;
            if (m_brPending == nullptr || !m_brPending->TryGetValue(r->Seq, edit)) return;
            m_brPending->Remove(r->Seq);
            if (r->Ok && r->Affected >= 1)
            {
                if (m_brStatus != nullptr) m_brStatus->Text = "Saved: " + edit->Sql;
                return;
            }
            // Not saved: put the old value back so the grid never shows data the database does not have.
            try { edit->Row[edit->Column] = edit->OldValue; } catch (Exception^) {}
            if (m_brStatus != nullptr)
            {
                m_brStatus->Text = r->Ok ? ("No row matched, nothing changed (reverted): " + edit->Sql)
                                         : ("Update failed, reverted: " + r->Error);
            }
            return;
        }

        if (m_brTabs == nullptr) return;   // not on the page any more

        if (String::Equals(r->Action, "data"))
        {
            if (r->Seq != m_brSeqData) return;
            if (!r->Ok)
            {
                m_brData->ItemsSource = nullptr;
                m_brStatus->Text = "Data: " + r->Error;
                m_brPrev->IsEnabled = false;
                m_brNext->IsEnabled = false;
                return;
            }
            m_brOffset = r->Offset;
            m_brData->ItemsSource = r->Table->DefaultView;
            int count = r->Table->Rows->Count;
            m_brPrev->IsEnabled = m_brOffset > 0;
            m_brNext->IsEnabled = r->HasMore;
            m_brPageText->Text = (count == 0) ? gcnew String("no rows")
                                              : String::Format("rows {0:N0} - {1:N0}", m_brOffset + 1, m_brOffset + count);
            m_brStatus->Text = String::Format("{0:N0} row(s) read in {1:N0} ms.", count, r->Ms);
        }
        else if (String::Equals(r->Action, "columns"))
        {
            if (r->Seq != m_brSeqCols) return;
            m_brCols->ItemsSource = r->Ok ? r->Table->DefaultView : nullptr;
            if (!r->Ok) m_brStatus->Text = "Columns: " + r->Error;
            if (r->Ok)
            {
                // Remember the primary key: inline edits use it to address one row.
                if (m_brPk == nullptr) m_brPk = gcnew List<String^>();
                m_brPk->Clear();
                for each (System::Data::DataRow^ row in r->Table->Rows)
                {
                    if (String::Equals(Convert::ToString(row["Key"]), "PRI")) m_brPk->Add(Convert::ToString(row["Column"]));
                }
                m_brColsKnown = true;
            }
        }
        else if (String::Equals(r->Action, "indexes"))
        {
            if (r->Seq != m_brSeqIdx) return;
            m_brIdx->ItemsSource = r->Ok ? r->Table->DefaultView : nullptr;
            if (!r->Ok) m_brStatus->Text = "Indexes: " + r->Error;
        }
        else
        {
            if (r->Seq != m_brSeqDdl) return;
            m_brDdl->Text = r->Ok ? r->Text : ("-- " + r->Error);
        }
    }

    void MainWindow::BuildBrowserTree()
    {
        if (m_brTree == nullptr || m_brSchemas == nullptr) return;

        String^ filter = m_brFilter->Text->Trim();
        bool filtering = filter->Length > 0;

        array<String^>^ kinds  = gcnew array<String^> { "table", "view", "procedure", "function" };
        array<String^>^ labels = gcnew array<String^> { "Tables", "Views", "Procedures", "Functions" };

        m_brSuppress = true;
        try
        {
            m_brTree->Items->Clear();
            for each (BrowseNode^ schema in m_brSchemas)
            {
                TreeViewItem^ schemaItem = gcnew TreeViewItem();
                schemaItem->Tag = schema;
                int shown = 0;

                for (int k = 0; k < kinds->Length; ++k)
                {
                    TreeViewItem^ group = gcnew TreeViewItem();
                    int count = 0;
                    for each (BrowseNode^ child in schema->Children)
                    {
                        if (!String::Equals(child->Kind, kinds[k])) continue;
                        if (filtering && child->Name->IndexOf(filter, StringComparison::OrdinalIgnoreCase) < 0) continue;
                        TreeViewItem^ leaf = gcnew TreeViewItem();
                        leaf->Header = child->Name;
                        leaf->Tag = child;
                        leaf->ToolTip = child->Info;
                        group->Items->Add(leaf);
                        ++count;
                    }
                    if (count == 0) continue;
                    group->Header = String::Format("{0} ({1:N0})", labels[k], count);
                    group->IsExpanded = filtering;
                    schemaItem->Items->Add(group);
                    shown += count;
                }

                if (filtering && shown == 0) continue;   // hide schemas with no match while filtering
                schemaItem->Header = schema->Name;
                schemaItem->IsExpanded = filtering || String::Equals(schema->Name, m_settings->GameSchema, StringComparison::OrdinalIgnoreCase);
                m_brTree->Items->Add(schemaItem);
            }
        }
        finally
        {
            m_brSuppress = false;
        }
    }

    void MainWindow::SelectBrowserNode(BrowseNode^ node)
    {
        m_brSelected = node;
        m_brOffset = 0;
        m_brTitle->Text = node->Schema + "." + node->Name;
        m_brInfo->Text = node->Kind + (String::IsNullOrEmpty(node->Info) ? String::Empty : ("  -  " + node->Info));
        m_brDdl->Text = "Loading...";
        if (m_brPk == nullptr) m_brPk = gcnew List<String^>();
        m_brPk->Clear();
        m_brColsKnown = false;
        m_brData->IsReadOnly = !String::Equals(node->Kind, "table");   // views and routines are not editable

        bool isTable = String::Equals(node->Kind, "table") || String::Equals(node->Kind, "view");
        if (isTable)
        {
            StartBrowserJob("data", node, 0);
            StartBrowserJob("columns", node, 0);
            StartBrowserJob("indexes", node, 0);
        }
        else
        {
            // procedures / functions only have a definition
            ++m_brSeqData; ++m_brSeqCols; ++m_brSeqIdx;
            m_brData->ItemsSource = nullptr;
            m_brCols->ItemsSource = nullptr;
            m_brIdx->ItemsSource = nullptr;
            m_brPrev->IsEnabled = false;
            m_brNext->IsEnabled = false;
            m_brPageText->Text = String::Empty;
            m_brTabs->SelectedIndex = 3;   // DDL
        }
        StartBrowserJob("ddl", node, 0);
    }

    void MainWindow::OnBrTreeSelected(Object^ /*sender*/, RoutedPropertyChangedEventArgs<Object^>^ e)
    {
        if (m_brSuppress || e == nullptr || m_brTree == nullptr) return;
        TreeViewItem^ item = dynamic_cast<TreeViewItem^>(e->NewValue);
        BrowseNode^ node = (item == nullptr) ? nullptr : dynamic_cast<BrowseNode^>(item->Tag);
        if (node == nullptr || String::Equals(node->Kind, "schema")) return;   // groups / schema headers: just expand
        SelectBrowserNode(node);
    }

    void MainWindow::OnBrFilterChanged(Object^ /*sender*/, TextChangedEventArgs^ /*e*/)
    {
        BuildBrowserTree();
    }

    void MainWindow::OnBrRefreshClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_browser == nullptr) return;
        m_browser->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);
        m_brStatus->Text = "Loading schemas...";
        StartBrowserJob("catalog", nullptr, 0);
    }

    void MainWindow::OnBrPrevClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_brSelected == nullptr || m_brOffset <= 0) return;
        StartBrowserJob("data", m_brSelected, Math::Max(0, m_brOffset - kBrowserPageSize));
    }

    void MainWindow::OnBrNextClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_brSelected == nullptr) return;
        StartBrowserJob("data", m_brSelected, m_brOffset + kBrowserPageSize);
    }

    void MainWindow::OnBrCopyDdlClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            if (m_brDdl != nullptr && !String::IsNullOrEmpty(m_brDdl->Text))
            {
                System::Windows::Clipboard::SetDataObject(m_brDdl->Text, true);
                SetStatus("Copied the definition to the clipboard.");
            }
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not copy: " + ex->Message);
        }
    }

    // ---- inline cell editing: one edited cell -> one UPDATE ... LIMIT 1 ---------------

    static String^ SqlEscapeString(String^ value)
    {
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
        for each (wchar_t c in value)
        {
            if (c == L'\\')       sb->Append("\\\\");
            else if (c == L'\'')  sb->Append("''");
            else if (c == L'\0')  sb->Append("\\0");
            else if (c == L'\n')  sb->Append("\\n");
            else if (c == L'\r')  sb->Append("\\r");
            else if (c == L'\x1a') sb->Append("\\Z");
            else                  sb->Append(c);
        }
        return sb->ToString();
    }

    // SQL text for a cell value: NULL, a plain integer, or a quoted/escaped string.
    static String^ SqlLiteralFor(Object^ value)
    {
        if (value == nullptr || value == DBNull::Value) return "NULL";
        if (value->GetType() == Int64::typeid) return Convert::ToString(value, System::Globalization::CultureInfo::InvariantCulture);
        return "'" + SqlEscapeString(Convert::ToString(value)) + "'";
    }

    // Fires when a Data-grid cell edit ends. Enter / leaving the cell commits it: the UPDATE runs at once
    // on a worker thread and the cell is reverted if the database rejects it. Esc cancels (no event work).
    void MainWindow::OnBrCellEditEnding(Object^ /*sender*/, DataGridCellEditEndingEventArgs^ e)
    {
        if (e->EditAction != DataGridEditAction::Commit || m_brSelected == nullptr || m_browser == nullptr) return;

        try
        {
            System::Data::DataRowView^ rowView = dynamic_cast<System::Data::DataRowView^>(e->Row->Item);
            TextBox^ box = dynamic_cast<TextBox^>(e->EditingElement);
            String^ column = e->Column->SortMemberPath;
            if (rowView == nullptr || box == nullptr || String::IsNullOrEmpty(column)) return;

            if (!m_brColsKnown)
            {
                e->Cancel = true;
                m_brStatus->Text = "Column information is still loading - press Enter again in a moment.";
                return;
            }

            System::Data::DataColumn^ dataColumn = rowView->Row->Table->Columns[column];
            Object^ oldValue = rowView[column];
            String^ text = box->Text;

            Object^ newValue;
            if (String::Equals(text, "NULL"))
            {
                newValue = DBNull::Value;
            }
            else if (dataColumn->DataType == Int64::typeid)
            {
                long long number = 0;
                if (!Int64::TryParse(text->Trim(), number))
                {
                    e->Cancel = true;   // stay in the cell
                    m_brStatus->Text = "'" + text + "' is not a whole number (column " + column + "). Esc cancels.";
                    return;
                }
                newValue = number;
            }
            else
            {
                newValue = text;
            }

            // Nothing changed -> nothing to run.
            bool oldNull = (oldValue == DBNull::Value), newNull = (newValue == DBNull::Value);
            if ((oldNull && newNull) || (!oldNull && !newNull && String::Equals(Convert::ToString(oldValue), Convert::ToString(newValue))) ||
                (oldNull && !newNull && newValue->ToString()->Length == 0))
            {
                return;
            }

            // Address exactly one row: by primary key, else (no key) by every column with null-safe equality.
            List<String^>^ conditions = gcnew List<String^>();
            bool usedKey = (m_brPk != nullptr && m_brPk->Count > 0);
            if (usedKey)
            {
                for each (String^ key in m_brPk)
                {
                    conditions->Add(DbBrowser::Quote(key) + " <=> " + SqlLiteralFor(rowView[key]));
                }
            }
            else
            {
                for each (System::Data::DataColumn^ c in rowView->Row->Table->Columns)
                {
                    conditions->Add(DbBrowser::Quote(c->ColumnName) + " <=> " + SqlLiteralFor(rowView[c->ColumnName]));
                }
            }

            String^ sql = "UPDATE " + DbBrowser::Quote(m_brSelected->Schema) + "." + DbBrowser::Quote(m_brSelected->Name) +
                          " SET " + DbBrowser::Quote(column) + " = " + SqlLiteralFor(newValue) +
                          " WHERE " + String::Join(" AND ", conditions) + " LIMIT 1";

            BrowserEdit^ edit = gcnew BrowserEdit();
            edit->Row = rowView;
            edit->Column = column;
            edit->OldValue = oldValue;
            edit->Sql = sql;

            if (m_brPending == nullptr) m_brPending = gcnew Dictionary<int, BrowserEdit^>();
            int seq = ++m_brSeqExec;
            m_brPending[seq] = edit;

            BrowserJob^ job = gcnew BrowserJob(m_browser, m_window->Dispatcher,
                                               gcnew System::Action<BrowserResult^>(this, &MainWindow::OnBrowserDone));
            job->Action = "exec";
            job->Sql = sql;
            job->Seq = seq;
            job->Start();

            m_brStatus->Text = usedKey ? gcnew String("Saving...")
                                       : gcnew String("Saving... (table has no primary key: row matched on all its columns)");
        }
        catch (Exception^ ex)
        {
            e->Cancel = true;
            m_brStatus->Text = "Edit failed: " + ex->Message;
        }
    }

    // =========================================================================
    // Accounts / Characters (PlayerAdmin)
    // =========================================================================

    void MainWindow::EnsurePlayers()
    {
        if (m_browser == nullptr)
        {
            m_browser = gcnew DbBrowser();
        }
        if (m_players == nullptr)
        {
            m_players = gcnew PlayerAdmin(m_window, m_settings, m_browser,
                                          gcnew System::Action<String^>(this, &MainWindow::SetStatus),
                                          gcnew System::Action<String^, String^>(this, &MainWindow::NavigateToPage),
                                          gcnew System::Func<CodexCatalog^>(this, &MainWindow::ProvideCatalog), m_xamlRoot,
                                          gcnew System::Action<long long>(this, &MainWindow::OpenItemInGameData));
        }
    }

    void MainWindow::OpenItemInGameData(long long itemId)
    {
        m_codexMode = "items";
        m_pendingItemSearch = itemId.ToString();
        m_pendingItemSelect = itemId;
        NavigateToPage("GameData.xaml", nullptr);   // PopulateGameDataPage picks the search up
        if (m_window != nullptr) m_window->Activate();
    }

    CodexCatalog^ MainWindow::ProvideCatalog()
    {
        try
        {
            EnsureGameDataBridge();
            EnsureCodex();
            return m_codex;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    }

    // Switches to another page (by its nav Tag); `search` is handed to the Characters page.
    void MainWindow::NavigateToPage(String^ pageTag, String^ search)
    {
        m_pendingCharSearch = search;
        for each (Object^ entry in m_navList->Items)
        {
            ListBoxItem^ item = dynamic_cast<ListBoxItem^>(entry);
            if (item == nullptr || item->Tag == nullptr || !String::Equals(item->Tag->ToString(), pageTag)) continue;

            if (Object::ReferenceEquals(m_navList->SelectedItem, item))
            {
                NavigateTo(pageTag, (item->Content == nullptr) ? pageTag : item->Content->ToString());   // already selected: reload it
            }
            else
            {
                m_navList->SelectedItem = item;
            }
            return;
        }
    }

    // ---- monsters: "Found in maps" ---------------------------------------------------

    void MainWindow::ShowMonsterMaps(CodexEntry^ entry)
    {
        if (m_gdDetailMapsBox == nullptr || m_gdDetailMapsList == nullptr || m_gdDetailMapsTitle == nullptr)
        {
            return;
        }

        ++m_mapsSeq;   // any answer still on its way for a previous monster is now stale
        MonsterEntry^ monster = dynamic_cast<MonsterEntry^>(entry);
        if (monster == nullptr || m_codex == nullptr)
        {
            m_gdDetailMapsList->ItemsSource = nullptr;
            SetVisible(m_gdDetailMapsBox, false);
            return;
        }

        m_gdDetailMapsList->ItemsSource = nullptr;
        m_gdDetailMapsTitle->Text = "FOUND IN MAPS - searching...";
        SetVisible(m_gdDetailMapsBox, true);

        MapSpawnJob^ job = gcnew MapSpawnJob(m_codex, m_window->Dispatcher, gcnew System::Action<MapSpawnResult^>(this, &MainWindow::OnMonsterMapsDone));
        job->Monster = monster;
        job->Seq = m_mapsSeq;
        job->Start();
    }

    void MainWindow::OnMonsterMapsDone(MapSpawnResult^ result)
    {
        if (result == nullptr || result->Seq != m_mapsSeq || m_gdDetailMapsList == nullptr || m_gdDetailMapsTitle == nullptr)
        {
            return;   // stale, or the page was left
        }
        int count = (result->Maps == nullptr) ? 0 : result->Maps->Count;
        m_gdDetailMapsList->ItemsSource = result->Maps;
        m_gdDetailMapsTitle->Text = (count > 0) ? String::Format("FOUND IN MAPS ({0:N0})", count)
                                                : gcnew String("FOUND IN MAPS - no stage spawns this monster");
    }

    // Double-click a map row -> open that stage's map window.
    void MainWindow::OnGdMonsterMapDoubleClick(Object^ /*sender*/, System::Windows::Input::MouseButtonEventArgs^ e)
    {
        DependencyObject^ node = dynamic_cast<DependencyObject^>(e->OriginalSource);
        CodexMapSpawn^ spawn = nullptr;
        while (node != nullptr && spawn == nullptr)
        {
            FrameworkElement^ element = dynamic_cast<FrameworkElement^>(node);
            if (element != nullptr) spawn = dynamic_cast<CodexMapSpawn^>(element->DataContext);
            if (spawn != nullptr) break;
            if (dynamic_cast<System::Windows::Media::Visual^>(node) != nullptr) node = System::Windows::Media::VisualTreeHelper::GetParent(node);
            else node = LogicalTreeHelper::GetParent(node);
        }
        if (spawn == nullptr || m_codex == nullptr) return;

        StageEntry^ stage = m_codex->FindStage(spawn->StageId);
        if (stage == nullptr)
        {
            SetStatus("Stage " + spawn->StageId.ToString() + " is not in the stage list.");
            return;
        }
        OpenStageMapWindow(stage);
        e->Handled = true;
    }
}
