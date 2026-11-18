#include "StudioLog.h"
#include "StudioLogNative.h"

#include <windows.h>
#include <dbghelp.h>
#include <cstdio>
#include <cstring>
#include <cwchar>
#include <vcclr.h>

// ---------------------------------------------------------------------------
// Native crash handler (compiled as native code: it must not depend on the CLR)
// ---------------------------------------------------------------------------
void StudioLogInstallNativeHandler(const wchar_t* logPath, const wchar_t* dumpPath);

#pragma managed(push, off)
namespace
{
    wchar_t       g_nativeLog[1024]  = L"";
    wchar_t       g_nativeDump[1024] = L"";
    volatile LONG g_nativeBusy       = 0;

    void AppendRaw(const char* text)
    {
        HANDLE file = CreateFileW(g_nativeLog, FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr,
                                  OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file == INVALID_HANDLE_VALUE)
        {
            return;
        }
        DWORD written = 0;
        WriteFile(file, text, static_cast<DWORD>(strlen(text)), &written, nullptr);
        CloseHandle(file);
    }

    // "0x00007FF6...  module.dll+0x1A2B"
    void DescribeAddress(const void* address, char* out, size_t capacity)
    {
        HMODULE module = nullptr;
        wchar_t name[MAX_PATH] = L"?";
        if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                               static_cast<LPCWSTR>(address), &module) && module != nullptr)
        {
            GetModuleFileNameW(module, name, MAX_PATH);
        }
        const wchar_t* leaf = wcsrchr(name, L'\\');
        leaf = (leaf != nullptr) ? leaf + 1 : name;
        char leafUtf8[MAX_PATH] = "?";
        WideCharToMultiByte(CP_UTF8, 0, leaf, -1, leafUtf8, MAX_PATH, nullptr, nullptr);
        snprintf(out, capacity, "0x%016llX  %s+0x%llX", static_cast<unsigned long long>(reinterpret_cast<ULONG_PTR>(address)), leafUtf8,
                 static_cast<unsigned long long>(reinterpret_cast<ULONG_PTR>(address) - reinterpret_cast<ULONG_PTR>(module)));
    }

    LONG WINAPI NativeCrashFilter(EXCEPTION_POINTERS* info)
    {
        if (InterlockedExchange(&g_nativeBusy, 1) != 0)
        {
            return EXCEPTION_CONTINUE_SEARCH;   // already handling one (a crash inside the handler)
        }

        char line[512];
        char where[320];
        const EXCEPTION_RECORD* record = (info != nullptr) ? info->ExceptionRecord : nullptr;
        if (record != nullptr)
        {
            DescribeAddress(record->ExceptionAddress, where, sizeof(where));
            snprintf(line, sizeof(line), "\r\n==== NATIVE CRASH ====\r\nexception code 0x%08lX at %s\r\n",
                     static_cast<unsigned long>(record->ExceptionCode), where);
            AppendRaw(line);

            if (record->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && record->NumberParameters >= 2)
            {
                const char* kind = (record->ExceptionInformation[0] == 0) ? "reading" : ((record->ExceptionInformation[0] == 1) ? "writing" : "executing");
                snprintf(line, sizeof(line), "access violation %s address 0x%016llX\r\n", kind,
                         static_cast<unsigned long long>(record->ExceptionInformation[1]));
                AppendRaw(line);
            }
            else if (record->ExceptionCode == EXCEPTION_STACK_OVERFLOW)
            {
                AppendRaw("stack overflow\r\n");
            }
            else if (record->ExceptionCode == 0xE06D7363)
            {
                AppendRaw("unhandled native C++ exception (throw) - the message is not recoverable here\r\n");
            }
        }

        void* frames[40] = {};
        USHORT count = CaptureStackBackTrace(0, 40, frames, nullptr);
        AppendRaw("native stack:\r\n");
        for (USHORT i = 0; i < count; ++i)
        {
            DescribeAddress(frames[i], where, sizeof(where));
            snprintf(line, sizeof(line), "  #%02u %s\r\n", static_cast<unsigned>(i), where);
            AppendRaw(line);
        }

        // Minidump (dbghelp is loaded on demand so nothing extra is linked or required to start).
        HMODULE dbg = LoadLibraryW(L"dbghelp.dll");
        if (dbg != nullptr)
        {
            typedef BOOL (WINAPI* WriteDumpFn)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE, PMINIDUMP_EXCEPTION_INFORMATION,
                                               PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION);
            WriteDumpFn writeDump = reinterpret_cast<WriteDumpFn>(GetProcAddress(dbg, "MiniDumpWriteDump"));
            HANDLE file = CreateFileW(g_nativeDump, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
            if (writeDump != nullptr && file != INVALID_HANDLE_VALUE)
            {
                MINIDUMP_EXCEPTION_INFORMATION mei;
                mei.ThreadId = GetCurrentThreadId();
                mei.ExceptionPointers = info;
                mei.ClientPointers = FALSE;
                BOOL ok = writeDump(GetCurrentProcess(), GetCurrentProcessId(), file, MiniDumpNormal, &mei, nullptr, nullptr);
                AppendRaw(ok ? "minidump written next to this log\r\n" : "minidump could not be written\r\n");
            }
            if (file != INVALID_HANDLE_VALUE)
            {
                CloseHandle(file);
            }
        }
        AppendRaw("==== END NATIVE CRASH ====\r\n");
        return EXCEPTION_CONTINUE_SEARCH;   // let Windows / the CLR finish as usual
    }
}

