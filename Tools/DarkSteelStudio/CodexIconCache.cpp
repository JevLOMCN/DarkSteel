#include "CodexIconCache.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Net;
    using namespace System::Text;
    using namespace System::Text::RegularExpressions;
    using namespace System::Threading;
    using namespace System::Collections::Generic;

    namespace {
        // Same base the item icons use; <folder>/<id>.png lives under it.
        const wchar_t* kImagesBase = L"https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%204/Images/";
        const int kIndexMaxAgeDays = 7;
    }

    // %LOCALAPPDATA%\DarkSteelStudio\iconcache, created on first use; nullptr if unavailable.
    String^ IconCache::CacheFolder()
    {
        if (s_folder == nullptr)
        {
            String^ root = Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData);
            if (String::IsNullOrEmpty(root))
            {
                return nullptr;
            }
            String^ folder = Path::Combine(Path::Combine(root, "DarkSteelStudio"), "iconcache");
            Directory::CreateDirectory(folder);
            s_folder = folder;
        }
        return s_folder;
    }

    // Local cache file for an image url: "<id>.png" for items, "<folder>_<id>.png"
    // for the other CDN folders. nullptr if the url has no usable file name.
    String^ IconCache::CachePath(String^ url)
    {
        Uri^ uri = nullptr;
        if (!Uri::TryCreate(url, UriKind::Absolute, uri))
        {
            return nullptr;
        }
        String^ name = Path::GetFileName(uri->AbsolutePath);
        if (String::IsNullOrEmpty(name) || name->IndexOfAny(Path::GetInvalidFileNameChars()) >= 0)
        {
            return nullptr;
        }

        // Folder = the path segment just before the file ("monsters/").
        array<String^>^ segments = uri->Segments;
        if (segments->Length >= 2)
        {
            String^ folder = segments[segments->Length - 2]->Trim('/');
            if (!String::IsNullOrEmpty(folder) &&
                !String::Equals(folder, "items", StringComparison::OrdinalIgnoreCase) &&
                folder->IndexOfAny(Path::GetInvalidFileNameChars()) < 0)
            {
                name = folder + "_" + name;
            }
        }

        String^ cacheFolder = CacheFolder();
        if (cacheFolder == nullptr)
        {
            return nullptr;
        }
        return Path::Combine(cacheFolder, name);
    }

    String^ IconCache::Resolve(String^ url)
    {
        if (String::IsNullOrEmpty(url) ||
            !(url->StartsWith("http://", StringComparison::OrdinalIgnoreCase) ||
              url->StartsWith("https://", StringComparison::OrdinalIgnoreCase)))
        {
            return url;
        }

        try
        {
            String^ path = CachePath(url);
            if (path == nullptr)
            {
                return url;
            }
            if (File::Exists(path))
            {
                return path;
            }

            bool start = false;
            Monitor::Enter(s_lock);
            try
            {
                start = s_inFlight->Add(url);
            }
            finally
            {
                Monitor::Exit(s_lock);
            }
            if (start)
            {
                ThreadPool::QueueUserWorkItem(gcnew WaitCallback(&IconCache::DownloadWorker), url);
            }
        }
        catch (Exception^)
        {
            // Caching is an optimisation only; fall back to the live url.
        }
        return url;
    }

    void IconCache::DownloadWorker(Object^ state)
    {
        String^ url = dynamic_cast<String^>(state);
        if (url == nullptr)
        {
            return;
        }

        String^ temp = nullptr;
        try
        {
            String^ path = CachePath(url);
            if (path != nullptr && !File::Exists(path))
            {
                temp = path + "." + Guid::NewGuid().ToString("N") + ".tmp";

                HttpWebRequest^ request = safe_cast<HttpWebRequest^>(WebRequest::Create(url));
                request->Timeout          = 10000;
                request->ReadWriteTimeout = 10000;
                request->UserAgent        = "DarkSteelStudio";

                HttpWebResponse^ response = safe_cast<HttpWebResponse^>(request->GetResponse());
                try
                {
                    Stream^ input = response->GetResponseStream();
                    try
                    {
                        FileStream^ output = gcnew FileStream(temp, FileMode::Create, FileAccess::Write, FileShare::None);
                        try
                        {
                            array<Byte>^ buffer = gcnew array<Byte>(16384);
                            int read;
                            while ((read = input->Read(buffer, 0, buffer->Length)) > 0)
                            {
                                output->Write(buffer, 0, read);
                            }
                        }
                        finally
                        {
                            output->Close();
                        }
                    }
                    finally
                    {
                        input->Close();
                    }
                }
                finally
                {
                    response->Close();
                }

                if (!File::Exists(path))
                {
                    File::Move(temp, path);
                    temp = nullptr;
                }
            }
        }
        catch (Exception^)
        {
            // 404s, timeouts, races with another writer: just try again next visit.
        }
        finally
        {
            try
            {
                if (temp != nullptr && File::Exists(temp))
                {
                    File::Delete(temp);
                }
            }
            catch (Exception^)
            {
            }
            Monitor::Enter(s_lock);
            try
            {
                s_inFlight->Remove(url);
            }
            finally
            {
                Monitor::Exit(s_lock);
            }
        }
    }

    // ---- image index ----------------------------------------------------------

    // One id per line; nullptr when the file cannot be read or holds no ids.
    HashSet<long long>^ IconCache::ReadIndexFile(String^ path)
    {
        try
        {
            HashSet<long long>^ ids = gcnew HashSet<long long>();
            for each (String^ line in File::ReadAllLines(path))
            {
                long long id;
                if (Int64::TryParse(line->Trim(), id))
                {
                    ids->Add(id);
                }
            }
            return (ids->Count > 0) ? ids : nullptr;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    }

    // Disk copy if it is fresh (< 7 days), else the CDN directory listing
    // (cached back to disk), else a stale disk copy; nullptr if all of that fails.
    HashSet<long long>^ IconCache::LoadIndex(String^ folder)
    {
        String^ indexPath = nullptr;
        bool haveFile = false;
        try
        {
            String^ cacheFolder = CacheFolder();
            if (cacheFolder != nullptr)
            {
                indexPath = Path::Combine(cacheFolder, "index_" + folder + ".txt");
                haveFile  = File::Exists(indexPath);
                if (haveFile && (DateTime::UtcNow - File::GetLastWriteTimeUtc(indexPath)).TotalDays < kIndexMaxAgeDays)
                {
                    HashSet<long long>^ fresh = ReadIndexFile(indexPath);
                    if (fresh != nullptr)
                    {
                        return fresh;
                    }
                }
            }
        }
        catch (Exception^)
        {
        }

        try
        {
            String^ listingUrl = gcnew String(kImagesBase) + folder + "/";
            HttpWebRequest^ request = safe_cast<HttpWebRequest^>(WebRequest::Create(listingUrl));
            request->Timeout          = 30000;
            request->ReadWriteTimeout = 30000;
            request->UserAgent        = "DarkSteelStudio";

            String^ html;
            HttpWebResponse^ response = safe_cast<HttpWebResponse^>(request->GetResponse());
            try
            {
                StreamReader^ reader = gcnew StreamReader(response->GetResponseStream(), Encoding::UTF8);
                try
                {
                    html = reader->ReadToEnd();
                }
                finally
                {
                    reader->Close();
                }
            }
            finally
            {
                response->Close();
            }

            Regex^ pattern = gcnew Regex("/" + Regex::Escape(folder) + "/(\\d+)\\.png", RegexOptions::IgnoreCase);
            HashSet<long long>^ ids = gcnew HashSet<long long>();
            for each (Match^ match in pattern->Matches(html))
            {
                long long id;
                if (Int64::TryParse(match->Groups[1]->Value, id))
                {
                    ids->Add(id);
                }
            }

            if (ids->Count > 0)
            {
                if (indexPath != nullptr)
                {
                    try
                    {
                        List<String^>^ lines = gcnew List<String^>(ids->Count);
                        for each (long long id in ids)
                        {
                            lines->Add(id.ToString());
                        }
                        File::WriteAllLines(indexPath, lines);
                    }
                    catch (Exception^)
                    {
                        // The in-memory index still works.
                    }
                }
                return ids;
            }
        }
        catch (Exception^)
        {
            // Offline or listing disabled: fall through to the stale copy.
        }

        if (haveFile && indexPath != nullptr)
        {
            return ReadIndexFile(indexPath);
        }
        return nullptr;
    }

    HashSet<long long>^ IconCache::GetIndex(String^ folder)
    {
        HashSet<long long>^ ids = nullptr;
        Monitor::Enter(s_lock);
        try
        {
            if (!s_indexes->TryGetValue(folder, ids))
            {
                ids = LoadIndex(folder);       // may be nullptr: remembered, so we do not retry every card
                s_indexes[folder] = ids;
            }
        }
        finally
        {
            Monitor::Exit(s_lock);
        }
        return ids;
    }

    bool IconCache::HasImage(String^ folder, long long id)
    {
        if (String::IsNullOrEmpty(folder) || id <= 0)
        {
            return false;
        }
        HashSet<long long>^ ids = GetIndex(folder);
        if (ids == nullptr)
        {
            return true;    // no index available: assume present and let the url try
        }
        return ids->Contains(id);
    }

    // ---- name index (maps folder) --------------------------------------------

    // One file name per line -> lower-cased base name -> actual file name.
    // nullptr when unreadable or empty.
    Dictionary<String^, String^>^ IconCache::ReadNameIndexFile(String^ path)
    {
        try
        {
            Dictionary<String^, String^>^ map = gcnew Dictionary<String^, String^>(StringComparer::OrdinalIgnoreCase);
            for each (String^ line in File::ReadAllLines(path))
            {
                String^ name = line->Trim();
                if (name->Length == 0 || !name->EndsWith(".png", StringComparison::OrdinalIgnoreCase))
                {
                    continue;
                }
                String^ baseName = name->Substring(0, name->Length - 4);
                if (!map->ContainsKey(baseName))
                {
                    map[baseName] = name;
                }
            }
            return (map->Count > 0) ? map : nullptr;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    }

    Dictionary<String^, String^>^ IconCache::LoadNameIndex(String^ folder)
    {
        String^ indexPath = nullptr;
        bool haveFile = false;
        try
        {
            String^ cacheFolder = CacheFolder();
            if (cacheFolder != nullptr)
            {
                indexPath = Path::Combine(cacheFolder, "index_" + folder + ".txt");
                haveFile  = File::Exists(indexPath);
                if (haveFile && (DateTime::UtcNow - File::GetLastWriteTimeUtc(indexPath)).TotalDays < kIndexMaxAgeDays)
                {
                    Dictionary<String^, String^>^ fresh = ReadNameIndexFile(indexPath);
                    if (fresh != nullptr)
                    {
                        return fresh;
                    }
                }
            }
        }
        catch (Exception^)
        {
        }

        try
        {
            String^ listingUrl = gcnew String(kImagesBase) + folder + "/";
            HttpWebRequest^ request = safe_cast<HttpWebRequest^>(WebRequest::Create(listingUrl));
            request->Timeout          = 30000;
            request->ReadWriteTimeout = 30000;
            request->UserAgent        = "DarkSteelStudio";

            String^ html;
            HttpWebResponse^ response = safe_cast<HttpWebResponse^>(request->GetResponse());
            try
            {
                StreamReader^ reader = gcnew StreamReader(response->GetResponseStream(), Encoding::UTF8);
                try
                {
                    html = reader->ReadToEnd();
                }
                finally
                {
                    reader->Close();
                }
            }
            finally
            {
                response->Close();
            }

            Regex^ pattern = gcnew Regex("/Images/" + Regex::Escape(folder) + "/([^\"/<>]+\\.png)", RegexOptions::IgnoreCase);
            Dictionary<String^, String^>^ map = gcnew Dictionary<String^, String^>(StringComparer::OrdinalIgnoreCase);
            List<String^>^ lines = gcnew List<String^>();
            for each (Match^ match in pattern->Matches(html))
            {
                String^ name = Uri::UnescapeDataString(match->Groups[1]->Value);
                if (name->Length <= 4)
                {
                    continue;
                }
                String^ baseName = name->Substring(0, name->Length - 4);
                if (!map->ContainsKey(baseName))
                {
                    map[baseName] = name;
                    lines->Add(name);
                }
            }

            if (map->Count > 0)
            {
                if (indexPath != nullptr)
                {
                    try
                    {
                        File::WriteAllLines(indexPath, lines);   // only ever written with content
                    }
                    catch (Exception^)
                    {
                        // The in-memory index still works.
                    }
                }
                return map;
            }
        }
        catch (Exception^)
        {
            // Offline or listing disabled: fall through to the stale copy.
        }

        if (haveFile && indexPath != nullptr)
        {
            return ReadNameIndexFile(indexPath);
        }
        return nullptr;
    }

    Dictionary<String^, String^>^ IconCache::GetNameIndex(String^ folder)
    {
        Dictionary<String^, String^>^ map = nullptr;
        Monitor::Enter(s_lock);
        try
        {
            if (!s_nameIndexes->TryGetValue(folder, map))
            {
                map = LoadNameIndex(folder);   // nullptr remembered for this session
                s_nameIndexes[folder] = map;
            }
        }
        finally
        {
            Monitor::Exit(s_lock);
        }
        return map;
    }

    String^ IconCache::FindFileCI(String^ folder, String^ baseNameWithoutExt)
    {
        if (String::IsNullOrEmpty(folder) || String::IsNullOrEmpty(baseNameWithoutExt))
        {
            return nullptr;
        }
        Dictionary<String^, String^>^ map = GetNameIndex(folder);
        if (map == nullptr)
        {
            return nullptr;
        }
        String^ actual;
        return map->TryGetValue(baseNameWithoutExt, actual) ? actual : nullptr;
    }

    void IconCache::WarmIndexes()
    {
        GetIndex("monsters");
        GetIndex("objects");
        GetNameIndex("maps");
        // NPC art is items\<NpcPortrait>.png, so there is no npcs index to load.
    }
}
