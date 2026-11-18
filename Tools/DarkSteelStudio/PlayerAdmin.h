#pragma once

// =============================================================================
// DarkSteelStudio - PlayerAdmin  (Accounts + Characters pages)
//
// Modelled on ReMir's admin Accounts / CharacterManager, but reading and writing
// the game database directly instead of going through the Front admin API:
//
//   Accounts   roster (account, characters, deleted, top CP, grade, status, last
//              login) with search + sort; selecting one shows its characters and
//              deleted characters, and lets you set the account grade and
//              block / unblock it (mm_front_db account_grade_tb / account_block_tb).
//   Characters searchable table (name, class, level, CP, account, guild, online,
//              ...) with an edit panel (name, level, exp, CP, PK points + a reason).
//
// Reads <GameSchema>.account_tb / character_tb / character_delete_tb / guild_tb /
// character_guild_tb and <FrontSchema>.account_grade_tb / account_block_tb.
// Account grade: 0 = Player, 1 = Gamemaster, 2 = Developer.
// Character deletion is soft (a row in character_delete_tb), so "deleted" means
// that row exists. Every change is appended to %LOCALAPPDATA%\DarkSteelStudio\audit.log.
// Class is shown but not editable here: the game switches class through the
// character-phase procedures, a raw column update would corrupt skills and decks.
//
// All database work runs on worker threads through DbBrowser/BrowserJob and comes
// back on the UI thread in OnDone.
// =============================================================================

#include "StudioSettings.h"
#include "DbBrowser.h"
#include "CharacterWindow.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    // Carried through a BrowserJob so OnDone knows what an answer is for.
    public ref class PlayerRequest {
    public:
        property String^ Kind;      // accounts | accchars | accdeleted | chars | accaction | chredit
        property int     Seq;
        property Object^ Context;
    };

    public ref class PlayerAdmin {
    public:
        // status(text) writes to the main status bar; navigate(pageTag, search) switches page
        // (used by "Open character": navigate("Characters.xaml", "<uid>")).
        PlayerAdmin(Window^ window, StudioSettings^ settings, DbBrowser^ browser,
                    System::Action<String^>^ status, System::Action<String^, String^>^ navigate,
                    System::Func<CodexCatalog^>^ catalogProvider, String^ xamlRoot,
                    System::Action<long long>^ openItem);

        void ShowAccounts(FrameworkElement^ page);
        void ShowCharacters(FrameworkElement^ page, String^ presetSearch);
        void Leave();   // drop all page control handles (called on every navigation)

    private:
        Window^                                   m_window;
        StudioSettings^                           m_settings;
        DbBrowser^                                m_db;
        System::Action<String^>^                  m_status;
        System::Action<String^, String^>^         m_navigate;
        System::Func<CodexCatalog^>^              m_catalogProvider;   // item / skill names for the character window
        String^                                   m_xamlRoot;
        System::Action<long long>^                m_openItem;          // show an item on the Game Data tab
        Dictionary<String^, int>^                 m_seq;       // newest request number per kind

        // ---- accounts page ----
        TextBox^   m_accSearch;  ComboBox^ m_accSort;  Button^ m_accSearchButton;  Button^ m_accRefresh;
        TextBlock^ m_accCount;  TextBlock^ m_accStatus;  TextBlock^ m_accTitle;  TextBlock^ m_accMeta;
        DataGrid^  m_accGrid;  DataGrid^ m_accChars;  DataGrid^ m_accDeleted;
        Button^    m_accOpenChar;  ComboBox^ m_accGradeBox;  Button^ m_accGradeButton;
        TextBox^   m_accBlockReason;  TextBox^ m_accBlockDays;  Button^ m_accBlock;  Button^ m_accUnblock;
        long long  m_accUid;        // selected account (0 = none)
        String^    m_accName;

        // ---- characters page ----
        TextBox^   m_chrSearch;  Button^ m_chrSearchButton;  CheckBox^ m_chrDeleted;
        TextBlock^ m_chrCount;  TextBlock^ m_chrStatus;
        DataGrid^  m_chrGrid;
        TextBlock^ m_chrTitle;  TextBlock^ m_chrInfo;  TextBlock^ m_chrWarn;  StackPanel^ m_chrFields;
        TextBox^   m_chrName;  TextBox^ m_chrLevel;  TextBox^ m_chrExp;  TextBox^ m_chrCp;  TextBox^ m_chrPk;  TextBox^ m_chrReason;
        Button^    m_chrApply;  Button^ m_chrReset;  Button^ m_chrOpen;
        System::Data::DataRowView^ m_chrRow;   // selected character row (original values)
        long long  m_chrUid;
        String^    m_chrPreset;                 // pending "select this UID after the next load"

        // ---- helpers ----
        String^ G();   // quoted game schema
        String^ F();   // quoted front schema
        static Object^ Req(FrameworkElement^ root, String^ name);
        static String^ SqlStr(String^ value);        // 'escaped'
        static String^ LikeStr(String^ value);       // '%escaped%' for LIKE
        static String^ ClassCase(String^ column);    // ELT(col, 'Warrior', ...)
        static String^ Cell(System::Data::DataRowView^ row, String^ column);
        static long long Num(System::Data::DataRowView^ row, String^ column);
        static void Audit(String^ line);
        void Say(String^ text);
        void Send(String^ kind, String^ sql, Object^ context, bool isExec);
        void OnDone(BrowserResult^ result);

        // accounts
        void LoadAccounts();
        void LoadAccountDetail(long long uid);
        void OnAccSearchClick(Object^ sender, RoutedEventArgs^ e);
        void OnAccSearchKey(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnAccSortChanged(Object^ sender, SelectionChangedEventArgs^ e);
        void OnAccSelected(Object^ sender, SelectionChangedEventArgs^ e);
        void OnAccGradeClick(Object^ sender, RoutedEventArgs^ e);
        void OnAccBlockClick(Object^ sender, RoutedEventArgs^ e);
        void OnAccUnblockClick(Object^ sender, RoutedEventArgs^ e);
        void OnAccOpenCharClick(Object^ sender, RoutedEventArgs^ e);
        void OnAccCharDoubleClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);

        // characters
        void LoadCharacters();
        void FillEditPanel();
        void OnChrSearchClick(Object^ sender, RoutedEventArgs^ e);
        void OnChrSearchKey(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnChrDeletedChanged(Object^ sender, RoutedEventArgs^ e);
        void OnChrSelected(Object^ sender, SelectionChangedEventArgs^ e);
        void OnChrApplyClick(Object^ sender, RoutedEventArgs^ e);
        void OnChrResetClick(Object^ sender, RoutedEventArgs^ e);
        void OnChrOpenClick(Object^ sender, RoutedEventArgs^ e);   // full profile window
    };
}
