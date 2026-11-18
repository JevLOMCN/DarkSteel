#include "ConfigEditorWindow.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Windows::Markup;

    // =========================================================================
    // Form view: a scanner records each value's span in the raw text; editing a
    // field splices only that token, so the file's own layout is never rewritten.
    // =========================================================================

    void ConfigEditorWindow::SkipWs(String^ s, int% pos)
    {
        while (pos < s->Length && Char::IsWhiteSpace(s[pos])) ++pos;
    }

    // pos is at the opening quote; on success pos is just past the closing quote.
    bool ConfigEditorWindow::ScanString(String^ s, int% pos, String^% value, String^% error)
    {
        if (pos >= s->Length || s[pos] != L'"') { error = "expected a string at offset " + pos.ToString(); return false; }
        StringBuilder^ sb = gcnew StringBuilder();
        ++pos;
        while (pos < s->Length)
        {
            wchar_t c = s[pos++];
            if (c == L'"') { value = sb->ToString(); return true; }
            if (c != L'\\') { sb->Append(c); continue; }
            if (pos >= s->Length) break;
            wchar_t e = s[pos++];
            switch (e)
            {
            case L'n': sb->Append(L'\n'); break;
            case L'r': sb->Append(L'\r'); break;
            case L't': sb->Append(L'\t'); break;
            case L'b': sb->Append(L'\b'); break;
            case L'f': sb->Append(L'\f'); break;
            case L'u':
            {
                int code = 0;
                if (pos + 4 <= s->Length && Int32::TryParse(s->Substring(pos, 4), System::Globalization::NumberStyles::HexNumber,
                                                            System::Globalization::CultureInfo::InvariantCulture, code))
                {
                    sb->Append(static_cast<wchar_t>(code));
                    pos += 4;
                }
                break;
            }
            default: sb->Append(e); break;   // \" \\ \/
            }
        }
        error = "unterminated string";
        return false;
    }

    String^ ConfigEditorWindow::JsonEscape(String^ value)
    {
        StringBuilder^ sb = gcnew StringBuilder();
        for each (wchar_t c in value)
        {
            if (c == L'"') sb->Append("\\\"");
            else if (c == L'\\') sb->Append("\\\\");
            else if (c == L'\n') sb->Append("\\n");
            else if (c == L'\r') sb->Append("\\r");
            else if (c == L'\t') sb->Append("\\t");
            else if (c < L' ') sb->Append(String::Format("\\u{0:x4}", static_cast<int>(c)));
            else sb->Append(c);
        }
        return sb->ToString();
    }

    bool ConfigEditorWindow::IsColorText(String^ value)
    {
        return value != nullptr && System::Text::RegularExpressions::Regex::IsMatch(value, "^#[0-9A-Fa-f]{6}$");
    }

    // pos at '{'. Appends section headers and value leaves in file order.
    bool ConfigEditorWindow::ScanObject(String^ s, int% pos, int depth, System::Collections::Generic::List<ConfigField^>^ out, String^% error)
    {
        ++pos;   // '{'
        while (true)
        {
            SkipWs(s, pos);
            if (pos >= s->Length) { error = "unexpected end of file"; return false; }
            if (s[pos] == L'}') { ++pos; return true; }

            String^ key;
            if (!ScanString(s, pos, key, error)) return false;
            SkipWs(s, pos);
            if (pos >= s->Length || s[pos] != L':') { error = "expected ':' after \"" + key + "\""; return false; }
            ++pos;
            SkipWs(s, pos);
            if (pos >= s->Length) { error = "unexpected end of file"; return false; }

            ConfigField^ f = gcnew ConfigField();
            f->Key = key;
            f->Depth = depth;
            wchar_t c = s[pos];
            if (c == L'{')
            {
                f->IsSection = true;
                out->Add(f);
                if (!ScanObject(s, pos, depth + 1, out, error)) return false;
            }
            else
            {
                f->IsSection = false;
                f->Start = pos;
                if (c == L'"')
                {
                    String^ ignored;
                    if (!ScanString(s, pos, ignored, error)) return false;
                    f->Kind = 0;
                }
                else if (c == L'[')
                {
                    int level = 0;
                    while (pos < s->Length)
                    {
                        wchar_t d = s[pos];
                        if (d == L'"') { String^ ig; if (!ScanString(s, pos, ig, error)) return false; continue; }
                        if (d == L'[' || d == L'{') ++level;
                        else if (d == L']' || d == L'}') { --level; if (level == 0) { ++pos; break; } }
                        ++pos;
                    }
                    if (level != 0) { error = "unterminated array"; return false; }
                    f->Kind = 4;
                }
                else
                {
                    while (pos < s->Length && s[pos] != L',' && s[pos] != L'}' && !Char::IsWhiteSpace(s[pos])) ++pos;
                    String^ word = s->Substring(f->Start, pos - f->Start);
                    if (word == "true" || word == "false") f->Kind = 2;
                    else if (word == "null") f->Kind = 3;
                    else f->Kind = 1;
                }
                f->End = pos;
                out->Add(f);
            }

            SkipWs(s, pos);
            if (pos < s->Length && s[pos] == L',') ++pos;
        }
    }

    void ConfigEditorWindow::RebuildForm()
    {
        if (m_formPanel == nullptr)
        {
            return;
        }

        m_building = true;
        try
        {
            m_formPanel->Children->Clear();
            m_fields->Clear();

            String^ text = m_text->Text;
            String^ error = nullptr;
            int pos = 0;
            SkipWs(text, pos);
            bool ok = pos < text->Length && text[pos] == L'{' && ScanObject(text, pos, 0, m_fields, error);
            if (!ok)
            {
                TextBlock^ message = gcnew TextBlock();
                message->Text = "The form cannot be built: " + ((error == nullptr) ? gcnew String("the file is not a JSON object") : error) +
                                ".\nFix it on the Raw text tab, then come back.";
                message->TextWrapping = TextWrapping::Wrap;
                message->Foreground = System::Windows::Media::Brushes::IndianRed;
                m_formPanel->Children->Add(message);
                m_fields->Clear();
                return;
            }

            System::Windows::Media::Brush^ muted = dynamic_cast<System::Windows::Media::Brush^>(m_window->TryFindResource("Brush.TextMuted"));
            System::Windows::Media::Brush^ borderBrush = dynamic_cast<System::Windows::Media::Brush^>(m_window->TryFindResource("Brush.Border"));
            System::Windows::Style^ headingStyle = dynamic_cast<System::Windows::Style^>(m_window->TryFindResource("HeadingTextStyle"));

            for (int i = 0; i < m_fields->Count; ++i)
            {
                ConfigField^ f = m_fields[i];

                if (f->IsSection)
                {
                    TextBlock^ header = gcnew TextBlock();
                    header->Text = f->Key;
                    if (headingStyle != nullptr) header->Style = headingStyle;
                    header->Margin = Thickness(f->Depth * 16.0, (i == 0) ? 0.0 : 18.0, 0.0, 6.0);
                    m_formPanel->Children->Add(header);
                    continue;
                }

                Grid^ row = gcnew Grid();
                row->Margin = Thickness(f->Depth * 16.0, 0.0, 0.0, 6.0);
                ColumnDefinition^ c0 = gcnew ColumnDefinition();
                c0->Width = GridLength(280.0);
                ColumnDefinition^ c1 = gcnew ColumnDefinition();
                row->ColumnDefinitions->Add(c0);
                row->ColumnDefinitions->Add(c1);

                TextBlock^ label = gcnew TextBlock();
                label->Text = f->Key;
                label->VerticalAlignment = System::Windows::VerticalAlignment::Center;
                label->TextTrimming = TextTrimming::CharacterEllipsis;
                label->ToolTip = f->Key;
                if (muted != nullptr) label->Foreground = muted;
                row->Children->Add(label);

                String^ raw = text->Substring(f->Start, f->End - f->Start);
                FrameworkElement^ editor;

                // 0/1 numbers named like switches become checkboxes; log_*_level gets the level picker.
                bool isIntFlag = (f->Kind == 1) && (raw == "0" || raw == "1") &&
                    System::Text::RegularExpressions::Regex::IsMatch(f->Key, "(^|_)(enabled?|disabled?|use|make|assert|is|has|allow)(_|$)");
                bool isLevel = (f->Kind == 1) && (f->Key == "log_file_level" || f->Key == "log_console_level");
                f->IsIntFlag = isIntFlag;

                if (isLevel)
                {
                    int threshold = 0;
                    Int32::TryParse(raw, threshold);
                    Button^ pick = gcnew Button();
                    pick->Tag = i;
                    pick->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
                    pick->Padding = Thickness(12.0, 4.0, 12.0, 4.0);
                    pick->ToolTip = "Pick which log levels are written. The setting is a minimum level: choosing one also shows everything above it.";
                    pick->Click += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnLevelButtonClick);
                    f->LevelButton = pick;

                    System::Windows::Controls::Primitives::Popup^ pop = gcnew System::Windows::Controls::Primitives::Popup();
                    pop->PlacementTarget = pick;
                    pop->Placement = System::Windows::Controls::Primitives::PlacementMode::Bottom;
                    pop->StaysOpen = false;
                    Border^ frame = gcnew Border();
                    System::Windows::Media::Brush^ fill = dynamic_cast<System::Windows::Media::Brush^>(m_window->TryFindResource("Brush.PanelHover"));
                    if (fill != nullptr) frame->Background = fill;
                    if (borderBrush != nullptr) frame->BorderBrush = borderBrush;
                    frame->BorderThickness = Thickness(1.0);
                    frame->CornerRadius = CornerRadius(4.0);
                    frame->Padding = Thickness(10.0);
                    StackPanel^ list = gcnew StackPanel();
                    array<String^>^ names = gcnew array<String^> { "Trace", "Debug", "Info", "Warning", "Error", "Fatal" };
                    f->Levels = gcnew array<CheckBox^>(6);
                    for (int lv = 0; lv < 6; ++lv)
                    {
                        CheckBox^ item = gcnew CheckBox();
                        item->Content = names[lv];
                        item->Tag = i * 10 + lv;
                        item->Margin = Thickness(0.0, 2.0, 0.0, 2.0);
                        item->Click += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnLevelItemClick);
                        f->Levels[lv] = item;
                        list->Children->Add(item);
                    }
                    frame->Child = list;
                    pop->Child = frame;
                    f->Pop = pop;
                    SyncLevelUi(f, threshold);
                    editor = pick;
                }
                else if (f->Kind == 2 || isIntFlag)
                {
                    CheckBox^ check = gcnew CheckBox();
                    check->IsChecked = (raw == "true" || raw == "1");
                    check->Tag = i;
                    check->VerticalAlignment = System::Windows::VerticalAlignment::Center;
                    check->Checked += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnFieldCheckChanged);
                    check->Unchecked += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnFieldCheckChanged);
                    f->Check = check;
                    editor = check;
                }
                else
                {
                    String^ shown = raw;
                    if (f->Kind == 0)
                    {
                        int p = f->Start; String^ v; String^ ig;
                        shown = ScanString(text, p, v, ig) ? v : raw;
                    }

                    TextBox^ box = gcnew TextBox();
                    box->Text = shown;
                    box->Tag = i;
                    box->TextChanged += gcnew TextChangedEventHandler(this, &ConfigEditorWindow::OnFieldTextChanged);
                    f->Box = box;

                    if (f->Kind == 0 && IsColorText(shown))
                    {
                        // Colour value: a swatch painted in that colour; click it for the picker.
                        DockPanel^ dock = gcnew DockPanel();
                        Border^ swatch = gcnew Border();
                        swatch->Width = 34; swatch->Height = 24;
                        swatch->CornerRadius = CornerRadius(4.0);
                        swatch->BorderThickness = Thickness(1.0);
                        if (borderBrush != nullptr) swatch->BorderBrush = borderBrush;
                        swatch->Margin = Thickness(0.0, 0.0, 8.0, 0.0);
                        swatch->Cursor = System::Windows::Input::Cursors::Hand;
                        swatch->ToolTip = "Click to pick a colour";
                        swatch->Tag = i;
                        swatch->MouseLeftButtonUp += gcnew System::Windows::Input::MouseButtonEventHandler(this, &ConfigEditorWindow::OnSwatchClick);
                        System::Windows::Media::Color col = safe_cast<System::Windows::Media::Color>(
                            System::Windows::Media::ColorConverter::ConvertFromString(shown));
                        swatch->Background = gcnew System::Windows::Media::SolidColorBrush(col);
                        f->Swatch = swatch;
                        DockPanel::SetDock(swatch, Dock::Left);
                        box->Width = 120;
                        box->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
                        dock->Children->Add(swatch);
                        dock->Children->Add(box);
                        dock->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
                        editor = dock;
                    }
                    else
                    {
                        box->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
                        box->Width = (f->Kind == 1) ? 180.0 : 440.0;
                        editor = box;

                        if (f->Kind == 0 && shown->EndsWith(".json", StringComparison::OrdinalIgnoreCase))
                        {
                            // A path to a JSON file (e.g. Front's coupon_data_path): add an Open button.
                            DockPanel^ dock = gcnew DockPanel();
                            Button^ open = gcnew Button();
                            open->Content = "Open";
                            open->Tag = i;
                            open->Margin = Thickness(8.0, 0.0, 0.0, 0.0);
                            open->Padding = Thickness(14.0, 3.0, 14.0, 3.0);
                            open->ToolTip = "Open this JSON file in the default editor (relative paths start at the server's folder)";
                            open->Click += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnOpenPathClick);
                            DockPanel::SetDock(open, Dock::Right);
                            box->Width = 440.0;
                            dock->Children->Add(open);
                            dock->Children->Add(box);
                            dock->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
                            editor = dock;
                        }
                    }
                }

                Grid::SetColumn(editor, 1);
                row->Children->Add(editor);
                m_formPanel->Children->Add(row);
            }
        }
        finally
        {
            m_building = false;
        }
    }

    // Replaces the value token of one field in the raw text and shifts later spans.
    void ConfigEditorWindow::ApplyToken(int index, String^ token)
    {
        ConfigField^ f = m_fields[index];
        String^ t = m_text->Text;
        int delta = token->Length - (f->End - f->Start);
        if (delta == 0 && String::CompareOrdinal(t, f->Start, token, 0, token->Length) == 0)
        {
            return;
        }
        m_text->Text = t->Substring(0, f->Start) + token + t->Substring(f->End);
        f->End = f->Start + token->Length;
        for (int j = index + 1; j < m_fields->Count; ++j)
        {
            if (!m_fields[j]->IsSection)
            {
                m_fields[j]->Start += delta;
                m_fields[j]->End += delta;
            }
        }
    }

    void ConfigEditorWindow::OnFieldTextChanged(Object^ sender, TextChangedEventArgs^ /*e*/)
    {
        if (m_building) return;
        TextBox^ box = dynamic_cast<TextBox^>(sender);
        if (box == nullptr || box->Tag == nullptr) return;
        int index = safe_cast<int>(box->Tag);
        if (index < 0 || index >= m_fields->Count) return;

        ConfigField^ f = m_fields[index];
        String^ v = box->Text;
        String^ token = nullptr;

        if (f->Kind == 0)
        {
            token = "\"" + JsonEscape(v) + "\"";
            if (f->Swatch != nullptr && IsColorText(v))
            {
                f->Swatch->Background = gcnew System::Windows::Media::SolidColorBrush(
                    safe_cast<System::Windows::Media::Color>(System::Windows::Media::ColorConverter::ConvertFromString(v)));
            }
        }
        else if (f->Kind == 1)
        {
            String^ n = v->Trim();
            if (System::Text::RegularExpressions::Regex::IsMatch(n, "^-?(0|[1-9][0-9]*)(\\.[0-9]+)?([eE][+-]?[0-9]+)?$")) token = n;
        }
        else
        {
            String^ n = v->Trim();
            if (n->Length > 0 && CheckJson(n) == nullptr) token = n;   // null / arrays: must stay valid JSON
        }

        if (token == nullptr)
        {
            box->BorderBrush = System::Windows::Media::Brushes::IndianRed;   // invalid: not written to the file
            SetStatus("\"" + f->Key + "\": not a valid value, not applied.");
            return;
        }
        box->ClearValue(Control::BorderBrushProperty);
        ApplyToken(index, token);
    }

    void ConfigEditorWindow::OnFieldCheckChanged(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        if (m_building) return;
        CheckBox^ check = dynamic_cast<CheckBox^>(sender);
        if (check == nullptr || check->Tag == nullptr) return;
        int index = safe_cast<int>(check->Tag);
        if (index < 0 || index >= m_fields->Count) return;
        bool on = check->IsChecked.HasValue && check->IsChecked.Value;
        if (m_fields[index]->IsIntFlag)
        {
            ApplyToken(index, on ? gcnew String("1") : gcnew String("0"));   // keep the file's 0/1 style
        }
        else
        {
            ApplyToken(index, on ? gcnew String("true") : gcnew String("false"));
        }
    }

    // Opens the JSON file named by a path field. Relative paths are relative to the server's folder
    // (the folder holding this config.json), as the servers resolve them from their working directory.
    void ConfigEditorWindow::OnOpenPathClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        Button^ b = dynamic_cast<Button^>(sender);
        if (b == nullptr || b->Tag == nullptr) return;
        int index = safe_cast<int>(b->Tag);
        if (index < 0 || index >= m_fields->Count || m_fields[index]->Box == nullptr) return;

        try
        {
            String^ value = m_fields[index]->Box->Text->Trim();
            String^ full = Path::IsPathRooted(value) ? value : Path::Combine(Path::GetDirectoryName(m_path), value);
            full = Path::GetFullPath(full);
            if (!File::Exists(full))
            {
                SetStatus("File not found: " + full);
                return;
            }
            System::Diagnostics::Process::Start(full);
            SetStatus("Opened " + full);
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not open the file: " + ex->Message);
        }
    }

    // boost severity threshold: 0 trace .. 5 fatal; a level is written when level >= threshold.
    String^ ConfigEditorWindow::LevelSummary(int threshold)
    {
        array<String^>^ names = gcnew array<String^> { "Trace", "Debug", "Info", "Warning", "Error", "Fatal" };
        if (threshold <= 0) return "All levels (Trace and above)  - edit";
        if (threshold >= 5) return "Fatal only  - edit";
        return names[threshold] + " and above  - edit";
    }

    void ConfigEditorWindow::SyncLevelUi(ConfigField^ f, int threshold)
    {
        if (f->Levels == nullptr || f->LevelButton == nullptr) return;
        for (int lv = 0; lv < 6; ++lv)
        {
            f->Levels[lv]->IsChecked = (lv >= threshold);
        }
        f->LevelButton->Content = LevelSummary(threshold);
    }

    void ConfigEditorWindow::OnLevelButtonClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        Button^ b = dynamic_cast<Button^>(sender);
        if (b == nullptr || b->Tag == nullptr) return;
        int index = safe_cast<int>(b->Tag);
        if (index >= 0 && index < m_fields->Count && m_fields[index]->Pop != nullptr)
        {
            m_fields[index]->Pop->IsOpen = true;
        }
    }

    void ConfigEditorWindow::OnLevelItemClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        if (m_building) return;
        CheckBox^ item = dynamic_cast<CheckBox^>(sender);
        if (item == nullptr || item->Tag == nullptr) return;
        int code = safe_cast<int>(item->Tag);
        int index = code / 10;
        int level = code % 10;
        if (index < 0 || index >= m_fields->Count) return;

        // Checking a level includes it and everything above; unchecking excludes it and everything below.
        bool on = item->IsChecked.HasValue && item->IsChecked.Value;
        int threshold = on ? level : level + 1;
        if (threshold > 5) threshold = 5;   // Fatal is always written
        SyncLevelUi(m_fields[index], threshold);
        ApplyToken(index, threshold.ToString());
    }

    void ConfigEditorWindow::OnSwatchClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ /*e*/)
    {
        Border^ swatch = dynamic_cast<Border^>(sender);
        if (swatch == nullptr || swatch->Tag == nullptr) return;
        int index = safe_cast<int>(swatch->Tag);
        if (index < 0 || index >= m_fields->Count || m_fields[index]->Box == nullptr) return;

        System::Windows::Forms::ColorDialog^ dialog = gcnew System::Windows::Forms::ColorDialog();
        try
        {
            dialog->FullOpen = true;
            String^ current = m_fields[index]->Box->Text;
            if (IsColorText(current))
            {
                System::Windows::Media::Color c = safe_cast<System::Windows::Media::Color>(System::Windows::Media::ColorConverter::ConvertFromString(current));
                dialog->Color = System::Drawing::Color::FromArgb(c.R, c.G, c.B);
            }
            if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                System::Drawing::Color picked = dialog->Color;
                m_fields[index]->Box->Text = String::Format("#{0:X2}{1:X2}{2:X2}", picked.R, picked.G, picked.B);   // triggers the splice
            }
        }
        finally
        {
            delete dialog;
        }
    }

    void ConfigEditorWindow::OnTabChanged(Object^ sender, SelectionChangedEventArgs^ e)
    {
        // SelectionChanged bubbles up from inner controls; only react to the tab strip itself.
        if (!Object::ReferenceEquals(e->OriginalSource, m_tabs)) return;
        if (m_tabs->SelectedIndex == 0)
        {
            RebuildForm();   // pick up anything typed on the Raw text tab
        }
    }

    ConfigEditorWindow::ConfigEditorWindow(Window^ owner, String^ xamlRoot, String^ serverName, String^ path)
    {
        m_fields     = gcnew System::Collections::Generic::List<ConfigField^>();
        m_xamlRoot   = xamlRoot;
        m_serverName = serverName;
        m_path       = path;
        m_backedUp   = false;
        m_loading    = false;

        LoadXaml(owner);
        LoadFile();
    }

    void ConfigEditorWindow::Show()
    {
        m_window->Show();
        m_window->Activate();
    }

    void ConfigEditorWindow::LoadXaml(Window^ owner)
    {
        String^ file = Path::Combine(m_xamlRoot, "ConfigEditorWindow.xaml");
        ParserContext^ context = gcnew ParserContext();
        context->BaseUri = gcnew Uri(file, UriKind::Absolute);   // lets the relative Theme.xaml merge resolve

        FileStream^ stream = gcnew FileStream(file, FileMode::Open, FileAccess::Read, FileShare::Read);
        try
        {
            m_window = dynamic_cast<Window^>(XamlReader::Load(stream, context));
        }
        finally
        {
            stream->Close();
        }
        if (m_window == nullptr)
        {
            throw gcnew InvalidOperationException("ConfigEditorWindow.xaml: the root must be a <Window>.");
        }
        m_window->Owner = owner;

        m_text     = safe_cast<TextBox^>(m_window->FindName("CfgTextBox"));
        m_title    = safe_cast<TextBlock^>(m_window->FindName("CfgTitleText"));
        m_pathText = safe_cast<TextBlock^>(m_window->FindName("CfgPathText"));
        m_status   = safe_cast<TextBlock^>(m_window->FindName("CfgStatusText"));
        m_save     = safe_cast<Button^>(m_window->FindName("CfgSaveButton"));
        m_validate = safe_cast<Button^>(m_window->FindName("CfgValidateButton"));
        m_revert   = safe_cast<Button^>(m_window->FindName("CfgRevertButton"));
        m_open     = safe_cast<Button^>(m_window->FindName("CfgOpenButton"));
        m_tabs      = safe_cast<TabControl^>(m_window->FindName("CfgTabs"));
        m_formPanel = safe_cast<StackPanel^>(m_window->FindName("CfgFormPanel"));
        if (m_text == nullptr || m_save == nullptr || m_validate == nullptr || m_revert == nullptr || m_open == nullptr ||
            m_title == nullptr || m_pathText == nullptr || m_status == nullptr || m_tabs == nullptr || m_formPanel == nullptr)
        {
            throw gcnew InvalidOperationException("ConfigEditorWindow.xaml is missing a required control.");
        }

        m_text->TextChanged += gcnew TextChangedEventHandler(this, &ConfigEditorWindow::OnTextChanged);
        m_tabs->SelectionChanged += gcnew SelectionChangedEventHandler(this, &ConfigEditorWindow::OnTabChanged);
        m_save->Click       += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnSaveClick);
        m_validate->Click   += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnValidateClick);
        m_revert->Click     += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnRevertClick);
        m_open->Click       += gcnew RoutedEventHandler(this, &ConfigEditorWindow::OnOpenClick);
        m_window->KeyDown   += gcnew System::Windows::Input::KeyEventHandler(this, &ConfigEditorWindow::OnKeyDown);
        m_window->Closing   += gcnew System::ComponentModel::CancelEventHandler(this, &ConfigEditorWindow::OnClosing);
    }

    void ConfigEditorWindow::LoadFile()
    {
        m_loading = true;
        try
        {
            array<Byte>^ bytes = File::ReadAllBytes(m_path);
            m_hadBom = bytes->Length >= 3 && bytes[0] == 0xEF && bytes[1] == 0xBB && bytes[2] == 0xBF;
            String^ raw = (gcnew UTF8Encoding(false))->GetString(bytes, m_hadBom ? 3 : 0, bytes->Length - (m_hadBom ? 3 : 0));
            m_crlf = raw->Contains("\r\n");

            // The TextBox works with CRLF newlines; remember how the file was written.
            String^ text = m_crlf ? raw : raw->Replace("\n", "\r\n");
            m_text->Text = text;
            m_original = m_text->Text;   // read back: the control may normalise newlines
            m_pathText->Text = m_path;
            SetStatus("Loaded. Restart the server for changes to take effect.");
        }
        catch (Exception^ ex)
        {
            m_text->Text = String::Empty;
            m_original = String::Empty;
            SetStatus("Could not read the file: " + ex->Message);
        }
        finally
        {
            m_loading = false;
        }
        UpdateTitle();
        RebuildForm();   // the Form tab is the default view
    }

    bool ConfigEditorWindow::IsDirty()
    {
        return !String::Equals(m_text->Text, m_original);
    }

    void ConfigEditorWindow::UpdateTitle()
    {
        String^ name = "Config - " + m_serverName;
        m_title->Text = name;
        m_window->Title = IsDirty() ? (name + " *") : name;
    }

    void ConfigEditorWindow::SetStatus(String^ text)
    {
        m_status->Text = text;
    }

    // null = valid JSON; otherwise the parser's message.
    String^ ConfigEditorWindow::CheckJson(String^ text)
    {
        try
        {
            System::Web::Script::Serialization::JavaScriptSerializer^ parser = gcnew System::Web::Script::Serialization::JavaScriptSerializer();
            parser->DeserializeObject(text);
            return nullptr;
        }
        catch (Exception^ ex)
        {
            return ex->Message;
        }
    }

    bool ConfigEditorWindow::SaveFile()
    {
        String^ error = CheckJson(m_text->Text);
        if (error != nullptr)
        {
            System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(
                m_window, "This is not valid JSON:\n\n" + error + "\n\nThe server may fail to start with it. Save anyway?",
                "Invalid JSON", System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
            if (answer != System::Windows::MessageBoxResult::Yes)
            {
                return false;
            }
        }

        try
        {
            if (!m_backedUp)
            {
                File::Copy(m_path, m_path + ".bak", true);   // keeps the state from before this session's first save
                m_backedUp = true;
            }

            String^ text = m_crlf ? m_text->Text : m_text->Text->Replace("\r\n", "\n");
            array<Byte>^ body = (gcnew UTF8Encoding(false))->GetBytes(text);
            array<Byte>^ output = body;
            if (m_hadBom)
            {
                output = gcnew array<Byte>(body->Length + 3);
                output[0] = 0xEF; output[1] = 0xBB; output[2] = 0xBF;
                Array::Copy(body, 0, output, 3, body->Length);
            }
            File::WriteAllBytes(m_path, output);

            m_original = m_text->Text;
            UpdateTitle();
            SetStatus((error == nullptr ? gcnew String("Saved. ") : gcnew String("Saved (invalid JSON!). ")) +
                      "Restart the server for changes to take effect. Backup: " + Path::GetFileName(m_path) + ".bak");
            return true;
        }
        catch (Exception^ ex)
        {
            SetStatus("Could not save: " + ex->Message);
            return false;
        }
    }

    void ConfigEditorWindow::OnTextChanged(Object^ /*sender*/, TextChangedEventArgs^ /*e*/)
    {
        if (!m_loading)
        {
            UpdateTitle();
        }
    }

    void ConfigEditorWindow::OnSaveClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        SaveFile();
    }

    void ConfigEditorWindow::OnValidateClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        String^ error = CheckJson(m_text->Text);
        SetStatus(error == nullptr ? gcnew String("Valid JSON.") : ("Invalid JSON: " + error));
    }

    void ConfigEditorWindow::OnRevertClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (IsDirty())
        {
            System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(
                m_window, "Discard your edits and reload the file from disk?", "Revert",
                System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Question);
            if (answer != System::Windows::MessageBoxResult::Yes)
            {
                return;
            }
        }
        LoadFile();
    }

    void ConfigEditorWindow::OnOpenClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try { System::Diagnostics::Process::Start(m_path); }
        catch (Exception^ ex) { SetStatus("Could not open the file: " + ex->Message); }
    }

    void ConfigEditorWindow::OnKeyDown(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::S &&
            (System::Windows::Input::Keyboard::Modifiers & System::Windows::Input::ModifierKeys::Control) ==
                System::Windows::Input::ModifierKeys::Control)
        {
            SaveFile();
            e->Handled = true;
        }
    }

    void ConfigEditorWindow::OnClosing(Object^ /*sender*/, System::ComponentModel::CancelEventArgs^ e)
    {
        if (!IsDirty())
        {
            return;
        }
        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(
            m_window, "Save your changes to " + Path::GetFileName(m_path) + " (" + m_serverName + ")?", "Unsaved changes",
            System::Windows::MessageBoxButton::YesNoCancel, System::Windows::MessageBoxImage::Question);
        if (answer == System::Windows::MessageBoxResult::Cancel)
        {
            e->Cancel = true;
        }
        else if (answer == System::Windows::MessageBoxResult::Yes && !SaveFile())
        {
            e->Cancel = true;
        }
    }
}
