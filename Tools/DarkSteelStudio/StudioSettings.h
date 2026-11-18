#pragma once

// =============================================================================
// DarkSteelStudio - StudioSettings  (managed mirror of the native ToolConfig)
//
// The on-disk JSON config is read/written by the plain-C++ ToolConfig
// (ToolConfig.h / .cpp, rapidjson). C++/CLI does not allow non-trivial native
// aggregates (std::wstring-bearing structs) as ref class members, so the UI
// never holds a ToolConfig - it holds this managed copy, and ToolConfig only
// ever exists as a transient local inside Load()/Save() below.
// =============================================================================

#include "ToolConfig.h"

#include <msclr/marshal_cppstd.h>
#include <string>

namespace DarkSteelStudio {

    using namespace System;

    public ref class StudioSettings {
    public:
        String^ ServersPath;     // in memory always absolute; the config file stores it relative to itself when it can
        String^ ImagesPath;      // same
        String^ DbHost;
        int     DbPort;
        String^ DbUser;
        String^ DbPass;
        String^ GameSchema;
        String^ FrontSchema;
        String^ XamlRoot;
        String^ LastSection;
        int     WindowWidth;
        int     WindowHeight;
        bool    WindowMaximized;
        bool    ServerLaunchHidden;

        // Mir 5 client launcher (Settings page). ClientPath / ClientCertPath: absolute in memory, relative in the file.
        String^ ClientPath;
        String^ ClientHost;
        int     ClientPort;
        int     ClientResX;
        int     ClientResY;
        bool    ClientWindowed;
        String^ ClientExtraArgs;
        String^ ClientCertPath;
        bool    ClientSkipTlsVerify;
        bool    ClientAutoEngineIni;

        StudioSettings()
            : ServersPath(String::Empty)
            , ImagesPath(String::Empty)
            , DbHost(String::Empty)
            , DbPort(3306)
            , DbUser(String::Empty)
            , DbPass(String::Empty)
            , GameSchema(String::Empty)
            , FrontSchema("ds_account")
            , XamlRoot(String::Empty)
            , LastSection(String::Empty)
            , WindowWidth(1400)
            , WindowHeight(860)
            , WindowMaximized(false)
            , ServerLaunchHidden(true)
            , ClientPath(String::Empty)
            , ClientHost("127.0.0.1")
            , ClientPort(31101)
            , ClientResX(1280)
            , ClientResY(720)
            , ClientWindowed(true)
            , ClientExtraArgs(String::Empty)
            , ClientCertPath(String::Empty)
            , ClientSkipTlsVerify(true)
            , ClientAutoEngineIni(true)
        {
        }

        // Reads the JSON config at `path`. Never throws for a missing/corrupt
        // file - ToolConfig::Load falls back to its built-in defaults.
        static StudioSettings^ Load(String^ path)
        {
            ToolConfig native = ToolConfig::Load(ToNative(path));

            StudioSettings^ settings = gcnew StudioSettings();
            String^ baseDir           = ConfigDir(path);
            settings->ServersPath     = ResolvePath(ToManaged(native.ServersPath), baseDir);
            settings->ImagesPath      = ResolvePath(ToManaged(native.ImagesPath), baseDir);
            settings->DbHost          = ToManaged(native.DbHost);
            settings->DbPort          = native.DbPort;
            settings->DbUser          = ToManaged(native.DbUser);
            settings->DbPass          = ToManaged(native.DbPass);
            settings->GameSchema      = ToManaged(native.GameSchema);
            settings->FrontSchema     = ToManaged(native.FrontSchema);
            settings->XamlRoot        = ToManaged(native.XamlRoot);
            settings->LastSection     = ToManaged(native.LastSection);
            settings->WindowWidth     = native.WindowWidth;
            settings->WindowHeight    = native.WindowHeight;
            settings->WindowMaximized = native.WindowMaximized;
            settings->ServerLaunchHidden = native.ServerLaunchHidden;
            settings->ClientPath      = ResolvePath(ToManaged(native.ClientPath), baseDir);
            settings->ClientHost      = ToManaged(native.ClientHost);
            settings->ClientPort      = native.ClientPort;
            settings->ClientResX      = native.ClientResX;
            settings->ClientResY      = native.ClientResY;
            settings->ClientWindowed  = native.ClientWindowed;
            settings->ClientExtraArgs = ToManaged(native.ClientExtraArgs);
            settings->ClientCertPath  = ResolvePath(ToManaged(native.ClientCertPath), baseDir);
            settings->ClientSkipTlsVerify = native.ClientSkipTlsVerify;
            settings->ClientAutoEngineIni = native.ClientAutoEngineIni;
            return settings;
        }

        // Best-effort write of this config to `path` (ToolConfig::Save swallows
        // I/O errors - a failed settings save must never take the app down).
        void Save(String^ path)
        {
            ToolConfig native;
            String^ baseDir        = ConfigDir(path);
            native.ServersPath     = ToNative(StorePath(ServersPath, baseDir));
            native.ImagesPath      = ToNative(StorePath(ImagesPath, baseDir));
            native.DbHost          = ToNative(DbHost);
            native.DbPort          = DbPort;
            native.DbUser          = ToNative(DbUser);
            native.DbPass          = ToNative(DbPass);
            native.GameSchema      = ToNative(GameSchema);
            native.FrontSchema     = ToNative(FrontSchema);
            native.XamlRoot        = ToNative(XamlRoot);
            native.LastSection     = ToNative(LastSection);
            native.WindowWidth     = WindowWidth;
            native.WindowHeight    = WindowHeight;
            native.WindowMaximized = WindowMaximized;
            native.ServerLaunchHidden = ServerLaunchHidden;
            native.ClientPath      = ToNative(StorePath(ClientPath, baseDir));
            native.ClientHost      = ToNative(ClientHost);
            native.ClientPort      = ClientPort;
            native.ClientResX      = ClientResX;
            native.ClientResY      = ClientResY;
            native.ClientWindowed  = ClientWindowed;
            native.ClientExtraArgs = ToNative(ClientExtraArgs);
            native.ClientCertPath  = ToNative(StorePath(ClientCertPath, baseDir));
            native.ClientSkipTlsVerify = ClientSkipTlsVerify;
            native.ClientAutoEngineIni = ClientAutoEngineIni;
            native.Save(ToNative(path));
        }

        // ---- portable paths -------------------------------------------------------
        // A stored path may be relative; it is relative to the folder of the config file (the exe folder),
        // so the same checkout works on another drive or under another user profile.

        static String^ ConfigDir(String^ configPath)
        {
            try { return System::IO::Path::GetDirectoryName(System::IO::Path::GetFullPath(configPath)); }
            catch (Exception^) { return AppDomain::CurrentDomain->BaseDirectory; }
        }

        // stored (relative or absolute, may be empty) -> absolute
        static String^ ResolvePath(String^ stored, String^ baseDir)
        {
            if (String::IsNullOrWhiteSpace(stored)) return String::Empty;
            try
            {
                String^ p = stored->Trim();
                if (!System::IO::Path::IsPathRooted(p)) p = System::IO::Path::Combine(baseDir, p);
                return System::IO::Path::GetFullPath(p)->TrimEnd(L'\\', L'/');
            }
            catch (Exception^) { return stored; }
        }

        // absolute (or already relative) -> relative to baseDir when it is on the same drive, otherwise absolute
        static String^ StorePath(String^ path, String^ baseDir)
        {
            if (String::IsNullOrWhiteSpace(path)) return String::Empty;
            try
            {
                String^ abs = ResolvePath(path, baseDir);
                if (!System::IO::Path::IsPathRooted(abs)) return abs;
                if (!String::Equals(System::IO::Path::GetPathRoot(abs), System::IO::Path::GetPathRoot(baseDir), StringComparison::OrdinalIgnoreCase))
                {
                    return abs;     // different drive: a relative path is impossible
                }
                Uri^ from = gcnew Uri(baseDir->TrimEnd(L'\\') + "\\");
                Uri^ to   = gcnew Uri(abs->TrimEnd(L'\\') + "\\");
                String^ rel = Uri::UnescapeDataString(from->MakeRelativeUri(to)->ToString())->Replace(L'/', L'\\')->TrimEnd(L'\\');
                return rel->Length == 0 ? "." : rel;
            }
            catch (Exception^) { return path; }
        }

    private:
        static std::wstring ToNative(String^ value)
        {
            if (value == nullptr)
            {
                return std::wstring();
            }
            return msclr::interop::marshal_as<std::wstring>(value);
        }

        static String^ ToManaged(const std::wstring& value)
        {
            return gcnew String(value.c_str());
        }
    };
}
