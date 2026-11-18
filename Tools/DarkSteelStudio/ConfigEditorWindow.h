#pragma once

// =============================================================================
// DarkSteelStudio - ConfigEditorWindow
//
// Small raw-text editor for one server's config.json (Xaml\ConfigEditorWindow.xaml).
// Edits the text as-is, so the files' hand-aligned formatting is preserved.
// Validate (JavaScriptSerializer), Save (one-time .bak backup, original line
// endings and BOM kept), Revert, Open in the default editor, Ctrl+S, and a
// prompt on close when there are unsaved edits.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    // One entry of the form: a section header (nested object) or a value leaf.
    // Start/End are the value token's span in the raw text and are kept in sync as fields are edited.
    public ref class ConfigField {
    public:
        String^   Key;
        int       Depth;
        bool      IsSection;
        int       Kind;        // 0 string, 1 number, 2 bool, 3 null, 4 array/other (raw JSON)
        int       Start;
        int       End;
        TextBox^  Box;         // string / number / raw editors
        CheckBox^ Check;       // bool editor
        Border^   Swatch;      // colour swatch for "#RRGGBB" strings
        bool      IsIntFlag;   // a 0/1 number shown as a checkbox (written back as 0 or 1)
        System::Windows::Controls::Primitives::Popup^ Pop;   // log-level picker (log_*_level)
        array<CheckBox^>^ Levels;                              // Trace..Fatal
        Button^   LevelButton;
    };

    public ref class ConfigEditorWindow {
    public:
        // `xamlRoot` is the folder holding ConfigEditorWindow.xaml (MainWindow::m_xamlRoot).
        ConfigEditorWindow(Window^ owner, String^ xamlRoot, String^ serverName, String^ path);
        void Show();

    private:
        Window^     m_window;
        TextBox^    m_text;
        TextBlock^  m_title;
        TextBlock^  m_pathText;
        TextBlock^  m_status;
        Button^     m_save;
        Button^     m_validate;
        Button^     m_revert;
        Button^     m_open;

        String^     m_serverName;
        String^     m_path;
        String^     m_xamlRoot;
        String^     m_original;     // text as last loaded or saved (with LF newlines normalised to CRLF for comparison)
        bool        m_hadBom;
        bool        m_crlf;         // the file used CRLF line endings
        bool        m_backedUp;
        bool        m_loading;

        // ---- form view ----
        TabControl^                                      m_tabs;
        StackPanel^                                      m_formPanel;
        System::Collections::Generic::List<ConfigField^>^ m_fields;
        bool                                             m_building;    // true while the form controls are being created

        void RebuildForm();
        bool ScanObject(String^ s, int% pos, int depth, System::Collections::Generic::List<ConfigField^>^ out, String^% error);
        static void SkipWs(String^ s, int% pos);
        static bool ScanString(String^ s, int% pos, String^% value, String^% error);
        static String^ JsonEscape(String^ value);
        static bool IsColorText(String^ value);
        void ApplyToken(int fieldIndex, String^ token);      // splices a new value token into the raw text
        void OnFieldTextChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnFieldCheckChanged(Object^ sender, RoutedEventArgs^ e);
        void OnOpenPathClick(Object^ sender, RoutedEventArgs^ e);      // Open button beside *.json path values
        void OnLevelButtonClick(Object^ sender, RoutedEventArgs^ e);   // opens the level popup
        void OnLevelItemClick(Object^ sender, RoutedEventArgs^ e);     // picks a threshold
        static String^ LevelSummary(int threshold);
        void SyncLevelUi(ConfigField^ f, int threshold);
        void OnSwatchClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OnTabChanged(Object^ sender, SelectionChangedEventArgs^ e);

        void LoadXaml(Window^ owner);
        void LoadFile();
        bool IsDirty();
        void UpdateTitle();
        String^ CheckJson(String^ text);          // null when valid, else the error message
        bool SaveFile();
        void SetStatus(String^ text);

        void OnTextChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnSaveClick(Object^ sender, RoutedEventArgs^ e);
        void OnValidateClick(Object^ sender, RoutedEventArgs^ e);
        void OnRevertClick(Object^ sender, RoutedEventArgs^ e);
        void OnOpenClick(Object^ sender, RoutedEventArgs^ e);
        void OnKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnClosing(Object^ sender, System::ComponentModel::CancelEventArgs^ e);
    };
}
