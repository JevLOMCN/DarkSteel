#pragma once

// =============================================================================
// DarkSteelStudio - ServerControl
//
// Start / stop / status for the Mir 5 server processes:
//   Maestro, Gateway (the HTTP API the client bootstraps against) and the Game Server (M5.Server).
//   (Redis/Memurai is no longer needed by any Mir 5 service.)
// They are started from the build output  <Server folder>\Bin\<Project>\<Project>.exe  with that folder as
// the working directory (the same way they are run from Server\Bin today). A server is "running" when a
// process with that exe name exists under the server folder, or when a dotnet process (dev.bat uses
// "dotnet watch run") has the project dll/folder in its command line.
// Status polling and actions are blocking: call them from a worker thread.
// Killing a process started by an elevated launcher needs DarkSteel Studio to run as
// administrator; failures are returned as text, never thrown.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;

    // One grid row. Properties only (the DataGrid binds to them).
    public ref class ServerRow {
    public:
        property int     Index;
        property String^ Name;
        property String^ ProcessName;
        property String^ Status;     // Running / Stopped / Not installed ...
        property String^ Pid;
        property String^ Uptime;
        property String^ Memory;
    };

    public ref class ServerDef {
    public:
        ServerDef(String^ name, String^ image, String^ launch, String^ project, int kind)
        {
            Name = name; Image = image; Launch = launch; Project = project; Kind = kind;
        }
        String^ Name;
        String^ Image;     // process image name, e.g. M5.Server.exe
        String^ Launch;    // path relative to the server folder of the exe to start (empty for the service)
        String^ Project;   // project folder under Bin, e.g. M5.Server (logs live in Bin\<Project>\logs); also matched in a dotnet command line
        int     Kind;      // 0 plain exe, 3 Windows service
    };

    public ref class ServerControl {
    public:
        ServerControl();

        // The Mir 5 "Server" folder (contains Bin\<Project>\<Project>.exe and Bin\Config).
        property String^ ServersPath;
        // true = Open Internal: start batch files/servers with no console window.
        property bool    LaunchHidden;

        static int Count();
        static String^ NameOf(int index);

        // Order used by "Start All"; "Stop All" uses the reverse.
        static array<int>^ StartOrder();
        static array<int>^ StopOrder();

        // Current state of every server.
        List<ServerRow^>^ Snapshot();

        // Each returns a one-line result ("Started World", "Game: access denied - run as administrator", ...).
        String^ Start(int index);
        String^ Stop(int index);

        // <ServersPath>\Bin\Config\settings.json, shared by every Mir 5 service (null when the file is missing).
        String^ ConfigPath(int index);

        // <ServersPath>\Bin\<Project>\logs for that server.
        String^ LogFolder(int index);
        // Newest non-empty log_*.txt in LogFolder (then any .txt/.log; falls back to the newest file, empty or not);
        // null when there is no folder or no log file.
        String^ LatestLog(int index);

    private:
        static List<ServerDef^>^ s_defs;
        static void EnsureDefs();   // fills s_defs on first use

        Dictionary<int, List<int>^>^ Find(Dictionary<int, DateTime>^ started);
        bool UnderServersPath(String^ exePath);
    };
}
