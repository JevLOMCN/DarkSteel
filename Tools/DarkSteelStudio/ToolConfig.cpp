#include "ToolConfig.h"

#include <fstream>
#include <sstream>

#include <rapidjson/document.h>
#include <rapidjson/prettywriter.h>
#include <rapidjson/stringbuffer.h>

// Hand-declared prototypes for the handful of Win32 APIs we need, so this
// translation unit never has to #include <Windows.h> (this file must stay
// plain ISO C++17 even though it is compiled inside a /clr project).
extern "C" __declspec(dllimport) int __stdcall MultiByteToWideChar(
    unsigned int codePage,
    unsigned long dwFlags,
    const char* lpMultiByteStr,
    int cbMultiByte,
    wchar_t* lpWideCharStr,
    int cchWideChar);

extern "C" __declspec(dllimport) int __stdcall WideCharToMultiByte(
    unsigned int codePage,
    unsigned long dwFlags,
    const wchar_t* lpWideCharStr,
    int cchWideChar,
    char* lpMultiByteStr,
    int cbMultiByte,
    const char* lpDefaultChar,
    int* lpUsedDefaultChar);

extern "C" __declspec(dllimport) int __stdcall CreateDirectoryW(
    const wchar_t* lpPathName,
    void* lpSecurityAttributes);

#pragma comment(lib, "kernel32.lib")

namespace
{
    const unsigned int kCodePageUtf8 = 65001; // CP_UTF8

    std::string WStringToUtf8(const std::wstring& wide)
    {
        if (wide.empty())
        {
            return std::string();
        }

        int sizeNeeded = ::WideCharToMultiByte(kCodePageUtf8, 0, wide.c_str(), static_cast<int>(wide.size()),
                                                nullptr, 0, nullptr, nullptr);
        if (sizeNeeded <= 0)
        {
            return std::string();
        }

        std::string result(static_cast<size_t>(sizeNeeded), '\0');
        ::WideCharToMultiByte(kCodePageUtf8, 0, wide.c_str(), static_cast<int>(wide.size()),
                               &result[0], sizeNeeded, nullptr, nullptr);
        return result;
    }

    std::wstring Utf8ToWString(const std::string& utf8)
    {
        if (utf8.empty())
        {
            return std::wstring();
        }

        int sizeNeeded = ::MultiByteToWideChar(kCodePageUtf8, 0, utf8.c_str(), static_cast<int>(utf8.size()), nullptr, 0);
        if (sizeNeeded <= 0)
        {
            return std::wstring();
        }

        std::wstring result(static_cast<size_t>(sizeNeeded), L'\0');
        ::MultiByteToWideChar(kCodePageUtf8, 0, utf8.c_str(), static_cast<int>(utf8.size()), &result[0], sizeNeeded);
        return result;
    }

    void ApplyDefaults(ToolConfig& config)
    {
        config.ServersPath = L"";
        config.ImagesPath  = L"";
        config.DbHost = L"127.0.0.1";
        config.DbPort = 3306;
        config.DbUser = L"dev";
        config.DbPass = L"1111";
        config.GameSchema = L"ds_game";
        config.FrontSchema = L"ds_account";
        config.XamlRoot = L"";
        config.LastSection = L"GameData.xaml";
        config.WindowWidth = 1400;
        config.WindowHeight = 860;
        config.WindowMaximized = false;
        config.ServerLaunchHidden = true;
        config.ClientPath = L"";
        config.ClientHost = L"127.0.0.1";
        config.ClientPort = 31101;
        config.ClientResX = 1280;
        config.ClientResY = 720;
        config.ClientWindowed = true;
        config.ClientExtraArgs = L"";
        config.ClientCertPath = L"";
        config.ClientSkipTlsVerify = true;
        config.ClientAutoEngineIni = true;
    }

    std::wstring GetParentDirectory(const std::wstring& path)
    {
        size_t lastSlash = path.find_last_of(L"\\/");
        if (lastSlash == std::wstring::npos)
        {
            return std::wstring();
        }
        return path.substr(0, lastSlash);
    }

    // --- Read helpers: only overwrite `out` when the member exists with the
    //     expected type, so a partial/odd config keeps the defaults. ---------

    void ReadString(const rapidjson::Document& document, const char* key, std::wstring& out)
    {
        if (document.HasMember(key) && document[key].IsString())
        {
            out = Utf8ToWString(document[key].GetString());
        }
    }

    void ReadInt(const rapidjson::Document& document, const char* key, int& out)
    {
        if (document.HasMember(key) && document[key].IsInt())
        {
            out = document[key].GetInt();
        }
    }

    void ReadBool(const rapidjson::Document& document, const char* key, bool& out)
    {
        if (document.HasMember(key) && document[key].IsBool())
        {
            out = document[key].GetBool();
        }
    }

    // --- Write helpers ------------------------------------------------------

    void AddString(rapidjson::Document& document, const char* key, const std::wstring& value)
    {
        std::string utf8 = WStringToUtf8(value);
        rapidjson::Value jsonValue(utf8.c_str(), document.GetAllocator());
        document.AddMember(rapidjson::StringRef(key), jsonValue, document.GetAllocator());
    }

