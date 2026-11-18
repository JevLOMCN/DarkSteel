#include "StageMapWindow.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Threading;
    using namespace System::Windows;
    using namespace System::Windows::Controls;
    using namespace System::Windows::Input;
    using namespace System::Windows::Markup;
    using namespace System::Windows::Media;
    using namespace System::Windows::Media::Imaging;

    namespace {
        const double kMinScale        = 0.1;
        const double kMaxScale        = 8.0;
        const double kLabelZoom       = 1.5;    // marker names appear from this zoom
        const double kDragThreshold   = 4.0;    // px before a press becomes a drag
        const double kMarkerDiameter  = 12.0;
        const double kBlankSize       = 1000.0;
    }

    // =========================================================================
    // Construction
    // =========================================================================

    StageMapWindow::StageMapWindow(CodexCatalog^ catalog, Window^ owner, String^ xamlRoot, long long stageId)
    {
        m_catalog   = catalog;
        m_owner     = owner;
        m_xamlRoot  = xamlRoot;
        m_closed    = false;
        m_lock      = gcnew Object();
        m_backStack = gcnew List<long long>();
        m_markers      = gcnew List<Grid^>();
        m_markerScales = gcnew List<ScaleTransform^>();
        m_typeBuilt    = gcnew Dictionary<String^, bool>();
        m_typeBrush    = gcnew Dictionary<String^, SolidColorBrush^>();
        m_scale     = 1.0;
        m_surfW     = kBlankSize;
        m_surfH     = kBlankSize;

        // Site default: only map-movement markers are ticked.
        m_typeVisible = gcnew Dictionary<String^, bool>();
        m_typeVisible["maplink"] = true;

        LoadWindowXaml();
        BindControls();

        m_scaleTransform = gcnew ScaleTransform(1.0, 1.0);
        m_moveTransform  = gcnew TranslateTransform(0.0, 0.0);
        TransformGroup^ group = gcnew TransformGroup();
        group->Children->Add(m_scaleTransform);
        group->Children->Add(m_moveTransform);
        m_surface->RenderTransform = group;

        WireEvents();

        if (m_owner != nullptr)
        {
            m_window->Owner = m_owner;
        }

        LoadStage(stageId);
    }

    void StageMapWindow::Show()
    {
        m_window->Show();
    }

    Object^ StageMapWindow::FindRequired(FrameworkElement^ root, String^ name)
    {
        Object^ found = (root == nullptr) ? nullptr : root->FindName(name);
        if (found == nullptr)
        {
            throw gcnew InvalidOperationException("StageMapWindow.xaml is missing a required element named '" + name + "'.");
        }
        return found;
    }

    void StageMapWindow::LoadWindowXaml()
    {
        String^ fullPath = Path::Combine(m_xamlRoot, "StageMapWindow.xaml");

        // BaseUri = the file itself, so the relative Theme.xaml merge resolves.
        ParserContext^ context = gcnew ParserContext();
        context->BaseUri = gcnew Uri(fullPath, UriKind::Absolute);

        FileStream^ stream = gcnew FileStream(fullPath, FileMode::Open, FileAccess::Read, FileShare::Read);
        try
        {
            m_window = dynamic_cast<Window^>(XamlReader::Load(stream, context));
        }
        finally
        {
            stream->Close();
        }

        if (m_window == nullptr)
        {
            throw gcnew InvalidOperationException("Xaml\\StageMapWindow.xaml: the root element must be a <Window>.");
        }
    }

    void StageMapWindow::BindControls()
    {
        m_titleText    = safe_cast<TextBlock^>(FindRequired(m_window, "MapTitleText"));
        m_subtitleText = safe_cast<TextBlock^>(FindRequired(m_window, "MapSubtitleText"));
        m_statusText   = safe_cast<TextBlock^>(FindRequired(m_window, "MapStatusText"));
        m_backButton   = safe_cast<Button^>(FindRequired(m_window, "MapBackButton"));
        m_fitButton    = safe_cast<Button^>(FindRequired(m_window, "MapFitButton"));
        m_openGenButton = safe_cast<Button^>(FindRequired(m_window, "MapOpenGenButton"));
        m_filterPanel  = safe_cast<StackPanel^>(FindRequired(m_window, "PoiFilterPanel"));
        m_infoPanel    = safe_cast<Border^>(FindRequired(m_window, "PoiInfoPanel"));
        m_infoImage    = safe_cast<Image^>(FindRequired(m_window, "PoiInfoImage"));
        m_infoName     = safe_cast<TextBlock^>(FindRequired(m_window, "PoiInfoName"));
        m_infoMeta     = safe_cast<TextBlock^>(FindRequired(m_window, "PoiInfoMeta"));
        m_infoCoords   = safe_cast<TextBlock^>(FindRequired(m_window, "PoiInfoCoords"));
        m_infoExtra    = safe_cast<TextBlock^>(FindRequired(m_window, "PoiInfoExtra"));
        m_copyButton   = safe_cast<Button^>(FindRequired(m_window, "PoiCopyButton"));
        m_moveButton   = safe_cast<Button^>(FindRequired(m_window, "PoiOpenMapButton"));
        m_returnTitle  = safe_cast<TextBlock^>(FindRequired(m_window, "PoiReturnTitle"));
        m_returnList   = safe_cast<ItemsControl^>(FindRequired(m_window, "PoiReturnList"));
        m_viewport    = safe_cast<Border^>(FindRequired(m_window, "MapViewport"));
        m_surface      = safe_cast<Grid^>(FindRequired(m_window, "MapSurface"));
        m_blank        = safe_cast<System::Windows::Shapes::Rectangle^>(FindRequired(m_window, "MapBlank"));
        m_mapImage     = safe_cast<Image^>(FindRequired(m_window, "MapImage"));
        m_markerCanvas = safe_cast<Canvas^>(FindRequired(m_window, "MarkerCanvas"));
    }

    void StageMapWindow::WireEvents()
    {
        m_window->Closed  += gcnew EventHandler(this, &StageMapWindow::OnClosed);
        m_window->KeyDown += gcnew KeyEventHandler(this, &StageMapWindow::OnKeyDown);
        m_backButton->Click += gcnew RoutedEventHandler(this, &StageMapWindow::OnBackClick);
        m_fitButton->Click  += gcnew RoutedEventHandler(this, &StageMapWindow::OnFitClick);
        m_openGenButton->Click += gcnew RoutedEventHandler(this, &StageMapWindow::OnOpenGenClick);
        m_copyButton->Click += gcnew RoutedEventHandler(this, &StageMapWindow::OnCopyClick);
        m_moveButton->Click += gcnew RoutedEventHandler(this, &StageMapWindow::OnMoveClick);
        m_returnList->AddHandler(Button::ClickEvent, gcnew RoutedEventHandler(this, &StageMapWindow::OnReturnCopyClick));

        m_viewport->MouseLeftButtonDown += gcnew MouseButtonEventHandler(this, &StageMapWindow::OnViewportMouseDown);
        m_viewport->MouseMove           += gcnew MouseEventHandler(this, &StageMapWindow::OnViewportMouseMove);
        m_viewport->MouseLeftButtonUp   += gcnew MouseButtonEventHandler(this, &StageMapWindow::OnViewportMouseUp);
        m_viewport->MouseWheel          += gcnew MouseWheelEventHandler(this, &StageMapWindow::OnViewportMouseWheel);
        m_viewport->SizeChanged         += gcnew SizeChangedEventHandler(this, &StageMapWindow::OnViewportSizeChanged);
    }

    // =========================================================================
    // Stage loading
    // =========================================================================

    // Resets the view for `stageId`, starts the image download (when the stage
    // list already knows the url) and the worker that builds the markers.
    void StageMapWindow::LoadStage(long long stageId)
    {
        ++m_gen;
        m_stageId    = stageId;
        m_data       = nullptr;
        m_dataReady  = false;
        m_imageReady = false;
        m_imageNote  = String::Empty;
        m_loadingImage = nullptr;

        ClearStageVisuals();
        m_backButton->IsEnabled = (m_backStack->Count > 0);
        m_statusText->Text = "Loading map...";

        StageEntry^ known = (m_catalog == nullptr) ? nullptr : m_catalog->FindStage(stageId);
        if (known != nullptr)
        {
            m_titleText->Text = String::IsNullOrEmpty(known->Name) ? ("Stage " + stageId.ToString()) : known->Name;
            String^ sub = "Stage " + stageId.ToString();
            if (!String::IsNullOrEmpty(known->StageType))
            {
                sub = sub + " - " + known->StageType;
            }
            if (known->StageLevel > 0)
            {
                sub = sub + " - Lv " + known->StageLevel.ToString();
            }
            m_subtitleText->Text = sub;
            m_window->Title = "Stage map - " + m_titleText->Text;

            if (!String::IsNullOrEmpty(known->MapUrl))
            {
                StartImage(known->MapUrl);
            }
            else
            {
                SetNoImage("No minimap image for this stage");
            }
        }
        else
        {
            m_titleText->Text    = "Stage " + stageId.ToString();
            m_subtitleText->Text = String::Empty;
        }

        Thread^ worker = gcnew Thread(gcnew ParameterizedThreadStart(this, &StageMapWindow::BuildThread));
        worker->IsBackground = true;
        worker->Name = "Stage map build";
        worker->Start(gcnew array<Object^> { m_gen, stageId });
    }

    // Worker thread: joins MapMini + Gen into markers. Touches no UI.
    void StageMapWindow::BuildThread(Object^ state)
    {
        array<Object^>^ args = safe_cast<array<Object^>^>(state);
        int       gen     = safe_cast<int>(args[0]);
        long long stageId = safe_cast<long long>(args[1]);

        StageMapData^ data = nullptr;
        String^ error = nullptr;
        try
        {
            data = m_catalog->BuildStageMap(stageId);
        }
        catch (Exception^ ex)
        {
            error = ex->Message;
        }

        bool stored = false;
        Monitor::Enter(m_lock);
        try
        {
            if (gen == m_gen)
            {
                m_resultGen   = gen;
                m_resultData  = data;
                m_resultError = error;
                stored = true;
            }
        }
        finally
        {
            Monitor::Exit(m_lock);
        }

        if (stored && !m_closed)
        {
            try
            {
                m_window->Dispatcher->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal,
                                                  gcnew System::Action(this, &StageMapWindow::OnMapDataReady));
            }
            catch (Exception^)
            {
                // The window is closing.
            }
        }
    }

    // UI thread: the worker finished.
    void StageMapWindow::OnMapDataReady()
    {
        if (m_closed)
        {
            return;
        }

        StageMapData^ data = nullptr;
        String^ error = nullptr;
        int gen = 0;
        Monitor::Enter(m_lock);
        try
        {
            gen   = m_resultGen;
            data  = m_resultData;
            error = m_resultError;
        }
        finally
        {
            Monitor::Exit(m_lock);
        }

        if (gen != m_gen)
        {
            return;   // a newer stage was requested meanwhile
        }

        if (data == nullptr)
        {
            data = gcnew StageMapData();
            data->StageId = m_stageId;
            data->Pois    = gcnew List<StagePoi^>();
            data->Notice  = String::IsNullOrEmpty(error) ? gcnew String("No map data") : error;
        }
        if (data->Pois == nullptr)
        {
            data->Pois = gcnew List<StagePoi^>();
        }
        m_data = data;

        if (!String::IsNullOrEmpty(data->Name))
        {
            m_titleText->Text = data->Name;
            m_window->Title = "Stage map - " + data->Name;
        }
        String^ sub = "Stage " + m_stageId.ToString();
        if (!String::IsNullOrEmpty(data->StageType))
        {
            sub = sub + " - " + data->StageType;
        }
        if (data->StageLevel > 0)
        {
            sub = sub + " - Lv " + data->StageLevel.ToString();
        }
        m_subtitleText->Text = sub;

        // Image not started yet (stage list did not know the stage): use the data's url.
        if (!m_imageReady && m_loadingImage == nullptr)
        {
            if (!String::IsNullOrEmpty(data->MapUrl))
            {
                StartImage(data->MapUrl);
            }
            else
            {
                SetNoImage("No minimap image for this stage");
            }
        }

        m_dataReady = true;
        TryFinish();
    }

    void StageMapWindow::StartImage(String^ url)
    {
        try
        {
            BitmapImage^ bitmap = gcnew BitmapImage();
            bitmap->BeginInit();
            bitmap->CacheOption = BitmapCacheOption::OnLoad;
            bitmap->UriSource   = gcnew Uri(url, UriKind::Absolute);
            bitmap->EndInit();
            m_loadingImage = bitmap;

            if (bitmap->IsDownloading)
            {
                bitmap->DownloadCompleted += gcnew EventHandler(this, &StageMapWindow::OnBitmapDownloadCompleted);
                bitmap->DownloadFailed    += gcnew EventHandler<ExceptionEventArgs^>(this, &StageMapWindow::OnBitmapDownloadFailed);
            }
            else
            {
                ApplyImage(bitmap);   // already cached / local
            }
        }
        catch (Exception^ ex)
        {
            SetNoImage("Could not load the minimap: " + ex->Message);
        }
    }

    void StageMapWindow::OnBitmapDownloadCompleted(Object^ sender, EventArgs^ /*e*/)
    {
        BitmapImage^ bitmap = dynamic_cast<BitmapImage^>(sender);
        if (m_closed || bitmap == nullptr || !Object::ReferenceEquals(bitmap, m_loadingImage))
        {
            return;   // stale download from a previous stage
        }
        ApplyImage(bitmap);
    }

    void StageMapWindow::OnBitmapDownloadFailed(Object^ sender, ExceptionEventArgs^ e)
    {
        BitmapImage^ bitmap = dynamic_cast<BitmapImage^>(sender);
        if (m_closed || bitmap == nullptr || !Object::ReferenceEquals(bitmap, m_loadingImage))
        {
            return;
        }
        String^ why = (e == nullptr || e->ErrorException == nullptr) ? String::Empty : (": " + e->ErrorException->Message);
        SetNoImage("No minimap image for this stage" + why);
    }

    void StageMapWindow::ApplyImage(BitmapImage^ bitmap)
    {
        double w = bitmap->PixelWidth;
        double h = bitmap->PixelHeight;
        if (w < 1.0 || h < 1.0)
        {
            w = kBlankSize;
            h = kBlankSize;
        }

        m_surfW = w;
        m_surfH = h;
        m_surface->Width       = w;
        m_surface->Height      = h;
        m_markerCanvas->Width  = w;
        m_markerCanvas->Height = h;
        m_blank->Visibility    = Visibility::Collapsed;
        m_mapImage->Source     = bitmap;

        m_imageNote  = String::Empty;
        m_imageReady = true;
        TryFinish();
    }

    // No (usable) image: a dark 1000x1000 surface so markers can still be placed.
    void StageMapWindow::SetNoImage(String^ note)
    {
        m_surfW = kBlankSize;
        m_surfH = kBlankSize;
        m_surface->Width       = kBlankSize;
        m_surface->Height      = kBlankSize;
        m_markerCanvas->Width  = kBlankSize;
        m_markerCanvas->Height = kBlankSize;
        m_mapImage->Source     = nullptr;
        m_blank->Visibility    = Visibility::Visible;

        m_imageNote  = note;
        m_imageReady = true;
        TryFinish();
    }

    // Runs once both the data and the image are in.
    void StageMapWindow::TryFinish()
    {
        if (!m_dataReady || !m_imageReady || m_data == nullptr)
        {
            return;
        }

        BuildFilters();
        for each (KeyValuePair<String^, bool> entry in m_typeVisible)
        {
            if (entry.Value)
            {
                BuildMarkersForType(entry.Key);
            }
        }

        FitView();

        String^ status = String::Format("{0:N0} markers - wheel to zoom, drag to pan", m_data->Pois->Count);
        if (!String::IsNullOrEmpty(m_data->Notice))
        {
            status = m_data->Notice + " | " + status;
        }
        if (!String::IsNullOrEmpty(m_imageNote))
        {
            status = m_imageNote + " | " + status;
        }
        m_statusText->Text = status;
    }

    // =========================================================================
    // Filters and markers
    // =========================================================================

    String^ StageMapWindow::TypeLabel(String^ type)
    {
        if (String::Equals(type, "maplink"))     return "Map Movement";
        if (String::Equals(type, "monster"))     return "Monsters";
        if (String::Equals(type, "npc-special")) return "Merchant NPCs";
        if (String::Equals(type, "npc"))         return "Resident NPCs";
        if (String::Equals(type, "gate"))        return "Landmarks";
        if (String::Equals(type, "event"))       return "Event NPCs";
        if (String::Equals(type, "object"))      return "Objects";
        return "Points of interest";
    }

    Color StageMapWindow::TypeColor(String^ type)
    {
        if (String::Equals(type, "maplink"))     return Color::FromRgb(0xD9, 0xB2, 0x6A);
        if (String::Equals(type, "monster"))     return Color::FromRgb(0xEF, 0x53, 0x50);
        if (String::Equals(type, "npc-special")) return Color::FromRgb(0x4C, 0xAF, 0x50);
        if (String::Equals(type, "npc"))         return Color::FromRgb(0x5A, 0xA9, 0xFF);
        if (String::Equals(type, "gate"))        return Color::FromRgb(0xC7, 0x7D, 0xFF);
        if (String::Equals(type, "event"))       return Color::FromRgb(0xFF, 0xB7, 0x4D);
        if (String::Equals(type, "object"))      return Color::FromRgb(0x26, 0xC6, 0xDA);
        return Color::FromRgb(0x9A, 0x9B, 0xA6);
    }

    SolidColorBrush^ StageMapWindow::BrushFor(String^ type)
    {
        SolidColorBrush^ brush;
        if (!m_typeBrush->TryGetValue(type, brush))
        {
            brush = gcnew SolidColorBrush(TypeColor(type));
            brush->Freeze();
            m_typeBrush[type] = brush;
        }
        return brush;
    }

    // Every marker can be selected to show its details.
    bool StageMapWindow::IsClickable(StagePoi^ poi)
    {
        return poi != nullptr;
    }

    // "X, Y, Z" in whole world units; Z is flagged when the source has none.
    String^ StageMapWindow::Coords(double x, double y, double z, bool hasZ)
    {
        if (hasZ)
        {
            return String::Format("{0:N0}, {1:N0}, {2:N0}", x, y, z);
        }
        return String::Format("{0:N0}, {1:N0} (Z unknown)", x, y);
    }

    bool StageMapWindow::ShowsLabel(String^ type)
    {
        return String::Equals(type, "maplink") || String::Equals(type, "npc") ||
               String::Equals(type, "npc-special") || String::Equals(type, "event");
    }

    // One checkbox per marker type present, with counts. Defaults come from m_typeVisible.
    void StageMapWindow::BuildFilters()
    {
        m_filterPanel->Children->Clear();

        array<String^>^ order = gcnew array<String^> { "maplink", "monster", "object", "npc-special", "npc", "gate", "event", "poi" };
        for each (String^ type in order)
        {
            int count = 0;
            for each (StagePoi^ poi in m_data->Pois)
            {
                if (String::Equals(poi->Type, type))
                {
                    ++count;
                }
            }
            if (count == 0)
            {
                continue;
            }

            StackPanel^ content = gcnew StackPanel();
            content->Orientation = Orientation::Horizontal;

            System::Windows::Shapes::Ellipse^ dot = gcnew System::Windows::Shapes::Ellipse();
            dot->Width  = 10.0;
            dot->Height = 10.0;
            dot->Fill   = BrushFor(type);
            dot->Margin = Thickness(0.0, 0.0, 6.0, 0.0);
            dot->VerticalAlignment = System::Windows::VerticalAlignment::Center;
            content->Children->Add(dot);

            TextBlock^ label = gcnew TextBlock();
            label->Text = String::Format("{0} ({1:N0})", TypeLabel(type), count);
            content->Children->Add(label);

            CheckBox^ box = gcnew CheckBox();
            box->Content = content;
            box->Tag     = type;
            box->Margin  = Thickness(0.0, 0.0, 0.0, 8.0);

            bool ticked = false;
            m_typeVisible->TryGetValue(type, ticked);
            box->IsChecked = Nullable<bool>(ticked);

            box->Checked   += gcnew RoutedEventHandler(this, &StageMapWindow::OnFilterChanged);
            box->Unchecked += gcnew RoutedEventHandler(this, &StageMapWindow::OnFilterChanged);

            m_filterPanel->Children->Add(box);
        }
    }

    // Creates the markers of one type (once per stage). Hidden types are not built
    // until the user ticks them, which keeps big monster layers cheap.
    void StageMapWindow::BuildMarkersForType(String^ type)
    {
        bool built = false;
        if (m_typeBuilt->TryGetValue(type, built) && built)
        {
            return;
        }
        m_typeBuilt[type] = true;

        SolidColorBrush^ fill = BrushFor(type);
        double inverse = (m_scale > 0.0) ? (1.0 / m_scale) : 1.0;
        bool labels = ShowsLabel(type);

        for each (StagePoi^ poi in m_data->Pois)
        {
            if (!String::Equals(poi->Type, type))
            {
                continue;
            }

            Grid^ container = gcnew Grid();
            container->Tag = poi;
            container->Uid = type;
            container->RenderTransformOrigin = Point(0.0, 0.0);
            ScaleTransform^ scaleT = gcnew ScaleTransform(inverse, inverse);
            container->RenderTransform = scaleT;

            System::Windows::Shapes::Ellipse^ dot = gcnew System::Windows::Shapes::Ellipse();
            dot->Width  = kMarkerDiameter;
            dot->Height = kMarkerDiameter;
            dot->Fill   = fill;
            dot->Stroke = Brushes::White;
            dot->StrokeThickness = 1.5;
            dot->Margin = Thickness(-kMarkerDiameter / 2.0, -kMarkerDiameter / 2.0, 0.0, 0.0);
            dot->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
            dot->VerticalAlignment   = System::Windows::VerticalAlignment::Top;
            container->Children->Add(dot);

            // Child 1 is always the (possibly hidden) name label.
            TextBlock^ name = gcnew TextBlock();
            name->Text = poi->Name;
            name->FontSize = 11.0;
            name->Foreground = Brushes::White;
            name->Background = gcnew SolidColorBrush(Color::FromArgb(0xB0, 0x00, 0x00, 0x00));
            name->Padding = Thickness(3.0, 1.0, 3.0, 1.0);
            name->Margin  = Thickness(kMarkerDiameter / 2.0 + 3.0, -9.0, 0.0, 0.0);
            name->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
            name->VerticalAlignment   = System::Windows::VerticalAlignment::Top;
            name->IsHitTestVisible = false;
            name->Visibility = (labels && m_scale >= kLabelZoom && !String::IsNullOrEmpty(poi->Name))
                ? Visibility::Visible : Visibility::Collapsed;
            container->Children->Add(name);

            // Child 2: selection ring, shown only on the marker open in the info panel.
            System::Windows::Shapes::Ellipse^ ring = gcnew System::Windows::Shapes::Ellipse();
            ring->Width  = kMarkerDiameter + 12.0;
            ring->Height = kMarkerDiameter + 12.0;
            ring->Stroke = Brushes::White;
            ring->StrokeThickness = 2.5;
            ring->Fill = Brushes::Transparent;
            ring->Margin = Thickness(-(kMarkerDiameter + 12.0) / 2.0, -(kMarkerDiameter + 12.0) / 2.0, 0.0, 0.0);
            ring->HorizontalAlignment = System::Windows::HorizontalAlignment::Left;
            ring->VerticalAlignment   = System::Windows::VerticalAlignment::Top;
            ring->IsHitTestVisible = false;
            ring->Visibility = Visibility::Collapsed;
            container->Children->Add(ring);

            String^ tip = poi->Name;
            if (String::Equals(type, "monster"))
            {
                tip = String::Format("{0} (Lv {1}) x{2}", poi->Name, poi->Level, poi->Count);
            }
            else if (String::Equals(type, "maplink") && poi->WarpId != 0)
            {
                tip = String::Format("{0} (Warp ID {1})", poi->Name, poi->WarpId);
            }
            container->ToolTip = tip;

            dot->Cursor = Cursors::Hand;

            double px = poi->X / 100.0 * m_surfW;
            double py = poi->Y / 100.0 * m_surfH;
            Canvas::SetLeft(container, px);
            Canvas::SetTop(container, py);

            bool shown = false;
            m_typeVisible->TryGetValue(type, shown);
            container->Visibility = shown ? Visibility::Visible : Visibility::Collapsed;

            container->MouseLeftButtonUp += gcnew MouseButtonEventHandler(this, &StageMapWindow::OnMarkerMouseUp);

            m_markerCanvas->Children->Add(container);
            m_markers->Add(container);
            m_markerScales->Add(scaleT);
        }
    }

    void StageMapWindow::ClearStageVisuals()
    {
        EndPointerInteraction();
        m_markerCanvas->Children->Clear();
        m_markers->Clear();
        m_markerScales->Clear();
        m_typeBuilt->Clear();
        m_filterPanel->Children->Clear();
        m_selectedPoi    = nullptr;
        m_selectedMarker = nullptr;
        m_radiusCircle   = nullptr;   // already removed with MarkerCanvas->Children->Clear() above
        m_copyCommand    = nullptr;
        m_infoPanel->Visibility = Visibility::Collapsed;
        m_mapImage->Source = nullptr;
    }

    void StageMapWindow::ApplyTypeVisibility(String^ type)
    {
        bool shown = false;
        m_typeVisible->TryGetValue(type, shown);
        if (shown)
        {
            BuildMarkersForType(type);
        }
        for each (Grid^ marker in m_markers)
        {
            if (String::Equals(marker->Uid, type))
            {
                marker->Visibility = shown ? Visibility::Visible : Visibility::Collapsed;
            }
        }
    }

    // Keeps markers a constant screen size and toggles name labels with the zoom.
    void StageMapWindow::UpdateMarkerScale()
    {
        double inverse = (m_scale > 0.0) ? (1.0 / m_scale) : 1.0;
        bool labelsOn = (m_scale >= kLabelZoom);

        for (int i = 0; i < m_markerScales->Count; ++i)
        {
            m_markerScales[i]->ScaleX = inverse;
            m_markerScales[i]->ScaleY = inverse;
        }

        if (m_radiusCircle != nullptr)
        {
            m_radiusCircle->StrokeThickness = 1.5 * inverse;   // keep the outline a constant 1.5 px on screen
        }

        for each (Grid^ marker in m_markers)
        {
            if (marker->Visibility != Visibility::Visible || marker->Children->Count < 2)
            {
                continue;
            }
            StagePoi^ poi = dynamic_cast<StagePoi^>(marker->Tag);
            TextBlock^ label = dynamic_cast<TextBlock^>(marker->Children[1]);
            if (poi == nullptr || label == nullptr)
            {
                continue;
            }
            bool wanted = labelsOn && ShowsLabel(poi->Type) && !String::IsNullOrEmpty(poi->Name);
            label->Visibility = wanted ? Visibility::Visible : Visibility::Collapsed;
        }
    }

    // "Respawn: 30-45 s", "Respawn: 60 s" (min == max) or "Respawn: instant" (max 0).
    String^ StageMapWindow::RespawnText(int minSec, int maxSec)
    {
        if (maxSec <= 0)
        {
            return "Respawn: instant";
        }
        if (minSec == maxSec)
        {
            return String::Format("Respawn: {0:N0} s", maxSec);
        }
        return String::Format("Respawn: {0:N0}-{1:N0} s", minSec, maxSec);
    }

    void StageMapWindow::ClearSpawnRadius()
    {
        if (m_radiusCircle != nullptr)
        {
            m_markerCanvas->Children->Remove(m_radiusCircle);
            m_radiusCircle = nullptr;
        }
    }

    // Draws the spawn-radius circle of a monster on MarkerCanvas, centred on its
    // marker. World units -> image pixels: radius / SpanX * width (and SpanY /
    // height for non-square maps). Inserted first so the markers stay on top.
    void StageMapWindow::ShowSpawnRadius(StagePoi^ poi)
    {
        ClearSpawnRadius();
        if (poi == nullptr || m_data == nullptr || !String::Equals(poi->Type, "monster") ||
            poi->SpawnRange <= 0.0 || m_data->SpanX <= 0.0 || m_data->SpanY <= 0.0)
        {
            return;
        }

        double rx = poi->SpawnRange / m_data->SpanX * m_surfW;
        double ry = poi->SpawnRange / m_data->SpanY * m_surfH;
        double cx = poi->X / 100.0 * m_surfW;
        double cy = poi->Y / 100.0 * m_surfH;

        System::Windows::Shapes::Ellipse^ circle = gcnew System::Windows::Shapes::Ellipse();
        circle->Width  = 2.0 * rx;
        circle->Height = 2.0 * ry;
        circle->Fill   = gcnew SolidColorBrush(Color::FromArgb(0x33, 0xEF, 0x53, 0x50));   // ~20% red
        circle->Stroke = gcnew SolidColorBrush(Color::FromRgb(0xEF, 0x53, 0x50));
        circle->StrokeThickness = 1.5 / ((m_scale > 0.0) ? m_scale : 1.0);               // constant on screen
        circle->IsHitTestVisible = false;
        Canvas::SetLeft(circle, cx - rx);
        Canvas::SetTop(circle, cy - ry);

        m_markerCanvas->Children->Insert(0, circle);
        m_radiusCircle = circle;
    }

    // Moves the white selection ring to `marker` (nullptr clears it).
    void StageMapWindow::SelectMarker(Grid^ marker)
    {
        if (m_selectedMarker != nullptr && m_selectedMarker->Children->Count > 2)
        {
            m_selectedMarker->Children[2]->Visibility = Visibility::Collapsed;
        }
        m_selectedMarker = marker;
        if (m_selectedMarker != nullptr && m_selectedMarker->Children->Count > 2)
        {
            m_selectedMarker->Children[2]->Visibility = Visibility::Visible;
        }
    }

    // Info-panel picture: loaded from a url, hidden when empty or unreadable.
    void StageMapWindow::SetInfoImage(String^ url)
    {
        m_infoImage->Source = nullptr;
        m_infoImage->Visibility = Visibility::Collapsed;
        if (String::IsNullOrEmpty(url))
        {
            return;
        }
        try
        {
            BitmapImage^ image = gcnew BitmapImage();
            image->BeginInit();
            image->UriSource = gcnew Uri(url, UriKind::RelativeOrAbsolute);
            image->EndInit();
            m_infoImage->Source = image;
            m_infoImage->Visibility = Visibility::Visible;
        }
        catch (Exception^)
        {
            // Bad url: show the text only.
        }
    }

    // Fills the right-hand panel for one marker. What it shows depends on the type:
    //   monster / object  image, spawn coords, ID, Copy Command (gen / genobject)
    //   npc types         portrait, location, NPC ID
    //   maplink           WarpId, arrival, Copy Warp Command, Move
    //   gate / poi        name and location
    void StageMapWindow::ShowPoiInfo(StagePoi^ poi)
    {
        if (poi == nullptr)
        {
            m_selectedPoi = nullptr;
            m_copyCommand = nullptr;
            ClearSpawnRadius();
            m_infoPanel->Visibility = Visibility::Collapsed;
            return;
        }
        m_selectedPoi = poi;
        ShowSpawnRadius(poi);   // clears the previous circle; draws one only for monsters with a radius

        String^ type = poi->Type;
        bool isMonster = String::Equals(type, "monster");
        bool isObject  = String::Equals(type, "object");
        bool isLink    = String::Equals(type, "maplink");
        bool isNpc     = String::Equals(type, "npc") || String::Equals(type, "npc-special") || String::Equals(type, "event");

        m_infoName->Text = String::IsNullOrEmpty(poi->Name) ? gcnew String("Unknown") : poi->Name;

        String^ meta   = TypeLabel(type);
        String^ coords = String::Empty;
        String^ extra  = String::Empty;
        String^ image  = nullptr;
        String^ command = nullptr;
        String^ commandLabel = "Copy Command";

        String^ whereText = Coords(poi->WorldX, poi->WorldY, poi->WorldZ, poi->HasWorldZ);

        if (isMonster)
        {
            meta = String::Format("Lv {0} - {1}\nSpawn count: {2}", poi->Level, CodexCatalog::MonsterGradeLabel(poi->Grade), poi->Count);
            if (poi->TotalInMap > 0)
            {
                meta = meta + String::Format("\nTotal in map: {0:N0}", poi->TotalInMap);
            }
            meta = meta + "\n" + RespawnText(poi->RespawnMinSec, poi->RespawnMaxSec);
            if (poi->PosId > 0)
            {
                meta = meta + "\nPos ID: " + poi->PosId.ToString();   // row id in Gen\GENDATA_<stage>.json
            }
            coords = "Spawn coords: " + whereText;

            if (poi->SpawnRange <= 0.0)
            {
                coords = coords + "\nSpawn radius: none (fixed point)";
            }
            else if (m_data == nullptr || m_data->SpanX <= 0.0 || m_data->SpanY <= 0.0)
            {
                coords = coords + "\nSpawn radius: unknown (map bounds missing)";
            }
            else
            {
                coords = coords + String::Format("\nSpawn radius: {0:N0} units", poi->SpawnRange);
            }
            long long id = (poi->MonsterId != 0) ? poi->MonsterId : poi->EntityId;
            extra = "Monster ID: " + id.ToString();
            image = poi->IconUrl;
            command = "@cheatmsg gen " + id.ToString() + " 1";
        }
        else if (isObject)
        {
            long long id = poi->EntityId;
            meta = String::Format("Object\nSpawn count: {0}", poi->Count);
            if (poi->RespawnMaxSec > 0)
            {
                meta = meta + "\n" + RespawnText(poi->RespawnMinSec, poi->RespawnMaxSec);   // only when the data has a value
            }
            if (poi->PosId > 0)
            {
                meta = meta + "\nPos ID: " + poi->PosId.ToString();
            }
            coords = "Spawn coords: " + whereText;
            extra = "Object ID: " + id.ToString();
            image = poi->IconUrl;
            if (id != 0)
            {
                command = "@cheatmsg genobject " + id.ToString() + " 1";
            }
        }
        else if (isNpc)
        {
            if (!String::IsNullOrEmpty(poi->Title))
            {
                meta = poi->Title + "\n" + meta;
            }
            coords = "Location: " + whereText;
            if (poi->EntityId > 0)
            {
                extra = "NPC ID: " + poi->EntityId.ToString();
            }
            image = poi->IconUrl;
        }
        else if (isLink)
        {
            coords = "Marker location: " + whereText;

            if (poi->WarpId != 0)
            {
                extra = "Warp ID: " + poi->WarpId.ToString();
                command = "@cheatmsg warp " + poi->WarpId.ToString();
                commandLabel = "Copy Warp Command";
            }
            else
            {
                extra = "Warp ID: unknown";
            }

            String^ destination = poi->TargetStageName;
            if (String::IsNullOrEmpty(destination) && poi->TargetStageId != 0)
            {
                destination = "stage " + poi->TargetStageId.ToString();
            }
            if (poi->HasArrival)
            {
                String^ place = String::IsNullOrEmpty(destination) ? ("stage " + poi->ArrivalStageId.ToString()) : destination;
                extra = extra + "\nArrives at " + place + " (" + Coords(poi->ArrivalX, poi->ArrivalY, poi->ArrivalZ, true) + ")";
            }
            else if (!String::IsNullOrEmpty(destination))
            {
                extra = extra + "\nLeads to " + destination;
            }

            if (poi->TargetStageId != 0 && (poi->ReturnWarps == nullptr || poi->ReturnWarps->Count == 0))
            {
                extra = extra + "\nNo warp back from there into this map was found in the portal / map-link data.";
            }
        }
        else
        {
            coords = "Location: " + whereText;
        }

        m_infoMeta->Text   = meta;
        m_infoCoords->Text = coords;
        m_infoExtra->Text  = extra;
        m_infoCoords->Visibility = String::IsNullOrEmpty(coords) ? Visibility::Collapsed : Visibility::Visible;
        m_infoExtra->Visibility  = String::IsNullOrEmpty(extra)  ? Visibility::Collapsed : Visibility::Visible;

        SetInfoImage(image);

        m_copyCommand = command;
        m_copyButton->Content    = commandLabel;
        m_copyButton->Visibility = (command != nullptr) ? Visibility::Visible : Visibility::Collapsed;

        // "Move" opens the destination stage; only for links that lead somewhere else.
        bool canMove = isLink && poi->TargetStageId != 0 && poi->TargetStageId != m_stageId;
        m_moveButton->Content    = "Move";
        m_moveButton->Visibility = canMove ? Visibility::Visible : Visibility::Collapsed;

        // The way back: warps from the destination into this map, each with its own Copy button.
        bool showBack = isLink && poi->ReturnWarps != nullptr && poi->ReturnWarps->Count > 0;
        if (showBack)
        {
            String^ origin = String::IsNullOrEmpty(poi->TargetStageName) ? String::Format("stage {0}", poi->TargetStageId) : poi->TargetStageName;
            m_returnTitle->Text = String::Format("WARPS BACK FROM {0} INTO THIS MAP ({1})", origin, poi->ReturnWarps->Count)->ToUpperInvariant();
            m_returnList->ItemsSource = poi->ReturnWarps;
        }
        else
        {
            m_returnList->ItemsSource = nullptr;
        }
        m_returnTitle->Visibility = showBack ? Visibility::Visible : Visibility::Collapsed;
        m_returnList->Visibility  = showBack ? Visibility::Visible : Visibility::Collapsed;

        m_infoPanel->Visibility = Visibility::Visible;
    }

    // Loads the stage a map-movement marker leads to into this window.
    void StageMapWindow::MoveToTarget(StagePoi^ poi)
    {
        if (poi == nullptr || poi->TargetStageId == 0 || poi->TargetStageId == m_stageId)
        {
            return;
        }
        m_backStack->Add(m_stageId);
        LoadStage(poi->TargetStageId);
    }

    // =========================================================================
    // View (zoom / pan / fit)
    // =========================================================================

    void StageMapWindow::ApplyView()
    {
        m_scaleTransform->ScaleX = m_scale;
        m_scaleTransform->ScaleY = m_scale;
        m_moveTransform->X = m_tx;
        m_moveTransform->Y = m_ty;
        UpdateMarkerScale();
    }

    void StageMapWindow::FitView()
    {
        double vw = m_viewport->ActualWidth;
        double vh = m_viewport->ActualHeight;
        if (vw < 1.0 || vh < 1.0 || m_surfW < 1.0 || m_surfH < 1.0)
        {
            m_fitPending = true;   // not laid out yet; OnViewportSizeChanged retries
            return;
        }
        m_fitPending = false;

        double scale = Math::Min(vw / m_surfW, vh / m_surfH);
        m_scale = Math::Max(kMinScale, Math::Min(kMaxScale, scale));
        m_tx = (vw - m_surfW * m_scale) / 2.0;
        m_ty = (vh - m_surfH * m_scale) / 2.0;
        ApplyView();
    }

    void StageMapWindow::EndPointerInteraction()
    {
        m_pressed  = false;
        m_dragging = false;
        if (m_viewport != nullptr)
        {
            m_viewport->ReleaseMouseCapture();
            m_viewport->ClearValue(FrameworkElement::CursorProperty);
        }
    }

    // =========================================================================
    // Event handlers
    // =========================================================================

    void StageMapWindow::OnClosed(Object^ /*sender*/, EventArgs^ /*e*/)
    {
        m_closed = true;
    }

    void StageMapWindow::OnKeyDown(Object^ /*sender*/, KeyEventArgs^ e)
    {
        if (e->Key == Key::Escape)
        {
            m_window->Close();
            e->Handled = true;
        }
    }

    void StageMapWindow::OnBackClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_backStack->Count == 0)
        {
            return;
        }
        long long previous = m_backStack[m_backStack->Count - 1];
        m_backStack->RemoveAt(m_backStack->Count - 1);
        LoadStage(previous);
    }

    // Opens the current stage's respawn list (Data\Gen\GENDATA_<stage>.json).
    void StageMapWindow::OnOpenGenClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        try
        {
            String^ path = m_catalog->GenFilePath(m_stageId);
            if (String::IsNullOrEmpty(path) || !System::IO::File::Exists(path))
            {
                m_statusText->Text = "No respawn file for this stage: " + path;
                return;
            }

            System::Diagnostics::Process::Start(path);
            m_statusText->Text = "Opened " + path;
        }
        catch (Exception^ ex)
        {
            m_statusText->Text = "Could not open the respawn file: " + ex->Message;
        }
    }

    void StageMapWindow::OnFitClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        FitView();
    }

    void StageMapWindow::OnFilterChanged(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        CheckBox^ box = dynamic_cast<CheckBox^>(sender);
        if (box == nullptr)
        {
            return;
        }
        String^ type = dynamic_cast<String^>(box->Tag);
        if (String::IsNullOrEmpty(type))
        {
            return;
        }

        Nullable<bool> state = box->IsChecked;
        m_typeVisible[type] = state.HasValue && state.Value;
        ApplyTypeVisibility(type);
        UpdateMarkerScale();   // labels of newly shown markers
    }

    void StageMapWindow::OnViewportMouseDown(Object^ /*sender*/, MouseButtonEventArgs^ e)
    {
        m_pressed   = true;
        m_dragging  = false;
        m_dragStart = e->GetPosition(m_viewport);
        m_dragTx    = m_tx;
        m_dragTy    = m_ty;
        // Capture only once the press turns into a drag, so marker clicks still arrive.
    }

    void StageMapWindow::OnViewportMouseMove(Object^ /*sender*/, MouseEventArgs^ e)
    {
        if (!m_pressed)
        {
            return;
        }
        if (e->LeftButton != MouseButtonState::Pressed)
        {
            EndPointerInteraction();
            return;
        }

        Point position = e->GetPosition(m_viewport);
        double dx = position.X - m_dragStart.X;
        double dy = position.Y - m_dragStart.Y;

        if (!m_dragging)
        {
            if (Math::Abs(dx) + Math::Abs(dy) < kDragThreshold)
            {
                return;
            }
            m_dragging = true;
            m_viewport->CaptureMouse();
            m_viewport->Cursor = Cursors::SizeAll;
        }

        m_tx = m_dragTx + dx;
        m_ty = m_dragTy + dy;
        ApplyView();
    }

    void StageMapWindow::OnViewportMouseUp(Object^ /*sender*/, MouseButtonEventArgs^ /*e*/)
    {
        EndPointerInteraction();
    }

    // Zoom around the cursor: the map point under the mouse stays under it.
    void StageMapWindow::OnViewportMouseWheel(Object^ /*sender*/, MouseWheelEventArgs^ e)
    {
        Point position = e->GetPosition(m_viewport);
        double factor = (e->Delta > 0) ? 1.25 : 0.8;
        double next = Math::Max(kMinScale, Math::Min(kMaxScale, m_scale * factor));
        double k = next / m_scale;

        m_tx = position.X - (position.X - m_tx) * k;
        m_ty = position.Y - (position.Y - m_ty) * k;
        m_scale = next;
        ApplyView();
        e->Handled = true;
    }

    void StageMapWindow::OnViewportSizeChanged(Object^ /*sender*/, SizeChangedEventArgs^ /*e*/)
    {
        if (m_fitPending && m_dataReady && m_imageReady)
        {
            FitView();
        }
    }

    // A click that was not a drag selects the marker and shows its details.
    // Double-clicking a map-movement marker also moves to the destination map.
    void StageMapWindow::OnMarkerMouseUp(Object^ sender, MouseButtonEventArgs^ e)
    {
        bool wasDrag = m_dragging;
        EndPointerInteraction();
        if (wasDrag)
        {
            return;
        }

        Grid^ container = dynamic_cast<Grid^>(sender);
        StagePoi^ poi = (container == nullptr) ? nullptr : dynamic_cast<StagePoi^>(container->Tag);
        if (poi == nullptr)
        {
            return;
        }
        e->Handled = true;

        if (e->ClickCount >= 2 && String::Equals(poi->Type, "maplink"))
        {
            MoveToTarget(poi);
            return;
        }

        SelectMarker(container);
        ShowPoiInfo(poi);
    }

    // Copies the command prepared by ShowPoiInfo (gen / genobject / warp).
    void StageMapWindow::OnCopyClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (String::IsNullOrEmpty(m_copyCommand))
        {
            return;
        }
        try
        {
            // copy=true keeps the text on the clipboard after the window closes and
            // retries if another app briefly holds the clipboard.
            Clipboard::SetDataObject(m_copyCommand, true);
            m_statusText->Text = "Copied: " + m_copyCommand;
        }
        catch (Exception^ ex)
        {
            m_statusText->Text = "Could not copy to the clipboard: " + ex->Message;
        }
    }

    void StageMapWindow::OnMoveClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        MoveToTarget(m_selectedPoi);
    }

    // A Copy button inside the return-warp list (the command is stored on the button's Tag).
    void StageMapWindow::OnReturnCopyClick(Object^ /*sender*/, RoutedEventArgs^ e)
    {
        Button^ button = dynamic_cast<Button^>(e->OriginalSource);
        if (button == nullptr || button->Tag == nullptr)
        {
            return;
        }
        String^ command = button->Tag->ToString();
        try
        {
            Clipboard::SetDataObject(command, true);
            m_statusText->Text = "Copied: " + command;
        }
        catch (Exception^ ex)
        {
            m_statusText->Text = "Could not copy: " + ex->Message;
        }
        e->Handled = true;
    }
}
