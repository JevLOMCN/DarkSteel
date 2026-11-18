#include "ClientPanel.h"
#include "StudioLog.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Diagnostics;
    using namespace System::Collections::Generic;

    // =========================================================================
    // Construction / binding
    // =========================================================================

    ClientPanel::ClientPanel(Window^ window, StudioSettings^ settings, String^ configPath, System::Action<String^>^ status)
        : m_window(window), m_settings(settings), m_configPath(configPath), m_status(status), m_binding(false)
    {
    }

    static Object^ Find(FrameworkElement^ page, String^ name)
    {
        Object^ found = page->FindName(name);
        if (found == nullptr)
        {
            throw gcnew InvalidOperationException("Client.xaml is missing a control named '" + name + "'.");
        }
        return found;
    }

    String^ ClientPanel::ExePath(String^ clientDir)
    {
        return Path::Combine(clientDir, "ProjectDS\\Binaries\\Win64\\ProjectDS.exe");
    }

    String^ ClientPanel::EngineIniPath(String^ clientDir)
    {
        return Path::Combine(clientDir, "ProjectDS\\Saved\\Config\\Windows\\Engine.ini");
    }

    void ClientPanel::Bind(FrameworkElement^ page)
    {
        m_clientBox    = safe_cast<TextBox^>(Find(page, "ClientPathBox"));
        m_browseClient = safe_cast<Button^>(Find(page, "BrowseClientButton"));
        m_hostBox      = safe_cast<TextBox^>(Find(page, "ClientHostBox"));
        m_portBox      = safe_cast<TextBox^>(Find(page, "ClientPortBox"));
        m_resXBox      = safe_cast<TextBox^>(Find(page, "ClientResXBox"));
        m_resYBox      = safe_cast<TextBox^>(Find(page, "ClientResYBox"));
        m_windowed     = safe_cast<CheckBox^>(Find(page, "ClientWindowedCheck"));
        m_extraBox     = safe_cast<TextBox^>(Find(page, "ClientExtraArgsBox"));
        m_certBox      = safe_cast<TextBox^>(Find(page, "ClientCertBox"));
        m_browseCert   = safe_cast<Button^>(Find(page, "BrowseCertButton"));
        m_skipVerify   = safe_cast<CheckBox^>(Find(page, "ClientSkipVerifyCheck"));
        m_autoIni      = safe_cast<CheckBox^>(Find(page, "ClientAutoIniCheck"));
        m_writeIni     = safe_cast<Button^>(Find(page, "ClientWriteIniButton"));
        m_launch       = safe_cast<Button^>(Find(page, "ClientLaunchButton"));
        m_openLogs     = safe_cast<Button^>(Find(page, "ClientOpenLogsButton"));
        m_save         = safe_cast<Button^>(Find(page, "ClientSaveButton"));
        m_command      = safe_cast<TextBlock^>(Find(page, "ClientCommandText"));
        m_iniStatus    = safe_cast<TextBlock^>(Find(page, "ClientIniStatusText"));

        String^ configDir = ConfigDir();
        m_binding = true;
        m_clientBox->Text = StudioSettings::StorePath(m_settings->ClientPath, configDir);   // shown the way it is saved
        m_hostBox->Text   = m_settings->ClientHost;
        m_portBox->Text   = m_settings->ClientPort.ToString();
        m_resXBox->Text   = m_settings->ClientResX.ToString();
        m_resYBox->Text   = m_settings->ClientResY.ToString();
        m_windowed->IsChecked   = m_settings->ClientWindowed;
        m_extraBox->Text  = m_settings->ClientExtraArgs;
        m_certBox->Text   = StudioSettings::StorePath(m_settings->ClientCertPath, configDir);
        m_skipVerify->IsChecked = m_settings->ClientSkipTlsVerify;
        m_autoIni->IsChecked    = m_settings->ClientAutoEngineIni;
        m_binding = false;

        TextChangedEventHandler^ textChanged = gcnew TextChangedEventHandler(this, &ClientPanel::OnAnyTextChanged);
        m_clientBox->TextChanged += textChanged;  m_hostBox->TextChanged   += textChanged;
        m_portBox->TextChanged   += textChanged;  m_resXBox->TextChanged   += textChanged;
        m_resYBox->TextChanged   += textChanged;  m_extraBox->TextChanged  += textChanged;
        m_certBox->TextChanged   += textChanged;

        RoutedEventHandler^ changed = gcnew RoutedEventHandler(this, &ClientPanel::OnAnyChanged);
        m_windowed->Click += changed;  m_skipVerify->Click += changed;  m_autoIni->Click += changed;

        m_browseClient->Click += gcnew RoutedEventHandler(this, &ClientPanel::OnBrowseClientClick);
        m_browseCert->Click   += gcnew RoutedEventHandler(this, &ClientPanel::OnBrowseCertClick);
        m_writeIni->Click     += gcnew RoutedEventHandler(this, &ClientPanel::OnWriteIniClick);
        m_launch->Click       += gcnew RoutedEventHandler(this, &ClientPanel::OnLaunchClick);
        m_openLogs->Click     += gcnew RoutedEventHandler(this, &ClientPanel::OnOpenLogsClick);
        m_save->Click         += gcnew RoutedEventHandler(this, &ClientPanel::OnSaveClick);

        Refresh();
    }

    // =========================================================================
    // Settings <-> controls
    // =========================================================================

    String^ ClientPanel::ConfigDir()
    {
        return StudioSettings::ConfigDir(m_configPath);
    }

    int ClientPanel::ParseInt(String^ text, int fallback, int min, int max)
    {
        int value = 0;
        if (!Int32::TryParse(text->Trim(), value)) return fallback;
        return Math::Max(min, Math::Min(max, value));
    }

    void ClientPanel::Apply()
    {
        String^ configDir = ConfigDir();
        m_settings->ClientPath      = StudioSettings::ResolvePath(m_clientBox->Text, configDir);
        m_settings->ClientHost      = m_hostBox->Text->Trim()->Length == 0 ? "127.0.0.1" : m_hostBox->Text->Trim();
        m_settings->ClientPort      = ParseInt(m_portBox->Text, 31101, 1, 65535);
        m_settings->ClientResX      = ParseInt(m_resXBox->Text, 1280, 320, 16384);
        m_settings->ClientResY      = ParseInt(m_resYBox->Text, 720, 240, 16384);
        m_settings->ClientWindowed  = m_windowed->IsChecked.HasValue && m_windowed->IsChecked.Value;
        m_settings->ClientExtraArgs = m_extraBox->Text->Trim();
        m_settings->ClientCertPath  = StudioSettings::ResolvePath(m_certBox->Text, configDir);
        m_settings->ClientSkipTlsVerify = m_skipVerify->IsChecked.HasValue && m_skipVerify->IsChecked.Value;
        m_settings->ClientAutoEngineIni = m_autoIni->IsChecked.HasValue && m_autoIni->IsChecked.Value;
    }

    String^ ClientPanel::ClientDir()
    {
        return StudioSettings::ResolvePath(m_clientBox->Text, ConfigDir());
    }

    // The certificate in the box, or the one the server ships: <Server>\Config\dev-cert.pem, then <Server>\Bin\Config\dev-cert.pem.
    String^ ClientPanel::CertFile()
    {
        String^ configured = StudioSettings::ResolvePath(m_certBox->Text, ConfigDir());
        if (!String::IsNullOrEmpty(configured)) return configured;

        String^ server = m_settings->ServersPath;
        if (!String::IsNullOrWhiteSpace(server))
        {
            array<String^>^ candidates = gcnew array<String^> { Path::Combine(server, "Config\\dev-cert.pem"), Path::Combine(server, "Bin\\Config\\dev-cert.pem") };
            for each (String^ candidate in candidates)
            {
                if (File::Exists(candidate)) return candidate;
            }
        }
        return String::Empty;
    }

    // =========================================================================
    // Command line and Engine.ini
    // =========================================================================

    String^ ClientPanel::BuildArguments()
    {
        int port = ParseInt(m_portBox->Text, 31101, 1, 65535);
        String^ host = m_hostBox->Text->Trim()->Length == 0 ? "127.0.0.1" : m_hostBox->Text->Trim();

        StringBuilder^ sb = gcnew StringBuilder("-game");
        sb->Append(" -resx=")->Append(ParseInt(m_resXBox->Text, 1280, 320, 16384));
        sb->Append(" -resy=")->Append(ParseInt(m_resYBox->Text, 720, 240, 16384));
        if (m_windowed->IsChecked.HasValue && m_windowed->IsChecked.Value) sb->Append(" -windowed");
        sb->Append(" -GameServer=")->Append(host)->Append(":")->Append(port);
        String^ extra = m_extraBox->Text->Trim();
        if (extra->Length > 0) sb->Append(" ")->Append(extra);
        return sb->ToString();
    }

    String^ ClientPanel::BuildCommandLine()
    {
        String^ client = ClientDir();
        String^ exe = String::IsNullOrEmpty(client) ? "ProjectDS\\Binaries\\Win64\\ProjectDS.exe" : ExePath(client);
        return "\"" + exe + "\" " + BuildArguments();
    }

    // Replaces (or adds) "key=value" inside [section], keeping every other line.
    String^ ClientPanel::UpsertIni(String^ text, String^ section, String^ key, String^ value)
    {
        List<String^>^ lines = gcnew List<String^>(text->Replace("\r\n", "\n")->Split(L'\n'));
        // drop the empty element a trailing newline produces
        while (lines->Count > 0 && lines[lines->Count - 1]->Length == 0) lines->RemoveAt(lines->Count - 1);

        String^ header = "[" + section + "]";
        int sectionAt = -1;
        for (int i = 0; i < lines->Count; ++i)
        {
            if (String::Equals(lines[i]->Trim(), header, StringComparison::OrdinalIgnoreCase)) { sectionAt = i; break; }
        }

        String^ entry = key + "=" + value;
        if (sectionAt < 0)
        {
            if (lines->Count > 0) lines->Add(String::Empty);
            lines->Add(header);
            lines->Add(entry);
        }
        else
        {
            int end = lines->Count;
            for (int i = sectionAt + 1; i < lines->Count; ++i)
            {
                if (lines[i]->TrimStart()->StartsWith("[")) { end = i; break; }
            }
            bool replaced = false;
            for (int i = sectionAt + 1; i < end; ++i)
            {
                String^ line = lines[i]->Trim();
                if (line->StartsWith(key + "=", StringComparison::OrdinalIgnoreCase))
                {
                    lines[i] = entry;
                    replaced = true;
                    break;
                }
            }
            if (!replaced) lines->Insert(sectionAt + 1, entry);
        }

        return String::Join("\r\n", lines->ToArray()) + "\r\n";
    }

    // Creates Engine.ini (or patches the two managed keys), then marks it read-only so the client keeps it.
    String^ ClientPanel::WriteEngineIni()
    {
        String^ client = ClientDir();
        if (String::IsNullOrEmpty(client) || !Directory::Exists(client))
        {
            throw gcnew InvalidOperationException("Set the client folder first.");
        }

        String^ path = EngineIniPath(client);
        Directory::CreateDirectory(Path::GetDirectoryName(path));

        String^ text = String::Empty;
        bool existed = File::Exists(path);
        if (existed)
        {
            text = File::ReadAllText(path);
            File::SetAttributes(path, File::GetAttributes(path) & ~FileAttributes::ReadOnly);
        }

        bool skip = m_skipVerify->IsChecked.HasValue && m_skipVerify->IsChecked.Value;
        text = UpsertIni(text, "HTTP.Curl", "bVerifyPeer", skip ? "false" : "true");

        String^ cert = CertFile();
        if (!String::IsNullOrEmpty(cert))
        {
            // the engine reads forward slashes
            text = UpsertIni(text, "SSL", "DebuggingCertificatePath", cert->Replace(L'\\', L'/'));
        }

        File::WriteAllText(path, text, gcnew UTF8Encoding(false));
        File::SetAttributes(path, File::GetAttributes(path) | FileAttributes::ReadOnly);

        String^ message = (existed ? "Updated " : "Created ") + path;
        if (String::IsNullOrEmpty(cert)) message += "  (no certificate path: none set and no dev-cert.pem found next to the server config)";
        StudioLog::Info("ClientPanel: " + message);
        return message;
    }

    String^ ClientPanel::IniStatus()
    {
        String^ client = ClientDir();
        if (String::IsNullOrEmpty(client)) return "Engine.ini: set the client folder first.";
        if (!Directory::Exists(client))    return "Engine.ini: the client folder does not exist.";

        String^ path = EngineIniPath(client);
        if (!File::Exists(path)) return "Engine.ini: missing (" + path + ")  -  Write Engine.ini creates it.";

        String^ cert = CertFile();
        String^ text = File::ReadAllText(path);
        String^ wanted = String::IsNullOrEmpty(cert) ? nullptr : "DebuggingCertificatePath=" + cert->Replace(L'\\', L'/');
        bool certOk = wanted == nullptr || text->IndexOf(wanted, StringComparison::OrdinalIgnoreCase) >= 0;
        bool skip = m_skipVerify->IsChecked.HasValue && m_skipVerify->IsChecked.Value;
        bool verifyOk = text->IndexOf(skip ? "bVerifyPeer=false" : "bVerifyPeer=true", StringComparison::OrdinalIgnoreCase) >= 0;

        String^ note = (certOk && verifyOk) ? "present and matches these settings" : "present but DIFFERS from these settings (Write Engine.ini updates it)";
        if (!String::IsNullOrEmpty(cert) && !File::Exists(cert)) note += "; the certificate file does not exist";
        return "Engine.ini: " + note + "  (" + path + ")";
    }

    void ClientPanel::Refresh()
    {
        if (m_command == nullptr) return;
        m_command->Text = BuildCommandLine();
        m_iniStatus->Text = IniStatus();
        String^ client = ClientDir();
        bool haveExe = !String::IsNullOrEmpty(client) && File::Exists(ExePath(client));
        m_launch->IsEnabled   = haveExe;
        m_writeIni->IsEnabled = !String::IsNullOrEmpty(client) && Directory::Exists(client);
        m_openLogs->IsEnabled = !String::IsNullOrEmpty(client) && Directory::Exists(client);
        m_launch->ToolTip     = haveExe ? "Start the client with the command shown below"
                                        : "ProjectDS\\Binaries\\Win64\\ProjectDS.exe was not found in the client folder";
    }

    // =========================================================================
    // Events
    // =========================================================================

    void ClientPanel::OnAnyChanged(Object^ sender, RoutedEventArgs^ e)
    {
        if (!m_binding) Refresh();
    }

    void ClientPanel::OnAnyTextChanged(Object^ sender, TextChangedEventArgs^ e)
    {
        if (!m_binding) Refresh();
    }

    void ClientPanel::OnBrowseClientClick(Object^ sender, RoutedEventArgs^ e)
    {
        System::Windows::Forms::FolderBrowserDialog^ dialog = gcnew System::Windows::Forms::FolderBrowserDialog();
        try
        {
            dialog->Description = "Select the client Windows folder (the one that contains ProjectDS\\Binaries\\Win64\\ProjectDS.exe)";
            dialog->ShowNewFolderButton = false;
            String^ current = ClientDir();
            if (!String::IsNullOrEmpty(current) && Directory::Exists(current)) dialog->SelectedPath = current;
            if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                m_clientBox->Text = StudioSettings::StorePath(dialog->SelectedPath, ConfigDir());
            }
        }
        finally
        {
            delete dialog;
        }
    }

    void ClientPanel::OnBrowseCertClick(Object^ sender, RoutedEventArgs^ e)
    {
        System::Windows::Forms::OpenFileDialog^ dialog = gcnew System::Windows::Forms::OpenFileDialog();
        try
        {
            dialog->Title  = "Select the certificate (.pem) the client should trust";
            dialog->Filter = "Certificates (*.pem;*.crt;*.cer)|*.pem;*.crt;*.cer|All files (*.*)|*.*";
            String^ current = CertFile();
            if (!String::IsNullOrEmpty(current) && File::Exists(current))
            {
                dialog->InitialDirectory = Path::GetDirectoryName(current);
                dialog->FileName = Path::GetFileName(current);
            }
            if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                m_certBox->Text = StudioSettings::StorePath(dialog->FileName, ConfigDir());
            }
        }
        finally
        {
            delete dialog;
        }
    }

    void ClientPanel::OnWriteIniClick(Object^ sender, RoutedEventArgs^ e)
    {
        try
        {
            String^ message = WriteEngineIni();
            Refresh();
            if (m_status != nullptr) m_status->Invoke(message);
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("ClientPanel.WriteEngineIni", ex);
            if (m_status != nullptr) m_status->Invoke("Could not write Engine.ini: " + ex->Message);
        }
    }

    void ClientPanel::OnLaunchClick(Object^ sender, RoutedEventArgs^ e)
    {
        try
        {
            Apply();   // launch with what is on screen; Save persists it
            String^ client = ClientDir();
            String^ exe = ExePath(client);
            if (!File::Exists(exe))
            {
                if (m_status != nullptr) m_status->Invoke("Client not found: " + exe);
                return;
            }

            String^ iniNote = String::Empty;
            if (m_settings->ClientAutoEngineIni)
            {
                iniNote = "  |  " + WriteEngineIni();
            }

            ProcessStartInfo^ info = gcnew ProcessStartInfo(exe, BuildArguments());
            info->WorkingDirectory = client;      // the .bat runs from here too
            info->UseShellExecute = false;
            Process^ process = Process::Start(info);
            StudioLog::Info("ClientPanel: launched " + BuildCommandLine() + " (pid " + process->Id + ")");
            Refresh();
            if (m_status != nullptr) m_status->Invoke("Client started (pid " + process->Id + ")" + iniNote);
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("ClientPanel.Launch", ex);
            if (m_status != nullptr) m_status->Invoke("Could not start the client: " + ex->Message);
        }
    }

    void ClientPanel::OnSaveClick(Object^ sender, RoutedEventArgs^ e)
    {
        try
        {
            Apply();
            m_settings->Save(m_configPath);
            Refresh();
            if (m_status != nullptr) m_status->Invoke("Client settings saved to " + m_configPath);
        }
        catch (Exception^ ex)
        {
            StudioLog::Error("ClientPanel.Save", ex);
            if (m_status != nullptr) m_status->Invoke("Could not save the client settings: " + ex->Message);
        }
    }

    void ClientPanel::OnOpenLogsClick(Object^ sender, RoutedEventArgs^ e)
    {
        try
        {
            String^ logs = Path::Combine(ClientDir(), "ProjectDS\\Saved\\Logs");
            Process::Start("explorer.exe", "\"" + (Directory::Exists(logs) ? logs : ClientDir()) + "\"");
        }
        catch (Exception^ ex)
        {
            if (m_status != nullptr) m_status->Invoke("Could not open the folder: " + ex->Message);
        }
    }
}
