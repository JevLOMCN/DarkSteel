#include "MainWindow.h"
#include "StudioLog.h"

using namespace System;
using namespace System::Windows;

// WPF requires an STA thread. The Application object must exist before
// MainWindow is constructed, because MainWindow merges Theme.xaml into
// Application::Current->Resources before it parses any other XAML.
[STAThreadAttribute]
int main(array<String^>^ /*args*/)
{
    DarkSteelStudio::StudioLog::Init();   // log file + crash handlers first, so even a startup crash is recorded
    try
    {
        Application^ app = gcnew Application();
        app->ShutdownMode = ShutdownMode::OnMainWindowClose;
        DarkSteelStudio::StudioLog::AttachApplication(app);

        DarkSteelStudio::StudioLog::Info("Creating the main window");
        DarkSteelStudio::MainWindow^ mainWindow = gcnew DarkSteelStudio::MainWindow();
        DarkSteelStudio::StudioLog::Info("Main window created; entering the message loop");
        int code = app->Run(mainWindow->GetWindow());
        DarkSteelStudio::StudioLog::Info("Message loop ended normally (exit code " + code.ToString() + ")");
        return code;
    }
    catch (Exception^ ex)
    {
        DarkSteelStudio::StudioLog::Error("startup / main loop", ex);
        MessageBox::Show(ex->ToString() + "\r\n\r\nLog file: " + DarkSteelStudio::StudioLog::LogPath, "DarkSteel Studio - startup failure", MessageBoxButton::OK, MessageBoxImage::Error);
        return 1;
    }
}