void StudioLogInstallNativeHandler(const wchar_t* logPath, const wchar_t* dumpPath)
{
    wcsncpy_s(g_nativeLog, logPath, _TRUNCATE);
    wcsncpy_s(g_nativeDump, dumpPath, _TRUNCATE);
    SetUnhandledExceptionFilter(NativeCrashFilter);
}
#pragma managed(pop)

// windows.h turns these into MessageBoxW / CreateDirectoryW / ... which breaks the .NET calls of the same name below.
#undef MessageBox
#undef CreateDirectory
#undef GetTempPath
#undef GetEnvironmentVariable

// ---------------------------------------------------------------------------
// Managed side
// ---------------------------------------------------------------------------
namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Threading;

    // A folder we can write to: <exe>\logs first, else %LOCALAPPDATA%\DarkSteelStudio\logs.
    String^ StudioLog::PickFolder()
    {
        array<String^>^ candidates = gcnew array<String^> {
            Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "logs"),
            Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData), "DarkSteelStudio", "logs")
        };
        for each (String^ folder in candidates)
        {
            try
            {
                Directory::CreateDirectory(folder);
                String^ probe = Path::Combine(folder, "write-test.tmp");
                File::WriteAllText(probe, "x");
                File::Delete(probe);
                return folder;
            }
            catch (Exception^)
            {
            }
        }
        return Environment::GetEnvironmentVariable("TEMP");
    }

    void StudioLog::Write(String^ text)
    {
        if (s_path == nullptr)
        {
            return;
        }
        try
        {
            if (s_lock == nullptr) s_lock = gcnew Object();
            Monitor::Enter(s_lock);
            try
            {
                FileInfo^ info = gcnew FileInfo(s_path);
                if (info->Exists && info->Length > 2 * 1024 * 1024)
                {
                    String^ old = s_path + ".old";
                    if (File::Exists(old)) File::Delete(old);
                    File::Move(s_path, old);
                }
                File::AppendAllText(s_path, text + Environment::NewLine, Encoding::UTF8);
            }
            finally
            {
                Monitor::Exit(s_lock);
            }
        }
        catch (Exception^)
        {
            // logging must never be the thing that crashes the tool
        }
    }

    void StudioLog::Info(String^ message)
    {
        Write(DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss.fff") + " [T" + String::Format("{0}", Thread::CurrentThread->ManagedThreadId) + "] " + message);
    }

    void StudioLog::Error(String^ where, Exception^ ex)
    {
        String^ detail = (ex == nullptr) ? String::Empty : ex->ToString();
        Info("ERROR in " + where + ": " + detail);
    }

    void StudioLog::Init()
    {
        try
        {
            s_lock = gcnew Object();
            String^ folder = PickFolder();
            s_path = Path::Combine(folder, "DarkSteelStudio.log");
            String^ dump = Path::Combine(folder, "DarkSteelStudio-crash-" + DateTime::Now.ToString("yyyyMMdd-HHmmss") + ".dmp");

            Write(Environment::NewLine + "=================================================================");
            Info("DarkSteel Studio session start");
            Info("version        " + System::Reflection::Assembly::GetExecutingAssembly()->GetName()->Version->ToString());
            Info("exe            " + System::Reflection::Assembly::GetExecutingAssembly()->Location);
            Info("working dir    " + Environment::CurrentDirectory);
            Info("OS             " + Environment::OSVersion->ToString() + (Environment::Is64BitOperatingSystem ? gcnew String(" (64-bit)") : gcnew String(" (32-bit)")));
            Info("process        " + (Environment::Is64BitProcess ? gcnew String("64-bit") : gcnew String("32-bit")) + ", .NET CLR " + Environment::Version->ToString());
            Info("user/machine   " + Environment::UserName + " @ " + Environment::MachineName);
            Info("culture        " + System::Globalization::CultureInfo::CurrentCulture->Name);
            Info("processors     " + String::Format("{0}", Environment::ProcessorCount));
            Info("log file       " + s_path);

            pin_ptr<const wchar_t> logChars = PtrToStringChars(s_path);
            pin_ptr<const wchar_t> dumpChars = PtrToStringChars(dump);
            StudioLogInstallNativeHandler(logChars, dumpChars);

            AppDomain::CurrentDomain->UnhandledException += gcnew UnhandledExceptionEventHandler(&StudioLog::OnDomainException);
            System::Threading::Tasks::TaskScheduler::UnobservedTaskException +=
                gcnew EventHandler<System::Threading::Tasks::UnobservedTaskExceptionEventArgs^>(&StudioLog::OnTaskException);
        }
        catch (Exception^)
        {
        }
    }

    void StudioLog::AttachApplication(System::Windows::Application^ app)
    {
        if (app != nullptr)
        {
            app->DispatcherUnhandledException +=
                gcnew System::Windows::Threading::DispatcherUnhandledExceptionEventHandler(&StudioLog::OnDispatcherException);
        }
    }

    void StudioLog::OnDomainException(Object^ /*sender*/, UnhandledExceptionEventArgs^ e)
    {
        Exception^ ex = dynamic_cast<Exception^>(e->ExceptionObject);
        Info(String::Format("UNHANDLED EXCEPTION (process {0}): {1}",
                            e->IsTerminating ? gcnew String("is terminating") : gcnew String("continues"),
                            (ex != nullptr) ? ex->ToString() : Convert::ToString(e->ExceptionObject)));
    }

    void StudioLog::OnTaskException(Object^ /*sender*/, System::Threading::Tasks::UnobservedTaskExceptionEventArgs^ e)
    {
        Info("UNOBSERVED TASK EXCEPTION: " + e->Exception->ToString());
    }

    void StudioLog::OnDispatcherException(Object^ /*sender*/, System::Windows::Threading::DispatcherUnhandledExceptionEventArgs^ e)
    {
        Error("UI thread", e->Exception);
        if (s_dialogs < 3)
        {
            ++s_dialogs;
            try
            {
                System::Windows::MessageBox::Show(
                    "Something went wrong:\n\n" + e->Exception->Message + "\n\nDetails were written to:\n" + s_path +
                    "\n\nDarkSteel Studio will keep running; please send that log file.",
                    "DarkSteel Studio", System::Windows::MessageBoxButton::OK, System::Windows::MessageBoxImage::Warning);
            }
            catch (Exception^)
            {
            }
        }
        e->Handled = true;   // keep the tool alive; the log has the stack trace
    }

    StudioLogScope::StudioLogScope(String^ name)
    {
        m_name = name;
        m_watch = System::Diagnostics::Stopwatch::StartNew();
        StudioLog::Info("BEGIN " + m_name);
    }

    StudioLogScope::~StudioLogScope()
    {
        StudioLog::Info(String::Format("END   {0} ({1} ms)", m_name, m_watch->ElapsedMilliseconds));
    }
}

// Native-callable wrapper (see StudioLogNative.h).
void StudioLogNative(const wchar_t* line)
{
    try
    {
        DarkSteelStudio::StudioLog::Info(gcnew System::String(line));
    }
    catch (System::Exception^)
    {
    }
}