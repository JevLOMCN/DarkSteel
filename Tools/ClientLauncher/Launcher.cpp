// Mir 5 (DarkSteel) client launcher - clean reimplementation of Epic's "BootstrapPackagedGame" stub that ships as
// <client>\Windows\ProjectDS.exe (168 KB). Rebuilt by hand from the decompilation in ProjectDS_launcher.c
// (FUN_140001ac0 = main, FUN_140001000 = runtime check, FUN_140001800 = resource loader).
//
// What it does:
//   1. Finds its own folder and reads two embedded RCDATA resources (see Launcher.rc):
//        201 = path of the real game exe, relative to the launcher   (ProjectDS\Binaries\Win64\ProjectDS.exe)
//        202 = game name, passed as the first argument               (ProjectDS)
//        203 = default arguments added to every start                (-GameServer=127.0.0.1:31101)   [our addition]
//   2. Checks that the Visual C++ runtime (msvcp140_2.dll / vcruntime140_1.dll >= 14.40.33810) is installed; if not, offers to run
//      Engine\Extras\Redist\en-us\UEPrereqSetup_x64.exe.
//   3. Starts   "<folder>\<resource 201>" <resource 202> <default arguments> <our command line>   and waits for it, returning its exit code.
//
// Default arguments (our addition, the original had none): resource 203, or the "Arguments=" line of ClientLauncher.ini next to the
// launcher when that file exists (so the server address can be changed without rebuilding). Any default "-Key=value" argument is
// dropped when the same -Key= is already on the command line, so a .bat or shortcut can still override it.
//
// Exit codes (same as the original): 9000 resources missing, 9001 prerequisite installer missing, 9002 user declined the install,
// 9003 installer could not be started, 9004 installer failed, 9005 CreateProcess failed, 9006 default when the exit code is unreadable.

#include <windows.h>
#include <shellapi.h>
#include <shlwapi.h>

#include <string>
#include <vector>

namespace
{
    constexpr int kResGameExe  = 201;   // 0xC9
    constexpr int kResGameName = 202;   // 0xCA
    constexpr int kResDefaultArgs = 203;

    constexpr DWORD kErrNoResource       = 9000;
    constexpr DWORD kErrNoPrereqInstaller = 9001;
    constexpr DWORD kErrDeclined         = 9002;
    constexpr DWORD kErrInstallerStart   = 9003;
    constexpr DWORD kErrInstallerFailed  = 9004;
    constexpr DWORD kErrCreateProcess    = 9005;
    constexpr DWORD kDefaultExitCode     = 9006;

    // Minimum runtime: 14.40.33810 (the original compares build > 0x8411, registry build >= 0x8412).
    struct Version { unsigned major = 0, minor = 0, build = 0, rev = 0; };

    bool IsRuntimeNewEnough(const Version& v)
    {
        if (v.major != 14) return v.major > 14;
        if (v.minor != 40) return v.minor > 40;
        return v.build > 0x8411;
    }

    // RCDATA resource holding a UTF-16 string (not necessarily null terminated).
    bool LoadStringResource(HMODULE module, int id, std::wstring& out)
    {
        HRSRC info = FindResourceW(module, MAKEINTRESOURCEW(id), RT_RCDATA);
        if (!info) return false;
        HGLOBAL data = LoadResource(module, info);
        if (!data) return false;
        const wchar_t* text = static_cast<const wchar_t*>(LockResource(data));
        if (!text) return false;
        out.assign(text, SizeofResource(module, info) / sizeof(wchar_t));
        while (!out.empty() && out.back() == L'\0') out.pop_back();
        return true;
    }

    std::wstring Combine(const std::wstring& a, const wchar_t* b)
    {
        wchar_t buf[MAX_PATH] = {};
        return PathCombineW(buf, a.c_str(), b) ? std::wstring(buf) : std::wstring();
    }

    bool ReadFileVersion(const std::wstring& dir, const wchar_t* dll, Version& v)
    {
        std::wstring path = Combine(dir, dll);
        if (path.empty()) return false;
        DWORD size = GetFileVersionInfoSizeW(path.c_str(), nullptr);
        if (!size) return false;
        std::vector<BYTE> data(size);
        if (!GetFileVersionInfoW(path.c_str(), 0, size, data.data())) return false;
        VS_FIXEDFILEINFO* fixed = nullptr;
        UINT len = 0;
        if (!VerQueryValueW(data.data(), L"\\", reinterpret_cast<LPVOID*>(&fixed), &len) || !fixed) return false;
        v = { HIWORD(fixed->dwFileVersionMS), LOWORD(fixed->dwFileVersionMS), HIWORD(fixed->dwFileVersionLS), LOWORD(fixed->dwFileVersionLS) };
        return true;
    }

