// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 256

// OnCreateRenderThreadResources'' @ 141401330

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnCreateRenderThreadResources__);
  return;
}

// OnDestroyRenderThreadResources'' @ 141401350

void __cdecl
`dynamic_initializer_for_'Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
         OnDestroyRenderThreadResources__);
  return;
}

// StreamlineLatencyMarkers'' @ 141401370

void __cdecl `dynamic_initializer_for_'FStreamlineLatencyMarkers::StreamlineLatencyMarkers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStreamlineLatencyMarkers::StreamlineLatencyMarkers__);
  return;
}

// StreamlineMaxTickRateHandler'' @ 141401390

void __cdecl
`dynamic_initializer_for_'FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStreamlineMaxTickRateHandler::
         StreamlineMaxTickRateHandler__);
  return;
}

// TrackedViews'' @ 1414013b0

void __cdecl `dynamic_initializer_for_'FStreamlineViewExtension::TrackedViews__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStreamlineViewExtension::TrackedViews__);
  return;
}

// `dynamic_initializer_for_'CVarLatewarpEnable'' @ 1414013d0

void __cdecl _dynamic_initializer_for__CVarLatewarpEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLatewarpEnable,L"r.Streamline.Latewarp.Enable",local_res8,
             L"Enable/disable Latewarp (default = 1)\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarLatewarpEnable__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineClearColorAlpha'' @ 141401420

void __cdecl _dynamic_initializer_for__CVarStreamlineClearColorAlpha__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineClearColorAlpha,L"r.Streamline.ClearSceneColorAlpha",local_res8,
             L"Clear alpha of scenecolor at the end of the Streamline view extension to allow subsequent UI drawcalls be represented correctly in the alpha channel (default = true)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineClearColorAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineCustomCameraFarPlane'' @ 141401470

void __cdecl _dynamic_initializer_for__CVarStreamlineCustomCameraFarPlane__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 75000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineCustomCameraFarPlane,L"r.Streamline.CustomCameraFarPlane",local_res8,
             L"Custom distance to camera far plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 75000.0f)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineCustomCameraFarPlane__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineCustomCameraNearPlane'' @ 1414014c0

void __cdecl _dynamic_initializer_for__CVarStreamlineCustomCameraNearPlane__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.01;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineCustomCameraNearPlane,L"r.Streamline.CustomCameraNearPlane",local_res8,
             L"Custom distance to camera near plane. Used for internal DLSS Frame Generation purposes, does not need to match corresponding value used by engine. (default = 0.01f)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineCustomCameraNearPlane__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGAdjustMotionBlurTimeScale'' @ 141401510

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGAdjustMotionBlurTimeScale__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDLSSGAdjustMotionBlurTimeScale,
             L"r.Streamline.DLSSG.AdjustMotionBlurTimeScale",local_res8,
             L"When DLSS-G is active, adjust the motion blur timescale based on the generated frames\n0: disabled\n1: enabled, not supporting auto mode\n2: enabled, supporting auto mode by using last frame\'s actually presented frames (default)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGAdjustMotionBlurTimeScale__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGCheckStatusPerFrame'' @ 141401560

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGCheckStatusPerFrame__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineDLSSGCheckStatusPerFrame,L"r.Streamline.DLSSG.CheckStatusPerFrame",
             local_res8,
             L"Check the DLSSG status at runtime and assert if it\'s failing somehow (default = true)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGCheckStatusPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGDynamicResolutionMode'' @ 1414015b0

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGDynamicResolutionMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDLSSGDynamicResolutionMode,L"r.Streamline.DLSSG.DynamicResolutionMode",
             local_res8,
             L"Experimental: Pass in sl::DLSSGFlags::eDynamicResolutionEnabled (default = 0)\n0: off\n1: on\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGDynamicResolutionMode__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGEnable'' @ 141401600

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDLSSGEnable,L"r.Streamline.DLSSG.Enable",local_res8,
             L"DLSS-FG mode (default = 0)\n0: off\n1: always on\n2: auto mode (on only when it helps)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGEnable__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGFramesToGenerate'' @ 141401650

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGFramesToGenerate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDLSSGFramesToGenerate,L"r.Streamline.DLSSG.FramesToGenerate",local_res8,
             L"Number of frames to generate  (default = 1)\n1..3: \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGFramesToGenerate__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDLSSGRetainResourcesWhenOff'' @ 1414016a0

void __cdecl _dynamic_initializer_for__CVarStreamlineDLSSGRetainResourcesWhenOff__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineDLSSGRetainResourcesWhenOff,L"r.Streamline.DLSSG.RetainResourcesWhenOff"
             ,local_res8,
             L"Instruct DLSS-G to not release resources when turned off (default = false)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDLSSGRetainResourcesWhenOff__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDeepDVCEnable'' @ 1414016f0

void __cdecl _dynamic_initializer_for__CVarStreamlineDeepDVCEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDeepDVCEnable,L"r.Streamline.DeepDVC.Enable",local_res8,
             L"DeepDVC mode (default = 0)\n0: off\n1: always on\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDeepDVCEnable__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDeepDVCIntensity'' @ 141401740

void __cdecl _dynamic_initializer_for__CVarStreamlineDeepDVCIntensity__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineDeepDVCIntensity,L"r.Streamline.DeepDVC.Intensity",local_res8,
             L"DeepDVC Intensity (default = 0.5, range [0..1])\nControls how strong or subtle the filter effect will be on an image.\nA low intensity will keep the images closer to the original, while a high intensity will make the filter effect more pronounced.\nNote: \'0\' disables DeepDVC implicitely\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDeepDVCIntensity__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDeepDVCSaturationBoost'' @ 141401790

void __cdecl _dynamic_initializer_for__CVarStreamlineDeepDVCSaturationBoost__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineDeepDVCSaturationBoost,L"r.Streamline.DeepDVC.SaturationBoost",
             local_res8,
             L"DeepDVC SaturationBoost(default = 0.5) [0..1]\nEnhances the colors in them image, making them more vibrant and eye-catching.\nThis setting will only be active if r.Streamline.DeepDVC.Intensity is relatively high. Once active, colors pop up more, making the image look more lively.\nNote: Applied only when r.Streamline.DeepDVC.Intensity > 0\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDeepDVCSaturationBoost__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineDilateMotionVectors'' @ 1414017e0

void __cdecl _dynamic_initializer_for__CVarStreamlineDilateMotionVectors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineDilateMotionVectors,L"r.Streamline.DilateMotionVectors",local_res8,
             L" 0: pass low resolution motion vectors into DLSS Frame Generation (default)\n 1: pass dilated high resolution motion vectors into DLSS Frame Generation. This can help with improving image quality of thin details."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineDilateMotionVectors__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineEditorTagUIColorAlpha'' @ 141401830

void __cdecl _dynamic_initializer_for__CVarStreamlineEditorTagUIColorAlpha__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineEditorTagUIColorAlpha,L"r.Streamline.Editor.TagUIColorAlpha",local_res8,
             L"Experimental: Pass UI color and alpha into Streamline in Editor PIE windows (default = false)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineEditorTagUIColorAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineForceTagging'' @ 141401880

void __cdecl _dynamic_initializer_for__CVarStreamlineForceTagging__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineForceTagging,L"r.Streamline.ForceTagging",local_res8,
             L"Force tagging Streamline resources even if they are not required based on active Streamline features (default = false)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineForceTagging__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineFullScreenMenuDetection'' @ 1414018d0

void __cdecl _dynamic_initializer_for__CVarStreamlineFullScreenMenuDetection__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineFullScreenMenuDetection,L"r.Streamline.DLSSG.FullScreenMenuDetection",
             local_res8,
             L"Automatically disable DLSS-FG if full screen menus are detected (default = false)\n",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineFullScreenMenuDetection__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineLogTrackedViews'' @ 141401920

void __cdecl _dynamic_initializer_for__CVarStreamlineLogTrackedViews__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamlineLogTrackedViews,L"r.Streamline.LogTrackedViews",
             &bLogStreamlineLogTrackedViews,
             L"Enable/disable whether to log which views & backbuffers are associated with each other at various parts of rendering. Most useful when developing & debugging multi view port multi window code. Can be overriden with -sl{no}logviewtracking\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineLogTrackedViews__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineMotionVectorScale'' @ 141401970

void __cdecl _dynamic_initializer_for__CVarStreamlineMotionVectorScale__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineMotionVectorScale,L"r.Streamline.MotionVectorScale",local_res8,
             L"Scale DLSS Frame Generation motion vectors by this constant, in addition to the scale by 1/ the view rect size. (default = 1)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineMotionVectorScale__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexActorDebug'' @ 1414019c0

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexActorDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexActorDebug,L"r.Streamline.Reflex.ActorDebug",local_res8,
             L"Whether Actor debug messages are shown. (default = 0)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexActorDebug__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexAuto'' @ 141401a10

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexAuto__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexAuto,L"t.Streamline.Reflex.Auto",local_res8,
             L"Enable Streamline Reflex extension when other SL features need it. (default = 1)\n0: Disabled\n1: Enabled)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexAuto__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexCameraPredictor'' @ 141401a60

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexCameraPredictor__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineReflexCameraPredictor,L"r.Streamline.Reflex.CameraPredictor",local_res8,
             L"Which predictive rendering camera predictor to use (default = 0)\n0: Use the first person predictor\n1: Use the third person predictor\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexCameraPredictor__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexClipCorrection'' @ 141401ab0

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexClipCorrection__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineReflexClipCorrection,L"r.Streamline.Reflex.ClipCorrection",local_res8,
             L"Whether clip correction is enabled or not. (default = 0)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexClipCorrection__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexClipRadius'' @ 141401b00

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexClipRadius__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineReflexClipRadius,L"r.Streamline.Reflex.ClipRadius",local_res8,
             L"Collision radius for camera extrapolation clipping. (default = 10.f)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexClipRadius__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexEnable'' @ 141401b50

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexEnable,L"t.Streamline.Reflex.Enable",local_res8,
             L"Enable Streamline Reflex extension. (default = 0)\n0: Disabled\n1: Enabled)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexEnable__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexEnableInEditor'' @ 141401ba0

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexEnableInEditor__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineReflexEnableInEditor,L"t.Streamline.Reflex.EnableInEditor",local_res8,
             L"Enable Streamline Reflex and PC Latency in the editor. (default = 1)\n0: Disabled\n1: Enabled)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexEnableInEditor__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexEnableLatencyMarkers'' @ 141401bf0

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexEnableLatencyMarkers__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexEnableLatencyMarkers,L"t.Streamline.Reflex.EnableLatencyMarkers",
             local_res8,
             L"Enable Streamline PC Latency metrics. (default = 1)\n0: Disabled\n1: Enabled)\n",0x20
            );
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexEnableLatencyMarkers__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexHandleMaxTickRate'' @ 141401c40

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexHandleMaxTickRate__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineReflexHandleMaxTickRate,L"t.Streamline.Reflex.HandleMaxTickRate",
             local_res8,
             L"Controls whether Streamline Reflex handles frame rate limiting instead of the engine (default = true)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexHandleMaxTickRate__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexMode'' @ 141401c90

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexMode,L"t.Streamline.Reflex.Mode",local_res8,
             L"Streamline Reflex mode (default = 1)\n0: off \n1: low latency\n2: low latency with boost\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexMode__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexPredictiveRendering'' @ 141401ce0

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexPredictiveRendering__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineReflexPredictiveRendering,L"r.Streamline.Reflex.PredictiveRendering",
             local_res8,
             L"Whether predictive rendering is enabled or not. (default = 0), since stock engine\n",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexPredictiveRendering__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineReflexPredictiveRenderingLateUpdateMode'' @ 141401d30

void __cdecl _dynamic_initializer_for__CVarStreamlineReflexPredictiveRenderingLateUpdateMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineReflexPredictiveRenderingLateUpdateMode,
             L"r.Streamline.Reflex.PredictiveRendering.LateUpdateMode",local_res8,
             L"Select how the late update matrix is applied. (default = 1)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineReflexPredictiveRenderingLateUpdateMode__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagBackbuffer'' @ 141401d80

void __cdecl _dynamic_initializer_for__CVarStreamlineTagBackbuffer__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagBackbuffer,L"r.Streamline.TagBackbuffer",local_res8,
             L"Pass backbuffer extent into Streamline (default = true)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagBackbuffer__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagCustomDepth'' @ 141401dd0

void __cdecl _dynamic_initializer_for__CVarStreamlineTagCustomDepth__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagCustomDepth,L"r.Streamline.TagCustomDepth",local_res8,
             L"Pass custom depth into Streamline  (default = false)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagCustomDepth__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagEditorSceneColorWithoutHUD'' @ 141401e20

void __cdecl _dynamic_initializer_for__CVarStreamlineTagEditorSceneColorWithoutHUD__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagEditorSceneColorWithoutHUD,
             L"r.Streamline.Editor.TagSceneColorWithoutHUD",local_res8,
             L"Pass scene color without HUD into DLSS Frame Generation in the editor (default = true)\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagEditorSceneColorWithoutHUD__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagSceneColorWithoutHUD'' @ 141401e70

void __cdecl _dynamic_initializer_for__CVarStreamlineTagSceneColorWithoutHUD__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagSceneColorWithoutHUD,L"r.Streamline.TagSceneColorWithoutHUD",
             local_res8,
             L"Pass scene color without HUD into DLSS Frame Generation (default = true)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagSceneColorWithoutHUD__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagUIColorAlpha'' @ 141401ec0

void __cdecl _dynamic_initializer_for__CVarStreamlineTagUIColorAlpha__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagUIColorAlpha,L"r.Streamline.TagUIColorAlpha",local_res8,
             L"Pass UI color and alpha into Streamline (default = true)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagUIColorAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagUIColorAlphaThreshold'' @ 141401f10

void __cdecl _dynamic_initializer_for__CVarStreamlineTagUIColorAlphaThreshold__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStreamlineTagUIColorAlphaThreshold,L"r.Streamline.TagUIColorAlphaThreshold",
             local_res8,L"UI extraction pass alpha threshold value(default = 0.0) \n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagUIColorAlphaThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineTagVelocities'' @ 141401f60

void __cdecl _dynamic_initializer_for__CVarStreamlineTagVelocities__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineTagVelocities,L"r.Streamline.TagVelocities",local_res8,
             L"Pass motion vectors into Streamline  (default = true)\n",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineTagVelocities__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineUnregisterReflexPlugin'' @ 141401fb0

void __cdecl _dynamic_initializer_for__CVarStreamlineUnregisterReflexPlugin__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineUnregisterReflexPlugin,L"r.Streamline.UnregisterReflexPlugin",local_res8
             ,
             L"The existing NVAPI based UE Reflex plugin is incompatible with the DLSS Frame Generation based implementation. This cvar controls whether the Reflex plugin should be unregistered from the engine or not.\n0: keep Reflex plugin modular features registered\n1: unregister Reflex plugin modular features. The Reflex blueprint library should work with the DLSS Frame Generation plugin modular features 🤞\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineUnregisterReflexPlugin__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineViewIdOverride'' @ 141402000

void __cdecl _dynamic_initializer_for__CVarStreamlineViewIdOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineViewIdOverride,L"r.Streamline.ViewIdOverride",local_res8,
             L"Replace the view id passed into Streamline based on\n-1: Automatic, based on the state of r.Streamline.ViewIndexToTag (default)\n0: use ViewState.UniqueID \n1: overrride to 0 )\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineViewIdOverride__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineViewIndexToTag'' @ 141402050

void __cdecl _dynamic_initializer_for__CVarStreamlineViewIndexToTag__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineViewIndexToTag,L"r.Streamline.ViewIndexToTag",local_res8,
             L"Which view of a view family to tag\n-1: all views (default)\n0: first view\n1..n: nth view, typically up to 3 when having 4 player split screen view families\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineViewIndexToTag__);
  return;
}

// `dynamic_initializer_for_'GPUStat_Latewarp'' @ 1414020a0

void __cdecl _dynamic_initializer_for__GPUStat_Latewarp__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_Latewarp__);
  return;
}

// `dynamic_initializer_for_'GPUStat_Streamline'' @ 1414020c0

void __cdecl _dynamic_initializer_for__GPUStat_Streamline__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_Streamline__);
  return;
}

// `dynamic_initializer_for_'GPUStat_StreamlineDeepDVC'' @ 1414020e0

void __cdecl _dynamic_initializer_for__GPUStat_StreamlineDeepDVC__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_StreamlineDeepDVC__);
  return;
}

// `dynamic_initializer_for_'GameThreadDebugMessages'' @ 141402100

void __cdecl _dynamic_initializer_for__GameThreadDebugMessages__(void)

{
  atexit(_dynamic_atexit_destructor_for__GameThreadDebugMessages__);
  return;
}

// `dynamic_initializer_for_'GameThreadDebugMessagesCS'' @ 141402120

void __cdecl _dynamic_initializer_for__GameThreadDebugMessagesCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS,4000);
  atexit(_dynamic_atexit_destructor_for__GameThreadDebugMessagesCS__);
  return;
}

// `dynamic_initializer_for_'LogStreamline'' @ 141402150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamline__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamline,L"LogStreamline",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamline__);
  return;
}

// `dynamic_initializer_for_'LogStreamlineLatewarp'' @ 141402190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineLatewarp__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineLatewarp,L"LogStreamlineLatewarp",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineLatewarp__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineCore'' @ 1414021d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineCore",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStreamlineCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RenderThreadDebugMessages'' @ 141402220

void __cdecl _dynamic_initializer_for__RenderThreadDebugMessages__(void)

{
  atexit(_dynamic_atexit_destructor_for__RenderThreadDebugMessages__);
  return;
}

// `dynamic_initializer_for_'RenderThreadDebugMessagesCS'' @ 141402240

