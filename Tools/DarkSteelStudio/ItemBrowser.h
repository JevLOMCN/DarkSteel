#pragma once

// =============================================================================
// DarkSteelStudio - ItemBrowser  (Game Data page, Mir 5 items)
//
// Reads the Mir 5 item table and English strings straight from the server's data
// folder (the client's DataTable export, unmodified):
//   <Data>\Common\ItemBase.json            987 items (ID_Name / ID_Explain / ID_Icon / ItemType ...)
//   <Data>\String\Eng\StringItem_Eng.json  item names and descriptions
// and shows them as a searchable list with a detail panel. Icons are the PNGs written
// by Tools\ExtractImages (DarkSteelStudio\Images\Items\<ID_Icon>.png); an item without an icon file
// simply shows none.
//
// Folders come from the Settings page (Server folder / Images folder, stored relative to the tool so a
// checkout on another drive works). When a setting is empty or wrong the folder is found by walking up from
// the exe and the working directory for "Server\Bin\Data" and "Images\Items".
// Page XAML: Xaml\Pages\GameData.xaml.
// =============================================================================

#include "StudioSettings.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    // One Field / Value / Text row of the detail panel. Bound by the XAML grid: properties only.
    public ref class M5ItemField {
    public:
        property String^ Field;
        property String^ Value;
        property String^ Text;      // resolved string for ID_ columns, empty otherwise
    };

    // One item. Bound by the XAML grid: properties only.
    public ref class M5Item {
    public:
        property long long Id;
        property String^   Name;
        property String^   Description;
        property String^   MainType;     // "Weapon", "Armor", ... (enum prefix stripped)
        property String^   ItemType;
        property String^   Grade;
        property int       Level;        // RequireLevel
        property long long IconId;
        property String^   IconPath;     // full path of the PNG, or null when the file is missing
        property List<M5ItemField^>^ Fields;
    };

    public ref class ItemBrowser {
    public:
        ItemBrowser(Window^ window, StudioSettings^ settings, System::Action<String^>^ status);

        void Show(FrameworkElement^ page);   // bind the page, load on first use, apply filters
        void Leave();                        // drop every control handle
        void Invalidate() { m_items = nullptr; }   // folders changed in Settings: re-read on the next Show

    private:
        Window^                    m_window;
        StudioSettings^            m_settings;
        System::Action<String^>^   m_status;

        List<M5Item^>^             m_items;        // all items, sorted by id
        String^                    m_dataRoot;     // folder that holds the Common and String folders
        String^                    m_iconRoot;     // folder with <icon id>.png, may be null
        String^                    m_loadNote;     // shown in the footer
        bool                       m_updating;     // filter combos are being filled; ignore their events

        // ---- controls ----
        TextBox^   m_search;
        ComboBox^  m_typeBox;
        ComboBox^  m_gradeBox;
        Button^    m_reload;
        TextBlock^ m_count;
        TextBlock^ m_footer;
        DataGrid^  m_grid;
        Image^     m_detailIcon;
        TextBlock^ m_detailTitle;
        TextBlock^ m_detailMeta;
        TextBlock^ m_detailText;
        DataGrid^  m_fieldGrid;
        Button^    m_copyId;
        Button^    m_copyCmd;

        static Object^ Named(FrameworkElement^ root, String^ name);
        static String^ FindUp(String^ startDir, array<String^>^ relatives);
        static String^ Str(Object^ value);
        static String^ StripEnum(String^ value);
        static System::Collections::IDictionary^ ReadRows(String^ path);
        static String^ TextOf(Dictionary<long long, String^>^ strings, Object^ reference);
        static int     CompareItems(M5Item^ a, M5Item^ b);

        void Load();
        void FillFilters();
        void ApplyFilters();
        void ShowDetail(M5Item^ item);

        void OnFilterChanged(Object^ sender, System::Windows::Controls::SelectionChangedEventArgs^ e);
        void OnSearchChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnGridSelection(Object^ sender, System::Windows::Controls::SelectionChangedEventArgs^ e);
        void OnReloadClick(Object^ sender, RoutedEventArgs^ e);
        void OnCopyIdClick(Object^ sender, RoutedEventArgs^ e);
        void OnCopyCommandClick(Object^ sender, RoutedEventArgs^ e);
    };
}
