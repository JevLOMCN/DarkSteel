#pragma once

// =============================================================================
// DarkSteelStudio - StageMapWindow  (C++/CLI + WPF, runtime-loaded XAML)
//
// Non-modal window that shows one stage's minimap with its markers, the same
// view the ReMir website's world-map modal gives:
//   * the minimap image comes from the CDN (StageMapData::MapUrl) and is laid
//     out at its native pixel size inside MapSurface; the mouse wheel zooms
//     around the cursor and a left-drag pans (a ScaleTransform + a
//     TranslateTransform set from code - no ScrollViewer);
//   * markers (map links, landmarks, NPCs, monster spawns) are ellipses on
//     MarkerCanvas at X%/Y% of the image, counter-scaled so they keep a
//     constant screen size while zooming. Only the types ticked in the left
//     filter strip are shown (map links by default, like the site);
//   * clicking any marker selects it (white ring) and fills the info panel:
//     monsters/objects show their image, spawn coords and a Copy Command button
//     (@cheatmsg gen / genobject <id> 1); NPCs show portrait and location; map
//     links show the WarpId, where it arrives, a Copy Warp Command button
//     (@cheatmsg warp <WarpId>) and a "Move" button (double-clicking the marker
//     does the same) that loads the destination stage into the same window
//     (Back returns).
// The stage data is built by CodexCatalog::BuildStageMap on a worker thread
// and handed back to the UI thread through the dispatcher.
//
// Layout lives in Xaml\StageMapWindow.xaml (no x:Class / event attributes; the
// controls are found by name). C++/CLI rules as elsewhere: events are bound to
// member functions, native aggregates are never ref-class members.
// =============================================================================

