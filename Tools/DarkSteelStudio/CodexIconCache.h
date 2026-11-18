#pragma once

// =============================================================================
// DarkSteelStudio - IconCache
//
// Disk cache for the CDN images the codex cards show (items, monsters, objects,
// NPCs; all served as <id>.png from .../Images/<folder>/).
//
// Resolve() returns the local file when it is already cached; otherwise it
// queues a background download (thread-pool, 10 s timeout, errors swallowed)
// and returns the original url so the card still shows the image right now
// (WPF fetches it) and every later visit loads from disk instead of the network.
// Cache folder: %LOCALAPPDATA%\DarkSteelStudio\iconcache. Items are stored as
// <id>.png; the other folders as <folder>_<id>.png so ids never collide.
//
// The CDN only holds images for part of the data (e.g. about 7,700 of 13,800
// monster ids), so HasImage() checks a per-folder INDEX built from the folder's
// directory listing. The index is cached on disk (index_<folder>.txt, one id per
// line, refreshed after 7 days). If the listing cannot be read, HasImage()
// returns true for everything and the cards simply try the plain url.
//
// The "maps" folder holds named files (Arena_Bicheon.png, FD_..._01.png), so it
// has a NAME index instead (index_maps.txt, one file name per line, same 7-day
// refresh) used by FindFileCI() to match a stage's GraphicLevel to a file.
// =============================================================================

namespace DarkSteelStudio {

    using namespace System;

    public ref class IconCache abstract sealed {
    public:
        // Local cached path for an http(s) url, else `url` unchanged (local
        // paths, empty strings and non-http urls pass straight through).
        static String^ Resolve(String^ url);

        // True when the CDN folder ("monsters" | "objects") has <id>.png,
        // or when the index is unavailable (then every id is assumed present).
        static bool HasImage(String^ folder, long long id);

        // Name index for folders whose files are not numeric ids (the "maps"
        // folder). Returns the ACTUAL file name incl. ".png" (case as on the CDN)
        // for `baseNameWithoutExt` matched case-insensitively, or nullptr when
        // there is no such file or the index is unavailable (offline, no cache).
        static String^ FindFileCI(String^ folder, String^ baseNameWithoutExt);

        // Loads the folder indexes (monsters, objects, maps; disk cache, else the
        // CDN listing). Blocking; safe to call from a worker thread and more than once.
        static void WarmIndexes();

    private:
        // Name index: lower-cased base name -> actual file name; nullptr when
        // the listing could not be read (never cached as an empty file).
        static System::Collections::Generic::Dictionary<String^, String^>^ GetNameIndex(String^ folder);
        static System::Collections::Generic::Dictionary<String^, String^>^ LoadNameIndex(String^ folder);
        static System::Collections::Generic::Dictionary<String^, String^>^ ReadNameIndexFile(String^ path);
        static System::Collections::Generic::Dictionary<String^, System::Collections::Generic::Dictionary<String^, String^>^>^ s_nameIndexes;

        static void DownloadWorker(Object^ state);
        static String^ CachePath(String^ url);
        static String^ CacheFolder();
        static System::Collections::Generic::HashSet<long long>^ GetIndex(String^ folder);
        static System::Collections::Generic::HashSet<long long>^ LoadIndex(String^ folder);
        static System::Collections::Generic::HashSet<long long>^ ReadIndexFile(String^ path);

        static String^ s_folder;
        static Object^ s_lock;
        static System::Collections::Generic::HashSet<String^>^ s_inFlight;
        // folder -> ids; a null value means "tried and failed" (HasImage then returns true).
        static System::Collections::Generic::Dictionary<String^, System::Collections::Generic::HashSet<long long>^>^ s_indexes;

        static IconCache()
        {
            s_lock     = gcnew Object();
            s_inFlight = gcnew System::Collections::Generic::HashSet<String^>(StringComparer::OrdinalIgnoreCase);
            s_indexes  = gcnew System::Collections::Generic::Dictionary<String^, System::Collections::Generic::HashSet<long long>^>(StringComparer::OrdinalIgnoreCase);
            s_nameIndexes = gcnew System::Collections::Generic::Dictionary<String^, System::Collections::Generic::Dictionary<String^, String^>^>(StringComparer::OrdinalIgnoreCase);
        }
    };
}
