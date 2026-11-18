#include "ServerControl.h"
#include <msclr/lock.h>

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Diagnostics;
    using namespace System::Management;
    using namespace System::ServiceProcess;
    using namespace System::Threading;

    void ServerControl::EnsureDefs()
    {
        msclr::lock guard(ServerControl::typeid);   // the type object is a safe process-wide lock
        if (s_defs != nullptr)
        {
            return;
        }
        List<ServerDef^>^ defs = gcnew List<ServerDef^>();
        s_defs = defs;
        s_defs->Add(gcnew ServerDef("Maestro",          "M5.Maestro.exe",  "Bin\\M5.Maestro\\M5.Maestro.exe",       "M5.Maestro",  0));
        s_defs->Add(gcnew ServerDef("Gateway",          "M5.Gateway.exe",  "Bin\\M5.Gateway\\M5.Gateway.exe",       "M5.Gateway",  0));
        s_defs->Add(gcnew ServerDef("Game Server",      "M5.Server.exe",   "Bin\\M5.Server\\M5.Server.exe",         "M5.Server",   0));
    }

    ServerControl::ServerControl()
    {
        ServersPath = String::Empty;
        EnsureDefs();
    }
    int ServerControl::Count() { EnsureDefs(); return s_defs->Count; }

    String^ ServerControl::NameOf(int index)
    {
        EnsureDefs();
        return (index >= 0 && index < s_defs->Count) ? s_defs[index]->Name : String::Empty;
    }

    array<int>^ ServerControl::StartOrder()
    {
        EnsureDefs();
        array<int>^ order = gcnew array<int>(s_defs->Count);
        for (int i = 0; i < order->Length; ++i) order[i] = i;
        return order;
    }

    array<int>^ ServerControl::StopOrder()
    {
        EnsureDefs();
        // Reverse of the start order.
        array<int>^ order = gcnew array<int>(s_defs->Count);
        for (int i = 0; i < order->Length; ++i) order[i] = s_defs->Count - 1 - i;
        return order;
    }

    bool ServerControl::UnderServersPath(String^ exePath)
    {
        if (String::IsNullOrWhiteSpace(ServersPath) || String::IsNullOrEmpty(exePath))
        {
            return true;   // nothing to compare against
        }
        return exePath->StartsWith(ServersPath->TrimEnd(L'\\', L'/'), StringComparison::OrdinalIgnoreCase);
    }

    // def index -> pids of running matching processes (and start times by pid).
    Dictionary<int, List<int>^>^ ServerControl::Find(Dictionary<int, DateTime>^ started)
    {
        Dictionary<int, List<int>^>^ result = gcnew Dictionary<int, List<int>^>();

        // our own exes plus dotnet.exe (dev.bat runs "dotnet watch run" / "dotnet <project>.dll")
        HashSet<String^>^ images = gcnew HashSet<String^>(StringComparer::OrdinalIgnoreCase);
        images->Add("dotnet.exe");
        for each (ServerDef^ d in s_defs)
        {
            if (d->Kind != 3) images->Add(d->Image);
        }
        String^ whereText = String::Empty;
        for each (String^ image in images)
        {
            whereText = whereText + (whereText->Length > 0 ? gcnew String(" OR ") : String::Empty) + "Name='" + image + "'";
        }

        ManagementObjectSearcher^ searcher = gcnew ManagementObjectSearcher(
            "SELECT ProcessId, Name, CommandLine, ExecutablePath, CreationDate FROM Win32_Process WHERE " + whereText);
        try
        {
            for each (ManagementObject^ mo in searcher->Get())
            {
                String^ name = dynamic_cast<String^>(mo["Name"]);
                String^ cmd  = dynamic_cast<String^>(mo["CommandLine"]);
                String^ path = dynamic_cast<String^>(mo["ExecutablePath"]);
                if (name == nullptr) continue;

                bool isDotnet = String::Equals(name, "dotnet.exe", StringComparison::OrdinalIgnoreCase);
                int pid = Convert::ToInt32(mo["ProcessId"]);

                for (int i = 0; i < s_defs->Count; ++i)
                {
                    ServerDef^ d = s_defs[i];
                    if (d->Kind == 3) continue;

                    bool hit;
                    if (isDotnet)
                    {
                        // dotnet.exe lives outside the server folder: identify it by the project in its command line
                        hit = cmd != nullptr && cmd->IndexOf(d->Project, StringComparison::OrdinalIgnoreCase) >= 0;
                    }
                    else
                    {
                        hit = String::Equals(d->Image, name, StringComparison::OrdinalIgnoreCase) && UnderServersPath(path);
                    }
                    if (!hit) continue;

                    List<int>^ pids;
                    if (!result->TryGetValue(i, pids))
                    {
                        pids = gcnew List<int>();
                        result->Add(i, pids);
                    }
                    pids->Add(pid);

                    String^ created = dynamic_cast<String^>(mo["CreationDate"]);
                    if (started != nullptr && created != nullptr)
                    {
                        try { started[pid] = ManagementDateTimeConverter::ToDateTime(created); } catch (Exception^) {}
                    }
                    break;
                }
            }
        }
        finally
        {
            delete searcher;
        }
        return result;
    }
    List<ServerRow^>^ ServerControl::Snapshot()
    {
        Dictionary<int, DateTime>^ started = gcnew Dictionary<int, DateTime>();
        Dictionary<int, List<int>^>^ found = nullptr;
        String^ wmiError = nullptr;
        try { found = Find(started); }
        catch (Exception^ ex) { wmiError = ex->Message; found = gcnew Dictionary<int, List<int>^>(); }

        List<ServerRow^>^ rows = gcnew List<ServerRow^>();
        for (int i = 0; i < s_defs->Count; ++i)
        {
            ServerDef^ d = s_defs[i];
            ServerRow^ row = gcnew ServerRow();
            row->Index = i;
            row->Name = d->Name;
            row->ProcessName = d->Image;
            row->Pid = String::Empty;
            row->Uptime = String::Empty;
            row->Memory = String::Empty;

            List<int>^ pids;
            if (wmiError != nullptr) { row->Status = "Unknown"; }
            else if (found->TryGetValue(i, pids) && pids->Count > 0)
            {
                row->Status = "Running";
                String^ pidText = String::Empty;
                DateTime oldest = DateTime::MaxValue;
                long long bytes = 0;
                for each (int pid in pids)
                {
                    pidText = pidText + (pidText->Length > 0 ? gcnew String(", ") : String::Empty) + pid.ToString();
                    DateTime t;
                    if (started->TryGetValue(pid, t) && t < oldest) oldest = t;
                    try { Process^ p = Process::GetProcessById(pid); bytes += p->WorkingSet64; } catch (Exception^) {}
                }
                row->Pid = pidText;
                if (oldest != DateTime::MaxValue)
                {
                    TimeSpan up = DateTime::Now - oldest;
                    row->Uptime = (up.TotalDays >= 1.0)
                        ? String::Format("{0}d {1:00}:{2:00}:{3:00}", (int)up.TotalDays, up.Hours, up.Minutes, up.Seconds)
                        : String::Format("{0:00}:{1:00}:{2:00}", up.Hours, up.Minutes, up.Seconds);
                }
                if (bytes > 0) row->Memory = String::Format("{0:N0} MB", bytes / (1024 * 1024));
            }
            else { row->Status = "Stopped"; }
            rows->Add(row);
        }
        return rows;
    }

    // One settings file serves all Mir 5 services: <Server>\Bin\Config\settings.json.
    String^ ServerControl::ConfigPath(int index)
    {
        EnsureDefs();
        if (index < 0 || index >= s_defs->Count || String::IsNullOrWhiteSpace(ServersPath))
        {
            return nullptr;
        }
        String^ path = Path::Combine(ServersPath, "Bin\\Config\\settings.json");
        return File::Exists(path) ? path : nullptr;
    }

    String^ ServerControl::LogFolder(int index)
    {
        EnsureDefs();
        if (index < 0 || index >= s_defs->Count || String::IsNullOrWhiteSpace(ServersPath))
        {
            return nullptr;
        }
        return Path::Combine(ServersPath, "Bin\\" + s_defs[index]->Project + "\\logs");
    }
    String^ ServerControl::LatestLog(int index)
    {
        try
        {
            String^ folder = LogFolder(index);
            if (folder == nullptr || !Directory::Exists(folder))
            {
                return nullptr;
            }
            // The services write log_<date>.txt (and error_<date>.txt next to it); the main log is what we tail.
            FileInfo^ newestAny = nullptr;
            FileInfo^ newestFull = nullptr;
            DirectoryInfo^ dir = gcnew DirectoryInfo(folder);
            array<FileInfo^>^ files = dir->GetFiles("log_*.txt");
            if (files->Length == 0) files = dir->GetFiles("*.txt");
            if (files->Length == 0) files = dir->GetFiles("*.log");
            for each (FileInfo^ f in files)
            {
                if (newestAny == nullptr || f->LastWriteTimeUtc > newestAny->LastWriteTimeUtc) newestAny = f;
                if (f->Length > 0 && (newestFull == nullptr || f->LastWriteTimeUtc > newestFull->LastWriteTimeUtc)) newestFull = f;
            }
            FileInfo^ pick = (newestFull != nullptr) ? newestFull : newestAny;
            return (pick == nullptr) ? nullptr : pick->FullName;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    }

    String^ ServerControl::Start(int index)
    {
        if (index < 0 || index >= s_defs->Count) return "Unknown server";
        ServerDef^ d = s_defs[index];
        try
        {
            if (String::IsNullOrWhiteSpace(ServersPath)) return d->Name + ": server folder is not set (Settings)";
            Dictionary<int, List<int>^>^ found = Find(nullptr);
            List<int>^ running;
            if (found->TryGetValue(index, running) && running->Count > 0) return d->Name + ": already running";

            String^ file = Path::Combine(ServersPath, d->Launch);
            if (!File::Exists(file)) return d->Name + ": not found: " + file + "  (build the solution first)";

            ProcessStartInfo^ psi = gcnew ProcessStartInfo(file);
            psi->WorkingDirectory = Path::GetDirectoryName(file);
            if (LaunchHidden)
            {
                // Open Internal: no console window; the servers still write their own log files.
                psi->UseShellExecute = false;
                psi->CreateNoWindow = true;
                psi->WindowStyle = ProcessWindowStyle::Hidden;
            }
            else
            {
                psi->UseShellExecute = true;   // Open External: own console window, like the launcher tabs
            }
            Process::Start(psi);
            return "Started " + d->Name;
        }
        catch (Exception^ ex)
        {
            return d->Name + ": " + ex->Message;
        }
    }

    String^ ServerControl::Stop(int index)
    {
        if (index < 0 || index >= s_defs->Count) return "Unknown server";
        ServerDef^ d = s_defs[index];
        try
        {
            Dictionary<int, List<int>^>^ found = Find(nullptr);
            List<int>^ pids;
            if (!found->TryGetValue(index, pids) || pids->Count == 0) return d->Name + ": not running";

            String^ failed = nullptr;
            for each (int pid in pids)
            {
                try
                {
                    Process^ p = Process::GetProcessById(pid);
                    p->Kill();
                    p->WaitForExit(5000);
                }
                catch (System::ComponentModel::Win32Exception^)
                {
                    failed = "access denied - run DarkSteel Studio as administrator";
                }
                catch (Exception^ ex)
                {
                    failed = ex->Message;
                }
            }
            return (failed == nullptr) ? ("Stopped " + d->Name) : (d->Name + ": " + failed);
        }
        catch (Exception^ ex)
        {
            return d->Name + ": " + ex->Message;
        }
    }
}
