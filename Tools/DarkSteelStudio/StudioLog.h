#pragma once

// =============================================================================
// DarkSteelStudio - StudioLog
//
// One log file for diagnosing crashes on machines the tool was not built on:
//   <exe folder>\logs\DarkSteelStudio.log   (falls back to %LOCALAPPDATA%\DarkSteelStudio\logs
//                                         when the exe folder is read-only)
// Every line is "time [thread] message". The file starts each run with a session header
// (versions, OS, folders) and records:
//   * breadcrumbs: page navigation, Game Data loading (every table read from disk, with how
//     long it took), background builds - the LAST line before a crash is where it died
//   * unhandled managed exceptions on any thread (full stack trace)
//   * UI-thread exceptions are logged, shown in a message box and the tool keeps running
//   * native crashes (access violation, stack overflow, ...): exception code, address, module,
//     a short native stack, and a minidump DarkSteelStudio-crash-<time>.dmp next to the log
// The log rolls over at 2 MB (DarkSteelStudio.log.old keeps the previous one).
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;

    public ref class StudioLog abstract sealed {
    public:
        static void Init();                                              // first thing in main()
        static void AttachApplication(System::Windows::Application^ app);   // once the Application exists
        static void Info(String^ message);
        static void Error(String^ where, Exception^ ex);

        static property String^ LogPath { String^ get() { return s_path; } }

    private:
        static String^ s_path;
        static Object^ s_lock;
        static int     s_dialogs;     // UI exception dialogs shown so far (capped, so a loop can't spam)

        static String^ PickFolder();
        static void    Write(String^ text);
        static void    OnDomainException(Object^ sender, UnhandledExceptionEventArgs^ e);
        static void    OnDispatcherException(Object^ sender, System::Windows::Threading::DispatcherUnhandledExceptionEventArgs^ e);
        static void    OnTaskException(Object^ sender, System::Threading::Tasks::UnobservedTaskExceptionEventArgs^ e);
    };

    // Stack-allocated breadcrumb: logs "BEGIN name" now and "END name (n ms)" when the scope
    // exits (also on an exception). A BEGIN without an END in the log = the process died inside.
    public ref class StudioLogScope {
    public:
        StudioLogScope(String^ name);
        ~StudioLogScope();
    private:
        String^ m_name;
        System::Diagnostics::Stopwatch^ m_watch;
    };
}