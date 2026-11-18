#include "ClassIcons.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Net;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Media;
    using namespace System::Windows::Media::Imaging;

    static String^ ClassSheetUrl()
    {
        return "https://mirfiles.co.uk/resources/mir2/users/Jev/Mir%204/Images/sp-class.webp";
    }

    String^ ClassIcons::CachePath()
    {
        String^ folder = Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData), "DarkSteelStudio", "cache");
        Directory::CreateDirectory(folder);
        return Path::Combine(folder, "sp-class.webp");
    }

    ImageSource^ ClassIcons::Get(int classId)
    {
        if (s_frames == nullptr || classId < 1 || classId > s_frames->Length)
        {
            return nullptr;
        }
        return s_frames[classId - 1];
    }

    void ClassIcons::Ensure(System::Action^ ready)
    {
        if (s_waiting == nullptr)
        {
            s_waiting = gcnew List<System::Action^>();
        }
        if (s_frames != nullptr)
        {
            if (ready != nullptr) ready->Invoke();
            return;
        }
        if (ready != nullptr)
        {
            s_waiting->Add(ready);
        }
        if (s_started)
        {
            return;   // a load is already running
        }
        s_started = true;
        System::Threading::ThreadPool::QueueUserWorkItem(gcnew System::Threading::WaitCallback(&ClassIcons::Download));
    }

    void ClassIcons::Download(Object^ /*state*/)
    {
        String^ path = nullptr;
        try
        {
            path = CachePath();
            if (!File::Exists(path) || (gcnew FileInfo(path))->Length == 0)
            {
                WebClient^ client = gcnew WebClient();
                try
                {
                    ServicePointManager::SecurityProtocol = ServicePointManager::SecurityProtocol | SecurityProtocolType::Tls12;
                    client->DownloadFile(ClassSheetUrl(), path);
                }
                finally
                {
                    delete client;
                }
            }
        }
        catch (Exception^)
        {
            path = nullptr;   // offline: try again next time Ensure is called
        }

        System::Windows::Application^ app = System::Windows::Application::Current;
        if (app == nullptr)
        {
            s_started = false;
            return;
        }
        app->Dispatcher->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal,
                                     gcnew System::Action<String^>(&ClassIcons::Decode), path);
    }

    void ClassIcons::Decode(String^ path)
    {
        try
        {
            if (path != nullptr)
            {
                FileStream^ stream = File::OpenRead(path);
                BitmapDecoder^ decoder = nullptr;
                try
                {
                    decoder = BitmapDecoder::Create(stream, BitmapCreateOptions::PreservePixelFormat, BitmapCacheOption::OnLoad);
                }
                finally
                {
                    delete stream;
                }

                // The WebP decoder reports an unspecified pixel format; drawn as-is the transparent
                // glyphs came out as a solid white box. Convert to premultiplied BGRA first.
                FormatConvertedBitmap^ sheet = gcnew FormatConvertedBitmap(decoder->Frames[0], PixelFormats::Pbgra32, nullptr, 0.0);
                const int frames = 8;
                int width = sheet->PixelWidth;
                int frameHeight = sheet->PixelHeight / frames;
                int stride = width * 4;
                array<Byte>^ pixels = gcnew array<Byte>(stride * sheet->PixelHeight);
                sheet->CopyPixels(pixels, stride, 0);

                // Frame order inside the sheet (top to bottom) by class id - 1.
                // Class ids: 1 Warrior, 2 Sorcerer, 3 Taoist, 4 Arbalist, 5 Lancer, 6 Darkist, 7 Lionheart, 8 Spirit Summoner.
                array<int>^ frameOfClass = gcnew array<int> { 4, 2, 3, 0, 1, 5, 6, 7 };

                array<ImageSource^>^ cut = gcnew array<ImageSource^>(frames);
                for (int c = 0; c < frames; ++c)
                {
                    int frame = frameOfClass[c];
                    array<Byte>^ part = gcnew array<Byte>(stride * frameHeight);
                    Array::Copy(pixels, frame * frameHeight * stride, part, 0, stride * frameHeight);
                    BitmapSource^ image = BitmapSource::Create(width, frameHeight, 96.0, 96.0, PixelFormats::Pbgra32, nullptr, part, stride);
                    image->Freeze();
                    cut[c] = image;
                }
                s_frames = cut;
            }
        }
        catch (Exception^)
        {
            // no WebP codec, or a bad download: forget the cached file so the next start fetches it again
            s_frames = nullptr;
            try { if (path != nullptr) File::Delete(path); } catch (Exception^) {}
        }
        s_started = false;
        Finish();
    }

    void ClassIcons::Finish()
    {
        if (s_waiting == nullptr || s_frames == nullptr)
        {
            return;
        }
        array<System::Action^>^ callbacks = s_waiting->ToArray();
        s_waiting->Clear();
        for each (System::Action^ callback in callbacks)
        {
            try { callback->Invoke(); } catch (Exception^) {}
        }
    }
}