void __cdecl _dynamic_initializer_for__RenderThreadDebugMessagesCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS,4000);
  atexit(_dynamic_atexit_destructor_for__RenderThreadDebugMessagesCS__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion'' @ 141402270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesAmbientOcclusion>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesAmbientOcclusion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesAmbientOcclusion,
               *pFVar1,L"Ambient Occlusion","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesLightCache'' @ 141402300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesLightCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesLightCache ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesLightCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesLightCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesLightCache,
               *pFVar1,L"Light Cache","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking'' @ 141402390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesMaterialBaking>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesMaterialBaking");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesMaterialBaking,
               *pFVar1,L"Material Baking","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesShadows'' @ 141402420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesShadows__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesShadows ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesShadows>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesShadows");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesShadows,*pFVar1,
               L"Shadows","STATGROUP_HeterogeneousVolumesRT","STATCAT_HeterogeneousVolumes",
               L"Heterogeneous Volumes RT",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering'' @ 1414024b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering ==
      (FThreadSafeStaticStat<FStat_STATGROUP_HeterogeneousVolumesSingleScattering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STATGROUP_HeterogeneousVolumesSingleScattering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STATGROUP_HeterogeneousVolumesSingleScattering,
               *pFVar1,L"Single Scattering","STATGROUP_HeterogeneousVolumesRT",
               "STATCAT_HeterogeneousVolumes",L"Heterogeneous Volumes RT",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSGAverageFPS'' @ 141402540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSGAverageFPS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSGAverageFPS == (FThreadSafeStaticStat<FStat_STAT_DLSSGAverageFPS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSGAverageFPS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGAverageFPS,*pFVar1,
               L"DLSS-G: Average FPS","STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",true,true,
               NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSGFramesPresented'' @ 1414025d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSGFramesPresented__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSGFramesPresented ==
      (FThreadSafeStaticStat<FStat_STAT_DLSSGFramesPresented>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSGFramesPresented");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGFramesPresented,*pFVar1,
               L"DLSS-G: Frames Presented","STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSGMaxGeneratedFrames'' @ 141402660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSGMaxGeneratedFrames__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSGMaxGeneratedFrames ==
      (FThreadSafeStaticStat<FStat_STAT_DLSSGMaxGeneratedFrames>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSGMaxGeneratedFrames");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMaxGeneratedFrames,*pFVar1,
               L"DLSS-G: Maximum Number of Generated Frames ","STATGROUP_DLSSG","STATCAT_Advanced",
               L"DLSS-G",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSGMinGeneratedFrames'' @ 1414026f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSGMinGeneratedFrames__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSGMinGeneratedFrames ==
      (FThreadSafeStaticStat<FStat_STAT_DLSSGMinGeneratedFrames>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSGMinGeneratedFrames");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMinGeneratedFrames,*pFVar1,
               L"DLSS-G: Minimum Number of Generated Frames ","STATGROUP_DLSSG","STATCAT_Advanced",
               L"DLSS-G",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DLSSGMinWidthOrHeight'' @ 141402780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DLSSGMinWidthOrHeight__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DLSSGMinWidthOrHeight ==
      (FThreadSafeStaticStat<FStat_STAT_DLSSGMinWidthOrHeight>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DLSSGMinWidthOrHeight");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMinWidthOrHeight,*pFVar1,
               L"DLSS-G: Minimum Width or Height ","STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeepDVCVRAMEstimate'' @ 141402810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeepDVCVRAMEstimate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeepDVCVRAMEstimate == (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_DeepDVCVRAMEstimate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeepDVCVRAMEstimate,*pFVar1,
               L"DeepDVC: VRAM Estimate (MiB)","STATGROUP_DeepDVC","STATCAT_Advanced",L"DeepDVC",
               true,true,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GameTickReflexWaitTime'' @ 1414028a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GameTickReflexWaitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GameTickReflexWaitTime ==
      (FThreadSafeStaticStat<FStat_STAT_GameTickReflexWaitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GameTickReflexWaitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameTickReflexWaitTime,*pFVar1,
               L"Game thread wait time (Reflex)","STATGROUP_Threading","STATCAT_Advanced",
               L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14de69970

void * __thiscall
IStreamlineModuleInterface::_scalar_deleting_destructor_
          (IStreamlineModuleInterface *this,uint param_1)

{
  *this = (IStreamlineModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de6a110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FStreamlineCoreModule::_scalar_deleting_destructor_(FStreamlineCoreModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamlineViewExtension).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// operator()<sl::DLSSGOptions_*> @ 14de6a7f0

/* WARNING: Removing unreachable block (ram,0x00014de6a8d7) */

void __thiscall
StringifySLArgument::operator()<sl::DLSSGOptions_*>
          (StringifySLArgument *this,DLSSGOptions **param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"arg%d");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator()<sl::DLSSGState> @ 14de6a8f0

/* WARNING: Removing unreachable block (ram,0x00014de6a9d7) */

void __thiscall
StringifySLArgument::operator()<sl::DLSSGState>(StringifySLArgument *this,DLSSGState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"arg%d");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator()<sl::DeepDVCState> @ 14de6a9f0

/* WARNING: Removing unreachable block (ram,0x00014de6aad7) */

void __thiscall
StringifySLArgument::operator()<sl::DeepDVCState>(StringifySLArgument *this,DeepDVCState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"arg%d");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator()<sl::PCLState> @ 14de6aaf0

/* WARNING: Removing unreachable block (ram,0x00014de6abd7) */

void __thiscall
StringifySLArgument::operator()<sl::PCLState>(StringifySLArgument *this,PCLState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"arg%d");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator()<sl::ReflexState> @ 14de6abf0

/* WARNING: Removing unreachable block (ram,0x00014de6acd7) */

void __thiscall
StringifySLArgument::operator()<sl::ReflexState>(StringifySLArgument *this,ReflexState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"arg%d");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// AddLambda<`RegisterStreamlineDLSSGHooks'::__l28::<lambda_1>_> @ 14de6acf0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_RegisterStreamlineDLSSGHooks_::__l28::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`RegisterStreamlineDLSSGHooks'::`28'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FStreamlineViewExtension::FStreamlineViewExtension'::__l28::<lambda_2>_> @ 14de6af20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
AddLambda<_FStreamlineViewExtension::FStreamlineViewExtension_::__l28::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FStreamlineViewExtension *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FStreamlineViewExtension *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXPEAX_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void_*),FDefaultDelegateUserPolicy,`FStreamlineViewExtension::FStreamlineViewExtension'::`28'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FStreamlineViewExtension *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FStreamlineViewExtension *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`RegisterStreamlineReflexHooks'::__l105::<lambda_2>_> @ 14de6b170

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_RegisterStreamlineReflexHooks_::__l105::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`RegisterStreamlineReflexHooks'::`105'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FStreamlineViewExtension::FStreamlineViewExtension'::__l28::<lambda_3>_> @ 14de6b3a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FStreamlineViewExtension::FStreamlineViewExtension_::__l28::<lambda_3>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_3> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStreamlineViewExtension::FStreamlineViewExtension'::`28'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddPass<FRenderTargetParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l111::<lambda_5>_> @ 14de6b5d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FRenderTargetParameters,_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread_::__l111::<lambda_5>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FRenderTargetParameters *param_2,
          ERDGPassFlags param_3,<lambda_5> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar7 = FRenderTargetParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar7 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRenderTargetParameters",L"FRenderTargetParameters",(wchar_t *)0x0,(wchar_t *)0x0
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                 ,0x7b0,0x100,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FRenderTargetParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar7 = (code *)swi(3);
      pFVar6 = (FRDGPass *)(*pcVar7)();
      return pFVar6;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FRenderTargetParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Await);
  pFVar6->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRenderTargetParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::`111'::<lambda_5>_>
        ::_vftable_;
  pFVar6[1]._padding_ = (longlong)(param_4->SecondaryViewRect).field0_0x0._s_0.Min.field0_0x0;
  pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_4->SecondaryViewRect).field0_0x0._s_0.Max.field0_0x0;
  *(FRenderTargetParameters **)&pFVar6[1].FullPathIfDebug.Data.ArrayNum = param_2;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPass<`anonymous_namespace'::FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>_> @ 14de6b890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_AddStreamlineDeepDVCEvaluateRenderPass_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FSLDeepDVCShaderParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  bool bVar2;
  ERDGPassFlags EVar3;
  int iVar4;
  wchar_t *pwVar5;
  FRDGPass *pFVar6;
  code *pcVar7;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::_TSS0) &&
     (_Init_thread_header(&`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::_TSS0),
     `FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::_TSS0 == -1)) {
    pcVar7 = _anon_E1925887::FSLDeepDVCShaderParameters::zzAppendMemberGetPrev;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    do {
      pcVar7 = (code *)(*pcVar7)((ulonglong)param_4 & 0xff,&local_48);
    } while (pcVar7 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::
                StaticStructMetadata,ShaderParameterStruct,Shader,L"FSLDeepDVCShaderParameters",
               L"FSLDeepDVCShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDeepDVC.cpp"
               ,0xb1,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    atexit(``anonymous_namespace'::FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::_TSS0);
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata,
             param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar5 = FRDGEventName::GetTCHAR(param_1);
  EVar3 = OverridePassFlags(this,pwVar5,param_3);
  pFVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,8);
  local_38.Contents = (uchar *)param_2;
  if ((`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata.Layout.
       Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar7 = (code *)swi(3);
    pFVar6 = (FRDGPass *)(*pcVar7)();
    return pFVar6;
  }
  local_38.Layout.Reference =
       `FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata.Layout.
       Reference;
  if (`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata.Layout.
      Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata
               .Layout.Reference);
  }
  local_38.Metadata =
       &`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar6,param_1,&local_38,EVar3,Inline);
  pFVar6->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar6[1]._padding_ = (longlong)param_4->StreamlineRHIExtensions;
  pFVar6[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_4->PassParameters;
  pFVar6[1].FullPathIfDebug.Data.ArrayNum = param_4->ViewID;
  *(TIntPoint<int>_u_0 *)&pFVar6[1].FullPathIfDebug.Data.ArrayMax =
       (param_4->SecondaryViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)((longlong)&pFVar6[1].Name.EventFormat + 4) =
       (param_4->SecondaryViewRect).field0_0x0._s_0.Max.field0_0x0;
  *(FSLDeepDVCShaderParameters **)&pFVar6[1].Name.FormattedEventName.Data.ArrayNum = param_2;
  ClobberPassOutputs(this,pFVar6);
  iVar4 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar4 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar4] = pFVar6;
  (pFVar6->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar6);
  return pFVar6;
}

// AddPassInternal<FSLShaderParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>_> @ 14de6bb70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FSLShaderParameters,_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread_::__l40::<lambda_3>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FSLShaderParameters *param_3,ERDGPassFlags param_4,<lambda_3> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  FRHIStreamlineArguments *pFVar3;
  int *piVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRHIStreamlineArguments *pFVar10;
  int *piVar11;
  longlong lVar12;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x390,0x10);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar1)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Inline);
  pFVar9->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSLShaderParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::`40'::<lambda_3>_>
        ::_vftable_;
  lVar12 = 3;
  pFVar9[1]._padding_ = (longlong)param_5->LocalStreamlineRHIExtensions;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->PassParameters;
  pFVar3 = &param_5->StreamlineArguments;
  piVar4 = &pFVar9[1].FullPathIfDebug.Data.ArrayNum;
  do {
    piVar11 = piVar4;
    pFVar10 = pFVar3;
    uVar2 = *(undefined8 *)&pFVar10->bReset;
    pFVar3 = (FRHIStreamlineArguments *)((pFVar10->ClipToCameraView).M + 2);
    *(undefined8 *)piVar11 = *(undefined8 *)pFVar10;
    *(undefined8 *)(piVar11 + 2) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar10->MotionVectorScale).field0_0x0 + 4);
    *(undefined8 *)(piVar11 + 4) =
         *(undefined8 *)((longlong)&(pFVar10->JitterOffset).field0_0x0 + 4);
    *(undefined8 *)(piVar11 + 6) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->CameraViewToClip).M[0] + 2);
    *(undefined8 *)(piVar11 + 8) = *(undefined8 *)(pFVar10->CameraViewToClip).M[0];
    *(undefined8 *)(piVar11 + 10) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->CameraViewToClip).M[1] + 2);
    *(undefined8 *)(piVar11 + 0xc) = *(undefined8 *)(pFVar10->CameraViewToClip).M[1];
    *(undefined8 *)(piVar11 + 0xe) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->CameraViewToClip).M[2] + 2);
    *(undefined8 *)(piVar11 + 0x10) = *(undefined8 *)(pFVar10->CameraViewToClip).M[2];
    *(undefined8 *)(piVar11 + 0x12) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->CameraViewToClip).M[3] + 2);
    *(undefined8 *)(piVar11 + 0x14) = *(undefined8 *)(pFVar10->CameraViewToClip).M[3];
    *(undefined8 *)(piVar11 + 0x16) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->ClipToCameraView).M[0] + 2);
    *(undefined8 *)(piVar11 + 0x18) = *(undefined8 *)(pFVar10->ClipToCameraView).M[0];
    *(undefined8 *)(piVar11 + 0x1a) = uVar2;
    uVar2 = *(undefined8 *)((pFVar10->ClipToCameraView).M[1] + 2);
    *(undefined8 *)(piVar11 + 0x1c) = *(undefined8 *)(pFVar10->ClipToCameraView).M[1];
    *(undefined8 *)(piVar11 + 0x1e) = uVar2;
    lVar12 = lVar12 + -1;
    piVar4 = piVar11 + 0x20;
  } while (lVar12 != 0);
  uVar2 = *(undefined8 *)((pFVar10->ClipToCameraView).M[2] + 2);
  *(undefined8 *)(piVar11 + 0x20) = *(undefined8 *)pFVar3;
  *(undefined8 *)(piVar11 + 0x22) = uVar2;
  uVar2 = *(undefined8 *)((pFVar10->ClipToCameraView).M[3] + 2);
  *(undefined8 *)(piVar11 + 0x24) = *(undefined8 *)(pFVar10->ClipToCameraView).M[3];
  *(undefined8 *)(piVar11 + 0x26) = uVar2;
  uVar2 = *(undefined8 *)((pFVar10->ClipToLenseClip).M[0] + 2);
  *(undefined8 *)(piVar11 + 0x28) = *(undefined8 *)(pFVar10->ClipToLenseClip).M[0];
  *(undefined8 *)(piVar11 + 0x2a) = uVar2;
  pFVar9[2].ParameterStruct.Metadata =
       (FShaderParametersMetadata *)(param_5->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar9[2].Flags = (param_5->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar9[2].Workload =
       (param_5->SecondaryViewRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)&pFVar9[2].CrossPipelineProducer =
       (param_5->SecondaryViewRect).field0_0x0._s_0.Max.field0_0x0;
  *(FRDGTexture **)&pFVar9[2].GraphicsJoinPass = (param_5->SceneColor).Texture;
  *(TIntPoint<int>_u_0 *)&pFVar9[2].EpilogueBarrierPass =
       (param_5->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  pFVar9[2].CrossPipelineConsumers.AllocatorInstance.Data =
       (TRDGHandle<FRDGPass,unsigned_int> *)
       (param_5->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)&pFVar9[2].CrossPipelineConsumers.ArrayNum = param_5->bTagMotionVectors;
  *(bool *)((longlong)&pFVar9[2].CrossPipelineConsumers.ArrayNum + 1) = param_5->bTagCustomDepth;
  *(bool *)((longlong)&pFVar9[2].CrossPipelineConsumers.ArrayNum + 2) =
       param_5->bTagSceneColorWithoutHUD;
  pFVar9[2].Producers.AllocatorInstance.Data = (FRDGPass **)param_3;
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar4 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar4) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar4);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<FSLUIHintTagShaderParameters,`AddStreamlineUIHintTagPass'::__l2::<lambda_1>_> @ 14de6be00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FSLUIHintTagShaderParameters,_AddStreamlineUIHintTagPass_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FSLUIHintTagShaderParameters *param_3,ERDGPassFlags param_4,<lambda_1> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1c8,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSLUIHintTagShaderParameters,`AddStreamlineUIHintTagPass'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar7[1]._padding_ = (longlong)param_5->RHIExtensions;
  *(bool *)&pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data = param_5->bTagBackbuffer;
  *(bool *)((longlong)&pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data + 1) =
       param_5->bTagUIColorAlpha;
  *(FSLUIHintTagShaderParameters **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       param_5->PassParameters;
  pFVar7[1].Name.EventFormat =
       (wchar_t *)(param_5->WindowClientAreaRect).field0_0x0._s_0.Min.field0_0x0;
  pFVar7[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->WindowClientAreaRect).field0_0x0._s_0.Max.field0_0x0;
  pFVar7[1].Name.FormattedEventName.Data.ArrayNum = 0;
  pFVar7[1].Name.FormattedEventName.Data.ArrayMax = 0;
  *(FScriptContainerElement **)&pFVar7[1].Name.FormattedEventName.Data.ArrayNum =
       (param_5->ViewsInThisBackBuffer).AllocatorInstance.Data;
  (param_5->ViewsInThisBackBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar7[1].ParameterStruct.Contents = (param_5->ViewsInThisBackBuffer).ArrayNum;
  *(int *)((longlong)&pFVar7[1].ParameterStruct.Contents + 4) =
       (param_5->ViewsInThisBackBuffer).ArrayMax;
  (param_5->ViewsInThisBackBuffer).ArrayNum = 0;
  (param_5->ViewsInThisBackBuffer).ArrayMax = 0;
  *(bool *)&pFVar7[1].ParameterStruct.Layout.Reference = param_5->HasViewIdOverride;
  pFVar7[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_> @ 14de6c4f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineStateRenderPass<_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_2>_>
          (wchar_t *param_1,FRDGBuilder *param_2,uint param_3,TIntRect<int> *param_4,
          <lambda_1> *param_5,<lambda_2> *param_6)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FSLSetStateShaderParameters *pFVar8;
  FRDGEventName *this;
  FShaderParametersMetadata *pFVar9;
  wchar_t *pwVar10;
  FRDGPass *this_00;
  FRDGParameterStruct local_58;
  FRDGEventName local_40;
  
  pFVar8 = FRDGBuilder::AllocParameters<FSLSetStateShaderParameters>(param_2);
  TVar2 = (param_4->field0_0x0)._s_0.Min.field0_0x0;
  TVar3 = (param_4->field0_0x0)._s_0.Max.field0_0x0;
  this = FRDGEventName::FRDGEventName(&local_40,L"Streamline %s State ViewID = % u");
  pFVar9 = FSLSetStateShaderParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_2->UserValidation,pFVar8,pFVar9,this,SkipRenderPass|NeverCull|Compute|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_2);
  pwVar10 = FRDGEventName::GetTCHAR(this);
  EVar6 = FRDGBuilder::OverridePassFlags(param_2,pwVar10,SkipRenderPass|NeverCull|Compute|Raster);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x1b8,8);
  local_58.Contents = (uchar *)pFVar8;
  if ((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_58.Layout.Reference = (pFVar9->Layout).Reference;
  if (local_58.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_58.Layout.Reference);
  }
  local_58.Metadata = pFVar9;
  FRDGPass::FRDGPass(this_00,this,&local_58,EVar6,Inline);
  this_00->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_2>_>'::`2'::<lambda_1>_>
        ::_vftable_;
  this_00[1]._padding_ = (longlong)pFVar8;
  *(uint *)&this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = param_3;
  *(TIntPoint<int>_u_0 *)((longlong)&this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data + 4) =
       TVar2;
  *(TIntPoint<int>_u_0 *)&this_00[1].FullPathIfDebug.Data.ArrayMax = TVar3;
  this_00[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_6;
  *(<lambda_1> **)&this_00[1].Name.FormattedEventName.Data.ArrayNum = param_5;
  this_00[1].ParameterStruct.Contents = (uchar *)pFVar8;
  FRDGBuilder::ClobberPassOutputs(param_2,this_00);
  iVar7 = (param_2->Passes).Array.ArrayNum;
  piVar1 = &(param_2->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_2->Passes,piVar1);
  }
  (param_2->Passes).Array.ArrayNum = iVar7 + 1;
  (param_2->Passes).Array.AllocatorInstance.Data[iVar7] = this_00;
  (this_00->Handle).Index = (param_2->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_2,this_00);
  if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_> @ 14de6c6e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineStateRenderPass<_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_2>_>
          (wchar_t *param_1,FRDGBuilder *param_2,uint param_3,TIntRect<int> *param_4,
          <lambda_1> *param_5,<lambda_2> *param_6)

{
  int *piVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  FSLSetStateShaderParameters *pFVar8;
  FRDGEventName *this;
  FShaderParametersMetadata *pFVar9;
  wchar_t *pwVar10;
  FRDGPass *this_00;
  FRDGParameterStruct local_58;
  FRDGEventName local_40;
  
  pFVar8 = FRDGBuilder::AllocParameters<FSLSetStateShaderParameters>(param_2);
  TVar2 = (param_4->field0_0x0)._s_0.Min.field0_0x0;
  TVar3 = (param_4->field0_0x0)._s_0.Max.field0_0x0;
  this = FRDGEventName::FRDGEventName(&local_40,L"Streamline %s State ViewID = % u");
  pFVar9 = FSLSetStateShaderParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_2->UserValidation,pFVar8,pFVar9,this,SkipRenderPass|NeverCull|Compute|Raster);
  FRDGBuilder::FlushAccessModeQueue(param_2);
  pwVar10 = FRDGEventName::GetTCHAR(this);
  EVar6 = FRDGBuilder::OverridePassFlags(param_2,pwVar10,SkipRenderPass|NeverCull|Compute|Raster);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x1b8,8);
  local_58.Contents = (uchar *)pFVar8;
  if ((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_58.Layout.Reference = (pFVar9->Layout).Reference;
  if (local_58.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_58.Layout.Reference);
  }
  local_58.Metadata = pFVar9;
  FRDGPass::FRDGPass(this_00,this,&local_58,EVar6,Inline);
  this_00->_padding_ =
       (longlong)
       &TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::`2'::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::`2'::<lambda_2>_>'::`2'::<lambda_1>_>
        ::_vftable_;
  this_00[1]._padding_ = (longlong)pFVar8;
  *(uint *)&this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data = param_3;
  *(TIntPoint<int>_u_0 *)((longlong)&this_00[1].FullPathIfDebug.Data.AllocatorInstance.Data + 4) =
       TVar2;
  *(TIntPoint<int>_u_0 *)&this_00[1].FullPathIfDebug.Data.ArrayMax = TVar3;
  this_00[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_6;
  *(<lambda_1> **)&this_00[1].Name.FormattedEventName.Data.ArrayNum = param_5;
  this_00[1].ParameterStruct.Contents = (uchar *)pFVar8;
  FRDGBuilder::ClobberPassOutputs(param_2,this_00);
  iVar7 = (param_2->Passes).Array.ArrayNum;
  piVar1 = &(param_2->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_2->Passes,piVar1);
  }
  (param_2->Passes).Array.ArrayNum = iVar7 + 1;
  (param_2->Passes).Array.AllocatorInstance.Data[iVar7] = this_00;
  (this_00->Handle).Index = (param_2->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_2,this_00);
  if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::PCLState_&),sl::PCLState_&> @ 14de6cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::PCLState_&),sl::PCLState_&>
          (uint param_1,char *param_2,PCLState *param_3)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_548 [32];
  wchar_t *local_528;
  wchar_t *local_520;
  wchar_t *local_518;
  undefined1 local_508 [8];
  StringifySLArgument local_500;
  FString local_4f0;
  PCLState *local_4e0;
  FString local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_548;
  local_4e0 = param_3;
  if (PtrFn == (_func___cdecl_Result_PCLState_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3a8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3a8.Ptr;
      local_4c8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4c8.Ptr = (wchar_t *)0x0;
        local_4c8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4c8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4c8.Ptr;
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"CallSLFeatureFn",0xf,Yes);
      local_528 = local_168.Ptr;
      local_520 = pwVar3;
      local_518 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_500.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArgStrings.ArrayNum = 0;
  local_500.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()<sl::PCLState>(&local_500,param_3);
  iVar2 = local_500.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_500.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_500.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Data.ArrayNum = 0;
  local_4f0.Data.ArrayMax = 0;
  FVar9.Data = local_500.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_508);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_4f0,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_4f0,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_500.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_288._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_288.Ptr = (wchar_t *)0x0;
    local_288.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4d8,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4d8,&local_4f0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_4e0);
  DestructItems<FString,int>
            ((FString *)local_500.ArgStrings.AllocatorInstance.Data,local_500.ArgStrings.ArrayNum);
  if (local_500.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&> @ 14de6d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexState_&),sl::ReflexState_&>
          (uint param_1,char *param_2,ReflexState *param_3)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_548 [32];
  wchar_t *local_528;
  wchar_t *local_520;
  wchar_t *local_518;
  undefined1 local_508 [8];
  StringifySLArgument local_500;
  FString local_4f0;
  ReflexState *local_4e0;
  FString local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_548;
  local_4e0 = param_3;
  if (PtrFn == (_func___cdecl_Result_ReflexState_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3a8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3a8.Ptr;
      local_4c8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4c8.Ptr = (wchar_t *)0x0;
        local_4c8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4c8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4c8.Ptr;
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"CallSLFeatureFn",0xf,Yes);
      local_528 = local_168.Ptr;
      local_520 = pwVar3;
      local_518 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_500.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArgStrings.ArrayNum = 0;
  local_500.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()<sl::ReflexState>(&local_500,param_3);
  iVar2 = local_500.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_500.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_500.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Data.ArrayNum = 0;
  local_4f0.Data.ArrayMax = 0;
  FVar9.Data = local_500.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_508);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_4f0,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_4f0,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_500.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_288._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_288.Ptr = (wchar_t *)0x0;
    local_288.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4d8,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4d8,&local_4f0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_4e0);
  DestructItems<FString,int>
            ((FString *)local_500.ArgStrings.AllocatorInstance.Data,local_500.ArgStrings.ArrayNum);
  if (local_500.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::FrameToken_const_&),sl::FrameToken_&> @ 14de6d3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::FrameToken_const_&),sl::FrameToken_&>
          (uint param_1,char *param_2,FrameToken *param_3)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_548 [32];
  wchar_t *local_528;
  wchar_t *local_520;
  wchar_t *local_518;
  undefined1 local_508 [8];
  StringifySLArgument local_500;
  FString local_4f0;
  FrameToken *local_4e0;
  FString local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_548;
  local_4e0 = param_3;
  if (PtrFn == (_func___cdecl_Result_FrameToken_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3a8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3a8.Ptr;
      local_4c8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4c8.Ptr = (wchar_t *)0x0;
        local_4c8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4c8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4c8.Ptr;
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"CallSLFeatureFn",0xf,Yes);
      local_528 = local_168.Ptr;
      local_520 = pwVar3;
      local_518 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_500.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArgStrings.ArrayNum = 0;
  local_500.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()(&local_500,param_3);
  iVar2 = local_500.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_500.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_500.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Data.ArrayNum = 0;
  local_4f0.Data.ArrayMax = 0;
  FVar9.Data = local_500.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_508);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_4f0,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_4f0,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_500.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_288._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_288.Ptr = (wchar_t *)0x0;
    local_288.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4d8,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4d8,&local_4f0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_4e0);
  DestructItems<FString,int>
            ((FString *)local_500.ArgStrings.AllocatorInstance.Data,local_500.ArgStrings.ArrayNum);
  if (local_500.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexOptions_const_&),sl::ReflexOptions_const_&> @ 14de6d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ReflexOptions_const_&),sl::ReflexOptions_const_&>
          (uint param_1,char *param_2,ReflexOptions *param_3)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_548 [32];
  wchar_t *local_528;
  wchar_t *local_520;
  wchar_t *local_518;
  undefined1 local_508 [8];
  StringifySLArgument local_500;
  FString local_4f0;
  ReflexOptions *local_4e0;
  FString local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_548;
  local_4e0 = param_3;
  if (PtrFn == (_func___cdecl_Result_ReflexOptions_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3a8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3a8.Ptr;
      local_4c8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4c8.Ptr = (wchar_t *)0x0;
        local_4c8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4c8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4c8.Ptr;
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"CallSLFeatureFn",0xf,Yes);
      local_528 = local_168.Ptr;
      local_520 = pwVar3;
      local_518 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_500.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.ArgStrings.ArrayNum = 0;
  local_500.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()(&local_500,param_3);
  iVar2 = local_500.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_500.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_500.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Data.ArrayNum = 0;
  local_4f0.Data.ArrayMax = 0;
  FVar9.Data = local_500.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_508);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_4f0,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_4f0,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_500.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_288._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_288.Ptr = (wchar_t *)0x0;
    local_288.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4d8,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4d8,&local_4f0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_288._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_288._padding_);
  }
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_4e0);
  DestructItems<FString,int>
            ((FString *)local_500.ArgStrings.AllocatorInstance.Data,local_500.ArgStrings.ArrayNum);
  if (local_500.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGState_&,sl::DLSSGOptions_const_*),sl::ViewportHandle_&,sl::DLSSGState_&,sl::DLSSGOptions_*> @ 14de6da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGState_&,sl::DLSSGOptions_const_*),sl::ViewportHandle_&,sl::DLSSGState_&,sl::DLSSGOptions_*>
          (uint param_1,char *param_2,ViewportHandle *param_3,DLSSGState *param_4,
          DLSSGOptions **param_5)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_588 [32];
  wchar_t *local_568;
  wchar_t *local_560;
  wchar_t *local_558;
  undefined1 local_548 [8];
  StringifySLArgument local_540;
  FString local_530;
  DLSSGOptions **local_520;
  DLSSGState *local_518;
  ViewportHandle *local_510;
  FString local_508 [2];
  DLSSGOptions *local_4e8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_588;
  local_520 = param_5;
  local_518 = param_4;
  local_510 = param_3;
  if (PtrFn == (_func___cdecl_Result_ViewportHandle_ptr_DLSSGState_ptr_DLSSGOptions_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3b8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3b8.Ptr = (wchar_t *)0x0;
        local_3b8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3b8.Ptr;
      local_4d8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4d8.Ptr = (wchar_t *)0x0;
        local_4d8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4d8.Ptr;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"CallSLFeatureFn",0xf,Yes);
      local_568 = local_178.Ptr;
      local_560 = pwVar3;
      local_558 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_540.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_540.ArgStrings.ArrayNum = 0;
  local_540.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()(&local_540,param_3);
  StringifySLArgument::operator()<sl::DLSSGState>(&local_540,param_4);
  StringifySLArgument::operator()<sl::DLSSGOptions_*>(&local_540,local_4e8);
  iVar2 = local_540.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_540.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_540.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.Data.ArrayNum = 0;
  local_530.Data.ArrayMax = 0;
  FVar9.Data = local_540.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_548);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_530,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_530,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_540.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(local_508,L"%s");
  LogStreamlineFunctionCall(param_1,local_508,&local_530);
  if (local_508[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508[0].Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_510,local_518,*local_520);
  DestructItems<FString,int>
            ((FString *)local_540.ArgStrings.AllocatorInstance.Data,local_540.ArgStrings.ArrayNum);
  if (local_540.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCState_&),sl::ViewportHandle_&,sl::DeepDVCState_&> @ 14de6dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCState_&),sl::ViewportHandle_&,sl::DeepDVCState_&>
          (uint param_1,char *param_2,ViewportHandle *param_3,DeepDVCState *param_4)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_568 [32];
  wchar_t *local_548;
  wchar_t *local_540;
  wchar_t *local_538;
  undefined1 local_528 [8];
  StringifySLArgument local_520;
  FString local_510;
  DeepDVCState *local_500;
  ViewportHandle *local_4f8;
  FString local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_568;
  local_500 = param_4;
  local_4f8 = param_3;
  if (PtrFn == (_func___cdecl_Result_ViewportHandle_ptr_DeepDVCState_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3b8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3b8.Ptr = (wchar_t *)0x0;
        local_3b8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3b8.Ptr;
      local_4d8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4d8.Ptr = (wchar_t *)0x0;
        local_4d8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4d8.Ptr;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"CallSLFeatureFn",0xf,Yes);
      local_548 = local_178.Ptr;
      local_540 = pwVar3;
      local_538 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_520.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArgStrings.ArrayNum = 0;
  local_520.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()(&local_520,param_3);
  StringifySLArgument::operator()<sl::DeepDVCState>(&local_520,param_4);
  iVar2 = local_520.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_520.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_520.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_510.Data.ArrayNum = 0;
  local_510.Data.ArrayMax = 0;
  FVar9.Data = local_520.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_528);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_510,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_510,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_520.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4f0,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4f0,&local_510);
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(local_4f8,local_500);
  DestructItems<FString,int>
            ((FString *)local_520.ArgStrings.AllocatorInstance.Data,local_520.ArgStrings.ArrayNum);
  if (local_520.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGOptions_const_&),sl::ViewportHandle,sl::DLSSGOptions_const_&> @ 14de6e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de6e32e) */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGOptions_const_&),sl::ViewportHandle,sl::DLSSGOptions_const_&>
          (uint param_1,char *param_2,ViewportHandle *param_3,DLSSGOptions *param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined1 auStack_5b8 [32];
  FString *local_598;
  FScriptContainerElement *local_590;
  wchar_t *local_588;
  longlong local_580;
  undefined8 local_578;
  StringifySLArgument local_568;
  undefined1 local_558 [8];
  FString local_550;
  uint local_540;
  DLSSGOptions *local_538;
  FString local_530;
  FString local_520;
  longlong local_510;
  longlong lStack_508;
  longlong local_500;
  longlong lStack_4f8;
  undefined8 local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_540 = param_1;
  local_538 = param_4;
  if ((PtrFn == (_func___cdecl_Result_ViewportHandle_ptr_DLSSGOptions_ptr *)0x0) &&
     (RVar5 = SLgetFeatureFunction(param_1,param_2,&PtrFn), RVar5 != eOk)) {
    _Str = sl::getResultAsStr(RVar5);
    local_3b8._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
    }
    pwVar3 = local_3b8.Ptr;
    local_4d8._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar7 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes);
    }
    pwVar2 = local_4d8.Ptr;
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"CallSLFeatureFn",0xf,Yes);
    local_598 = (FString *)local_178.Ptr;
    local_590 = (FScriptContainerElement *)pwVar2;
    local_588 = pwVar3;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Result == sl::Result::eOk",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                       ,199,L"%s: unable to map function %s (%s)");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
    param_4 = local_538;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      RVar5 = (*pcVar1)();
      return RVar5;
    }
  }
  local_510 = param_3->_padding_;
  lStack_508 = param_3->_padding_;
  local_568.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500 = param_3->_padding_;
  lStack_4f8 = param_3->_padding_;
  local_568.ArgStrings.ArrayNum = 0;
  local_568.ArgStrings.ArrayMax = 0;
  local_4f0 = *(undefined8 *)&param_3->value;
  FString::PrintfImpl(&local_550,L"viewport=%u");
  if (local_568.ArgStrings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_550) {
    if ((FScriptContainerElement *)&local_550 <
        local_568.ArgStrings.AllocatorInstance.Data + (longlong)local_568.ArgStrings.ArrayMax * 0x10
       ) {
      local_580 = (longlong)local_568.ArgStrings.ArrayNum;
      local_578 = 0x10;
      local_598 = &local_550;
      local_590 = local_568.ArgStrings.AllocatorInstance.Data;
      local_588 = (wchar_t *)(longlong)local_568.ArgStrings.ArrayMax;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        RVar5 = (*pcVar1)();
        return RVar5;
      }
    }
  }
  iVar6 = local_568.ArgStrings.ArrayNum;
  if (local_568.ArgStrings.ArrayNum == local_568.ArgStrings.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&local_568,&local_568.ArgStrings.ArrayMax);
  }
  local_568.ArgStrings.ArrayNum = iVar6 + 1;
  pFVar9 = local_568.ArgStrings.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_550.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_550.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_550.Data.ArrayMax;
  local_550.Data.ArrayNum = 0;
  local_550.Data.ArrayMax = 0;
  local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StringifySLArgument::operator()(&local_568,param_4);
  iVar6 = local_568.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_568.ArgStrings.ArrayNum;
  bVar4 = true;
  pFVar9 = local_568.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.Data.ArrayNum = 0;
  local_530.Data.ArrayMax = 0;
  FVar10.Data = local_568.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_558);
    }
    if (FVar10.Data == pFVar9) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      FString::AppendChars(&local_530,L", ",2);
    }
    iVar11 = *(int *)(FVar10.Data + 8) + -1;
    if (*(int *)(FVar10.Data + 8) == 0) {
      iVar11 = 0;
    }
    FString::AppendChars(&local_530,*(wchar_t **)FVar10.Data,iVar11);
    uVar8 = local_568.ArgStrings._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_520,L"%s");
  LogStreamlineFunctionCall(local_540,&local_520,&local_530);
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  RVar5 = (*PtrFn)(param_3,local_538);
  DestructItems<FString,int>
            ((FString *)local_568.ArgStrings.AllocatorInstance.Data,local_568.ArgStrings.ArrayNum);
  if (local_568.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.ArgStrings.AllocatorInstance.Data);
  }
  return RVar5;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCOptions_const_&),sl::ViewportHandle,sl::DeepDVCOptions_const_&> @ 14de6e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de6e74e) */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCOptions_const_&),sl::ViewportHandle,sl::DeepDVCOptions_const_&>
          (uint param_1,char *param_2,ViewportHandle *param_3,DeepDVCOptions *param_4)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined1 auStack_5b8 [32];
  FString *local_598;
  FScriptContainerElement *local_590;
  wchar_t *local_588;
  longlong local_580;
  undefined8 local_578;
  StringifySLArgument local_568;
  undefined1 local_558 [8];
  FString local_550;
  uint local_540;
  DeepDVCOptions *local_538;
  FString local_530;
  FString local_520;
  longlong local_510;
  longlong lStack_508;
  longlong local_500;
  longlong lStack_4f8;
  undefined8 local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_540 = param_1;
  local_538 = param_4;
  if ((PtrFn == (_func___cdecl_Result_ViewportHandle_ptr_DeepDVCOptions_ptr *)0x0) &&
     (RVar5 = SLgetFeatureFunction(param_1,param_2,&PtrFn), RVar5 != eOk)) {
    _Str = sl::getResultAsStr(RVar5);
    local_3b8._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
    }
    pwVar3 = local_3b8.Ptr;
    local_4d8._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar7 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes);
    }
    pwVar2 = local_4d8.Ptr;
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"CallSLFeatureFn",0xf,Yes);
    local_598 = (FString *)local_178.Ptr;
    local_590 = (FScriptContainerElement *)pwVar2;
    local_588 = pwVar3;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Result == sl::Result::eOk",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                       ,199,L"%s: unable to map function %s (%s)");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
    param_4 = local_538;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      RVar5 = (*pcVar1)();
      return RVar5;
    }
  }
  local_510 = param_3->_padding_;
  lStack_508 = param_3->_padding_;
  local_568.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500 = param_3->_padding_;
  lStack_4f8 = param_3->_padding_;
  local_568.ArgStrings.ArrayNum = 0;
  local_568.ArgStrings.ArrayMax = 0;
  local_4f0 = *(undefined8 *)&param_3->value;
  FString::PrintfImpl(&local_550,L"viewport=%u");
  if (local_568.ArgStrings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_550) {
    if ((FScriptContainerElement *)&local_550 <
        local_568.ArgStrings.AllocatorInstance.Data + (longlong)local_568.ArgStrings.ArrayMax * 0x10
       ) {
      local_580 = (longlong)local_568.ArgStrings.ArrayNum;
      local_578 = 0x10;
      local_598 = &local_550;
      local_590 = local_568.ArgStrings.AllocatorInstance.Data;
      local_588 = (wchar_t *)(longlong)local_568.ArgStrings.ArrayMax;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        RVar5 = (*pcVar1)();
        return RVar5;
      }
    }
  }
  iVar6 = local_568.ArgStrings.ArrayNum;
  if (local_568.ArgStrings.ArrayNum == local_568.ArgStrings.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&local_568,&local_568.ArgStrings.ArrayMax);
  }
  local_568.ArgStrings.ArrayNum = iVar6 + 1;
  pFVar9 = local_568.ArgStrings.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_550.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_550.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_550.Data.ArrayMax;
  local_550.Data.ArrayNum = 0;
  local_550.Data.ArrayMax = 0;
  local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StringifySLArgument::operator()(&local_568,param_4);
  iVar6 = local_568.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_568.ArgStrings.ArrayNum;
  bVar4 = true;
  pFVar9 = local_568.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.Data.ArrayNum = 0;
  local_530.Data.ArrayMax = 0;
  FVar10.Data = local_568.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_558);
    }
    if (FVar10.Data == pFVar9) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      FString::AppendChars(&local_530,L", ",2);
    }
    iVar11 = *(int *)(FVar10.Data + 8) + -1;
    if (*(int *)(FVar10.Data + 8) == 0) {
      iVar11 = 0;
    }
    FString::AppendChars(&local_530,*(wchar_t **)FVar10.Data,iVar11);
    uVar8 = local_568.ArgStrings._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_520,L"%s");
  LogStreamlineFunctionCall(local_540,&local_520,&local_530);
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  RVar5 = (*PtrFn)(param_3,local_538);
  DestructItems<FString,int>
            ((FString *)local_568.ArgStrings.AllocatorInstance.Data,local_568.ArgStrings.ArrayNum);
  if (local_568.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.ArgStrings.AllocatorInstance.Data);
  }
  return RVar5;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::FrameToken_const_&,sl::ReflexCameraData_const_&),sl::ViewportHandle,sl::FrameToken_&,sl::ReflexCameraData_&> @ 14de6e8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de6eb7b) */
/* WARNING: Removing unreachable block (ram,0x00014de6ec6e) */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::FrameToken_const_&,sl::ReflexCameraData_const_&),sl::ViewportHandle,sl::FrameToken_&,sl::ReflexCameraData_&>
          (uint param_1,char *param_2,ViewportHandle *param_3,FrameToken *param_4,
          ReflexCameraData *param_5)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 auStack_5d8 [32];
  FString *local_5b8;
  FScriptContainerElement *local_5b0;
  wchar_t *local_5a8;
  longlong local_5a0;
  undefined8 local_598;
  StringifySLArgument local_588;
  undefined1 local_578 [8];
  FString local_570;
  FString local_560;
  FrameToken *local_550;
  FString local_548;
  ReflexCameraData *local_538;
  ViewportHandle *local_530;
  FString local_528;
  longlong local_518;
  longlong lStack_510;
  longlong local_508;
  longlong lStack_500;
  undefined8 local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  local_538 = param_5;
  local_550 = param_4;
  local_530 = param_3;
  if ((PtrFn == (_func___cdecl_Result_ViewportHandle_ptr_FrameToken_ptr_ReflexCameraData_ptr *)0x0)
     && (RVar5 = SLgetFeatureFunction(param_1,param_2,&PtrFn), RVar5 != eOk)) {
    _Str = sl::getResultAsStr(RVar5);
    local_3b8._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_3b8.Ptr = (wchar_t *)0x0;
      local_3b8.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
    }
    pwVar3 = local_3b8.Ptr;
    local_4d8._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_4d8.Ptr = (wchar_t *)0x0;
      local_4d8.StringLength = 0;
    }
    else {
      sVar7 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes);
    }
    pwVar2 = local_4d8.Ptr;
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"CallSLFeatureFn",0xf,Yes);
    local_5b8 = (FString *)local_178.Ptr;
    local_5b0 = (FScriptContainerElement *)pwVar2;
    local_5a8 = pwVar3;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Result == sl::Result::eOk",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                       ,199,L"%s: unable to map function %s (%s)");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if ((void *)local_4d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4d8._padding_);
    }
    if ((void *)local_3b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3b8._padding_);
    }
    param_4 = local_550;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      RVar5 = (*pcVar1)();
      return RVar5;
    }
  }
  local_518 = param_3->_padding_;
  lStack_510 = param_3->_padding_;
  local_588.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508 = param_3->_padding_;
  lStack_500 = param_3->_padding_;
  local_588.ArgStrings.ArrayNum = 0;
  local_588.ArgStrings.ArrayMax = 0;
  local_4f8 = *(undefined8 *)&param_3->value;
  FString::PrintfImpl(&local_570,L"viewport=%u");
  if (local_588.ArgStrings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_570) {
    if ((FScriptContainerElement *)&local_570 <
        local_588.ArgStrings.AllocatorInstance.Data + (longlong)local_588.ArgStrings.ArrayMax * 0x10
       ) {
      local_5a0 = (longlong)local_588.ArgStrings.ArrayNum;
      local_598 = 0x10;
      local_5b8 = &local_570;
      local_5b0 = local_588.ArgStrings.AllocatorInstance.Data;
      local_5a8 = (wchar_t *)(longlong)local_588.ArgStrings.ArrayMax;
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        RVar5 = (*pcVar1)();
        return RVar5;
      }
    }
  }
  iVar6 = local_588.ArgStrings.ArrayNum;
  if (local_588.ArgStrings.ArrayNum == local_588.ArgStrings.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&local_588,&local_588.ArgStrings.ArrayMax);
  }
  pFVar9 = local_588.ArgStrings.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_570.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_570.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_570.Data.ArrayMax;
  local_570.Data.ArrayNum = 0;
  local_570.Data.ArrayMax = 0;
  local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.ArgStrings.ArrayNum = iVar6 + 1;
  StringifySLArgument::operator()(&local_588,param_4);
  FString::PrintfImpl(&local_560,
                      L"worldToViewMatrix=... viewToClipMatrix=... prevRenderedWorldToViewMatrix=..., prevRenderedViewToClipMatrix=..."
                     );
  if ((local_588.ArgStrings.AllocatorInstance.Data <= (FScriptContainerElement *)&local_560) &&
     ((FScriptContainerElement *)&local_560 <
      local_588.ArgStrings.AllocatorInstance.Data + (longlong)local_588.ArgStrings.ArrayMax * 0x10))
  {
    local_5a0 = (longlong)local_588.ArgStrings.ArrayNum;
    local_598 = 0x10;
    local_5b8 = &local_560;
    local_5b0 = local_588.ArgStrings.AllocatorInstance.Data;
    local_5a8 = (wchar_t *)(longlong)local_588.ArgStrings.ArrayMax;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      RVar5 = (*pcVar1)();
      return RVar5;
    }
  }
  if (local_588.ArgStrings.ArrayNum == local_588.ArgStrings.ArrayMax) {
    local_588.ArgStrings.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,(ForAnyElementType *)&local_588,&local_588.ArgStrings.ArrayMax);
  }
  iVar6 = local_588.ArgStrings.ArrayNum + 1;
  lVar10 = (longlong)local_588.ArgStrings.ArrayNum;
  local_588.ArgStrings.ArrayNum = iVar6;
  pFVar9 = local_588.ArgStrings.AllocatorInstance.Data + lVar10 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_560.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_560.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_560.Data.ArrayMax;
  local_560.Data.ArrayNum = 0;
  local_560.Data.ArrayMax = 0;
  local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = (ulonglong)iVar6;
  bVar4 = true;
  pFVar9 = local_588.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.Data.ArrayNum = 0;
  local_548.Data.ArrayMax = 0;
  FVar11.Data = local_588.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_578);
    }
    if (FVar11.Data == pFVar9) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      FString::AppendChars(&local_548,L", ",2);
    }
    iVar12 = *(int *)(FVar11.Data + 8) + -1;
    if (*(int *)(FVar11.Data + 8) == 0) {
      iVar12 = 0;
    }
    FString::AppendChars(&local_548,*(wchar_t **)FVar11.Data,iVar12);
    uVar8 = local_588.ArgStrings._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_528,L"%s");
  LogStreamlineFunctionCall(param_1,&local_528,&local_548);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  RVar5 = (*PtrFn)(local_530,local_550,local_538);
  DestructItems<FString,int>
            ((FString *)local_588.ArgStrings.AllocatorInstance.Data,local_588.ArgStrings.ArrayNum);
  if (local_588.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.ArgStrings.AllocatorInstance.Data);
  }
  return RVar5;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker_&,sl::FrameToken_&> @ 14de6ede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker_&,sl::FrameToken_&>
          (uint param_1,char *param_2,PCLMarker *param_3,FrameToken *param_4)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_568 [32];
  wchar_t *local_548;
  wchar_t *local_540;
  wchar_t *local_538;
  undefined1 local_528 [8];
  StringifySLArgument local_520;
  FString local_510;
  FrameToken *local_500;
  PCLMarker *local_4f8;
  FString local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_568;
  local_500 = param_4;
  local_4f8 = param_3;
  if (PtrFn == (_func___cdecl_Result_PCLMarker_FrameToken_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3b8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3b8.Ptr = (wchar_t *)0x0;
        local_3b8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3b8.Ptr;
      local_4d8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4d8.Ptr = (wchar_t *)0x0;
        local_4d8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4d8.Ptr;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"CallSLFeatureFn",0xf,Yes);
      local_548 = local_178.Ptr;
      local_540 = pwVar3;
      local_538 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_520.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArgStrings.ArrayNum = 0;
  local_520.ArgStrings.ArrayMax = 0;
  StringifySLArgument::operator()(&local_520,param_3);
  StringifySLArgument::operator()(&local_520,param_4);
  iVar2 = local_520.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_520.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_520.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_510.Data.ArrayNum = 0;
  local_510.Data.ArrayMax = 0;
  FVar9.Data = local_520.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_528);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_510,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_510,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_520.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4f0,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4f0,&local_510);
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(*local_4f8,local_500);
  DestructItems<FString,int>
            ((FString *)local_520.ArgStrings.AllocatorInstance.Data,local_520.ArgStrings.ArrayNum);
  if (local_520.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker,sl::FrameToken_&> @ 14de6f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Result __cdecl
CallSLFeatureFn<enum_sl::Result_(__cdecl*)(enum_sl::PCLMarker,sl::FrameToken_const_&),enum_sl::PCLMarker,sl::FrameToken_&>
          (uint param_1,char *param_2,PCLMarker *param_3,FrameToken *param_4)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  Result RVar6;
  char *_Str;
  size_t sVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_578 [32];
  wchar_t *local_558;
  wchar_t *local_550;
  wchar_t *local_548;
  undefined1 local_538 [8];
  StringifySLArgument local_530;
  FString local_520;
  FrameToken *local_510;
  PCLMarker *local_508;
  PCLMarker local_500 [2];
  FrameToken *local_4f8;
  FString local_4f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_578;
  local_510 = param_4;
  local_508 = param_3;
  if (PtrFn == (_func___cdecl_Result_PCLMarker_FrameToken_ptr *)0x0) {
    RVar6 = SLgetFeatureFunction(param_1,param_2,&PtrFn);
    if (RVar6 != eOk) {
      _Str = sl::getResultAsStr(RVar6);
      local_3b8._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_3b8.Ptr = (wchar_t *)0x0;
        local_3b8.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3b8,_Str,(int)sVar7,Yes);
      }
      pwVar4 = local_3b8.Ptr;
      local_4d8._padding_ = 0;
      if (param_2 == (char *)0x0) {
        local_4d8.Ptr = (wchar_t *)0x0;
        local_4d8.StringLength = 0;
      }
      else {
        sVar7 = strlen(param_2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4d8,param_2,(int)sVar7,Yes)
        ;
      }
      pwVar3 = local_4d8.Ptr;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"CallSLFeatureFn",0xf,Yes);
      local_558 = local_178.Ptr;
      local_550 = pwVar3;
      local_548 = pwVar4;
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Result == sl::Result::eOk",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Public\\StreamlineAPI.h"
                         ,199,L"%s: unable to map function %s (%s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        RVar6 = (*pcVar1)();
        return RVar6;
      }
    }
  }
  local_500[0] = *param_3;
  local_530.ArgStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.ArgStrings.ArrayNum = 0;
  local_530.ArgStrings.ArrayMax = 0;
  local_4f8 = param_4;
  StringifySLArgument::operator()(&local_530,local_500);
  StringifySLArgument::operator()(&local_530,local_4f8);
  iVar2 = local_530.ArgStrings.ArrayNum;
  uVar8 = (ulonglong)local_530.ArgStrings.ArrayNum;
  bVar5 = true;
  pFVar11 = local_530.ArgStrings.AllocatorInstance.Data + uVar8 * 0x10;
  local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.Data.ArrayNum = 0;
  local_520.Data.ArrayMax = 0;
  FVar9.Data = local_530.ArgStrings.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_538);
    }
    if (FVar9.Data == pFVar11) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      FString::AppendChars(&local_520,L", ",2);
    }
    iVar10 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar10 = 0;
    }
    FString::AppendChars(&local_520,*(wchar_t **)FVar9.Data,iVar10);
    uVar8 = local_530.ArgStrings._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 0x10;
  }
  local_298._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_298.Ptr = (wchar_t *)0x0;
    local_298.StringLength = 0;
  }
  else {
    sVar7 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,param_2,(int)sVar7,Yes);
  }
  FString::PrintfImpl(&local_4f0,L"%s");
  LogStreamlineFunctionCall(param_1,&local_4f0,&local_520);
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_298._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_298._padding_);
  }
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  RVar6 = (*PtrFn)(*local_508,local_510);
  DestructItems<FString,int>
            ((FString *)local_530.ArgStrings.AllocatorInstance.Data,local_530.ArgStrings.ArrayNum);
  if (local_530.ArgStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.ArgStrings.AllocatorInstance.Data);
  }
  return RVar6;
}

// ConstructItems<FTrackedView,FTrackedView,int> @ 14de6f450

void __cdecl
ConstructItems<FTrackedView,FTrackedView,int>(void *param_1,FTrackedView *param_2,int param_3)

{
  TIntPoint<int>_u_0 this;
  TRefCountPtr<FRHITexture> *pTVar1;
  TIntRect<int> *pTVar2;
  TIntPoint<int>_u_0 *pTVar3;
  
  if (param_3 != 0) {
    pTVar2 = &param_2->UnscaledViewRect;
    pTVar3 = (TIntPoint<int>_u_0 *)((longlong)param_1 + 0x10);
    do {
      *(TIntPoint<int>_u_0 *)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           (((FTrackedView *)(pTVar2 + -1))->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      pTVar3[-1] = (((FTrackedView *)(pTVar2 + -1))->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      *pTVar3 = (pTVar2->field0_0x0)._s_0.Min.field0_0x0;
      pTVar3[1] = (pTVar2->field0_0x0)._s_0.Max.field0_0x0;
      pTVar3[2] = pTVar2[1].field0_0x0._s_0.Min.field0_0x0;
      pTVar3[3] = pTVar2[1].field0_0x0._s_0.Max.field0_0x0;
      pTVar3[4] = (TIntPoint<int>_u_0)0x0;
      this = (TIntPoint<int>_u_0)((TRefCountPtr<FRHITexture> *)(pTVar2 + 2))->Reference;
      pTVar3[4] = this;
      if (this != (TIntPoint<int>_u_0)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      pTVar1 = (TRefCountPtr<FRHITexture> *)(pTVar2 + 2);
      pTVar2 = pTVar2 + 4;
      pTVar3[5]._s_0.X = *(uint *)(pTVar1 + 1);
      pTVar3 = pTVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRHIStreamlineResource,FRHIStreamlineResource,int> @ 14de6f510

/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
ConstructItems<FRHIStreamlineResource,FRHIStreamlineResource,int>
          (void *param_1,FRHIStreamlineResource *param_2,int param_3)

{
  TIntPoint<int>_u_0 *pTVar1;
  TIntPoint<int>_u_0_s_0 *pTVar2;
  
  if (param_3 != 0) {
    pTVar1 = (TIntPoint<int>_u_0 *)((longlong)param_1 + 0x10);
    pTVar2 = (TIntPoint<int>_u_0_s_0 *)((param_2->ViewRect).field0_0x0.MinMax + 1);
    do {
      pTVar1[-2] = *(TIntPoint<int>_u_0 *)
                    ((longlong)pTVar1 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pTVar1[-1] = *(TIntPoint<int>_u_0 *)(pTVar2 + -1);
      pTVar1->_s_0 = *pTVar2;
      pTVar1[1]._s_0.X = pTVar2[1].X;
      *(int *)((longlong)pTVar1 + 0xc) = pTVar2[1].Y;
      param_3 = param_3 + -1;
      pTVar1 = pTVar1 + 4;
      pTVar2 = pTVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FTrackedView,int> @ 14de6f580

void __cdecl DestructItems<FTrackedView,int>(FTrackedView *param_1,int param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->Texture;
    do {
      if (pTVar1->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar1->Reference);
      }
      pTVar1 = pTVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAllSwap<`FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l2::<lambda_1>_> @ 14de6f890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FStreamlineViewExtension::PreRenderViewFamily_RenderThread_::__l2::<lambda_1>_>
          (TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  <lambda_1> *p<Var9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_40;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar10 = 0;
  if (0 < iVar6) {
    lVar11 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar10 < iVar7) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      pFVar1 = (this->AllocatorInstance).Data;
      local_40 = *(undefined8 *)(pFVar1 + lVar11 + 8);
      uVar8 = *(longlong *)(pFVar1 + lVar11) + 5;
      bVar4 = uVar8 < GFrameCounterRenderThread;
      p<Var9 = param_1;
      if (GFrameCounterRenderThread <= uVar8) {
        p<Var9 = (<lambda_1> *)&param_1->ActiveViews;
      }
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                (p<Var9->StaleViews,(uint *)&local_40);
      if (bVar4) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar10 < this->ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar10 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar10 * 0x10,
                  pFVar1 + (longlong)(this->ArrayNum - iVar7) * 0x10,(longlong)iVar7 << 4);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar10 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l2::<lambda_2>_> @ 14de6fa70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FStreamlineViewExtension::PreRenderViewFamily_RenderThread_::__l2::<lambda_2>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    iVar8 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar7 = (param_1->ActiveViews->AllocatorInstance).Data;
      pFVar1 = pFVar7 + (longlong)param_1->ActiveViews->ArrayNum * 4;
      for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
        if (*(int *)pFVar7 == *(int *)((this->AllocatorInstance).Data + lVar10)) {
          bVar3 = true;
          uVar5 = 0;
          if ((int)uVar9 < this->ArrayNum) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          pFVar1 = (this->AllocatorInstance).Data;
          iVar8 = ~uVar9 + this->ArrayNum;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar9 * 4,
                    pFVar1 + (longlong)(this->ArrayNum - iVar8) * 4,(longlong)iVar8 << 2);
          }
          this->ArrayNum = this->ArrayNum + -1;
          goto LAB_14de6fb2a;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
LAB_14de6fb2a:
      iVar8 = this->ArrayNum;
    } while ((int)uVar9 < iVar8);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar8,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// ReflexReport @ 14de70a00

ReflexReport * __thiscall sl::ReflexReport::ReflexReport(ReflexReport *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xd569b37;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x4453a1c8;
  *(undefined4 *)&this->_padding_ = 0xf4404dbe;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x2b9557de;
  this->_padding_ = 1;
  this->frameID = 0;
  this->inputSampleTime = 0;
  this->simStartTime = 0;
  this->simEndTime = 0;
  this->renderSubmitStartTime = 0;
  this->renderSubmitEndTime = 0;
  this->presentStartTime = 0;
  this->presentEndTime = 0;
  this->driverStartTime = 0;
  this->driverEndTime = 0;
  this->osRenderQueueStartTime = 0;
  this->osRenderQueueEndTime = 0;
  this->gpuRenderStartTime = 0;
  this->gpuRenderEndTime = 0;
  this->gpuActiveRenderTimeUs = 0;
  this->gpuFrameTimeUs = 0;
  return this;
}

// ReflexState @ 14de70a80

ReflexState * __thiscall sl::ReflexState::ReflexState(ReflexState *this)

{
  ReflexReport *pRVar1;
  longlong lVar2;
  
  pRVar1 = this->frameReport;
  this->_padding_ = 0;
  lVar2 = 0x40;
  *(undefined4 *)&this->_padding_ = 0xf0bb5985;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x4728daf9;
  *(undefined4 *)&this->_padding_ = 0x80aefdb2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x8979bda2;
  this->_padding_ = 1;
  this->lowLatencyAvailable = false;
  this->latencyReportAvailable = false;
  do {
    pRVar1->_padding_ = 0;
    *(undefined4 *)&pRVar1->_padding_ = 0xd569b37;
    *(undefined4 *)((longlong)&pRVar1->_padding_ + 4) = 0x4453a1c8;
    *(undefined4 *)&pRVar1->_padding_ = 0xf4404dbe;
    *(undefined4 *)((longlong)&pRVar1->_padding_ + 4) = 0x2b9557de;
    pRVar1->_padding_ = 1;
    pRVar1->frameID = 0;
    pRVar1->inputSampleTime = 0;
    pRVar1->simStartTime = 0;
    pRVar1->simEndTime = 0;
    pRVar1->renderSubmitStartTime = 0;
    pRVar1->renderSubmitEndTime = 0;
    pRVar1->presentStartTime = 0;
    pRVar1->presentEndTime = 0;
    pRVar1->driverStartTime = 0;
    pRVar1->driverEndTime = 0;
    pRVar1->osRenderQueueStartTime = 0;
    pRVar1->osRenderQueueEndTime = 0;
    pRVar1->gpuRenderStartTime = 0;
    pRVar1->gpuRenderEndTime = 0;
    pRVar1->gpuActiveRenderTimeUs = 0;
    pRVar1->gpuFrameTimeUs = 0;
    pRVar1 = pRVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  this->flashIndicatorDriverControlled = false;
  return this;
}

// ~TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0> @ 14de70b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStreamlineViewExtension::FStreamlineViewExtension_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 14de70f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_148 [32];
  DLSSGOptions local_128;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  DLSSGMode local_80;
  uint uStack_7c;
  DLSSGFlags DStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  _func___cdecl_void_APIError_ptr *local_40;
  Boolean BStack_38;
  undefined3 uStack_37;
  DLSSGQueueParallelismMode DStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  `AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 0x28),&local_128,*(uint *)((longlong)this + 8),
             (TIntRect<int> *)((longlong)this + 0xc));
  local_b8 = *(undefined4 *)((longlong)this + 8);
  local_a0 = local_128._padding_;
  lStack_98 = local_128._padding_;
  local_b4 = *(undefined8 *)((longlong)this + 0xc);
  local_80 = local_128.mode;
  uStack_7c = local_128.numFramesToGenerate;
  DStack_78 = local_128.flags;
  uStack_74 = local_128.dynamicResWidth;
  local_ac = *(undefined8 *)((longlong)this + 0x14);
  local_90 = local_128._padding_;
  lStack_88 = local_128._padding_;
  local_30 = *(undefined8 *)((longlong)this + 0x20);
  local_60 = local_128.colorWidth;
  uStack_5c = local_128.colorHeight;
  uStack_58 = local_128.colorBufferFormat;
  uStack_54 = local_128.mvecBufferFormat;
  local_70 = local_128.dynamicResHeight;
  uStack_6c = local_128.numBackBuffers;
  uStack_68 = local_128.mvecDepthWidth;
  uStack_64 = local_128.mvecDepthHeight;
  local_40 = local_128.onErrorCallback;
  BStack_38 = local_128.bReserved15;
  uStack_37 = local_128._105_3_;
  DStack_34 = local_128.queueParallelismMode;
  local_50 = local_128.depthBufferFormat;
  uStack_4c = local_128.hudLessBufferFormat;
  uStack_48 = local_128.uiBufferFormat;
  uStack_44 = local_128._92_4_;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar1 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xa8,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar1;
    *(undefined8 **)&param_1->field_0x30 = puVar1 + 1;
    *puVar1 = &TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::`2'::<lambda_2>_>'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = local_b8;
    *(undefined8 *)((longlong)puVar1 + 0x14) = local_b4;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = local_ac;
    puVar1[5] = local_a0;
    puVar1[6] = lStack_98;
    puVar1[7] = local_90;
    puVar1[8] = lStack_88;
    puVar1[9] = _local_80;
    puVar1[10] = _DStack_78;
    puVar1[0xb] = _local_70;
    puVar1[0xc] = _uStack_68;
    puVar1[0xd] = _local_60;
    puVar1[0xe] = _uStack_58;
    puVar1[0xf] = _local_50;
    puVar1[0x10] = _uStack_48;
    puVar1[0x11] = local_40;
    puVar1[0x12] = _BStack_38;
    puVar1[0x13] = local_30;
    puVar1[0x14] = L"TRHILambdaCommand";
  }
  else {
    ``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'
    ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(&local_b8,param_1);
  }
  return;
}

// operator() @ 14de71100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  EStreamlineFeatureSupport EVar6;
  DeepDVCMode DVar7;
  undefined8 *puVar8;
  undefined1 auStackY_d8 [32];
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  DeepDVCMode local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  EVar6 = QueryStreamlineDeepDVCSupport();
  if (EVar6 != Supported) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsStreamlineDeepDVCSupported()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDeepDVC.cpp"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDeepDVC.cpp"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DVar7 = SLDeepDVCModeFromCvar();
  pTVar3 = CVarStreamlineDeepDVCIntensity.Ref;
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = CVarStreamlineDeepDVCSaturationBoost.Ref;
  fVar1 = pTVar3->ShadowedValue[1];
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_58 = 0xbe2a7e7e23288aad;
  local_78 = *(undefined4 *)((longlong)this + 8);
  fStack_38 = pTVar4->ShadowedValue[1];
  local_50 = 0x6b04a330da276791;
  local_74 = *(undefined8 *)((longlong)this + 0xc);
  local_60 = 0;
  local_6c = *(undefined8 *)((longlong)this + 0x14);
  local_30 = *(undefined8 *)((longlong)this + 0x20);
  uStack_34 = uStack_7c;
  uStack_48 = 1;
  local_40 = DVar7;
  fStack_3c = fVar1;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x68,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    *puVar8 = &TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::`2'::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::`2'::<lambda_2>_>'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = local_78;
    *(undefined8 *)((longlong)puVar8 + 0x14) = local_74;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = local_6c;
    puVar8[5] = local_60;
    puVar8[6] = uStack_58;
    puVar8[7] = local_50;
    puVar8[8] = uStack_48;
    puVar8[9] = CONCAT44(fStack_3c,local_40);
    puVar8[10] = CONCAT44(uStack_34,fStack_38);
    puVar8[0xb] = local_30;
    puVar8[0xc] = L"TRHILambdaCommand";
  }
  else {
    ``AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'
    ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(&local_78,param_1);
  }
  return;
}

// operator() @ 14de71350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_18 = *(uint *)this;
  local_38._0_8_ = 0;
  local_20 = 1;
  local_38._8_16_ = (undefined1  [16])sl::ViewportHandle::s_structType;
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGOptions_const_&),sl::ViewportHandle,sl::DLSSGOptions_const_&>
            (1000,"slDLSSGSetOptions",(ViewportHandle *)local_38,
             (DLSSGOptions *)((longlong)this + 0x18));
  return;
}

// operator() @ 14de713c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_18 = *(uint *)this;
  local_38._0_8_ = 0;
  local_20 = 1;
  local_38._8_16_ = (undefined1  [16])sl::ViewportHandle::s_structType;
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCOptions_const_&),sl::ViewportHandle,sl::DeepDVCOptions_const_&>
            (5,"slDeepDVCSetOptions",(ViewportHandle *)local_38,
             (DeepDVCOptions *)((longlong)this + 0x18));
  return;
}