    bool CanLoad(const std::wstring& dir, const wchar_t* dll)
    {
        std::wstring path = dir.empty() ? std::wstring(dll) : Combine(dir, dll);
        if (path.empty()) return false;
        HMODULE m = LoadLibraryW(path.c_str());
        if (!m) return false;
        FreeLibrary(m);
        return true;
    }

    // Both runtime DLLs present in `dir` (empty = normal DLL search path), new enough, and loadable.
    bool RuntimeDllsOk(const std::wstring& dir)
    {
        for (const wchar_t* dll : { L"msvcp140_2.dll", L"vcruntime140_1.dll" })
        {
            Version v;
            if (!ReadFileVersion(dir, dll, v) || !IsRuntimeNewEnough(v) || !CanLoad(dir, dll)) return false;
        }
        return true;
    }

    // Store/UWP: the "Microsoft.VCLibs.140.00.UWPDesktop" framework package counts as the runtime.
    bool HasVcLibsPackage()
    {
        HMODULE kernel = GetModuleHandleW(L"kernel32.dll");
        if (!kernel) return false;
        using Fn = LONG(WINAPI*)(UINT32, UINT32*, BYTE*, UINT32*);
        auto getInfo = reinterpret_cast<Fn>(GetProcAddress(kernel, "GetCurrentPackageInfo"));
        if (!getInfo) return false;

        constexpr UINT32 kFilterDirect = 0x20;     // PACKAGE_FILTER_DIRECT
        UINT32 bytes = 0, count = 0;
        if (getInfo(kFilterDirect, &bytes, nullptr, &count) != ERROR_INSUFFICIENT_BUFFER) return false;
        std::vector<BYTE> buffer(bytes);
        if (getInfo(kFilterDirect, &bytes, buffer.data(), &count) != ERROR_SUCCESS) return false;

        // PACKAGE_INFO is 0x50 bytes; packageFamilyName is the pointer at +0x18.
        for (UINT32 i = 0; i < count; ++i)
        {
            const wchar_t* family = *reinterpret_cast<const wchar_t* const*>(buffer.data() + i * 0x50 + 0x18);
            if (family && wcscmp(family, L"Microsoft.VCLibs.140.00.UWPDesktop_8wekyb3d8bbwe") == 0) return true;
        }
        return false;
    }