#include "CodexCatalog.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;

    public ref class StageMapWindow {
    public:
        // `xamlRoot` is the folder holding StageMapWindow.xaml (MainWindow::m_xamlRoot).
        StageMapWindow(CodexCatalog^ catalog, System::Windows::Window^ owner, String^ xamlRoot, long long stageId);

        void Show();

    private:
        // ---- inputs / window ---------------------------------------------------
        CodexCatalog^                  m_catalog;
        System::Windows::Window^       m_owner;
        String^                        m_xamlRoot;
        System::Windows::Window^       m_window;
        bool                           m_closed;

        // ---- controls ------------------------------------------------------------
        System::Windows::Controls::TextBlock^  m_titleText;
        System::Windows::Controls::TextBlock^  m_subtitleText;
        System::Windows::Controls::TextBlock^  m_statusText;
        System::Windows::Controls::Button^     m_backButton;
        System::Windows::Controls::Button^     m_fitButton;
        System::Windows::Controls::Button^     m_openGenButton;   // MapOpenGenButton "Respawn JSON"
        System::Windows::Controls::StackPanel^ m_filterPanel;
        System::Windows::Controls::Border^     m_infoPanel;
        System::Windows::Controls::Image^      m_infoImage;
        System::Windows::Controls::TextBlock^  m_infoName;
        System::Windows::Controls::TextBlock^  m_infoMeta;
        System::Windows::Controls::TextBlock^  m_infoCoords;
        System::Windows::Controls::TextBlock^  m_infoExtra;
        System::Windows::Controls::Button^     m_copyButton;
        System::Windows::Controls::Button^     m_moveButton;     // PoiOpenMapButton, labelled "Move"
        System::Windows::Controls::TextBlock^  m_returnTitle;    // PoiReturnTitle: "warps back into this map"
        System::Windows::Controls::ItemsControl^ m_returnList;   // PoiReturnList: one row + Copy button per return warp
        System::Windows::Controls::Border^     m_viewport;
        System::Windows::Controls::Grid^       m_surface;
        System::Windows::Shapes::Rectangle^    m_blank;
        System::Windows::Controls::Image^      m_mapImage;
        System::Windows::Controls::Canvas^     m_markerCanvas;

        // ---- current stage ---------------------------------------------------------
        long long                      m_stageId;
        int                            m_gen;                // bumped on every LoadStage; stale results are dropped
        List<long long>^               m_backStack;
        StageMapData^                  m_data;
        bool                           m_dataReady;
        bool                           m_imageReady;
        String^                        m_imageNote;          // why there is no image (empty when fine)
        System::Windows::Media::Imaging::BitmapImage^ m_loadingImage;
        double                         m_surfW;
        double                         m_surfH;

        // ---- worker hand-off ---------------------------------------------------------
        Object^                        m_lock;
        int                            m_resultGen;
        StageMapData^                  m_resultData;
        String^                        m_resultError;

        // ---- view state ------------------------------------------------------------------
        double                         m_scale;
        double                         m_tx;
        double                         m_ty;
        bool                           m_fitPending;
        System::Windows::Media::ScaleTransform^     m_scaleTransform;
        System::Windows::Media::TranslateTransform^ m_moveTransform;
        bool                           m_pressed;            // left button is down in the viewport
        bool                           m_dragging;           // moved >= 4 px, mouse captured
        System::Windows::Point         m_dragStart;
        double                         m_dragTx;
        double                         m_dragTy;

        // ---- markers --------------------------------------------------------------------
        Dictionary<String^, bool>^     m_typeVisible;        // type -> ticked
        Dictionary<String^, bool>^     m_typeBuilt;          // type -> markers created for this stage
        System::Windows::Shapes::Ellipse^ m_radiusCircle;    // spawn-radius circle of the selected monster (on MarkerCanvas, behind the markers)
        StagePoi^                      m_selectedPoi;        // marker shown in the info panel
        System::Windows::Controls::Grid^ m_selectedMarker;   // its container (child 2 is the highlight ring)
        String^                        m_copyCommand;        // text PoiCopyButton puts on the clipboard
        List<System::Windows::Controls::Grid^>^ m_markers;   // every marker container (Tag = StagePoi, Name of type in Uid)
        List<System::Windows::Media::ScaleTransform^>^ m_markerScales;
        Dictionary<String^, System::Windows::Media::SolidColorBrush^>^ m_typeBrush;

        // ---- setup ---------------------------------------------------------------------------
        void LoadWindowXaml();
        void BindControls();
        void WireEvents();
        static Object^ FindRequired(System::Windows::FrameworkElement^ root, String^ name);

        // ---- stage loading -------------------------------------------------------------
        void LoadStage(long long stageId);
        void BuildThread(Object^ state);
        void OnMapDataReady();
        void StartImage(String^ url);
        void SetNoImage(String^ note);
        void ApplyImage(System::Windows::Media::Imaging::BitmapImage^ bitmap);
        void TryFinish();

        // ---- markers / filters --------------------------------------------------------
        void BuildFilters();
        void BuildMarkersForType(String^ type);
        void ClearStageVisuals();
        void ApplyTypeVisibility(String^ type);
        void UpdateMarkerScale();
        void ShowPoiInfo(StagePoi^ poi);
        void SelectMarker(System::Windows::Controls::Grid^ marker);
        void SetInfoImage(String^ url);
        void MoveToTarget(StagePoi^ poi);
        void ClearSpawnRadius();
        void ShowSpawnRadius(StagePoi^ poi);
        static String^ RespawnText(int minSec, int maxSec);
        static String^ Coords(double x, double y, double z, bool hasZ);
        static String^ TypeLabel(String^ type);
        static System::Windows::Media::Color TypeColor(String^ type);
        System::Windows::Media::SolidColorBrush^ BrushFor(String^ type);
        static bool IsClickable(StagePoi^ poi);
        static bool ShowsLabel(String^ type);

        // ---- view -------------------------------------------------------------------------------
        void FitView();
        void ApplyView();
        void EndPointerInteraction();

        // ---- events -----------------------------------------------------------------------------
        void OnClosed(Object^ sender, EventArgs^ e);
        void OnKeyDown(Object^ sender, System::Windows::Input::KeyEventArgs^ e);
        void OnBackClick(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnFitClick(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnOpenGenClick(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnFilterChanged(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnViewportMouseDown(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OnViewportMouseMove(Object^ sender, System::Windows::Input::MouseEventArgs^ e);
        void OnViewportMouseUp(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OnViewportMouseWheel(Object^ sender, System::Windows::Input::MouseWheelEventArgs^ e);
        void OnViewportSizeChanged(Object^ sender, System::Windows::SizeChangedEventArgs^ e);
        void OnMarkerMouseUp(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e);
        void OnCopyClick(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnMoveClick(Object^ sender, System::Windows::RoutedEventArgs^ e);
        void OnReturnCopyClick(Object^ sender, System::Windows::RoutedEventArgs^ e);   // Copy buttons inside PoiReturnList
        void OnBitmapDownloadCompleted(Object^ sender, EventArgs^ e);
        void OnBitmapDownloadFailed(Object^ sender, System::Windows::Media::ExceptionEventArgs^ e);
    };
}