// operator() @ 14de71430

DLSSGOptions * __thiscall
`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>::operator()
          (void *this,DLSSGOptions *__return_storage_ptr__,uint param_1,TIntRect<int> *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  EStreamlineFeatureSupport EVar7;
  int iVar8;
  DLSSGMode DVar9;
  DLSSGOptions *pDVar10;
  int iVar11;
  longlong lVar12;
  
  EVar7 = QueryStreamlineDLSSGSupport();
  if ((EVar7 != Supported) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineDLSSGSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                         ,0x282,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pDVar10 = (DLSSGOptions *)(*pcVar1)();
    return pDVar10;
  }
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                         ,0x283,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pDVar10 = (DLSSGOptions *)(*pcVar1)();
    return pDVar10;
  }
  lVar12 = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xfac5f1cb;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x4f362dfd;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0x9e3ae6a1;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0xc5565286;
  __return_storage_ptr__->_padding_ = 3;
  DVar9 = eOff;
  __return_storage_ptr__->mode = eOff;
  __return_storage_ptr__->numFramesToGenerate = 1;
  __return_storage_ptr__->flags = 0;
  __return_storage_ptr__->dynamicResWidth = 0;
  __return_storage_ptr__->dynamicResHeight = 0;
  __return_storage_ptr__->numBackBuffers = 0;
  __return_storage_ptr__->mvecDepthWidth = 0;
  __return_storage_ptr__->mvecDepthHeight = 0;
  __return_storage_ptr__->colorWidth = 0;
  __return_storage_ptr__->colorHeight = 0;
  __return_storage_ptr__->colorBufferFormat = 0;
  __return_storage_ptr__->mvecBufferFormat = 0;
  __return_storage_ptr__->depthBufferFormat = 0;
  __return_storage_ptr__->hudLessBufferFormat = 0;
  __return_storage_ptr__->uiBufferFormat = 0;
  __return_storage_ptr__->bReserved15 = eInvalid;
  __return_storage_ptr__->queueParallelismMode = eBlockPresentingClientQueue;
  __return_storage_ptr__->onErrorCallback = DLSSGAPIErrorCallBack;
  bVar6 = FApp::HasFocus();
  if (bVar6) {
    iVar11 = *(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0;
    iVar8 = *(int *)((longlong)&param_2->field0_0x0 + 0xc) -
            *(int *)((longlong)&param_2->field0_0x0 + 4);
    if (iVar11 < iVar8) {
      iVar8 = iVar11;
    }
    if (GDLSSGMinWidthOrHeight <= iVar8) {
      DVar9 = SLDLSSGModeFromCvar();
    }
  }
  __return_storage_ptr__->mode = DVar9;
  pTVar4 = CVarStreamlineFullScreenMenuDetection.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    pDVar10 = (DLSSGOptions *)(*pcVar1)();
    return pDVar10;
  }
  if (pTVar4->ShadowedValue[1] != false) {
    __return_storage_ptr__->flags = __return_storage_ptr__->flags | eEnableFullscreenMenuDetection;
  }
  pTVar5 = CVarStreamlineDLSSGDynamicResolutionMode.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    pDVar10 = (DLSSGOptions *)(*pcVar1)();
    return pDVar10;
  }
  if (pTVar5->ShadowedValue[1] != 0) {
    __return_storage_ptr__->flags = __return_storage_ptr__->flags | eDynamicResolutionEnabled;
  }
  pTVar4 = CVarStreamlineDLSSGRetainResourcesWhenOff.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    pDVar10 = (DLSSGOptions *)(*pcVar1)();
    return pDVar10;
  }
  if (pTVar4->ShadowedValue[1] != false) {
    __return_storage_ptr__->flags = __return_storage_ptr__->flags | eRetainResourcesWhenOff;
  }
  uVar2 = GDLSSGMaxGeneratedFrames;
  uVar3 = GDLSSGMinGeneratedFrames;
  pTVar5 = CVarStreamlineDLSSGFramesToGenerate.Ref;
  bVar6 = IsInParallelGameThread();
  if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
    lVar12 = 4;
  }
  if (*(int *)((longlong)pTVar5->ShadowedValue + lVar12) < (int)uVar2) {
    uVar2 = *(uint *)((longlong)pTVar5->ShadowedValue + lVar12);
  }
  if ((int)uVar3 < (int)uVar2) {
    uVar3 = uVar2;
  }
  __return_storage_ptr__->numFramesToGenerate = uVar3;
  return __return_storage_ptr__;
}

// operator() @ 14de71660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  FRDGResource *this_00;
  FStreamlineRHI *this_01;
  code *pcVar3;
  bool bVar4;
  FStreamlineRHI *this_02;
  FrameToken *pFVar5;
  undefined8 *puVar6;
  ERHIAccess local_78;
  FRHIStreamlineResource local_60;
  uint local_40;
  undefined8 local_3c;
  undefined8 local_34;
  ulong64 local_28;
  
  if (**(longlong **)((longlong)this + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->SceneColorWithoutHUD",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDeepDVC.cpp"
                       ,0xee,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 8);
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x1c7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed((FRDGResource *)*plVar2);
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x14);
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x1c);
  this_00 = (FRDGResource *)**(undefined8 **)((longlong)this + 8);
  uVar1 = (*(undefined8 **)((longlong)this + 8))[2];
  if (this_00 == (FRDGResource *)0x0) {
    local_60.Texture = (FRHITexture *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(this_00);
    local_60.Texture = (FRHITexture *)this_00->ResourceRHI;
  }
  this_01 = *(FStreamlineRHI **)this;
  local_78 = (ERHIAccess)uVar1;
  local_60.ResourceRHIAccess = None;
  if (this_00 != (FRDGResource *)0x0) {
    local_60.ResourceRHIAccess = local_78;
  }
  local_40 = *(uint *)((longlong)this + 0x10);
  local_3c = *(undefined8 *)((longlong)this + 0x14);
  local_34 = *(undefined8 *)((longlong)this + 0x1c);
  local_28 = GFrameCounterRenderThread;
  local_60.StreamlineTag = Last;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar6;
    *(undefined8 **)&param_1->field_0x30 = puVar6 + 1;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineDeepDVCEvaluateRenderPass'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[1] = 0;
    puVar6[2] = this_01;
    puVar6[3] = local_60.Texture;
    *(TIntPoint<int> *)(puVar6 + 4) = local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    *(TIntPoint<int> *)(puVar6 + 5) = local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    *(EStreamlineResource *)(puVar6 + 6) = local_60.StreamlineTag;
    *(ERHIAccess *)((longlong)puVar6 + 0x34) = local_60.ResourceRHIAccess;
    *(uint *)(puVar6 + 7) = local_40;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = local_3c;
    *(undefined8 *)((longlong)puVar6 + 0x44) = local_34;
    puVar6[10] = local_28;
    puVar6[0xb] = L"TRHILambdaCommand";
  }
  else {
    this_02 = GetPlatformStreamlineRHI();
    pFVar5 = FStreamlineRHI::GetFrameToken(this_02,local_28);
    FStreamlineRHI::StreamlineEvaluateDeepDVC
              (this_01,(FRHICommandList *)param_1,&local_60,pFVar5,local_40);
  }
  return;
}

// operator() @ 14de71860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int>_u_0 TVar2;
  longlong *plVar3;
  code *pcVar4;
  FRDGResource *pFVar5;
  ulong64 uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  ForElementType<FRHIStreamlineResource> FVar10;
  undefined8 *puVar11;
  ForElementType<FRHIStreamlineResource> FVar12;
  longlong lVar13;
  FRHIStreamlineResource *pFVar14;
  ForElementType<FRHIStreamlineResource> FVar15;
  ERHIAccess EVar16;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188 [4];
  uint local_184;
  FRHIStreamlineResource local_180;
  FRHIStreamlineResource local_160;
  ForElementType<FRHIStreamlineResource> local_140;
  FRDGResource *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  FRDGResource *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ForElementType<FRHIStreamlineResource> local_f8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  ForElementType<FRHIStreamlineResource> local_a0;
  int local_58;
  int local_54;
  ERHIAccess local_50;
  ulong64 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_184 = *(uint *)((longlong)this + 0x30);
  uVar9 = (ulonglong)(int)local_184;
  FVar15 = *(ForElementType<FRHIStreamlineResource> *)((longlong)this + 0x28);
  local_140 = (ForElementType<FRHIStreamlineResource>)(uVar9 * 0x40 + (longlong)FVar15);
  do {
    FVar10 = local_140;
    if (*(int *)((longlong)this + 0x30) != (int)uVar9) {
      local_188[0] = 0;
      `TCheckedPointerIterator<FTrackedView,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_188);
    }
    if (FVar15 == FVar10) {
      return;
    }
    EVar16 = None;
    local_f8.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
    local_b0 = 0;
    local_ac = 2;
    if (((**(longlong **)((longlong)this + 0x10) != 0) != (bool)*(char *)((longlong)this + 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!PassParameters->BackBuffer == bTagBackbuffer",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                           ,600,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = *(undefined8 **)((longlong)this + 0x10);
    TVar1 = *(TIntPoint<int>_u_0 *)((longlong)FVar15 + 0x10);
    TVar2 = *(TIntPoint<int>_u_0 *)((longlong)FVar15 + 0x18);
    pFVar5 = (FRDGResource *)*puVar11;
    uStack_130 = puVar11[1];
    local_128 = puVar11[2];
    local_138 = pFVar5;
    if (pFVar5 == (FRDGResource *)0x0) {
      local_180.Texture = (FRHITexture *)0x0;
    }
    else {
      FRDGResource::ValidateRHIAccess(pFVar5);
      local_180.Texture = (FRHITexture *)pFVar5->ResourceRHI;
    }
    local_180.ResourceRHIAccess = EVar16;
    if (pFVar5 != (FRDGResource *)0x0) {
      local_180.ResourceRHIAccess = (ERHIAccess)local_128;
    }
    local_180.StreamlineTag = Backbuffer;
    FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar10 = local_f8.SecondaryData;
    }
    local_180.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar1;
    local_180.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar2;
    if ((ulonglong)FVar10 <= &local_180) {
      FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
        FVar10 = local_f8.SecondaryData;
      }
      if ((&local_180 < (FRHIStreamlineResource *)((longlong)local_ac * 0x20 + (longlong)FVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_b0 == local_ac) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                           (0x820,&local_f8,&local_ac);
    }
    lVar13 = (longlong)local_b0;
    FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar10 = local_f8.SecondaryData;
    }
    local_b0 = local_b0 + 1;
    pFVar14 = (FRHIStreamlineResource *)(lVar13 * 0x20 + (longlong)FVar10);
    pFVar14->Texture = local_180.Texture;
    (pFVar14->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>_u_0)local_180.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    (pFVar14->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)local_180.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    pFVar14->StreamlineTag = local_180.StreamlineTag;
    pFVar14->ResourceRHIAccess = local_180.ResourceRHIAccess;
    if (*(char *)((longlong)this + 8) != '\0') {
      if ((**(longlong **)((longlong)this + 0x10) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PassParameters->BackBuffer",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                             ,0x25c,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((longlong)this + 0x10);
      if ((*plVar3 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Texture",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x1c7,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRDGResource::MarkResourceAsUsed((FRDGResource *)*plVar3);
    }
    if (((*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) != 0) !=
         (bool)*(char *)((longlong)this + 9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!PassParameters->UIColorAndAlpha == bTagUIColorAlpha",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                           ,0x260,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar13 = *(longlong *)((longlong)this + 0x10);
    TVar1 = *(TIntPoint<int>_u_0 *)((longlong)FVar15 + 0x10);
    TVar2 = *(TIntPoint<int>_u_0 *)((longlong)FVar15 + 0x18);
    pFVar5 = *(FRDGResource **)(lVar13 + 0x18);
    uStack_110 = *(undefined8 *)(lVar13 + 0x20);
    local_108 = *(undefined8 *)(lVar13 + 0x28);
    local_118 = pFVar5;
    if (pFVar5 == (FRDGResource *)0x0) {
      local_160.Texture = (FRHITexture *)0x0;
    }
    else {
      FRDGResource::ValidateRHIAccess(pFVar5);
      local_160.Texture = (FRHITexture *)pFVar5->ResourceRHI;
    }
    local_160.ResourceRHIAccess = EVar16;
    if (pFVar5 != (FRDGResource *)0x0) {
      local_160.ResourceRHIAccess = (ERHIAccess)local_108;
    }
    FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar10 = local_f8.SecondaryData;
    }
    local_160.StreamlineTag = UIColorAndAlpha;
    local_160.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar1;
    local_160.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar2;
    if ((ulonglong)FVar10 <= &local_160) {
      FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
        FVar10 = local_f8.SecondaryData;
      }
      if ((&local_160 < (FRHIStreamlineResource *)((longlong)local_ac * 0x20 + (longlong)FVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_b0 == local_ac) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                           (0x820,&local_f8,&local_ac);
    }
    FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar10 = local_f8.SecondaryData;
    }
    pFVar14 = (FRHIStreamlineResource *)((longlong)local_b0 * 0x20 + (longlong)FVar10);
    local_b0 = local_b0 + 1;
    pFVar14->Texture = local_160.Texture;
    (pFVar14->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>_u_0)local_160.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    (pFVar14->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)local_160.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    pFVar14->StreamlineTag = local_160.StreamlineTag;
    pFVar14->ResourceRHIAccess = local_160.ResourceRHIAccess;
    if (*(char *)((longlong)this + 9) != '\0') {
      if ((*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PassParameters->UIColorAndAlpha",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                             ,0x264,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = *(longlong *)((longlong)this + 0x10);
      if ((*(longlong *)(lVar13 + 0x18) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Texture",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x1c7,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar13 + 0x18));
    }
    iVar7 = local_b0;
    uVar6 = GFrameCounterRenderThread;
    if (*(char *)((longlong)this + 0x38) == '\0') {
      EVar16 = *(ERHIAccess *)((longlong)FVar15 + 0x38);
    }
    local_a8 = *(undefined8 *)this;
    local_a0.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
    local_58 = local_b0;
    FVar10 = (ForElementType<FRHIStreamlineResource>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar10 = local_f8.SecondaryData;
    }
    if (local_b0 == 0) {
      local_54 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                (0x20,8,local_b0,0,&local_a0,local_b0,&local_54);
      FVar12 = (ForElementType<FRHIStreamlineResource>)&local_a0;
      if (local_a0.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
        FVar12 = local_a0.SecondaryData;
      }
      ConstructItems<FRHIStreamlineResource,FRHIStreamlineResource,int>
                ((void *)FVar12,(FRHIStreamlineResource *)FVar10,iVar7);
    }
    local_48 = uVar6;
    local_50 = EVar16;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x80,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar11;
      *(undefined8 **)&param_1->field_0x30 = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineUIHintTagPass'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
                  ::_vftable_;
      puVar11[2] = local_a8;
      puVar11[0xb] = 0;
      if (local_a0.SecondaryData == (ForElementType<FRHIStreamlineResource>)0x0) {
        memmove(puVar11 + 3,&local_a0,0x40);
      }
      if ((void *)puVar11[0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar11[0xb]);
      }
      *(ForElementType<FRHIStreamlineResource> *)(puVar11 + 0xb) = local_a0.SecondaryData;
      local_a0.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
      *(int *)(puVar11 + 0xc) = local_58;
      *(int *)((longlong)puVar11 + 100) = local_54;
      local_58 = 0;
      local_54 = 2;
      *(ERHIAccess *)(puVar11 + 0xd) = local_50;
      puVar11[0xe] = local_48;
      puVar11[0xf] = L"TRHILambdaCommand";
    }
    else {
      ``AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::operator()
                (&local_a8,param_1);
    }
    if (local_a0.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FMemory::Free((void *)local_a0.SecondaryData);
    }
    if (local_f8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FMemory::Free((void *)local_f8.SecondaryData);
    }
    FVar15 = (ForElementType<FRHIStreamlineResource>)((longlong)FVar15 + 0x40);
    uVar9 = (ulonglong)local_184;
  } while( true );
}

// operator() @ 14de72160

void __thiscall
``AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FStreamlineRHI *this_00;
  FrameToken *pFVar4;
  longlong lVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  this_00 = GetPlatformStreamlineRHI();
  pFVar4 = FStreamlineRHI::GetFrameToken(this_00,*(ulong64 *)((longlong)this + 0x60));
  plVar1 = *(longlong **)this;
  iStack_20 = *(int *)((longlong)this + 0x50);
  pcVar2 = *(code **)(*plVar1 + 0x10);
  lVar5 = *(longlong *)((longlong)this + 0x48);
  if (*(longlong *)((longlong)this + 0x48) == 0) {
    lVar5 = (longlong)this + 8;
  }
  if (iStack_20 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = (undefined4)lVar5;
  uStack_34 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_28 = local_38;
  uStack_24 = uStack_34;
  (*pcVar2)(plVar1,param_1,*(undefined4 *)((longlong)this + 0x58),pFVar4,&local_28);
  return;
}

// operator() @ 14de72230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `RegisterStreamlineDLSSGHooks'::__l28::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  FDelegateHandle FVar3;
  bool bVar4;
  uint uVar5;
  FSlateApplication *pFVar6;
  ulong64 *puVar7;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  ForAnyElementType *this_01;
  uint uVar8;
  longlong lVar9;
  
  if (4 < (byte)LogStreamline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
  }
  pFVar6 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar6->field_0x60;
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateRenderer",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                         ,0x180,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3.ID = OnBackBufferReadyToPresentHandle.ID;
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar1 + 0x98);
  if (OnBackBufferReadyToPresentHandle.ID != 0) {
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar8 = 0;
    if (0 < *(int *)(lVar1 + 200)) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 200)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = (ForAnyElementType *)(*(longlong *)(lVar1 + 0xc0) + lVar9);
        if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
           && (puVar7 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
              *puVar7 == FVar3.ID)) {
          if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_01->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
            *(undefined4 *)&this_01[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
          break;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar8 < *(int *)(lVar1 + 200));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

// operator() @ 14de723d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`RegisterStreamlineReflexHooks'::__l44::<lambda_1>::operator()(void *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined1 local_res10 [8];
  undefined8 local_48;
  ForAnyElementType local_40;
  uint local_38;
  uint uStack_34;
  FString local_30;
  
  pIVar8 = IModularFeatures::Get();
  FVar3 = *param_1;
  iVar11 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  uStack_34 = 0;
  iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar3);
  if (0 < iVar7) {
    do {
      local_48 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar3,iVar11);
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)(int)uStack_34 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_38 == uStack_34) {
        local_38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_40,(int *)&uStack_34);
      }
      uVar1 = local_38 + 1;
      iVar11 = iVar11 + 1;
      *(undefined8 *)(local_40.Data + (longlong)(int)local_38 * 8) = local_48;
      local_38 = uVar1;
    } while (iVar11 < iVar7);
  }
  uVar1 = local_38;
  uVar9 = (ulonglong)(int)local_38;
  pFVar2 = local_40.Data + uVar9 * 8;
  FVar10.Data = local_40.Data;
  while( true ) {
    if ((uint)uVar9 != uVar1) {
      `TCheckedPointerIterator<IModularFeature_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar10.Data == pFVar2) break;
    uVar4 = *(undefined8 *)FVar10.Data;
    if (4 < (byte)LogStreamline._0_1_) {
      ::FName::ToString(param_1,&local_30);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    pIVar8 = IModularFeatures::Get();
    (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,*param_1,uVar4);
    uVar9 = (ulonglong)local_38;
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// operator() @ 14de726a0

void __thiscall
``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()'::__l2
::<lambda_2>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FStreamlineRHI *this_00;
  FrameToken *pFVar4;
  longlong lVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  
  this_00 = GetPlatformStreamlineRHI();
  pFVar4 = FStreamlineRHI::GetFrameToken(this_00,*(ulong64 *)((longlong)this + 0xa0));
  plVar1 = *(longlong **)this;
  iStack_20 = *(int *)((longlong)this + 0x98);
  pcVar2 = *(code **)(*plVar1 + 0x10);
  lVar5 = *(longlong *)((longlong)this + 0x90);
  if (*(longlong *)((longlong)this + 0x90) == 0) {
    lVar5 = (longlong)this + 0x10;
  }
  if (iStack_20 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = (undefined4)lVar5;
  uStack_34 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_28 = local_38;
  uStack_24 = uStack_34;
  (*pcVar2)(plVar1,param_1,*(undefined4 *)((longlong)this + 8),pFVar4,&local_28);
  return;
}

// operator() @ 14de72780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `RegisterStreamlineReflexHooks'::__l105::<lambda_2>::operator()(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  GenericApplication *pGVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FStreamlineLatencyMarkers *pFVar4;
  
  FSlateApplication::Get();
  FVar2 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
  pGVar1 = FSlateApplicationBase::PlatformApplication.Object;
  if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  if (pGVar1 == (GenericApplication *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WindowsApplication",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                       ,0x308,L"");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pGVar1->_padding_ + 0x128);
  pFVar4 = FStreamlineLatencyMarkers::Get();
                    /* WARNING: Could not recover jumptable at 0x00014de727f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pGVar1,&pFVar4->_padding_);
  return;
}

// operator() @ 14de73710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de73875) */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,DLSSGOptions *param_1)

{
  int *piVar1;
  DLSSGMode DVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  char *_Str;
  undefined1 auStack_1a8 [32];
  FString *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  DVar2 = param_1->mode;
  if (DVar2 == eOff) {
    _Str = "sl::DLSSGMode::eOff";
  }
  else if (DVar2 == eOn) {
    _Str = "sl::DLSSGMode::eOn";
  }
  else if (DVar2 == eAuto) {
    _Str = "sl::DLSSGMode::eAuto";
  }
  else {
    _Str = "Unknown";
  }
  local_148._padding_ = 0;
  sVar6 = strlen(_Str);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,_Str,(int)sVar6,Yes);
  ::FString::PrintfImpl(&local_158,L"%s numFramesToGenerate=%u");
  pFVar8 = (this->ArgStrings).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_158) &&
     (lVar7 = (longlong)(this->ArgStrings).ArrayMax,
     (FScriptContainerElement *)&local_158 < pFVar8 + lVar7 * 0x10)) {
    local_170 = (longlong)(this->ArgStrings).ArrayNum;
    local_168 = 0x10;
    local_188 = &local_158;
    local_180 = pFVar8;
    local_178 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar5 + 1;
  pFVar8 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_158.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_158.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_158.Data.ArrayMax;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// operator() @ 14de738c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de73a3b) */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,DeepDVCOptions *param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  char *_Str;
  undefined1 auStack_1b8 [32];
  FString *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  fVar2 = param_1->saturationBoost;
  if (param_1->mode == eOff) {
    _Str = "sl::DeepDVCMode::eOff";
  }
  else if (param_1->mode == eOn) {
    _Str = "sl::DeepDVCMode::eOn";
  }
  else {
    _Str = "Unknown";
  }
  local_158._padding_ = 0;
  sVar7 = strlen(_Str);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar7,Yes);
  local_198 = (FString *)(double)fVar2;
  ::FString::PrintfImpl(&local_168,L"%s intensity=%.3f saturationBoost=%.3f");
  pFVar3 = (this->ArgStrings).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_168) &&
     (lVar8 = (longlong)(this->ArgStrings).ArrayMax,
     (FScriptContainerElement *)&local_168 < pFVar3 + lVar8 * 0x10)) {
    local_180 = (longlong)(this->ArgStrings).ArrayNum;
    local_178 = 0x10;
    local_198 = &local_168;
    local_190 = pFVar3;
    local_188 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  lVar8 = (longlong)iVar6;
  (this->ArgStrings).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ArgStrings).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar8 * 0x10) = local_168.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + lVar8 * 0x10 + 8) = local_168.Data.ArrayNum;
  *(int *)(pFVar3 + lVar8 * 0x10 + 0xc) = local_168.Data.ArrayMax;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// operator() @ 14de73a90

