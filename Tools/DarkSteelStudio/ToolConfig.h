#pragma once
#include <string>

// =============================================================================
// DarkSteelStudio - ToolConfig
//
// Persistent settings for the studio, stored as JSON in
// DarkSteelStudio.config.json next to the executable. This header and its .cpp are
// plain ISO C++17 (no managed types, no <Windows.h>) even though they are
// compiled inside a /clr project - the managed side (StudioSettings.h) marshals
// to/from this struct. Keep the field list in sync with DarkSteelStudio.config.json.
// =============================================================================
struct ToolConfig
{
    // The Mir 5 "Server" folder (it contains Bin\Data, Bin\Config ...). Empty = auto-detect
    // by walking up from the exe looking for Server\Bin\Data. Stored relative to the config
    // file when possible (see StudioSettings), so a checkout on another drive/path still works.
    std::wstring ServersPath;

    // Folder holding the extracted icons (it contains an "Items" sub-folder of <ID_Icon>.png).
    // Empty = auto-detect the "Images" folder next to the tool by walking up from the exe.
    std::wstring ImagesPath;

    // MySQL game DB connection.
    std::wstring DbHost;
    int DbPort;
    std::wstring DbUser;
    std::wstring DbPass;

    // Schema holding the game stored procedures. The latest DB.sql defines the
    // procs under several schemas; live uses mm_game_db_release.
    std::wstring GameSchema;

    // Schema holding the front/website accounts (account_tb, account_grade_tb, account_block_tb).
    std::wstring FrontSchema;

    // Folder the runtime-loaded .xaml files are read from. Empty = the "Xaml"
    // folder next to the exe. Point it at the project's Xaml folder to edit the
    // UI live without rebuilding.
    std::wstring XamlRoot;

    // Navigation page file (e.g. "Servers.xaml") shown on last exit.
    std::wstring LastSection;

    // Main window geometry restored at startup.
    int WindowWidth;
    int WindowHeight;
    bool WindowMaximized;

    // Servers page: launch the server batch files hidden (Open Internal) instead of
    // in their own console windows (Open External).
    bool ServerLaunchHidden;

    // ---- Mir 5 client launcher (Settings page, "CLIENT" card) ----
    std::wstring ClientPath;        // the client "Windows" folder (contains ProjectDS\Binaries\Win64\ProjectDS.exe); relative-able
    std::wstring ClientHost;        // -GameServer=<host>:<port>
    int          ClientPort;
    int          ClientResX;
    int          ClientResY;
    bool         ClientWindowed;
    std::wstring ClientExtraArgs;   // appended to the command line
    std::wstring ClientCertPath;    // PEM written to Engine.ini [SSL] DebuggingCertificatePath; empty = <Server>\Config\dev-cert.pem; relative-able
    bool         ClientSkipTlsVerify;   // Engine.ini [HTTP.Curl] bVerifyPeer=false
    bool         ClientAutoEngineIni;   // create/refresh Engine.ini when launching

    // Loads from configPath (a JSON file). If the file doesn't exist, can't be
    // opened, or fails to parse, returns a ToolConfig with the defaults
    // (does NOT throw). Missing or mistyped members keep their defaults.
    static ToolConfig Load(const std::wstring& configPath);

    // Writes this config to configPath as pretty-printed JSON (creates the
    // parent directory if missing). Best-effort: never throws, errors ignored.
    void Save(const std::wstring& configPath) const;
};
