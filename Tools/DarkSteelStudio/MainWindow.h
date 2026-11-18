#pragma once

// =============================================================================
// DarkSteelStudio - MainWindow  (C++/CLI + WPF, runtime-loaded XAML)
//
// Internal admin tool for managing everything server side for Mir 5 (servers,
// accounts, characters, items/mail, game data, database, logs). This file is
// the application shell: a left navigation list, a page host, and a status bar.
//
// HOW THE UI IS BUILT
//   A vcxproj has no XAML->BAML compile step, so none of the XAML is compiled
//   into the exe. Instead every .xaml file lives in a "Xaml" folder next to the
//   executable (copied there by the post-build event) and is parsed at runtime
//   with System::Windows::Markup::XamlReader. Consequences:
//     * The XAML must NOT carry x:Class or Click="..."-style event attributes.
//       Controls get an x:Name, this class looks them up with FindName() and
//       wires the events in C++.
//     * Xaml\Theme.xaml (a ResourceDictionary) is merged into the Application
//       resources BEFORE the window is parsed, so {StaticResource ...} keys in
//       MainWindow.xaml and in the pages resolve.
//     * Pages are UserControls in Xaml\Pages\. The nav ListBox items carry the
//       page file name in their Tag; selecting one parses that file and drops
//       the result into ContentHost. Edit a page, press F5 in the app (or the
//       "Reload UI" button) and it is re-read from disk - no rebuild needed.
//
// C++/CLI CONSTRAINTS (same rules as Code/Tools/Mir4PakTool/MainForm.h)
//   * Native aggregate types (std::wstring, the native ToolConfig, ...) are
//     never ref class members - only transient locals. Settings live in the
//     managed StudioSettings mirror.
//   * Event handlers are named member functions bound with gcnew delegates.
//     C++/CLI cannot turn a lambda that captures managed handles into a
//     delegate, so per-operation state goes in fields, not captures.
//   * <Windows.h> is deliberately not included here (IServiceProvider clash
//     with `using namespace System`), and System::Windows::Shapes is never
//     brought in with `using` because its Path would clash with System::IO::Path.
// =============================================================================