/* WARNING: Removing unreachable block (ram,0x00014de73b7e) */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,FrameToken *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  (*(code *)**(undefined8 **)param_1)(param_1);
  ::FString::PrintfImpl(&local_18,L"frame=%u");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator() @ 14de73b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de73cf2) */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,ReflexOptions *param_1)

{
  int *piVar1;
  ReflexMode RVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  char *_Str;
  undefined1 auStack_198 [32];
  FString *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  RVar2 = param_1->mode;
  if (RVar2 == eOff) {
    _Str = "ReflexMode::eOff";
  }
  else if (RVar2 == eLowLatency) {
    _Str = "ReflexMode::eLowLatency";
  }
  else if (RVar2 == eLowLatencyWithBoost) {
    _Str = "ReflexMode::eLowLatencyWithBoost";
  }
  else {
    _Str = "Unknown";
  }
  local_138._padding_ = 0;
  sVar6 = strlen(_Str);
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar6,Yes);
  ::FString::PrintfImpl(&local_148,L"mode=%s");
  pFVar8 = (this->ArgStrings).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_148) &&
     (lVar7 = (longlong)(this->ArgStrings).ArrayMax,
     (FScriptContainerElement *)&local_148 < pFVar8 + lVar7 * 0x10)) {
    local_160 = (longlong)(this->ArgStrings).ArrayNum;
    local_158 = 0x10;
    local_178 = &local_148;
    local_170 = pFVar8;
    local_168 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar5 + 1;
  pFVar8 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_148.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_148.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// operator() @ 14de73d40

/* WARNING: Removing unreachable block (ram,0x00014de73e27) */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,ViewportHandle *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"viewport=%u");
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->ArgStrings).ArrayMax * 0x10)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// operator() @ 14de73e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall StringifySLArgument::operator()(StringifySLArgument *this,PCLMarker *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *_Str;
  size_t sVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  _Str = sl::getPCLMarkerAsStr(*param_1);
  local_138._padding_ = 0;
  if (_Str == (char *)0x0) {
    local_138.StringLength = 0;
    local_138.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar5 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar5,Yes);
  }
  pFVar6 = (FScriptContainerElement *)::FString::FString(&local_148,local_138.Ptr);
  pFVar7 = (this->ArgStrings).AllocatorInstance.Data;
  if ((pFVar7 <= pFVar6) &&
     (lVar8 = (longlong)(this->ArgStrings).ArrayMax, pFVar6 < pFVar7 + lVar8 * 0x10)) {
    local_160 = (longlong)(this->ArgStrings).ArrayNum;
    local_158 = 0x10;
    local_178 = pFVar6;
    local_170 = pFVar7;
    local_168 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->ArgStrings).ArrayNum;
  piVar1 = &(this->ArgStrings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->ArgStrings).ArrayNum = iVar4 + 1;
  pFVar7 = (this->ArgStrings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = *(int *)&pFVar6[8].field_0x0;
  *(int *)(pFVar7 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
  *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14de73fbc

/* [thunk]:public: virtual void * __ptr64 __cdecl FStreamlineLatencyMarkers::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FStreamlineLatencyMarkers::_vector_deleting_destructor__adjustor_16__
          (FStreamlineLatencyMarkers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FStreamlineLatencyMarkers *)&this[-1].OSRenderQueueOffsetMs,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14de73fd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void_*),FDefaultDelegateUserPolicy,`FStreamlineViewExtension::FStreamlineViewExtension'::__l28::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74000

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`RegisterStreamlineDLSSGHooks'::__l28::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74030

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`RegisterStreamlineReflexHooks'::__l105::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStreamlineViewExtension::FStreamlineViewExtension'::__l28::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStreamlineViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStreamlineViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de740c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStreamlineViewExtension,void___cdecl(void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStreamlineViewExtension,void___cdecl(void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de740f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74160

void * __thiscall
FRDGAllocator::TObject<`anonymous_namespace'::FSLDeepDVCShaderParameters>::
_scalar_deleting_destructor_
          (TObject<_anonymous_namespace_::FSLDeepDVCShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74190

void * __thiscall
FRDGAllocator::TObject<FSLSetStateShaderParameters>::_scalar_deleting_destructor_
          (TObject<FSLSetStateShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de741c0

void * __thiscall
FRDGAllocator::TObject<FSLShaderParameters>::_scalar_deleting_destructor_
          (TObject<FSLShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de741f0

void * __thiscall
FRDGAllocator::TObject<FSLUIHintTagShaderParameters>::_scalar_deleting_destructor_
          (TObject<FSLUIHintTagShaderParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74220

void * __thiscall
TRDGLambdaPass<FRenderTargetParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l111::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74280

void * __thiscall
TRDGLambdaPass<`anonymous_namespace'::FSLDeepDVCShaderParameters,`AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de742e0

void * __thiscall
TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74340

void * __thiscall
TRDGLambdaPass<FSLSetStateShaderParameters,`AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de743a0

void * __thiscall
TRDGLambdaPass<FSLShaderParameters,`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74400

void * __thiscall
TRDGLambdaPass<FSLUIHintTagShaderParameters,`AddStreamlineUIHintTagPass'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<FTrackedView,int>
            (*(FTrackedView **)((longlong)this + 0x1a8),*(int *)((longlong)this + 0x1b0));
  if (*(void **)((longlong)this + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1a8));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStreamlineViewExtension,SharedPointerInternals::DefaultDeleter<FStreamlineViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FStreamlineViewExtension,SharedPointerInternals::DefaultDeleter<FStreamlineViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de744d0

void * __thiscall
FStreamlineLatencyMarkers::_scalar_deleting_destructor_
          (FStreamlineLatencyMarkers *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__IWindowsMessageHandler__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74530

void * __thiscall
FStreamlineMaxTickRateHandler::_scalar_deleting_destructor_
          (FStreamlineMaxTickRateHandler *this,uint param_1)

{
  *(undefined ***)this = &___7FStreamlineMaxTickRateHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de74570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FStreamlineViewExtension::_scalar_deleting_destructor_(FStreamlineViewExtension *this,uint param_1)

{
  ~FStreamlineViewExtension(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7b0);
  }
  return this;
}

// AddStreamlineDLSSGStateRenderPass @ 14de745b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineDLSSGStateRenderPass(FRDGBuilder *param_1,uint param_2,TIntRect<int> *param_3)

{
  <lambda_2> local_res20 [8];
  <lambda_1> local_18 [24];
  
  AddStreamlineStateRenderPass<_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_2>_>
            (L"DLSS-G",param_1,param_2,param_3,local_18,local_res20);
  return;
}

// AddStreamlineDeepDVCEvaluateRenderPass @ 14de745f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineDeepDVCEvaluateRenderPass
          (FStreamlineRHI *param_1,FRDGBuilder *param_2,uint param_3,TIntRect<int> *param_4,
          FRDGTexture *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRDGEventName *pFVar6;
  undefined8 *puVar7;
  FSLDeepDVCShaderParameters *pFVar8;
  undefined8 *local_88;
  FRDGTextureAccess local_80;
  FRDGEventName local_68;
  <lambda_1> local_50;
  
  puVar7 = (undefined8 *)0x0;
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &FRDGAllocator::TObject<FSLDeepDVCShaderParameters>::_vftable_;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
    puVar7 = puVar5;
  }
  local_88 = puVar7;
  if (((undefined8 **)param_2->_padding_ <= &local_88) &&
     (&local_88 < (undefined8 **)param_2->_padding_ + *(int *)((longlong)&param_2->_padding_ + 4)))
  {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (int)param_2->_padding_;
  piVar1 = (int *)((longlong)&param_2->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_2->_padding_,piVar1);
  }
  *(int *)&param_2->_padding_ = iVar4 + 1;
  pFVar8 = (FSLDeepDVCShaderParameters *)(puVar7 + 2);
  *(undefined8 **)(param_2->_padding_ + (longlong)iVar4 * 8) = local_88;
  FRDGTextureAccess::FRDGTextureAccess(&local_80,param_5,UAVCompute);
  *(FRDGTexture **)&pFVar8->SceneColorWithoutHUD = local_80.Texture;
  *(FRDGTextureSubresourceRange *)(puVar7 + 3) = local_80.SubresourceRange;
  puVar7[4] = local_80._16_8_;
  local_50.SecondaryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_4->field0_0x0)._s_0.Min.field0_0x0;
  local_50.SecondaryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_4->field0_0x0)._s_0.Max.field0_0x0;
  local_50.StreamlineRHIExtensions = param_1;
  local_50.PassParameters = pFVar8;
  local_50.ViewID = param_3;
  pFVar6 = FRDGEventName::FRDGEventName(&local_68,L"Streamline DeepDVC Evaluate ViewID=%u");
  FRDGBuilder::
  AddPass<_anonymous_namespace_::FSLDeepDVCShaderParameters,_AddStreamlineDeepDVCEvaluateRenderPass_::__l2::<lambda_1>_>
            (param_2,pFVar6,pFVar8,SkipRenderPass|Readback|Compute|Raster,&local_50);
  if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// AddStreamlineDeepDVCStateRenderPass @ 14de747e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineDeepDVCStateRenderPass(FRDGBuilder *param_1,uint param_2,TIntRect<int> *param_3)

{
  <lambda_2> local_res20 [8];
  <lambda_1> local_18 [24];
  
  AddStreamlineStateRenderPass<_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_2>_>
            (L"DeepDVC",param_1,param_2,param_3,local_18,local_res20);
  return;
}

// AddStreamlineLatewarpStateRenderPass @ 14de74820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
AddStreamlineLatewarpStateRenderPass(FRDGBuilder *param_1,uint param_2,TIntRect<int> *param_3)

{
  return;
}

// AddStreamlineUIHintTagPass @ 14de74830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __cdecl
AddStreamlineUIHintTagPass
          (FRDGBuilder *param_1,bool param_2,bool param_3,TIntPoint<int> *param_4,
          FSLUIHintTagShaderParameters *param_5,uint param_6,FStreamlineRHI *param_7,
          TArray<FTrackedView,TSizedDefaultAllocator<32>_> *param_8,TIntRect<int> *param_9,
          bool param_10)

{
  int iVar1;
  FTrackedView *pFVar2;
  FRDGEventName *pFVar3;
  code *pcVar4;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FRDGEventName local_98;
  <lambda_1> local_80;
  
  local_80.RHIExtensions = param_7;
  local_80.WindowClientAreaRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_9->field0_0x0)._s_0.Min.field0_0x0;
  iVar1 = param_8->ArrayNum;
  pFVar2 = (FTrackedView *)(param_8->AllocatorInstance).Data;
  local_80.WindowClientAreaRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_9->field0_0x0)._s_0.Max.field0_0x0;
  local_80.PassParameters = param_5;
  local_80.ViewsInThisBackBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.bTagBackbuffer = param_2;
  local_80.bTagUIColorAlpha = param_3;
  local_80.ViewsInThisBackBuffer.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_80.ViewsInThisBackBuffer.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar1,0,&local_80.ViewsInThisBackBuffer.AllocatorInstance,iVar1,
               &local_80.ViewsInThisBackBuffer.ArrayMax);
    ConstructItems<FTrackedView,FTrackedView,int>
              (local_80.ViewsInThisBackBuffer.AllocatorInstance.Data,pFVar2,iVar1);
  }
  local_80.HasViewIdOverride = param_10;
  FString::PrintfImpl(&local_a8,L"X=%d Y=%d");
  pFVar3 = FRDGEventName::FRDGEventName
                     (&local_98,
                      L"Streamline Tag {Backbuffer=%u UIColorAndAlpha=%u} NumViews=%u  WindowClient%dx%d [%d,%d -> %d,%d] Texture=%s"
                     );
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar4 = FSLUIHintTagShaderParameters::zzAppendMemberGetPrev;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    do {
      pcVar4 = (code *)(*pcVar4)(param_2,&local_b8);
    } while (pcVar4 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
               L"FSLUIHintTagShaderParameters",L"FSLUIHintTagShaderParameters",(wchar_t *)0x0,
               (wchar_t *)0x0,
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.h"
               ,0x2e,0x30,&local_b8,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_b8.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    atexit(`FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FRDGBuilder::
  AddPassInternal<FSLUIHintTagShaderParameters,_AddStreamlineUIHintTagPass_::__l2::<lambda_1>_>
            (param_1,pFVar3,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_5,NeverMerge|SkipRenderPass|Readback|Compute|Raster
             ,&local_80);
  if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<FTrackedView,int>
            ((FTrackedView *)local_80.ViewsInThisBackBuffer.AllocatorInstance.Data,
             local_80.ViewsInThisBackBuffer.ArrayNum);
  if ((FTrackedView *)local_80.ViewsInThisBackBuffer.AllocatorInstance.Data != (FTrackedView *)0x0)
  {
    FMemory::Free(local_80.ViewsInThisBackBuffer.AllocatorInstance.Data);
  }
  FRDGBuilder::Execute(param_1);
  return;
}

// BeginRenderViewFamilyDLSSG @ 14de752d0

void __cdecl BeginRenderViewFamilyDLSSG(FSceneViewFamily *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EStreamlineFeatureSupport EVar5;
  DLSSGMode DVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  EVar5 = QueryStreamlineDLSSGSupport();
  if ((EVar5 == Supported) &&
     (DVar6 = SLDLSSGModeFromCvar(), pTVar2 = CVarStreamlineDLSSGAdjustMotionBlurTimeScale.Ref,
     DVar6 != eOff)) {
    bVar4 = IsInParallelGameThread();
    lVar11 = 4;
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 4;
    }
    pTVar3 = CVarStreamlineDLSSGAdjustMotionBlurTimeScale.Ref;
    if ((*(int *)((longlong)pTVar2->ShadowedValue + lVar9) != 0) && ((param_1->Views).ArrayNum != 0)
       ) {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar11 = 0;
      }
      if (*(int *)((longlong)pTVar3->ShadowedValue + lVar11) == 2) {
        iVar7 = GLastDLSSGFramesPresented;
        if (GLastDLSSGFramesPresented < 1) {
          iVar7 = 1;
        }
      }
      else {
        iVar7 = GetStreamlineDLSSGNumFramesToGenerate();
        iVar7 = iVar7 + 1;
      }
      uVar10 = 0;
      fVar12 = __real_3f800000 / (float)iVar7;
      if (0 < (param_1->Views).ArrayNum) {
        lVar11 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < (param_1->Views).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar9 = *(longlong *)
                   (*(longlong *)((param_1->Views).AllocatorInstance.Data + lVar11) + 0x10);
          if (lVar9 != 0) {
            *(float *)(lVar9 + 0x498) = fVar12 * *(float *)(lVar9 + 0x498);
            *(float *)(lVar9 + 0x49c) = fVar12 * *(float *)(lVar9 + 0x49c);
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar10 < (param_1->Views).ArrayNum);
      }
    }
  }
  return;
}

// DLSSGAPIErrorCallBack @ 14de76000

void __cdecl DLSSGAPIErrorCallBack(APIError *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FStreamlineRHI *pFVar1;
  
  pFVar1 = GetPlatformStreamlineRHI();
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014de76020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar1,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// DLSSGOnBackBufferReadyToPresent @ 14de76030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl DLSSGOnBackBufferReadyToPresent(SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  ISlateViewport *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  TRefCountPtr<FRHITexture> *pTVar6;
  bool bVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  EStreamlineFeatureSupport EVar11;
  DLSSGMode DVar12;
  FRHITexture *pFVar13;
  undefined8 *puVar14;
  FRHITexture *pFVar15;
  TRefCountPtr<IPooledRenderTarget> TVar16;
  FRDGTexture *pFVar17;
  IConsoleManager *pIVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  FRHITexture *pFVar22;
  FRHITexture *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  TIntRect<int>_u_0 *pTVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  FRHITexture *pFVar31;
  FScriptContainerElement *pFVar32;
  undefined1 auStackY_bf8 [32];
  bool local_ba8;
  TArray<FTrackedView,TSizedDefaultAllocator<32>_> local_ba0;
  undefined1 local_b90;
  undefined1 local_b8f [7];
  TIntRect<int>_u_0 local_b88;
  SWindow *local_b78;
  FRHITexture *local_b70;
  TRefCountPtr<FRHITexture> *local_b68;
  TIntPoint<int>_u_0 local_b60;
  FString local_b58;
  FString local_b48;
  TIntRect<int>_u_0 local_b38;
  TIntPoint<int>_u_0 local_b28;
  undefined8 local_b20;
  TIntPoint<int>_u_0 local_b18;
  undefined8 local_b10;
  TIntPoint<int>_u_0 local_b08;
  undefined4 local_b00;
  undefined1 local_af8 [24];
  int local_ae0;
  FString local_ad8;
  FRDGEventName local_ac8;
  FString local_ab0;
  FString local_aa0;
  FRDGTextureAccess local_a90;
  FRDGTextureAccess local_a78;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a58;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  undefined1 local_818 [64];
  ForAnyElementType local_7d8;
  int local_7d0;
  int local_7cc [481];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_bf8;
  local_b78 = param_1;
  local_b68 = param_2;
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                         ,0xc1,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->Type != GameWindow) {
    return;
  }
  pFVar31 = (FRHITexture *)0x0;
  uVar26 = 0;
  CurrentThreadName(&local_ab0);
  local_a58._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_a58,"DLSSGOnBackBufferReadyToPresent",0x1f,Yes);
  FString::PrintfImpl((FString *)(local_af8 + 0x10),L"%s Entry %s Backbuffer=%p");
  pwVar19 = L"";
  if (local_ae0 != 0) {
    pwVar19 = (wchar_t *)local_af8._16_8_;
  }
  FStreamlineViewExtension::LogTrackedViews(pwVar19);
  if ((wchar_t *)local_af8._16_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_af8._16_8_);
  }
  if ((void *)local_a58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a58._padding_);
  }
  if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
  }
  pFVar23 = (FRHITexture *)(param_1->Viewport).WeakReferenceCount.ReferenceController;
  pFVar15 = pFVar31;
  if ((param_2->Reference->TextureDesc).Dimension == Texture2D) {
    pFVar15 = param_2->Reference;
  }
  pFVar22 = pFVar23;
  if (pFVar23 != (FRHITexture *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar23->_padding_;
    do {
      pFVar22 = pFVar31;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14de761b5;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar23->_padding_;
      bVar7 = aVar3 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar23->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar7);
    pIVar1 = (param_1->Viewport).Object;
    pFVar22 = pFVar23;
    if (pIVar1 != (ISlateViewport *)0x0) {
      puVar14 = (undefined8 *)(**(code **)((longlong)pIVar1[-0x1a] + 0x10))();
      pFVar13 = (FRHITexture *)*puVar14;
      if ((pFVar13 != (FRHITexture *)0x0) &&
         (pFVar15 = pFVar31, (pFVar13->TextureDesc).Dimension == Texture2D)) {
        pFVar15 = pFVar13;
      }
    }
  }
LAB_14de761b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar22);
  local_ba0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ba0.ArrayNum = 0;
  local_ba0.ArrayMax = 0;
  pFVar23 = pFVar31;
  pFVar22 = pFVar31;
  iVar10 = FStreamlineViewExtension::TrackedViews.ArrayNum;
  if (0 < FStreamlineViewExtension::TrackedViews.ArrayNum) {
    do {
      uVar25 = (uint)pFVar23;
      uVar28 = ~uVar25 >> 0x1f;
      uVar9 = uVar26;
      if ((int)uVar25 < iVar10) {
        uVar9 = uVar28;
      }
      if ((uVar9 == 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar10 = FStreamlineViewExtension::TrackedViews.ArrayNum, bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = pFVar31;
      if (((*(FRHITexture **)
             (FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data + 0x30 +
             (longlong)pFVar22))->TextureDesc).Dimension == Texture2D) {
        pFVar13 = *(FRHITexture **)
                   (FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data + 0x30 +
                   (longlong)pFVar22);
      }
      if (pFVar13 == pFVar15) {
        uVar9 = uVar26;
        if ((int)uVar25 < iVar10) {
          uVar9 = uVar28;
        }
        if ((uVar9 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar27 = (TIntRect<int>_u_0 *)
                  (FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data + (longlong)pFVar22
                  );
        if (((local_ba0.AllocatorInstance.Data <= pTVar27) &&
            (pTVar27 < (TIntRect<int>_u_0 *)
                       (local_ba0.AllocatorInstance.Data + (longlong)local_ba0.ArrayMax * 0x40))) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_ba0.ArrayNum == local_ba0.ArrayMax) {
          local_ba0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&local_ba0.AllocatorInstance,&local_ba0.ArrayMax);
        }
        lVar20 = (longlong)local_ba0.ArrayNum;
        local_ba0.ArrayNum = local_ba0.ArrayNum + 1;
        FTrackedView::FTrackedView
                  ((FTrackedView *)(local_ba0.AllocatorInstance.Data + lVar20 * 0x40),
                   (FTrackedView *)&pTVar27->_s_0);
        uVar9 = uVar26;
        if ((int)uVar25 < FStreamlineViewExtension::TrackedViews.ArrayNum) {
          uVar9 = uVar28;
        }
        if ((uVar9 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FTrackedView,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&FStreamlineViewExtension::TrackedViews,uVar25);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&FStreamlineViewExtension::TrackedViews.AllocatorInstance,
                   FStreamlineViewExtension::TrackedViews.ArrayNum,
                   &FStreamlineViewExtension::TrackedViews.ArrayMax);
        iVar10 = FStreamlineViewExtension::TrackedViews.ArrayNum;
      }
      else {
        pFVar23 = (FRHITexture *)(ulonglong)(uVar25 + 1);
        pFVar22 = (FRHITexture *)&pFVar22->_padding_;
      }
      param_2 = local_b68;
      param_1 = local_b78;
    } while ((int)pFVar23 < iVar10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pIVar18 = IConsoleManager::Get();
    CVarStreamlineViewIndexToTag =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18,L"r.Streamline.ViewIndexToTag",1);
    _Init_thread_footer(&_TSS0);
  }
  if (((CVarStreamlineViewIndexToTag != (IConsoleVariable *)0x0) &&
      (iVar10 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag + 200))(), iVar10 != -1)) &&
     (pFVar23 = pFVar31, 0 < local_ba0.ArrayNum)) {
    do {
      if ((int)pFVar23 == 1) {
        if ((local_ba0.ArrayNum < 2) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar21.Data = local_ba0.AllocatorInstance.Data;
        local_b38._s_0.Min.field0_0x0 =
             (TIntPoint<int>)
             (((TIntRect<int>_u_0 *)(local_ba0.AllocatorInstance.Data + 0x40))->_s_0).Min.field0_0x0
        ;
        local_b38._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_ba0.AllocatorInstance.Data + 0x48);
        local_b28 = (((TIntRect<int>_u_0 *)(local_ba0.AllocatorInstance.Data + 0x50))->_s_0).Min.
                    field0_0x0;
        local_b20 = *(undefined8 *)(local_ba0.AllocatorInstance.Data + 0x58);
        local_b18 = (((TIntRect<int>_u_0 *)(local_ba0.AllocatorInstance.Data + 0x60))->_s_0).Min.
                    field0_0x0;
        local_b10 = *(undefined8 *)(local_ba0.AllocatorInstance.Data + 0x68);
        local_b08 = (((TIntRect<int>_u_0 *)(local_ba0.AllocatorInstance.Data + 0x70))->_s_0).Min.
                    field0_0x0;
        if (local_b08 != (TIntPoint<int>_u_0)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_b08);
        }
        local_b00 = *(undefined4 *)(FVar21.Data + 0x78);
        DestructItems<FTrackedView,int>
                  ((FTrackedView *)local_ba0.AllocatorInstance.Data,local_ba0.ArrayNum);
        local_ba0.ArrayNum = 0;
        if (local_ba0.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,0,&local_ba0.AllocatorInstance,0,&local_ba0.ArrayMax);
        }
        if (((local_ba0.AllocatorInstance.Data <= &local_b38) &&
            (&local_b38 <
             (TIntRect<int>_u_0 *)
             (local_ba0.AllocatorInstance.Data + (longlong)local_ba0.ArrayMax * 0x40))) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_ba0.ArrayNum == local_ba0.ArrayMax) {
          local_ba0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&local_ba0.AllocatorInstance,&local_ba0.ArrayMax);
        }
        FVar21.Data = local_ba0.AllocatorInstance.Data;
        uVar26 = local_ba0.ArrayNum + 1;
        lVar20 = (longlong)local_ba0.ArrayNum * 0x40;
        *(TIntPoint<int> *)(local_ba0.AllocatorInstance.Data + lVar20) =
             local_b38._s_0.Min.field0_0x0;
        *(TIntPoint<int> *)(local_ba0.AllocatorInstance.Data + lVar20 + 8) =
             local_b38._s_0.Max.field0_0x0;
        *(TIntPoint<int>_u_0 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x10) = local_b28;
        *(undefined8 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x18) = local_b20;
        *(TIntPoint<int>_u_0 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x20) = local_b18;
        *(undefined8 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x28) = local_b10;
        *(undefined8 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x30) = 0;
                    /* WARNING: Store size is inaccurate */
        *(TIntPoint<int>_u_0 *)
         ((TIntPoint<int>_u_0 *)(local_ba0.AllocatorInstance.Data + lVar20 + 0x30))->XY = local_b08;
        local_ba0.ArrayNum = uVar26;
        if (local_b08 != (TIntPoint<int>_u_0)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_b08);
        }
        *(undefined4 *)(FVar21.Data + lVar20 + 0x38) = local_b00;
        if (local_b08 != (TIntPoint<int>_u_0)0x0) {
          FRHIResource::Release((FRHIResource *)local_b08);
        }
        break;
      }
      uVar26 = (int)pFVar23 + 1;
      pFVar23 = (FRHITexture *)(ulonglong)uVar26;
    } while ((int)uVar26 < local_ba0.ArrayNum);
  }
  iVar10 = local_ba0.ArrayNum;
  if (bLogStreamlineLogTrackedViews != false) {
    bVar7 = true;
    pTVar27 = (TIntRect<int>_u_0 *)
              (local_ba0.AllocatorInstance.Data + (longlong)local_ba0.ArrayNum * 0x40);
    local_b58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b58.Data.ArrayNum = 0;
    local_b58.Data.ArrayMax = 0;
    FVar21.Data = local_ba0.AllocatorInstance.Data;
    while( true ) {
      if (local_ba0.ArrayNum != iVar10) {
        local_b90 = 0;
        `TCheckedPointerIterator<FTrackedView_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_b90);
      }
      if ((TIntRect<int>_u_0 *)FVar21.Data == pTVar27) break;
      if (bVar7) {
        bVar7 = false;
      }
      else {
        FString::AppendChars(&local_b58,L", ",2);
      }
      local_b48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b48.Data.ArrayNum = 0;
      local_b48.Data.ArrayMax = 0;
      FString::AppendInt(&local_b48,
                         (((TIntPoint<int> *)((longlong)FVar21.Data + 0x38))->field0_0x0)._s_0.X);
      iVar30 = local_b48.Data.ArrayNum + -1;
      if (local_b48.Data.ArrayNum == 0) {
        iVar30 = 0;
      }
      FString::AppendChars(&local_b58,(wchar_t *)local_b48.Data.AllocatorInstance.Data,iVar30);
      if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b48.Data.AllocatorInstance.Data);
      }
      FVar21.Data = FVar21.Data + 0x40;
    }
    if (4 < (byte)LogStreamline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
    param_2 = local_b68;
    CurrentThreadName(&local_aa0);
    local_938._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_938,"DLSSGOnBackBufferReadyToPresent",0x1f,Yes);
    FString::PrintfImpl(&local_ad8,L"%s Exit %s Backbuffer=%p ");
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_ad8.Data.ArrayNum != 0) {
      FVar21.Data = local_ad8.Data.AllocatorInstance.Data;
    }
    FStreamlineViewExtension::LogTrackedViews((wchar_t *)FVar21.Data);
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
    if ((void *)local_938._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_938._padding_);
    }
    if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
    }
    if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b58.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = ForceTagStreamlineBuffers();
  if (((!bVar7) &&
      ((EVar11 = QueryStreamlineDLSSGSupport(), EVar11 != Supported ||
       (DVar12 = SLDLSSGModeFromCvar(), DVar12 == eOff)))) || (local_ba0.ArrayNum == 0))
  goto LAB_14de76db3;
  bVar7 = ForceTagStreamlineBuffers();
  pTVar4 = CVarStreamlineTagUIColorAlpha.Ref;
  if (bVar7) {
LAB_14de7689a:
    local_ba8 = true;
  }
  else {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_ba8 = false;
    if (pTVar4->ShadowedValue[1] != false) goto LAB_14de7689a;
  }
  bVar7 = ForceTagStreamlineBuffers();
  pTVar4 = CVarStreamlineTagBackbuffer.Ref;
  if (bVar7) {
LAB_14de768e4:
    pFVar31 = (FRHITexture *)&DAT_00000001;
  }
  else {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar4->ShadowedValue[1] != false) goto LAB_14de768e4;
  }
  pFVar23 = (FRHITexture *)0x0;
  local_ac8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ac8.FormattedEventName.Data.ArrayNum = 0;
  local_ac8.FormattedEventName.Data.ArrayMax = 0;
  local_ac8.EventFormat = L"";
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)local_818,&GRHICommandList.CommandListImmediate,&local_ac8,None,
             GMaxRHIShaderPlatform);
  pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x40,0x10);
  if (pFVar15 == (FRHITexture *)0x0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    pFVar15 = pFVar23;
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = (longlong)&___7__TObject_VFSLUIHintTagShaderParameters___FRDGAllocator__6B_
    ;
    *(undefined4 *)&pFVar15->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0;
    pFVar15->_padding_ = 0;
    *(undefined4 *)&pFVar15->_padding_ = 0;
    *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0;
  }
  local_b70 = pFVar15;
  if (((local_7d8.Data <= (FScriptContainerElement *)&local_b70) &&
      ((FScriptContainerElement *)&local_b70 < local_7d8.Data + (longlong)local_7cc[0] * 8)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_7d0 == local_7cc[0]) {
    local_7d0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_7d8,local_7cc);
  }
  *(FRHITexture **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_b70;
  local_7d0 = local_7d0 + 1;
  local_af8._8_8_ = GetPlatformStreamlineRHI();
  pFVar22 = pFVar23;
  if ((param_2->Reference->TextureDesc).Dimension == Texture2D) {
    pFVar22 = param_2->Reference;
  }
  lVar20 = (**(code **)(pFVar22->_padding_ + 0x20))();
  local_b60._s_0.X = *(int *)(lVar20 + 0x24);
  local_b78 = (SWindow *)CONCAT44(local_b78._4_4_,local_b60._s_0.X);
  if ((param_2->Reference->TextureDesc).Dimension == Texture2D) {
    pFVar23 = param_2->Reference;
  }
  lVar20 = (**(code **)(pFVar23->_padding_ + 0x20))();
  local_b60._s_0.Y = *(int *)(lVar20 + 0x28);
  GetViewportRect((TIntRect<int> *)&local_b88._s_0,param_1);
  iVar10 = local_ba0.ArrayNum;
  uVar24 = (ulonglong)local_ba0.ArrayNum;
  pFVar32 = local_ba0.AllocatorInstance.Data + uVar24 * 0x40;
  pFVar29 = local_ba0.AllocatorInstance.Data + 0x18;
  while( true ) {
    if ((uint)uVar24 != iVar10) {
      local_b8f[0] = 0;
      `TCheckedPointerIterator<FTrackedView,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8f);
    }
    if (pFVar29 + -0x18 == pFVar32) break;
    *(int *)(pFVar29 + -8) = *(int *)(pFVar29 + -8) + local_b88._0_4_;
    *(int *)(pFVar29 + -4) = *(int *)(pFVar29 + -4) + local_b88._4_4_;
    *(int *)pFVar29 = *(int *)pFVar29 + local_b88._0_4_;
    *(int *)(pFVar29 + 4) = *(int *)(pFVar29 + 4) + local_b88._4_4_;
    uVar24 = (ulonglong)(uint)local_ba0.ArrayNum;
    pFVar29 = pFVar29 + 0x40;
  }
  if (bLogStreamlineLogTrackedViews != false) {
    if (((local_b88._8_4_ == local_b88._0_4_) && (local_b88._12_4_ == local_b88._4_4_)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5825698708355808944>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                           ,0x150,"!WindowClientAreaRect.IsEmpty()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((int)local_b78 < (int)(local_b88._8_4_ - local_b88._0_4_)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5825698708355808943>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                           ,0x151,"WindowClientAreaRect.Width() <= BackBufferDimension.X"), bVar7))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_b60._s_0.Y < (int)(local_b88._12_4_ - local_b88._4_4_)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5825698708355808942>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                           ,0x152,"WindowClientAreaRect.Height() <= BackBufferDimension.Y"), bVar7))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((int)local_b88._0_4_ < 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5825698708355808941>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                           ,0x153,"WindowClientAreaRect.Min.X >= 0"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((int)local_b88._4_4_ < 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5825698708355808940>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                           ,0x154,"WindowClientAreaRect.Min.Y >= 0"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar6 = local_b68;
  if (SUB81(pFVar31,0) != false) {
    TVar16 = CreateRenderTarget((FRHITexture *)local_af8,(wchar_t *)local_b68->Reference);
    pFVar17 = FRDGBuilder::RegisterExternalTexture
                        ((FRDGBuilder *)local_818,
                         (TRefCountPtr<IPooledRenderTarget> *)TVar16.Reference,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_a90,pFVar17,CopySrc);
    *(undefined4 *)&pFVar15->_padding_ = local_a90.Texture._0_4_;
    *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = local_a90.Texture._4_4_;
    *(undefined4 *)&pFVar15->_padding_ = local_a90.SubresourceRange._0_4_;
    *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = local_a90.SubresourceRange._4_4_;
    pFVar15->_padding_ = local_a90._16_8_;
    if ((longlong *)local_af8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_af8._0_8_ + 0x38))();
    }
  }
  pTVar5 = CVarStreamlineTagUIColorAlphaThreshold.Ref;
  if (local_ba8 != false) {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar17 = AddStreamlineUIHintExtractionPass
                        ((FRDGBuilder *)local_818,pTVar5->ShadowedValue[1],pTVar6);
    FRDGTextureAccess::FRDGTextureAccess(&local_a78,pFVar17,CopySrc);
    *(undefined4 *)&pFVar15->_padding_ = local_a78.Texture._0_4_;
    *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = local_a78.Texture._4_4_;
    *(undefined4 *)&pFVar15->_padding_ = local_a78.SubresourceRange._0_4_;
    *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = local_a78.SubresourceRange._4_4_;
    pFVar15->_padding_ = local_a78._16_8_;
  }
  iVar10 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
  if (iVar10 == -1) {
    iVar10 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
    bVar7 = iVar10 != -1;
  }
  else {
    iVar10 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
    bVar7 = iVar10 == 1;
  }
  AddStreamlineUIHintTagPass
            ((FRDGBuilder *)local_818,SUB81(pFVar31,0),local_ba8,(TIntPoint<int> *)&local_b60._s_0,
             (FSLUIHintTagShaderParameters *)&pFVar15->_padding_,0,(FStreamlineRHI *)local_af8._8_8_
             ,&local_ba0,(TIntRect<int> *)&local_b88._s_0,bVar7);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
LAB_14de76db3:
  DestructItems<FTrackedView,int>
            ((FTrackedView *)local_ba0.AllocatorInstance.Data,local_ba0.ArrayNum);
  if ((TIntRect<int>_u_0 *)local_ba0.AllocatorInstance.Data != (TIntRect<int>_u_0 *)0x0) {
    FMemory::Free(local_ba0.AllocatorInstance.Data);
  }
  return;
}

