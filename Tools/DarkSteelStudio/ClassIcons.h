#pragma once

// =============================================================================
// DarkSteelStudio - ClassIcons
//
// Class icons from the website's sprite sheet (Images/sp-class.webp on the CDN):
// one vertical strip of 8 equal frames, in class-id order (1 Warrior .. 8 Spirit
// Summoner). The sheet is downloaded once to %LOCALAPPDATA%\DarkSteelStudio\cache,
// decoded on the UI thread (needs Windows' WebP codec - the "WebP Image Extensions"
// that ship with Windows 10/11) and cut into frozen per-class images.
// Get() returns null until the sheet is ready or when it cannot be decoded; callers
// then simply show no icon. Ensure() starts the load and calls `ready` (UI thread)
// once the frames exist.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;

    public ref class ClassIcons abstract sealed {
    public:
        static void Ensure(System::Action^ ready);
        static System::Windows::Media::ImageSource^ Get(int classId);   // 1..8, else null

    private:
        static array<System::Windows::Media::ImageSource^>^ s_frames;
        static System::Collections::Generic::List<System::Action^>^ s_waiting;
        static bool s_started;

        static void Download(Object^ state);                    // thread pool
        static void Decode(String^ path);                       // UI thread
        static void Finish();                                   // UI thread: notify the waiting callers
        static String^ CachePath();
    };
}