    // Machine-wide VC++ 2015-2022 redistributable (registry), with the DLLs checked in System32.
    bool HasInstalledRedistributable()
    {
        HKEY key = nullptr;
        if (RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\VisualStudio\\14.0\\VC\\Runtimes\\x64", 0, KEY_READ, &key) != ERROR_SUCCESS)
            return false;
        auto readDword = [&](const wchar_t* name)
        {
            DWORD value = 0, size = sizeof(value);
            return RegQueryValueExW(key, name, nullptr, nullptr, reinterpret_cast<LPBYTE>(&value), &size) == ERROR_SUCCESS ? value : 0u;
        };
        Version v{ readDword(L"Major"), readDword(L"Minor"), readDword(L"Bld"), readDword(L"Rbld") };
        RegCloseKey(key);
        if (v.major != 14 ? v.major < 14 : (v.minor != 40 ? v.minor < 40 : v.build < 0x8412)) return false;

        wchar_t root[MAX_PATH] = {};
        GetEnvironmentVariableW(L"SystemRoot", root, MAX_PATH);
        if (RuntimeDllsOk(Combine(root, L"system32"))) return true;
        return RuntimeDllsOk(std::wstring());          // last resort: the normal DLL search path
    }

    // Returns 0 when the runtime is available (or was installed), otherwise one of the kErr* codes.
    DWORD EnsureRuntime(const std::wstring& baseDir, const std::wstring& exeDir)
    {
        if (RuntimeDllsOk(exeDir) || HasVcLibsPackage() || HasInstalledRedistributable()) return 0;

        const std::wstring message = L"The following component(s) are required to run this program:\n\nMicrosoft Visual C++ Runtime";
        const std::wstring installer = Combine(baseDir, L"Engine\\Extras\\Redist\\en-us\\UEPrereqSetup_x64.exe");
        if (GetFileAttributesW(installer.c_str()) == INVALID_FILE_ATTRIBUTES)
        {
            MessageBoxW(nullptr, message.c_str(), nullptr, MB_OK);
            return kErrNoPrereqInstaller;
        }
        if (MessageBoxW(nullptr, (message + L"\n\nWould you like to install them now?").c_str(), nullptr, MB_YESNO) == IDNO)
            return kErrDeclined;

        SHELLEXECUTEINFOW run = { sizeof(run) };
        run.fMask = SEE_MASK_NOCLOSEPROCESS;
        run.lpFile = installer.c_str();
        run.nShow = SW_SHOWNORMAL;
        if (!ShellExecuteExW(&run)) return kErrInstallerStart;
        WaitForSingleObject(run.hProcess, INFINITE);
        DWORD code = 0;
        GetExitCodeProcess(run.hProcess, &code);
        CloseHandle(run.hProcess);
        return code != 0 ? kErrInstallerFailed : 0;
    }

    bool ContainsNoCase(const std::wstring& text, const std::wstring& what)
    {
        if (what.empty() || text.size() < what.size()) return false;
        for (size_t i = 0; i + what.size() <= text.size(); ++i)
            if (_wcsnicmp(text.c_str() + i, what.c_str(), what.size()) == 0) return true;
        return false;
    }

    // Default arguments: ClientLauncher.ini [Launcher] Arguments=... wins over the embedded resource 203.
    std::wstring DefaultArguments(HMODULE module, const std::wstring& baseDir)
    {
        const std::wstring ini = baseDir + L"\\ClientLauncher.ini";
        if (GetFileAttributesW(ini.c_str()) != INVALID_FILE_ATTRIBUTES)
        {
            wchar_t buf[1024] = {};
            GetPrivateProfileStringW(L"Launcher", L"Arguments", L"\x01", buf, 1024, ini.c_str());
            if (buf[0] != L'\x01') return buf;           // key present (possibly empty = no default arguments)
        }
        std::wstring args;
        LoadStringResource(module, kResDefaultArgs, args);
        return args;
    }

    // Splits on spaces and keeps only the defaults that the caller did not already give.
    std::wstring FilterDefaults(const std::wstring& defaults, const std::wstring& userArgs)
    {
        std::wstring result;
        size_t pos = 0;
        while (pos < defaults.size())
        {
            while (pos < defaults.size() && defaults[pos] == L' ') ++pos;
            size_t end = defaults.find(L' ', pos);
            if (end == std::wstring::npos) end = defaults.size();
            std::wstring token = defaults.substr(pos, end - pos);
            pos = end;
            if (token.empty()) continue;
            size_t eq = token.find(L'=');
            std::wstring key = eq == std::wstring::npos ? token : token.substr(0, eq + 1);    // "-GameServer="
            if (key[0] == L'-' && ContainsNoCase(userArgs, key)) continue;
            result += (result.empty() ? L"" : L" ") + token;
        }
        return result;
    }

    std::wstring Canonical(const std::wstring& path)
    {
        wchar_t buf[MAX_PATH] = {};
        return PathCanonicalizeW(buf, path.c_str()) ? std::wstring(buf) : path;
    }
}

int WINAPI wWinMain(HINSTANCE instance, HINSTANCE, LPWSTR commandLine, int)
{
    // Folder this launcher lives in.
    wchar_t self[MAX_PATH] = {};
    GetModuleFileNameW(instance, self, MAX_PATH);
    std::wstring baseDir = Canonical(self);
    PathRemoveFileSpecW(baseDir.data());
    baseDir.resize(wcslen(baseDir.c_str()));

    std::wstring gameExe, gameName;
    if (!LoadStringResource(instance, kResGameExe, gameExe))
    {
        MessageBoxW(nullptr, L"This program is used for packaged games and is not meant to be run directly.", nullptr, MB_OK);
        return static_cast<int>(kErrNoResource);
    }
    LoadStringResource(instance, kResGameName, gameName);

    // Folder of the real exe (where the runtime DLLs may sit next to it).
    std::wstring exeDir = Canonical(baseDir + L"\\" + gameExe);
    PathRemoveFileSpecW(exeDir.data());
    exeDir.resize(wcslen(exeDir.c_str()));

    // "<folder>\<exe>" <game name> <default arguments> <our own arguments>
    const std::wstring defaults = FilterDefaults(DefaultArguments(instance, baseDir), commandLine);
    std::wstring command = L"\"" + baseDir + L"\\" + gameExe + L"\" " + gameName + L" " + (defaults.empty() ? L"" : defaults + L" ") + commandLine;

    if (DWORD err = EnsureRuntime(baseDir, exeDir)) return static_cast<int>(err);

    STARTUPINFOW startup = { sizeof(startup) };
    PROCESS_INFORMATION process = {};
    if (!CreateProcessW(nullptr, command.data(), nullptr, nullptr, TRUE, 0, nullptr, nullptr, &startup, &process))
    {
        wchar_t code[16];
        swprintf_s(code, L"%x", GetLastError());
        const std::wstring text = L"Couldn't start:\n" + command + L"\nCreateProcess() returned " + code + L".";
        MessageBoxW(nullptr, text.c_str(), nullptr, MB_OK);
        return static_cast<int>(kErrCreateProcess);
    }

    WaitForSingleObject(process.hProcess, INFINITE);
    DWORD exitCode = kDefaultExitCode;
    GetExitCodeProcess(process.hProcess, &exitCode);
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    return static_cast<int>(exitCode);
}