// DoActiveStreamlineFeaturesRequireReflex @ 14de76ed0

bool __cdecl DoActiveStreamlineFeaturesRequireReflex(void)

{
  EStreamlineFeatureSupport EVar1;
  DLSSGMode DVar2;
  
  EVar1 = QueryStreamlineDLSSGSupport();
  if (EVar1 == Supported) {
    DVar2 = SLDLSSGModeFromCvar();
    if (DVar2 != eOff) {
      return true;
    }
  }
  return false;
}

// DoActiveStreamlineFeaturesSupportMultiView @ 14de76f00

bool __cdecl DoActiveStreamlineFeaturesSupportMultiView(void)

{
  return true;
}

// DoesFeatureUseCameraData @ 14de76f10

bool __cdecl DoesFeatureUseCameraData(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pwVar4 = FCommandLine::Get();
    bStreamlineForceTagging = FParse::Param(pwVar4,L"slforcetagging");
    _Init_thread_footer(&_TSS0);
  }
  pTVar1 = CVarStreamlineForceTagging.Ref;
  if (bStreamlineForceTagging != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if (pTVar1->ShadowedValue[lVar3] != false) {
    return true;
  }
  return false;
}

// DumpActor @ 14de76f20

/* WARNING: Removing unreachable block (ram,0x00014de7817e) */
/* WARNING: Removing unreachable block (ram,0x00014de77b26) */
/* WARNING: Removing unreachable block (ram,0x00014de7743a) */
/* WARNING: Removing unreachable block (ram,0x00014de77123) */
/* WARNING: Removing unreachable block (ram,0x00014de772b7) */
/* WARNING: Removing unreachable block (ram,0x00014de77c7a) */
/* WARNING: Removing unreachable block (ram,0x00014de77fe0) */
/* WARNING: Removing unreachable block (ram,0x00014de7829f) */
/* WARNING: Removing unreachable block (ram,0x00014de77e73) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl DumpActor(wchar_t *param_1,AActor *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  TConsoleVariableData<int> *pTVar5;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong *puVar23;
  ForAnyElementType *pFVar24;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436 [2];
  uint local_434;
  ForElementType<unsigned_int> local_430;
  ForAnyElementType local_428;
  ulonglong local_420;
  int local_418;
  FString local_410;
  ForAnyElementType local_400;
  ulonglong local_3f8;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FScriptContainerElement *local_350;
  FScriptContainerElement *local_348;
  FString local_340;
  FString local_330;
  AActor *local_320;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_318;
  int local_308;
  int local_304;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_2a8;
  FName local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  undefined4 local_3c;
  
  pTVar5 = CVarStreamlineReflexActorDebug.Ref;
  local_320 = param_2;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar10 = 4;
    if (!bVar8) goto LAB_14de76f63;
  }
  lVar10 = 0;
LAB_14de76f63:
  local_418 = *(int *)((longlong)pTVar5->ShadowedValue + lVar10);
  if ((param_2 == (AActor *)0x0) || (local_418 == 0)) {
    return;
  }
  bVar8 = IsInGameThread();
  pTVar25 = &RenderThreadDebugMessages;
  if (bVar8) {
    pTVar25 = &GameThreadDebugMessages;
  }
  local_300 = *(FName *)(param_2->_padding_ + 0x18);
  local_2a8 = pTVar25;
  FName::ToString(&local_300,&local_288);
  local_2f8 = (FName)param_2->_padding_;
  FName::ToString(&local_2f8,&local_298);
  CurrentThreadName(&local_168);
  FString::PrintfImpl(&local_3a0,L"<%s,%s> %s (A%s)");
  pFVar13 = (pTVar25->AllocatorInstance).Data;
  if (((pFVar13 <= (FScriptContainerElement *)&local_3a0) &&
      ((FScriptContainerElement *)&local_3a0 < pFVar13 + (longlong)pTVar25->ArrayMax * 0x10)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = pTVar25->ArrayNum;
  if (iVar9 == pTVar25->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar25->AllocatorInstance,&pTVar25->ArrayMax);
    pTVar25->ArrayNum = iVar9 + 1;
  }
  else {
    pTVar25->ArrayNum = iVar9 + 1;
  }
  pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_3a0.Data.AllocatorInstance.Data;
  *(int *)(pFVar13 + 8) = local_3a0.Data.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_3a0.Data.ArrayMax;
  local_3a0.Data.ArrayNum = 0;
  local_3a0.Data.ArrayMax = 0;
  local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  pAVar11 = AActor::GetParentActor(param_2);
  if (pAVar11 != (AActor *)0x0) {
    local_2f0 = *(FName *)(pAVar11->_padding_ + 0x18);
    FName::ToString(&local_2f0,&local_268);
    local_2e8 = (FName)pAVar11->_padding_;
    FName::ToString(&local_2e8,&local_278);
    FString::PrintfImpl(&local_390,L"ParentActor %s (A%s)");
    pFVar13 = (pTVar25->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_390) &&
        ((FScriptContainerElement *)&local_390 < pFVar13 + (longlong)pTVar25->ArrayMax * 0x10)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = pTVar25->ArrayNum;
    if (iVar9 == pTVar25->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar25->AllocatorInstance,&pTVar25->ArrayMax);
      pTVar25->ArrayNum = iVar9 + 1;
    }
    else {
      pTVar25->ArrayNum = iVar9 + 1;
    }
    pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_390.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_390.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_390.Data.ArrayMax;
    local_390.Data.ArrayNum = 0;
    local_390.Data.ArrayMax = 0;
    local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  pAVar11 = AActor::GetParentActor(param_2);
  if (pAVar11 != (AActor *)0x0) {
    local_2e0 = *(FName *)(pAVar11->_padding_ + 0x18);
    FName::ToString(&local_2e0,&local_248);
    local_2d8 = (FName)pAVar11->_padding_;
    FName::ToString(&local_2d8,&local_258);
    FString::PrintfImpl(&local_380,L"ParentComponent %s(U%s))");
    pFVar13 = (pTVar25->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_380) &&
        ((FScriptContainerElement *)&local_380 < pFVar13 + (longlong)pTVar25->ArrayMax * 0x10)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = pTVar25->ArrayNum;
    if (iVar9 == pTVar25->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar25->AllocatorInstance,&pTVar25->ArrayMax);
      pTVar25->ArrayNum = iVar9 + 1;
    }
    else {
      pTVar25->ArrayNum = iVar9 + 1;
    }
    pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_380.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_380.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_380.Data.ArrayMax;
    local_380.Data.ArrayNum = 0;
    local_380.Data.ArrayMax = 0;
    local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8 = 0;
  local_428.Data = (FScriptContainerElement *)0x0;
  local_420 = 0;
  local_2d0 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_2->OwnedComponents);
  iVar9 = *(int *)&(local_2d0->Elements).field_0x28;
  local_430 = (ForElementType<unsigned_int>)&(local_2d0->Elements).field_0x10;
  iStack_1f0 = 0;
  uStack_1ec = 1;
  local_1d8 = 0;
  iStack_1dc = 0;
  if (iVar9 != 0) {
    puVar22 = *(uint **)&(local_2d0->Elements).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)local_430;
    }
    uVar19 = *puVar22;
    local_1d8 = 0;
    while (uVar19 == 0) {
      iStack_1f0 = iStack_1f0 + 1;
      local_1d8 = local_1d8 + 0x20;
      iStack_1dc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0) goto LAB_14de77527;
      uVar19 = puVar22[iStack_1f0];
    }
    uStack_1ec = ~(uVar19 - 1) & uVar19;
    uVar21 = (ulonglong)uStack_1ec * 2 + 1;
    lVar10 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_308 = (int)lVar10;
    iStack_1dc = local_308 + -1 + local_1d8;
    if (iVar9 < iStack_1dc) {
      iStack_1dc = iVar9;
    }
  }
LAB_14de77527:
  uVar19 = *(uint *)&(local_2d0->Elements).field_0x28;
  uStack_1d4 = local_3c;
  iStack_1d0 = *(int *)&(local_2d0->Elements).field_0x8 - *(int *)&(local_2d0->Elements).field_0x34;
  uVar18 = uVar19 & 0xffffffe0;
  uStack_1e0 = 0xffffffff;
  TStack_1c0._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
  TStack_1c0.CurrentBitIndex = iStack_1dc;
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_1c0._28_4_ = local_3c;
  TStack_1c0.BaseBitIndex = local_1d8;
  uStack_1a0 = CONCAT44(uStack_1cc,iStack_1d0);
  local_434 = uVar19;
  local_1f8 = local_2d0;
  local_1e8 = (undefined1 *)local_430;
  local_1c8 = local_2d0;
  TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_430;
  if ((((int)uVar19 < 0) || (iVar9 < (int)uVar19)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(int *)((longlong)local_430 + 0x18);
  uVar4 = local_434;
  if (uVar19 != uVar2) {
    FVar20 = local_430;
    if (*(ForElementType<unsigned_int> *)((longlong)local_430 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_430 + 0x10);
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      local_434 = uVar2;
      uVar4 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar16) goto LAB_14de77670;
      uVar19 = *(uint *)((longlong)FVar20 + (longlong)iVar16 * 4);
    }
    uVar21 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_304 = (int)lVar10;
    local_434 = local_304 + -1 + uVar18;
    uVar4 = local_434;
    if ((int)uVar2 < (int)local_434) {
      local_434 = uVar2;
      uVar4 = uVar2;
    }
  }
LAB_14de77670:
  do {
    pTVar6 = local_1c8;
    uVar21 = 0;
    if (*(int *)&(local_1c8->Elements).field_0x8 - *(int *)&(local_1c8->Elements).field_0x34 !=
        (int)uStack_1a0) {
      local_438 = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_438);
    }
    pTVar25 = local_2a8;
    if (((TStack_1c0.CurrentBitIndex == uVar4) &&
        ((ForElementType<unsigned_int>)TStack_1c0.Array == local_430)) && (pTVar6 == local_2d0)) {
      iVar9 = (int)local_420;
      uVar14 = (ulonglong)(int)local_420;
      if ((int)local_420 != 0) {
        if (local_418 < 2) {
          bVar8 = true;
          local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_360.Data.ArrayNum = 0;
          local_360.Data.ArrayMax = 0;
          pFVar13 = local_428.Data + uVar14 * 0x10;
          FVar17.Data = local_428.Data;
          while( true ) {
            if ((int)uVar14 != iVar9) {
              local_437 = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_437);
            }
            if (FVar17.Data == pFVar13) break;
            if (bVar8) {
              bVar8 = false;
            }
            else {
              FString::AppendChars(&local_360,L", ",2);
            }
            iVar16 = *(int *)(FVar17.Data + 8) + -1;
            if (*(int *)(FVar17.Data + 8) == 0) {
              iVar16 = 0;
            }
            FString::AppendChars(&local_360,*(wchar_t **)FVar17.Data,iVar16);
            uVar14 = local_420 & 0xffffffff;
            FVar17.Data = FVar17.Data + 0x10;
          }
          FString::PrintfImpl(&local_3b0,L"  Primitives[%u] %s");
          pFVar13 = (pTVar25->AllocatorInstance).Data;
          piVar1 = &pTVar25->ArrayMax;
          if (((pFVar13 <= (FScriptContainerElement *)&local_3b0) &&
              ((FScriptContainerElement *)&local_3b0 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = pTVar25->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar25->AllocatorInstance,piVar1);
            pTVar25->ArrayNum = iVar9 + 1;
          }
          else {
            pTVar25->ArrayNum = iVar9 + 1;
          }
          pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar13 = 0;
          *(FScriptContainerElement **)pFVar13 = local_3b0.Data.AllocatorInstance.Data;
          *(int *)(pFVar13 + 8) = local_3b0.Data.ArrayNum;
          *(int *)(pFVar13 + 0xc) = local_3b0.Data.ArrayMax;
          local_3b0.Data.ArrayNum = 0;
          local_3b0.Data.ArrayMax = 0;
          local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
          }
        }
        else {
          piVar1 = &local_2a8->ArrayMax;
          FVar17.Data = local_3d0.Data.AllocatorInstance.Data;
          uVar7 = local_3d0.Data._8_8_;
          if (0 < (int)local_420) {
            do {
              local_3d0.Data._8_8_ = uVar7;
              local_3d0.Data.AllocatorInstance.Data = FVar17.Data;
              uVar18 = (uint)uVar21;
              uVar19 = 0;
              if ((int)uVar18 < (int)uVar14) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FString::PrintfImpl(&local_3d0,L"  Primitives[%u] %s");
              pFVar13 = (pTVar25->AllocatorInstance).Data;
              if (((pFVar13 <= (FScriptContainerElement *)&local_3d0) &&
                  ((FScriptContainerElement *)&local_3d0 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar9 = pTVar25->ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&pTVar25->AllocatorInstance,piVar1);
                pTVar25->ArrayNum = iVar9 + 1;
              }
              else {
                pTVar25->ArrayNum = iVar9 + 1;
              }
              pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar13 = 0;
              *(FScriptContainerElement **)pFVar13 = local_3d0.Data.AllocatorInstance.Data;
              local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar17.Data = local_3d0.Data.AllocatorInstance.Data;
              *(int *)(pFVar13 + 8) = local_3d0.Data.ArrayNum;
              *(int *)(pFVar13 + 0xc) = local_3d0.Data.ArrayMax;
              local_3d0.Data.ArrayNum = 0;
              local_3d0.Data.ArrayMax = 0;
              uVar7 = local_3d0.Data._8_8_;
              local_3d0.Data.ArrayNum = 0;
              local_3d0.Data.ArrayMax = 0;
              local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              uVar14 = local_420 & 0xffffffff;
              uVar21 = (ulonglong)(uVar18 + 1);
            } while ((int)(uVar18 + 1) < (int)local_420);
          }
        }
      }
      iVar9 = (int)local_3f8;
      uVar21 = (ulonglong)(int)local_3f8;
      if ((int)local_3f8 != 0) {
        bVar8 = true;
        local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_370.Data.ArrayNum = 0;
        local_370.Data.ArrayMax = 0;
        pFVar13 = local_400.Data + uVar21 * 0x10;
        FVar17.Data = local_400.Data;
        while( true ) {
          if ((int)uVar21 != iVar9) {
            local_436[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_436);
          }
          if (FVar17.Data == pFVar13) break;
          if (bVar8) {
            bVar8 = false;
          }
          else {
            FString::AppendChars(&local_370,L", ",2);
          }
          iVar16 = *(int *)(FVar17.Data + 8) + -1;
          if (*(int *)(FVar17.Data + 8) == 0) {
            iVar16 = 0;
          }
          FString::AppendChars(&local_370,*(wchar_t **)FVar17.Data,iVar16);
          uVar21 = local_3f8 & 0xffffffff;
          FVar17.Data = FVar17.Data + 0x10;
        }
        FString::PrintfImpl(&local_3e0,L"  Components[%u] %s");
        pFVar13 = (pTVar25->AllocatorInstance).Data;
        piVar1 = &pTVar25->ArrayMax;
        if (((pFVar13 <= (FScriptContainerElement *)&local_3e0) &&
            ((FScriptContainerElement *)&local_3e0 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = pTVar25->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar25->AllocatorInstance,piVar1);
          pTVar25->ArrayNum = iVar9 + 1;
        }
        else {
          pTVar25->ArrayNum = iVar9 + 1;
        }
        pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_3e0.Data.AllocatorInstance.Data;
        *(int *)(pFVar13 + 8) = local_3e0.Data.ArrayNum;
        *(int *)(pFVar13 + 0xc) = local_3e0.Data.ArrayMax;
        local_3e0.Data.ArrayNum = 0;
        local_3e0.Data.ArrayMax = 0;
        local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
      }
      piVar1 = &pTVar25->ArrayMax;
      local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.ArrayNum = 0;
      local_318.ArrayMax = 0;
      AActor::GetAllChildActors(local_320,&local_318,true);
      if (local_318.ArrayNum != 0) {
        FString::PrintfImpl(&local_3f0,L"  ChildActors[%u]");
        pFVar13 = (pTVar25->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_3f0) &&
            ((FScriptContainerElement *)&local_3f0 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = pTVar25->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar25->AllocatorInstance,piVar1);
          pTVar25->ArrayNum = iVar9 + 1;
        }
        else {
          pTVar25->ArrayNum = iVar9 + 1;
        }
        pFVar13 = (pTVar25->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_3f0.Data.AllocatorInstance.Data;
        local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar13 + 8) = local_3f0.Data.ArrayNum;
        *(int *)(pFVar13 + 0xc) = local_3f0.Data.ArrayMax;
        local_3f0.Data.ArrayNum = 0;
        local_3f0.Data.ArrayMax = 0;
      }
      if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_428.Data,(int)local_420);
      if (local_428.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data);
      }
      DestructItems<FString,int>((FString *)local_400.Data,(int)local_3f8);
      if (local_400.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_400.Data);
      return;
    }
    local_348 = (FScriptContainerElement *)0x0;
    puVar23 = (ulonglong *)
              ((longlong)TStack_1c0.CurrentBitIndex * 0x10 + *(longlong *)&pTVar6->Elements);
    bVar15 = 0;
    local_434 = 0;
    pAVar11 = *(AActor **)(*puVar23 + 0xa8);
    if ((pAVar11 != (AActor *)0x0) && (pAVar11 != local_320)) {
      local_2b0 = (FName)pAVar11->_padding_;
      FName::ToString(&local_2b0,&local_238);
      FString::PrintfImpl(&local_340,L" Owner: %s");
      local_348 = local_340.Data.AllocatorInstance.Data;
      local_434 = local_340.Data.ArrayNum;
      local_340.Data.ArrayNum = 0;
      local_340.Data.ArrayMax = 0;
      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
    local_350 = (FScriptContainerElement *)0x0;
    lVar10 = *(longlong *)(*puVar23 + 0x10);
    pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    if (pUVar12 != (UClass *)0x0) {
      iVar9 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar10 + 0x38) < iVar9) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        uVar14 = *puVar23;
        if (uVar14 == 0) {
LAB_14de777c2:
          uVar14 = uVar21;
        }
        else {
          pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar9 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar12->_padding_)) goto LAB_14de777c2;
        }
        lVar10 = *(longlong *)(uVar14 + 0x530);
        bVar15 = 0;
        if (lVar10 != 0) {
          local_d8.M[0][2] = *(double *)(lVar10 + 0x120);
          local_d8.M[0][3] = *(double *)(lVar10 + 0x128);
          local_d8.M[1][2] = *(double *)(lVar10 + 0x140);
          local_d8.M[1][3] = *(double *)(lVar10 + 0x148);
          local_158.M[0][0] = 0.0;
          local_158.M[0][1] = 0.0;
          local_158.M[0][2] = 0.0;
          local_158.M[0][3] = 0.0;
          local_158.M[1][0] = 0.0;
          local_158.M[1][1] = 0.0;
          local_158.M[1][2] = 0.0;
          local_158.M[1][3] = 0.0;
          local_158.M[2][0] = 0.0;
          local_158.M[2][1] = 0.0;
          local_158.M[2][2] = 0.0;
          local_158.M[2][3] = 0.0;
          local_158.M[3][0] = 0.0;
          local_158.M[3][1] = 0.0;
          local_158.M[3][2] = 0.0;
          local_158.M[3][3] = 0.0;
          local_d8.M[0][0] = *(double *)(lVar10 + 0x110);
          local_d8.M[0][1] = *(double *)(lVar10 + 0x118);
          local_d8.M[1][0] = *(double *)(lVar10 + 0x130);
          local_d8.M[1][1] = *(double *)(lVar10 + 0x138);
          local_d8.M[2][0] = *(double *)(lVar10 + 0x150);
          local_d8.M[2][1] = *(double *)(lVar10 + 0x158);
          local_d8.M[2][2] = *(double *)(lVar10 + 0x160);
          local_d8.M[2][3] = *(double *)(lVar10 + 0x168);
          local_d8.M[3][0] = *(double *)(lVar10 + 0x170);
          local_d8.M[3][1] = *(double *)(lVar10 + 0x178);
          local_d8.M[3][2] = *(double *)(lVar10 + 0x180);
          local_d8.M[3][3] = *(double *)(lVar10 + 0x188);
          UE::Math::TMatrix<double>::ToString(&local_158,&local_178);
          UE::Math::TMatrix<double>::ToString(&local_d8,&local_188);
          local_2b8 = *(FName *)(lVar10 + 0x238);
          FName::ToString(&local_2b8,&local_198);
          FString::PrintfImpl(&local_330,L" %s I=%u, PI=%u L2W %s LU %s ");
          local_350 = local_330.Data.AllocatorInstance.Data;
          local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_330.Data.ArrayNum = 0;
          local_330.Data.ArrayMax = 0;
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          bVar15 = *(byte *)(lVar10 + 0x78) >> 1 & 1;
        }
      }
    }
    pFVar24 = &local_428;
    if (bVar15 == 0) {
      pFVar24 = &local_400;
    }
    if (local_418 < 2) {
      if (0 < local_418) {
        local_2a0 = *(FName *)(*puVar23 + 0x18);
        FName::ToString(&local_2a0,&local_208);
        FString::PrintfImpl(&local_3c0,L"%s");
        if (((pFVar24->Data <= (FScriptContainerElement *)&local_3c0) &&
            ((FScriptContainerElement *)&local_3c0 <
             pFVar24->Data + (longlong)*(int *)((longlong)&pFVar24[1].Data + 4) * 0x10)) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)&pFVar24[1].Data;
        piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar24,piVar1);
          *(int *)&pFVar24[1].Data = iVar9 + 1;
        }
        else {
          *(int *)&pFVar24[1].Data = iVar9 + 1;
        }
        pFVar13 = pFVar24->Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_3c0.Data.AllocatorInstance.Data;
        *(int *)(pFVar13 + 8) = local_3c0.Data.ArrayNum;
        *(int *)(pFVar13 + 0xc) = local_3c0.Data.ArrayMax;
        local_3c0.Data.ArrayNum = 0;
        local_3c0.Data.ArrayMax = 0;
        local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_2c0 = *(FName *)(*(longlong *)(*puVar23 + 0x10) + 0x18);
      FName::ToString(&local_2c0,&local_218);
      local_2c8 = *(FName *)(*puVar23 + 0x18);
      FName::ToString(&local_2c8,&local_228);
      FString::PrintfImpl(&local_410,L"%s%s(U%s)%s");
      if (((pFVar24->Data <= (FScriptContainerElement *)&local_410) &&
          ((FScriptContainerElement *)&local_410 <
           pFVar24->Data + (longlong)*(int *)((longlong)&pFVar24[1].Data + 4) * 0x10)) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&pFVar24[1].Data;
      piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar24,piVar1);
        *(int *)&pFVar24[1].Data = iVar9 + 1;
      }
      else {
        *(int *)&pFVar24[1].Data = iVar9 + 1;
      }
      pFVar13 = pFVar24->Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(FScriptContainerElement **)pFVar13 = local_410.Data.AllocatorInstance.Data;
      *(int *)(pFVar13 + 8) = local_410.Data.ArrayNum;
      *(int *)(pFVar13 + 0xc) = local_410.Data.ArrayMax;
      local_410.Data.ArrayNum = 0;
      local_410.Data.ArrayMax = 0;
      local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
    if (local_350 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350);
    }
    if (local_348 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348);
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
  } while( true );
}

// ForceTagStreamlineBuffers @ 14de7a1c0

bool __cdecl ForceTagStreamlineBuffers(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pwVar4 = FCommandLine::Get();
    bStreamlineForceTagging = FParse::Param(pwVar4,L"slforcetagging");
    _Init_thread_footer(&_TSS0);
  }
  pTVar1 = CVarStreamlineForceTagging.Ref;
  if (bStreamlineForceTagging != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
  }
  if (pTVar1->ShadowedValue[lVar3] != false) {
    return true;
  }
  return false;
}

// GetDLSSGStatusFromStreamline @ 14de7a620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl GetDLSSGStatusFromStreamline(bool param_1)

{
  FName FVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  EStreamlineFeatureSupport EVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_DLSSGFramesPresented> FVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FThreadSafeStaticStat<FStat_STAT_DLSSGAverageFPS> FVar8;
  FThreadSafeStaticStat<FStat_STAT_DLSSGMinWidthOrHeight> FVar9;
  FThreadSafeStaticStat<FStat_STAT_DLSSGMinGeneratedFrames> FVar10;
  FThreadSafeStaticStat<FStat_STAT_DLSSGMaxGeneratedFrames> FVar11;
  longlong lVar12;
  size_t sVar13;
  char *_Str;
  uchar auVar14 [8];
  bool bVar15;
  undefined1 auStackY_2f8 [32];
  DLSSGOptions *local_290;
  FName local_288;
  FStatMessage local_280;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  DLSSGState local_248;
  DLSSGOptions local_1f8;
  undefined1 local_188 [24];
  longlong local_170;
  uint local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  GLastDLSSGFrameRate = GAverageFPS;
  GLastDLSSGFramesPresented = 1;
  if (param_1) {
    GDLSSGMinGeneratedFrames = 0;
    GDLSSGMaxGeneratedFrames = 0;
    GDLSSGMinWidthOrHeight = 0;
  }
  EVar4 = QueryStreamlineDLSSGSupport();
  if (EVar4 != Supported) {
    return;
  }
  local_188._0_8_ = 0;
  local_188._8_4_ = sl::ViewportHandle::s_structType.data1;
  local_188._12_2_ = sl::ViewportHandle::s_structType.data2;
  local_188._14_2_ = sl::ViewportHandle::s_structType.data3;
  local_188[0x10] = sl::ViewportHandle::s_structType.data4[0];
  local_188[0x11] = sl::ViewportHandle::s_structType.data4[1];
  local_188[0x12] = sl::ViewportHandle::s_structType.data4[2];
  local_188[0x13] = sl::ViewportHandle::s_structType.data4[3];
  local_188[0x14] = sl::ViewportHandle::s_structType.data4[4];
  local_188[0x15] = sl::ViewportHandle::s_structType.data4[5];
  local_188[0x16] = sl::ViewportHandle::s_structType.data4[6];
  local_188[0x17] = sl::ViewportHandle::s_structType.data4[7];
  local_170 = 1;
  local_168 = 0;
  local_248._padding_ = 0;
  local_248._padding_._0_4_ = 0xcc8ac8e1;
  local_248._padding_._4_4_ = 0x44f5a179;
  local_248._padding_._0_4_ = 0x41e7fa97;
  local_248._padding_._4_4_ = 0x61bcf912;
  local_248._padding_ = 3;
  local_248.estimatedVRAMUsageInBytes = 0;
  local_248.status = eOk;
  local_248.minWidthOrHeight = 0;
  local_248.numFramesActuallyPresented = 0;
  local_248.numFramesToGenerateMax = 0;
  local_248.bReserved4 = eFalse;
  local_248.bIsVsyncSupportAvailable = eFalse;
  local_248.inputsProcessingCompletionFence = (void *)0x0;
  local_248.lastPresentInputsProcessingCompletionFenceValue = 0;
  local_1f8._padding_ = 0;
  local_1f8._padding_._0_4_ = 0xfac5f1cb;
  local_1f8._padding_._4_4_ = 0x4f362dfd;
  local_1f8._padding_._0_4_ = 0x9e3ae6a1;
  local_1f8._padding_._4_4_ = 0xc5565286;
  local_1f8._padding_ = 3;
  local_1f8.flags = 0;
  local_1f8.dynamicResWidth = 0;
  local_1f8.dynamicResHeight = 0;
  local_1f8.numBackBuffers = 0;
  local_1f8.mvecDepthWidth = 0;
  local_1f8.mvecDepthHeight = 0;
  local_1f8.colorWidth = 0;
  local_1f8.colorHeight = 0;
  local_1f8.colorBufferFormat = 0;
  local_1f8.mvecBufferFormat = 0;
  local_1f8.depthBufferFormat = 0;
  local_1f8.hudLessBufferFormat = 0;
  local_1f8.uiBufferFormat = 0;
  local_1f8.onErrorCallback = (_func___cdecl_void_APIError_ptr *)0x0;
  local_1f8.bReserved15 = eInvalid;
  local_1f8.queueParallelismMode = eBlockPresentingClientQueue;
  iVar5 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
  if (iVar5 == -1) {
    iVar5 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
    bVar15 = iVar5 != -1;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
    bVar15 = iVar5 == 1;
  }
  if (bVar15) {
    local_1f8.mode = eOff;
  }
  else {
    local_1f8.mode = SLDLSSGModeFromCvar();
  }
  local_1f8.numFramesToGenerate = GetStreamlineDLSSGNumFramesToGenerate();
  local_290 = &local_1f8;
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGState_&,sl::DLSSGOptions_const_*),sl::ViewportHandle_&,sl::DLSSGState_&,sl::DLSSGOptions_*>
            (1000,"slDLSSGGetState",(ViewportHandle *)local_188,&local_248,&local_290);
  GLastDLSSGFramesPresented = local_248.numFramesActuallyPresented;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar7 = StatPtr_STAT_DLSSGFramesPresented;
    if (StatPtr_STAT_DLSSGFramesPresented ==
        (FThreadSafeStaticStat<FStat_STAT_DLSSGFramesPresented>)0x0) {
      pFVar6 = FName::FName(&local_270,"STAT_DLSSGFramesPresented");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_DLSSGFramesPresented>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGFramesPresented,*pFVar6,
                         L"DLSS-G: Frames Presented","STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",
                         true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    auVar14 = (uchar  [8])(longlong)GLastDLSSGFramesPresented;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_280.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_288 = FVar1;
      local_280.StatData.Pad = auVar14;
      local_280.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_280);
      FStatsTrace::Set(&local_288,(long64)auVar14);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  GLastDLSSGFrameRate = (float)GLastDLSSGFramesPresented * GAverageFPS;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar8 = StatPtr_STAT_DLSSGAverageFPS;
    if (StatPtr_STAT_DLSSGAverageFPS == (FThreadSafeStaticStat<FStat_STAT_DLSSGAverageFPS>)0x0) {
      pFVar6 = FName::FName(&local_268,"STAT_DLSSGAverageFPS");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_DLSSGAverageFPS>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGAverageFPS,*pFVar6,
                         L"DLSS-G: Average FPS","STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",true,
                         true,NumBits,false,false,MCR_Invalid);
    }
    FThreadStats::AddMessage<double>(*(FName *)FVar8,Set,(double)GLastDLSSGFrameRate,false);
  }
  if (param_1) {
    GDLSSGMinWidthOrHeight = local_248.minWidthOrHeight;
    if (FThreadStats::bPrimaryEnable == false) {
      GDLSSGMaxGeneratedFrames = local_248.numFramesToGenerateMax;
      GDLSSGMinGeneratedFrames = 1;
    }
    else {
      FVar9 = StatPtr_STAT_DLSSGMinWidthOrHeight;
      if (StatPtr_STAT_DLSSGMinWidthOrHeight ==
          (FThreadSafeStaticStat<FStat_STAT_DLSSGMinWidthOrHeight>)0x0) {
        pFVar6 = FName::FName(&local_260,"STAT_DLSSGMinWidthOrHeight");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_DLSSGMinWidthOrHeight>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMinWidthOrHeight,*pFVar6,
                           L"DLSS-G: Minimum Width or Height ","STATGROUP_DLSSG","STATCAT_Advanced",
                           L"DLSS-G",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar9,Set,(longlong)GDLSSGMinWidthOrHeight,false);
      GDLSSGMinGeneratedFrames = 1;
      if (FThreadStats::bPrimaryEnable == false) {
        GDLSSGMaxGeneratedFrames = local_248.numFramesToGenerateMax;
      }
      else {
        FVar10 = StatPtr_STAT_DLSSGMinGeneratedFrames;
        if (StatPtr_STAT_DLSSGMinGeneratedFrames ==
            (FThreadSafeStaticStat<FStat_STAT_DLSSGMinGeneratedFrames>)0x0) {
          pFVar6 = FName::FName(&local_258,"STAT_DLSSGMinGeneratedFrames");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_DLSSGMinGeneratedFrames>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMinGeneratedFrames,
                              *pFVar6,L"DLSS-G: Minimum Number of Generated Frames ",
                              "STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",true,true,ST_int64,
                              false,false,MCR_Invalid);
        }
        FThreadStats::AddMessage<__int64>
                  (*(FName *)FVar10,Set,(longlong)GDLSSGMinGeneratedFrames,false);
        GDLSSGMaxGeneratedFrames = local_248.numFramesToGenerateMax;
        if (FThreadStats::bPrimaryEnable != false) {
          FVar11 = StatPtr_STAT_DLSSGMaxGeneratedFrames;
          if (StatPtr_STAT_DLSSGMaxGeneratedFrames ==
              (FThreadSafeStaticStat<FStat_STAT_DLSSGMaxGeneratedFrames>)0x0) {
            pFVar6 = FName::FName(&local_250,"STAT_DLSSGMaxGeneratedFrames");
            FVar11 = (FThreadSafeStaticStat<FStat_STAT_DLSSGMaxGeneratedFrames>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DLSSGMaxGeneratedFrames,
                                *pFVar6,L"DLSS-G: Maximum Number of Generated Frames ",
                                "STATGROUP_DLSSG","STATCAT_Advanced",L"DLSS-G",true,true,ST_int64,
                                false,false,MCR_Invalid);
          }
          FThreadStats::AddMessage<__int64>
                    (*(FName *)FVar11,Set,(longlong)GDLSSGMaxGeneratedFrames,false);
        }
      }
    }
  }
  pTVar3 = CVarStreamlineDLSSGCheckStatusPerFrame.Ref;
  bVar15 = IsInParallelGameThread();
  if (!bVar15) {
    bVar15 = IsInGameThread();
    lVar12 = 1;
    if (!bVar15) goto LAB_14de7ac4f;
  }
  lVar12 = 0;
LAB_14de7ac4f:
  if (pTVar3->ShadowedValue[lVar12] != false) {
    if (local_248.status != eOk) {
      switch(local_248._40_8_ & 0xffffffff) {
      case 1:
        _Str = "DLSSGStatus::eFailResolutionTooLow";
        break;
      case 2:
        _Str = "DLSSGStatus::eFailReflexNotDetectedAtRuntime";
        break;
      default:
        _Str = "Unknown";
        break;
      case 4:
        _Str = "DLSSGStatus::eFailHDRFormatNotSupported";
        break;
      case 8:
        _Str = "DLSSGStatus::eFailCommonConstantsInvalid";
        break;
      case 0x10:
        _Str = "DLSSGStatus::eFailGetCurrentBackBufferIndexNotCalled";
      }
      local_158._padding_ = 0;
      sVar13 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar13,Yes);
      bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("State.status == sl::DLSSGStatus::eOk",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                          ,0x26e,
                          L"DLSS-FG failed at runtime with %s (%d). This runtime check can be disabled with the r.Streamline.DLSSG.CheckStatusPerFrame console variable"
                         );
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// GetDeepDVCStatusFromStreamline @ 14de7ada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl GetDeepDVCStatusFromStreamline(void)

{
  FName FVar1;
  EStreamlineFeatureSupport EVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate> FVar4;
  undefined1 auStackY_c8 [32];
  FName local_68;
  DeepDVCState local_60;
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  GLastDeepDVCVRAMEstimate = 0.0;
  EVar2 = QueryStreamlineDeepDVCSupport();
  if (EVar2 == Supported) {
    local_38._0_8_ = 0;
    local_38._8_4_ = sl::ViewportHandle::s_structType.data1;
    local_38._12_2_ = sl::ViewportHandle::s_structType.data2;
    local_38._14_2_ = sl::ViewportHandle::s_structType.data3;
    local_38[0x10] = sl::ViewportHandle::s_structType.data4[0];
    local_38[0x11] = sl::ViewportHandle::s_structType.data4[1];
    local_38[0x12] = sl::ViewportHandle::s_structType.data4[2];
    local_38[0x13] = sl::ViewportHandle::s_structType.data4[3];
    local_38[0x14] = sl::ViewportHandle::s_structType.data4[4];
    local_38[0x15] = sl::ViewportHandle::s_structType.data4[5];
    local_38[0x16] = sl::ViewportHandle::s_structType.data4[6];
    local_38[0x17] = sl::ViewportHandle::s_structType.data4[7];
    local_20 = 1;
    local_18 = 0;
    local_60._padding_ = 0;
    local_60._padding_._0_4_ = 0x934fd3d3;
    local_60._padding_._4_4_ = 0x70a7b34c;
    local_60._padding_._0_4_ = 0x9ff139a1;
    local_60._padding_._4_4_ = 0xd3914de0;
    local_60._padding_ = 1;
    local_60.estimatedVRAMUsageInBytes = 0;
    SLDeepDVCModeFromCvar();
    CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCState_&),sl::ViewportHandle_&,sl::DeepDVCState_&>
              (5,"slDeepDVCGetState",(ViewportHandle *)local_38,&local_60);
    GLastDeepDVCVRAMEstimate = (float)local_60.estimatedVRAMUsageInBytes * __real_35800000;
    if (FThreadStats::bPrimaryEnable != false) {
      FVar4 = StatPtr_STAT_DeepDVCVRAMEstimate;
      if (StatPtr_STAT_DeepDVCVRAMEstimate ==
          (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)0x0) {
        pFVar3 = FName::FName(&local_68,"STAT_DeepDVCVRAMEstimate");
        FVar4 = (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeepDVCVRAMEstimate,*pFVar3,
                           L"DeepDVC: VRAM Estimate (MiB)","STATGROUP_DeepDVC","STATCAT_Advanced",
                           L"DeepDVC",true,true,NumBits,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar4;
      local_68.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_68.Number = FVar1.Number;
      FThreadStats::AddMessage<double>(FVar1,Set,(double)GLastDeepDVCVRAMEstimate,false);
    }
  }
  return;
}

// GetReflexCameraOnScreenMessages @ 14de7b290

void __cdecl
GetReflexCameraOnScreenMessages
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *param_1)

{
  void *pvVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FText local_res10;
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  undefined1 local_80 [8];
  FText *local_78;
  FText *local_70;
  uint *local_68;
  FText *local_60;
  FText local_58;
  FText local_48;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                       ,0x6d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar3 = CVarStreamlineReflexActorDebug.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (pTVar3->ShadowedValue[0] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS);
    iVar5 = GameThreadDebugMessages.ArrayNum;
    pFVar8 = GameThreadDebugMessages.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    FVar6 = GameThreadDebugMessages.AllocatorInstance;
    while( true ) {
      if (GameThreadDebugMessages.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar6.Data == pFVar8) break;
      local_a0.Data.ArrayNum = *(int *)(FVar6.Data + 8);
      lVar7 = (longlong)local_a0.Data.ArrayNum;
      pvVar1 = *(void **)FVar6.Data;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a0.Data.ArrayNum == 0) {
        local_a0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_a0,
                   local_a0.Data.ArrayNum,&local_a0.Data.ArrayMax);
        memcpy(local_a0.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      local_70 = FText::FromString(&local_58,&local_a0);
      local_78 = &local_res10;
      local_res10.TextData.Reference._0_1_ = 0;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                         local_80,(bool *)&local_78);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      FVar6.Data = FVar6.Data + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS);
    EnterCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
    iVar5 = RenderThreadDebugMessages.ArrayNum;
    pFVar8 = RenderThreadDebugMessages.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    FVar6 = RenderThreadDebugMessages.AllocatorInstance;
    while( true ) {
      if (RenderThreadDebugMessages.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a8)
        ;
      }
      if (FVar6.Data == pFVar8) break;
      local_90.Data.ArrayNum = *(int *)(FVar6.Data + 8);
      lVar7 = (longlong)local_90.Data.ArrayNum;
      pvVar1 = *(void **)FVar6.Data;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_90.Data.ArrayNum == 0) {
        local_90.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_90,
                   local_90.Data.ArrayNum,&local_90.Data.ArrayMax);
        memcpy(local_90.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      local_60 = FText::FromString(&local_48,&local_90);
      local_68 = &local_res10.Flags;
      local_res10.Flags._0_1_ = 0;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> *)
                         (local_80 + 4),(bool *)&local_68);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      FVar6.Data = FVar6.Data + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
  }
  return;
}

// GetStreamlineDLSSGFrameTiming @ 14de7b730

void __cdecl GetStreamlineDLSSGFrameTiming(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = GLastDLSSGFramesPresented;
  *param_1 = GLastDLSSGFrameRate;
  *param_2 = iVar1;
  return;
}

// GetStreamlineDLSSGMinMaxGeneratedFrames @ 14de7b750

void __cdecl GetStreamlineDLSSGMinMaxGeneratedFrames(int *param_1,int *param_2)

{
  *param_1 = GDLSSGMinGeneratedFrames;
  *param_2 = GDLSSGMaxGeneratedFrames;
  return;
}

// GetStreamlineDLSSGNumFramesToGenerate @ 14de7b770

int __cdecl GetStreamlineDLSSGNumFramesToGenerate(void)

{
  int iVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  
  iVar1 = GDLSSGMaxGeneratedFrames;
  iVar2 = GDLSSGMinGeneratedFrames;
  pTVar3 = CVarStreamlineDLSSGFramesToGenerate.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      lVar5 = 4;
      goto LAB_14de7b7ad;
    }
  }
  lVar5 = 0;
LAB_14de7b7ad:
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar5) < iVar1) {
    iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// GetStreamlineReflexLatencyMarkerModule @ 14de7b7f0

FStreamlineLatencyMarkers * __cdecl GetStreamlineReflexLatencyMarkerModule(void)

{
  longlong *plVar1;
  FStreamlineLatencyMarkers *this;
  TUniquePtr<FStreamlineLatencyMarkers,TDefaultDelete<FStreamlineLatencyMarkers>_> TVar2;
  longlong *plVar3;
  
  if (FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr == (FStreamlineLatencyMarkers *)0x0) {
    this = operator_new(0x58);
    TVar2.Ptr = (FStreamlineLatencyMarkers *)0x0;
    if (this != (FStreamlineLatencyMarkers *)0x0) {
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->AverageTotalLatencyMs = 0.0;
      this->AverageGameLatencyMs = 0.0;
      this->AverageRenderLatencyMs = 0.0;
      this->AverageSimulationLatencyMs = 0.0;
      this->AverageRenderSubmitLatencyMs = 0.0;
      this->AveragePresentLatencyMs = 0.0;
      this->AverageDriverLatencyMs = 0.0;
      this->AverageOSRenderQueueLatencyMs = 0.0;
      this->AverageGPURenderLatencyMs = 0.0;
      this->RenderSubmitOffsetMs = 0.0;
      this->PresentOffsetMs = 0.0;
      this->DriverOffsetMs = 0.0;
      this->OSRenderQueueOffsetMs = 0.0;
      this->GPURenderOffsetMs = 0.0;
      *(undefined8 *)&this->bFlashIndicatorDriverControlled = 0;
      TVar2.Ptr = FStreamlineLatencyMarkers::FStreamlineLatencyMarkers(this);
    }
    if (FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr != (FStreamlineLatencyMarkers *)0x0)
    {
      plVar1 = &(FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_;
      plVar3 = &(FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_;
      FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr = TVar2.Ptr;
      (**(code **)(*plVar1 + 0x28))(plVar3,1);
      TVar2.Ptr = FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr;
    }
    FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr = TVar2.Ptr;
    (**(code **)(FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_)
              (FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr);
  }
  return FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr;
}

// GetStreamlineReflexMaxTickRateHandler @ 14de7b800

FStreamlineMaxTickRateHandler * __cdecl GetStreamlineReflexMaxTickRateHandler(void)

{
  longlong lVar1;
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar2;
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar3;
  
  if (FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr ==
      (FStreamlineMaxTickRateHandler *)0x0) {
    TVar3.Ptr = operator_new(0x10);
    if (TVar3.Ptr != (FStreamlineMaxTickRateHandler *)0x0) {
      *(undefined8 *)&(TVar3.Ptr)->field_0x8 = 0;
      *(undefined ***)TVar3.Ptr = &___7FStreamlineMaxTickRateHandler__6B_;
    }
    TVar2.Ptr = FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr;
    if (FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr !=
        (FStreamlineMaxTickRateHandler *)0x0) {
      lVar1 = *(longlong *)FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr;
      FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr = TVar3.Ptr;
      (**(code **)(lVar1 + 0x38))(TVar2.Ptr,1);
      TVar3.Ptr = FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr;
    }
    FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr = TVar3.Ptr;
    (*(code *)**(undefined8 **)FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr)
              (FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr);
  }
  return FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr;
}

// GetViewIndexToTag @ 14de7bb00

int __cdecl GetViewIndexToTag(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014de7bb0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
  return iVar1;
}

// GetViewportRect @ 14de7bb20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TIntRect<int> * __cdecl GetViewportRect(TIntRect<int> *__return_storage_ptr__,SWindow *param_1)

{
  int *piVar1;
  int iVar2;
  ISlateViewport *pIVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  TIntPoint<int>_u_0 TVar10;
  atomic<int> aVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  atomic<int> aVar16;
  FDeprecateSlateVector2D *pFVar17;
  undefined8 *puVar18;
  FGeometry *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  SWidget *this;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_b8;
  longlong *local_b0;
  FDeprecateSlateVector2D local_a8;
  undefined8 uStack_a0;
  
  pFVar17 = &param_1->ViewportSize;
  if (*(float *)pFVar17 == 0.0) {
    pFVar17 = &param_1->Size;
  }
  local_e0._0_4_ = SUB84(*pFVar17,0);
  local_e0._4_4_ = SUB84(*pFVar17,4);
  local_e8._4_4_ = (int)ROUND((float)local_e0._4_4_ + (float)local_e0._4_4_ + __real_3f000000) >> 1;
  local_e8._0_4_ =
       (int)ROUND((float)(undefined4)local_e0 + (float)(undefined4)local_e0 + __real_3f000000) >> 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = local_e8;
  pTVar21 = (param_1->Viewport).WeakReferenceCount.ReferenceController;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    aVar11 = pTVar21->SharedReferenceCount;
    do {
      if (aVar11 == (atomic<int>)0x0) {
        pTVar21 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14de7bbc0;
      }
      LOCK();
      aVar16 = pTVar21->SharedReferenceCount;
      bVar22 = aVar11 == aVar16;
      if (bVar22) {
        pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
        aVar16 = aVar11;
      }
      UNLOCK();
      aVar11 = aVar16;
    } while (!bVar22);
    pIVar3 = (param_1->Viewport).Object;
    if (pIVar3 != (ISlateViewport *)0x0) {
      puVar18 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x158))(pIVar3,&local_b8);
      this = (SWidget *)0x0;
      pTVar20 = (TReferenceControllerBase<1> *)puVar18[1];
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        aVar11 = pTVar20->SharedReferenceCount;
        do {
          if (aVar11 == (atomic<int>)0x0) {
            pTVar20 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar16 = pTVar20->SharedReferenceCount;
          bVar22 = aVar11 == aVar16;
          if (bVar22) {
            pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar16 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar16;
        } while (!bVar22);
        plVar4 = (longlong *)puVar18[1];
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
        puVar18[1] = 0;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          this = (SWidget *)*puVar18;
          *puVar18 = 0;
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
      if (this != (SWidget *)0x0) {
        pFVar19 = SWidget::GetPaintSpaceGeometry(this);
        fVar5 = (pFVar19->AccumulatedRenderTransform).M.M[0][1];
        fVar6 = (pFVar19->AccumulatedRenderTransform).M.M[1][0];
        fVar7 = (pFVar19->AccumulatedRenderTransform).M.M[1][1];
        fVar8 = (pFVar19->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_a8 = pFVar19->Size;
        uStack_a0 = *(undefined8 *)&pFVar19->Scale;
        fVar9 = (pFVar19->AccumulatedRenderTransform).M.M[0][0];
        fVar28 = (float)*(undefined8 *)
                         ((longlong)&(pFVar19->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
        local_e8._0_4_ = local_a8._0_4_;
        fVar12 = (float)(undefined4)local_e8;
        fVar25 = fVar9 * (float)(undefined4)local_e8;
        local_e8._4_4_ = local_a8._4_4_;
        fVar14 = (float)local_e8._4_4_;
        fVar23 = fVar6 * (float)local_e8._4_4_;
        local_e8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        fVar15 = (float)local_e8._4_4_;
        fVar24 = fVar6 * (float)local_e8._4_4_;
        local_e8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        fVar13 = (float)(undefined4)local_e8;
        fVar26 = fVar9 * (float)(undefined4)local_e8;
        fVar27 = fVar5 * fVar12 + fVar7 * fVar14;
        local_e8 = (TIntPoint<int>_u_0)CONCAT44(fVar27,fVar9 * fVar12 + fVar6 * fVar14);
        local_b8 = local_e8;
        local_e0._4_4_ = (int)(fVar5 * fVar13 + fVar7 * fVar15 + fVar28);
        local_e0._0_4_ = (int)(fVar9 * fVar13 + fVar6 * fVar15 + fVar8);
        (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = local_e0;
        TVar10._s_0.Y = (int)(fVar5 * fVar13 + fVar7 * fVar15 + fVar28 + fVar27);
        TVar10._s_0.X = (int)(fVar26 + fVar24 + fVar8 + fVar25 + fVar23);
        (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = TVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    }
  }
LAB_14de7bbc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  return __return_storage_ptr__;
}

// IsDLSSGActive @ 14de7c970

bool __cdecl IsDLSSGActive(void)

{
  EStreamlineFeatureSupport EVar1;
  DLSSGMode DVar2;
  
  EVar1 = QueryStreamlineDLSSGSupport();
  if (EVar1 != Supported) {
    return false;
  }
  DVar2 = SLDLSSGModeFromCvar();
  return DVar2 != eOff;
}

// IsDeepDVCActive @ 14de7c9a0

bool __cdecl IsDeepDVCActive(void)

{
  EStreamlineFeatureSupport EVar1;
  DeepDVCMode DVar2;
  
  EVar1 = QueryStreamlineDeepDVCSupport();
  if (EVar1 != Supported) {
    return false;
  }
  DVar2 = SLDeepDVCModeFromCvar();
  return DVar2 != eOff;
}

// IsLatewarpActive @ 14de7c9d0

bool __cdecl IsLatewarpActive(void)

{
  return false;
}

// IsProperGraphicsView @ 14de7c9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl IsProperGraphicsView(FSceneView *param_1)

{
  if (((param_1->bIsSceneCapture == false) && (param_1->bIsOfflineRender == false)) &&
     (param_1->bIsGameView != false)) {
    return param_1->StereoPass == eSSP_FULL;
  }
  return false;
}

// IsStreamlineDLSSGSupported @ 14de7ca80

bool __cdecl IsStreamlineDLSSGSupported(void)

{
  EStreamlineFeatureSupport EVar1;
  
  EVar1 = QueryStreamlineDLSSGSupport();
  return EVar1 == Supported;
}

// IsStreamlineDeepDVCSupported @ 14de7caa0

bool __cdecl IsStreamlineDeepDVCSupported(void)

{
  EStreamlineFeatureSupport EVar1;
  
  EVar1 = QueryStreamlineDeepDVCSupport();
  return EVar1 == Supported;
}

// IsStreamlineLatewarpSupported @ 14de7cac0

bool __cdecl IsStreamlineLatewarpSupported(void)

{
  return false;
}

// IsStreamlineReflexSupported @ 14de7cbf0

bool __cdecl IsStreamlineReflexSupported(void)

{
  EStreamlineFeatureSupport EVar1;
  
  EVar1 = QueryStreamlineReflexSupport();
  return EVar1 == Supported;
}

// LogViewNotTrackedReason @ 14de7dab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl LogViewNotTrackedReason(wchar_t *param_1,FSceneView *param_2)

{
  ForAnyElementType FVar1;
  FString local_28;
  FString local_18;
  
  if (param_2->bIsSceneCapture != false) {
    CurrentThreadName(&local_18);
    FSceneView::GetViewKey(param_2);
    FString::PrintfImpl(&local_28,L"%s return View.bIsSceneCapture Key=%u, %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    FStreamlineViewExtension::LogTrackedViews((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->bIsOfflineRender != false) {
    CurrentThreadName(&local_18);
    FSceneView::GetViewKey(param_2);
    FString::PrintfImpl(&local_28,L"%s return View.bIsOfflineRender Key=%u, %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    FStreamlineViewExtension::LogTrackedViews((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->bIsGameView == false) {
    CurrentThreadName(&local_18);
    FSceneView::GetViewKey(param_2);
    FString::PrintfImpl(&local_28,L"%s return !View.bIsGameView Key=%u, %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    FStreamlineViewExtension::LogTrackedViews((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->StereoPass != eSSP_FULL) {
    CurrentThreadName(&local_18);
    FSceneView::GetViewKey(param_2);
    FString::PrintfImpl(&local_28,
                        L"%s return View.StereoPass != EStereoscopicPass::eSSP_FULL Key=%u, %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    FStreamlineViewExtension::LogTrackedViews((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// NeedStreamlineViewIdOverride @ 14de7dcc0

bool __cdecl NeedStreamlineViewIdOverride(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
  if (iVar1 == -1) {
    iVar1 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
    return iVar1 != -1;
  }
  iVar1 = (**(code **)(*(longlong *)CVarStreamlineViewIdOverride._padding_ + 200))();
  return iVar1 == 1;
}

// QueryStreamlineDLSSGSupport @ 14de80c70

EStreamlineFeatureSupport __cdecl QueryStreamlineDLSSGSupport(void)

{
  bool bVar1;
  char cVar2;
  Result RVar3;
  FStreamlineRHI *pFVar4;
  AdapterInfo *pAVar5;
  wchar_t *pwVar6;
  
  if (bStreamlineDLSSGSupportedInitialized) {
    return GStreamlineDLSSGSupport;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if (!bVar1) {
      GStreamlineDLSSGSupport = NotSupportedIncompatibleHardware;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar4 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4);
      if (cVar2 != '\0') {
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        RVar3 = SLisFeatureSupported(1000,pAVar5);
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        LogStreamlineFeatureSupport(1000,pAVar5);
        GStreamlineDLSSGSupport = TranslateStreamlineResult(RVar3);
        bStreamlineDLSSGSupportedInitialized = true;
        if (GStreamlineDLSSGSupport == Supported) {
          GetDLSSGStatusFromStreamline(true);
        }
        return GStreamlineDLSSGSupport;
      }
      GStreamlineDLSSGSupport = NotSupportedIncompatibleRHI;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleRHI;
    }
  }
  GStreamlineDLSSGSupport = NotSupported;
  bStreamlineDLSSGSupportedInitialized = true;
  return NotSupported;
}

// QueryStreamlineDeepDVCSupport @ 14de80e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineFeatureSupport __cdecl QueryStreamlineDeepDVCSupport(void)

{
  FName FVar1;
  bool bVar2;
  char cVar3;
  Result RVar4;
  EStreamlineFeatureSupport EVar5;
  FStreamlineRHI *pFVar6;
  AdapterInfo *pAVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate> FVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_c8 [32];
  FName local_68;
  DeepDVCState local_60;
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (bStreamlineDeepDVCSupportedInitialized) {
    return GStreamlineDeepDVCSupport;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar2 = IsRHIDeviceNVIDIA();
    if (!bVar2) {
      GStreamlineDeepDVCSupport = NotSupportedIncompatibleHardware;
      bStreamlineDeepDVCSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar2 = IsStreamlineSupported();
    if (bVar2) {
      pFVar6 = GetPlatformStreamlineRHI();
      cVar3 = (**(code **)(pFVar6->_padding_ + 0x40))(pFVar6);
      if (cVar3 == '\0') {
        GStreamlineDeepDVCSupport = NotSupportedIncompatibleRHI;
        bStreamlineDeepDVCSupportedInitialized = true;
      }
      else {
        pAVar7 = (AdapterInfo *)(**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
        RVar4 = SLisFeatureSupported(5,pAVar7);
        pAVar7 = (AdapterInfo *)(**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
        LogStreamlineFeatureSupport(5,pAVar7);
        GStreamlineDeepDVCSupport = TranslateStreamlineResult(RVar4);
        bStreamlineDeepDVCSupportedInitialized = true;
        if (((float)GStreamlineDeepDVCSupport == 0.0) &&
           (GLastDeepDVCVRAMEstimate = (float)GStreamlineDeepDVCSupport,
           EVar5 = QueryStreamlineDeepDVCSupport(), EVar5 == Supported)) {
          local_20 = 1;
          local_38._0_8_ = 0;
          local_38._8_4_ = sl::ViewportHandle::s_structType.data1;
          local_38._12_2_ = sl::ViewportHandle::s_structType.data2;
          local_38._14_2_ = sl::ViewportHandle::s_structType.data3;
          local_38[0x10] = sl::ViewportHandle::s_structType.data4[0];
          local_38[0x11] = sl::ViewportHandle::s_structType.data4[1];
          local_38[0x12] = sl::ViewportHandle::s_structType.data4[2];
          local_38[0x13] = sl::ViewportHandle::s_structType.data4[3];
          local_38[0x14] = sl::ViewportHandle::s_structType.data4[4];
          local_38[0x15] = sl::ViewportHandle::s_structType.data4[5];
          local_38[0x16] = sl::ViewportHandle::s_structType.data4[6];
          local_38[0x17] = sl::ViewportHandle::s_structType.data4[7];
          local_18 = 0;
          local_60._padding_ = 0;
          local_60._padding_._0_4_ = 0x934fd3d3;
          local_60._padding_._4_4_ = 0x70a7b34c;
          local_60._padding_._0_4_ = 0x9ff139a1;
          local_60._padding_._4_4_ = 0xd3914de0;
          local_60._padding_ = 1;
          local_60.estimatedVRAMUsageInBytes = 0;
          SLDeepDVCModeFromCvar();
          CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCState_&),sl::ViewportHandle_&,sl::DeepDVCState_&>
                    (5,"slDeepDVCGetState",(ViewportHandle *)local_38,&local_60);
          GLastDeepDVCVRAMEstimate = (float)local_60.estimatedVRAMUsageInBytes * __real_35800000;
          if (FThreadStats::bPrimaryEnable != false) {
            FVar9 = StatPtr_STAT_DeepDVCVRAMEstimate;
            if (StatPtr_STAT_DeepDVCVRAMEstimate ==
                (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)0x0) {
              pFVar8 = FName::FName(&local_68,"STAT_DeepDVCVRAMEstimate");
              FVar9 = (FThreadSafeStaticStat<FStat_STAT_DeepDVCVRAMEstimate>)
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeepDVCVRAMEstimate,
                                 *pFVar8,L"DeepDVC: VRAM Estimate (MiB)","STATGROUP_DeepDVC",
                                 "STATCAT_Advanced",L"DeepDVC",true,true,NumBits,false,false,
                                 MCR_Invalid);
            }
            FVar1 = *(FName *)FVar9;
            local_68.ComparisonIndex = FVar1.ComparisonIndex.Value;
            local_68.Number = FVar1.Number;
            FThreadStats::AddMessage<double>(FVar1,Set,(double)GLastDeepDVCVRAMEstimate,false);
          }
        }
      }
      return GStreamlineDeepDVCSupport;
    }
  }
  GStreamlineDeepDVCSupport = NotSupported;
  bStreamlineDeepDVCSupportedInitialized = true;
  return NotSupported;
}

// QueryStreamlineLatewarpSupport @ 14de811b0

EStreamlineFeatureSupport __cdecl QueryStreamlineLatewarpSupport(void)

{
  return NotSupported;
}

// QueryStreamlineReflexSupport @ 14de811c0

EStreamlineFeatureSupport __cdecl QueryStreamlineReflexSupport(void)

{
  bool bVar1;
  char cVar2;
  Result RVar3;
  FStreamlineRHI *pFVar4;
  AdapterInfo *pAVar5;
  wchar_t *pwVar6;
  
  if (bStreamlineDLSSGSupportedInitialized) {
    return GStreamlineReflexSupport;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = IsRHIDeviceNVIDIA();
    if (!bVar1) {
      GStreamlineReflexSupport = NotSupportedIncompatibleHardware;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleHardware;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar4 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4);
      if (cVar2 != '\0') {
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        RVar3 = SLisFeatureSupported(3,pAVar5);
        pAVar5 = (AdapterInfo *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
        LogStreamlineFeatureSupport(3,pAVar5);
        GStreamlineReflexSupport = TranslateStreamlineResult(RVar3);
        bStreamlineDLSSGSupportedInitialized = true;
        if (GStreamlineReflexSupport == Supported) {
          GetDLSSGStatusFromStreamline(true);
        }
        return GStreamlineReflexSupport;
      }
      GStreamlineReflexSupport = NotSupportedIncompatibleRHI;
      bStreamlineDLSSGSupportedInitialized = true;
      return NotSupportedIncompatibleRHI;
    }
  }
  GStreamlineReflexSupport = NotSupported;
  bStreamlineDLSSGSupportedInitialized = true;
  return NotSupported;
}

// RegisterStreamlineDLSSGHooks @ 14de81370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RegisterStreamlineDLSSGHooks(FStreamlineRHI *param_1)

{
  code *pcVar1;
  bool bVar2;
  EStreamlineFeatureSupport EVar3;
  DLSSGMode DVar4;
  FSlateApplication *pFVar5;
  FDelegateHandle FVar6;
  undefined1 auStack_298 [40];
  undefined1 local_270 [8];
  <lambda_1> local_268 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (4 < (byte)LogStreamline._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"RegisterStreamlineDLSSGHooks",0x1c,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  bVar2 = ForceTagStreamlineBuffers();
  if (!bVar2) {
    EVar3 = QueryStreamlineDLSSGSupport();
    if (EVar3 == Supported) {
      DVar4 = SLDLSSGModeFromCvar();
      if (DVar4 != eOff) goto LAB_14de81432;
    }
    EVar3 = QueryStreamlineDLSSGSupport();
    if (EVar3 != Supported) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ShouldTagStreamlineBuffers() || IsStreamlineDLSSGSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                         ,0x172,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
LAB_14de81432:
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FSlateApplication::IsInitialized()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineDLSSG.cpp"
                       ,0x175,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = FSlateApplication::Get();
  FVar6 = TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                         *)(*(longlong *)&pFVar5->field_0x60 + 0x98),
                        (_func___cdecl_void_SWindow_ptr_TRefCountPtr<FRHITexture>_ptr *)local_270);
                    /* WARNING: Load size is inaccurate */
  OnBackBufferReadyToPresentHandle.ID = *FVar6.ID;
  pFVar5 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_RegisterStreamlineDLSSGHooks_::__l28::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar5->PreShutdownEvent,local_268);
  if (4 < (byte)LogStreamline._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"RegisterStreamlineDLSSGHooks",0x1c,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// RegisterStreamlineLatewarpHooks @ 14de81530

void __cdecl RegisterStreamlineLatewarpHooks(FStreamlineRHI *param_1)

{
  return;
}

// RegisterStreamlineReflexHooks @ 14de81540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RegisterStreamlineReflexHooks(void)

{
  code *pcVar1;
  GenericApplication *pGVar2;
  FSharedReferencer<1> FVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  char cVar6;
  IPluginManager *pIVar7;
  longlong *plVar8;
  IModularFeatures *pIVar9;
  FStreamlineMaxTickRateHandler *pFVar10;
  FStreamlineLatencyMarkers *pFVar11;
  FSlateApplication *pFVar12;
  int *piVar13;
  longlong *plVar14;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  TReferenceControllerBase<1> *local_2b8;
  FName local_2b0;
  FName local_2a8 [2];
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  <lambda_2> local_288 [16];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  plVar14 = (longlong *)0x0;
  if (4 < (byte)LogStreamline._0_1_) {
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"RegisterStreamlineReflexHooks",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  pIVar7 = IPluginManager::Get();
  uStack_290 = 6;
  local_298 = L"Reflex";
  local_278 = 0x507b6b48;
  uStack_274 = 1;
  uStack_270 = 6;
  uStack_26c = uStack_28c;
  (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,&local_2c0,&local_278);
  if (local_2c0 != (longlong *)0x0) {
    if ((local_2c0 == (longlong *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar6 = (**(code **)(*local_2c0 + 0x48))();
    if (cVar6 == '\0') {
      if ((local_2c0 == (longlong *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar6 = (**(code **)(*local_2c0 + 0x50))(local_2c0,0);
      if (cVar6 == '\0') goto LAB_14de8178d;
    }
    if (4 < (byte)LogStreamline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
    pTVar4 = CVarStreamlineUnregisterReflexPlugin.Ref;
    bVar5 = IsInParallelGameThread();
    if (bVar5) {
LAB_14de816db:
      plVar8 = plVar14;
    }
    else {
      bVar5 = IsInGameThread();
      plVar8 = (longlong *)&DAT_00000001;
      if (bVar5) goto LAB_14de816db;
    }
    if (*(char *)((longlong)plVar8 + (longlong)pTVar4) == '\0') {
      if (4 < (byte)LogStreamline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
      }
    }
    else {
      if (4 < (byte)LogStreamline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
      }
      piVar13 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar13 <
           `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_2b0 = `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                  ::__l2::FeatureName;
      `RegisterStreamlineReflexHooks'::__l44::<lambda_1>::operator()(local_2c8,&local_2b0);
      if ((*piVar13 <
           `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_2a8[0] = `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName;
      `RegisterStreamlineReflexHooks'::__l44::<lambda_1>::operator()(local_2c8,local_2a8);
    }
  }
LAB_14de8178d:
  pIVar9 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar9 + 0x28);
  pFVar10 = FStreamlineMaxTickRateHandler::Get();
  plVar8 = (longlong *)&pFVar10->field_0x8;
  if (pFVar10 == (FStreamlineMaxTickRateHandler *)0x0) {
    plVar8 = plVar14;
  }
  FStreamlineMaxTickRateHandler::Get();
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 <
       `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                  ::__l2::FeatureName,L"MaxTickRateHandler");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar1)(pIVar9,`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                   ::__l2::FeatureName,plVar8);
  bVar5 = FNullPlatformApplicationMisc::IsUsingNullApplication();
  if (bVar5) {
    if ((byte)LogStreamline._0_1_ < 5) goto LAB_14de81961;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
  }
  else {
    pIVar9 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar9 + 0x28);
    pFVar11 = FStreamlineLatencyMarkers::Get();
    plVar8 = &pFVar11->_padding_;
    if (pFVar11 == (FStreamlineLatencyMarkers *)0x0) {
      plVar8 = plVar14;
    }
    FStreamlineLatencyMarkers::Get();
    if ((*piVar13 <
         `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar1)(pIVar9,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,plVar8);
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("FSlateApplication::IsInitialized()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                           ,0x2ff,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FSlateApplication::Get();
    FVar3 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
    pGVar2 = FSlateApplicationBase::PlatformApplication.Object;
    if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.
                 ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    if ((pGVar2 == (GenericApplication *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("WindowsApplication",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflex.cpp"
                           ,0x301,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(pGVar2->_padding_ + 0x120);
    pFVar11 = FStreamlineLatencyMarkers::Get();
    (*pcVar1)(pGVar2,&pFVar11->_padding_);
    pFVar12 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_RegisterStreamlineReflexHooks_::__l105::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar12->PreShutdownEvent,local_288);
  }
  if (4 < (byte)LogStreamline._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"RegisterStreamlineReflexHooks",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
LAB_14de81961:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8);
  return;
}

// SLDLSSGModeFromCvar @ 14de81e10

/* WARNING: Enum "Type": Some values do not have unique names */

DLSSGMode __cdecl SLDLSSGModeFromCvar(void)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  pTVar2 = CVarStreamlineDLSSGEnable.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 4;
      goto LAB_14de81e38;
    }
  }
  lVar4 = 0;
LAB_14de81e38:
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return eOn;
    }
    if (iVar1 == 2) {
      return eAuto;
    }
    if (1 < (byte)LogStreamline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
  }
  return eOff;
}

// SLDeepDVCModeFromCvar @ 14de81e90

/* WARNING: Enum "Type": Some values do not have unique names */

DeepDVCMode __cdecl SLDeepDVCModeFromCvar(void)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  pTVar2 = CVarStreamlineDeepDVCEnable.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 4;
      goto LAB_14de81eb8;
    }
  }
  lVar4 = 0;
LAB_14de81eb8:
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return eOn;
    }
    if (1 < (byte)LogStreamline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
  }
  return eOff;
}

// ShouldTagStreamlineBuffers @ 14de83c30

bool __cdecl ShouldTagStreamlineBuffers(void)

{
  bool bVar1;
  EStreamlineFeatureSupport EVar2;
  DLSSGMode DVar3;
  
  bVar1 = ForceTagStreamlineBuffers();
  if (bVar1) {
    return true;
  }
  EVar2 = QueryStreamlineDLSSGSupport();
  if ((EVar2 == Supported) && (DVar3 = SLDLSSGModeFromCvar(), DVar3 != eOff)) {
    return true;
  }
  return false;
}

// TranslateStreamlineResult @ 14de84960

EStreamlineFeatureSupport __cdecl TranslateStreamlineResult(Result param_1)

{
  switch(param_1) {
  case eOk:
    return Supported;
  default:
    return NotSupported;
  case eErrorDriverOutOfDate:
    return NotSupportedDriverOutOfDate;
  case eErrorOSOutOfDate:
    return NotSupportedOperatingSystemOutOfDate;
  case eErrorOSDisabledHWS:
    return NotSupportedHardwareSchedulingDisabled;
  case eErrorNoSupportedAdapterFound:
  case eErrorAdapterNotSupported:
    return NotSupportedIncompatibleHardware;
  case eErrorMissingOrInvalidAPI:
    return NotSupportedIncompatibleRHI;
  }
}

// UnregisterStreamlineDLSSGHooks @ 14de84a60

void __cdecl UnregisterStreamlineDLSSGHooks(void)

{
  return;
}

// UnregisterStreamlineLatewarpHooks @ 14de84a70

void __cdecl UnregisterStreamlineLatewarpHooks(void)

{
  return;
}

// UnregisterStreamlineReflexHooks @ 14de84a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UnregisterStreamlineReflexHooks(void)

{
  code *pcVar1;
  TUniquePtr<FStreamlineMaxTickRateHandler,TDefaultDelete<FStreamlineMaxTickRateHandler>_> TVar2;
  IModularFeatures *pIVar3;
  FStreamlineMaxTickRateHandler *pFVar4;
  FStreamlineLatencyMarkers *pFVar5;
  longlong *plVar6;
  int *piVar7;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogStreamline._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UnregisterStreamlineReflexHooks",0x1f,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
  pFVar4 = FStreamlineMaxTickRateHandler::Get();
  plVar6 = (longlong *)&pFVar4->field_0x8;
  if (pFVar4 == (FStreamlineMaxTickRateHandler *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  FStreamlineMaxTickRateHandler::Get();
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                   ::__l2::FeatureName,plVar6);
  TVar2 = FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler;
  if (FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr !=
      (FStreamlineMaxTickRateHandler *)0x0) {
    FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr =
         (FStreamlineMaxTickRateHandler *)0x0;
    (**(code **)(*(longlong *)TVar2.Ptr + 0x38))(TVar2.Ptr,1);
  }
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
  pFVar5 = FStreamlineLatencyMarkers::Get();
  plVar6 = &pFVar5->_padding_;
  if (pFVar5 == (FStreamlineLatencyMarkers *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  FStreamlineLatencyMarkers::Get();
  if (*piVar7 < `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                   ::__l2::FeatureName,plVar6);
  if (FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr != (FStreamlineLatencyMarkers *)0x0) {
    plVar6 = &(FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_;
    FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr = (FStreamlineLatencyMarkers *)0x0;
    (**(code **)(*plVar6 + 0x28))(plVar6,1);
  }
  if (4 < (byte)LogStreamline._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UnregisterStreamlineReflexHooks",0x1f,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// getPCLMarkerAsStr @ 14de84f30

char * __cdecl sl::getPCLMarkerAsStr(PCLMarker param_1)

{
  switch(param_1) {
  case eSimulationStart:
    return "PCLMarker::eSimulationStart";
  case eSimulationEnd:
    return "PCLMarker::eSimulationEnd";
  case eRenderSubmitStart:
    return "PCLMarker::eRenderSubmitStart";
  case eRenderSubmitEnd:
    return "PCLMarker::eRenderSubmitEnd";
  case ePresentStart:
    return "PCLMarker::ePresentStart";
  case ePresentEnd:
    return "PCLMarker::ePresentEnd";
  default:
    return "Unknown";
  case eTriggerFlash:
    return "PCLMarker::eTriggerFlash";
  case ePCLatencyPing:
    return "PCLMarker::ePCLatencyPing";
  case eOutOfBandRenderSubmitStart:
    return "PCLMarker::eOutOfBandRenderSubmitStart";
  case eOutOfBandRenderSubmitEnd:
    return "PCLMarker::eOutOfBandRenderSubmitEnd";
  case eOutOfBandPresentStart:
    return "PCLMarker::eOutOfBandPresentStart";
  case eOutOfBandPresentEnd:
    return "PCLMarker::eOutOfBandPresentEnd";
  case eControllerInputSample:
    return "PCLMarker::eControllerInputSample";
  case eDeltaTCalculation:
    return "PCLMarker::eDeltaTCalculation";
  case eLateWarpPresentStart:
    return "PCLMarker::eLateWarpPresentStart";
  case eLateWarpPresentEnd:
    return "PCLMarker::eLateWarpPresentEnd";
  case eCameraConstructed:
    return "PCLMarker::eCameraConstructed";
  case eLateWarpRenderSubmitStart:
    return "PCLMarker::eLateWarpRenderSubmitStart";
  case eLateWarpRenderSubmitEnd:
    return "PCLMarker::eLateWarpRenderSubmitEnd";
  }
}

// IMPLEMENT_MODULE_StreamlineCore @ 14de85870

void __cdecl IMPLEMENT_MODULE_StreamlineCore(void)

{
  return;
}

// OnCreateRenderThreadResources'' @ 15045fc20

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources);
  return;
}

// OnDestroyRenderThreadResources'' @ 15045fc60

void __cdecl
`dynamic_atexit_destructor_for_'Nanite::FSkinnedSceneProxyDelegates::
OnDestroyRenderThreadResources__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_,
             Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._16_4_);
  if (Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_ != 0) {
    FMemory::Free((void *)Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources._8_8_)
    ;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources);
  return;
}

// StreamlineLatencyMarkers'' @ 15045fca0

void __cdecl
`dynamic_atexit_destructor_for_'FStreamlineLatencyMarkers::StreamlineLatencyMarkers__(void)

{
  if (FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr != (FStreamlineLatencyMarkers *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045fcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_ + 0x28))
              (&(FStreamlineLatencyMarkers::StreamlineLatencyMarkers.Ptr)->_padding_,1);
    return;
  }
  return;
}

// StreamlineMaxTickRateHandler'' @ 15045fcd0

void __cdecl
`dynamic_atexit_destructor_for_'FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler__(void)

{
  if (FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr !=
      (FStreamlineMaxTickRateHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045fce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr + 0x38
                ))(FStreamlineMaxTickRateHandler::StreamlineMaxTickRateHandler.Ptr,1);
    return;
  }
  return;
}

// TrackedViews'' @ 15045fcf0

void __cdecl `dynamic_atexit_destructor_for_'FStreamlineViewExtension::TrackedViews__(void)

{
  DestructItems<FTrackedView,int>
            ((FTrackedView *)FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data,
             FStreamlineViewExtension::TrackedViews.ArrayNum);
  if (FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStreamlineViewExtension::TrackedViews.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarLatewarpEnable'' @ 15045fd30

void __cdecl _dynamic_atexit_destructor_for__CVarLatewarpEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLatewarpEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineClearColorAlpha'' @ 15045fd50

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineClearColorAlpha__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineClearColorAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineCustomCameraFarPlane'' @ 15045fd70

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineCustomCameraFarPlane__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineCustomCameraFarPlane)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineCustomCameraNearPlane'' @ 15045fd90

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineCustomCameraNearPlane__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineCustomCameraNearPlane);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGAdjustMotionBlurTimeScale'' @ 15045fdb0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGAdjustMotionBlurTimeScale__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDLSSGAdjustMotionBlurTimeScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGCheckStatusPerFrame'' @ 15045fdd0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGCheckStatusPerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDLSSGCheckStatusPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGDynamicResolutionMode'' @ 15045fdf0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGDynamicResolutionMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDLSSGDynamicResolutionMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGEnable'' @ 15045fe10

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineDLSSGEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGFramesToGenerate'' @ 15045fe30

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGFramesToGenerate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDLSSGFramesToGenerate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDLSSGRetainResourcesWhenOff'' @ 15045fe50

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDLSSGRetainResourcesWhenOff__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDLSSGRetainResourcesWhenOff);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDeepDVCEnable'' @ 15045fe70

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDeepDVCEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineDeepDVCEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDeepDVCIntensity'' @ 15045fe90

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDeepDVCIntensity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineDeepDVCIntensity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDeepDVCSaturationBoost'' @ 15045feb0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDeepDVCSaturationBoost__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineDeepDVCSaturationBoost);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineDilateMotionVectors'' @ 15045fed0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineDilateMotionVectors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineDilateMotionVectors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineEditorTagUIColorAlpha'' @ 15045fef0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineEditorTagUIColorAlpha__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineEditorTagUIColorAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineForceTagging'' @ 15045ff10

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineForceTagging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineForceTagging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineFullScreenMenuDetection'' @ 15045ff30

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineFullScreenMenuDetection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineFullScreenMenuDetection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineLogTrackedViews'' @ 15045ff50

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineLogTrackedViews__(void)

{
  CVarStreamlineLogTrackedViews._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineLogTrackedViews);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineMotionVectorScale'' @ 15045ff70

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineMotionVectorScale__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineMotionVectorScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexActorDebug'' @ 15045ff90

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexActorDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexActorDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexAuto'' @ 15045ffb0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexAuto__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexAuto);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexCameraPredictor'' @ 15045ffd0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexCameraPredictor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineReflexCameraPredictor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexClipCorrection'' @ 15045fff0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexClipCorrection__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexClipCorrection)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexClipRadius'' @ 150460010

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexClipRadius__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexClipRadius);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexEnable'' @ 150460030

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexEnableInEditor'' @ 150460050

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexEnableInEditor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexEnableInEditor)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexEnableLatencyMarkers'' @ 150460070

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexEnableLatencyMarkers__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineReflexEnableLatencyMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexHandleMaxTickRate'' @ 150460090

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexHandleMaxTickRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineReflexHandleMaxTickRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexMode'' @ 1504600b0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineReflexMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexPredictiveRendering'' @ 1504600d0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineReflexPredictiveRendering__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineReflexPredictiveRendering);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineReflexPredictiveRenderingLateUpdateMode'' @ 1504600f0

void __cdecl
_dynamic_atexit_destructor_for__CVarStreamlineReflexPredictiveRenderingLateUpdateMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineReflexPredictiveRenderingLateUpdateMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagBackbuffer'' @ 150460110

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagBackbuffer__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineTagBackbuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagCustomDepth'' @ 150460130

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagCustomDepth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineTagCustomDepth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagEditorSceneColorWithoutHUD'' @ 150460150

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagEditorSceneColorWithoutHUD__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineTagEditorSceneColorWithoutHUD);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagSceneColorWithoutHUD'' @ 150460170

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagSceneColorWithoutHUD__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineTagSceneColorWithoutHUD);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagUIColorAlpha'' @ 150460190

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagUIColorAlpha__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineTagUIColorAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagUIColorAlphaThreshold'' @ 1504601b0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagUIColorAlphaThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineTagUIColorAlphaThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineTagVelocities'' @ 1504601d0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineTagVelocities__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineTagVelocities);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineUnregisterReflexPlugin'' @ 1504601f0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineUnregisterReflexPlugin__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineUnregisterReflexPlugin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineViewIdOverride'' @ 150460210

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineViewIdOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineViewIdOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineViewIndexToTag'' @ 150460230

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineViewIndexToTag__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineViewIndexToTag);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150460250