#include "StudioSettings.h"
#include "GameDataBridge.h"
#include "ServerControl.h"
#include "DbBridge.h"
#include "DbBrowser.h"
#include "PlayerAdmin.h"
#include "ItemBrowser.h"
#include "ClientPanel.h"
#include "StudioLog.h"
#include "ConfigEditorWindow.h"
#include "CodexCatalog.h"
#include "StageMapWindow.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::IO;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    public ref class MainWindow {
    public:
        MainWindow();

        // The WPF Window to hand to Application::Run().
        Window^ GetWindow();

    private:
        // ---- paths / settings ------------------------------------------------
        String^            m_configPath;
        String^            m_xamlRoot;
        StudioSettings^    m_settings;

        // ---- shell controls (from Xaml\MainWindow.xaml) ------------------------
        Window^            m_window;
        ListBox^           m_navList;
        ContentControl^    m_contentHost;
        TextBlock^         m_pageTitle;
        TextBlock^         m_statusText;
        TextBlock^         m_dbStatusText;
        Button^            m_reloadXamlButton;
        Button^            m_aboutButton;

        // ---- runtime state ---------------------------------------------------
        ResourceDictionary^ m_theme;            // merged Theme.xaml (swapped on reload)
        String^             m_currentPageFile;  // e.g. "Servers.xaml"
        String^             m_currentPageTitle;
        FrameworkElement^   m_currentPage;      // root of the loaded page (nullptr on load error)

        // ---- Game Data page (Xaml\Pages\GameData.xaml) ------------------------
        // The bridge and the current table survive navigation; the control
        // handles are re-bound every time the page is parsed and nulled when
        // another page is shown.
        GameDataBridge^            m_gameData;
        String^                    m_gameDataRootApplied; // data root last pushed into the bridge
        String^                    m_gdCurrentTable;      // e.g. "ITEM"
        String^                    m_gdLastLang;          // language the last query resolved names in
        System::Data::DataTable^   m_gdLastTable;
        bool                       m_gdSuppressTreeEvents;

        TreeView^   m_gdTableTree;
        TextBox^    m_gdTableFilterBox;
        TextBox^    m_gdSearchBox;
        Button^     m_gdSearchButton;
        ComboBox^   m_gdLangBox;
        ComboBox^   m_gdMaxRowsBox;
        Button^     m_gdReloadTableButton;
        Button^     m_gdOpenJsonButton;
        DataGrid^   m_gdDataTableGrid;
        DataGrid^   m_gdDetailGrid;
        TextBlock^  m_gdDetailTitleText;
        TextBlock^  m_gdTableStatusText;
        TextBlock^  m_gdDataRootText;

        // ---- Game Data page: codex mode (website-style cards) -------------------
        CodexCatalog^   m_codex;
        String^         m_codexMode;         // "items" | "monsters" | "objects" | "npcs" | "raw"
        String^         m_codexFilterMode;   // mode the filter combos were last built for
        int             m_codexPage;         // 1-based page of the current list
        CodexPage^      m_codexCurrentPage;
        CodexEntry^     m_codexSelected;

        // Background list build (keeps the UI thread free while the tables parse).
        bool            m_codexBusy;               // a build thread is running
        bool            m_codexQueryPending;       // run the codex query for the current mode when the build ends
        bool            m_codexShowBuildTime;      // show "built in x s" in the next status line
        bool            m_codexPrewarmDone;        // the one-time background build of the items list was started
        String^         m_codexBuildMode;          // category the running thread builds
        String^         m_codexBuildError;         // exception text from the thread, or nullptr
        double          m_codexBuildMs;            // LastBuildMs captured by the thread
        System::Threading::Thread^ m_codexThread;
        bool            m_gdSuppressCodexEvents;

        Button^            m_gdModeItemsButton;
        Button^            m_gdModeMonstersButton;
        Button^            m_gdModeObjectsButton;
        Button^            m_gdModeNpcsButton;
        Button^            m_gdModeMapsButton;
        Button^            m_gdModeRawButton;
        FrameworkElement^  m_gdCodexPanel;
        FrameworkElement^  m_gdRawPanel;
        TextBox^           m_gdCodexSearchBox;
        Button^            m_gdCodexSearchButton;
        ComboBox^          m_gdCodexFilter1Box;
        ComboBox^          m_gdCodexFilter2Box;
        ComboBox^          m_gdCodexFilter3Box;
        ComboBox^          m_gdCodexSortBox;
        Button^            m_gdCodexReloadButton;
        ListBox^           m_gdCodexList;
        Button^            m_gdCodexPrevButton;
        TextBlock^         m_gdCodexPageText;
        Button^            m_gdCodexNextButton;
        TextBlock^         m_gdCodexCountText;
        TextBlock^         m_gdDetailEmptyText;
        FrameworkElement^  m_gdDetailScroll;
        Border^            m_gdDetailIconFrame;
        Image^             m_gdDetailIcon;
        Image^             m_gdDetailTradeIcon;
        Image^             m_gdDetailTierIcon;
        TextBlock^         m_gdDetailName;
        TextBlock^         m_gdDetailSubtitle;
        TextBlock^         m_gdDetailDescription;
        Border^            m_gdDetailStatsBox;
        TextBlock^         m_gdDetailStatsTitle;
        ItemsControl^      m_gdDetailStatsList;
        ItemsControl^      m_gdDetailEffectsList;
        ItemsControl^      m_gdDetailAttrsList;
        Border^            m_gdDetailVariantsBox;
        ListBox^           m_gdDetailVariantsList;
        TextBlock^         m_gdDetailFooter;
        Button^            m_gdDetailOpenRawButton;
        Button^            m_gdDetailCopyCommandButton;
        Button^            m_gdDetailViewMapButton;
        Button^            m_gdDetailOpenGenButton;
        Border^            m_gdDetailMapsBox;       // "found in maps" list (monsters only)
        TextBlock^         m_gdDetailMapsTitle;
        ItemsControl^      m_gdDetailMapsList;
        int                m_mapsSeq;               // newest map-list request (older answers are dropped)
        Border^            m_gdDetailWarpsBox;      // "warps into this map" list (maps only)
        TextBlock^         m_gdDetailWarpsTitle;
        ItemsControl^      m_gdDetailWarpsList;

        // ---- startup helpers -------------------------------------------------
        static String^ DetectServersPath(String^ startDir);
        String^  ResolveXamlRoot();
        String^  XamlPath(String^ relative);
        Object^  LoadXamlObject(String^ relative);
        static Object^ FindRequired(FrameworkElement^ root, String^ name);
        static Object^ FindOptional(FrameworkElement^ root, String^ name);
        void     LoadTheme();
        void     BindControls();
        void     WireEvents();
        void     RestoreWindowState();
        void     SelectInitialSection();

        // ---- navigation / pages ----------------------------------------------
        void     NavigateTo(String^ pageFile, String^ title);
        void     ShowLoadError(String^ pageFile, Exception^ ex);
        void     ReloadUi();
        void     PopulateSettingsPage(FrameworkElement^ page);

        // ---- Game Data page --------------------------------------------------
        void     PopulateGameDataPage(FrameworkElement^ page);
        void     ClearGameDataPageHandles();
        void     EnsureGameDataBridge();
        int      RebuildGameDataTree(String^ filter);
        void     RunGameDataQuery();
        void     FillGameDataDetail(System::Data::DataRowView^ rowView);
        void     ReportGameDataError(String^ message);
        String^  GameDataLang();
        int      GameDataMaxRows();

        // Game Data page - codex mode
        void     EnsureCodex();
        void     SetCodexMode(String^ mode);
        void     HighlightModeButton(Button^ button, String^ mode);
        void     PopulateCodexFilters();
        void     RunCodexQuery(int page);
        void     StartCodexBuild(String^ mode, bool runQueryAfter);
        void     CodexBuildThread();
        void     OnCodexBuildDone();
        void     SetCodexControlsEnabled(bool enabled);
        void     ShowCodexDetail(CodexEntry^ entry);
        void     ApplyCodexDetail(CodexDetail^ detail, bool updateVariants);
        int      CodexPageSize();
        static void    FillChoiceCombo(ComboBox^ box, System::Collections::Generic::List<CodexChoice^>^ choices);
        static void    FillTagCombo(ComboBox^ box, array<String^>^ labels, array<String^>^ tags);
        static void    HideCombo(ComboBox^ box);
        static int     ComboChoiceValue(ComboBox^ box);
        static String^ ComboTag(ComboBox^ box, String^ fallback);
        static void    SetImageSource(Image^ image, String^ url);
        static void    SetVisible(UIElement^ element, bool visible);

        // ---- misc helpers ----------------------------------------------------
        void     UpdateDbStatus();
        void     SetStatus(String^ text);
        String^  DbSummary();
        static String^ AppVersion();

        // ---- event handlers --------------------------------------------------
        void OnNavSelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnReloadXamlClick(Object^ sender, RoutedEventArgs^ e);
        void OnAboutClick(Object^ sender, RoutedEventArgs^ e);
        void OnWindowKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnWindowClosing(Object^ sender, System::ComponentModel::CancelEventArgs^ e);
        void OnBrowseServersClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrowseImagesClick(Object^ sender, RoutedEventArgs^ e);
        void BrowseInto(String^ boxName, String^ description);
        void UpdateFoldersNote(FrameworkElement^ page);
        void OnSaveSettingsClick(Object^ sender, RoutedEventArgs^ e);

        // Game Data page
        void OnGdTreeSelectionChanged(Object^ sender, RoutedPropertyChangedEventArgs<Object^>^ e);
        void OnGdTableFilterChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnGdSearchKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnGdSearchClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdOptionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnGdReloadClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdOpenJsonClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdGridSelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnGdAutoGeneratingColumn(Object^ sender, DataGridAutoGeneratingColumnEventArgs^ e);

        // Game Data page - codex mode
        void OnGdModeClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdCodexSearchKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnGdCodexSearchClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdCodexFilterChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnGdCodexReloadClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdCodexPrevClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdCodexNextClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdCodexListSelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnGdDetailVariantSelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnGdDetailOpenRawClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdDetailCopyCommandClick(Object^ sender, RoutedEventArgs^ e);
        String^ CodexCommandFor(CodexEntry^ entry);   // nullptr when the kind has no command

        // Maps mode
        void OnGdDetailViewMapClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdDetailOpenGenClick(Object^ sender, RoutedEventArgs^ e);
        void OnGdWarpCopyClick(Object^ sender, RoutedEventArgs^ e);   // one handler for every Copy button in the warps list
        void ShowStageWarps(CodexEntry^ entry);
        void ShowMonsterMaps(CodexEntry^ entry);                      // starts the background lookup, fills "found in maps"
        void OnMonsterMapsDone(MapSpawnResult^ result);
        void OnGdMonsterMapDoubleClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);                       // fills or collapses the warps box
        void OnGdCodexListDoubleClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OpenStageMapWindow(CodexEntry^ entry);   // no-op unless the entry is a StageEntry

        // ---- Accounts / Characters pages (PlayerAdmin) ---------------------------------
        PlayerAdmin^ m_players;
        ClientPanel^     m_clientPanel;   // Settings page: launch the Mir 5 client, Engine.ini
        ItemBrowser^     m_itemBrowser;   // Game Data page: Mir 5 items
        String^      m_pendingCharSearch;     // set by Accounts > Open character, consumed by the Characters page
        void EnsurePlayers();
        CodexCatalog^ ProvideCatalog();   // game data names for the character window (null if unavailable)
        String^       m_pendingItemSearch;               // item id to search for when the Game Data page opens
        long long     m_pendingItemSelect;               // ...and to select (show its card) once the results arrive
        void OpenItemInGameData(long long itemId);       // switch to Game Data > Items and search for the item
        void NavigateToPage(String^ pageTag, String^ search);

        // ---- Database browser page (Xaml\Pages\DatabaseBrowser.xaml) ----------------
        DbBrowser^                  m_browser;
        List<BrowseNode^>^          m_brSchemas;      // cached catalog (null = not loaded)
        BrowseNode^                 m_brSelected;
        int                         m_brOffset;
        int                         m_brSeqCatalog, m_brSeqData, m_brSeqCols, m_brSeqIdx, m_brSeqDdl;   // newest request per kind
        bool                        m_brSuppress;     // true while the tree is rebuilt
        TreeView^   m_brTree;  TextBox^ m_brFilter;  Button^ m_brRefresh;
        TextBlock^  m_brTitle;  TextBlock^ m_brInfo;  TextBlock^ m_brStatus;  TextBlock^ m_brPageText;
        TabControl^ m_brTabs;
        DataGrid^   m_brData;  DataGrid^ m_brCols;  DataGrid^ m_brIdx;
        TextBox^    m_brDdl;
        Button^     m_brPrev;  Button^ m_brNext;  Button^ m_brCopyDdl;

        void PopulateBrowserPage(FrameworkElement^ page);
        void ClearBrowserHandles();
        void StartBrowserJob(String^ action, BrowseNode^ node, int offset);
        void OnBrowserDone(BrowserResult^ result);
        void BuildBrowserTree();
        void SelectBrowserNode(BrowseNode^ node);
        void OnBrTreeSelected(Object^ sender, RoutedPropertyChangedEventArgs<Object^>^ e);
        void OnBrFilterChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnBrRefreshClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrPrevClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrNextClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrCopyDdlClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrCellEditEnding(Object^ sender, DataGridCellEditEndingEventArgs^ e);   // inline edit -> UPDATE
        List<String^>^                    m_brPk;        // primary key columns of the open table
        bool                              m_brColsKnown; // true once the column info for the open table arrived
        Dictionary<int, BrowserEdit^>^    m_brPending;   // exec request number -> the edit, for reverting on failure
        int                               m_brSeqExec;

        // ---- Database connection + Database page (Xaml\Pages\Database.xaml) --------
        DbBridge^   m_db;
        bool        m_dbBusy;
        String^     m_dbAction;      // "test" | "query"
        String^     m_dbHost;  int m_dbPort;  String^ m_dbUser;  String^ m_dbPass;  String^ m_dbSchema;   // connection used by the worker
        String^     m_dbSql;
        bool        m_dbOk;
        String^     m_dbMessage;     // server version (test ok), or the error text
        System::Data::DataTable^ m_dbTable;
        bool        m_dbTruncated;  long long m_dbAffected;  double m_dbMs;
        String^     m_dbState;       // text after the DB summary in the header
        TextBox^    m_dbSqlBox;  Button^ m_dbRunButton;  Button^ m_dbClearButton;  DataGrid^ m_dbGrid;  TextBlock^ m_dbStatus;

        // Run Script page: schema the script runs against + the list from SHOW DATABASES.
        String^     m_dbRunSchema;
        System::Collections::Generic::List<String^>^ m_dbSchemas;
        ComboBox^   m_dbSchemaBox;  Button^ m_dbSchemaRefresh;
        bool        m_dbSuppressSchema;
        void FillSchemaBox();
        void OnDbSchemaChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnDbSchemaRefreshClick(Object^ sender, RoutedEventArgs^ e);

        void LoadDbParamsFromSettings();
        void StartDbTask(String^ action);
        void DbWorker();
        void OnDbWorkerDone();
        void PopulateDatabasePage(FrameworkElement^ page);
        void ClearDatabaseHandles();
        void OnDbRunClick(Object^ sender, RoutedEventArgs^ e);
        void OnDbClearClick(Object^ sender, RoutedEventArgs^ e);
        void OnDbSqlKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnTestDbClick(Object^ sender, RoutedEventArgs^ e);

        // ---- Servers page (Xaml\Pages\Servers.xaml) -----------------------------
        ServerControl^                     m_servers;
        System::Windows::Threading::DispatcherTimer^ m_srvTimer;
        bool                               m_srvBusy;          // a worker is running
        String^                            m_srvAction;        // "" refresh | "start" | "stop" | "restart"
        array<int>^                        m_srvIndexes;
        String^                            m_srvResult;
        List<ServerRow^>^                  m_srvSnapshot;
        DataGrid^   m_srvGrid;
        TextBlock^  m_srvStatusText;
        Button^     m_srvConfig;
        void OnSrvConfigClick(Object^ sender, RoutedEventArgs^ e);
        ComboBox^   m_srvLaunchMode;
        void OnSrvLaunchModeChanged(Object^ sender, SelectionChangedEventArgs^ e);
        Button^     m_srvStartAll;  Button^ m_srvStopAll;  Button^ m_srvStart;  Button^ m_srvStop;  Button^ m_srvRestart;  Button^ m_srvRefresh;

        // Log panel under the grid: tail of the selected server's newest log file.
        TextBox^    m_srvLogBox;
        TextBlock^  m_srvLogTitle;
        CheckBox^   m_srvLogFollow;
        Button^     m_srvLogOpenFile;  Button^ m_srvLogOpenFolder;
        int         m_srvLogIndex;          // server index shown, -1 = none
        String^     m_srvLogFile;           // file currently shown
        long long   m_srvLogStamp;          // length + write time of what is shown (skip identical reloads)
        bool        m_srvSuppressSel;       // true while the grid rows are being rebuilt

        void RefreshServerLog(bool force);
        void OnSrvSelectionChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnSrvLogOpenFileClick(Object^ sender, RoutedEventArgs^ e);
        void OnSrvLogOpenFolderClick(Object^ sender, RoutedEventArgs^ e);

        void PopulateServersPage(FrameworkElement^ page);
        void ClearServersHandles();                  // stops the timer, nulls handles (called on every navigation)
        void StartServerWorker(String^ action, array<int>^ indexes);
        void ServerWorker();                         // worker thread: optional action, then a fresh snapshot
        void OnServerWorkerDone();                   // UI thread
        void OnSrvTimerTick(Object^ sender, EventArgs^ e);
        void OnSrvStartAllClick(Object^ sender, RoutedEventArgs^ e);
        void OnSrvStopAllClick(Object^ sender, RoutedEventArgs^ e);
        void OnSrvSelectedClick(Object^ sender, RoutedEventArgs^ e);   // Start/Stop/Restart Selected (by sender)
        void OnSrvRefreshClick(Object^ sender, RoutedEventArgs^ e);
        array<int>^ SelectedServerIndexes();
    };
}
