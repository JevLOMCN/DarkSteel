#pragma once

// =============================================================================
// DarkSteelStudio - ClientPanel  (Client page)
//
// Starts the Mir 5 client (ProjectDS.exe) from the tool, the same command the Mir5_Local.bat uses:
//   <Client>\ProjectDS\Binaries\Win64\ProjectDS.exe -game -resx=<w> -resy=<h> [-windowed]
//                                                   -GameServer=<host>:<port> [extra args]
// and manages the client's Saved\Config\Windows\Engine.ini, which the client needs to accept the
// server's self-signed certificate:
//   [HTTP.Curl]  bVerifyPeer=false                         (when "skip TLS verification" is ticked)
//   [SSL]        DebuggingCertificatePath=<absolute .pem>  (forward slashes, as the client expects)
// The client deletes that file now and then, so the launcher can recreate it ("auto" option) and the file
// is written read-only. Only these two keys are touched; other lines of an existing file are kept.
//
// The client folder and the certificate path are saved relative to the tool when possible (StudioSettings).
// Controls: Xaml\Pages\Client.xaml (the Client page; names starting with "Client"). It has its own Save button.
// =============================================================================

#include "StudioSettings.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Windows;
    using namespace System::Windows::Controls;

    public ref class ClientPanel {
    public:
        ClientPanel(Window^ window, StudioSettings^ settings, String^ configPath, System::Action<String^>^ status);

        void Bind(FrameworkElement^ page);   // find the controls, fill them from the settings, wire the events
        void Apply();                        // copy the controls back into the settings (the Save button then persists them)

        // ---- helpers other code can reuse ----
        static String^ ExePath(String^ clientDir);
        static String^ EngineIniPath(String^ clientDir);

    private:
        Window^                   m_window;
        StudioSettings^           m_settings;
        String^                   m_configPath;
        System::Action<String^>^  m_status;
        bool                      m_binding;     // filling the controls; ignore their change events

        TextBox^   m_clientBox;   Button^ m_browseClient;
        TextBox^   m_hostBox;     TextBox^ m_portBox;
        TextBox^   m_resXBox;     TextBox^ m_resYBox;
        CheckBox^  m_windowed;
        TextBox^   m_extraBox;
        TextBox^   m_certBox;     Button^ m_browseCert;
        CheckBox^  m_skipVerify;  CheckBox^ m_autoIni;
        Button^    m_writeIni;    Button^ m_launch;    Button^ m_openLogs;    Button^ m_save;
        TextBlock^ m_command;     TextBlock^ m_iniStatus;

        String^ ConfigDir();
        String^ ClientDir();                       // absolute client folder from the box ("" when empty)
        String^ CertFile();                        // absolute certificate path from the box, or the default next to the server config
        String^ BuildArguments();
        String^ BuildCommandLine();
        String^ IniStatus();
        void    Refresh();                         // command preview + Engine.ini status
        String^ WriteEngineIni();                  // creates/updates Engine.ini; returns a message
        static String^ UpsertIni(String^ text, String^ section, String^ key, String^ value);
        static int ParseInt(String^ text, int fallback, int min, int max);

        void OnAnyChanged(Object^ sender, RoutedEventArgs^ e);
        void OnAnyTextChanged(Object^ sender, TextChangedEventArgs^ e);
        void OnBrowseClientClick(Object^ sender, RoutedEventArgs^ e);
        void OnBrowseCertClick(Object^ sender, RoutedEventArgs^ e);
        void OnWriteIniClick(Object^ sender, RoutedEventArgs^ e);
        void OnLaunchClick(Object^ sender, RoutedEventArgs^ e);
        void OnOpenLogsClick(Object^ sender, RoutedEventArgs^ e);
        void OnSaveClick(Object^ sender, RoutedEventArgs^ e);
    };
}