void __cdecl
```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l37::Desc::
operator()<unsigned_int_const_&,int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l3::
<lambda_1>::
operator()<unsigned_int_const_&,int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150460257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150460270

void __cdecl
```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l68::<lambda_2>::
operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l3::<lambda_1>::
operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150460277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150460290

void __cdecl
```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l102::<lambda_4>::
operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l3::<lambda_1>::
operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150460297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_Latewarp'' @ 1504602b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_Latewarp__(void)

{
  GPUStat_Latewarp._104_4_ = 0;
  if (GPUStat_Latewarp._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_Latewarp._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_Latewarp.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_Streamline'' @ 1504602f0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_Streamline__(void)

{
  GPUStat_Streamline._104_4_ = 0;
  if (GPUStat_Streamline._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_Streamline._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_Streamline.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_StreamlineDeepDVC'' @ 150460330

void __cdecl _dynamic_atexit_destructor_for__GPUStat_StreamlineDeepDVC__(void)

{
  GPUStat_StreamlineDeepDVC._104_4_ = 0;
  if (GPUStat_StreamlineDeepDVC._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_StreamlineDeepDVC._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_StreamlineDeepDVC.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GameThreadDebugMessages'' @ 150460370

void __cdecl _dynamic_atexit_destructor_for__GameThreadDebugMessages__(void)

{
  DestructItems<FString,int>
            ((FString *)GameThreadDebugMessages.AllocatorInstance.Data,
             GameThreadDebugMessages.ArrayNum);
  if (GameThreadDebugMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GameThreadDebugMessages.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GameThreadDebugMessagesCS'' @ 1504603b0

void __cdecl _dynamic_atexit_destructor_for__GameThreadDebugMessagesCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504603b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamline'' @ 1504603d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamline);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineLatewarp'' @ 1504603f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineLatewarp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineLatewarp);
  return;
}

// `dynamic_atexit_destructor_for_'RenderThreadDebugMessages'' @ 150460410

void __cdecl _dynamic_atexit_destructor_for__RenderThreadDebugMessages__(void)

{
  DestructItems<FString,int>
            ((FString *)RenderThreadDebugMessages.AllocatorInstance.Data,
             RenderThreadDebugMessages.ArrayNum);
  if (RenderThreadDebugMessages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(RenderThreadDebugMessages.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'RenderThreadDebugMessagesCS'' @ 150460450

void __cdecl _dynamic_atexit_destructor_for__RenderThreadDebugMessagesCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150460457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150460470

void __cdecl
``anonymous_namespace'::FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`FSLDeepDVCShaderParameters::FTypeInfo::GetStructMetadata'::`2'::StaticStructMetadata)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150460490

void __cdecl
`FSLSetStateShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLSetStateShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504604b0

void __cdecl
`FSLShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504604d0

void __cdecl
`FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLUIHintTagShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