    void AddInt(rapidjson::Document& document, const char* key, int value)
    {
        document.AddMember(rapidjson::StringRef(key), rapidjson::Value(value), document.GetAllocator());
    }

    void AddBool(rapidjson::Document& document, const char* key, bool value)
    {
        document.AddMember(rapidjson::StringRef(key), rapidjson::Value(value), document.GetAllocator());
    }
}

ToolConfig ToolConfig::Load(const std::wstring& configPath)
{
    ToolConfig config;
    ApplyDefaults(config);

    try
    {
        std::ifstream in(configPath, std::ios::binary);
        if (!in.is_open())
        {
            return config;
        }

        std::ostringstream ss;
        ss << in.rdbuf();
        std::string contents = ss.str();

        rapidjson::Document document;
        document.Parse(contents.c_str());
        if (document.HasParseError() || !document.IsObject())
        {
            ApplyDefaults(config);
            return config;
        }

        ReadString(document, "ServersPath", config.ServersPath);
        ReadString(document, "ImagesPath", config.ImagesPath);
        ReadString(document, "DbHost", config.DbHost);
        ReadInt(document, "DbPort", config.DbPort);
        ReadString(document, "DbUser", config.DbUser);
        ReadString(document, "DbPass", config.DbPass);
        ReadString(document, "GameSchema", config.GameSchema);
        ReadString(document, "FrontSchema", config.FrontSchema);
        ReadString(document, "XamlRoot", config.XamlRoot);
        ReadString(document, "LastSection", config.LastSection);
        ReadInt(document, "WindowWidth", config.WindowWidth);
        ReadInt(document, "WindowHeight", config.WindowHeight);
        ReadBool(document, "WindowMaximized", config.WindowMaximized);
        ReadBool(document, "ServerLaunchHidden", config.ServerLaunchHidden);
        ReadString(document, "ClientPath", config.ClientPath);
        ReadString(document, "ClientHost", config.ClientHost);
        ReadInt(document, "ClientPort", config.ClientPort);
        ReadInt(document, "ClientResX", config.ClientResX);
        ReadInt(document, "ClientResY", config.ClientResY);
        ReadBool(document, "ClientWindowed", config.ClientWindowed);
        ReadString(document, "ClientExtraArgs", config.ClientExtraArgs);
        ReadString(document, "ClientCertPath", config.ClientCertPath);
        ReadBool(document, "ClientSkipTlsVerify", config.ClientSkipTlsVerify);
        ReadBool(document, "ClientAutoEngineIni", config.ClientAutoEngineIni);
    }
    catch (...)
    {
        ApplyDefaults(config);
    }

    return config;
}

void ToolConfig::Save(const std::wstring& configPath) const
{
    try
    {
        std::wstring parentDir = GetParentDirectory(configPath);
        if (!parentDir.empty())
        {
            // Best-effort; if it already exists (or fails) the ofstream open
            // below decides whether we can actually write.
            ::CreateDirectoryW(parentDir.c_str(), nullptr);
        }

        rapidjson::Document document;
        document.SetObject();

        AddString(document, "ServersPath", ServersPath);
        AddString(document, "ImagesPath", ImagesPath);
        AddString(document, "DbHost", DbHost);
        AddInt(document, "DbPort", DbPort);
        AddString(document, "DbUser", DbUser);
        AddString(document, "DbPass", DbPass);
        AddString(document, "GameSchema", GameSchema);
        AddString(document, "FrontSchema", FrontSchema);
        AddString(document, "XamlRoot", XamlRoot);
        AddString(document, "LastSection", LastSection);
        AddInt(document, "WindowWidth", WindowWidth);
        AddInt(document, "WindowHeight", WindowHeight);
        AddBool(document, "WindowMaximized", WindowMaximized);
        AddBool(document, "ServerLaunchHidden", ServerLaunchHidden);
        AddString(document, "ClientPath", ClientPath);
        AddString(document, "ClientHost", ClientHost);
        AddInt(document, "ClientPort", ClientPort);
        AddInt(document, "ClientResX", ClientResX);
        AddInt(document, "ClientResY", ClientResY);
        AddBool(document, "ClientWindowed", ClientWindowed);
        AddString(document, "ClientExtraArgs", ClientExtraArgs);
        AddString(document, "ClientCertPath", ClientCertPath);
        AddBool(document, "ClientSkipTlsVerify", ClientSkipTlsVerify);
        AddBool(document, "ClientAutoEngineIni", ClientAutoEngineIni);

        rapidjson::StringBuffer buffer;
        rapidjson::PrettyWriter<rapidjson::StringBuffer> writer(buffer);
        document.Accept(writer);

        std::ofstream out(configPath, std::ios::binary | std::ios::trunc);
        if (!out.is_open())
        {
            return;
        }

        out.write(buffer.GetString(), static_cast<std::streamsize>(buffer.GetSize()));
    }
    catch (...)
    {
        // Best-effort save; swallow all errors.
    }
}
