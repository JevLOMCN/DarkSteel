#pragma once

// =============================================================================
// DarkSteelStudio - CharacterWindow
//
// Full read-only profile of one character, the same breadth as ReMir's /character
// page (and then some), straight from the game database. Tabs:
//   Overview, Items (equipped / inventory / warehouse), Skills, Spirits & Mounts,
//   Progress (quests, achievements, collections, play data), Growth (inner force,
//   masteries, potential, holy stuff, treasures, decks), Guild & Conquest,
//   Appearance, Misc.
// Every table is one SQL section. Tabs load when first opened. Item, skill, spirit
// and mount ids get a resolved name next to them (CodexCatalog.NameOf / FindItem,
// computed on the worker thread together with the query). Sections with no rows
// are hidden. Shares the DbBrowser connection with the other pages.
// =============================================================================

#include "StudioSettings.h"
#include "DbBrowser.h"
#include "CodexCatalog.h"
#include "ClassIcons.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    // One table on a tab.
    public ref class CwSection {
    public:
        property String^ Tab;
        property String^ Title;
        property String^ Sql;
        property String^ Names;     // "ItemId=item;SkillId=skill" -> a Name (and for items a Grade) column after each id column
        property Border^ Box;       // the card holding the title and the grid
        property TextBlock^ TitleText;
        property DataGrid^ Grid;
        property DockPanel^ Head;                       // title row (the Delete button is added here)
        property Dictionary<String^, String^>^ Edits;   // editable result column -> UPDATE template ({v} = new value, {Col} = a column's current value)
        property bool AlwaysShow;                       // keep the card visible (title + "(empty)") even when the query returns no rows
        property bool CanDelete;                        // item sections: a Delete button removes the item from every table
    };

    // Echoed back with each answer.
    public ref class CwRequest {
    public:
        property CwSection^ Section;   // null for the overview query
        property int Generation;
        property String^ Kind;         // "load" (default) | "edit" | "delete"
        property BrowserEdit^ Edit;     // edit: what to revert on failure
        property System::Data::DataRowView^ Row;   // delete: the grid row to drop on success
    };

    public ref class CharacterWindow {
    public:
        CharacterWindow(Window^ owner, String^ xamlRoot, StudioSettings^ settings, DbBrowser^ db,
                        CodexCatalog^ catalog, long long characterUid, String^ characterName,
                        System::Action<long long>^ openItem);
        void Show();

    private:
        Window^          m_window;
        TabControl^      m_tabs;
        TextBlock^       m_title;
        TextBlock^       m_subtitle;
        Image^           m_classIcon;                  // header icon from the class sprite sheet
        int              m_classId;
        TextBlock^       m_status;
        Button^          m_refresh;

        StudioSettings^  m_settings;
        DbBrowser^       m_db;
        CodexCatalog^    m_catalog;
        long long        m_uid;
        String^          m_name;
        String^          m_xamlRoot;
        System::Action<long long>^ m_openItem;          // double-click an item -> show it on the Game Data tab
        Dictionary<int, CwRequest^>^ m_edits;          // exec request number -> its request (for reverting)
        int              m_editSeq;
        Dictionary<String^, bool>^ m_overviewInt;     // overview field -> stored as a whole number
        long long        m_accountUid;
        int              m_generation;                 // bumped by Refresh so old answers are dropped
        bool             m_closed;

        List<CwSection^>^                 m_sections;
        Dictionary<String^, StackPanel^>^ m_tabPanels;
        Dictionary<String^, TextBlock^>^  m_tabEmpty;  // "no data" note per tab
        Dictionary<String^, bool>^        m_tabLoaded;
        Dictionary<String^, int>^         m_tabPending; // sections still waiting per tab
        Dictionary<String^, int>^         m_tabShown;   // sections that had rows per tab
        DataGrid^ m_profileGrid;
        DataGrid^ m_currencyGrid;

        String^ G();
        void LoadXaml(Window^ owner);
        void BuildTabs();
        CwSection^ AddSection(String^ tab, String^ title, String^ sql, String^ names);
        CwSection^ Find(String^ tab, String^ title);
        void Edit(String^ tab, String^ title, String^ column, String^ updateTemplate);
        void Deletable(String^ tab, String^ title);
        static bool OverviewEditable(String^ field);
        void OnCellEditEnding(Object^ sender, DataGridCellEditEndingEventArgs^ e);
        void OnBeginningEdit(Object^ sender, DataGridBeginningEditEventArgs^ e);
        void OnAutoColumn(Object^ sender, DataGridAutoGeneratingColumnEventArgs^ e);
        void OnGridDoubleClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OnDeleteClick(Object^ sender, RoutedEventArgs^ e);
        void RunEdit(String^ sql, BrowserEdit^ edit);
        StackPanel^ EnsureTab(String^ tab);
        void LoadOverview();
        void LoadTab(String^ tab);
        void Send(String^ sql, CwRequest^ request, int maxRows);
        void AddNames(BrowserResult^ result);          // worker thread
        void OnDone(BrowserResult^ result);            // UI thread
        void ShowOverview(System::Data::DataTable^ table);
        static String^ Describe(Object^ value);

        void OnTabChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnRefreshClick(Object^ sender, RoutedEventArgs^ e);
        void ApplyClassIcon();
        void OnClosed(Object^ sender, EventArgs^ e);
    };
}
