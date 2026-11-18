// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 178

// StaticClass @ 147c16b80

UClass * __cdecl UGameViewportClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameViewportClient",
               &Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton,
               StaticRegisterNativesUGameViewportClient,0x460,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameViewportClient>,
               InternalVTableHelperCtorCaller<UGameViewportClient>,aFStackX_8,
               UScriptViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton;
}

// UGameViewportClient @ 147c2d970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportClient * __thiscall
UGameViewportClient::UGameViewportClient(UGameViewportClient *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  UScriptViewportClient::UScriptViewportClient((UScriptViewportClient *)this,param_1);
  this->MaxSplitscreenPlayers = 4;
  (this->ViewportConsole).field0_0x0.DebugPtr = (UConsole *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DebugProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&___7UGameViewportClient__6B_;
  (this->DebugProperties).ArrayNum = 0;
  (this->DebugProperties).ArrayMax = 0;
  (this->SplitscreenInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SplitscreenInfo).ArrayNum = 0;
  (this->SplitscreenInfo).ArrayMax = 0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->GameInstance).field0_0x0.DebugPtr = (UGameInstance *)0x0;
  FAudioDeviceHandle::FAudioDeviceHandle(&this->AudioDevice);
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->EngineShowFlags;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->AudioDeviceDestroyedHandle).ID = 0;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar4;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar5;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar4;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar5;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->EngineShowFlags).VectorFields = 0;
  (this->EngineShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->EngineShowFlags).VisualizeTSR = 0;
  (this->EngineShowFlags).VisualizeTemporalUpscaler = 0;
  (this->EngineShowFlags).VisualizeReprojection = 0;
  (this->EngineShowFlags).VisualizeMotionVectors = 0;
  (this->EngineShowFlags).VisualizeMotionBlur = 0;
  (this->EngineShowFlags).PhysicalMaterialMasks = 0;
  (this->EngineShowFlags).VertexColors = 0;
  (this->EngineShowFlags).VisualizeDOF = 0;
  (this->EngineShowFlags).TestImage = 0;
  (this->EngineShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->EngineShowFlags).CompositeEditorPrimitives = 0;
  (this->EngineShowFlags).GBufferHints = 0;
  (this->EngineShowFlags).PathTracing = 0;
  (this->EngineShowFlags).AlphaInvert = 0;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->EngineShowFlags).VisualizeShadowCasters = 0;
  (this->EngineShowFlags).VisualizeLWCComplexity = 0;
  (this->EngineShowFlags).VisualizeGPUSkinCache = 0;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->EngineShowFlags).LumenSecondaryBounces = 0;
  (this->EngineShowFlags).LumenFarFieldTraces = 0;
  (this->EngineShowFlags).LumenGlobalTraces = 0;
  (this->EngineShowFlags).LumenDetailTraces = 0;
  (this->EngineShowFlags).LumenScreenTraces = 0;
  (this->EngineShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->EngineShowFlags).VirtualTexturePrimitives = 0;
  (this->EngineShowFlags).VisualizePostProcessStack = 0;
  (this->EngineShowFlags).VisualizeCalibrationCustom = 0;
  (this->EngineShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->EngineShowFlags).VisualizeCalibrationColor = 0;
  (this->EngineShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->EngineShowFlags).VisualizeSkyAtmosphere = 0;
  (this->EngineShowFlags).RayTracingDebug = 0;
  (this->EngineShowFlags).LightComplexity = 0;
  (this->EngineShowFlags).Pivot = 0;
  (this->EngineShowFlags).LightInfluences = 0;
  (this->EngineShowFlags).HitProxies = 0;
  (this->EngineShowFlags).Bounds = 0;
  (this->EngineShowFlags).ModeWidgets = 0;
  (this->EngineShowFlags).EditingLevelInstance = 0;
  (this->EngineShowFlags).Selection = 0;
  (this->EngineShowFlags).Splines = 0;
  (this->EngineShowFlags).Cover = 0;
  (this->EngineShowFlags).MeshEdges = 0;
  (this->EngineShowFlags).Snap = 0;
  (this->EngineShowFlags).Grid = 0;
  (this->EngineShowFlags).LargeVertices = 0;
  (this->EngineShowFlags).Editor = 0;
  (this->EngineShowFlags).Brushes = 0;
  (this->EngineShowFlags).BSPSplit = 0;
  (this->EngineShowFlags).AudioRadius = 0;
  (this->EngineShowFlags).CameraFrustums = 0;
  (this->EngineShowFlags).MassProperties = 0;
  (this->EngineShowFlags).Constraints = 0;
  (this->EngineShowFlags).StreamingBounds = 0;
  (this->EngineShowFlags).LightMapDensity = 0;
  (this->EngineShowFlags).StationaryLightOverlap = 0;
  (this->EngineShowFlags).ShaderComplexity = 0;
  (this->EngineShowFlags).SelectionOutline = 0;
  (this->EngineShowFlags).VisualizeInstanceUpdates = 0;
  (this->EngineShowFlags).HISMCClusterTree = 0;
  (this->EngineShowFlags).HISMCOcclusionBounds = 0;
  (this->EngineShowFlags).Navigation = 0;
  (this->EngineShowFlags).DebugAI = 0;
  (this->EngineShowFlags).VisualizeSSS = 0;
  (this->EngineShowFlags).MotionBlur = 1;
  (this->EngineShowFlags).ScreenPercentage = 1;
  (this->EngineShowFlags).CompositeDebugPrimitives = 1;
  (this->EngineShowFlags).VolumeLightingSamples = 0;
  (this->EngineShowFlags).DisableOcclusionQueries = 0;
  (this->EngineShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->EngineShowFlags).OcclusionMeshes = 0;
  (this->EngineShowFlags).VREditing = 0;
  (this->EngineShowFlags).ServerDrawDebug = 0;
  (this->EngineShowFlags).Bones = 0;
  (this->EngineShowFlags).VisualizeVirtualTexture = 0;
  (this->EngineShowFlags).RequiredTextureResolution = 0;
  (this->EngineShowFlags).OutputMaterialTextureScales = 0;
  (this->EngineShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->EngineShowFlags).MeshUVDensityAccuracy = 0;
  (this->EngineShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->EngineShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->EngineShowFlags).QuadOverdraw = 0;
  (this->EngineShowFlags).HLODColoration = 0;
  (this->EngineShowFlags).LODColoration = 0;
  (this->EngineShowFlags).VisualizeShadingModels = 0;
  (this->EngineShowFlags).VisualizeSSR = 0;
  (this->EngineShowFlags).VisualizeLightingOnProbes = 0;
  (this->EngineShowFlags).VisualizeGlobalDistanceField = 0;
  (this->EngineShowFlags).PhysicsField = 0;
  (this->EngineShowFlags).VisualizeMeshDistanceFields = 0;
  (this->EngineShowFlags).VisualizeDistanceFieldAO = 0;
  (this->EngineShowFlags).LumenScreenTraces = 1;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->EngineShowFlags).LumenSecondaryBounces = 1;
  (this->EngineShowFlags).LumenFarFieldTraces = 1;
  (this->EngineShowFlags).LumenGlobalTraces = 1;
  (this->EngineShowFlags).LumenDetailTraces = 1;
  this_00->VisualizeHDR = 0;
  this_00->VisualizeVirtualShadowMap = 0;
  this_00->VisualizeGroom = 0;
  this_00->VisualizeSubstrate = 0;
  this_00->VisualizeLumen = 0;
  this_00->VisualizeNanite = 0;
  this_00->VisualizeBuffer = 0;
  this_00->MaterialAmbientOcclusion = 1;
  this_00->MaterialNormal = 1;
  this_00->ReflectionOverride = 0;
  this_00->LightingOnlyOverride = 0;
  this_00->OverrideDiffuseAndSpecular = 0;
  this_00->VisualizeLocalExposure = 0;
  this_00->VisualizeLocalFogVolumes = 0;
  this_00->VisualizeSkyLightIlluminance = 0;
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
  puVar2 = &(this->EngineShowFlags).field_0x10;
  (this->EngineShowFlags).ShadowFrustums = 0;
  (this->EngineShowFlags).VisualizeVolumetricLightmap = 0;
  (this->EngineShowFlags).PrecomputedVisibilityCells = 0;
  (this->EngineShowFlags).VisualizeLightCulling = 0;
  (this->EngineShowFlags).DistanceCulledPrimitives = 0;
  (this->EngineShowFlags).StereoRendering = 0;
  (this->EngineShowFlags).HMDDistortion = 0;
  (this->EngineShowFlags).HighResScreenshotMask = 0;
  (this->EngineShowFlags).CameraSafeFrames = 0;
  (this->EngineShowFlags).CameraAspectRatioBars = 0;
  (this->EngineShowFlags).CollisionPawn = 0;
  (this->EngineShowFlags).CollisionVisibility = 0;
  (this->EngineShowFlags).Collision = 0;
  (this->EngineShowFlags).ActorColoration = 0;
  (this->EngineShowFlags).Game = 1;
  (this->EngineShowFlags).Volumes = 0;
  (this->EngineShowFlags).LightRadius = 0;
  (this->EngineShowFlags).Wireframe = 0;
  this->AudioDeviceHandle = 0xffffffff;
  this->bHasAudioFocus = false;
  (this->Window).Object = (SWindow *)0x0;
  (this->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewportOverlayWidget).Object = (SOverlay *)0x0;
  (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameLayerManagerPtr).Object = (IGameLayerManager *)0x0;
  (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentBufferVisualizationMode).ComparisonIndex = 0;
  (this->CurrentBufferVisualizationMode).Number = 0;
  (this->CurrentNaniteVisualizationMode).ComparisonIndex = 0;
  (this->CurrentNaniteVisualizationMode).Number = 0;
  (this->CurrentLumenVisualizationMode).ComparisonIndex = 0;
  (this->CurrentLumenVisualizationMode).Number = 0;
  (this->CurrentSubstrateVisualizationMode).ComparisonIndex = 0;
  (this->CurrentSubstrateVisualizationMode).Number = 0;
  (this->CurrentGroomVisualizationMode).ComparisonIndex = 0;
  (this->CurrentGroomVisualizationMode).Number = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).ComparisonIndex = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).Number = 0;
  (this->HighResScreenshotDialog).Object = (SWindow *)0x0;
  (this->HighResScreenshotDialog).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->HardwareCursorCache = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x48 = 0;
  *(undefined8 *)&this->HardwareCursors = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->CursorWidgets = 0;
  *(undefined8 *)&(this->CursorWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->CursorWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->CursorWidgets).field_0x34 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CursorWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x48 = 0;
  *(undefined8 *)&this->CloseRequestedDelegate = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WindowCloseRequestedDelegate = 0;
  *(undefined8 *)&(this->WindowCloseRequestedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WindowCloseRequestedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlayerAddedDelegate = 0;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlayerRemovedDelegate = 0;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->BeginDrawDelegate = 0;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DrawnDelegate = 0;
  *(undefined8 *)&(this->DrawnDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DrawnDelegate).field_0x10 = 0;
  *(undefined8 *)&this->EndDrawDelegate = 0;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x10 = 0;
  *(undefined8 *)&this->TickDelegate = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ToggleFullscreenDelegate = 0;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x10 = 0;
  *(undefined8 *)&this->CustomNavigationEvent = 0;
  *(undefined8 *)&(this->CustomNavigationEvent).field_0x8 = 0;
  *(undefined4 *)&(this->CustomNavigationEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOverrideInputKeyEvent = 0;
  *(undefined8 *)&(this->OnOverrideInputKeyEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnOverrideInputKeyEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOverrideInputAxisEvent = 0;
  *(undefined8 *)&(this->OnOverrideInputAxisEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnOverrideInputAxisEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInputKeyEvent = 0;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInputAxisEvent = 0;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x10 = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->DrawnDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->TickDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x18 = 2;
  this->bIgnoreInput = false;
  this->MouseCaptureMode = CapturePermanently;
  this->bHideCursorDuringCapture = false;
  this->MouseLockMode = LockOnCapture;
  return this;
}

// UGameViewportClient @ 147c2dd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportClient * __thiscall
UGameViewportClient::UGameViewportClient(UGameViewportClient *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<FSplitscreenData,TSizedDefaultAllocator<32>_> *pTVar4;
  FEngineShowFlags *this_00;
  undefined8 *puVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  UGameViewportClient *pUVar14;
  FStatUnitData *this_01;
  FStatUnitData *pFVar15;
  FDelegateHandle FVar16;
  TArray<FPerPlayerSplitscreenData,TSizedDefaultAllocator<32>_> *this_02;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FStatUnitData *pFVar19;
  undefined8 uStack_370;
  FPerPlayerSplitscreenData *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [104];
  
  UScriptViewportClient::UScriptViewportClient((UScriptViewportClient *)this,param_1);
  pFVar19 = (FStatUnitData *)0x0;
  this->MaxSplitscreenPlayers = 4;
  pTVar4 = &this->SplitscreenInfo;
  (this->ViewportConsole).field0_0x0.DebugPtr = (UConsole *)0x0;
  (this->DebugProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  piVar1 = &(this->SplitscreenInfo).ArrayMax;
  (this->DebugProperties).ArrayNum = 0;
  (this->DebugProperties).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7UGameViewportClient__6B_;
  (this->SplitscreenInfo).ArrayNum = 0;
  *piVar1 = 0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  (this->GameInstance).field0_0x0.DebugPtr = (UGameInstance *)0x0;
  FAudioDeviceHandle::FAudioDeviceHandle(&this->AudioDevice);
  uVar11 = _UNK_15060db28;
  uVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->EngineShowFlags;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->AudioDeviceDestroyedHandle).ID = 0;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar10;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar11;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar10;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar11;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->EngineShowFlags).VectorFields = 0;
  (this->EngineShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->EngineShowFlags).VisualizeTSR = 0;
  (this->EngineShowFlags).VisualizeTemporalUpscaler = 0;
  (this->EngineShowFlags).VisualizeReprojection = 0;
  (this->EngineShowFlags).VisualizeMotionVectors = 0;
  (this->EngineShowFlags).VisualizeMotionBlur = 0;
  (this->EngineShowFlags).PhysicalMaterialMasks = 0;
  (this->EngineShowFlags).VertexColors = 0;
  (this->EngineShowFlags).VisualizeDOF = 0;
  (this->EngineShowFlags).TestImage = 0;
  (this->EngineShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->EngineShowFlags).CompositeEditorPrimitives = 0;
  (this->EngineShowFlags).GBufferHints = 0;
  (this->EngineShowFlags).PathTracing = 0;
  (this->EngineShowFlags).AlphaInvert = 0;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->EngineShowFlags).VisualizeShadowCasters = 0;
  (this->EngineShowFlags).VisualizeLWCComplexity = 0;
  (this->EngineShowFlags).VisualizeGPUSkinCache = 0;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->EngineShowFlags).LumenSecondaryBounces = 0;
  (this->EngineShowFlags).LumenFarFieldTraces = 0;
  (this->EngineShowFlags).LumenGlobalTraces = 0;
  (this->EngineShowFlags).LumenDetailTraces = 0;
  (this->EngineShowFlags).LumenScreenTraces = 0;
  (this->EngineShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->EngineShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->EngineShowFlags).VirtualTexturePrimitives = 0;
  (this->EngineShowFlags).VisualizePostProcessStack = 0;
  (this->EngineShowFlags).VisualizeCalibrationCustom = 0;
  (this->EngineShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->EngineShowFlags).VisualizeCalibrationColor = 0;
  (this->EngineShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->EngineShowFlags).VisualizeSkyAtmosphere = 0;
  (this->EngineShowFlags).RayTracingDebug = 0;
  (this->EngineShowFlags).LightComplexity = 0;
  (this->EngineShowFlags).Pivot = 0;
  (this->EngineShowFlags).LightInfluences = 0;
  (this->EngineShowFlags).HitProxies = 0;
  (this->EngineShowFlags).Bounds = 0;
  (this->EngineShowFlags).ModeWidgets = 0;
  (this->EngineShowFlags).EditingLevelInstance = 0;
  (this->EngineShowFlags).Selection = 0;
  (this->EngineShowFlags).Splines = 0;
  (this->EngineShowFlags).Cover = 0;
  (this->EngineShowFlags).MeshEdges = 0;
  (this->EngineShowFlags).Snap = 0;
  (this->EngineShowFlags).Grid = 0;
  (this->EngineShowFlags).LargeVertices = 0;
  (this->EngineShowFlags).Editor = 0;
  (this->EngineShowFlags).Brushes = 0;
  (this->EngineShowFlags).BSPSplit = 0;
  (this->EngineShowFlags).AudioRadius = 0;
  (this->EngineShowFlags).CameraFrustums = 0;
  (this->EngineShowFlags).MassProperties = 0;
  (this->EngineShowFlags).Constraints = 0;
  (this->EngineShowFlags).StreamingBounds = 0;
  (this->EngineShowFlags).LightMapDensity = 0;
  (this->EngineShowFlags).StationaryLightOverlap = 0;
  (this->EngineShowFlags).ShaderComplexity = 0;
  (this->EngineShowFlags).SelectionOutline = 0;
  (this->EngineShowFlags).VisualizeInstanceUpdates = 0;
  (this->EngineShowFlags).HISMCClusterTree = 0;
  (this->EngineShowFlags).HISMCOcclusionBounds = 0;
  (this->EngineShowFlags).Navigation = 0;
  (this->EngineShowFlags).DebugAI = 0;
  (this->EngineShowFlags).VisualizeSSS = 0;
  (this->EngineShowFlags).MotionBlur = 1;
  (this->EngineShowFlags).ScreenPercentage = 1;
  (this->EngineShowFlags).CompositeDebugPrimitives = 1;
  (this->EngineShowFlags).VolumeLightingSamples = 0;
  (this->EngineShowFlags).DisableOcclusionQueries = 0;
  (this->EngineShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->EngineShowFlags).OcclusionMeshes = 0;
  (this->EngineShowFlags).VREditing = 0;
  (this->EngineShowFlags).ServerDrawDebug = 0;
  (this->EngineShowFlags).Bones = 0;
  (this->EngineShowFlags).VisualizeVirtualTexture = 0;
  (this->EngineShowFlags).RequiredTextureResolution = 0;
  (this->EngineShowFlags).OutputMaterialTextureScales = 0;
  (this->EngineShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->EngineShowFlags).MeshUVDensityAccuracy = 0;
  (this->EngineShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->EngineShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->EngineShowFlags).QuadOverdraw = 0;
  (this->EngineShowFlags).HLODColoration = 0;
  (this->EngineShowFlags).LODColoration = 0;
  (this->EngineShowFlags).VisualizeShadingModels = 0;
  (this->EngineShowFlags).VisualizeSSR = 0;
  (this->EngineShowFlags).VisualizeLightingOnProbes = 0;
  (this->EngineShowFlags).VisualizeGlobalDistanceField = 0;
  (this->EngineShowFlags).PhysicsField = 0;
  (this->EngineShowFlags).VisualizeMeshDistanceFields = 0;
  (this->EngineShowFlags).VisualizeDistanceFieldAO = 0;
  (this->EngineShowFlags).LumenScreenTraces = 1;
  (this->EngineShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->EngineShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->EngineShowFlags).LumenSecondaryBounces = 1;
  (this->EngineShowFlags).LumenFarFieldTraces = 1;
  (this->EngineShowFlags).LumenGlobalTraces = 1;
  (this->EngineShowFlags).LumenDetailTraces = 1;
  this_00->VisualizeHDR = 0;
  this_00->VisualizeVirtualShadowMap = 0;
  this_00->VisualizeGroom = 0;
  this_00->VisualizeSubstrate = 0;
  this_00->VisualizeLumen = 0;
  this_00->VisualizeNanite = 0;
  this_00->VisualizeBuffer = 0;
  this_00->MaterialAmbientOcclusion = 1;
  this_00->MaterialNormal = 1;
  this_00->ReflectionOverride = 0;
  this_00->LightingOnlyOverride = 0;
  this_00->OverrideDiffuseAndSpecular = 0;
  this_00->VisualizeLocalExposure = 0;
  this_00->VisualizeLocalFogVolumes = 0;
  this_00->VisualizeSkyLightIlluminance = 0;
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
  puVar3 = &(this->EngineShowFlags).field_0x10;
  (this->EngineShowFlags).ShadowFrustums = 0;
  (this->EngineShowFlags).VisualizeVolumetricLightmap = 0;
  (this->EngineShowFlags).PrecomputedVisibilityCells = 0;
  (this->EngineShowFlags).VisualizeLightCulling = 0;
  (this->EngineShowFlags).DistanceCulledPrimitives = 0;
  (this->EngineShowFlags).StereoRendering = 0;
  (this->EngineShowFlags).HMDDistortion = 0;
  (this->EngineShowFlags).HighResScreenshotMask = 0;
  (this->EngineShowFlags).CameraSafeFrames = 0;
  (this->EngineShowFlags).CameraAspectRatioBars = 0;
  (this->EngineShowFlags).CollisionPawn = 0;
  (this->EngineShowFlags).CollisionVisibility = 0;
  (this->EngineShowFlags).Collision = 0;
  (this->EngineShowFlags).ActorColoration = 0;
  (this->EngineShowFlags).Game = 1;
  (this->EngineShowFlags).Volumes = 0;
  (this->EngineShowFlags).LightRadius = 0;
  (this->EngineShowFlags).Wireframe = 0;
  this->AudioDeviceHandle = 0xffffffff;
  this->bHasAudioFocus = false;
  (this->Window).Object = (SWindow *)0x0;
  (this->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ViewportOverlayWidget).Object = (SOverlay *)0x0;
  (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameLayerManagerPtr).Object = (IGameLayerManager *)0x0;
  (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentBufferVisualizationMode).ComparisonIndex = 0;
  (this->CurrentBufferVisualizationMode).Number = 0;
  (this->CurrentNaniteVisualizationMode).ComparisonIndex = 0;
  (this->CurrentNaniteVisualizationMode).Number = 0;
  (this->CurrentLumenVisualizationMode).ComparisonIndex = 0;
  (this->CurrentLumenVisualizationMode).Number = 0;
  (this->CurrentSubstrateVisualizationMode).ComparisonIndex = 0;
  (this->CurrentSubstrateVisualizationMode).Number = 0;
  (this->CurrentGroomVisualizationMode).ComparisonIndex = 0;
  (this->CurrentGroomVisualizationMode).Number = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).ComparisonIndex = 0;
  (this->CurrentVirtualShadowMapVisualizationMode).Number = 0;
  (this->HighResScreenshotDialog).Object = (SWindow *)0x0;
  (this->HighResScreenshotDialog).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->HardwareCursorCache = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursorCache).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursorCache).field_0x48 = 0;
  *(undefined8 *)&this->HardwareCursors = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->CursorWidgets = 0;
  *(undefined8 *)&(this->CursorWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->CursorWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->CursorWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CursorWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->CursorWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->CursorWidgets).field_0x48 = 0;
  this->bIsPlayInEditorViewport = 0;
  this->bUseSoftwareCursorWidgets = true;
  *(undefined8 *)&this->CloseRequestedDelegate = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->CloseRequestedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->WindowCloseRequestedDelegate = 0;
  *(undefined8 *)&(this->WindowCloseRequestedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WindowCloseRequestedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->PlayerAddedDelegate = 0;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PlayerAddedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PlayerRemovedDelegate = 0;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PlayerRemovedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->BeginDrawDelegate = 0;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->BeginDrawDelegate).field_0x18 = 2;
  *(undefined8 *)&this->DrawnDelegate = 0;
  *(undefined8 *)&(this->DrawnDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DrawnDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->DrawnDelegate).field_0x18 = 2;
  *(undefined8 *)&this->EndDrawDelegate = 0;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->EndDrawDelegate).field_0x18 = 2;
  *(undefined8 *)&this->TickDelegate = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TickDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ToggleFullscreenDelegate = 0;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ToggleFullscreenDelegate).field_0x18 = 2;
  *(undefined8 *)&this->CustomNavigationEvent = 0;
  *(undefined8 *)&(this->CustomNavigationEvent).field_0x8 = 0;
  *(undefined4 *)&(this->CustomNavigationEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOverrideInputKeyEvent = 0;
  *(undefined8 *)&(this->OnOverrideInputKeyEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnOverrideInputKeyEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOverrideInputAxisEvent = 0;
  *(undefined8 *)&(this->OnOverrideInputAxisEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnOverrideInputAxisEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInputKeyEvent = 0;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputKeyEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnInputAxisEvent = 0;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputAxisEvent).field_0x18 = 2;
  this->bIgnoreInput = false;
  this->MouseCaptureMode = CapturePermanently;
  this->bHideCursorDuringCapture = false;
  this->MouseLockMode = LockOnCapture;
  this->bIsMouseOverClient = false;
  this->ViewModeIndex = 3;
  local_368 = (FPerPlayerSplitscreenData *)0x0;
  local_360 = 0;
  DestructItems<FSplitscreenData,int>
            ((FSplitscreenData *)(pTVar4->AllocatorInstance).Data,(this->SplitscreenInfo).ArrayNum);
  lVar17 = 10;
  (this->SplitscreenInfo).ArrayNum = 0;
  if (*piVar1 != 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,10,&pTVar4->AllocatorInstance,0,piVar1);
  }
  do {
    uVar6 = uStack_370._4_4_;
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_368) &&
        ((FScriptContainerElement *)&local_368 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      pUVar14 = (UGameViewportClient *)(*pcVar9)();
      return pUVar14;
    }
    iVar13 = (this->SplitscreenInfo).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->SplitscreenInfo).ArrayNum = iVar13 + 1;
    this_02 = (TArray<FPerPlayerSplitscreenData,TSizedDefaultAllocator<32>_> *)
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x10);
    (this_02->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    TArray<FPerPlayerSplitscreenData,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FPerPlayerSplitscreenData,int>(this_02,local_368,(int)local_360,0);
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (local_368 != (FPerPlayerSplitscreenData *)0x0) {
    FMemory::Free(local_368);
  }
  if (((this->SplitscreenInfo).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_2c8 = ___xmm_00000000000000003f8000003f800000;
  uStack_2c0 = _UNK_150dcddc8;
  local_2b8 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*pFVar7 <= (FScriptContainerElement *)&local_2c8) &&
      ((FScriptContainerElement *)&local_2c8 < *pFVar7 + (longlong)*(int *)(pFVar7 + 0xc) * 0x18))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 8);
  if (iVar13 == *(int *)(pFVar7 + 0xc)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 0xc));
  }
  *(int *)(pFVar7 + 8) = iVar13 + 1;
                    /* WARNING: Load size is inaccurate */
  FVar8.Data = *pFVar7;
  pFVar7 = FVar8.Data + (longlong)iVar13 * 0x18;
  *(undefined8 *)pFVar7 = local_2c8;
  *(undefined8 *)(pFVar7 + 8) = uStack_2c0;
  *(undefined8 *)(FVar8.Data + (longlong)iVar13 * 0x18 + 0x10) = local_2b8;
  if (((this->SplitscreenInfo).ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_2b0 = ___xmm_00000000000000003f0000003f800000;
  uStack_2a8 = _UNK_1518d0218;
  local_2a0 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x10) <= &local_2b0) &&
      (&local_2b0 < *(undefined8 **)(pFVar7 + 0x10) + (longlong)*(int *)(pFVar7 + 0x1c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x18);
  if (iVar13 == *(int *)(pFVar7 + 0x1c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x10),(int *)(pFVar7 + 0x1c));
  }
  uStack_248 = _UNK_1518d0218;
  local_250 = ___xmm_00000000000000003f0000003f800000;
  *(int *)(pFVar7 + 0x18) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x10);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_2b0;
  puVar5[1] = uStack_2a8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_2a0;
  if (((this->SplitscreenInfo).ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_250 = ___xmm_00000000000000003f0000003f800000, uStack_248 = _UNK_1518d0218, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_298 = ___xmm_3f000000000000003f0000003f800000;
  uStack_290 = _UNK_150925208;
  local_288 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x10) <= &local_298) &&
      (&local_298 < *(undefined8 **)(pFVar7 + 0x10) + (longlong)*(int *)(pFVar7 + 0x1c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_250 = ___xmm_00000000000000003f0000003f800000,
     uStack_248 = _UNK_1518d0218, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x18);
  if (iVar13 == *(int *)(pFVar7 + 0x1c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x10),(int *)(pFVar7 + 0x1c));
    local_250 = ___xmm_00000000000000003f0000003f800000;
    uStack_248 = _UNK_1518d0218;
  }
  uStack_350 = _UNK_150925208;
  local_358 = ___xmm_3f000000000000003f0000003f800000;
  *(int *)(pFVar7 + 0x18) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x10);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_298;
  puVar5[1] = uStack_290;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_288;
  if (((this->SplitscreenInfo).ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_250 = ___xmm_00000000000000003f0000003f800000, uStack_248 = _UNK_1518d0218,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_280 = ___xmm_00000000000000003f8000003f000000;
  uStack_278 = _UNK_1518d0248;
  local_270 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x20) <= &local_280) &&
      (&local_280 < *(undefined8 **)(pFVar7 + 0x20) + (longlong)*(int *)(pFVar7 + 0x2c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_250 = ___xmm_00000000000000003f0000003f800000,
     uStack_248 = _UNK_1518d0218, local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x28);
  if (iVar13 == *(int *)(pFVar7 + 0x2c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x20),(int *)(pFVar7 + 0x2c));
    local_250 = ___xmm_00000000000000003f0000003f800000;
    uStack_248 = _UNK_1518d0218;
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  *(int *)(pFVar7 + 0x28) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x20);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_280;
  puVar5[1] = uStack_278;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_270;
  if (((this->SplitscreenInfo).ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_250 = ___xmm_00000000000000003f0000003f800000, uStack_248 = _UNK_1518d0218,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_268 = ___xmm_000000003f0000003f8000003f000000;
  uStack_260 = _UNK_150925068;
  local_258 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x20) <= &local_268) &&
      (&local_268 < *(undefined8 **)(pFVar7 + 0x20) + (longlong)*(int *)(pFVar7 + 0x2c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_250 = ___xmm_00000000000000003f0000003f800000,
     uStack_248 = _UNK_1518d0218, local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x28);
  if (iVar13 == *(int *)(pFVar7 + 0x2c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x20),(int *)(pFVar7 + 0x2c));
    local_250 = ___xmm_00000000000000003f0000003f800000;
    uStack_248 = _UNK_1518d0218;
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  *(int *)(pFVar7 + 0x28) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x20);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_268;
  puVar5[1] = uStack_260;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_258;
  if (((this->SplitscreenInfo).ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_250 = ___xmm_00000000000000003f0000003f800000, uStack_248 = _UNK_1518d0218,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_240 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x30) <= &local_250) &&
      (&local_250 < *(undefined8 **)(pFVar7 + 0x30) + (longlong)*(int *)(pFVar7 + 0x3c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x38);
  if (iVar13 == *(int *)(pFVar7 + 0x3c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x30),(int *)(pFVar7 + 0x3c));
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  *(int *)(pFVar7 + 0x38) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x30);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_250;
  puVar5[1] = uStack_248;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_240;
  if (((this->SplitscreenInfo).ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_238 = ___xmm_3f000000000000003f0000003f000000;
  uStack_230 = _UNK_1518d02d8;
  local_228 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x30) <= &local_238) &&
      (&local_238 < *(undefined8 **)(pFVar7 + 0x30) + (longlong)*(int *)(pFVar7 + 0x3c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x38);
  if (iVar13 == *(int *)(pFVar7 + 0x3c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x30),(int *)(pFVar7 + 0x3c));
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  uStack_f8 = _UNK_1518d02d8;
  local_100 = ___xmm_3f000000000000003f0000003f000000;
  *(int *)(pFVar7 + 0x38) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x30);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_238;
  puVar5[1] = uStack_230;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_228;
  if (((this->SplitscreenInfo).ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_220 = ___xmm_3f0000003f0000003f0000003f000000;
  uStack_218 = _UNK_150689628;
  local_210 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x30) <= &local_220) &&
      (&local_220 < *(undefined8 **)(pFVar7 + 0x30) + (longlong)*(int *)(pFVar7 + 0x3c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x38);
  if (iVar13 == *(int *)(pFVar7 + 0x3c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x30),(int *)(pFVar7 + 0x3c));
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  uStack_e0 = _UNK_150689628;
  local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
  *(int *)(pFVar7 + 0x38) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x30);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_220;
  puVar5[1] = uStack_218;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_210;
  if (((this->SplitscreenInfo).ArrayNum < 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_208 = ___xmm_00000000000000003f0000003f000000;
  uStack_200 = _UNK_1518d0208;
  local_1f8 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x40) <= &local_208) &&
      (&local_208 < *(undefined8 **)(pFVar7 + 0x40) + (longlong)*(int *)(pFVar7 + 0x4c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x48);
  if (iVar13 == *(int *)(pFVar7 + 0x4c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x40),(int *)(pFVar7 + 0x4c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  uStack_128 = _UNK_1518d0208;
  local_130 = ___xmm_00000000000000003f0000003f000000;
  *(int *)(pFVar7 + 0x48) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x40);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_208;
  puVar5[1] = uStack_200;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_1f8;
  if (((this->SplitscreenInfo).ArrayNum < 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_1f0 = ___xmm_000000003f0000003f0000003f000000;
  uStack_1e8 = _UNK_150dcddd8;
  local_1e0 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x40) <= &local_1f0) &&
      (&local_1f0 < *(undefined8 **)(pFVar7 + 0x40) + (longlong)*(int *)(pFVar7 + 0x4c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, local_358 = ___xmm_3f000000000000003f0000003f800000,
     uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x48);
  if (iVar13 == *(int *)(pFVar7 + 0x4c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x40),(int *)(pFVar7 + 0x4c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
    local_358 = ___xmm_3f000000000000003f0000003f800000;
    uStack_350 = _UNK_150925208;
  }
  uStack_110 = _UNK_150dcddd8;
  local_118 = ___xmm_000000003f0000003f0000003f000000;
  *(int *)(pFVar7 + 0x48) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x40);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_1f0;
  puVar5[1] = uStack_1e8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_1e0;
  if (((this->SplitscreenInfo).ArrayNum < 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208,
     local_358 = ___xmm_3f000000000000003f0000003f800000, uStack_350 = _UNK_150925208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_348 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x40) <= &local_358) &&
      (&local_358 < *(undefined8 **)(pFVar7 + 0x40) + (longlong)*(int *)(pFVar7 + 0x4c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x48);
  if (iVar13 == *(int *)(pFVar7 + 0x4c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x40),(int *)(pFVar7 + 0x4c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x48) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x40);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_358;
  puVar5[1] = uStack_350;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_348;
  if (((this->SplitscreenInfo).ArrayNum < 6) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_1c0 = ___xmm_00000000000000003f8000003eaa7efa;
  uStack_1b8 = _UNK_1518d0238;
  local_1b0 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x50) <= &local_1c0) &&
      (&local_1c0 < *(undefined8 **)(pFVar7 + 0x50) + (longlong)*(int *)(pFVar7 + 0x5c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x58);
  if (iVar13 == *(int *)(pFVar7 + 0x5c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x50),(int *)(pFVar7 + 0x5c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x58) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x50);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_1c0;
  puVar5[1] = uStack_1b8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_1b0;
  if (((this->SplitscreenInfo).ArrayNum < 6) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_1a8 = ___xmm_000000003eaa7efa3f8000003eaa7efa;
  uStack_1a0 = _UNK_1518d0268;
  local_198 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x50) <= &local_1a8) &&
      (&local_1a8 < *(undefined8 **)(pFVar7 + 0x50) + (longlong)*(int *)(pFVar7 + 0x5c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x58);
  if (iVar13 == *(int *)(pFVar7 + 0x5c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x50),(int *)(pFVar7 + 0x5c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x58) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x50);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_1a8;
  puVar5[1] = uStack_1a0;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_198;
  if (((this->SplitscreenInfo).ArrayNum < 6) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_190 = ___xmm_000000003f2a7efa3f8000003eaa7efa;
  uStack_188 = _UNK_1518d0288;
  local_180 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x50) <= &local_190) &&
      (&local_190 < *(undefined8 **)(pFVar7 + 0x50) + (longlong)*(int *)(pFVar7 + 0x5c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x58);
  if (iVar13 == *(int *)(pFVar7 + 0x5c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x50),(int *)(pFVar7 + 0x5c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x58) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x50);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_190;
  puVar5[1] = uStack_188;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_180;
  if (((this->SplitscreenInfo).ArrayNum < 7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_178 = ___xmm_00000000000000003eaa7efa3f800000;
  uStack_170 = _UNK_1518d01f8;
  local_168 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x60) <= &local_178) &&
      (&local_178 < *(undefined8 **)(pFVar7 + 0x60) + (longlong)*(int *)(pFVar7 + 0x6c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x68);
  if (iVar13 == *(int *)(pFVar7 + 0x6c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x60),(int *)(pFVar7 + 0x6c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x68) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x60);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_178;
  puVar5[1] = uStack_170;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_168;
  if (((this->SplitscreenInfo).ArrayNum < 7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_160 = ___xmm_3eaa7efa000000003eaa7efa3f800000;
  uStack_158 = _UNK_1518d02b8;
  local_150 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x60) <= &local_160) &&
      (&local_160 < *(undefined8 **)(pFVar7 + 0x60) + (longlong)*(int *)(pFVar7 + 0x6c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x68);
  if (iVar13 == *(int *)(pFVar7 + 0x6c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x60),(int *)(pFVar7 + 0x6c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x68) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x60);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_160;
  puVar5[1] = uStack_158;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_150;
  if (((this->SplitscreenInfo).ArrayNum < 7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_148 = ___xmm_3f2a7efa000000003eaa7efa3f800000;
  uStack_140 = _UNK_1518d02e8;
  local_138 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x60) <= &local_148) &&
      (&local_148 < *(undefined8 **)(pFVar7 + 0x60) + (longlong)*(int *)(pFVar7 + 0x6c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, local_130 = ___xmm_00000000000000003f0000003f000000,
     uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x68);
  if (iVar13 == *(int *)(pFVar7 + 0x6c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x60),(int *)(pFVar7 + 0x6c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
    local_130 = ___xmm_00000000000000003f0000003f000000;
    uStack_128 = _UNK_1518d0208;
  }
  *(int *)(pFVar7 + 0x68) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x60);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_148;
  puVar5[1] = uStack_140;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_138;
  if (((this->SplitscreenInfo).ArrayNum < 8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8,
     local_130 = ___xmm_00000000000000003f0000003f000000, uStack_128 = _UNK_1518d0208, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_120 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x70) <= &local_130) &&
      (&local_130 < *(undefined8 **)(pFVar7 + 0x70) + (longlong)*(int *)(pFVar7 + 0x7c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, local_118 = ___xmm_000000003f0000003f0000003f000000,
     uStack_110 = _UNK_150dcddd8, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x78);
  if (iVar13 == *(int *)(pFVar7 + 0x7c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x70),(int *)(pFVar7 + 0x7c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
    local_118 = ___xmm_000000003f0000003f0000003f000000;
    uStack_110 = _UNK_150dcddd8;
  }
  *(int *)(pFVar7 + 0x78) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x70);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_130;
  puVar5[1] = uStack_128;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_120;
  if (((this->SplitscreenInfo).ArrayNum < 8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8,
     local_118 = ___xmm_000000003f0000003f0000003f000000, uStack_110 = _UNK_150dcddd8, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_108 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x70) <= &local_118) &&
      (&local_118 < *(undefined8 **)(pFVar7 + 0x70) + (longlong)*(int *)(pFVar7 + 0x7c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, local_100 = ___xmm_3f000000000000003f0000003f000000,
     uStack_f8 = _UNK_1518d02d8, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x78);
  if (iVar13 == *(int *)(pFVar7 + 0x7c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x70),(int *)(pFVar7 + 0x7c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
    local_100 = ___xmm_3f000000000000003f0000003f000000;
    uStack_f8 = _UNK_1518d02d8;
  }
  *(int *)(pFVar7 + 0x78) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x70);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_118;
  puVar5[1] = uStack_110;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_108;
  if (((this->SplitscreenInfo).ArrayNum < 8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628,
     local_100 = ___xmm_3f000000000000003f0000003f000000, uStack_f8 = _UNK_1518d02d8, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_f0 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x70) <= &local_100) &&
      (&local_100 < *(undefined8 **)(pFVar7 + 0x70) + (longlong)*(int *)(pFVar7 + 0x7c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), local_e8 = ___xmm_3f0000003f0000003f0000003f000000,
     uStack_e0 = _UNK_150689628, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x78);
  if (iVar13 == *(int *)(pFVar7 + 0x7c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x70),(int *)(pFVar7 + 0x7c));
    local_e8 = ___xmm_3f0000003f0000003f0000003f000000;
    uStack_e0 = _UNK_150689628;
  }
  *(int *)(pFVar7 + 0x78) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x70);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_100;
  puVar5[1] = uStack_f8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_f0;
  if (((this->SplitscreenInfo).ArrayNum < 8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     local_e8 = ___xmm_3f0000003f0000003f0000003f000000, uStack_e0 = _UNK_150689628, bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  local_d8 = 0;
  if (((*(undefined8 **)(pFVar7 + 0x70) <= &local_e8) &&
      (&local_e8 < *(undefined8 **)(pFVar7 + 0x70) + (longlong)*(int *)(pFVar7 + 0x7c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x78);
  if (iVar13 == *(int *)(pFVar7 + 0x7c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)(pFVar7 + 0x70),(int *)(pFVar7 + 0x7c));
  }
  *(int *)(pFVar7 + 0x78) = iVar13 + 1;
  lVar17 = *(longlong *)(pFVar7 + 0x70);
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_e8;
  puVar5[1] = uStack_e0;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_d8;
  if (((this->SplitscreenInfo).ArrayNum < 9) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x80;
  local_d0 = ___xmm_00000000000000003f8000003e800000;
  uStack_c8 = _UNK_1518d0228;
  local_c0 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_d0) &&
      (&local_d0 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x8c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x88);
  if (iVar13 == *(int *)(pFVar7 + 0x8c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x8c));
  }
  *(int *)(pFVar7 + 0x88) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_d0;
  puVar5[1] = uStack_c8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_c0;
  if (((this->SplitscreenInfo).ArrayNum < 9) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x80;
  local_b8 = ___xmm_000000003e8000003f8000003e800000;
  uStack_b0 = _UNK_1518d0258;
  local_a8 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_b8) &&
      (&local_b8 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x8c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x88);
  if (iVar13 == *(int *)(pFVar7 + 0x8c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x8c));
  }
  *(int *)(pFVar7 + 0x88) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_b8;
  puVar5[1] = uStack_b0;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_a8;
  if (((this->SplitscreenInfo).ArrayNum < 9) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x80;
  local_340 = ___xmm_000000003f0000003f8000003e800000;
  uStack_338 = _UNK_1518d0278;
  local_330 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_340) &&
      (&local_340 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x8c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x88);
  if (iVar13 == *(int *)(pFVar7 + 0x8c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x8c));
  }
  *(int *)(pFVar7 + 0x88) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_340;
  puVar5[1] = uStack_338;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_330;
  if (((this->SplitscreenInfo).ArrayNum < 9) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x80;
  local_328 = ___xmm_000000003f4000003f8000003e800000;
  uStack_320 = _UNK_1518d0298;
  local_318 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_328) &&
      (&local_328 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x8c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x88);
  if (iVar13 == *(int *)(pFVar7 + 0x8c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x8c));
  }
  *(int *)(pFVar7 + 0x88) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_328;
  puVar5[1] = uStack_320;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_318;
  if (((this->SplitscreenInfo).ArrayNum < 10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x90;
  local_310 = ___xmm_00000000000000003e8000003f800000;
  uStack_308 = _UNK_1518d01e8;
  local_300 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_310) &&
      (&local_310 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x9c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x98);
  if (iVar13 == *(int *)(pFVar7 + 0x9c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x9c));
  }
  *(int *)(pFVar7 + 0x98) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_310;
  puVar5[1] = uStack_308;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_300;
  if (((this->SplitscreenInfo).ArrayNum < 10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x90;
  local_2f8 = ___xmm_3e800000000000003e8000003f800000;
  uStack_2f0 = _UNK_1518d02a8;
  local_2e8 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_2f8) &&
      (&local_2f8 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x9c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x98);
  if (iVar13 == *(int *)(pFVar7 + 0x9c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x9c));
  }
  *(int *)(pFVar7 + 0x98) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_2f8;
  puVar5[1] = uStack_2f0;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_2e8;
  if (((this->SplitscreenInfo).ArrayNum < 10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x90;
  local_2e0 = ___xmm_3f000000000000003e8000003f800000;
  uStack_2d8 = _UNK_1518d02c8;
  local_2d0 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_2e0) &&
      (&local_2e0 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x9c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x98);
  if (iVar13 == *(int *)(pFVar7 + 0x9c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x9c));
  }
  *(int *)(pFVar7 + 0x98) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_2e0;
  puVar5[1] = uStack_2d8;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_2d0;
  if (((this->SplitscreenInfo).ArrayNum < 10) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar18 = pFVar7 + 0x90;
  local_1d8 = ___xmm_3f400000000000003e8000003f800000;
  uStack_1d0 = _UNK_1518d02f8;
  local_1c8 = 0;
  if (((*(undefined8 **)pFVar18 <= &local_1d8) &&
      (&local_1d8 < *(undefined8 **)pFVar18 + (longlong)*(int *)(pFVar7 + 0x9c) * 3)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar14 = (UGameViewportClient *)(*pcVar9)();
    return pUVar14;
  }
  iVar13 = *(int *)(pFVar7 + 0x98);
  if (iVar13 == *(int *)(pFVar7 + 0x9c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,(ForAnyElementType *)pFVar18,(int *)(pFVar7 + 0x9c));
  }
  *(int *)(pFVar7 + 0x98) = iVar13 + 1;
  lVar17 = *(longlong *)pFVar18;
  puVar5 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
  *puVar5 = local_1d8;
  puVar5[1] = uStack_1d0;
  *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar13 * 0x18) = local_1c8;
  this->bSuppressTransitionMessage = true;
  if ((this->_padding_ & 0x10) == 0) {
    this_01 = ::operator_new(0x4b0);
    pFVar15 = pFVar19;
    if (this_01 != (FStatUnitData *)0x0) {
      pFVar15 = FStatUnitData::FStatUnitData(this_01);
    }
    this->StatUnitData = pFVar15;
    pFVar15 = ::operator_new(0x30);
    if (pFVar15 != (FStatUnitData *)0x0) {
      pFVar15->GameThreadTime = 0.0;
      pFVar15->GameThreadTimeCriticalPath = 0.0;
      pFVar15->GPUFrameTime[0] = 0.0;
      pFVar15->GPUFrameTime[1] = 0.0;
      pFVar15->GPUFrameTime[4] = 0.0;
      pFVar15->GPUFrameTime[5] = 0.0;
      pFVar15->RenderThreadTime = 0.0;
      pFVar15->RenderThreadTimeCriticalPath = 0.0;
      pFVar15->GPUFrameTime[2] = 0.0;
      pFVar15->GPUFrameTime[3] = 0.0;
      pFVar15->GPUFrameTime[6] = 0.0;
      pFVar15->GPUFrameTime[7] = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                ((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar15->GameThreadTime,0x14);
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,0x14,(ForAnyElementType *)(pFVar15->GPUFrameTime + 2),
                          (int *)(pFVar15->GPUFrameTime + 4),(int *)(pFVar15->GPUFrameTime + 5));
      memset((void *)(*(longlong *)(pFVar15->GPUFrameTime + 2) + (longlong)iVar13 * 8),0,0xa0);
      pFVar19 = pFVar15;
    }
    this->StatHitchesData = (FStatHitchesData *)pFVar19;
    TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UGameViewportClient>
              ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*,bool_&,bool_&),FDefaultDelegateUserPolicy>
                *)&FCoreDelegates::StatCheckEnabled,(UGameViewportClient *)&stack0x00000018,
               (pmf_6e351217 *)this);
    uStack_370 = (ulonglong)uStack_370._4_4_ << 0x20;
    local_a0._24_8_ = HandleViewportStatEnabled;
    local_a0._32_8_ = uStack_370;
    TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
    AddUObject<UGameViewportClient>
              ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
                *)&FCoreDelegates::StatEnabled,(UGameViewportClient *)&stack0x00000020,
               (pmf_6b437815 *)this);
    uStack_370 = (ulonglong)uVar6 << 0x20;
    local_a0._40_8_ = HandleViewportStatDisabled;
    local_a0._48_8_ = uStack_370;
    TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
    AddUObject<UGameViewportClient>
              ((TMulticastDelegateRegistration<void___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
                *)&FCoreDelegates::StatDisabled,(UGameViewportClient *)(local_a0 + 0x48),
               (pmf_6b437815 *)this);
    uStack_370 = (ulonglong)uVar6 << 0x20;
    local_a0._56_8_ = HandleViewportStatDisableAll;
    local_a0._64_8_ = uStack_370;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UGameViewportClient>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::StatDisableAll,(UGameViewportClient *)local_a0,(pmf_333b5d62 *)this)
    ;
    FVar16 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             ::AddLambda<_UGameViewportClient::UGameViewportClient_::__l5::<lambda_1>_>
                       ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                         *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                        (<lambda_1> *)(local_a0 + 8));
                    /* WARNING: Load size is inaccurate */
    (this->AudioDeviceDestroyedHandle).ID = *FVar16.ID;
  }
  return this;
}

// ~UGameViewportClient @ 147c315f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::~UGameViewportClient(UGameViewportClient *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  FStatHitchesData *pFVar4;
  FScriptContainerElement *pFVar5;
  FStatUnitData *pFVar6;
  void *pvVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar10;
  longlong lVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&___7UGameViewportClient__6B_;
  uVar3 = *(undefined4 *)&(this->EngineShowFlags).field_0x10;
  if (ZPULL(uVar3,0xb,1) != 0) {
    (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
    *(uint *)&(this->EngineShowFlags).field_0x10 = uVar3 & 0xfffff7ff;
    ToggleShowCollision(this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::StatCheckEnabled
             ,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::StatEnabled,this
            );
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::StatDisabled,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::StatDisableAll,
             this);
  pFVar4 = this->StatHitchesData;
  if (pFVar4 != (FStatHitchesData *)0x0) {
    pFVar5 = (pFVar4->When).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar4->Hitches).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar4,0x30);
    this->StatHitchesData = (FStatHitchesData *)0x0;
  }
  pFVar6 = this->StatUnitData;
  if (pFVar6 != (FStatUnitData *)0x0) {
    FVar10 = (pFVar6->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                   )0x0) {
      FVar10 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                )&pFVar6->ResolutionFractions;
    }
    DestructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int>
              ((FItem *)FVar10,(pFVar6->ResolutionFractions).Array.ArrayNum);
    FVar10 = (pFVar6->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
    if (FVar10 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                   )0x0) {
      FMemory::Free((void *)FVar10);
    }
    pFVar5 = (pFVar6->InputLatencyTimes).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar6->RHITTimes).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pTVar12 = &pFVar6->FrameTimes;
    pFVar5 = (pTVar12->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    lVar11 = 8;
    do {
      pFVar5 = pTVar12[-1].AllocatorInstance.Data;
      pTVar12 = pTVar12 + -1;
      lVar11 = lVar11 + -1;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    } while (lVar11 != 0);
    pFVar5 = (pFVar6->GameThreadTimes).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar6->RenderThreadTimes).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar6,0x4b0);
    this->StatUnitData = (FStatUnitData *)0x0;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputAxisEvent).field_0x8,*(int *)&(this->OnInputAxisEvent).field_0x10);
  pvVar7 = *(void **)&(this->OnInputAxisEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputAxisEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputKeyEvent).field_0x8,*(int *)&(this->OnInputKeyEvent).field_0x10);
  pvVar7 = *(void **)&(this->OnInputKeyEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputKeyEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOverrideInputAxisEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOverrideInputKeyEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomNavigationEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ToggleFullscreenDelegate).field_0x8,
             *(int *)&(this->ToggleFullscreenDelegate).field_0x10);
  pvVar7 = *(void **)&(this->ToggleFullscreenDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToggleFullscreenDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TickDelegate).field_0x8,*(int *)&(this->TickDelegate).field_0x10);
  pvVar7 = *(void **)&(this->TickDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TickDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EndDrawDelegate).field_0x8,*(int *)&(this->EndDrawDelegate).field_0x10);
  pvVar7 = *(void **)&(this->EndDrawDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EndDrawDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DrawnDelegate).field_0x8,*(int *)&(this->DrawnDelegate).field_0x10);
  pvVar7 = *(void **)&(this->DrawnDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DrawnDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BeginDrawDelegate).field_0x8,*(int *)&(this->BeginDrawDelegate).field_0x10);
  pvVar7 = *(void **)&(this->BeginDrawDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BeginDrawDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PlayerRemovedDelegate).field_0x8,
             *(int *)&(this->PlayerRemovedDelegate).field_0x10);
  pvVar7 = *(void **)&(this->PlayerRemovedDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlayerRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PlayerAddedDelegate).field_0x8,*(int *)&(this->PlayerAddedDelegate).field_0x10
            );
  pvVar7 = *(void **)&(this->PlayerAddedDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PlayerAddedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WindowCloseRequestedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CloseRequestedDelegate).field_0x8,
             *(int *)&(this->CloseRequestedDelegate).field_0x10);
  pvVar7 = *(void **)&(this->CloseRequestedDelegate).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CloseRequestedDelegate);
  *(undefined4 *)&(this->CursorWidgets).field_0x48 = 0;
  pvVar7 = *(void **)&(this->CursorWidgets).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CursorWidgets);
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HardwareCursors).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HardwareCursors);
  *(undefined4 *)&(this->HardwareCursorCache).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HardwareCursorCache).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HardwareCursorCache);
  pTVar8 = (this->HighResScreenshotDialog).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  pTVar8 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  pTVar8 = (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  pTVar8 = (this->Window).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  FVar9 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&this->AudioDevice);
  DestructItems<FSplitscreenData,int>
            ((FSplitscreenData *)(this->SplitscreenInfo).AllocatorInstance.Data,
             (this->SplitscreenInfo).ArrayNum);
  pFVar5 = (this->SplitscreenInfo).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->DebugProperties).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FExec::~FExec((FExec *)&this->_padding_);
  UScriptViewportClient::~UScriptViewportClient((UScriptViewportClient *)this);
  return;
}

// operator() @ 147c33520

bool __thiscall
`UGameViewportClient::LoadAvailableCursorPngs'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UGameViewportClient::FPngFileData,1> *param_1,
          TSharedPtr<UGameViewportClient::FPngFileData,1> *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1->Object == (FPngFileData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  dVar1 = param_1->Object->ScaleFactor;
  if (param_2->Object == (FPngFileData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return dVar1 < param_2->Object->ScaleFactor;
}

// Activated @ 147c34ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::Activated
          (UGameViewportClient *this,FViewport *param_1,FWindowActivateEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147c34ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe8))();
  return;
}

// AddCursorWidget @ 147c34f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddCursorWidget(UGameViewportClient *this,Type param_1,UUserWidget *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (param_2 != (UUserWidget *)0x0) {
    pTVar1 = UWidget::TakeWidget((UWidget *)param_2,&local_18);
    local_28.Object = pTVar1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetSoftwareCursorWidget(this,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// AddDebugDisplayProperty @ 147c34fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddDebugDisplayProperty
          (UGameViewportClient *this,UObject *param_1,TSubclassOf<UObject> param_2,FName *param_3,
          bool param_4)

{
  int *piVar1;
  FName FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->DebugProperties).AllocatorInstance.Data;
  iVar3 = (this->DebugProperties).ArrayNum;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((this->DebugProperties).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      iVar3 = (this->DebugProperties).ArrayNum;
      piVar1 = &(this->DebugProperties).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
      }
      (this->DebugProperties).ArrayNum = iVar3 + 1;
      pFVar4 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
      DefaultConstructItems<FDebugDisplayProperty,int>(pFVar4,1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      *(UObject **)pFVar4 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
      }
      *(undefined8 *)(pFVar4 + 8) = *(undefined8 *)param_2.Class.field0_0x0;
      FVar2 = *param_3;
      *(uint *)(pFVar4 + 0x18) = *(uint *)(pFVar4 + 0x18) & 0xfffffffe;
      *(FName *)(pFVar4 + 0x10) = FVar2;
      *(uint *)(pFVar4 + 0x18) = *(uint *)(pFVar4 + 0x18) | (uint)param_4;
      return;
    }
    if (*(UObject **)pFVar4 == (UObject *)0x0) {
      bVar6 = param_1 == (UObject *)0x0;
    }
    else {
      bVar6 = *(UObject **)pFVar4 == param_1;
    }
    if ((bVar6) && (*(FName *)(pFVar4 + 0x10) == *param_3)) break;
    pFVar4 = pFVar4 + 0x20;
  }
  return;
}

// AddGameLayerWidget @ 147c350e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddGameLayerWidget
          (UGameViewportClient *this,TSharedRef<SWidget,1> *param_1,int param_2)

{
  IGameLayerManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c35113;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pIVar1 = (this->GameLayerManagerPtr).Object;
    if (pIVar1 != (IGameLayerManager *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x60);
      local_18 = param_1->Object;
      local_10 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pIVar1,&local_18);
    }
  }
LAB_147c35113:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddSoftwareCursor @ 147c351c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddSoftwareCursor
          (UGameViewportClient *this,Type param_1,FSoftClassPath *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  FString *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  UUserWidget *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  FMessageLog *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  int iVar11;
  bool bVar12;
  Type aTStackX_18 [2];
  FName FStackX_20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> TStack_208;
  FString FStack_1f8;
  FString FStack_1e8;
  UClass *pUStack_1d8;
  FName FStack_1d0;
  FName FStack_1c8;
  FName FStack_1c0;
  FScriptContainerElement *pFStack_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *pwStack_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TSharedPtr<SWidget,1> TStack_198;
  FTextFormat FStack_188;
  FText FStack_178;
  FFormatArgumentValue FStack_168;
  TStringView<wchar_t> TStack_148;
  TStringView<wchar_t> TStack_138;
  FString FStack_128;
  TSharedRef<SWidget,1> TStack_118;
  FString FStack_108;
  TSharedRef<FTokenizedMessage,1> TStack_f8;
  FText FStack_e8;
  TSharedRef<FTokenizedMessage,1> TStack_d8;
  FText FStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  FText FStack_a8;
  FTextFormat FStack_98;
  FMessageLog FStack_88;
  FMessageLog FStack_58;
  
  iVar11 = 0;
  aTStackX_18[0] = None;
  if (*(longlong *)param_2 == 0) {
    ::FName::FName(&FStack_1c0,"PIE");
    pFVar7 = FMessageLog::FMessageLog(&FStack_58,&FStack_1c0);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&FStack_c8,L"GameViewport",L"SetSoftwareCursorFromClassPath:InvalidClass",
                        L"UGameViewportClient::SetSoftwareCursorFromClassPath: Invalid class specified."
                       );
    FMessageLog::Warning(pFVar7,&TStack_d8,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_d8.SharedReferenceCount.ReferenceController);
    if (FStack_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_c8.TextData.Reference + 0x10))();
    }
    pFVar7 = &FStack_58;
    goto LAB_147c81cff;
  }
  pwStack_1a8 = (wchar_t *)0x0;
  iStack_1a0 = 0;
  pFVar3 = FSoftObjectPath::ToString((FSoftObjectPath *)param_2,&FStack_128);
  if ((pFVar3->Data).ArrayNum == 0) {
    pFStack_1b8 = (FScriptContainerElement *)0x15060d16c;
LAB_147c8194c:
    sVar4 = wcslen((wchar_t *)pFStack_1b8);
    iVar11 = (int)sVar4;
  }
  else {
    pFStack_1b8 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFStack_1b8 != (FScriptContainerElement *)0x0) goto LAB_147c8194c;
  }
  iStack_1b0 = iVar11;
  pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
  TStack_148._12_4_ = uStack_19c;
  TStack_148.Size = iStack_1a0;
  TStack_138._12_4_ = uStack_1ac;
  TStack_138.Size = iStack_1b0;
  TStack_148.DataPtr = pwStack_1a8;
  TStack_138.DataPtr = (wchar_t *)pFStack_1b8;
  pUStack_1d8 = StaticLoadClass(pUVar5,(UObject *)0x0,&TStack_138,&TStack_148,0,(UPackageMap *)0x0);
  if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
  }
  if (pUStack_1d8 != (UClass *)0x0) {
    FStackX_20.ComparisonIndex.Value = 0;
    FStackX_20.Number = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUStack_1d8);
    }
    this_00 = CreateWidget<UUserWidget,UGameInstance_*>
                        ((this->GameInstance).field0_0x0.DebugPtr,
                         (TSubclassOf<UUserWidget>)&pUStack_1d8,FStackX_20);
    if (this_00 != (UUserWidget *)0x0) {
      pTVar6 = UWidget::TakeWidget((UWidget *)this_00,&TStack_118);
      TStack_198.Object = pTVar6->Object;
      TStack_198.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (TStack_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SetSoftwareCursorWidget(this,param_1,&TStack_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_118.SharedReferenceCount.ReferenceController);
      return;
    }
    if (*(int *)&(this->CursorWidgets).field_0x8 == *(int *)&(this->CursorWidgets).field_0x34) {
      return;
    }
    aTStackX_18[0] = param_1;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EMouseCursor::Type>(&this->CursorWidgets,param_1,aTStackX_18);
    return;
  }
  ::FName::FName(&FStack_1d0,"PIE");
  pFVar7 = FMessageLog::FMessageLog(&FStack_88,&FStack_1d0);
  FStack_1c8.ComparisonIndex.Value = *(uint *)&param_2->field_0x8;
  FStack_1c8.Number = *(uint *)&param_2->field_0xc;
  uStack_b8 = *(undefined8 *)param_2;
  uStack_b0 = *(undefined8 *)&param_2->field_0x8;
  bVar12 = FStack_1c8 != (FName)0x0;
  if (bVar12) {
    pFVar3 = ::FName::ToString(&FStack_1c8,&FStack_108);
  }
  else {
    FStack_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = &FStack_1f8;
    FStack_1f8.Data.ArrayNum = 0;
    FStack_1f8.Data.ArrayMax = 0;
  }
  FStack_1e8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_1e8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  FStack_1e8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if ((bVar12) && (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
  }
  if ((!bVar12) && (FStack_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_1f8.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::FromString(&FStack_a8,&FStack_1e8);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_e8,L"GameViewport",L"SetSoftwareCursorFromClassPath:LoadFailed",
                      L"UGameViewportClient::SetSoftwareCursorFromClassPath: Could not load cursor class \'{0}\'."
                     );
  pFVar10 = FTextFormat::FTextFormat(&FStack_98,pFVar9,Default);
  FStack_168.Type = Text;
  FText::FText((FText *)&FStack_168.TextValue,pFVar8);
  if ((FStack_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TStack_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_208.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&TStack_208.AllocatorInstance,1,&TStack_208.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (TStack_208.AllocatorInstance.Data,&FStack_168,1);
  FStack_188.TextFormatData.Object = (pFVar10->TextFormatData).Object;
  FStack_188.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
  if (FStack_188.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_188.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(FStack_188.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&FStack_178,&FStack_188,&TStack_208);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)TStack_208.AllocatorInstance.Data,TStack_208.ArrayNum);
  if ((FFormatArgumentValue *)TStack_208.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(TStack_208.AllocatorInstance.Data);
  }
  if (FStack_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)FStack_168.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar8->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FMessageLog::Warning(pFVar7,&TStack_f8,&FStack_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_f8.SharedReferenceCount.ReferenceController);
  if (FStack_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_178.TextData.Reference + 0x10))();
  }
  if (FStack_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_e8.TextData.Reference + 0x10))();
  }
  if (FStack_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data.AllocatorInstance.Data);
  }
  pFVar7 = &FStack_88;
LAB_147c81cff:
  FMessageLog::~FMessageLog(pFVar7);
  return;
}

// AddSoftwareCursorFromSlateWidget @ 147c351d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddSoftwareCursorFromSlateWidget
          (UGameViewportClient *this,Type param_1,TSharedPtr<SWidget,1> *param_2)

{
  SWidget *pSVar1;
  TSharedPtr<SWidget,1> local_18;
  
  pSVar1 = param_2->Object;
  if (pSVar1 != (SWidget *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pSVar1;
    SetSoftwareCursorWidget(this,param_1,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddViewportWidgetContent @ 147c35220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddViewportWidgetContent
          (UGameViewportClient *this,TSharedRef<SWidget,1> *param_1,int param_2)

{
  SOverlay *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FScopedWidgetSlotArguments *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 auStackY_f8 [32];
  SWidget *local_c8;
  FSharedReferencer<1> local_c0;
  FScopedWidgetSlotArguments local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar5 = (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c35270;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->ViewportOverlayWidget).Object;
    if (this_00 != (SOverlay *)0x0) {
      pFVar4 = SOverlay::AddSlot(this_00,&local_b8,param_2);
      local_c0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
      local_c8 = param_1->Object;
      if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((SWidget **)&pFVar4->_padding_ != &local_c8) {
        pFVar4->_padding_ = (longlong)local_c8;
        local_c8 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar4->_padding_,&local_c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.ReferenceController);
      TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::
      ~FScopedWidgetSlotArguments(&local_b8);
      goto LAB_147c3529d;
    }
  }
LAB_147c35270:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6788966895396582143>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                     ,0xd01,"PinnedViewportOverlayWidget.IsValid()");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_147c3529d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddViewportWidgetForPlayer @ 147c35350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::AddViewportWidgetForPlayer
          (UGameViewportClient *this,ULocalPlayer *param_1,TSharedRef<SWidget,1> *param_2,
          int param_3)

{
  IGameLayerManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined4 in_register_0000008c;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6788966895396582123>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                       ,0xd15,"Player");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pTVar6 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_147c353c2;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar4 = aVar3 == aVar5;
        if (bVar4) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar4);
      pIVar1 = (this->GameLayerManagerPtr).Object;
      if (pIVar1 != (IGameLayerManager *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
        local_18 = param_2->Object;
        local_10 = (param_2->SharedReferenceCount).ReferenceController;
        if (local_10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,(char)param_1,&local_18,CONCAT44(in_register_0000008c,param_3));
      }
    }
LAB_147c353c2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BeginDestroy @ 147c38180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::BeginDestroy(UGameViewportClient *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_00;
  
  uVar1 = (this->AudioDeviceDestroyedHandle).ID;
  if (uVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
    uVar6 = 0;
    if (0 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (ForAnyElementType *)
                  (FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._40_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                     &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed._48_4_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed);
    (this->AudioDeviceDestroyedHandle).ID = 0;
  }
  FAudioDeviceHandle::Reset(&this->AudioDevice);
  RemoveAllViewportWidgets(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CalculateDeadZoneForAllSides @ 147c3a680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
UGameViewportClient::CalculateDeadZoneForAllSides
          (UGameViewportClient *this,ULocalPlayer *param_1,UCanvas *param_2,float *param_3,
          float *param_4,float *param_5,float *param_6,bool param_7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  FSlateApplication *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float local_res10;
  float local_res14;
  FMargin local_48 [3];
  
  local_48[0].Left = 0.0;
  local_48[0].Top = 0.0;
  local_48[0].Right = 0.0;
  local_48[0].Bottom = 0.0;
  if (param_1 == (ULocalPlayer *)0x0) {
    return false;
  }
  uVar3 = ConvertLocalPlayerToGamePlayerIndex(this,param_1);
  if (uVar3 == 0xffffffff) {
    return false;
  }
  bVar1 = (this->ActiveSplitscreenType).Value;
  switch(bVar1) {
  case 0:
  case 2:
  case 5:
  case 8:
    bVar4 = true;
    break;
  case 1:
  case 3:
  case 6:
  case 9:
    bVar4 = uVar3 == 0;
    break;
  case 4:
  case 7:
    bVar4 = (int)uVar3 < 2;
    break;
  default:
    bVar4 = false;
    if (bVar1 < 10) break;
    bVar2 = false;
    if (bVar1 < 10) goto LAB_147c3a747;
    bVar5 = false;
    goto LAB_147c3a782;
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  default:
    bVar2 = true;
    break;
  case 1:
  case 3:
    bVar2 = 0 < (int)uVar3;
    break;
  case 4:
  case 6:
  case 7:
    bVar2 = 1 < (int)uVar3;
    break;
  case 9:
    bVar2 = 2 < (int)uVar3;
    goto switchD_147c3a755_caseD_0;
  }
LAB_147c3a747:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  default:
switchD_147c3a755_caseD_0:
    bVar5 = true;
    break;
  case 2:
  case 5:
  case 8:
    bVar5 = uVar3 == 0;
    break;
  case 3:
    bVar5 = (int)uVar3 < 2;
    goto switchD_147c3a796_caseD_3;
  case 4:
  case 7:
    bVar5 = (uVar3 & 0xfffffffd) == 0;
  }
LAB_147c3a782:
  switch(bVar1) {
  case 0:
  case 1:
  case 6:
  case 9:
    bVar6 = true;
    break;
  case 2:
  case 4:
    bVar6 = 0 < (int)uVar3;
    break;
  case 3:
switchD_147c3a796_caseD_3:
    bVar6 = uVar3 != 1;
    break;
  case 5:
    bVar6 = uVar3 == 2;
    break;
  case 7:
    bVar6 = (uVar3 - 1 & 0xfffffffd) == 0;
    break;
  case 8:
    bVar6 = uVar3 == 3;
    break;
  default:
    bVar6 = false;
  }
  if ((((!bVar4) && (!bVar2)) && (!bVar5)) && (!bVar6)) {
    return false;
  }
  fVar7 = local_res10;
  fVar8 = local_res10;
  switch(bVar1) {
  case 0:
    fVar7 = param_2->ClipX;
    fVar8 = param_2->ClipY;
    break;
  case 1:
    fVar7 = param_2->ClipX;
    fVar8 = param_2->ClipY + param_2->ClipY;
    break;
  case 2:
    fVar7 = param_2->ClipX + param_2->ClipX;
    fVar8 = param_2->ClipY;
    break;
  case 3:
    goto LAB_147c3a83d;
  case 4:
    uVar3 = uVar3 - 2;
LAB_147c3a83d:
    fVar7 = param_2->ClipX;
    if (uVar3 != 0) {
      fVar7 = fVar7 + fVar7;
    }
    fVar8 = param_2->ClipY + param_2->ClipY;
    break;
  case 5:
    fVar7 = param_2->ClipX * __real_40400000;
    fVar8 = param_2->ClipY;
    break;
  case 6:
    fVar7 = param_2->ClipX;
    fVar8 = param_2->ClipY * __real_40400000;
    break;
  case 7:
    fVar7 = param_2->ClipX + param_2->ClipX;
    fVar8 = param_2->ClipY + param_2->ClipY;
    break;
  case 8:
    fVar7 = param_2->ClipX * __real_40800000;
    fVar8 = param_2->ClipY;
    break;
  case 9:
    fVar7 = param_2->ClipX;
    fVar8 = param_2->ClipY * __real_40800000;
  }
  this_00 = FSlateApplication::Get();
  local_res10 = fVar7;
  local_res14 = fVar8;
  FSlateApplicationBase::GetSafeZoneSize
            ((FSlateApplicationBase *)this_00,local_48,(FDeprecateVector2DParameter *)&local_res10);
  if (bVar4) {
    *param_3 = local_48[0].Top;
  }
  else {
    *param_3 = 0.0;
  }
  if (bVar2) {
    *param_4 = local_48[0].Bottom;
  }
  else {
    *param_4 = 0.0;
  }
  if (bVar5) {
    *param_5 = local_48[0].Left;
  }
  else {
    *param_5 = 0.0;
  }
  if (bVar6) {
    *param_6 = local_48[0].Right;
  }
  else {
    *param_6 = 0.0;
  }
  return true;
}

// CalculateSafeZoneValues @ 147c3aa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
UGameViewportClient::CalculateSafeZoneValues
          (UGameViewportClient *this,FMargin *param_1,UCanvas *param_2,int param_3,bool param_4)

{
  FSlateApplication *this_00;
  float fVar1;
  float fVar2;
  float local_res8;
  float local_resc;
  
  fVar1 = local_res8;
  fVar2 = local_res8;
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
    fVar1 = param_2->ClipX;
    fVar2 = param_2->ClipY;
    break;
  case '\x01':
    fVar1 = param_2->ClipX;
    fVar2 = param_2->ClipY + param_2->ClipY;
    break;
  case '\x02':
    fVar1 = param_2->ClipX + param_2->ClipX;
    fVar2 = param_2->ClipY;
    break;
  case '\x03':
    goto LAB_147c3aad4;
  case '\x04':
    param_3 = param_3 + -2;
LAB_147c3aad4:
    fVar1 = param_2->ClipX;
    if (param_3 != 0) {
      fVar1 = fVar1 + fVar1;
    }
    fVar2 = param_2->ClipY + param_2->ClipY;
    break;
  case '\x05':
    fVar1 = param_2->ClipX * __real_40400000;
    fVar2 = param_2->ClipY;
    break;
  case '\x06':
    fVar1 = param_2->ClipX;
    fVar2 = param_2->ClipY * __real_40400000;
    break;
  case '\a':
    fVar1 = param_2->ClipX + param_2->ClipX;
    fVar2 = param_2->ClipY + param_2->ClipY;
    break;
  case '\b':
    fVar1 = param_2->ClipX * __real_40800000;
    fVar2 = param_2->ClipY;
    break;
  case '\t':
    fVar1 = param_2->ClipX;
    fVar2 = param_2->ClipY * __real_40800000;
  }
  this_00 = FSlateApplication::Get();
  local_res8 = fVar1;
  local_resc = fVar2;
  FSlateApplicationBase::GetSafeZoneSize
            ((FSlateApplicationBase *)this_00,param_1,(FDeprecateVector2DParameter *)&local_res8);
  return;
}

// CaptureMouseOnLaunch @ 147c3b8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::CaptureMouseOnLaunch(UGameViewportClient *this)

{
  UClass *this_00;
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    return (bool)((byte)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 >> 5 & 1);
  }
  return false;
}

// CloseRequested @ 147c3da50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::CloseRequested(UGameViewportClient *this,FViewport *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *this_00;
  FName *pFVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  FViewportFrame *pFVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  atomic<int> aVar14;
  int iVar15;
  FSlateApplication *this_01;
  uint uVar16;
  FName FVar17;
  FName this_02;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  FName local_48 [2];
  FDestructionSentinel local_38;
  
  if ((param_1 != *(FViewport **)&(this->EngineShowFlags).field_0x10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InViewport == Viewport",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0xa6b,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_01 = FSlateApplication::Get();
  FSlateApplication::SetGameIsFakingTouchEvents(this_01,false,(TVector2<double> *)0x0);
  this_00 = &(this->CursorWidgets).field_0x28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->CursorWidgets).field_0x44;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar10 = false;
  uVar16 = *(int *)&(this->CursorWidgets).field_0x38 - 1;
  if (-1 < (int)uVar16) {
    lVar18 = (longlong)(int)uVar16 << 4;
    bVar10 = false;
    do {
      uVar13 = 0;
      if ((int)uVar16 < *(int *)&(this->CursorWidgets).field_0x38) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)&(this->CursorWidgets).field_0x30;
      if (((*(int *)(lVar5 + 8 + lVar18) == 0) ||
          (plVar6 = *(longlong **)(lVar5 + lVar18), plVar6 == (longlong *)0x0)) ||
         (cVar12 = (**(code **)(*plVar6 + 0x68))(), cVar12 == '\0')) {
        bVar10 = true;
      }
      lVar18 = lVar18 + -0x10;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  puVar1 = &(this->CursorWidgets).field_0x44;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar10) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x328))
            (&this[-1].OnInputAxisEvent.field_0x8,0);
  pTVar19 = *(TReferenceControllerBase<1> **)&this->AudioDeviceHandle;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar19->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c3dbd5;
      }
      LOCK();
      aVar14 = pTVar19->SharedReferenceCount;
      bVar10 = aVar9 == aVar14;
      if (bVar10) {
        pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar14 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar14;
    } while (!bVar10);
    pFVar7 = this->ViewportFrame;
    if (pFVar7 != (FViewportFrame *)0x0) {
      (**(code **)*pFVar7)(pFVar7,0);
    }
  }
LAB_147c3dbd5:
  pFVar3 = &this->CurrentBufferVisualizationMode;
  if (((*pFVar3 == (FName)0x0) || (this->CurrentNaniteVisualizationMode == (FName)0x0)) ||
     (*(int *)((longlong)this->CurrentNaniteVisualizationMode + 8) < 1)) goto LAB_147c3dca6;
  FVar17 = this->CurrentNaniteVisualizationMode;
  this_02.ComparisonIndex.Value = 0;
  this_02.Number = 0;
  if (FVar17 == (FName)0x0) {
LAB_147c3dc34:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    iVar4 = *(int *)((longlong)FVar17 + 8);
    do {
      if (iVar4 == 0) {
        FVar17.ComparisonIndex.Value = 0;
        FVar17.Number = 0;
        goto LAB_147c3dc34;
      }
      LOCK();
      iVar15 = *(int *)((longlong)FVar17 + 8);
      bVar10 = iVar4 == iVar15;
      if (bVar10) {
        *(int *)((longlong)FVar17 + 8) = iVar4 + 1;
        iVar15 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar15;
    } while (!bVar10);
    this_02 = *pFVar3;
    if (this_02 == (FName)0x0) goto LAB_147c3dc34;
  }
  SWindow::RequestDestroyWindow((SWindow *)this_02);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar17);
  if (pFVar3 != local_48) {
    FVar17 = this->CurrentNaniteVisualizationMode;
    pFVar3->ComparisonIndex = 0;
    pFVar3->Number = 0;
    (this->CurrentNaniteVisualizationMode).ComparisonIndex = 0;
    (this->CurrentNaniteVisualizationMode).Number = 0;
    if (FVar17 != (FName)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)FVar17 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)FVar17 + 8))(FVar17,1);
      }
    }
  }
LAB_147c3dca6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// ConsoleCommand @ 147c3ec80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UGameViewportClient::ConsoleCommand
          (UGameViewportClient *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  TObjectPtr<UConsole>_u_0 TVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FString local_58;
  FOutputDevice local_48;
  FString local_38;
  TObjectPtr<UConsole>_u_0 local_28;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (1000 < iVar4) {
    iVar4 = 1000;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  if (iVar1 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_58,pwVar6,iVar8);
  TVar2 = (this->ViewportConsole).field0_0x0;
  ::FString::FString(&local_38,L"");
  FOutputDevice::FOutputDevice(&local_48);
  local_48._padding_ = (longlong)&___7FConsoleOutputDevice__6B_;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_48.bAutoEmitLineTerminator = false;
  pcVar3 = *(code **)(this->_padding_ + 8);
  local_28 = TVar2;
  uVar5 = (**(code **)(this->_padding_ + 0x180))(this);
  (*pcVar3)(&this->_padding_,uVar5,FVar7.Data,&local_48);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar7.Data);
  FOutputDevice::~FOutputDevice(&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertLocalPlayerToGamePlayerIndex @ 147c3f0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UGameViewportClient::ConvertLocalPlayerToGamePlayerIndex
          (UGameViewportClient *this,ULocalPlayer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  UEngine *this_00;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UEngine *)this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    this_00 = (UEngine *)0x0;
  }
  pTVar5 = UEngine::GetGamePlayers(this_00,this);
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  pFVar6 = pFVar1;
  while( true ) {
    if (pFVar6 == pFVar1 + (longlong)pTVar5->ArrayNum * 8) {
      return -1;
    }
    if (*(ULocalPlayer **)pFVar6 == param_1) break;
    pFVar6 = pFVar6 + 8;
  }
  return (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
}

// CreateGameViewport @ 147c407f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneViewport * __thiscall
UGameViewportClient::CreateGameViewport(UGameViewportClient *this,TSharedPtr<SViewport,1> *param_1)

{
  FSceneViewport *pFVar1;
  FViewportClient *pFVar2;
  TSharedPtr<SViewport,1> local_18;
  
  pFVar1 = ::operator_new(0x328);
  if (pFVar1 == (FSceneViewport *)0x0) {
    pFVar1 = (FSceneViewport *)0x0;
  }
  else {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2 = (FViewportClient *)&this->_padding_;
    if (this == (UGameViewportClient *)0x0) {
      pFVar2 = (FViewportClient *)0x0;
    }
    pFVar1 = FSceneViewport::FSceneViewport(pFVar1,pFVar2,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar1;
}

// Deactivated @ 147c41800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::Deactivated
          (UGameViewportClient *this,FViewport *param_1,FWindowActivateEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147c41803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe0))();
  return;
}

// DetachViewportClient @ 147c42670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameViewportClient::DetachViewportClient(UGameViewportClient *this)

{
  FUObjectItem *this_00;
  
  (this->ViewportConsole).field0_0x0.DebugPtr = (UConsole *)0x0;
  ResetHardwareCursorStates(this);
  RemoveAllViewportWidgets(this);
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this_00,RootSet);
  return;
}

// Draw @ 147c48b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UGameViewportClient::Draw(UGameViewportClient *this,FViewport *param_1,FCanvas *param_2)

{
  FWN_SceneTexturesCaptureInfo **ppFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  void *pvVar4;
  TSharedRef<ISceneViewExtension,1> *pTVar5;
  ISceneViewExtension *pIVar6;
  FScriptContainerElement *pFVar7;
  IDynamicResolutionState *pIVar8;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar9;
  FBudget *pFVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FFXSystemInterface *pFVar13;
  ULocalPlayer *pUVar14;
  FSceneView *pFVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  bool bVar20;
  atomic<int> aVar21;
  float fVar22;
  GenericApplication *pGVar23;
  FSharedReferencer<1> FVar24;
  TConsoleVariableData<int> *pTVar25;
  TConsoleVariableData<float> *pTVar26;
  TUniquePtr<FWN_SceneTexturesCaptureController,TDefaultDelete<FWN_SceneTexturesCaptureController>_>
  TVar27;
  UEngine *pUVar28;
  UCanvas *pUVar29;
  FWeakObjectPtr FVar30;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar31;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar32;
  FName FVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  char cVar38;
  bool bVar39;
  bool bVar40;
  EShaderPlatform EVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  atomic<int> aVar46;
  FCanvas *pFVar47;
  IXRTrackingSystem *pIVar48;
  longlong lVar49;
  longlong *plVar50;
  undefined8 *puVar51;
  UWorld *pUVar52;
  FEngineShowFlags *pFVar53;
  ConstructionValues *pCVar54;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar55;
  ulonglong uVar56;
  FBufferVisualizationData *this_00;
  UMaterialInterface *pUVar57;
  FString *pFVar58;
  FName FVar59;
  float *pfVar60;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar61;
  FAudioDeviceManager *this_01;
  TMatrix<double> *pTVar62;
  IStereoRendering *pIVar63;
  FStreamingManagerCollection *this_02;
  uint *puVar64;
  FLegacyScreenPercentageDriver *this_03;
  FLegacyScreenPercentageDriver *pFVar65;
  IRendererModule *pIVar66;
  int *piVar67;
  FName *pFVar68;
  FThreadSafeStaticStat<FStat_STAT_UIDrawingTime> FVar69;
  APlayerController *pAVar70;
  UClass *pUVar71;
  TTuple<ULocalPlayer_*,FSceneView_*> *pTVar72;
  FThreadSafeStaticStat<FStat_STAT_HudTime> FVar73;
  FSubtitleManager *this_04;
  UObject *pUVar74;
  IConsoleManager *pIVar75;
  uint uVar76;
  uint uVar77;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar78;
  uint uVar79;
  EViewStatusForScreenPercentage EVar80;
  wchar_t *pwVar81;
  TReferenceControllerBase<1> *pTVar82;
  uint uVar83;
  ForAnyElementType FVar84;
  TReferenceControllerBase<1> *pTVar85;
  FScriptContainerElement *pFVar86;
  TReferenceControllerBase<1> *pTVar87;
  FViewport *pFVar88;
  longlong lVar89;
  byte bVar90;
  uint uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  ulonglong uVar94;
  ulonglong uVar95;
  float fVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar111;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar112;
  undefined1 in_XMM2 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  double dVar118;
  undefined4 uVar120;
  undefined1 auVar119 [16];
  double dVar121;
  undefined4 uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  double dVar125;
  double dVar126;
  undefined1 auStackY_d48 [32];
  longlong local_ce0;
  char local_cd8;
  FStereoShaderAspects local_cd7;
  undefined1 local_cd6;
  undefined1 local_cd5;
  ELineBatcherType local_cd4 [4];
  uint local_cd0;
  uint local_ccc;
  UWorld *local_cc8;
  FWN_SceneTexturesCaptureInfo *local_cb8;
  FSharedReferencer<1> FStack_cb0;
  FCanvas *local_ca8;
  FViewport *local_ca0;
  FName local_c98;
  ForAnyElementType local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  FName local_c78;
  longlong *local_c70;
  UCanvas *local_c68;
  undefined8 local_c60;
  FName local_c58;
  UCanvas *local_c50;
  FCanvas *local_c48;
  FName local_c40;
  FWeakObjectPtr local_c38;
  FWeakObjectPtr local_c30;
  FColor_u_0 local_c28;
  FColor_u_0 local_c24;
  FString local_c20;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_c10;
  wchar_t *local_c00;
  int local_bf8;
  undefined8 local_bf0;
  FName local_be8;
  FName local_be0;
  FName local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  TReferenceControllerBase<1> *local_bc0;
  double local_bb8;
  double dStack_bb0;
  double local_ba8;
  FName local_ba0;
  FName local_b90;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_b80;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_b70;
  TIntRect<int>_u_0 local_b60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b50;
  FStaticResolutionFractionHeuristic local_b30;
  longlong *local_b08;
  undefined1 auStack_b00 [16];
  uint uStack_af0;
  uint uStack_aec;
  int local_ae8;
  undefined4 uStack_ae4;
  TConsoleVariableData<bool> *local_ae0;
  FWN_SceneTexturesCaptureInfo *local_ad8;
  FSharedReferencer<1> FStack_ad0;
  undefined8 local_ac8;
  FSharedReferencer<1> local_ac0;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_ab8;
  TPairInitializer<ULocalPlayer_*_const_&,FSceneView_*_const_&> local_aa8;
  FSetContext local_a98;
  UObject *local_a78;
  undefined8 local_a70;
  longlong **local_a68;
  longlong *local_a60;
  TArrayView<UWorld::ELineBatcherType_const_,int> local_a58;
  double local_a48;
  double dStack_a40;
  double local_a38;
  double dStack_a30;
  FSceneViewExtensionContext local_a28;
  TRotator<double> local_a08;
  TVector<double>_u_0 local_9f0;
  TOptional<UE::FTimeout_const_> local_9d8;
  ulonglong uStack_9c0;
  undefined8 uStack_9b8;
  undefined1 local_9a8 [8];
  undefined1 local_9a0 [8];
  undefined1 local_998 [8];
  undefined1 local_990 [8];
  undefined1 local_988 [8];
  undefined1 local_980 [8];
  FName local_978 [2];
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_968;
  FString local_958;
  FName local_948;
  undefined1 local_940 [8];
  undefined1 local_938 [16];
  double local_928;
  double local_920;
  double dStack_918;
  double local_910;
  TVector<double>_u_0 local_908;
  undefined1 local_8e8 [8];
  undefined1 local_8e0 [8];
  longlong local_8d8;
  longlong lStack_8d0;
  longlong local_8c8;
  undefined1 local_8c0 [8];
  TVector<double> local_8b8;
  TVector<double> local_8a0;
  double local_888;
  double dStack_880;
  double local_878;
  undefined1 local_870 [24];
  FEngineShowFlags local_858;
  FEngineShowFlags local_818;
  TMatrix<double> local_7d8;
  undefined1 local_758 [32];
  undefined8 local_738;
  int local_730;
  undefined4 local_72c;
  undefined4 local_728;
  int local_724;
  ForElementType<FSetElementId> local_718;
  int local_710;
  FSceneViewFamily local_708;
  TTransform<double> local_548;
  undefined1 local_4e8 [80];
  double local_498;
  double dStack_490;
  double local_488;
  double local_480;
  double local_478;
  double dStack_470;
  undefined1 local_468 [80];
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  FEngineShowFlags local_3e8;
  FDynamicResolutionStateInfos local_3a8;
  ConstructionValues local_178;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_d48;
  local_ccc = 0;
  local_ca8 = param_2;
  local_ca0 = param_1;
  local_c98 = (FName)this;
  if ((param_2 == (FCanvas *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneCanvas",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x5af,L""), bVar34)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((GEngine == (UEngine *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x5b0,L""), bVar34)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->PlayerAddedDelegate).field_0x10);
  bVar34 = UEngine::IsStereoscopic3D(GEngine,param_1);
  pFVar47 = (FCanvas *)(**(code **)(param_1->_padding_ + 0x160))(param_1);
  lVar89 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_c48 = pFVar47;
  if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CanvasObjectName,L"CanvasObject");
    _Init_thread_footer(&::_TSS0);
  }
  local_c50 = GetCanvasByName(CanvasObjectName);
  local_c50->Canvas = param_2;
  (**(code **)(param_1->_padding_ + 0x28))(param_1,&local_c60);
  if ((bVar34) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) {
    pIVar48 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    lVar49 = (**(code **)((longlong)*pIVar48 + 0x118))(pIVar48);
    if (lVar49 != 0) {
      pIVar48 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      plVar50 = (longlong *)(**(code **)((longlong)*pIVar48 + 0x118))(pIVar48);
      puVar51 = (undefined8 *)(**(code **)(*plVar50 + 0xd8))(plVar50,local_990);
      local_c60 = *puVar51;
    }
  }
  if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&DebugCanvasObjectName,L"DebugCanvasObject");
    _Init_thread_footer(&::_TSS1);
  }
  local_c68 = GetCanvasByName(DebugCanvasObjectName);
  UCanvas::Init(local_c68,(int)local_c60,local_c60._4_4_,(FSceneView *)0x0,pFVar47);
  if (pFVar47 != (FCanvas *)0x0) {
    pFVar47->bScaledToRenderTarget = bVar34;
    pFVar47->bStereoRendering = bVar34;
  }
  if (param_2 != (FCanvas *)0x0) {
    param_2->bScaledToRenderTarget = bVar34;
    param_2->bStereoRendering = bVar34;
  }
  pUVar52 = (UWorld *)
            (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x180))
                      (&this[-1].OnInputAxisEvent.field_0x8);
  if (pUVar52 == (UWorld *)0x0) {
    return;
  }
  bVar90 = 0;
  local_cc8 = pUVar52;
  bVar35 = UEngine::IsStereoscopic3D(GEngine,(FViewport *)0x0);
  if (bVar35) {
    EVar41 = FSceneInterface::GetShaderPlatform(pUVar52->Scene);
    UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(&local_cd7,EVar41);
    bVar90 = (byte)local_cd7 >> 1;
  }
  FEngineShowFlags::FEngineShowFlags
            (&local_3e8,(FEngineShowFlags *)&this->bSuppressTransitionMessage);
  if ((*(longlong *)this->_padding_ == 0) &&
     (GWN_SceneTexturesCaptureControllerPtr.Ptr != (FWN_SceneTexturesCaptureController *)0x0)) {
    dVar97 = FWindowsPlatformTime::Seconds();
    TVar27 = GWN_SceneTexturesCaptureControllerPtr;
    if (((GWN_SceneTexturesCaptureControllerPtr.Ptr)->MaxTime <= dVar97 &&
         dVar97 != (GWN_SceneTexturesCaptureControllerPtr.Ptr)->MaxTime) ||
       ((GWN_SceneTexturesCaptureControllerPtr.Ptr)->MaxCount <=
        (GWN_SceneTexturesCaptureControllerPtr.Ptr)->Count)) {
      GWN_SceneTexturesCaptureControllerPtr.Ptr = (FWN_SceneTexturesCaptureController *)0x0;
      pFVar7 = ((TVar27.Ptr)->BaseDirPath).Data.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      FVar3 = ((TVar27.Ptr)->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      ::operator_delete(TVar27.Ptr,0x80);
    }
    else {
      if ((GWN_SceneTexturesCaptureControllerPtr.Ptr)->Interval <=
          dVar97 - (GWN_SceneTexturesCaptureControllerPtr.Ptr)->LastTime) {
        piVar67 = &(GWN_SceneTexturesCaptureControllerPtr.Ptr)->Count;
        (GWN_SceneTexturesCaptureControllerPtr.Ptr)->LastTime = dVar97;
        (TVar27.Ptr)->Count = *piVar67 + 1;
        ::FString::PrintfImpl(&local_c20,L"%s%d/");
        iVar42 = local_c20.Data.ArrayNum;
      }
      else {
        local_c20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c20.Data.ArrayNum = 0;
        local_c20.Data.ArrayMax = 0;
        iVar42 = 0;
      }
      iVar43 = iVar42 + -1;
      if (iVar42 == 0) {
        iVar43 = 0;
      }
      if (0 < iVar43) {
        pcVar16 = *(code **)(this->_padding_ + 0x1e0);
        pFVar53 = FEngineShowFlags::FEngineShowFlags
                            (&local_858,
                             &(GWN_SceneTexturesCaptureControllerPtr.Ptr)->EngineShowFlags);
        (*pcVar16)(this,&local_c20,
                   (GWN_SceneTexturesCaptureControllerPtr.Ptr)->bOverrideEngineShowFalgs,pFVar53);
      }
      if (local_c20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c20.Data.AllocatorInstance.Data);
      }
    }
  }
  local_cb8 = (FWN_SceneTexturesCaptureInfo *)0x0;
  FStack_cb0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  lVar89 = *(longlong *)this->_padding_;
  if (lVar89 != 0) {
    ppFVar1 = (FWN_SceneTexturesCaptureInfo **)(lVar89 + 8);
    if (&local_cb8 != ppFVar1) {
      local_cb8 = *ppFVar1;
      *ppFVar1 = (FWN_SceneTexturesCaptureInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_cb0,(FSharedReferencer<1> *)(lVar89 + 0x10));
    }
    pvVar4 = (void *)this->_padding_;
    this->_padding_ = lVar89;
    local_ad8 = (FWN_SceneTexturesCaptureInfo *)0x0;
    FStack_ad0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (ppFVar1 != &local_ad8) {
      *ppFVar1 = (FWN_SceneTexturesCaptureInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar89 + 0x10),&FStack_ad0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_ad0.ReferenceController);
    if (pvVar4 != (void *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10));
      ::operator_delete(pvVar4,0x18);
    }
  }
  if (local_cb8 != (FWN_SceneTexturesCaptureInfo *)0x0) {
    if ((local_cb8 == (FWN_SceneTexturesCaptureInfo *)0x0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar35)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar43 = (local_cb8->DirectoryPath).Data.ArrayNum;
    iVar42 = iVar43 + -1;
    if (iVar43 == 0) {
      iVar42 = 0;
    }
    if (iVar42 == 0) {
      local_ac0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_cb8 = (FWN_SceneTexturesCaptureInfo *)0x0;
      local_ac8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_cb0,&local_ac0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ac0.ReferenceController);
    }
    if (local_cb8 != (FWN_SceneTexturesCaptureInfo *)0x0) {
      if ((((FWN_SceneTexturesCaptureInfo **)this->_padding_ <= &local_cb8) &&
          (&local_cb8 <
           (FWN_SceneTexturesCaptureInfo **)this->_padding_ +
           (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar42 = (int)this->_padding_;
      piVar67 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar42 == *piVar67) {
        iVar42 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)&this->_padding_,piVar67);
      }
      *(int *)&this->_padding_ = iVar42 + 1;
      lVar89 = this->_padding_;
      *(FWN_SceneTexturesCaptureInfo **)(lVar89 + (longlong)iVar42 * 0x10) = local_cb8;
      *(TReferenceControllerBase<1> **)(lVar89 + 8 + (longlong)iVar42 * 0x10) =
           FStack_cb0.ReferenceController;
      if (FStack_cb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_cb0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_cb0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_cb8 == (FWN_SceneTexturesCaptureInfo *)0x0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar35)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (local_cb8->bOverrideEngineShowFlags != false) {
        FEngineShowFlags::operator=(&local_3e8,&local_cb8->EngineShowFlags);
      }
    }
  }
  pFVar88 = local_ca0;
  local_968.Object = local_cb8;
  local_968.SharedReferenceCount.ReferenceController = FStack_cb0.ReferenceController;
  if (FStack_cb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_cb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_cb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pCVar54 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_178,(FRenderTarget *)local_ca0,pUVar52->Scene,&local_3e8,&local_968);
  uVar79 = *(uint *)&pCVar54->field_0x80 | 2;
  *(uint *)&pCVar54->field_0x80 = ((uint)bVar90 << 5 ^ uVar79) & 0x20 ^ uVar79;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_708,pCVar54);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_178.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_178.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  local_708.DebugDPIScale = (float)(**(code **)(this->_padding_ + 0x1d8))(this);
  pUVar28 = GEngine;
  local_a28.Viewport = pFVar88;
  local_a28._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  local_a28.Scene = (FSceneInterface *)0x0;
  local_a28.bStereoEnabled = true;
  if (((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar35)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar55 = FSceneViewExtensions::GatherActiveExtensions
                      ((pUVar28->ViewExtensions).Object,&local_ab8,&local_a28);
  if (&local_708.ViewExtensions != pTVar55) {
    DestructItems<TSharedRef<ISceneViewExtension,1>,int>
              ((TSharedRef<ISceneViewExtension,1> *)local_708.ViewExtensions.AllocatorInstance.Data,
               local_708.ViewExtensions.ArrayNum);
    uVar79 = pTVar55->ArrayNum;
    pTVar5 = (TSharedRef<ISceneViewExtension,1> *)(pTVar55->AllocatorInstance).Data;
    local_708.ViewExtensions.ArrayNum = uVar79;
    if ((uVar79 == 0) && (local_708.ViewExtensions.ArrayMax == 0)) {
      local_708.ViewExtensions.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar79,local_708.ViewExtensions.ArrayMax,
                 &local_708.ViewExtensions.AllocatorInstance,uVar79,
                 &local_708.ViewExtensions.ArrayMax);
      ConstructItems<TSharedRef<ISceneViewExtension,1>,TSharedRef<ISceneViewExtension,1>,int>
                (local_708.ViewExtensions.AllocatorInstance.Data,pTVar5,uVar79);
    }
  }
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)local_ab8.AllocatorInstance.Data,
             local_ab8.ArrayNum);
  if ((TSharedRef<ISceneViewExtension,1> *)local_ab8.AllocatorInstance.Data !=
      (TSharedRef<ISceneViewExtension,1> *)0x0) {
    FMemory::Free(local_ab8.AllocatorInstance.Data);
  }
  iVar42 = local_708.ViewExtensions.ArrayNum;
  uVar56 = (ulonglong)local_708.ViewExtensions.ArrayNum;
  lVar89 = uVar56 * 0x10;
  FVar84.Data = local_708.ViewExtensions.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar56 != iVar42) {
      local_cd6 = 0;
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_cd6);
    }
    if ((TSharedRef<ISceneViewExtension,1> *)FVar84.Data ==
        (TSharedRef<ISceneViewExtension,1> *)
        (local_708.ViewExtensions.AllocatorInstance.Data + lVar89)) break;
    pTVar85 = (((TSharedRef<ISceneViewExtension,1> *)FVar84.Data)->SharedReferenceCount).
              ReferenceController;
    pIVar6 = ((TSharedRef<ISceneViewExtension,1> *)FVar84.Data)->Object;
    if (pTVar85 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar85->SharedReferenceCount = (atomic<int>)((int)pTVar85->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)*pIVar6)(pIVar6,&local_708);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar85);
    uVar56 = (ulonglong)(uint)local_708.ViewExtensions.ArrayNum;
    FVar84.Data = FVar84.Data + 0x10;
  }
  FVar59.ComparisonIndex.Value = 0;
  FVar59.Number = 0;
  local_cd0 = 0;
  if (bVar34) {
    if ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0) {
      pIVar48 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
      lVar89 = (**(code **)((longlong)*pIVar48 + 0x118))(pIVar48);
      if (lVar89 != 0) {
        pIVar48 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
        plVar50 = (longlong *)(**(code **)((longlong)*pIVar48 + 0x118))(pIVar48);
        (**(code **)(*plVar50 + 0x140))(plVar50,*(undefined8 *)&(this->EngineShowFlags).field_0x10);
      }
    }
    lVar89 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      pwVar81 = FCommandLine::Get();
      bEmulateStereo = FParse::Param(pwVar81,L"emulatestereo");
      _Init_thread_footer(&::_TSS3);
    }
    uVar79 = *(uint *)&(this->AudioDevice).Device;
    uVar76 = (uint)local_708.EngineShowFlags._16_4_ >> 0x18;
    if (bEmulateStereo != false) {
      uVar76 = 1;
    }
    pFVar7 = (this->DebugProperties).AllocatorInstance.Data;
    *(uint *)&(this->AudioDevice).Device = (uVar76 << 0x18 ^ uVar79) & 0x1000000 ^ uVar79;
    if ((pFVar7 != (FScriptContainerElement *)0x0) &&
       (pFVar7[0x188] == (FScriptContainerElement)0x1)) {
      if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        pIVar75 = IConsoleManager::Get();
        StereoMobilePrimaryScalingModeCVar =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar75 + 0xc0))(pIVar75,L"xr.MobilePrimaryScalingMode",1);
        _Init_thread_footer(&::_TSS4);
      }
      if ((StereoMobilePrimaryScalingModeCVar != (IConsoleVariable *)0x0) &&
         (local_cd0 = (**(code **)(*(longlong *)StereoMobilePrimaryScalingModeCVar + 200))(),
         2 < local_cd0)) {
        local_aa8.Value = (FSceneView **)&local_cd0;
        `UGameViewportClient::Draw'::__l73::<lambda_1>::operator()(&local_aa8.Value);
        local_cd0 = 0;
      }
    }
  }
  local_708.ViewMode = *(EViewModeIndex *)&(this->GameInstance).field0_0x0;
  EngineShowFlagOverride(ESFIM_Game,local_708.ViewMode,&local_708.EngineShowFlags,false);
  if ((local_708.EngineShowFlags.VisualizeBuffer != 0) && (bVar35 = AllowDebugViewmodes(), bVar35))
  {
    local_c78.ComparisonIndex.Value = 0;
    local_c78.Number = 0;
    lVar89 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      pIVar75 = IConsoleManager::Get();
      ICVar = (IConsoleVariable *)
              (**(code **)((longlong)*pIVar75 + 0xc0))(pIVar75,L"r.BufferVisualizationTarget",1);
      _Init_thread_footer(&::_TSS5);
    }
    if (ICVar != (IConsoleVariable *)0x0) {
      if ((*(int *)(lVar89 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
        ::FName::FName(&OverviewName,L"Overview");
        _Init_thread_footer(&::_TSS6);
      }
      (**(code **)(*(longlong *)ICVar + 0xd8))(ICVar,&local_c00);
      pwVar81 = L"";
      if (local_bf8 != 0) {
        pwVar81 = local_c00;
      }
      ::FName::FName(&local_c40,pwVar81);
      if (((local_bf8 < 2) || (local_c40 == OverviewName)) || (local_c40 == (FName)0x0)) {
        local_bd0 = 0;
        FVar33 = FVar59;
      }
      else {
        this_00 = GetBufferVisualizationData();
        pUVar57 = FBufferVisualizationData::GetMaterial(this_00,local_c40);
        FVar33 = local_c40;
        if (pUVar57 == (UMaterialInterface *)0x0) {
          if (2 < (byte)LogConsoleResponse._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse)
            ;
          }
          local_c78 = (FName)(this->Window).Object;
          local_be8.ComparisonIndex.Value = 0;
          local_be8.Number = 0;
          pFVar58 = ::FName::GetPlainNameString(&local_c78,&local_958);
          if ((pFVar58->Data).ArrayNum == 0) {
            pwVar81 = L"";
          }
          else {
            pwVar81 = (wchar_t *)(pFVar58->Data).AllocatorInstance.Data;
          }
          local_a98.Tag = local_be8;
          local_a98.Flags = ECVF_SetByCode;
          local_a98.PriorityMode = Set;
          local_a98.TagMode = Set;
          local_a98.MaxPriority = ECVF_SetByConsole;
          local_a98.MinPriority = 0x1000000;
          IConsoleVariable::Set(ICVar,pwVar81,&local_a98);
          FVar33 = local_c78;
          if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.Data.AllocatorInstance.Data);
            FVar33 = local_c78;
          }
        }
      }
      local_c78 = FVar33;
      if (local_c00 != (wchar_t *)0x0) {
        FMemory::Free(local_c00);
      }
    }
    if (local_c78 != (FName)(this->Window).Object) {
      (this->Window).Object = (SWindow *)local_c78;
    }
  }
  bVar35 = false;
  if (((FLegacyScreenPercentageDriver *)local_708.ScreenPercentageInterface !=
       (FLegacyScreenPercentageDriver *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("ViewFamily.GetScreenPercentageInterface() == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x673,
                          L"Some code has tried to set up an alien screen percentage driver, that could be wrong if not supported very well by the RHI."
                         ), bVar36)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  fVar22 = __real_3f800000;
  if ((!bVar34) &&
     (bVar36 = FSceneViewFamily::SupportsScreenPercentage(&local_708),
     pTVar26 = CVarSecondaryScreenPercentage.Ref, bVar36)) {
    bVar36 = IsInParallelGameThread();
    if ((!bVar36) &&
       ((bVar36 = IsInGameThread(), !bVar36 &&
        (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar36)))) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (pTVar26->ShadowedValue[0] <= 0.0) {
      local_708.SecondaryViewFraction =
           FCommonViewportClient::GetDPIDerivedResolutionFraction((FCommonViewportClient *)this);
    }
    else {
      local_708.SecondaryViewFraction = pTVar26->ShadowedValue[0] * __real_3c23d70a;
      if (fVar22 <= local_708.SecondaryViewFraction) {
        local_708.SecondaryViewFraction = fVar22;
      }
    }
    if ((local_708.SecondaryViewFraction <= 0.0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily.SecondaryViewFraction > 0.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                            ,0x686,L""), bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  bVar36 = false;
  bVar39 = false;
  if (local_cd0 != 0) {
    if (local_cd0 == 1) {
      bVar36 = true;
    }
    else if (local_cd0 == 2) {
      bVar36 = true;
      bVar39 = true;
    }
    else {
      bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x69d,L"");
      if (bVar37) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
  }
  if ((local_708.EngineShowFlags.ScreenPercentage != 0) || (bVar36)) {
    DynamicRenderScaling::TMap<float>::TMap<float>(&local_3a8.ResolutionFractionApproximations);
    DynamicRenderScaling::TMap<float>::TMap<float>(&local_3a8.ResolutionFractionUpperBounds);
    UEngine::GetDynamicResolutionCurrentStateInfos(GEngine,&local_3a8);
    pUVar28 = GEngine;
    if (local_3a8.Status == Enabled) {
      if ((((GEngine->NextDynamicResolutionState).Object == (IDynamicResolutionState *)0x0) &&
          (PRIVATE_GIsRunningCommandlet == false)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("NextDynamicResolutionState.IsValid() || IsRunningCommandlet() || IsRunningDedicatedServer()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Engine.h"
                              ,0x7ec,L""), bVar35)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pIVar8 = (pUVar28->NextDynamicResolutionState).Object;
      (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,&local_708);
      bVar35 = (FLegacyScreenPercentageDriver *)local_708.ScreenPercentageInterface !=
               (FLegacyScreenPercentageDriver *)0x0;
    }
    else if (local_3a8.Status == DebugForceEnabled) {
      local_708.EngineShowFlags.ScreenPercentage = 1;
      pFVar65 = ::operator_new(0x18);
      if (pFVar65 != (FLegacyScreenPercentageDriver *)0x0) {
        pfVar60 = DynamicRenderScaling::TMap<float>::operator[]
                            (&local_3a8.ResolutionFractionUpperBounds,
                             &GDynamicPrimaryResolutionFraction);
        fVar96 = *pfVar60;
        pfVar60 = DynamicRenderScaling::TMap<float>::operator[]
                            (&local_3a8.ResolutionFractionApproximations,
                             &GDynamicPrimaryResolutionFraction);
        in_XMM2 = ZEXT416((uint)*pfVar60);
        FVar59 = (FName)FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                                  (pFVar65,&local_708,*pfVar60,fVar96);
      }
      FSceneViewFamily::SetScreenPercentageInterface
                (&local_708,(ISceneViewFamilyScreenPercentage *)FVar59);
      bVar35 = true;
    }
    pfVar60 = DynamicRenderScaling::TMap<float>::operator[]
                        (&local_3a8.ResolutionFractionApproximations,
                         &GDynamicPrimaryResolutionFraction);
    fVar96 = __real_42c80000;
    if (0.0 < *pfVar60 || *pfVar60 == 0.0) {
      pfVar60 = DynamicRenderScaling::TMap<float>::operator[]
                          (&local_3a8.ResolutionFractionApproximations,
                           &GDynamicPrimaryResolutionFraction);
      FCsvProfiler::RecordCustomStatMinimal("DynamicResolutionPercentage",0,*pfVar60 * fVar96,Set);
      if (__CsvProfilerStat1727 == false) {
        FCsvProfilerTrace::OutputInlineStat("DynamicResolutionPercentageMax",0);
        __CsvProfilerStat1727 = true;
      }
      pfVar60 = DynamicRenderScaling::TMap<float>::operator[]
                          (&local_3a8.ResolutionFractionUpperBounds,
                           &GDynamicPrimaryResolutionFraction);
      in_XMM2 = ZEXT416((uint)(*pfVar60 * fVar96));
      FCsvProfiler::RecordCustomStat("DynamicResolutionPercentageMax",0,*pfVar60 * fVar96,Set);
    }
    ppTVar61 = DynamicRenderScaling::FBudget::GetGlobalList();
    for (pTVar9 = *ppTVar61; pTVar9 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
        pTVar9 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar9->_padding_) {
      pFVar10 = pTVar9->Element;
      if (pFVar10->BudgetId != GDynamicPrimaryResolutionFraction.BudgetId) {
        iVar43 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        iVar42 = local_3a8.ResolutionFractionApproximations.Array.ArrayNum;
        if (iVar42 != iVar43) {
          bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Array.Num() == FBudget::GetGlobalListSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                              ,0xd5,L"");
          if (bVar36) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar42 = local_3a8.ResolutionFractionApproximations.Array.ArrayNum;
        }
        uVar79 = pFVar10->BudgetId;
        uVar76 = 0;
        if ((int)uVar79 < iVar42) {
          uVar76 = ~uVar79 >> 0x1f;
        }
        if ((uVar76 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        FVar78 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                 &local_3a8.ResolutionFractionApproximations;
        if (local_3a8.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar78 = local_3a8.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData;
        }
        pFVar7 = (pFVar10->AnsiName).AllocatorInstance.Data;
        fVar117 = *(float *)((uchar *)((longlong)FVar78 + 8) + (longlong)(int)uVar79 * 0x10) *
                  fVar96;
        if (__CsvProfilerStat1740 == false) {
          FCsvProfilerTrace::OutputInlineStat((char *)pFVar7,0);
          __CsvProfilerStat1740 = true;
        }
        in_XMM2 = ZEXT416((uint)fVar117);
        FCsvProfiler::RecordCustomStat((char *)pFVar7,0,fVar117,Set);
      }
      pUVar52 = local_cc8;
    }
    if (local_3a8.ResolutionFractionUpperBounds.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FMemory::Free((void *)local_3a8.ResolutionFractionUpperBounds.Array.AllocatorInstance.
                            SecondaryData);
    }
    if (local_3a8.ResolutionFractionApproximations.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FMemory::Free((void *)local_3a8.ResolutionFractionApproximations.Array.AllocatorInstance.
                            SecondaryData);
    }
  }
  if (((((uint)local_708.EngineShowFlags._4_4_ >> 0x16 & 1) != 0) || (bVar35)) ||
     (uVar79 = 0, bVar39)) {
    uVar79 = 0x400000;
  }
  local_758._0_8_ = 0;
  local_708.EngineShowFlags._4_4_ = local_708.EngineShowFlags._4_4_ & 0xffbfffff | uVar79;
  local_758._8_8_ = 0;
  local_c58.ComparisonIndex.Value = (uint)local_708.EngineShowFlags._4_4_ >> 0x16;
  local_738 = 0;
  local_730 = 0;
  local_72c = 0x80;
  local_728 = 0xffffffff;
  local_724 = 0;
  local_718 = (ForElementType<FSetElementId>)0x0;
  local_710 = 0;
  local_c90.Data = (FScriptContainerElement *)0x0;
  local_c88 = 0;
  UEngine::GetLocalPlayerIterator(GEngine,&local_c10,pUVar52);
  FLocalPlayerIterator::GetCurrent((FLocalPlayerIterator *)&local_c10);
  fVar96 = __real_3e4ccccd;
  while ((pTVar31 = local_c10.Container, lVar89 = (longlong)local_c10.Index, -1 < local_c10.Index &&
         (local_c10.Index < (local_c10.Container)->ArrayNum))) {
    if ((local_c10.Index < 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pUVar28 = GEngine;
    local_c70 = *(longlong **)((pTVar31->AllocatorInstance).Data + lVar89 * 8);
    if (local_c70 != (longlong *)0x0) {
      plVar50 = (longlong *)local_c70[6];
      if (bVar34) {
        if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar36)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pIVar63 = (pUVar28->StereoRenderingDevice).Object;
        iVar42 = (**(code **)((longlong)*pIVar63 + 0x20))(pIVar63,bVar34);
        if ((*(char *)((longlong)local_c70 + 0xdc) != '\0') &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bStereoRendering || !LocalPlayer->bEmulateSplitscreen",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                                ,0x6e6,
                                L"r.ScreenshotTest.EmulateSplitscreenMode is unsupported when using stereo rendering."
                               ), bVar36)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      else {
        iVar42 = (*(char *)((longlong)local_c70 + 0xdc) != '\0') + 1;
      }
      iVar43 = 0;
      if (0 < iVar42) {
        do {
          local_ce0 = (**(code **)(*local_c70 + 0x2e0))(local_c70,&local_708,&local_8d8,local_870);
          if (local_ce0 != 0) {
            if (((local_c90.Data <= (FScriptContainerElement *)&local_ce0) &&
                ((FScriptContainerElement *)&local_ce0 <
                 local_c90.Data + (longlong)local_c88._4_4_ * 8)) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar36)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar44 = (int)local_c88;
            if ((int)local_c88 == local_c88._4_4_) {
              iVar44 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_c90,(int *)((longlong)&local_c88 + 4));
            }
            local_c88 = CONCAT44(local_c88._4_4_,iVar44 + 1);
            *(longlong *)(local_c90.Data + (longlong)iVar44 * 8) = local_ce0;
            if ((*(byte *)(*(longlong *)(local_ce0 + 8) + 0x58) & 2) == 0) {
              uVar79 = *(uint *)(*(longlong *)(local_ce0 + 8) + 0x48);
              if ((uVar79 >> 0x15 & 1) == 0) {
                if ((uVar79 >> 0x16 & 1) != 0) {
                  fVar117 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.G;
                  fVar112 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.B;
                  *(float *)(local_ce0 + 0xe50) =
                       (GEngine->LightingOnlyBrightness).field0_0x0._s_0.R;
                  *(float *)(local_ce0 + 0xe54) = fVar117;
                  *(float *)(local_ce0 + 0xe58) = fVar112;
                  *(undefined4 *)(local_ce0 + 0xe5c) = 0;
                  goto LAB_147c49d8e;
                }
                if ((uVar79 >> 0x17 & 1) != 0) {
                  *(undefined8 *)(local_ce0 + 0xe50) = 0;
                  *(undefined8 *)(local_ce0 + 0xe58) = 0;
                  local_bc8 = 0;
                  *(undefined4 *)(local_ce0 + 0xe60) = 0x3f800000;
                  *(undefined4 *)(local_ce0 + 0xe64) = 0x3f800000;
                  *(undefined8 *)(local_ce0 + 0xe68) = 0x3f800000;
                  *(undefined8 *)(local_ce0 + 0xe70) = 0;
                  *(undefined8 *)(local_ce0 + 0xe78) = 0x3f800000;
                  *(undefined8 *)(local_ce0 + 0xe80) = 0;
                }
              }
              else {
                fVar117 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.G;
                fVar112 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.B;
                *(float *)(local_ce0 + 0xe50) = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.R;
                *(float *)(local_ce0 + 0xe54) = fVar117;
                *(float *)(local_ce0 + 0xe58) = fVar112;
                *(undefined4 *)(local_ce0 + 0xe5c) = 0;
                *(undefined4 *)(local_ce0 + 0xe60) = 0x3dcccccd;
                *(undefined4 *)(local_ce0 + 0xe64) = 0x3dcccccd;
                *(undefined8 *)(local_ce0 + 0xe68) = 0x3dcccccd;
              }
            }
            else {
              *(undefined8 *)(local_ce0 + 0xe50) = 0;
              *(undefined8 *)(local_ce0 + 0xe58) = 0;
LAB_147c49d8e:
              *(undefined8 *)(local_ce0 + 0xe60) = 0;
              *(undefined8 *)(local_ce0 + 0xe68) = 0;
            }
            if (-1 < *(int *)(*(longlong *)(local_ce0 + 8) + 0x4c)) {
              *(undefined8 *)(local_ce0 + 0xe50) = 0;
              *(undefined8 *)(local_ce0 + 0xe58) = 0;
            }
            if ((*(byte *)(*(longlong *)(local_ce0 + 8) + 0x50) & 1) == 0) {
              *(undefined8 *)(local_ce0 + 0xe60) = 0;
              *(undefined8 *)(local_ce0 + 0xe68) = 0;
            }
            if (local_708.EngineShowFlags.MaterialNormal == 0) {
              *(undefined8 *)(local_ce0 + 0xe70) = 0;
              *(undefined8 *)(local_ce0 + 0xe78) = 0x3f800000;
            }
            if (local_708.EngineShowFlags.MaterialAmbientOcclusion == 0) {
              local_bf0 = 0x3f800000;
              *(undefined8 *)(local_ce0 + 0xe88) = 0x3f800000;
            }
            *(SWindow **)(local_ce0 + 0xdf4) = (this->Window).Object;
            *(TReferenceControllerBase<1> **)(local_ce0 + 0xdfc) =
                 (this->Window).WeakReferenceCount.ReferenceController;
            *(SOverlay **)(local_ce0 + 0xe04) = (this->ViewportOverlayWidget).Object;
            *(TReferenceControllerBase<1> **)(local_ce0 + 0xe0c) =
                 (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
            *(IGameLayerManager **)(local_ce0 + 0xe14) = (this->GameLayerManagerPtr).Object;
            *(TReferenceControllerBase<1> **)(local_ce0 + 0xe1c) =
                 (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
            *(undefined8 *)(local_ce0 + 0x1230) = *(undefined8 *)(local_ce0 + 0x380);
            *(undefined8 *)(local_ce0 + 0x1238) = *(undefined8 *)(local_ce0 + 0x388);
            if (iVar43 == 0) {
              local_c70[0x14] = local_8d8;
              local_c70[0x15] = lStack_8d0;
              local_c70[0x16] = local_8c8;
              local_a68 = &local_c70;
              local_a60 = &local_ce0;
              TSet<TTuple<ULocalPlayer_*,FSceneView_*>,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<ULocalPlayer_*_const_&,FSceneView_*_const_&>_>
                        ((TSet<TTuple<ULocalPlayer_*,FSceneView_*>,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>,FDefaultSetAllocator>
                          *)local_758,&local_aa8,(bool *)&local_a68);
              bVar36 = FAudioDeviceHandle::IsValid
                                 ((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
              if ((bVar36) && (plVar50 != (longlong *)0x0)) {
                if (GEngine != (UEngine *)0x0) {
                  this_01 = UEngine::GetAudioDeviceManager(GEngine);
                  bVar90 = FAudioDeviceManager::GetNumMainAudioDeviceWorlds(this_01);
                  if (1 < bVar90) {
                    uVar79 = UEngine::GetMainAudioDeviceID(GEngine);
                    bVar36 = FAudioDeviceHandle::IsValid
                                       ((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
                    if ((!bVar36) &&
                       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                            ,0x60,L""), bVar36)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                    if ((*(uint *)(*(longlong *)&this->MaxSplitscreenPlayers + 0xa0) == uVar79) &&
                       ((this->EngineShowFlags).CustomShowFlags.AllocatorInstance.InlineData[4] ==
                        '\0')) goto LAB_147c4a4eb;
                  }
                }
                (**(code **)(*plVar50 + 0xe28))(plVar50,&local_bb8,&local_8a0,&local_8b8);
                pTVar62 = UE::Math::TRotationMatrix<double>::MakeFromXY
                                    (&local_7d8,&local_8a0,&local_8b8);
                UE::Math::TTransform<double>::SetFromMatrix(&local_548,pTVar62);
                if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) ||
                   ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0)) {
LAB_147c4a2f9:
                }
                else {
                  pIVar63 = TSharedPtr<IStereoRendering,1>::operator->
                                      (&GEngine->StereoRenderingDevice);
                  cVar38 = (**(code **)((longlong)*pIVar63 + 8))(pIVar63);
                  if (cVar38 == '\0') goto LAB_147c4a2f9;
                  pIVar48 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
                  (**(code **)((longlong)*pIVar48 + 0xb0))(pIVar48,local_938,0);
                  dVar125 = local_548.Rotation.ZW.m128d_f64[0];
                  dVar126 = local_548.Rotation.ZW.m128d_f64[1];
                  dVar97 = local_548.Rotation.XY.m128d_f64[1];
                  dVar111 = local_938._8_8_;
                  auVar116._8_4_ = local_548.Rotation.ZW.m128d_f64[0]._0_4_;
                  auVar116._0_8_ = dVar97;
                  auVar116._12_4_ = local_548.Rotation.ZW.m128d_f64[0]._4_4_;
                  auVar123._0_8_ =
                       dVar111 * local_548.Rotation.XY.m128d_f64[0] - dVar97 * local_938._0_8_;
                  auVar123._8_8_ = local_928 * dVar97 - auVar116._8_8_ * dVar111;
                  auVar116 = blendpd((undefined1  [16])local_548.Rotation.XY.m128d_f64,
                                     (undefined1  [16])local_548.Rotation.ZW.m128d_f64,2);
                  auVar119._8_4_ = SUB84(auVar123._8_8_,0);
                  auVar119._0_8_ = auVar123._0_8_;
                  auVar119._12_4_ = (int)((ulonglong)auVar123._8_8_ >> 0x20);
                  auVar104._8_8_ = 0;
                  auVar104._0_8_ = local_928;
                  auVar104 = blendpd(local_938,auVar104,2);
                  auVar105._0_8_ = auVar104._0_8_ * dVar125 - auVar116._0_8_ * local_928;
                  auVar105._8_8_ = auVar104._8_8_ * dVar126 - auVar116._8_8_ * 0.0;
                  auVar104 = blendpd(auVar123,auVar105,2);
                  dVar118 = auVar119._8_8_ + auVar119._8_8_;
                  dVar121 = auVar105._0_8_ + auVar105._0_8_;
                  auVar124._0_8_ = auVar104._0_8_ + auVar104._0_8_;
                  auVar124._8_8_ = auVar104._8_8_ + auVar104._8_8_;
                  uVar120 = SUB84(dVar121,0);
                  auVar113._8_4_ = uVar120;
                  auVar113._0_8_ = dVar118;
                  uVar122 = (undefined4)((ulonglong)dVar121 >> 0x20);
                  auVar113._12_4_ = uVar122;
                  auVar98._8_4_ = uVar120;
                  auVar98._0_8_ = dVar118;
                  auVar98._12_4_ = uVar122;
                  auVar106._8_4_ = uVar120;
                  auVar106._0_8_ = dVar118;
                  auVar106._12_4_ = uVar122;
                  auVar104 = blendpd(auVar106,auVar124,2);
                  auVar114._0_8_ =
                       auVar113._8_8_ * local_548.Rotation.XY.m128d_f64[0] - dVar118 * dVar97;
                  auVar114._8_8_ = auVar124._0_8_ * dVar97 - auVar98._8_8_ * dVar125;
                  auVar99._8_4_ = SUB84(auVar124._8_8_,0);
                  auVar99._0_8_ = auVar124._0_8_;
                  auVar99._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
                  auVar107._0_8_ = auVar104._0_8_ * dVar125 - auVar124._0_8_ * auVar116._0_8_;
                  auVar107._8_8_ = auVar104._8_8_ * dVar126 - auVar99._8_8_ * auVar116._8_8_;
                  auVar100._8_4_ = SUB84(auVar114._8_8_,0);
                  auVar100._0_8_ = auVar114._0_8_;
                  auVar100._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
                  local_888 = dVar118 * dVar126 + local_938._0_8_ + auVar100._8_8_ +
                              local_548.Translation.XY.m128d_f64[0];
                  dStack_880 = dVar121 * dVar126 + dVar111 + auVar107._0_8_ +
                               local_548.Translation.XY.m128d_f64[1];
                  in_XMM2 = blendpd(auVar114,auVar107,2);
                  local_bb8 = local_bb8 + local_888;
                  local_878 = auVar124._0_8_ * dVar126 + local_928 + in_XMM2._0_8_ +
                              local_548.Translation.ZW.m128d_f64[0];
                  dStack_bb0 = dStack_bb0 + dStack_880;
                  local_ba8 = local_ba8 + local_878;
                }
                local_548.Translation.ZW.m128d_f64[0] = local_ba8;
                local_548.Translation.ZW.m128d_f64[1] = 0.0;
                iVar44 = (local_758._8_4_ - local_724) + -1;
                local_548.Translation.XY.m128d_f64[0] = local_bb8;
                local_548.Translation.XY.m128d_f64[1] = dStack_bb0;
                auVar108._0_8_ =
                     (double)CONCAT44(local_548.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_548.Rotation.XY.m128d_f64[0]._0_4_);
                auVar108._8_4_ = local_548.Rotation.XY.m128d_f64[1]._0_4_;
                auVar108._12_4_ = local_548.Rotation.XY.m128d_f64[1]._4_4_;
                dVar97 = local_548.Rotation.ZW.m128d_f64[0];
                dVar118 = local_548.Rotation.ZW.m128d_f64[1];
                dVar121 = auVar108._0_8_ *
                          (double)CONCAT44(local_548.Rotation.XY.m128d_f64[0]._4_4_,
                                           local_548.Rotation.XY.m128d_f64[0]._0_4_) +
                          dVar97 * dVar97;
                dVar111 = auVar108._8_8_ *
                          (double)CONCAT44(local_548.Rotation.XY.m128d_f64[1]._4_4_,
                                           local_548.Rotation.XY.m128d_f64[1]._0_4_) +
                          dVar118 * dVar118;
                auVar101._8_4_ = SUB84(dVar111,0);
                auVar101._0_8_ = dVar121;
                auVar101._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
                auVar102._0_8_ = auVar101._8_8_ + dVar121;
                auVar102._8_8_ = dVar121 + dVar111;
                uVar92 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                          auVar102._0_8_);
                uVar94 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                          auVar102._8_8_);
                auVar116 = sqrtpd(in_XMM2,auVar102);
                uVar93 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                          auVar102._0_8_);
                uVar95 = -(ulonglong)
                          (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                          auVar102._8_8_);
                auVar104 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                 auVar116);
                auVar103._0_8_ =
                     (ulonglong)
                     (auVar104._0_8_ *
                     (double)CONCAT44(local_548.Rotation.XY.m128d_f64[0]._4_4_,
                                      local_548.Rotation.XY.m128d_f64[0]._0_4_)) & uVar92;
                uVar56 = uVar94 & (ulonglong)
                                  (auVar104._8_8_ *
                                  (double)CONCAT44(local_548.Rotation.XY.m128d_f64[1]._4_4_,
                                                   local_548.Rotation.XY.m128d_f64[1]._0_4_));
                auVar103._8_4_ = (undefined4)uVar56;
                auVar103._12_4_ = (undefined4)(uVar56 >> 0x20);
                auVar109._0_4_ =
                     ~(uint)uVar92 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                auVar109._4_4_ =
                     ~(uint)(uVar92 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                auVar109._8_4_ =
                     ~(uint)uVar94 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                auVar109._12_4_ =
                     ~(uint)(uVar94 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                local_548.Rotation.XY.m128d_f64 = (double  [2])(auVar103 | auVar109);
                auVar104 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                 auVar116);
                auVar110._0_8_ = (ulonglong)(auVar104._0_8_ * dVar97) & uVar93;
                uVar56 = uVar95 & (ulonglong)(auVar104._8_8_ * dVar118);
                auVar110._8_4_ = (undefined4)uVar56;
                auVar110._12_4_ = (undefined4)(uVar56 >> 0x20);
                auVar115._0_4_ =
                     ~(uint)uVar93 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                auVar115._4_4_ =
                     ~(uint)(uVar93 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                auVar115._8_4_ =
                     ~(uint)uVar95 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                auVar115._12_4_ =
                     ~(uint)(uVar95 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                local_548.Rotation.ZW.m128d_f64 = (double  [2])(auVar110 | auVar115);
                bVar36 = FAudioDeviceHandle::IsValid
                                   ((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
                if ((!bVar36) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                        ,0x60,L""), bVar36)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                if (*(char *)(local_ce0 + 0x11cc) == '\0') {
                  fVar117 = pUVar52->DeltaTimeSeconds;
                }
                else {
                  fVar117 = 0.0;
                }
                FAudioDevice::SetListener
                          (*(FAudioDevice **)&this->MaxSplitscreenPlayers,pUVar52,iVar44,&local_548,
                           fVar117);
                cVar38 = (**(code **)(*plVar50 + 0xe30))(plVar50,&local_920);
                piVar67 = &(this->SplitscreenInfo).ArrayNum;
                if (cVar38 == '\0') {
                  bVar36 = FAudioDeviceHandle::IsValid((FAudioDeviceHandle *)piVar67);
                  if ((!bVar36) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                          ,0x60,L""), bVar36)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  FAudioDevice::ClearListenerAttenuationOverride
                            (*(FAudioDevice **)&this->MaxSplitscreenPlayers,iVar44);
                }
                else {
                  bVar36 = FAudioDeviceHandle::IsValid((FAudioDeviceHandle *)piVar67);
                  if ((!bVar36) &&
                     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                                          ,0x60,L""), bVar36)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  local_908._s_0.X = local_920;
                  local_908._s_0.Y = dStack_918;
                  local_908._s_0.Z = local_910;
                  FAudioDevice::SetListenerAttenuationOverride
                            (*(FAudioDevice **)&this->MaxSplitscreenPlayers,iVar44,
                             (TVector<double> *)&local_908._s_0);
                }
              }
            }
LAB_147c4a4eb:
            fVar117 = *(float *)(local_ce0 + 0x11c8);
            if (fVar22 <= *(float *)(local_ce0 + 0x11c8)) {
              fVar117 = fVar22;
            }
            if (fVar117 <= fVar96) {
              fVar117 = fVar96;
            }
            this_02 = IStreamingManager::Get();
            pUVar74 = (UObject *)(this->DebugProperties).AllocatorInstance.Data;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar74 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar74);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar74 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar74);
              }
            }
            local_c38.ObjectIndex = 0;
            local_c38.ObjectSerialNumber = 0;
            local_a78 = pUVar74;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar74 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar74);
            }
            FWeakObjectPtr::operator=(&local_c38,(FObjectPtr)&local_a78);
            FVar30 = local_c38;
            local_c30.ObjectIndex = 0;
            local_c30.ObjectSerialNumber = 0;
            local_a70 = 0;
            FWeakObjectPtr::operator=(&local_c30,(FObjectPtr)&local_a70);
            iVar44 = *(int *)(local_ce0 + 0x388) - *(int *)(local_ce0 + 0x380);
            fVar112 = (float)iVar44;
            in_XMM2 = ZEXT416((uint)fVar112);
            IStreamingManager::AddViewInformation
                      ((IStreamingManager *)this_02,(TVector<double> *)(local_ce0 + 0xbc8),fVar112,
                       (float)((double)iVar44 * *(double *)(local_ce0 + 0x3b0)),fVar22 / fVar117,
                       false,0.0,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_c30,
                       (TWeakObjectPtr<UWorld,FWeakObjectPtr>)FVar30);
            lVar89 = local_ce0;
            pTVar2 = &pUVar52->ViewLocationsRenderedLastFrame;
            pFVar7 = (pTVar2->AllocatorInstance).Data;
            pFVar86 = (FScriptContainerElement *)(local_ce0 + 0xbc8);
            if (((pFVar7 <= pFVar86) &&
                (pFVar86 < pFVar7 + (longlong)(pUVar52->ViewLocationsRenderedLastFrame).ArrayMax *
                                    0x18)) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar36)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar44 = (pUVar52->ViewLocationsRenderedLastFrame).ArrayNum;
            piVar67 = &(pUVar52->ViewLocationsRenderedLastFrame).ArrayMax;
            if (iVar44 == *piVar67) {
              iVar44 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar2->AllocatorInstance,piVar67);
            }
            (pUVar52->ViewLocationsRenderedLastFrame).ArrayNum = iVar44 + 1;
            uVar17 = *(undefined8 *)(lVar89 + 0xbd0);
            pFVar11 = (pTVar2->AllocatorInstance).Data;
            pFVar7 = pFVar11 + (longlong)iVar44 * 0x18;
            *(undefined8 *)pFVar7 = *(undefined8 *)pFVar86;
            *(undefined8 *)(pFVar7 + 8) = uVar17;
            *(undefined8 *)(pFVar11 + (longlong)iVar44 * 0x18 + 0x10) =
                 *(undefined8 *)(lVar89 + 0xbd8);
            pFVar7 = (this->DebugProperties).AllocatorInstance.Data;
            iVar44 = *(int *)(pFVar7 + 0x178);
            if (iVar44 == *(int *)(pFVar7 + 0x17c)) {
              iVar44 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x200,0x10,(ForAnyElementType *)(pFVar7 + 0x170),
                                  (int *)(pFVar7 + 0x17c));
            }
            *(int *)(pFVar7 + 0x178) = iVar44 + 1;
            lVar89 = *(longlong *)(pFVar7 + 0x170);
            lVar49 = (longlong)iVar44 * 0x200;
            uVar17 = *(undefined8 *)(local_ce0 + 0x538);
            *(undefined8 *)(lVar49 + lVar89) = *(undefined8 *)(local_ce0 + 0x530);
            ((undefined8 *)(lVar49 + lVar89))[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x548);
            puVar51 = (undefined8 *)(lVar49 + 0x10 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x540);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x558);
            puVar51 = (undefined8 *)(lVar49 + 0x20 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x550);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x568);
            puVar51 = (undefined8 *)(lVar49 + 0x30 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x560);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x578);
            puVar51 = (undefined8 *)(lVar49 + 0x40 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x570);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x588);
            puVar51 = (undefined8 *)(lVar49 + 0x50 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x580);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x598);
            puVar51 = (undefined8 *)(lVar49 + 0x60 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x590);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5a8);
            puVar51 = (undefined8 *)(lVar49 + 0x70 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5a0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x3b8);
            puVar51 = (undefined8 *)(lVar49 + 0x80 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x3b0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x3c8);
            puVar51 = (undefined8 *)(lVar49 + 0x90 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x3c0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x3d8);
            puVar51 = (undefined8 *)(lVar49 + 0xa0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x3d0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 1000);
            puVar51 = (undefined8 *)(lVar49 + 0xb0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x3e0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x3f8);
            puVar51 = (undefined8 *)(lVar49 + 0xc0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x3f0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x408);
            puVar51 = (undefined8 *)(lVar49 + 0xd0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x400);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x418);
            puVar51 = (undefined8 *)(lVar49 + 0xe0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x410);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x428);
            puVar51 = (undefined8 *)(lVar49 + 0xf0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x420);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x638);
            puVar51 = (undefined8 *)(lVar49 + 0x100 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x630);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x648);
            puVar51 = (undefined8 *)(lVar49 + 0x110 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x640);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x658);
            puVar51 = (undefined8 *)(lVar49 + 0x120 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x650);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x668);
            puVar51 = (undefined8 *)(lVar49 + 0x130 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x660);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x678);
            puVar51 = (undefined8 *)(lVar49 + 0x140 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x670);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x688);
            puVar51 = (undefined8 *)(lVar49 + 0x150 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x680);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x698);
            puVar51 = (undefined8 *)(lVar49 + 0x160 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x690);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x6a8);
            puVar51 = (undefined8 *)(lVar49 + 0x170 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x6a0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5b8);
            puVar51 = (undefined8 *)(lVar49 + 0x180 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5b0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5c8);
            puVar51 = (undefined8 *)(lVar49 + 400 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5c0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5d8);
            puVar51 = (undefined8 *)(lVar49 + 0x1a0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5d0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5e8);
            puVar51 = (undefined8 *)(lVar49 + 0x1b0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5e0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x5f8);
            puVar51 = (undefined8 *)(lVar49 + 0x1c0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x5f0);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x608);
            puVar51 = (undefined8 *)(lVar49 + 0x1d0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x600);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x618);
            puVar51 = (undefined8 *)(lVar49 + 0x1e0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x610);
            puVar51[1] = uVar17;
            uVar17 = *(undefined8 *)(local_ce0 + 0x628);
            puVar51 = (undefined8 *)(lVar49 + 0x1f0 + lVar89);
            *puVar51 = *(undefined8 *)(local_ce0 + 0x620);
            puVar51[1] = uVar17;
            pFVar7 = (this->DebugProperties).AllocatorInstance.Data;
            *(undefined8 *)(pFVar7 + 0x180) = *(undefined8 *)(pFVar7 + 0x8f8);
          }
          iVar43 = iVar43 + 1;
        } while (iVar43 < iVar42);
      }
    }
    local_c10.Index = local_c10.Index + 1;
    FLocalPlayerIterator::GetCurrent((FLocalPlayerIterator *)&local_c10);
  }
  UpdateCsvCameraStats
            ((UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,
             (TMap<ULocalPlayer_*,FSceneView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>_>
              *)local_758);
  local_b50.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_758 + 0x10);
  uVar56 = 0;
  local_b50._padding_._0_4_ = 0;
  local_b50._padding_._4_4_ = 1;
  local_b50.UnvisitedBitMask = 0xffffffff;
  local_b50.CurrentBitIndex = 0;
  local_b50.BaseBitIndex = 0;
  if (local_730 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b50);
  }
  auVar19._4_4_ = local_b50.CurrentBitIndex;
  auVar19._8_4_ = local_b50.BaseBitIndex;
  auVar19._0_4_ = local_b50.UnvisitedBitMask;
  auVar18._12_4_ = local_b50._28_4_;
  auVar18._0_12_ = auVar19;
  uStack_9c0 = auVar19._0_8_;
  local_b08 = (longlong *)local_758;
  local_9d8.TypedValue.TimeoutCycles =
       CONCAT44(local_b50._padding_._4_4_,(undefined4)local_b50._padding_);
  local_9d8.bIsSet = SUB81(local_b50.Array,0);
  local_9d8._17_7_ = SUB87((ulonglong)local_b50.Array >> 8,0);
  uVar92 = uStack_9c0 >> 0x20;
  uStack_9b8 = auVar18._8_8_;
  unique0x10002aa2 = uStack_9c0;
  auStack_b00._8_8_ = local_b50.Array;
  auStack_b00._0_4_ = (undefined4)local_b50._padding_;
  auStack_b00._4_4_ = local_b50._padding_._4_4_;
  uVar79 = local_b50.CurrentBitIndex;
  local_ae8 = local_b50.BaseBitIndex;
  uStack_ae4 = local_b50._28_4_;
  local_9d8.TypedValue.StartCycles = (ulong64)local_b08;
  if ((int)uVar79 < (local_b50.Array)->NumBits) {
    do {
      FObjectTrace::OutputView
                (*(UObject **)(*local_b08 + (longlong)(int)uVar79 * 0x18),
                 *(FSceneView **)(*local_b08 + 8 + (longlong)(int)uVar92 * 0x18));
      uStack_af0 = uStack_af0 & ~auStack_b00._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b00);
      uVar92 = (ulonglong)uStack_aec;
      uVar79 = uStack_aec;
    } while ((int)uStack_aec < *(int *)(auStack_b00._8_8_ + 0x18));
  }
  (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x2d8))
            (&this[-1].OnInputAxisEvent.field_0x8,&local_708,local_758);
  if (GUseUnifiedTimeBudgetForStreaming == 0) {
    local_9d8.bIsSet = false;
    UWorld::UpdateLevelStreaming(pUVar52,&local_9d8);
  }
  pFVar88 = local_ca0;
  puVar64 = (uint *)(**(code **)(local_ca0->_padding_ + 0x28))(local_ca0,local_998);
  uVar79 = *puVar64;
  lVar89 = (**(code **)(pFVar88->_padding_ + 0x28))(pFVar88);
  uVar92 = (ulonglong)*(uint *)(lVar89 + 4);
  local_c80 = (ulonglong)local_c80._4_4_ << 0x20;
  uVar76 = 0;
  iVar42 = 0;
  uVar83 = 0;
  if (0 < local_708.Views.ArrayNum) {
    local_c80 = 0;
    iVar43 = local_708.Views.ArrayNum;
    do {
      uVar91 = 0;
      if ((int)uVar83 < iVar43) {
        uVar91 = ~uVar83 >> 0x1f;
      }
      if ((uVar91 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar43 = local_708.Views.ArrayNum, bVar36)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar93 = *(ulonglong *)
                (*(longlong *)(local_708.Views.AllocatorInstance.Data + local_c80) + 0x380);
      uVar94 = *(ulonglong *)
                (*(longlong *)(local_708.Views.AllocatorInstance.Data + local_c80) + 0x388);
      uVar91 = (uint)uVar93;
      if (uVar91 < uVar79) {
        uVar79 = uVar91;
      }
      uVar45 = (uint)(uVar93 >> 0x20);
      if (uVar45 < (uint)uVar92) {
        uVar92 = uVar93 >> 0x20;
      }
      if ((uint)uVar56 < (uint)uVar94) {
        uVar56 = uVar94 & 0xffffffff;
      }
      uVar77 = (uint)(uVar94 >> 0x20);
      if (uVar76 < uVar77) {
        uVar76 = uVar77;
      }
      local_c80 = local_c80 + 8;
      uVar83 = uVar83 + 1;
      iVar42 = iVar42 + (uVar77 - uVar45) * ((uint)uVar94 - uVar91);
    } while ((int)uVar83 < iVar43);
    local_c80._4_4_ = (uint)((ulonglong)local_c80 >> 0x20);
    local_c80 = CONCAT44(local_c80._4_4_,uVar76);
    this = (UGameViewportClient *)local_c98;
  }
  pTVar25 = CVarSetBlackBordersEnabled.Ref;
  bVar36 = IsInParallelGameThread();
  if (((!bVar36) && (bVar36 = IsInGameThread(), !bVar36)) &&
     (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar36)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar43 = 10;
  if (pTVar25->ShadowedValue[0] < 10) {
    iVar43 = pTVar25->ShadowedValue[0];
  }
  iVar44 = 0;
  if (0 < iVar43) {
    iVar44 = iVar43;
  }
  if ((local_708.Views.ArrayNum == 1) && (iVar44 != 0)) {
    uVar76 = uVar76 - iVar44;
    uVar91 = (int)uVar92 + iVar44;
    uVar92 = (ulonglong)uVar91;
    uVar83 = (int)uVar56 - iVar44;
    uVar56 = (ulonglong)uVar83;
    local_c80 = CONCAT44(local_c80._4_4_,uVar76);
    uVar79 = uVar79 + iVar44;
    iVar42 = (uVar76 - uVar91) * (uVar83 - uVar79);
  }
  local_cd8 = '\0';
  if (local_708.Views.ArrayNum == 0) {
LAB_147c4ac57:
    bVar36 = false;
  }
  else {
    if ((local_708.Views.ArrayNum < 1) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    bVar36 = IStereoRendering::IsStereoEyeView
                       (*(FSceneView **)local_708.Views.AllocatorInstance.Data);
    if (!bVar36) goto LAB_147c4ac57;
    bVar36 = true;
  }
  local_ae0 = CVarTransparentViewportClear.Ref;
  bVar39 = IsInParallelGameThread();
  if ((bVar39) || (bVar39 = IsInGameThread(), bVar39)) {
    lVar89 = 0;
  }
  else {
    lVar89 = 1;
  }
  if ((((local_708.Views.ArrayNum == 0) ||
       (iVar42 != (uVar76 - (int)uVar92) * ((uint)uVar56 - uVar79))) ||
      (uVar83 = *(uint *)((longlong)this + 0x6c), (uVar83 & 2) != 0)) ||
     ((bVar36 || (local_ae0->ShadowedValue[lVar89] != false)))) {
    uVar83 = *(uint *)((longlong)this + 0x6c);
    if (((uVar83 & 2) != 0) || ((!bVar36 || (local_ae0->ShadowedValue[lVar89] != false)))) {
      FCanvas::Clear(local_ca8,&FLinearColor::Transparent);
      uVar83 = *(uint *)((longlong)this + 0x6c);
    }
    local_cd8 = '\x01';
  }
  if ((FLegacyScreenPercentageDriver *)local_708.ScreenPercentageInterface ==
      (FLegacyScreenPercentageDriver *)0x0) {
    pFVar65 = (FLegacyScreenPercentageDriver *)0x0;
    fVar96 = fVar22;
    if (((local_708.EngineShowFlags.ScreenPercentage != 0) && ((uVar83 & 2) == 0)) &&
       (0 < local_708.Views.ArrayNum)) {
      local_b30.Settings.GlobalResolutionFraction = ___xmm_3f80000000000000000000003f800000;
      local_b30.Settings.MinRenderingResolution = _UNK_15076b184;
      local_b30.Settings.MaxRenderingResolution = _UNK_15076b188;
      local_b30.Settings.AutoPixelCountMultiplier = _UNK_15076b18c;
      local_b30.Settings.Mode = Manual;
      local_b30.Settings.bAllowDisplayBasedScreenPercentageMode = true;
      local_b30.TotalDisplayedPixelCount = 0;
      local_b30.SecondaryViewFraction = 1.0;
      local_b30.DPIScale = 1.0;
      if ((*(byte *)((longlong)this + 0xd0) & 1) == 0) {
        if ((*(uint *)((longlong)this + 200) & 0x1000000) == 0) {
          if ((*(longlong *)((longlong)this + 0x78) == 0) ||
             (EVar80 = Mobile, *(char *)(*(longlong *)((longlong)this + 0x78) + 0x188) != '\x01')) {
            EVar80 = Desktop;
          }
        }
        else {
          EVar80 = VR;
        }
      }
      else {
        EVar80 = PathTracer;
      }
      FStaticResolutionFractionHeuristic::FUserSettings::PullRunTimeRenderingSettings
                (&local_b30.Settings,EVar80);
      FStaticResolutionFractionHeuristic::PullViewFamilyRenderingSettings(&local_b30,&local_708);
      local_b30.DPIScale = (float)(**(code **)(this->_padding_ + 0x1d8))(this);
      fVar96 = FStaticResolutionFractionHeuristic::ResolveResolutionFraction(&local_b30);
    }
    this_03 = ::operator_new(0x18);
    if (((this_03 == (FLegacyScreenPercentageDriver *)0x0) ||
        (pFVar65 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                             (this_03,&local_708,fVar96),
        pFVar65 == (FLegacyScreenPercentageDriver *)0x0)) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("InScreenPercentageInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa24,L""), bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (((FLegacyScreenPercentageDriver *)local_708.ScreenPercentageInterface !=
         (FLegacyScreenPercentageDriver *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScreenPercentageInterface == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa25,
                            L"View family already had a screen percentage interface assigned."),
       bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    local_708.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar65;
    if ((pFVar65 == (FLegacyScreenPercentageDriver *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily.GetScreenPercentageInterface() != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                            ,0x7d1,L""), bVar36)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  if ((bVar34) && (local_cd0 != 0)) {
    if (local_cd0 == 1) {
      bVar34 = FSceneViewFamily::SupportsScreenPercentage(&local_708);
      if ((!bVar34) && (bVar35)) {
LAB_147c4af14:
        iVar42 = (int)local_c88;
        uVar93 = (ulonglong)(int)local_c88;
        pFVar7 = local_c90.Data + uVar93 * 8;
        FVar84.Data = local_c90.Data;
        while( true ) {
          if ((int)uVar93 != iVar42) {
            local_cd5 = 0;
            `TCheckedPointerIterator<FSceneView_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_cd5);
          }
          if (FVar84.Data == pFVar7) break;
          lVar89 = *(longlong *)FVar84.Data;
          if ((bWarnOnce != false) && (*(int *)(lVar89 + 0x1b94) == 1)) {
            if (2 < (byte)LogViewport._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
            }
            bWarnOnce = false;
          }
          *(undefined4 *)(lVar89 + 0x1b94) = 2;
          FVar84.Data = FVar84.Data + 8;
          uVar93 = local_c88 & 0xffffffff;
        }
        this = (UGameViewportClient *)local_c98;
        uVar76 = (uint)local_c80;
      }
    }
    else if (local_cd0 == 2) {
      bVar34 = FSceneViewFamily::SupportsScreenPercentage(&local_708);
      if ((!bVar34) && (local_708.EngineShowFlags.ScreenPercentage != 0)) goto LAB_147c4af14;
    }
    else {
      bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x7e3,L"");
      if (bVar34) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
  }
  local_708.EngineShowFlags._4_4_ =
       local_708.EngineShowFlags._4_4_ ^
       (local_c58.ComparisonIndex.Value << 0x16 ^ local_708.EngineShowFlags._4_4_) & 0x400000;
  if (((((ulonglong)local_c58 & 1) != 0) &&
      (bVar34 = FSceneViewFamily::SupportsScreenPercentage(&local_708), !bVar34)) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(ViewFamily.EngineShowFlags.ScreenPercentage && !ViewFamily.SupportsScreenPercentage())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x7fd,
                          L"Screen percentage is not supported, but show flag was incorectly set to true."
                         ), bVar34)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar85 = *(TReferenceControllerBase<1> **)((longlong)this + 0x118);
  if (pTVar85 == (TReferenceControllerBase<1> *)0x0) {
LAB_147c4b016:
    local_708.bIsHDR = false;
    pTVar82 = local_bc0;
  }
  else {
    aVar21 = pTVar85->SharedReferenceCount;
    do {
      if (aVar21 == (atomic<int>)0x0) {
        pTVar85 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c4b016;
      }
      LOCK();
      aVar46 = pTVar85->SharedReferenceCount;
      bVar34 = aVar21 == aVar46;
      if (bVar34) {
        pTVar85->SharedReferenceCount = (atomic<int>)((int)aVar21 + 1);
        aVar46 = aVar21;
      }
      UNLOCK();
      aVar21 = aVar46;
    } while (!bVar34);
    if (*(longlong *)((longlong)this + 0x110) == 0) goto LAB_147c4b016;
    pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 0x118);
    pTVar82 = pTVar12;
    pTVar87 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar21 = pTVar12->SharedReferenceCount;
      do {
        pTVar82 = (TReferenceControllerBase<1> *)0x0;
        pTVar87 = (TReferenceControllerBase<1> *)0x0;
        if (aVar21 == (atomic<int>)0x0) goto LAB_147c4b111;
        LOCK();
        aVar46 = pTVar12->SharedReferenceCount;
        bVar34 = aVar21 == aVar46;
        if (bVar34) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar21 + 1);
          aVar46 = aVar21;
        }
        UNLOCK();
        aVar21 = aVar46;
      } while (!bVar34);
      pTVar82 = pTVar12;
      pTVar87 = *(TReferenceControllerBase<1> **)((longlong)this + 0x110);
    }
LAB_147c4b111:
    local_708.bIsHDR = (bool)((byte)pTVar87[0x3e].SharedReferenceCount.field_0x2 >> 1 & 1);
    local_ccc = 1;
  }
  uVar83 = local_ccc;
  if ((local_ccc & 1) != 0) {
    uVar83 = local_ccc & 0xfffffffe;
    local_ccc = uVar83;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar82);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar85);
  local_708.bSplitScreenDebugAllowed = true;
  local_708.bIsMainViewFamily = true;
  if (((*(byte *)((longlong)this + 0x6c) & 2) == 0) && (0 < local_758._8_4_ - local_724)) {
    FSlateApplication::Get();
    FVar24 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
    pGVar23 = FSlateApplicationBase::PlatformApplication.Object;
    local_ccc = uVar83 | 2;
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
    if ((pGVar23 == (GenericApplication *)0x0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar34)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    cVar38 = (**(code **)(pGVar23->_padding_ + 0x110))(pGVar23);
    local_bc0 = FVar24.ReferenceController;
    if (cVar38 == '\0') goto LAB_147c4b143;
    bVar34 = true;
  }
  else {
LAB_147c4b143:
    bVar34 = false;
  }
  if ((local_ccc & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_bc0);
  }
  pIVar66 = GetRendererModule();
  pFVar47 = local_ca8;
  if (bVar34) {
    (**(code **)((longlong)*pIVar66 + 0x40))(pIVar66,local_ca8,&local_708);
  }
  else {
    (**(code **)((longlong)*pIVar66 + 0x130))(pIVar66);
    pFVar47 = local_ca8;
  }
  pFVar88 = local_ca0;
  if (local_cd8 == '\0') {
    if (uVar79 != 0) {
      lVar89 = (**(code **)(local_ca0->_padding_ + 0x28))(local_ca0,local_9a0);
      FCanvas::DrawTile(pFVar47,0.0,0.0,(double)uVar79,(double)*(int *)(lVar89 + 4),0.0,0.0,fVar22,
                        fVar22,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    puVar64 = (uint *)(**(code **)(pFVar88->_padding_ + 0x28))(pFVar88,local_9a8);
    if ((uint)uVar56 < *puVar64) {
      lVar89 = (**(code **)(pFVar88->_padding_ + 0x28))(pFVar88,local_8c0);
      iVar42 = *(int *)(lVar89 + 4);
      piVar67 = (int *)(**(code **)(pFVar88->_padding_ + 0x28))(pFVar88,local_8e0);
      FCanvas::DrawTile(pFVar47,(double)uVar56,0.0,(double)*piVar67,(double)iVar42,0.0,0.0,fVar22,
                        fVar22,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    if ((int)uVar92 != 0) {
      FCanvas::DrawTile(pFVar47,(double)uVar79,0.0,(double)uVar56,(double)uVar92,0.0,0.0,fVar22,
                        fVar22,&FLinearColor::Black,(FTexture *)0x0,false);
    }
    lVar89 = (**(code **)(pFVar88->_padding_ + 0x28))(pFVar88,local_8e8);
    if (uVar76 < *(uint *)(lVar89 + 4)) {
      lVar89 = (**(code **)(pFVar88->_padding_ + 0x28))(pFVar88,local_940);
      FCanvas::DrawTile(pFVar47,(double)uVar79,(double)uVar76,(double)uVar56,
                        (double)*(int *)(lVar89 + 4),0.0,0.0,fVar22,fVar22,&FLinearColor::Black,
                        (FTexture *)0x0,false);
    }
  }
  pUVar52 = local_cc8;
  local_a58.DataPtr = local_cd4;
  local_cd4[0] = World;
  local_cd4[1] = Foreground;
  local_a58.ArrayNum = 2;
  UWorld::FlushLineBatchers(local_cc8,&local_a58);
  pFVar13 = pUVar52->FXSystem;
  if (pFVar13 != (FFXSystemInterface *)0x0) {
    (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13,pFVar47);
  }
  FSlateApplication::Get();
  FVar24 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
  pGVar23 = FSlateApplicationBase::PlatformApplication.Object;
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
  if ((pGVar23 == (GenericApplication *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  cVar38 = (**(code **)(pGVar23->_padding_ + 0x110))(pGVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  if (cVar38 == '\0') {
LAB_147c4bbf0:
    local_9f0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_9f0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_9f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_a08.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_a08.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_a08.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    UWorld::GetPlayerControllerIterator(pUVar52,&local_b80);
    while( true ) {
      iVar42 = local_b80.Index;
      pTVar32 = local_b80.Container;
      pFVar47 = local_c48;
      pUVar29 = local_c68;
      if ((local_b80.Index < 0) || ((local_b80.Container)->ArrayNum <= local_b80.Index)) {
        if (local_c48 != (FCanvas *)0x0) {
          UCanvas::Init(local_c68,(int)local_c60,local_c60._4_4_,(FSceneView *)0x0,local_c48);
          DrawStatsHUD(pUVar52,pFVar88,pFVar47,pUVar29,
                       (TArray<FDebugDisplayProperty,TSizedDefaultAllocator<32>_> *)
                       ((longlong)this + 0x48),(TVector<double> *)&local_9f0._s_0,&local_a08);
          UEngine::IsStereoscopic3D(GEngine,pFVar88);
          plVar50 = *(longlong **)((longlong)this + 0x40);
          if (plVar50 != (longlong *)0x0) {
            (**(code **)(*plVar50 + 0x390))(plVar50,pUVar29);
          }
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   ((longlong)this + 0x330));
        if (local_cb8 != (FWN_SceneTexturesCaptureInfo *)0x0) {
          if ((local_cb8 == (FWN_SceneTexturesCaptureInfo *)0x0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar34)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          FWN_SceneTexturesCaptureInfo::BeginRenderingFence(local_cb8);
        }
        (**(code **)(this->_padding_ + 0x1e8))(this);
        if (local_c90.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c90.Data);
        }
        local_710 = 0;
        if (local_718 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_718);
        }
        TSparseArray<TSparseSetElement<TTuple<ULocalPlayer_*,FSceneView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<ULocalPlayer_*,FSceneView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<ULocalPlayer_*,FSceneView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_758);
        local_a28._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
        FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_708);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_cb0.ReferenceController);
        if (local_3e8.CustomShowFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_3e8.CustomShowFlags.AllocatorInstance.SecondaryData);
        }
        return;
      }
      if ((local_b80.Index < 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) break;
      pUVar74 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar32->AllocatorInstance).Data + (longlong)iVar42 * 8));
      if (pUVar74 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar74 + 0x840))(pUVar74,&local_9f0,&local_a08);
      }
      local_b80.Index = local_b80.Index + 1;
    }
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  FVar69 = StatPtr_STAT_UIDrawingTime;
  if (StatPtr_STAT_UIDrawingTime == (FThreadSafeStaticStat<FStat_STAT_UIDrawingTime>)0x0) {
    pFVar68 = ::FName::FName(&local_948,"STAT_UIDrawingTime");
    FVar69 = (FThreadSafeStaticStat<FStat_STAT_UIDrawingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIDrawingTime,*pFVar68,
                        L"UI Drawing Time","STATGROUP_UI","STATCAT_Advanced",L"UI",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar59 = *(FName *)FVar69;
  bVar34 = false;
  bVar36 = false;
  local_b90.ComparisonIndex.Value = 0;
  local_b90.Number = 0;
  bVar35 = false;
  bVar39 = false;
  if ((FVar59.ComparisonIndex.Value.Value != 0) || (FVar59.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c28.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c28._s_0,(char *)*(FName *)((longlong)FVar69 + 0x10));
      bVar34 = false;
      bVar36 = true;
      bVar35 = false;
      bVar39 = true;
      if (-1 < CpuChannel->Enabled) {
        local_be0.ComparisonIndex.Value = FVar59.ComparisonIndex.Value.Value;
        local_be0.Number = FVar59.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_be0,(wchar_t *)*(FName *)((longlong)FVar69 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                   ,0x84e);
        bVar34 = true;
        bVar36 = true;
        bVar35 = true;
        bVar39 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c98 = FVar59;
      local_c58 = FVar59;
      FThreadStats::AddMessage(FVar59,CycleScopeStart);
      bVar35 = true;
      goto LAB_147c4b5ac;
    }
  }
  bVar36 = bVar39;
  bVar34 = bVar35;
  bVar35 = false;
  local_c58 = local_b90;
LAB_147c4b5ac:
  if (__CsvProfilerStat2127 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("UI");
    __CsvProfilerStat2127 = true;
  }
  FCsvProfiler::BeginExclusiveStat("UI","CSV_UI");
  bVar39 = false;
  bVar37 = false;
  UWorld::GetPlayerControllerIterator(pUVar52,&local_b70);
  pFVar88 = local_ca0;
  dVar126 = _UNK_150689688;
  dVar125 = ___xmm_3ff00000000000003ff0000000000000;
  dVar111 = _UNK_150689518;
  dVar121 = ___xmm_00000000000000003ff0000000000000;
  dVar118 = _UNK_15061cbc8;
  dVar97 = ___xmm_3ff00000000000000000000000000000;
LAB_147c4b620:
  do {
    iVar42 = local_b70.Index;
    pTVar32 = local_b70.Container;
    if ((local_b70.Index < 0) ||
       (pUVar52 = local_cc8, (local_b70.Container)->ArrayNum <= local_b70.Index)) break;
    if ((local_b70.Index < 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pAVar70 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar32->AllocatorInstance).Data + (longlong)iVar42 * 8));
    if ((pAVar70 != (APlayerController *)0x0) &&
       ((pAVar70->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) {
      pUVar71 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar40 = FObjectPtr::IsA((FObjectPtr *)&pAVar70->Player,pUVar71);
      if ((bVar40) &&
         (((pUVar14 = (ULocalPlayer *)(pAVar70->Player).field0_0x0.DebugPtr,
           pUVar14 != (ULocalPlayer *)0x0 &&
           (pTVar72 = TSet<TTuple<ULocalPlayer_*,FSceneView_*>,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<ULocalPlayer_*,FSceneView_*>,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>,FDefaultSetAllocator>
                              *)local_758,pUVar14), pFVar47 = local_ca8,
           pTVar72 != (TTuple<ULocalPlayer_*,FSceneView_*> *)0x0)) &&
          (pFVar15 = *(FSceneView **)&pTVar72->field_0x8, pFVar15 != (FSceneView *)0x0)))) {
        iVar42 = *(int *)&(pFVar15->UnscaledViewRect).field0_0x0;
        iVar43 = *(int *)((longlong)&(pFVar15->UnscaledViewRect).field0_0x0 + 4);
        auVar104 = ZEXT416((uint)(float)iVar42);
        auVar104 = roundps(auVar104,auVar104,3);
        auVar116 = roundps(auVar104,ZEXT416((uint)(float)iVar43),3);
        UCanvas::Init(local_c50,
                      *(int *)((longlong)&(pFVar15->UnscaledViewRect).field0_0x0 + 8) - iVar42,
                      *(int *)((longlong)&(pFVar15->UnscaledViewRect).field0_0x0 + 0xc) - iVar43,
                      pFVar15,local_ca8);
        if ((pFVar47 == (FCanvas *)0x0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("SceneCanvas",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                                ,0x864,L""), bVar40)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_4e8._64_16_ = ZEXT816(0);
        local_4e8._16_8_ = 0.0;
        local_4e8._24_8_ = 0.0;
        local_4e8._48_8_ = 0.0;
        local_4e8._56_8_ = 0.0;
        local_4e8._0_8_ = dVar121;
        local_4e8._8_8_ = dVar111;
        local_4e8._32_8_ = dVar97;
        local_4e8._40_8_ = dVar118;
        local_498 = dVar121;
        dStack_490 = dVar111;
        local_478 = dVar97;
        dStack_470 = dVar118;
        local_488 = (double)auVar104._0_4_;
        local_480 = (double)auVar116._0_4_;
        FCanvas::PushAbsoluteTransform(pFVar47,(TMatrix<double> *)local_4e8);
        UCanvas::ApplySafeZoneTransform(local_c50);
        if ((pAVar70->MyHUD).field0_0x0.DebugPtr != (AHUD *)0x0) {
          FVar73 = StatPtr_STAT_HudTime;
          if (StatPtr_STAT_HudTime == (FThreadSafeStaticStat<FStat_STAT_HudTime>)0x0) {
            pFVar68 = ::FName::FName(local_978,"STAT_HudTime");
            FVar73 = (FThreadSafeStaticStat<FStat_STAT_HudTime>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HudTime,*pFVar68,
                                L"HUD Time","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                                true,ST_int64,true,false,MCR_Invalid);
          }
          FVar59 = *(FName *)FVar73;
          bVar39 = false;
          bVar40 = false;
          local_ba0.ComparisonIndex.Value = 0;
          local_ba0.Number = 0;
          if ((FVar59.ComparisonIndex.Value.Value == 0) && (FVar59.Number == 0)) {
LAB_147c4b906:
            bVar20 = false;
            FVar59 = local_ba0;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_c24.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_c24._s_0,(char *)*(FName *)((longlong)FVar73 + 0x10));
              bVar39 = false;
              bVar40 = true;
              if (-1 < CpuChannel->Enabled) {
                local_bd8.ComparisonIndex.Value = FVar59.ComparisonIndex.Value.Value;
                local_bd8.Number = FVar59.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_bd8,(wchar_t *)*(FName *)((longlong)FVar73 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                           ,0x86b);
                bVar39 = true;
                bVar40 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_147c4b906;
            local_c98 = FVar59;
            local_ba0 = FVar59;
            FThreadStats::AddMessage(FVar59,CycleScopeStart);
            bVar20 = true;
          }
          pUVar29 = local_c50;
          local_c68->SceneView = pFVar15;
          AHUD::SetCanvas((pAVar70->MyHUD).field0_0x0.DebugPtr,local_c50,local_c68);
          (**(code **)(((pAVar70->MyHUD).field0_0x0.DebugPtr)->_padding_ + 0x7e8))();
          pUVar29->Canvas = local_ca8;
          local_c68->Canvas = local_c48;
          if (((uint)pAVar70->_padding_ >> 0x1e & 1) == 0) {
            AHUD::SetCanvas((pAVar70->MyHUD).field0_0x0.DebugPtr,(UCanvas *)0x0,(UCanvas *)0x0);
          }
          if (bVar40) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar39) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          pFVar47 = local_ca8;
          bVar39 = bVar37;
          if (bVar20) {
            FThreadStats::AddMessage(FVar59,CycleScopeEnd);
            pFVar47 = local_ca8;
          }
        }
        if (local_c48 != (FCanvas *)0x0) {
          local_468._64_16_ = ZEXT816(0);
          local_468._16_8_ = 0.0;
          local_468._24_8_ = 0.0;
          local_468._48_8_ = 0.0;
          local_468._56_8_ = 0.0;
          local_468._0_8_ = dVar121;
          local_468._8_8_ = dVar111;
          local_468._32_8_ = dVar97;
          local_468._40_8_ = dVar118;
          local_418 = dVar121;
          dStack_410 = dVar111;
          local_3f8 = dVar97;
          dStack_3f0 = dVar118;
          local_408 = (double)auVar104._0_4_;
          local_400 = (double)auVar116._0_4_;
          FCanvas::PushAbsoluteTransform(local_c48,(TMatrix<double> *)local_468);
          pFVar53 = FEngineShowFlags::FEngineShowFlags(&local_818,&local_708.EngineShowFlags);
          UDebugDrawService::Draw(pFVar53,pFVar88,pFVar15,local_c48,local_c68,pAVar70);
          FCanvas::PopTransform(local_c48);
        }
        UCanvas::PopSafeZoneTransform(local_c50);
        FCanvas::PopTransform(pFVar47);
        if (!bVar39) {
          local_a48 = 0.0;
          dStack_a40 = 0.0;
          local_a38 = dVar125;
          dStack_a30 = dVar126;
          (**(code **)(*(longlong *)((longlong)this + -0x30) + 0x368))
                    ((longlong *)((longlong)this + -0x30),&local_a48,&local_a38);
          puVar64 = (uint *)(**(code **)(pFVar47->RenderTarget->_padding_ + 0x28))
                                      (pFVar47->RenderTarget,local_988);
          pFVar47 = local_ca8;
          uVar79 = *puVar64;
          lVar89 = (**(code **)(local_ca8->RenderTarget->_padding_ + 0x28))
                             (local_ca8->RenderTarget,local_980);
          local_b60._0_4_ = (undefined4)(longlong)((double)uVar79 * local_a48);
          local_b60._4_4_ = (undefined4)(longlong)((double)*(uint *)(lVar89 + 4) * dStack_a40);
          local_b60._8_4_ = (undefined4)(longlong)((double)uVar79 * local_a38);
          local_b60._12_4_ = (undefined4)(longlong)((double)*(uint *)(lVar89 + 4) * dStack_a30);
          this_04 = FSubtitleManager::GetSubtitleManager();
          pUVar52 = local_cc8;
          FSubtitleManager::DisplaySubtitles
                    (this_04,pFVar47,(TIntRect<int> *)&local_b60._s_0,
                     (float)local_cc8->AudioTimeSeconds);
          bVar39 = true;
          local_b70.Index = local_b70.Index + 1;
          bVar37 = true;
          goto LAB_147c4b620;
        }
      }
    }
    local_b70.Index = local_b70.Index + 1;
    pUVar52 = local_cc8;
  } while( true );
  FCanvas::Flush_GameThread(local_ca8,false);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x310));
  (**(code **)(*(longlong *)((longlong)this + -0x30) + 0x378))
            ((longlong *)((longlong)this + -0x30),local_c68);
  FCsvProfiler::EndExclusiveStat("UI");
  FVar59 = local_c58;
  if (bVar36) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar88 = local_ca0;
  if (bVar35) {
    FThreadStats::AddMessage(FVar59,CycleScopeEnd);
    pFVar88 = local_ca0;
  }
  goto LAB_147c4bbf0;
}

// DrawTitleSafeArea @ 147c4c020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::DrawTitleSafeArea(UGameViewportClient *this,UCanvas *param_1)

{
  return;
}

// DrawTransition @ 147c4c030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::DrawTransition(UGameViewportClient *this,UCanvas *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FText *pFVar4;
  FString *pFVar5;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (this->bSuppressTransitionMessage == false) {
    if ((this->_padding_ & 0x10) == 0) {
      lVar3 = this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4868594735687663688>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                         ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar3 = 0;
    }
    switch(*(undefined1 *)(lVar3 + 0xdcc)) {
    case 1:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"GameViewportClient",L"PausedMessage",L"PAUSED");
      pFVar5 = FText::ToString(pFVar4);
      (*pcVar1)(this,param_1,pFVar5);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      break;
    case 2:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"GameViewportClient",L"LoadingMessage",L"LOADING");
      pFVar5 = FText::ToString(pFVar4);
      (*pcVar1)(this,param_1,pFVar5);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      break;
    case 3:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"GameViewportClient",L"SavingMessage",L"SAVING");
      pFVar5 = FText::ToString(pFVar4);
      (*pcVar1)(this,param_1,pFVar5);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      break;
    case 4:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"GameViewportClient",L"ConnectingMessage",L"CONNECTING");
      pFVar5 = FText::ToString(pFVar4);
      (*pcVar1)(this,param_1,pFVar5);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      break;
    case 5:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"GameViewportClient",L"PrecachingMessage",L"PRECACHING");
      pFVar5 = FText::ToString(pFVar4);
      (*pcVar1)(this,param_1,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      break;
    case 6:
      pcVar1 = *(code **)(this->_padding_ + 0x388);
      ::FString::FString(&local_68,L"Waiting to connect...");
      (*pcVar1)(this,param_1,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DrawTransitionMessage @ 147c4c2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::DrawTransitionMessage
          (UGameViewportClient *this,UCanvas *param_1,FString *param_2)

{
  int iVar1;
  UFont *pUVar2;
  FText *pFVar3;
  float local_res10 [2];
  float local_res18 [2];
  TStringView<wchar_t> local_238;
  undefined1 local_228 [152];
  longlong local_190;
  longlong lStack_188;
  FText local_20;
  
  pUVar2 = UEngine::GetLargeFont();
  pFVar3 = FText::GetEmpty();
  FCanvasTextItem::FCanvasTextItem
            ((FCanvasTextItem *)local_228,&UE::Math::TVector2<double>::ZeroVector,pFVar3,pUVar2,
             &FLinearColor::Blue);
  local_228._72_4_ = local_228._72_4_ | 2;
  local_228._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_190 = ___xmm_3ff00000000000003ff0000000000000;
  lStack_188 = _UNK_150689688;
  pFVar3 = FText::FromString((FText *)&local_238,param_2);
  FText::operator=(&local_20,pFVar3);
  if (local_238.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_238.DataPtr + 0x10))();
  }
  local_238.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_238.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_238.Size = 0;
  }
  UCanvas::StrLen(param_1,pUVar2,&local_238,local_res18,local_res10,false);
  UCanvas::DrawItem(param_1,(FCanvasItem *)local_228,
                    (param_1->ClipX - local_res18[0]) * __real_3f000000,
                    param_1->ClipY * __real_3f28f5c3 - local_res10[0] * __real_3f000000);
  FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_228);
  return;
}

// EnableCsvPlayerStats @ 147c4d320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::EnableCsvPlayerStats(UGameViewportClient *this,int param_1)

{
  code *pcVar1;
  byte bVar2;
  TMap<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
  *pTVar3;
  bool bVar4;
  uint uVar5;
  FCsvLocalPlayer *pFVar6;
  FString *pFVar7;
  FCsvProfiler *this_00;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined4 local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  FString local_c8;
  TMap<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  FString local_48;
  
  uVar12 = 0;
  uVar14 = 0;
  local_res10[0] = 0;
  iStack_90 = GCsvLocalPlayers._8_4_;
  iVar11 = GCsvLocalPlayers._52_4_;
  uVar13 = iStack_90 - iVar11;
  uVar10 = uVar12;
  if ((int)uVar13 < param_1) {
    do {
      local_res18[0] = uVar13;
      pFVar6 = TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
               ::Emplace<unsigned_int>
                         ((TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
                           *)&GCsvLocalPlayers,local_res18);
      if (uVar13 == 0) {
        uVar10 = uVar10 | 1;
        pFVar7 = ::FString::FString(&local_48,L"View");
      }
      else {
        uVar10 = uVar10 | 2;
        ::FString::PrintfImpl(&local_58,L"View%d");
        pFVar7 = &local_58;
      }
      local_c8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_c8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      if (((uVar10 & 2) != 0) &&
         (uVar10 = uVar10 & 0xfffffffd,
         local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (((uVar10 & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffffffe,
         local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FCsvProfiler::Get();
      uVar5 = FCsvProfiler::RegisterCategory(&local_c8,uVar13 == 0,false);
      pFVar6->CategoryIndex = uVar5;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < param_1);
    iVar11 = GCsvLocalPlayers._52_4_;
    iStack_90 = GCsvLocalPlayers._8_4_;
  }
  uStack_ac = 1;
  local_98 = 0;
  uVar10 = GCsvLocalPlayers._40_4_;
  uStack_9c = local_98;
  if (uVar10 != 0) {
    puVar15 = (uint *)&GCsvLocalPlayers.field_0x10;
    if (GCsvLocalPlayers._32_8_ != 0) {
      puVar15 = (uint *)GCsvLocalPlayers._32_8_;
    }
    uVar13 = *puVar15;
    uVar14 = uVar12;
    local_98 = uVar12;
    while (uVar13 == 0) {
      lVar8 = (longlong)(int)uVar14;
      local_98 = local_98 + 0x20;
      uVar14 = uVar14 + 1;
      uStack_9c = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_147c4d4e0;
      uVar13 = puVar15[lVar8 + 1];
    }
    uStack_ac = -uVar13 & uVar13;
    uVar16 = (ulonglong)uStack_ac * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uStack_9c = (local_98 - 1) + local_res20;
    if ((int)uVar10 < (int)uStack_9c) {
      uStack_9c = uVar10;
    }
  }
LAB_147c4d4e0:
  iStack_90 = iStack_90 - iVar11;
  local_a8 = 0x154c438b0;
  local_b8 = &GCsvLocalPlayers;
  bVar2 = GCsvLocalPlayers._40_1_;
  uStack_a0 = 0xffffffff;
  TStack_80.CurrentBitIndex = uStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  uVar13 = uVar10 & 0xffffffe0;
  uVar16 = GCsvLocalPlayers._40_8_ & 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,uVar14);
  local_88 = &GCsvLocalPlayers;
  iVar11 = (int)uVar10 >> 5;
  TStack_80._28_4_ = uStack_9c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GCsvLocalPlayers.field_0x10;
  uVar5 = uVar10;
  uStack_b0 = uVar14;
  uStack_94 = uStack_9c;
  if ((int)uVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = GCsvLocalPlayers._40_4_;
  }
  if (uVar10 != uVar5) {
    lVar8 = 0x154c438b0;
    if (GCsvLocalPlayers._32_8_ != 0) {
      lVar8 = GCsvLocalPlayers._32_8_;
    }
    uVar14 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) {
        uVar16 = (ulonglong)uVar5;
        uVar12 = 0;
        goto LAB_147c4d5e0;
      }
      uVar14 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar13;
    uVar16 = (ulonglong)uVar13;
    if ((int)uVar5 < (int)uVar13) {
      uVar16 = (ulonglong)uVar5;
    }
  }
LAB_147c4d5e0:
  while( true ) {
    pTVar3 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FCsvLocalPlayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar8 = (longlong)TStack_80.CurrentBitIndex;
    if (((TStack_80.CurrentBitIndex == (int)uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&GCsvLocalPlayers.field_0x10))
       && (pTVar3 == &GCsvLocalPlayers)) break;
    lVar9 = *(longlong *)pTVar3;
    this_00 = FCsvProfiler::Get();
    FCsvProfiler::EnableCategoryByIndex
              (this_00,*(uint *)(lVar8 * 0x38 + 8 + lVar9),(int)uVar12 < param_1);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    uVar12 = uVar12 + 1;
  }
  return;
}

// Exec @ 147c4dad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::Exec
          (UGameViewportClient *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = FExec::Exec((FExec *)this,param_1,param_2,param_3);
  if (((!bVar2) &&
      (cVar3 = (**(code **)(*(longlong *)&this[-1].OnOverrideInputAxisEvent.field_0x8 + 0x278))
                         (&this[-1].OnOverrideInputAxisEvent.field_0x8,param_2,param_3,0),
      cVar3 == '\0')) &&
     ((lVar1 = this->_padding_, lVar1 == 0 ||
      ((cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))(lVar1 + 0x28,param_1,param_2,param_3)
       , cVar3 == '\0' &&
       (cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x278))
                          ((longlong *)this->_padding_,param_2,param_3,0), cVar3 == '\0')))))) {
    cVar3 = (**(code **)(GEngine->_padding_ + 8))(&GEngine->_padding_,param_1,param_2,param_3);
    return cVar3 != '\0';
  }
  return true;
}

// Exec_Runtime @ 147c4db90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::Exec_Runtime
          (UGameViewportClient *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int *piVar1;
  UParticleSystemComponent *this_00;
  USkinnedMeshComponent *this_01;
  FSceneInterface *pFVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  Type TVar11;
  EInternalObjectFlags EVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FHighResScreenshotConfig *this_02;
  UClass *pUVar16;
  FSceneInterface *pFVar17;
  uint *puVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  wchar_t *local_res18;
  int local_98 [2];
  wchar_t *local_90;
  TObjectIterator<UParticleSystemComponent> local_88;
  TObjectIterator<USkeletalMeshComponent> local_70;
  FString local_58;
  FString local_48;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  TIntRect<int>_u_0 local_28;
  
  local_res18 = param_2;
  bVar5 = FParse::Command(&local_res18,L"FORCEFULLSCREEN",true);
  if (bVar5) {
    GForceFullscreen = GForceFullscreen == false;
    return true;
  }
  bVar5 = FParse::Command(&local_res18,L"SHOW",true);
  if (bVar5) {
    bVar5 = HandleShowCommand((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                              local_res18,param_3,param_1);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"SHOWLAYER",true);
  if (bVar5) {
    bVar5 = HandleShowLayerCommand
                      ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                       local_res18,param_3,param_1);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"VIEWMODE",true);
  if (bVar5) {
    bVar5 = HandleViewModeCommand
                      ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                       local_res18,param_3,param_1);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"NEXTVIEWMODE",true);
  if (bVar5) {
    bVar5 = HandleNextViewModeCommand
                      ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                       local_res18,param_3,param_1);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"PREVVIEWMODE",true);
  if (bVar5) {
    bVar5 = HandlePrevViewModeCommand
                      ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                       local_res18,param_3,param_1);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"PRECACHE",true);
  if (bVar5) {
    (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent + 8))(&this[-1].OnInputAxisEvent);
    return true;
  }
  bVar5 = FParse::Command(&local_res18,L"TOGGLE_FULLSCREEN",true);
  if ((bVar5) || (bVar5 = FParse::Command(&local_res18,L"FULLSCREEN",true), bVar5)) {
    bVar5 = HandleToggleFullscreenCommand
                      ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8);
    return bVar5;
  }
  bVar5 = FParse::Command(&local_res18,L"SETRES",true);
  pwVar15 = local_res18;
  if (!bVar5) {
    bVar5 = FParse::Command(&local_res18,L"HighResShot",true);
    pwVar15 = local_res18;
    if (bVar5) {
      if ((this->AudioDevice).World.WeakPtr == (FWeakObjectPtr)0x0) {
        return true;
      }
      this_02 = GetHighResScreenshotConfig();
      ::FString::FString(&local_48,pwVar15);
      bVar5 = FHighResScreenshotConfig::ParseConsoleCommand(this_02,&local_48,param_3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        return true;
      }
      FViewport::TakeHighResScreenShot((FViewport *)(this->AudioDevice).World.WeakPtr);
      return true;
    }
    bVar5 = FParse::Command(&local_res18,L"HighResShotUI",true);
    if (bVar5) {
      return true;
    }
    bVar5 = FParse::Command(&local_res18,L"SHOT",true);
    if ((bVar5) || (bVar5 = FParse::Command(&local_res18,L"SCREENSHOT",true), bVar5)) {
      local_90 = local_res18;
      if ((this->AudioDevice).World.WeakPtr == (FWeakObjectPtr)0x0) {
        return true;
      }
      bVar5 = FParse::Command(&local_90,L"SHOWUI",true);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      bVar7 = FParse::Param(local_90,L"showui");
      if ((bVar7) || (bVar5)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      FParse::Value(local_90,L"filename=",&local_58,true,(wchar_t **)0x0);
      bVar7 = FParse::Param(local_90,L"nosuffix");
      local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      bVar8 = (bool)(**(code **)(*(longlong *)(this->AudioDevice).World.WeakPtr + 0x48))();
      FScreenshotRequest::RequestScreenshot
                (&local_58,bVar5,!bVar7,bVar8,(TIntRect<int> *)&local_28._s_0);
      FVar3 = (this->AudioDevice).World.WeakPtr;
      puVar18 = (uint *)(**(code **)(*(longlong *)FVar3 + 0x1e0))(FVar3,local_38);
      GScreenshotResolutionX = *puVar18;
      FVar3 = (this->AudioDevice).World.WeakPtr;
      lVar20 = (**(code **)(*(longlong *)FVar3 + 0x1e0))(FVar3,local_30);
      GScreenshotResolutionY = *(uint *)(lVar20 + 4);
      FVar19.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      bVar5 = FParse::Command(&local_res18,L"BUGSCREENSHOTWITHHUDINFO",true);
      if (bVar5) {
        bVar5 = RequestBugScreenShot
                          ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                           local_res18,true);
        return bVar5;
      }
      bVar5 = FParse::Command(&local_res18,L"BUGSCREENSHOT",true);
      if (bVar5) {
        bVar5 = RequestBugScreenShot
                          ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                           local_res18,false);
        return bVar5;
      }
      bVar5 = FParse::Command(&local_res18,L"KILLPARTICLES",true);
      if (bVar5) {
        local_88.Index = 0xffffffff;
        local_88.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.ObjectArray.ArrayNum = 0;
        local_88.ObjectArray.ArrayMax = 0;
        EVar12 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar16 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
        GetObjectsOfClass(pUVar16,&local_88.ObjectArray,true,RF_ClassDefaultObject,
                          EVar12 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<UParticleSystemComponent>::Advance(&local_88);
          lVar20 = (longlong)local_88.Index;
          if ((local_88.Index < 0) || (local_88.ObjectArray.ArrayNum <= local_88.Index)) {
            if (local_88.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.ObjectArray.AllocatorInstance.Data);
            }
            GIsAllowingParticles = false;
            return true;
          }
          uVar13 = 0;
          if (local_88.Index < local_88.ObjectArray.ArrayNum) {
            uVar13 = (uint)~local_88.Index >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) break;
          this_00 = *(UParticleSystemComponent **)
                     (local_88.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
          UParticleSystemComponent::DeactivateSystem(this_00);
          UParticleSystemComponent::KillParticlesForced(this_00);
        }
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = FParse::Command(&local_res18,L"FORCESKELLOD",true);
      if (!bVar5) {
        bVar5 = FParse::Command(&local_res18,L"DISPLAY",true);
        if (bVar5) {
          bVar5 = HandleDisplayCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"DISPLAYALL",true);
        if (bVar5) {
          bVar5 = HandleDisplayAllCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"DISPLAYALLLOCATION",true);
        if (bVar5) {
          bVar5 = HandleDisplayAllLocationCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"DISPLAYALLROTATION",true);
        if (bVar5) {
          bVar5 = HandleDisplayAllRotationCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"DISPLAYCLEAR",true);
        if (bVar5) {
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *(undefined4 *)&this->_padding_ = 0;
          if (*piVar1 == 0) {
            return true;
          }
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
          return true;
        }
        bVar5 = FParse::Command(&local_res18,L"GETALLLOCATION",true);
        if (bVar5) {
          bVar5 = HandleGetAllLocationCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"GETALLROTATION",true);
        if (bVar5) {
          bVar5 = HandleGetAllRotationCommand
                            ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                             local_res18,param_3);
          return bVar5;
        }
        bVar5 = FParse::Command(&local_res18,L"TEXTUREDEFRAG",true);
        if (bVar5) {
          return true;
        }
        bVar5 = FParse::Command(&local_res18,L"TOGGLEMIPFADE",true);
        if (bVar5) {
          bVar5 = 0.0 <= GEnableMipLevelFading;
          GEnableMipLevelFading = __real_3f800000;
          if (bVar5) {
            GEnableMipLevelFading = __real_bf800000;
          }
          FOutputDevice::LogfImpl(param_3,L"Mip-fading is now: %s");
          return true;
        }
        bVar5 = FParse::Command(&local_res18,L"PAUSERENDERCLOCK",true);
        if (!bVar5) {
          return false;
        }
        bVar5 = HandlePauseRenderClockCommand
                          ((UGameViewportClient *)&this[-1].OnOverrideInputAxisEvent.field_0x8,
                           local_res18,param_3);
        return bVar5;
      }
      local_98[0] = 0;
      bVar5 = FParse::Value(local_res18,L"LOD=",local_98);
      if (bVar5) {
        local_98[0] = local_98[0] + 1;
      }
      local_70.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ObjectArray.ArrayNum = 0;
      local_70.ObjectArray.ArrayMax = 0;
      local_70.Index = 0xffffffff;
      EVar12 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar16 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      GetObjectsOfClass(pUVar16,&local_70.ObjectArray,true,RF_ClassDefaultObject,
                        EVar12 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<USkeletalMeshComponent>::Advance(&local_70);
        lVar20 = (longlong)local_70.Index;
        FVar19.Data = local_70.ObjectArray.AllocatorInstance.Data;
        if ((local_70.Index < 0) || (local_70.ObjectArray.ArrayNum <= local_70.Index)) break;
        uVar13 = 0;
        if (local_70.Index < local_70.ObjectArray.ArrayNum) {
          uVar13 = (uint)~local_70.Index >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_01 = *(USkinnedMeshComponent **)
                   (local_70.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
        pFVar2 = param_1->Scene;
        pFVar17 = UActorComponent::GetScene((UActorComponent *)this_01);
        if ((pFVar17 == pFVar2) &&
           (bVar5 = UObjectBaseUtility::IsTemplate
                              ((UObjectBaseUtility *)this_01,
                               RF_ArchetypeObject|RF_ClassDefaultObject), !bVar5)) {
          USkinnedMeshComponent::SetForcedLOD(this_01,local_98[0]);
        }
      }
    }
    if (FVar19.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(FVar19.Data);
    return true;
  }
  if ((this->AudioDevice).World.WeakPtr == (FWeakObjectPtr)0x0) {
    return true;
  }
  if ((this->AudioDevice).Device == (FAudioDevice *)0x0) {
    return true;
  }
  iVar9 = _wtoi(local_res18);
  pwVar14 = wcschr(pwVar15,L'x');
  if (pwVar14 == (wchar_t *)0x0) {
    pwVar14 = wcschr(pwVar15,L'X');
    if (pwVar14 == (wchar_t *)0x0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = wcschr(pwVar15,L'X');
      pwVar15 = pwVar15 + 1;
    }
  }
  else {
    pwVar15 = wcschr(pwVar15,L'x');
    pwVar15 = pwVar15 + 1;
  }
  iVar10 = _wtoi(pwVar15);
  TVar11 = (**(code **)(*(longlong *)(this->AudioDevice).World.WeakPtr + 0x140))();
  pwVar14 = wcschr(pwVar15,L'w');
  if ((pwVar14 == (wchar_t *)0x0) && (pwVar14 = wcschr(pwVar15,L'W'), pwVar14 == (wchar_t *)0x0)) {
    pwVar14 = wcschr(pwVar15,L'f');
    if ((pwVar14 != (wchar_t *)0x0) || (pwVar15 = wcschr(pwVar15,L'F'), pwVar15 != (wchar_t *)0x0))
    {
      TVar11 = Fullscreen;
    }
  }
  else {
    pwVar14 = wcschr(pwVar15,L'f');
    if (pwVar14 == (wchar_t *)0x0) {
      pwVar15 = wcschr(pwVar15,L'F');
      TVar11 = Windowed;
      if (pwVar15 == (wchar_t *)0x0) goto LAB_147c4de66;
    }
    TVar11 = WindowedFullscreen;
  }
LAB_147c4de66:
  if ((iVar9 != 0) && (iVar10 != 0)) {
    FSystemResolution::RequestResolutionChange(iVar9,iVar10,TVar11);
  }
  return true;
}

// FinalizeViews @ 147c4fe60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::FinalizeViews
          (UGameViewportClient *this,FSceneViewFamily *param_1,
          TMap<ULocalPlayer_*,FSceneView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>_>
          *param_2)

{
  return;
}

// GetCursor @ 147c55e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Type __thiscall
UGameViewportClient::GetCursor(UGameViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  UGameInstance *this_00;
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  Type TVar2;
  FSlateApplication *pFVar3;
  APlayerController *pAVar4;
  
  pFVar3 = FSlateApplication::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x98))(param_1);
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(param_1->_padding_ + 0xa0))(param_1), cVar1 == '\0')) {
      return Default;
    }
    if (((longlong *)this->_padding_ != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x3a0))(), cVar1 != '\0')) {
      return Default;
    }
    this_00 = *(UGameInstance **)&(this->DebugProperties).ArrayNum;
    if ((this_00 != (UGameInstance *)0x0) &&
       (pAVar4 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
       pAVar4 != (APlayerController *)0x0)) {
      pAVar4 = UGameInstance::GetFirstLocalPlayerController
                         (*(UGameInstance **)&(this->DebugProperties).ArrayNum,(UWorld *)0x0);
      UNRECOVERED_JUMPTABLE = *(code **)(pAVar4->_padding_ + 0xf10);
                    /* WARNING: Could not recover jumptable at 0x000147c55f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      TVar2 = (*UNRECOVERED_JUMPTABLE)(pAVar4,UNRECOVERED_JUMPTABLE);
      return TVar2;
    }
  }
  return Default;
}

// GetEnabledStats @ 147c56d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UGameViewportClient::GetEnabledStats(UGameViewportClient *this)

{
  return &EnabledStats;
}

// GetEngineShowFlags @ 147c56d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEngineShowFlags * __thiscall UGameViewportClient::GetEngineShowFlags(UGameViewportClient *this)

{
  return (FEngineShowFlags *)&this->bSuppressTransitionMessage;
}

// GetGameInstance @ 147c56e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall UGameViewportClient::GetGameInstance(UGameViewportClient *this)

{
  return (this->GameInstance).field0_0x0.DebugPtr;
}

// GetGameViewport @ 147c56fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneViewport * __thiscall UGameViewportClient::GetGameViewport(UGameViewportClient *this)

{
  FViewport *pFVar1;
  FSceneViewport *pFVar2;
  
  pFVar1 = this->Viewport;
  pFVar2 = (FSceneViewport *)0x0;
  if ((pFVar1 != (FViewport *)0x0) && (pFVar1->ViewportType == NAME_SceneViewport)) {
    pFVar2 = (FSceneViewport *)&pFVar1[-1].ViewportType.Number;
  }
  return pFVar2;
}

// GetGameViewport @ 147c56fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneViewport * __thiscall UGameViewportClient::GetGameViewport(UGameViewportClient *this)

{
  FViewport *pFVar1;
  FSceneViewport *pFVar2;
  
  pFVar1 = this->Viewport;
  pFVar2 = (FSceneViewport *)0x0;
  if ((pFVar1 != (FViewport *)0x0) && (pFVar1->ViewportType == NAME_SceneViewport)) {
    pFVar2 = (FSceneViewport *)&pFVar1[-1].ViewportType.Number;
  }
  return pFVar2;
}

// GetGameViewportWidget @ 147c57010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<SViewport,1> * __thiscall
UGameViewportClient::GetGameViewportWidget
          (UGameViewportClient *this,TSharedPtr<SViewport,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FViewport *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  SViewport *pSVar7;
  bool bVar8;
  
  pFVar3 = this->Viewport;
  if (((pFVar3 == (FViewport *)0x0) || (pFVar3->ViewportType != NAME_SceneViewport)) ||
     (pFVar3 == (FViewport *)&DAT_00000008)) {
    __return_storage_ptr__->Object = (SViewport *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pSVar7 = *(SViewport **)&pFVar3[2].SizeX;
    pTVar4 = *(TReferenceControllerBase<1> **)&pFVar3[2].HitProxySize;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (SViewport *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pSVar7 = (SViewport *)0x0;
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar5 = pTVar4->SharedReferenceCount;
      bVar8 = aVar2 == aVar5;
      if (bVar8) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pTVar6 = pTVar4;
      aVar2 = aVar5;
    } while (!bVar8);
    __return_storage_ptr__->Object = pSVar7;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetMouseCaptureMode @ 147c57970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMouseCaptureMode __thiscall UGameViewportClient::GetMouseCaptureMode(UGameViewportClient *this)

{
  return (this->OnInputAxisEvent).field_0x2;
}

// GetMouseLockMode @ 147c57980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMouseLockMode __thiscall UGameViewportClient::GetMouseLockMode(UGameViewportClient *this)

{
  return this->MouseLockMode;
}

// GetMousePosition @ 147c57990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::GetMousePosition(UGameViewportClient *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int local_res8;
  int iStackX_c;
  
  if (this->Viewport != (FViewport *)0x0) {
    FSlateApplication::Get();
    if (FSlateApplicationBase::PlatformApplication.Object != (GenericApplication *)0x0) {
      if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      cVar4 = (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x90))()
      ;
      if (((cVar4 != '\0') &&
          ((**(code **)(this->Viewport->_padding_ + 0x110))(this->Viewport,&local_res8,1),
          -1 < local_res8)) && (-1 < iStackX_c)) {
        (param_1->field0_0x0)._s_0.X = (double)local_res8;
        (param_1->field0_0x0)._s_0.Y = (double)iStackX_c;
        return true;
      }
    }
  }
  return false;
}

// GetPixelSizeOfScreen @ 147c58c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::GetPixelSizeOfScreen
          (UGameViewportClient *this,float *param_1,float *param_2,UCanvas *param_3,int param_4)

{
  float fVar1;
  
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
    *param_1 = param_3->ClipX;
    *param_2 = param_3->ClipY;
    return;
  case '\x01':
    *param_1 = param_3->ClipX;
    *param_2 = param_3->ClipY + param_3->ClipY;
    return;
  case '\x02':
    *param_1 = param_3->ClipX + param_3->ClipX;
    *param_2 = param_3->ClipY;
    return;
  case '\x03':
    fVar1 = param_3->ClipX;
    if (param_4 != 0) {
      fVar1 = fVar1 + fVar1;
    }
    break;
  case '\x04':
    fVar1 = param_3->ClipX;
    if (param_4 != 2) {
      *param_1 = fVar1 + fVar1;
      *param_2 = param_3->ClipY + param_3->ClipY;
      return;
    }
    break;
  case '\x05':
    *param_1 = param_3->ClipX * __real_40400000;
    *param_2 = param_3->ClipY;
    return;
  case '\x06':
    *param_1 = param_3->ClipX;
    *param_2 = param_3->ClipY * __real_40400000;
    return;
  case '\a':
    *param_1 = param_3->ClipX + param_3->ClipX;
    *param_2 = param_3->ClipY + param_3->ClipY;
    return;
  case '\b':
    *param_1 = param_3->ClipX * __real_40800000;
    *param_2 = param_3->ClipY;
    return;
  case '\t':
    *param_1 = param_3->ClipX;
    *param_2 = param_3->ClipY * __real_40800000;
  default:
    return;
  }
  *param_1 = fVar1;
  *param_2 = param_3->ClipY + param_3->ClipY;
  return;
}

// GetPrivateStaticClass @ 147c5a240

UClass * __cdecl UGameViewportClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameViewportClient",
               &Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton,
               StaticRegisterNativesUGameViewportClient,0x460,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameViewportClient>,
               InternalVTableHelperCtorCaller<UGameViewportClient>,local_res8,
               UScriptViewportClient::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameViewportClient.InnerSingleton;
}

// GetSoftwareCursorWidget @ 147c5adc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UGameViewportClient::GetSoftwareCursorWidget
          (UGameViewportClient *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,Type param_1)

{
  longlong lVar1;
  SWidget *pSVar2;
  Type TVar3;
  Type *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  Type TVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->CursorWidgets).field_0x8 != *(int *)&(this->CursorWidgets).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CursorWidgets).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CursorWidgets).field_0x38;
    }
    TVar6 = *(Type *)(puVar7 + (ulonglong)
                               (*(int *)&(this->CursorWidgets).field_0x48 - Default & param_1) * 4);
    if (TVar6 != ~None) {
      lVar1 = *(longlong *)&this->CursorWidgets;
      TVar3 = TVar6;
      do {
        if (*(Type *)((longlong)(int)TVar3 * 0x20 + lVar1) == param_1) goto LAB_147c5ae30;
        TVar3 = *(Type *)((longlong)(int)TVar3 * 0x20 + 0x18 + lVar1);
      } while (TVar3 != ~None);
    }
  }
  goto LAB_147c5ae4e;
  while (TVar6 = pTVar4[6], TVar6 != ~None) {
LAB_147c5ae30:
    pTVar4 = (Type *)((longlong)(int)TVar6 * 0x20 + lVar1);
    if (*pTVar4 == param_1) {
      if (pTVar4 != (Type *)0x0) {
        pSVar2 = *(SWidget **)(pTVar4 + 2);
        pTVar5 = *(TReferenceControllerBase<1> **)(pTVar4 + 4);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pSVar2 != (SWidget *)0x0) {
          __return_storage_ptr__->Object = pSVar2;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          return __return_storage_ptr__;
        }
        goto LAB_147c5ae49;
      }
      break;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
LAB_147c5ae49:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_147c5ae4e:
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatHitchesData @ 147c5aeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStatHitchesData * __thiscall UGameViewportClient::GetStatHitchesData(UGameViewportClient *this)

{
  return *(FStatHitchesData **)&(this->OnInputKeyEvent).field_0x18;
}

// GetStatUnitData @ 147c5b020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStatUnitData * __thiscall UGameViewportClient::GetStatUnitData(UGameViewportClient *this)

{
  return *(FStatUnitData **)&(this->OnInputKeyEvent).field_0x10;
}

// GetSubtitleRegion @ 147c5c520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::GetSubtitleRegion
          (UGameViewportClient *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UEngine *this_00;
  
  (param_2->field0_0x0)._s_0.X = 1.0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UEngine *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UEngine *)0x0;
  }
  iVar3 = UEngine::GetNumGamePlayers(this_00,this);
  if (iVar3 == 1) {
    (param_2->field0_0x0)._s_0.Y = __real_3fecccccc0000000;
    return;
  }
  (param_2->field0_0x0)._s_0.Y = __real_3fe0000000000000;
  return;
}

// GetUseMouseForTouch @ 147c5cf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::GetUseMouseForTouch(UGameViewportClient *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  return (bool)((byte)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 >> 2 & 1);
}

// GetViewStatusForScreenPercentage @ 147c5e2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EViewStatusForScreenPercentage __thiscall
UGameViewportClient::GetViewStatusForScreenPercentage(UGameViewportClient *this)

{
  UWorld *pUVar1;
  
  if ((this->EngineShowFlags).PathTracing != 0) {
    return PathTracer;
  }
  if ((this->EngineShowFlags).StereoRendering != 0) {
    return VR;
  }
  pUVar1 = (this->World).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorld *)0x0) {
    return ((pUVar1->FeatureLevel).Value == '\x01') + Desktop;
  }
  return Desktop;
}

// GetViewportSize @ 147c5e390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::GetViewportSize(UGameViewportClient *this,TVector2<double> *param_1)

{
  FViewport *pFVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  pFVar1 = this->Viewport;
  if (pFVar1 != (FViewport *)0x0) {
    piVar2 = (int *)(**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,local_res8);
    (param_1->field0_0x0)._s_0.X = (double)*piVar2;
    lVar3 = (**(code **)(this->Viewport->_padding_ + 0x28))(this->Viewport,local_res8);
    (param_1->field0_0x0)._s_0.Y = (double)*(int *)(lVar3 + 4);
  }
  return;
}

// GetWorld @ 147c5eb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UGameViewportClient::GetWorld(UGameViewportClient *this)

{
  return (this->World).field0_0x0.DebugPtr;
}

// GetWorld`adjustor{48}' @ 147c5eba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UWorld * __ptr64 __cdecl
   UGameViewportClient::GetWorld`adjustor{48}' (void)const __ptr64 */

UWorld * __thiscall UGameViewportClient::GetWorld_adjustor_48__(UGameViewportClient *this)

{
  UWorld *pUVar1;
  
  pUVar1 = GetWorld((UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8);
  return pUVar1;
}

// HandleBugScreenshotCommand @ 147c5f1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleBugScreenshotCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  
  bVar1 = RequestBugScreenShot(this,param_1,false);
  return bVar1;
}

// HandleBugScreenshotwithHUDInfoCommand @ 147c5f1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleBugScreenshotwithHUDInfoCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  
  bVar1 = RequestBugScreenShot(this,param_1,true);
  return bVar1;
}

// HandleDisplayAllCommand @ 147c5f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleDisplayAllCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  EInternalObjectFlags EVar7;
  size_t sVar8;
  UClass *pUVar9;
  FProperty *pFVar10;
  UStruct *pUVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  FUObjectItem *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *_Source;
  int iVar17;
  FProperty *pFVar18;
  undefined1 auStackY_4e8 [32];
  TStringView<wchar_t> local_4b8;
  FName local_4a8;
  FString local_4a0;
  wchar_t *local_490;
  FString local_488;
  TObjectIteratorBase<1> local_478;
  FScriptContainerElement local_448 [510];
  undefined2 local_24a;
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pFVar18 = (FProperty *)0x0;
  local_490 = param_1;
  bVar4 = FParse::Token(&local_490,(wchar_t *)local_448,0x100,true,L'\0');
  if (!bVar4) {
    return true;
  }
  bVar4 = true;
  iVar17 = 0;
  ::FString::FString(&local_4a0,(wchar_t *)local_448);
  iVar5 = ::FString::Find(&local_4a0,L".",1,IgnoreCase,FromStart,-1);
  pFVar10 = pFVar18;
  if (iVar5 == -1) goto LAB_147c5f3e2;
  iVar6 = local_4a0.Data.ArrayNum + -1;
  if (local_4a0.Data.ArrayNum == 0) {
    iVar6 = iVar17;
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  iVar15 = 0;
  if (0 < iVar6) {
    iVar15 = iVar6;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_4a0.Data.ArrayNum != 0) {
    FVar16.Data = local_4a0.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_488,(wchar_t *)FVar16.Data,iVar15);
  if (local_488.Data.ArrayNum == 0) {
    local_4b8.DataPtr = L"";
LAB_147c5f2f5:
    sVar8 = wcslen(local_4b8.DataPtr);
    local_4b8.Size = (int)sVar8;
  }
  else {
    local_4b8.DataPtr = (wchar_t *)local_488.Data.AllocatorInstance.Data;
    local_4b8.Size = iVar17;
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_147c5f2f5;
  }
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  pFVar10 = (FProperty *)
            StaticFindFirstObject(pUVar9,&local_4b8,None,Warning,L"HandleDisplayAllCommand");
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (pFVar10 == (FProperty *)0x0) {
    FOutputDevice::Log(param_2,L"Within class not found");
    bVar4 = false;
  }
  else {
    iVar6 = local_4a0.Data.ArrayNum + -1;
    if (local_4a0.Data.ArrayNum == 0) {
      iVar6 = iVar17;
    }
    iVar6 = (iVar6 - iVar5) + -1;
    iVar5 = local_4a0.Data.ArrayNum + -1;
    if (local_4a0.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_4a0.Data.ArrayNum != 0) {
      FVar16.Data = local_4a0.Data.AllocatorInstance.Data;
    }
    iVar15 = iVar5;
    if (iVar6 < iVar5) {
      iVar15 = iVar6;
    }
    if (0 < iVar15) {
      iVar17 = iVar15;
    }
    ::FString::FString((FString *)&local_4b8,
                       (wchar_t *)(FVar16.Data + ((longlong)iVar5 - (longlong)iVar17) * 2));
    _Source = (FScriptContainerElement *)L"";
    if (local_4b8.Size != 0) {
      _Source = (FScriptContainerElement *)local_4b8.DataPtr;
    }
    wcsncpy((wchar_t *)local_448,(wchar_t *)_Source,0xff);
    local_24a = 0;
    if ((FScriptContainerElement *)local_4b8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.DataPtr);
    }
    sVar8 = wcslen((wchar_t *)local_448);
    bVar4 = 0 < (int)sVar8;
  }
LAB_147c5f3e2:
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FParse::Token(&local_490,local_248,0x100,true,L'\0');
    local_4b8.DataPtr = (wchar_t *)local_448;
    sVar8 = wcslen((wchar_t *)local_448);
    local_4b8.Size = (int)sVar8;
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    pUVar11 = (UStruct *)
              StaticFindFirstObject(pUVar9,&local_4b8,None,Warning,L"HandleDisplayAllCommand");
    if (pUVar11 != (UStruct *)0x0) {
      ::FName::FName(&local_4a8,local_248,FNAME_Find);
      local_4b8.DataPtr = (wchar_t *)0x0;
      pFVar12 = pFVar18;
      if (local_4a8 != (FName)0x0) {
        pFVar12 = FindFProperty<FProperty>(pUVar11,local_4a8,Default);
      }
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      TObjectIteratorBase<1>::TObjectIteratorBase<1>
                (&local_478,pUVar9,false,RF_ClassDefaultObject,
                 EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      lVar3 = local_478._padding_;
joined_r0x000147c5f4cc:
      do {
        if ((lVar3 == 0) ||
           (GUObjectArray.ObjLastNonGCIndex <
            *(int *)((longlong)&(*(FProperty **)(lVar3 + 8))->_padding_ + 4))) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(local_478._padding_ + 0x30));
          local_4b8.DataPtr = (wchar_t *)pFVar10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar10 != (FProperty *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pFVar10);
          }
          AddDebugDisplayProperty
                    (this,(UObject *)pUVar11,(TSubclassOf<UObject>)&local_4b8,&local_4a8,
                     pFVar12 == (FProperty *)0x0);
          return true;
        }
        pFVar13 = pFVar18;
        if (lVar3 != 0) {
          pFVar13 = *(FProperty **)(lVar3 + 8);
        }
        iVar17 = (int)pUVar11->_padding_;
        if ((iVar17 <= *(int *)(pFVar13->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pFVar13->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar11->_padding_)) {
          pFVar13 = pFVar18;
          if (lVar3 != 0) {
            pFVar13 = *(FProperty **)(lVar3 + 8);
          }
          bVar4 = UObjectBaseUtility::IsTemplate
                            ((UObjectBaseUtility *)pFVar13,RF_ArchetypeObject|RF_ClassDefaultObject)
          ;
          if (!bVar4) {
            if (pFVar10 == (FProperty *)0x0) {
LAB_147c5f577:
              local_4b8.DataPtr = (wchar_t *)0x0;
              pFVar13 = pFVar18;
              if (lVar3 != 0) {
                pFVar13 = *(FProperty **)(lVar3 + 8);
              }
              AddDebugDisplayProperty
                        (this,(UObject *)pFVar13,(TSubclassOf<UObject>)&local_4b8,&local_4a8,
                         pFVar12 == (FProperty *)0x0);
            }
            else {
              pFVar13 = pFVar18;
              if (lVar3 != 0) {
                pFVar13 = *(FProperty **)(lVar3 + 8);
              }
              if (pFVar13->_padding_ != 0) {
                pFVar13 = pFVar18;
                if (lVar3 != 0) {
                  pFVar13 = *(FProperty **)(lVar3 + 8);
                }
                uVar1 = (undefined4)pFVar10->PropertyFlags;
                lVar2 = *(longlong *)(pFVar13->_padding_ + 0x10);
                if (((int)uVar1 <= *(int *)(lVar2 + 0x38)) &&
                   ((int *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)(int)uVar1 * 8)
                    == &pFVar10->ArrayDim)) goto LAB_147c5f577;
              }
            }
          }
        }
        do {
          do {
            bVar4 = FUObjectArray::TIterator::Advance((TIterator *)&local_478);
            lVar3 = local_478._padding_;
            if (!bVar4) goto joined_r0x000147c5f4cc;
            pFVar13 = pFVar18;
            if (local_478._padding_ != 0) {
              pFVar13 = *(FProperty **)(local_478._padding_ + 8);
            }
          } while ((local_478.ExclusionFlags & (EObjectFlags)pFVar13->_padding_) != RF_NoFlags);
          pFVar13 = pFVar18;
          if (local_478._padding_ != 0) {
            pFVar13 = *(FProperty **)(local_478._padding_ + 8);
          }
          pFVar14 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pFVar13->_padding_ + 4));
        } while ((local_478.InternalExclusionFlags &
                 (EInternalObjectFlags)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
      } while( true );
    }
    FOutputDevice::Log(param_2,L"Object not found");
  }
  return true;
}

// HandleDisplayAllLocationCommand @ 147c5f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleDisplayAllLocationCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FNameEntryId FVar5;
  int iVar6;
  size_t sVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  undefined4 extraout_var;
  longlong lVar11;
  FUObjectItem *pFVar12;
  undefined4 extraout_var_00;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8 [16];
  TStringView<wchar_t> local_298;
  undefined1 local_288 [8];
  wchar_t *local_280;
  TObjectIteratorBase<1> local_278;
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_280 = param_1;
  bVar4 = FParse::Token(&local_280,local_248,0x100,true,L'\0');
  if (bVar4) {
    local_298.DataPtr = local_248;
    sVar7 = wcslen(local_248);
    local_298.Size = (int)sVar7;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    pUVar9 = StaticFindFirstObject
                       (pUVar8,&local_298,None,Warning,L"HandleDisplayAllLocationCommand");
    if (pUVar9 == (UObject *)0x0) {
      FOutputDevice::Log(param_2,L"Object not found");
    }
    else {
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      TObjectIteratorBase<1>::TObjectIteratorBase<1>
                (&local_278,pUVar8,true,RF_ClassDefaultObject,Borrowed);
      lVar2 = local_278._padding_;
joined_r0x000147c5f79f:
      if (lVar2 != 0) {
        pUVar15 = (UObject *)0x0;
        if (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*(UObject **)(lVar2 + 8))->field_0xc)
        goto LAB_147c5f944;
        pUVar10 = pUVar15;
        if (lVar2 != 0) {
          pUVar10 = *(UObject **)(lVar2 + 8);
        }
        if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar9[1].field_0x10 * 8) == &pUVar9[1].field_0x8)) {
          FVar5 = FNameEntryId::FromValidEName((EName)local_288);
          local_298.DataPtr = (wchar_t *)(ulonglong)*(uint *)CONCAT44(extraout_var,FVar5.Value);
          pwVar3 = local_298.DataPtr;
          if (lVar2 != 0) {
            pUVar15 = *(UObject **)(lVar2 + 8);
          }
          iVar6 = (this->DebugProperties).ArrayNum;
          pFVar16 = (this->DebugProperties).AllocatorInstance.Data;
          pFVar14 = pFVar16 + (longlong)iVar6 * 0x20;
          while( true ) {
            if ((this->DebugProperties).ArrayNum != iVar6) {
              `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_2a8);
            }
            if (pFVar16 == pFVar14) break;
            if (*(UObject **)pFVar16 == (UObject *)0x0) {
              bVar4 = pUVar15 == (UObject *)0x0;
            }
            else {
              bVar4 = *(UObject **)pFVar16 == pUVar15;
            }
            if ((bVar4) && (*(wchar_t **)(pFVar16 + 0x10) == pwVar3)) goto LAB_147c5f8e1;
            pFVar16 = pFVar16 + 0x20;
          }
          iVar6 = (this->DebugProperties).ArrayNum;
          piVar1 = &(this->DebugProperties).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
          }
          (this->DebugProperties).ArrayNum = iVar6 + 1;
          pFVar16 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
          DefaultConstructItems<FDebugDisplayProperty,int>(pFVar16,1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar15);
          }
          *(UObject **)pFVar16 = pUVar15;
          *(undefined8 *)(pFVar16 + 8) = 0;
          *(uint *)(pFVar16 + 0x18) = *(uint *)(pFVar16 + 0x18) | 1;
          *(wchar_t **)(pFVar16 + 0x10) = pwVar3;
        }
LAB_147c5f8e1:
        do {
          do {
            lVar13 = 0;
            bVar4 = FUObjectArray::TIterator::Advance((TIterator *)&local_278);
            lVar2 = local_278._padding_;
            if (!bVar4) goto joined_r0x000147c5f79f;
            lVar11 = lVar13;
            if (local_278._padding_ != 0) {
              lVar11 = *(longlong *)(local_278._padding_ + 8);
            }
          } while ((local_278.ExclusionFlags & *(EObjectFlags *)(lVar11 + 8)) != RF_NoFlags);
          if (local_278._padding_ != 0) {
            lVar13 = *(longlong *)(local_278._padding_ + 8);
          }
          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar13 + 0xc));
        } while ((local_278.InternalExclusionFlags &
                 (EInternalObjectFlags)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x000147c5f79f;
      }
LAB_147c5f944:
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_278._padding_ + 0x30));
      FVar5 = FNameEntryId::FromValidEName((EName)local_288);
      iVar6 = (this->DebugProperties).ArrayNum;
      pFVar16 = (this->DebugProperties).AllocatorInstance.Data;
      pFVar14 = pFVar16 + (longlong)iVar6 * 0x20;
      local_298.DataPtr = (wchar_t *)(ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar5.Value);
      pwVar3 = local_298.DataPtr;
      while( true ) {
        if ((this->DebugProperties).ArrayNum != iVar6) {
          `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2a8);
        }
        if (pFVar16 == pFVar14) break;
        if (((*(UObject **)pFVar16 != (UObject *)0x0) && (*(UObject **)pFVar16 == pUVar9)) &&
           (*(wchar_t **)(pFVar16 + 0x10) == pwVar3)) {
          return true;
        }
        pFVar16 = pFVar16 + 0x20;
      }
      iVar6 = (this->DebugProperties).ArrayNum;
      piVar1 = &(this->DebugProperties).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
      }
      (this->DebugProperties).ArrayNum = iVar6 + 1;
      pFVar16 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
      DefaultConstructItems<FDebugDisplayProperty,int>(pFVar16,1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *(UObject **)pFVar16 = pUVar9;
      *(undefined8 *)(pFVar16 + 8) = 0;
      *(uint *)(pFVar16 + 0x18) = *(uint *)(pFVar16 + 0x18) | 1;
      *(wchar_t **)(pFVar16 + 0x10) = pwVar3;
    }
  }
  return true;
}

// HandleDisplayAllRotationCommand @ 147c5faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleDisplayAllRotationCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FNameEntryId FVar5;
  int iVar6;
  size_t sVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  undefined4 extraout_var;
  longlong lVar11;
  FUObjectItem *pFVar12;
  undefined4 extraout_var_00;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8 [16];
  TStringView<wchar_t> local_298;
  undefined1 local_288 [8];
  wchar_t *local_280;
  TObjectIteratorBase<1> local_278;
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_280 = param_1;
  bVar4 = FParse::Token(&local_280,local_248,0x100,true,L'\0');
  if (bVar4) {
    local_298.DataPtr = local_248;
    sVar7 = wcslen(local_248);
    local_298.Size = (int)sVar7;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    pUVar9 = StaticFindFirstObject
                       (pUVar8,&local_298,None,Warning,L"HandleDisplayAllRotationCommand");
    if (pUVar9 == (UObject *)0x0) {
      FOutputDevice::Log(param_2,L"Object not found");
    }
    else {
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      TObjectIteratorBase<1>::TObjectIteratorBase<1>
                (&local_278,pUVar8,true,RF_ClassDefaultObject,Borrowed);
      lVar2 = local_278._padding_;
joined_r0x000147c5fb9f:
      if (lVar2 != 0) {
        pUVar15 = (UObject *)0x0;
        if (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*(UObject **)(lVar2 + 8))->field_0xc)
        goto LAB_147c5fd44;
        pUVar10 = pUVar15;
        if (lVar2 != 0) {
          pUVar10 = *(UObject **)(lVar2 + 8);
        }
        if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar9[1].field_0x10 * 8) == &pUVar9[1].field_0x8)) {
          FVar5 = FNameEntryId::FromValidEName((EName)local_288);
          local_298.DataPtr = (wchar_t *)(ulonglong)*(uint *)CONCAT44(extraout_var,FVar5.Value);
          pwVar3 = local_298.DataPtr;
          if (lVar2 != 0) {
            pUVar15 = *(UObject **)(lVar2 + 8);
          }
          iVar6 = (this->DebugProperties).ArrayNum;
          pFVar16 = (this->DebugProperties).AllocatorInstance.Data;
          pFVar14 = pFVar16 + (longlong)iVar6 * 0x20;
          while( true ) {
            if ((this->DebugProperties).ArrayNum != iVar6) {
              `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_2a8);
            }
            if (pFVar16 == pFVar14) break;
            if (*(UObject **)pFVar16 == (UObject *)0x0) {
              bVar4 = pUVar15 == (UObject *)0x0;
            }
            else {
              bVar4 = *(UObject **)pFVar16 == pUVar15;
            }
            if ((bVar4) && (*(wchar_t **)(pFVar16 + 0x10) == pwVar3)) goto LAB_147c5fce1;
            pFVar16 = pFVar16 + 0x20;
          }
          iVar6 = (this->DebugProperties).ArrayNum;
          piVar1 = &(this->DebugProperties).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
          }
          (this->DebugProperties).ArrayNum = iVar6 + 1;
          pFVar16 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
          DefaultConstructItems<FDebugDisplayProperty,int>(pFVar16,1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar15);
          }
          *(UObject **)pFVar16 = pUVar15;
          *(undefined8 *)(pFVar16 + 8) = 0;
          *(uint *)(pFVar16 + 0x18) = *(uint *)(pFVar16 + 0x18) | 1;
          *(wchar_t **)(pFVar16 + 0x10) = pwVar3;
        }
LAB_147c5fce1:
        do {
          do {
            lVar13 = 0;
            bVar4 = FUObjectArray::TIterator::Advance((TIterator *)&local_278);
            lVar2 = local_278._padding_;
            if (!bVar4) goto joined_r0x000147c5fb9f;
            lVar11 = lVar13;
            if (local_278._padding_ != 0) {
              lVar11 = *(longlong *)(local_278._padding_ + 8);
            }
          } while ((local_278.ExclusionFlags & *(EObjectFlags *)(lVar11 + 8)) != RF_NoFlags);
          if (local_278._padding_ != 0) {
            lVar13 = *(longlong *)(local_278._padding_ + 8);
          }
          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar13 + 0xc));
        } while ((local_278.InternalExclusionFlags &
                 (EInternalObjectFlags)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x000147c5fb9f;
      }
LAB_147c5fd44:
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_278._padding_ + 0x30));
      FVar5 = FNameEntryId::FromValidEName((EName)local_288);
      iVar6 = (this->DebugProperties).ArrayNum;
      pFVar16 = (this->DebugProperties).AllocatorInstance.Data;
      pFVar14 = pFVar16 + (longlong)iVar6 * 0x20;
      local_298.DataPtr = (wchar_t *)(ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar5.Value);
      pwVar3 = local_298.DataPtr;
      while( true ) {
        if ((this->DebugProperties).ArrayNum != iVar6) {
          `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2a8);
        }
        if (pFVar16 == pFVar14) break;
        if (((*(UObject **)pFVar16 != (UObject *)0x0) && (*(UObject **)pFVar16 == pUVar9)) &&
           (*(wchar_t **)(pFVar16 + 0x10) == pwVar3)) {
          return true;
        }
        pFVar16 = pFVar16 + 0x20;
      }
      iVar6 = (this->DebugProperties).ArrayNum;
      piVar1 = &(this->DebugProperties).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
      }
      (this->DebugProperties).ArrayNum = iVar6 + 1;
      pFVar16 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
      DefaultConstructItems<FDebugDisplayProperty,int>(pFVar16,1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *(UObject **)pFVar16 = pUVar9;
      *(undefined8 *)(pFVar16 + 8) = 0;
      *(uint *)(pFVar16 + 0x18) = *(uint *)(pFVar16 + 0x18) | 1;
      *(wchar_t **)(pFVar16 + 0x10) = pwVar3;
    }
  }
  return true;
}

// HandleDisplayClearCommand @ 147c5fea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleDisplayClearCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  
  piVar1 = &(this->DebugProperties).ArrayMax;
  (this->DebugProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->DebugProperties).AllocatorInstance,0,piVar1);
  }
  return true;
}

// HandleDisplayCommand @ 147c5fee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleDisplayCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FProperty *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_4a8 [32];
  undefined1 local_478 [16];
  TStringView<wchar_t> local_468;
  FName local_458;
  wchar_t *local_450;
  FName local_448 [2];
  FScriptContainerElement local_438 [512];
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_450 = param_1;
  bVar2 = FParse::Token(&local_450,(wchar_t *)local_438,0x100,true,L'\0');
  if ((bVar2) && (bVar2 = FParse::Token(&local_450,local_238,0x100,true,L'\0'), bVar2)) {
    local_468.DataPtr = (wchar_t *)local_438;
    sVar4 = wcslen((wchar_t *)local_438);
    local_468.Size = (int)sVar4;
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticFindFirstObject(pUVar5,&local_468,NativeFirst,Warning,L"HandleDisplayCommand");
    if (pUVar6 == (UObject *)0x0) {
      FOutputDevice::Log(param_2,L"Object not found");
    }
    else {
      ::FName::FName(&local_458,local_238,FNAME_Find);
      if ((local_458 == (FName)0x0) ||
         (pFVar7 = FindFProperty<FProperty>(*(UStruct **)&pUVar6->field_0x10,local_458,Default),
         pFVar7 == (FProperty *)0x0)) {
        local_448[0].ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_448[0].Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(local_448,(FString *)&local_468);
        FOutputDevice::LogfImpl(param_2,L"Property \'%s\' not found on object \'%s\'");
        if ((FScriptContainerElement *)local_468.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_468.DataPtr);
        }
      }
      else {
        pFVar8 = (this->DebugProperties).AllocatorInstance.Data;
        iVar3 = (this->DebugProperties).ArrayNum;
        pFVar9 = pFVar8 + (longlong)iVar3 * 0x20;
        while( true ) {
          if ((this->DebugProperties).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FDebugDisplayProperty,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_478);
          }
          if (pFVar8 == pFVar9) break;
          if (((*(UObject **)pFVar8 != (UObject *)0x0) && (*(UObject **)pFVar8 == pUVar6)) &&
             (*(FName *)(pFVar8 + 0x10) == local_458)) {
            return true;
          }
          pFVar8 = pFVar8 + 0x20;
        }
        iVar3 = (this->DebugProperties).ArrayNum;
        piVar1 = &(this->DebugProperties).ArrayMax;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&(this->DebugProperties).AllocatorInstance,piVar1);
        }
        (this->DebugProperties).ArrayNum = iVar3 + 1;
        pFVar8 = (this->DebugProperties).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
        DefaultConstructItems<FDebugDisplayProperty,int>(pFVar8,1);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        *(UObject **)pFVar8 = pUVar6;
        *(undefined8 *)(pFVar8 + 8) = 0;
        *(uint *)(pFVar8 + 0x18) = *(uint *)(pFVar8 + 0x18) & 0xfffffffe;
        *(FName *)(pFVar8 + 0x10) = local_458;
      }
    }
  }
  return true;
}

// HandleForceFullscreenCommand @ 147c60170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleForceFullscreenCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  GForceFullscreen = !GForceFullscreen;
  return true;
}

// HandleForceSkelLODCommand @ 147c60190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleForceSkelLODCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  USkinnedMeshComponent *this_00;
  FSceneInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  FSceneInterface *pFVar8;
  longlong lVar9;
  int local_28 [2];
  TObjectIterator<USkeletalMeshComponent> local_20;
  
  local_28[0] = 0;
  bVar3 = FParse::Value(param_1,L"LOD=",local_28);
  if (bVar3) {
    local_28[0] = local_28[0] + 1;
  }
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  local_20.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar7,&local_20.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<USkeletalMeshComponent>::Advance(&local_20);
  while( true ) {
    lVar9 = (longlong)local_20.Index;
    if (local_20.Index < 0) break;
    if (local_20.ObjectArray.ArrayNum <= local_20.Index) break;
    uVar6 = 0;
    if (local_20.Index < local_20.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_20.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_00 = *(USkinnedMeshComponent **)(local_20.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
    pFVar1 = param_3->Scene;
    pFVar8 = UActorComponent::GetScene((UActorComponent *)this_00);
    if (pFVar8 == pFVar1) {
      bVar3 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar3) {
        USkinnedMeshComponent::SetForcedLOD(this_00,local_28[0]);
      }
    }
    TObjectIterator<USkeletalMeshComponent>::Advance(&local_20);
  }
  if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
  }
  return true;
}

// HandleGetAllLocationCommand @ 147c60440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleGetAllLocationCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  size_t sVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_318 [32];
  TObjectIterator<AActor> local_2d8;
  wchar_t *local_2c0;
  wchar_t *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TStringView<wchar_t> local_2a8;
  FString local_298 [2];
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  wchar_t local_258 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2c0 = param_1;
  bVar3 = FParse::Token(&local_2c0,local_258,0x100,true,L'\0');
  if (bVar3) {
    local_2b8 = local_258;
    sVar8 = wcslen(local_258);
    iStack_2b0 = (int)sVar8;
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    local_2a8._12_4_ = uStack_2ac;
    local_2a8.Size = iStack_2b0;
    local_2a8.DataPtr = local_2b8;
    pUVar10 = StaticFindFirstObject(pUVar9,&local_2a8,None,Warning,L"HandleGetAllLocationCommand");
    if (pUVar10 != (UObject *)0x0) {
      bVar3 = FParse::Command(&local_2c0,L"SHOWPENDINGKILLS",true);
      local_2d8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ObjectArray.ArrayNum = 0;
      local_2d8.ObjectArray.ArrayMax = 0;
      local_2d8.Index = 0xffffffff;
      EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar9 = Z_Construct_UClass_AActor_NoRegister();
      GetObjectsOfClass(pUVar9,&local_2d8.ObjectArray,true,RF_ClassDefaultObject,
                        EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<AActor>::Advance(&local_2d8);
      do {
        lVar12 = (longlong)local_2d8.Index;
        if ((local_2d8.Index < 0) || (local_2d8.ObjectArray.ArrayNum <= local_2d8.Index)) {
          if (local_2d8.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return true;
          }
          FMemory::Free(local_2d8.ObjectArray.AllocatorInstance.Data);
          return true;
        }
        uVar13 = 0;
        if (bVar3) {
LAB_147c6060a:
          lVar12 = (longlong)local_2d8.Index;
          uVar7 = uVar13;
          if (local_2d8.Index < local_2d8.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_2d8.Index >> 0x1f;
          }
          iVar11 = local_2d8.ObjectArray.ArrayNum;
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            iVar11 = local_2d8.ObjectArray.ArrayNum;
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(local_2d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                         0x10) + 0x38) < *(int *)&pUVar10[1].field_0x10) ||
             (*(undefined1 **)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(local_2d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) + 0x10)
                 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8) != &pUVar10[1].field_0x8))
          {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar12 = (longlong)local_2d8.Index;
            if (local_2d8.Index < iVar11) {
              uVar13 = (uint)~local_2d8.Index >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              iVar11 = local_2d8.ObjectArray.ArrayNum;
            }
            iVar2 = local_2d8.Index;
            lVar12 = *(longlong *)
                      (*(longlong *)(local_2d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                      0x1b8);
            if (lVar12 == 0) {
              uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar15 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            }
            else {
              local_270 = *(undefined4 *)(lVar12 + 0x210);
              uStack_26c = *(undefined4 *)(lVar12 + 0x214);
              uStack_268 = *(undefined4 *)(lVar12 + 0x218);
              uStack_264 = *(undefined4 *)(lVar12 + 0x21c);
              local_260 = *(undefined8 *)(lVar12 + 0x220);
              uVar14 = (undefined4)local_260;
              uVar15 = (undefined4)((ulonglong)local_260 >> 0x20);
            }
            local_278 = CONCAT44(uVar15,uVar14);
            uVar13 = 0;
            if (local_2d8.Index < iVar11) {
              uVar13 = (uint)~local_2d8.Index >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)
                        (local_2d8.ObjectArray.AllocatorInstance.Data + (longlong)iVar2 * 8),
                       local_298,(UObject *)0x0,None);
            FOutputDevice::LogfImpl(param_2,L"%i) %s (%f, %f, %f)");
            if (local_298[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298[0].Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar7 = uVar13;
          if (local_2d8.Index < local_2d8.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_2d8.Index >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          if ((*(longlong *)(local_2d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) != 0) &&
             ((*(uint *)(*(longlong *)(local_2d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                        8) >> 0x1e & 1) == 0)) {
            goto LAB_147c6060a;
          }
        }
        TObjectIterator<AActor>::Advance(&local_2d8);
      } while( true );
    }
  }
  FOutputDevice::LogfImpl(param_2,L"Unrecognized class %s");
  return true;
}

// HandleGetAllRotationCommand @ 147c60860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleGetAllRotationCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  size_t sVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_2f8 [32];
  TObjectIterator<AActor> local_2b8;
  wchar_t *local_2a0;
  wchar_t *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  TRotator<double> local_288;
  TStringView<wchar_t> local_268;
  FString local_258;
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2a0 = param_1;
  bVar3 = FParse::Token(&local_2a0,local_248,0x100,true,L'\0');
  if (bVar3) {
    local_298 = local_248;
    sVar8 = wcslen(local_248);
    iStack_290 = (int)sVar8;
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    local_268._12_4_ = uStack_28c;
    local_268.Size = iStack_290;
    local_268.DataPtr = local_298;
    pUVar10 = StaticFindFirstObject(pUVar9,&local_268,None,Warning,L"HandleGetAllRotationCommand");
    if (pUVar10 != (UObject *)0x0) {
      bVar3 = FParse::Command(&local_2a0,L"SHOWPENDINGKILLS",true);
      local_2b8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.ObjectArray.ArrayNum = 0;
      local_2b8.ObjectArray.ArrayMax = 0;
      local_2b8.Index = 0xffffffff;
      EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar9 = Z_Construct_UClass_AActor_NoRegister();
      GetObjectsOfClass(pUVar9,&local_2b8.ObjectArray,true,RF_ClassDefaultObject,
                        EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<AActor>::Advance(&local_2b8);
      do {
        lVar12 = (longlong)local_2b8.Index;
        if ((local_2b8.Index < 0) || (local_2b8.ObjectArray.ArrayNum <= local_2b8.Index)) {
          if (local_2b8.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return true;
          }
          FMemory::Free(local_2b8.ObjectArray.AllocatorInstance.Data);
          return true;
        }
        uVar13 = 0;
        if (bVar3) {
LAB_147c60a1a:
          lVar12 = (longlong)local_2b8.Index;
          uVar7 = uVar13;
          if (local_2b8.Index < local_2b8.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_2b8.Index >> 0x1f;
          }
          iVar11 = local_2b8.ObjectArray.ArrayNum;
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            iVar11 = local_2b8.ObjectArray.ArrayNum;
          }
          iVar2 = local_2b8.Index;
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(local_2b8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                         0x10) + 0x38) < *(int *)&pUVar10[1].field_0x10) ||
             (*(undefined1 **)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(local_2b8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) + 0x10)
                 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8) != &pUVar10[1].field_0x8))
          {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (local_2b8.Index < iVar11) {
              uVar13 = (uint)~local_2b8.Index >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            AActor::GetActorRotation
                      (*(AActor **)
                        (local_2b8.ObjectArray.AllocatorInstance.Data + (longlong)iVar2 * 8),
                       &local_288);
            lVar12 = (longlong)local_2b8.Index;
            uVar13 = 0;
            if (local_2b8.Index < local_2b8.ObjectArray.ArrayNum) {
              uVar13 = (uint)~local_2b8.Index >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)
                        (local_2b8.ObjectArray.AllocatorInstance.Data + lVar12 * 8),&local_258,
                       (UObject *)0x0,None);
            FOutputDevice::LogfImpl(param_2,L"%i) %s (%f, %f, %f)");
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar7 = uVar13;
          if (local_2b8.Index < local_2b8.ObjectArray.ArrayNum) {
            uVar7 = (uint)~local_2b8.Index >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          if ((*(longlong *)(local_2b8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) != 0) &&
             ((*(uint *)(*(longlong *)(local_2b8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                        8) >> 0x1e & 1) == 0)) {
            goto LAB_147c60a1a;
          }
        }
        TObjectIterator<AActor>::Advance(&local_2b8);
      } while( true );
    }
  }
  FOutputDevice::LogfImpl(param_2,L"Unrecognized class %s");
  return true;
}

// HandleHighresScreenshotCommand @ 147c60c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleHighresScreenshotCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  FHighResScreenshotConfig *this_00;
  FString local_18;
  
  if (this->Viewport != (FViewport *)0x0) {
    this_00 = GetHighResScreenshotConfig();
    ::FString::FString(&local_18,param_1);
    bVar1 = FHighResScreenshotConfig::ParseConsoleCommand(this_00,&local_18,param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      FViewport::TakeHighResScreenShot(this->Viewport);
    }
  }
  return true;
}

// HandleHighresScreenshotUICommand @ 147c60cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleHighresScreenshotUICommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  return true;
}

// HandleKillParticlesCommand @ 147c60ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleKillParticlesCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  UParticleSystemComponent *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UParticleSystemComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UParticleSystemComponent>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    this_00 = *(UParticleSystemComponent **)
               (local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    UParticleSystemComponent::DeactivateSystem(this_00);
    UParticleSystemComponent::KillParticlesForced(this_00);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  GIsAllowingParticles = false;
  return true;
}

// HandleNavigation @ 147c61570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleNavigation
          (UGameViewportClient *this,uint param_1,TSharedPtr<SWidget,1> *param_2)

{
  undefined1 *this_00;
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  this_00 = &(this->TickDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if ((*(int *)&this->ToggleFullscreenDelegate != 0) &&
     (plVar3 = *(longlong **)&(this->TickDelegate).field_0x18, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      local_38.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)(param_2->SharedReferenceCount).ReferenceController;
      local_38.DestructionSentinel._0_8_ = param_2->Object;
      if ((TReferenceControllerBase<1> *)local_38.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_38.DestructionSentinel.Accessor)->SharedReferenceCount
             = (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_38.DestructionSentinel.Accessor)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&this->ToggleFullscreenDelegate == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->TickDelegate).field_0x18;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// HandleNextViewModeCommand @ 147c61680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleNextViewModeCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  EViewModeIndex EVar6;
  uint uVar7;
  longlong lVar8;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_18;
  
  UEngine::GetLocalPlayerIterator((UEngine *)this->_padding_,&local_18,param_3);
  for (; (pTVar2 = local_18.Container, lVar8 = (longlong)local_18.Index, -1 < local_18.Index &&
         (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1) {
    uVar7 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar7 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar8 * 8) != 0) break;
  }
  do {
    pTVar2 = local_18.Container;
    lVar8 = (longlong)local_18.Index;
    if (local_18.Index < 0) {
      return true;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) {
      return true;
    }
    uVar7 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar7 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pTVar3 = local_18.Container;
    if (*(longlong *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar8 * 8) + 0x30) != 0) {
      lVar8 = (longlong)local_18.Index;
      uVar7 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)((pTVar3->AllocatorInstance).Data + lVar8 * 8) + 0x30) +
           0x440) != 0) {
        this->ViewModeIndex = this->ViewModeIndex + 1;
        EVar6 = this->ViewModeIndex;
        if (EVar6 == VMI_Max) {
          this->ViewModeIndex = 0;
          EVar6 = VMI_BrushWireframe;
        }
        GetViewModeName(EVar6);
        FOutputDevice::LogfImpl(param_2,L"New view mode: %s");
        ApplyViewMode(this->ViewModeIndex,true,&this->EngineShowFlags);
        return true;
      }
    }
    do {
      pTVar2 = local_18.Container;
      uVar7 = local_18.Index + 1;
      local_18.Index = uVar7;
      if (((int)uVar7 < 0) || ((local_18.Container)->ArrayNum <= (int)uVar7)) break;
      if (((int)uVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    } while (*(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 8) == 0);
  } while( true );
}

// HandlePauseRenderClockCommand @ 147c618d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandlePauseRenderClockCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  GPauseRenderingRealtimeClock = !GPauseRenderingRealtimeClock;
  FOutputDevice::LogfImpl(param_2,L"The global realtime rendering clock is now: %s");
  return true;
}

// HandlePreCacheCommand @ 147c61920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandlePreCacheCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  return true;
}

// HandlePrevViewModeCommand @ 147c61940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandlePrevViewModeCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  int *piVar1;
  code *pcVar2;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  EViewModeIndex EVar7;
  uint uVar8;
  longlong lVar9;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_18;
  
  UEngine::GetLocalPlayerIterator((UEngine *)this->_padding_,&local_18,param_3);
  for (; (pTVar3 = local_18.Container, lVar9 = (longlong)local_18.Index, -1 < local_18.Index &&
         (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1) {
    uVar8 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar8 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (*(longlong *)((pTVar3->AllocatorInstance).Data + lVar9 * 8) != 0) break;
  }
  do {
    pTVar3 = local_18.Container;
    lVar9 = (longlong)local_18.Index;
    if (local_18.Index < 0) {
      return true;
    }
    if ((local_18.Container)->ArrayNum <= local_18.Index) {
      return true;
    }
    uVar8 = 0;
    if (local_18.Index < (local_18.Container)->ArrayNum) {
      uVar8 = (uint)~local_18.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pTVar4 = local_18.Container;
    if (*(longlong *)(*(longlong *)((pTVar3->AllocatorInstance).Data + lVar9 * 8) + 0x30) != 0) {
      lVar9 = (longlong)local_18.Index;
      uVar8 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar8 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)((pTVar4->AllocatorInstance).Data + lVar9 * 8) + 0x30) +
           0x440) != 0) {
        piVar1 = &this->ViewModeIndex;
        *piVar1 = *piVar1 + -1;
        EVar7 = this->ViewModeIndex;
        if (*piVar1 < 0) {
          EVar7 = VMI_RandomColor;
          this->ViewModeIndex = 0x2b;
        }
        GetViewModeName(EVar7);
        FOutputDevice::LogfImpl(param_2,L"New view mode: %s");
        ApplyViewMode(this->ViewModeIndex,true,&this->EngineShowFlags);
        return true;
      }
    }
    do {
      pTVar3 = local_18.Container;
      uVar8 = local_18.Index + 1;
      local_18.Index = uVar8;
      if (((int)uVar8 < 0) || ((local_18.Container)->ArrayNum <= (int)uVar8)) break;
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    } while (*(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) == 0);
  } while( true );
}

// HandleScreenshotCommand @ 147c61b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleScreenshotCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  FString local_38;
  TIntRect<int>_u_0 local_28;
  
  if (this->Viewport != (FViewport *)0x0) {
    local_res10 = param_1;
    bVar1 = FParse::Command(&local_res10,L"SHOWUI",true);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    bVar2 = FParse::Param(local_res10,L"showui");
    if ((bVar2) || (bVar1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    FParse::Value(local_res10,L"filename=",&local_38,true,(wchar_t **)0x0);
    bVar2 = FParse::Param(local_res10,L"nosuffix");
    local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    bVar3 = (bool)(**(code **)(this->Viewport->_padding_ + 0x48))();
    FScreenshotRequest::RequestScreenshot
              (&local_38,bVar1,!bVar2,bVar3,(TIntRect<int> *)&local_28._s_0);
    puVar4 = (uint *)(**(code **)(this->Viewport->_padding_ + 0x1e0))(this->Viewport,local_res8);
    GScreenshotResolutionX = *puVar4;
    lVar5 = (**(code **)(this->Viewport->_padding_ + 0x1e0))(this->Viewport,local_res8);
    GScreenshotResolutionY = *(uint *)(lVar5 + 4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// HandleSetResCommand @ 147c61f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleSetResCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  int iVar1;
  int iVar2;
  Type TVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if ((this->Viewport == (FViewport *)0x0) || (this->ViewportFrame == (FViewportFrame *)0x0)) {
    return true;
  }
  iVar1 = _wtoi(param_1);
  pwVar4 = wcschr(param_1,L'x');
  if (pwVar4 == (wchar_t *)0x0) {
    pwVar4 = wcschr(param_1,L'X');
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = wcschr(param_1,L'X');
      pwVar4 = pwVar4 + 1;
    }
  }
  else {
    pwVar4 = wcschr(param_1,L'x');
    pwVar4 = pwVar4 + 1;
  }
  iVar2 = _wtoi(pwVar4);
  TVar3 = (**(code **)(this->Viewport->_padding_ + 0x140))();
  pwVar5 = wcschr(pwVar4,L'w');
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar5 = wcschr(pwVar4,L'W');
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = wcschr(pwVar4,L'f');
      if (pwVar5 == (wchar_t *)0x0) {
        pwVar4 = wcschr(pwVar4,L'F');
        if (pwVar4 == (wchar_t *)0x0) goto LAB_147c620a6;
      }
      TVar3 = Fullscreen;
      goto LAB_147c620a6;
    }
  }
  pwVar5 = wcschr(pwVar4,L'f');
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar4 = wcschr(pwVar4,L'F');
    TVar3 = Windowed;
    if (pwVar4 == (wchar_t *)0x0) goto LAB_147c620a6;
  }
  TVar3 = WindowedFullscreen;
LAB_147c620a6:
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FSystemResolution::RequestResolutionChange(iVar1,iVar2,TVar3);
  }
  return true;
}

// HandleShowCommand @ 147c620f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147c6236f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleShowCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  UActorComponent *this_00;
  FSceneInterface *pFVar3;
  ForElementType<unsigned_int> FVar4;
  void *_Src;
  code *pcVar5;
  byte bVar6;
  FOutputDevice *this_01;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  EInternalObjectFlags EVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UClass *pUVar15;
  FSceneInterface *pFVar16;
  FString *this_02;
  FActorPrimitiveColorHandler *this_03;
  FName *pFVar17;
  FEngineShowFlags *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  uint *puVar23;
  wchar_t *pwVar24;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  undefined1 auStackY_2b8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_268;
  FIdentityFunctor local_258 [8];
  FString local_250;
  ForAnyElementType local_240;
  int local_238;
  int local_234;
  uint local_230;
  int local_22c;
  uint local_228;
  wchar_t *local_220;
  uint local_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_210;
  undefined4 local_208;
  uint uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  TObjectIterator<USkeletalMeshComponent> local_1f8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_1b0;
  FOutputDevice *local_1a8;
  FIdentityFunctor *local_1a0;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  FName local_170;
  FString local_168 [2];
  undefined4 local_13c;
  FEngineShowFlags local_138;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  FIterSink local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_220 = param_1;
  local_1a8 = param_2;
  bVar8 = FParse::Command(&local_220,L"PREPHYSBONES",true);
  if (bVar8) {
    bShowPrePhysSkelBones = bShowPrePhysSkelBones == false;
    local_1f8.Index = 0xffffffff;
    local_1f8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ObjectArray.ArrayNum = 0;
    local_1f8.ObjectArray.ArrayMax = 0;
    EVar11 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar15,&local_1f8.ObjectArray,true,RF_ClassDefaultObject,
                      EVar11 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkeletalMeshComponent>::Advance(&local_1f8);
      lVar29 = (longlong)local_1f8.Index;
      FVar22.Data = local_1f8.ObjectArray.AllocatorInstance.Data;
      if ((local_1f8.Index < 0) || (local_1f8.ObjectArray.ArrayNum <= local_1f8.Index)) break;
      uVar13 = 0;
      if (local_1f8.Index < local_1f8.ObjectArray.ArrayNum) {
        uVar13 = (uint)~local_1f8.Index >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      this_00 = *(UActorComponent **)(local_1f8.ObjectArray.AllocatorInstance.Data + lVar29 * 8);
      pFVar3 = param_3->Scene;
      pFVar16 = UActorComponent::GetScene(this_00);
      bVar8 = bShowPrePhysSkelBones;
      if (pFVar16 == pFVar3) {
        pbVar1 = (byte *)((longlong)&this_00[0xe].PrimaryComponentTick._padding_ + 1);
        *pbVar1 = *pbVar1 & 0xef;
        pbVar1 = (byte *)((longlong)&this_00[0xe].PrimaryComponentTick._padding_ + 1);
        *pbVar1 = *pbVar1 | bVar8 << 4;
        UActorComponent::MarkRenderStateDirty(this_00);
      }
    }
LAB_147c62648:
    if (FVar22.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar22.Data);
    }
    return true;
  }
  uVar30 = 0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  this_02 = ::FString::FString(local_168,local_220);
  iVar12 = ::FString::ParseIntoArray(this_02,&local_268,L" ",true);
  if (local_168[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168[0].Data.AllocatorInstance.Data);
  }
  if (iVar12 == 0) {
    ::FString::FString(&local_250,local_220);
    if (((local_268.AllocatorInstance.Data <= (FScriptContainerElement *)&local_250) &&
        ((FScriptContainerElement *)&local_250 <
         local_268.AllocatorInstance.Data + (longlong)local_268.ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar12 = local_268.ArrayNum;
    if (local_268.ArrayNum == local_268.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_268.AllocatorInstance,&local_268.ArrayMax);
    }
    local_268.ArrayNum = iVar12 + 1;
    pFVar20 = local_268.AllocatorInstance.Data + (longlong)iVar12 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_250.Data.AllocatorInstance.Data;
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar20 + 8) = local_250.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_250.Data.ArrayMax;
    local_250.Data.ArrayNum = 0;
    local_250.Data.ArrayMax = 0;
  }
  if ((local_268.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if (*(int *)(local_268.AllocatorInstance.Data + 8) == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = *(wchar_t **)local_268.AllocatorInstance.Data;
  }
  uVar13 = FEngineShowFlags::FindIndexByName(pwVar24,(wchar_t *)0x0);
  if (uVar13 != 0xffffffff) {
    bVar8 = FEngineShowFlags::GetSingleFlag(&this->EngineShowFlags,uVar13);
    if ((local_268.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (*(int *)(local_268.AllocatorInstance.Data + 8) == 0) {
      pwVar24 = L"";
    }
    else {
      pwVar24 = *(wchar_t **)local_268.AllocatorInstance.Data;
    }
    iVar12 = FEngineShowFlags::FindIndexByName(pwVar24,L"ActorColoration");
    if ((iVar12 != -1) && (1 < local_268.ArrayNum)) {
      this_03 = FActorPrimitiveColorHandler::Get();
      if ((local_268.ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      if (*(int *)(local_268.AllocatorInstance.Data + 0x18) == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = *(wchar_t **)(local_268.AllocatorInstance.Data + 0x10);
      }
      pFVar17 = ::FName::FName(&local_170,pwVar24);
      bVar10 = FActorPrimitiveColorHandler::SetActivePrimitiveColorHandler(this_03,*pFVar17,param_3)
      ;
      bVar8 = bVar8 && !bVar10;
    }
    pwVar24 = L"";
    FEngineShowFlags::SetSingleFlag(&this->EngineShowFlags,uVar13,(bool)(bVar8 ^ 1));
    if ((local_268.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (*(int *)(local_268.AllocatorInstance.Data + 8) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)local_268.AllocatorInstance.Data;
    }
    iVar12 = FEngineShowFlags::FindIndexByName(pwVar21,L"Navigation,Cover");
    if (iVar12 != -1) {
      (**(code **)(this->_padding_ + 0x3b0))(this);
    }
    if ((local_268.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (*(int *)(local_268.AllocatorInstance.Data + 8) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)local_268.AllocatorInstance.Data;
    }
    iVar12 = FEngineShowFlags::FindIndexByName(pwVar21,L"Volumes");
    if (iVar12 != -1) {
      bVar8 = AllowDebugViewmodes();
      if (bVar8) {
        ToggleShowVolumes(this);
      }
      else {
        FOutputDevice::Log(local_1a8,
                           L"Debug viewmodes not allowed on consoles by default.  See AllowDebugViewmodes()."
                          );
      }
    }
    if ((local_268.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (*(int *)(local_268.AllocatorInstance.Data + 8) != 0) {
      pwVar24 = *(wchar_t **)local_268.AllocatorInstance.Data;
    }
    iVar12 = FEngineShowFlags::FindIndexByName(pwVar24,L"Collision");
    if (iVar12 != -1) {
      ToggleShowCollision(this);
    }
    DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
    FVar22.Data = local_268.AllocatorInstance.Data;
    goto LAB_147c62648;
  }
  DestructItems<FString,int>((FString *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  local_f8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  pFVar18 = FEngineShowFlags::FEngineShowFlags(&local_138,&this->EngineShowFlags);
  local_a8.LinesToSort = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8;
  FEngineShowFlags::FEngineShowFlags(&local_a8.EngineShowFlags,pFVar18);
  FVar4 = (pFVar18->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FEngineShowFlags::IterateAllFlags<_UGameViewportClient::HandleShowCommand_::__l50::FIterSink>
            (&local_a8);
  if (local_a8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  uVar14 = local_c4;
  local_1a0 = local_258;
  lVar29 = (longlong)(int)local_c4;
  uVar31 = local_f8._8_4_ - local_c4;
  local_228 = local_f8._8_4_;
  uVar13 = 0;
  local_230 = uVar31;
  if (0 < (int)uVar31) {
    if (local_c4 != 0) {
      local_1b0 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_f8._0_8_;
      pTVar25 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_f8._0_8_;
      uVar27 = local_f8._8_4_;
      iVar12 = local_c8;
      if (local_c8 != -1) {
        do {
          local_22c = *(int *)((longlong)pTVar25 + (longlong)iVar12 * 0x18 + 4);
          if (iVar12 < (int)uVar31) {
            bVar6 = (byte)uVar27 & 0x1f;
            uVar32 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            uVar31 = uVar27;
            do {
              uVar32 = uVar32 >> 1 | (uint)((uVar32 & 1) != 0) << 0x1f;
              uVar27 = uVar31 - 1;
              if ((((int)uVar27 < 0) || ((int)local_d0 <= (int)uVar27)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              puVar23 = (uint *)(local_f8 + 0x10);
              if (local_d8 != (uint *)0x0) {
                puVar23 = local_d8;
              }
              uVar28 = uVar27;
              if ((int)uVar27 < 0) {
                uVar28 = uVar31 + 0x1e;
              }
              uVar31 = uVar27;
            } while ((puVar23[(int)uVar28 >> 5] & uVar32) == 0);
            memmove(pTVar25 + iVar12,local_1b0 + (int)uVar27,0x18);
            if (((iVar12 < 0) || ((int)local_d0 <= iVar12)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
            puVar23 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar23 = local_d8;
            }
            iVar33 = iVar12;
            if (iVar12 < 0) {
              iVar33 = iVar12 + 0x1f;
            }
            puVar23[iVar33 >> 5] = puVar23[iVar33 >> 5] | 1 << ((byte)iVar12 & 0x1f);
            pTVar25 = local_1b0;
            uVar31 = local_230;
          }
          iVar12 = local_22c;
        } while (local_22c != -1);
      }
      uVar27 = local_228;
      uVar32 = 0;
      if ((int)local_228 <= (int)local_f8._8_4_) {
        uVar32 = ~(uVar14 | uVar31) >> 0x1f;
      }
      uVar28 = local_f8._8_4_;
      if (uVar32 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar28 = local_f8._8_4_;
      }
      iVar12 = (uVar28 - uVar31) - uVar14;
      if (iVar12 != 0) {
        memmove((FScriptContainerElement *)(local_f8._0_8_ + (longlong)(int)uVar31 * 0x18),
                (FScriptContainerElement *)(local_f8._0_8_ + (longlong)(int)uVar31 * 0x18) +
                lVar29 * 0x18,(longlong)iVar12 * 0x18);
        uVar28 = local_f8._8_4_;
      }
      local_f8._8_4_ = uVar28 - uVar14;
      if ((((int)uVar14 < 0) || ((int)local_d0 < (int)uVar27)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      if (uVar27 != local_d0) {
        puVar23 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar23 = local_d8;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar23,uVar31,puVar23,uVar27,(local_d0 - uVar31) - uVar14);
      }
      local_d0 = local_d0 - uVar14;
      uVar31 = (int)local_d0 >> 0x1f & 0x1f;
      uVar14 = local_d0 + uVar31;
      iVar12 = (uVar14 & 0x1f) - uVar31;
      if (iVar12 != 0) {
        puVar23 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar23 = local_d8;
        }
        puVar23[(int)uVar14 >> 5] =
             puVar23[(int)uVar14 >> 5] & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10));
      local_c4 = 0;
      local_c8 = -1;
      if (local_f8._12_4_ != local_f8._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_f8._8_4_,(ForAnyElementType *)local_f8,local_f8._8_4_,
                   (int *)(local_f8 + 0xc));
      }
    }
    uVar7 = local_f8._0_8_;
    iVar12 = local_f8._8_4_ - local_c4;
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar7,iVar12,local_258[0],
               (FElementCompareClass<TLess<FString>_> *)&local_1a0);
  }
  uVar14 = local_b0;
  uVar34 = (ulonglong)local_b0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
  }
  if (uVar14 == 0) goto LAB_147c62b1e;
  uVar31 = uVar14;
  if (uVar14 < 2) {
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      uVar31 = 0;
      goto LAB_147c62ad1;
    }
  }
  else {
LAB_147c62ad1:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar31,4);
  }
  if (0 < (int)uVar14) {
    uVar26 = uVar30;
    do {
      FVar22.Data = local_c0;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FVar22.Data = local_b8.Data;
      }
      uVar19 = (longlong)(int)uVar14 - 1U & uVar26;
      uVar26 = uVar26 + 1;
      *(undefined4 *)(FVar22.Data + uVar19 * 4) = 0xffffffff;
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
  }
LAB_147c62b1e:
  uVar14 = 1;
  uVar34 = (ulonglong)local_d0;
  if (local_b0 != 0) {
    uStack_214 = 1;
    local_218 = 0;
    pTStack_210 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    uStack_204 = 0;
    uStack_200 = 0;
    uVar26 = uVar30;
    if (local_d0 != 0) {
      puVar23 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar23 = local_d8;
      }
      uVar31 = *puVar23;
      uVar19 = uVar30;
      while (uVar31 == 0) {
        uStack_200 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_200;
        iVar12 = (int)uVar26;
        local_218 = iVar12 + 1;
        uVar26 = (ulonglong)local_218;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_218)
        goto LAB_147c62bd8;
        uVar31 = (puVar23 + 1)[iVar12];
      }
      uStack_214 = -uVar31 & uVar31;
      uVar26 = (ulonglong)uStack_214 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uStack_204 = (uStack_200 - 1) + (int)lVar29;
      uVar26 = (ulonglong)uStack_204;
      if ((int)local_d0 < (int)uStack_204) {
LAB_147c62bd8:
        uVar26 = (ulonglong)local_d0;
        uStack_204 = local_d0;
      }
    }
    local_208 = 0xffffffff;
    local_1e0 = (longlong *)local_f8;
    TStack_1d8._padding_._0_4_ = local_218;
    TStack_1d8._padding_._4_4_ = uStack_214;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    TStack_1d8.CurrentBitIndex = uStack_204;
    TStack_1d8._28_4_ = uStack_1fc;
    TStack_1d8.BaseBitIndex = uStack_200;
    TStack_1d8.Array = pTStack_210;
    if ((int)uVar26 < (int)local_d0) {
      do {
        iVar33 = (int)uVar26;
        puVar2 = (undefined8 *)(*local_1e0 + (longlong)iVar33 * 0x18);
        iVar12 = *(int *)(*local_1e0 + 8 + (longlong)iVar33 * 0x18);
        if (iVar12 == 0) {
          pwVar24 = L"";
          uVar31 = 0;
        }
        else {
          pwVar24 = (wchar_t *)*puVar2;
          uVar31 = iVar12 - 1;
        }
        uVar31 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar31,pwVar24);
        uVar31 = local_b0 - 1 & uVar31;
        *(uint *)((longlong)puVar2 + 0x14) = uVar31;
        FVar22.Data = local_c0;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_b8.Data;
        }
        uVar34 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar31;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(FVar22.Data + uVar34 * 4);
        *(int *)(FVar22.Data + uVar34 * 4) = iVar33;
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        uVar26 = (ulonglong)(uint)TStack_1d8.CurrentBitIndex;
      } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      uVar34 = (ulonglong)local_d0;
    }
  }
  this_01 = local_1a8;
  iVar12 = (int)uVar34;
  uVar26 = uVar30;
  TStack_1d8.BaseBitIndex = uVar13;
  if (iVar12 != 0) {
    puVar23 = (uint *)(local_f8 + 0x10);
    if (local_d8 != (uint *)0x0) {
      puVar23 = local_d8;
    }
    uVar31 = *puVar23;
    uVar19 = uVar30;
    uVar13 = 0;
    TStack_1d8.BaseBitIndex = 0;
    while (uVar31 == 0) {
      iVar33 = (int)uVar30;
      TStack_1d8.BaseBitIndex = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)(uint)TStack_1d8.BaseBitIndex;
      uVar13 = iVar33 + 1;
      uVar30 = (ulonglong)uVar13;
      uVar26 = uVar34;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar13) goto LAB_147c62d1d;
      uVar31 = (puVar23 + 1)[iVar33];
    }
    uVar14 = -uVar31 & uVar31;
    uVar30 = (ulonglong)uVar14 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar31 = (int)lVar29 + -1 + TStack_1d8.BaseBitIndex;
    uVar26 = (ulonglong)uVar31;
    if (iVar12 < (int)uVar31) {
      uVar26 = uVar34;
    }
  }
LAB_147c62d1d:
  local_1e0 = (longlong *)local_f8;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  TStack_1d8._padding_ = CONCAT44(uVar14,uVar13);
  TStack_190.CurrentBitIndex = (int)uVar26;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  uVar13 = TStack_1d8.UnvisitedBitMask;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  TStack_1d8._28_4_ = local_13c;
  TStack_190._padding_ = TStack_1d8._padding_;
  TStack_190.BaseBitIndex = TStack_1d8.BaseBitIndex;
  TStack_190._28_4_ = local_13c;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  local_198 = local_1e0;
  TStack_190.Array = TStack_1d8.Array;
  TStack_1d8.CurrentBitIndex = TStack_190.CurrentBitIndex;
  if (TStack_190.CurrentBitIndex < iVar12) {
    do {
      local_240.Data = (FScriptContainerElement *)0x0;
      local_238 = *(int *)(*local_198 + 8 + (longlong)(int)uVar26 * 0x18);
      lVar29 = (longlong)local_238;
      _Src = *(void **)(*local_198 + (longlong)(int)uVar26 * 0x18);
      if (local_238 == 0) {
        local_234 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_238,0,&local_240,local_238,&local_234);
        memcpy(local_240.Data,_Src,lVar29 * 2);
      }
      FOutputDevice::LogfImpl(this_01,L"%s");
      if (local_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data);
      }
      TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
      uVar26 = (ulonglong)(uint)TStack_190.CurrentBitIndex;
      uVar13 = TStack_1d8.UnvisitedBitMask;
    } while (TStack_190.CurrentBitIndex < (TStack_190.Array)->NumBits);
  }
  TStack_1d8.UnvisitedBitMask = uVar13;
  local_b0 = 0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  return true;
}

// HandleShowLayerCommand @ 147c62f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleShowLayerCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  undefined1 *puVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  AActor *pAVar9;
  ForAnyElementType FVar10;
  FName *pFVar11;
  uint uVar12;
  wchar_t *local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  UClass *local_118;
  FName local_110;
  UClass *local_108;
  FString local_100;
  TActorIteratorBase<FActorIterator> local_e8;
  TActorIteratorBase<FActorIterator> local_88;
  FString local_28;
  
  local_res10 = param_1;
  FParse::Token(&local_100,&local_res10,false);
  FParse::Token(&local_128,&local_res10,false);
  iVar7 = -1;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar10.Data = local_128.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"");
  if (iVar6 != 0) {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar10.Data = local_128.Data.AllocatorInstance.Data;
    }
    iVar7 = _wtoi((wchar_t *)FVar10.Data);
  }
  if (local_100.Data.ArrayNum < 2) {
    FOutputDevice::Log(param_2,L"Missing layer name.");
LAB_147c63188:
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_108 = Z_Construct_UClass_AActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_108);
    }
    local_88.Flags = OnlyActiveLevels|SkipPendingKill;
    local_88.State.bIsSet = false;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_108);
    }
    FActorIteratorState::FActorIteratorState
              (&local_88.State.TypedValue,param_3,(TSubclassOf<AActor>)&local_108);
    local_88.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<FActorIterator>::operator++(&local_88);
      if ((local_88.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (local_88.State.TypedValue.ReachedEnd != false) break;
      if ((local_88.State.bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pAVar9 = FActorIteratorState::GetActorChecked(&local_88.State.TypedValue);
      uVar12 = 0;
      if (0 < (pAVar9->Layers).ArrayNum) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < (pAVar9->Layers).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                    (&local_138,
                     (FName *)((pAVar9->Layers).AllocatorInstance.Data + (longlong)(int)uVar12 * 8))
          ;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (pAVar9->Layers).ArrayNum);
      }
    }
    if (local_88.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_88.State.TypedValue.CurrentWorld,
                 local_88.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_88.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    FOutputDevice::Log(param_2,L"Valid layer names:");
    uVar12 = 0;
    if (0 < local_138.ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < local_138.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        ::FName::ToString((FName *)(local_138.AllocatorInstance.Data + (longlong)(int)uVar12 * 8),
                          &local_28);
        FOutputDevice::LogfImpl(param_2,L"   %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < local_138.ArrayNum);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
LAB_147c633e9:
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    return true;
  }
  iVar6 = 0;
  ::FName::FName(&local_110,(wchar_t *)local_100.Data.AllocatorInstance.Data);
  local_118 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_118);
  }
  local_e8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_e8.State.bIsSet = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_118);
  }
  FActorIteratorState::FActorIteratorState
            (&local_e8.State.TypedValue,param_3,(TSubclassOf<AActor>)&local_118);
  local_e8.State.bIsSet = true;
  TActorIteratorBase<FActorIterator>::operator++(&local_e8);
LAB_147c63040:
  do {
    if ((local_e8.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (local_e8.State.TypedValue.ReachedEnd != false) {
      if (local_e8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_e8.State.TypedValue.CurrentWorld,
                   local_e8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      FOutputDevice::LogfImpl(param_2,L"Toggled visibility of %u actors");
      if (iVar6 == 0) goto LAB_147c63188;
      goto LAB_147c633e9;
    }
    if ((local_e8.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pAVar9 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
    pFVar11 = (FName *)(pAVar9->Layers).AllocatorInstance.Data;
    pFVar2 = pFVar11 + (pAVar9->Layers).ArrayNum;
    if (pFVar11 == pFVar2) {
LAB_147c63129:
      TActorIteratorBase<FActorIterator>::operator++(&local_e8);
    }
    else {
      do {
        if (*pFVar11 == local_110) {
          if (iVar7 != -1) {
            if (iVar7 == 0) {
              if ((bool)pAVar9->bHidden) {
                TActorIteratorBase<FActorIterator>::operator++(&local_e8);
                goto LAB_147c63040;
              }
            }
            else if (!(bool)pAVar9->bHidden) goto LAB_147c63129;
          }
          iVar6 = iVar6 + 1;
          AActor::SetHidden(pAVar9,(bool)(pAVar9->bHidden ^ 1));
          AActor::MarkComponentsRenderStateDirty(pAVar9);
          goto LAB_147c63129;
        }
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar2);
      TActorIteratorBase<FActorIterator>::operator++(&local_e8);
    }
  } while( true );
}

// HandleTextureDefragCommand @ 147c63580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleTextureDefragCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  return true;
}

// HandleToggleFullscreenCommand @ 147c63590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HandleToggleFullscreenCommand(UGameViewportClient *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  UEngine *this_00;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  UClass *pUVar8;
  UGameUserSettings *this_01;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  TConsoleVariableData<int> *pTVar11;
  int iVar12;
  longlong lVar13;
  Type local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  FDestructionSentinel local_48;
  
  if (this->Viewport == (FViewport *)0x0) {
    return true;
  }
  pTVar11 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.FullScreenMode",1);
    if (plVar10 != (longlong *)0x0) {
      pTVar11 = (TConsoleVariableData<int> *)(**(code **)(*plVar10 + 0x68))(plVar10);
    }
    ::CVar = pTVar11;
    _Init_thread_footer(&::_TSS0);
  }
  if ((::CVar == (TConsoleVariableData<int> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                         ,0x1019,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pTVar11 = ::CVar;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_res8[0] = (Type)(pTVar11->ShadowedValue[0] != 0);
  cVar6 = (**(code **)(this->Viewport->_padding_ + 0x130))();
  this_00 = GEngine;
  if (cVar6 != '\0') {
    local_res8[0] = Windowed;
  }
  local_res18[0] = GSystemResolution.ResY;
  local_res10[0] = GSystemResolution.ResX;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar13 = this_00->_padding_;
    iVar12 = (int)pUVar8->_padding_;
    if (((iVar12 <= *(int *)(lVar13 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar12 * 8) ==
         &pUVar8->_padding_)) &&
       (this_01 = UEngine::GetGameUserSettings(this_00), this_01 != (UGameUserSettings *)0x0)) {
      local_res10[0] = this_01->ResolutionSizeX;
      local_res18[0] = this_01->ResolutionSizeY;
      UGameEngine::DetermineGameWindowResolution
                ((int *)local_res10,(int *)local_res18,local_res8,true);
      if ((this_01->ResolutionSizeX != local_res10[0]) ||
         (this_01->ResolutionSizeY != local_res18[0])) {
        this_01->ResolutionSizeX = local_res10[0];
        this_01->ResolutionSizeY = local_res18[0];
        UGameUserSettings::UpdateResolutionQuality(this_01);
      }
      UGameUserSettings::SetFullscreenMode(this_01,local_res8[0]);
      (**(code **)(this_01->_padding_ + 0x2c8))(this_01);
      (**(code **)(this_01->_padding_ + 0x2b0))(this_01,0);
      goto LAB_147c637a9;
    }
  }
  FSystemResolution::RequestResolutionChange(local_res10[0],local_res18[0],local_res8[0]);
LAB_147c637a9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ToggleFullscreenDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->ToggleFullscreenDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar4 = false;
  iVar12 = *(int *)&(this->ToggleFullscreenDelegate).field_0x10 + -1;
  if (-1 < iVar12) {
    lVar13 = (longlong)iVar12 << 4;
    bVar4 = false;
    do {
      if ((*(int *)&(this->ToggleFullscreenDelegate).field_0x10 <= iVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)&(this->ToggleFullscreenDelegate).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
          (plVar10 = *(longlong **)(lVar13 + lVar2), plVar10 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar10 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar13 = lVar13 + -0x10;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  puVar1 = &(this->ToggleFullscreenDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ToggleFullscreenDelegate
               ,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return true;
}

// HandleToggleMIPFadeCommand @ 147c63910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleToggleMIPFadeCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  
  bVar1 = 0.0 <= GEnableMipLevelFading;
  GEnableMipLevelFading = __real_3f800000;
  if (bVar1) {
    GEnableMipLevelFading = __real_bf800000;
  }
  FOutputDevice::LogfImpl(param_2,L"Mip-fading is now: %s");
  return true;
}

// HandleViewModeCommand @ 147c63980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UGameViewportClient::HandleViewModeCommand
          (UGameViewportClient *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  longlong lVar11;
  EViewModeIndex EVar12;
  ulonglong uVar13;
  int *piVar14;
  wchar_t *local_res10;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = param_1;
  UEngine::GetLocalPlayerIterator((UEngine *)this->_padding_,&local_48,param_3);
  for (; (pTVar2 = local_48.Container, lVar11 = (longlong)local_48.Index, -1 < local_48.Index &&
         (local_48.Index < (local_48.Container)->ArrayNum)); local_48.Index = local_48.Index + 1) {
    if ((local_48.Index < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11 * 8) != 0) break;
  }
  uVar13 = 0;
  do {
    pTVar2 = local_48.Container;
    lVar11 = (longlong)local_48.Index;
    if (local_48.Index < 0) {
      return true;
    }
    if ((local_48.Container)->ArrayNum <= local_48.Index) {
      return true;
    }
    if ((local_48.Index < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pTVar3 = local_48.Container;
    if (*(longlong *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11 * 8) + 0x30) != 0) {
      lVar11 = (longlong)local_48.Index;
      uVar10 = 0;
      if (local_48.Index < (local_48.Container)->ArrayNum) {
        uVar10 = (uint)~local_48.Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)((pTVar3->AllocatorInstance).Data + lVar11 * 8) + 0x30) +
           0x440) != 0) {
        FParse::Token(&local_28,&local_res10,false);
        if (local_28.Data.ArrayNum < 2) {
          GetViewModeName(this->ViewModeIndex);
          FOutputDevice::LogfImpl(param_2,L"Current view mode: %s");
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          do {
            EVar12 = (EViewModeIndex)uVar13;
            if (EVar12 != VMI_BrushWireframe) {
              if (EVar12 == (int)(uVar13 / 5) * 5) {
                iVar6 = 6;
                pwVar7 = L"\n     ";
              }
              else {
                iVar6 = 2;
                pwVar7 = L", ";
              }
              ::FString::AppendChars(&local_38,pwVar7,iVar6);
            }
            pwVar7 = GetViewModeName(EVar12);
            sVar8 = wcslen(pwVar7);
            ::FString::AppendChars(&local_38,pwVar7,(int)sVar8);
            uVar13 = (ulonglong)(EVar12 + VMI_Wireframe);
          } while (EVar12 + VMI_Wireframe < 0x2c);
          FOutputDevice::LogfImpl(param_2,L"Available view modes: %s");
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          goto LAB_147c63c9f;
        }
        break;
      }
    }
    do {
      pTVar2 = local_48.Container;
      uVar10 = local_48.Index + 1;
      local_48.Index = uVar10;
      if (((int)uVar10 < 0) || ((local_48.Container)->ArrayNum <= (int)uVar10)) break;
      if (((int)uVar10 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    } while (*(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8) == 0);
  } while( true );
LAB_147c63b67:
  EVar12 = (EViewModeIndex)uVar13;
  pwVar7 = GetViewModeName(EVar12);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,pwVar7);
  if (iVar6 == 0) {
    this->ViewModeIndex = EVar12;
    GetViewModeName(EVar12);
    FOutputDevice::LogfImpl(param_2,L"Set new viewmode: %s");
    goto LAB_147c63c9f;
  }
  uVar10 = EVar12 + VMI_Wireframe;
  uVar13 = (ulonglong)uVar10;
  if (0x2b < uVar10) {
    if (uVar10 == 0x2c) {
      FOutputDevice::LogfImpl(param_2,L"Error: view mode not recognized: %s");
    }
LAB_147c63c9f:
    piVar14 = &this->ViewModeIndex;
    iVar6 = *piVar14;
    if ((iVar6 == 0xe) ||
       (((iVar6 != 3 && (iVar6 != 8)) && (bVar4 = AllowDebugViewmodes(), !bVar4)))) {
      *piVar14 = 3;
    }
    if (((GRHIGlobals.RayTracing.Supported == false) ||
        (GRHIGlobals.RayTracing.SupportsShaders == false)) &&
       ((*piVar14 == 0x1b || (*piVar14 == 0x1c)))) {
      *piVar14 = 3;
    }
    ApplyViewMode(*piVar14,true,&this->EngineShowFlags);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return true;
  }
  goto LAB_147c63b67;
}

// HandleViewportStatCheckEnabled @ 147c63d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::HandleViewportStatCheckEnabled
          (UGameViewportClient *this,wchar_t *param_1,bool *param_2,bool *param_3)

{
  code *pcVar1;
  UGameViewportClient *pUVar2;
  bool bVar3;
  FCommonViewportClient *pFVar4;
  bool bVar5;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x180);
  ::FString::FString(&local_18,param_1);
  bVar3 = (bool)(*pcVar1)(&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FCommonViewportClient *)&this->_padding_;
  if (this == (UGameViewportClient *)0x0) {
    pFVar4 = (FCommonViewportClient *)0x0;
  }
  if (GStatProcessingViewportClient == pFVar4) {
    pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar2 == (UGameViewportClient *)0x0) {
      bVar5 = this == (UGameViewportClient *)0x0;
    }
    else {
      bVar5 = pUVar2 == this;
    }
    if (bVar5) {
      *param_2 = bVar3;
      return;
    }
  }
  *param_3 = (bool)(*param_3 | bVar3);
  return;
}

// HandleViewportStatDisableAll @ 147c63df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::HandleViewportStatDisableAll(UGameViewportClient *this,bool param_1)

{
  UGameViewportClient *pUVar1;
  FCommonViewportClient *pFVar2;
  bool bVar3;
  
  if (!param_1) {
    pFVar2 = (FCommonViewportClient *)&this->_padding_;
    if (this == (UGameViewportClient *)0x0) {
      pFVar2 = (FCommonViewportClient *)0x0;
    }
    if (GStatProcessingViewportClient != pFVar2) {
      return;
    }
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar1 == (UGameViewportClient *)0x0) {
      bVar3 = this == (UGameViewportClient *)0x0;
    }
    else {
      bVar3 = pUVar1 == this;
    }
    if (!bVar3) {
      return;
    }
  }
  DestructItems<FString,int>((FString *)EnabledStats.AllocatorInstance.Data,EnabledStats.ArrayNum);
  EnabledStats.ArrayNum = 0;
  if (EnabledStats.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&EnabledStats.AllocatorInstance,0,&EnabledStats.ArrayMax);
  }
  return;
}

// HandleViewportStatDisabled @ 147c63e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::HandleViewportStatDisabled(UGameViewportClient *this,wchar_t *param_1)

{
  UGameViewportClient *pUVar1;
  FCommonViewportClient *pFVar2;
  bool bVar3;
  
  pFVar2 = (FCommonViewportClient *)&this->_padding_;
  if (this == (UGameViewportClient *)0x0) {
    pFVar2 = (FCommonViewportClient *)0x0;
  }
  if (GStatProcessingViewportClient == pFVar2) {
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar1 == (UGameViewportClient *)0x0) {
      bVar3 = this == (UGameViewportClient *)0x0;
    }
    else {
      bVar3 = pUVar1 == this;
    }
    if (bVar3) {
      SetStatEnabled(this,param_1,false,false);
      return;
    }
  }
  return;
}

// HandleViewportStatEnabled @ 147c63ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::HandleViewportStatEnabled(UGameViewportClient *this,wchar_t *param_1)

{
  UGameViewportClient *pUVar1;
  FCommonViewportClient *pFVar2;
  bool bVar3;
  FString local_18;
  
  pFVar2 = (FCommonViewportClient *)&this->_padding_;
  if (this == (UGameViewportClient *)0x0) {
    pFVar2 = (FCommonViewportClient *)0x0;
  }
  if (GStatProcessingViewportClient == pFVar2) {
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar1 == (UGameViewportClient *)0x0) {
      bVar3 = this == (UGameViewportClient *)0x0;
    }
    else {
      bVar3 = pUVar1 == this;
    }
    if (bVar3) {
      ::FString::FString(&local_18,param_1);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(&EnabledStats,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleWindowDPIScaleChanged @ 147c63f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::HandleWindowDPIScaleChanged
          (UGameViewportClient *this,TSharedRef<SWindow,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HasBottomSafeZone @ 147c63fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HasBottomSafeZone(UGameViewportClient *this,int param_1)

{
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
  case '\x02':
  case '\x05':
  case '\b':
    return true;
  case '\x01':
  case '\x03':
    return 0 < param_1;
  case '\x04':
  case '\x06':
  case '\a':
    return 1 < param_1;
  case '\t':
    return 2 < param_1;
  default:
    return false;
  }
}

// HasLeftSafeZone @ 147c64050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HasLeftSafeZone(UGameViewportClient *this,int param_1)

{
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
  case '\x01':
  case '\x06':
  case '\t':
    return true;
  case '\x02':
  case '\x05':
  case '\b':
    return param_1 == 0;
  case '\x03':
    return param_1 < 2;
  case '\x04':
  case '\a':
    return (param_1 & 0xfffffffdU) == 0;
  default:
    return false;
  }
}

// HasRightSafeZone @ 147c64470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HasRightSafeZone(UGameViewportClient *this,int param_1)

{
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
  case '\x01':
  case '\x06':
  case '\t':
    return true;
  case '\x02':
  case '\x04':
    return 0 < param_1;
  case '\x03':
    return param_1 != 1;
  case '\x05':
    return param_1 == 2;
  case '\a':
    return (param_1 - 1U & 0xfffffffd) == 0;
  case '\b':
    return param_1 == 3;
  default:
    return false;
  }
}

// HasSoftwareCursor @ 147c646e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HasSoftwareCursor(UGameViewportClient *this,Type param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->CursorWidgets).field_0x8 != *(int *)&(this->CursorWidgets).field_0x34) {
    puVar2 = *(undefined1 **)&(this->CursorWidgets).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->CursorWidgets).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->CursorWidgets).field_0x48 - Default & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(Type *)((longlong)iVar1 * 0x20 + *(longlong *)&this->CursorWidgets) == param_1)
        goto LAB_147c6473e;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->CursorWidgets);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_147c6473e:
  return iVar1 != -1;
}

// HasTopSafeZone @ 147c64750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HasTopSafeZone(UGameViewportClient *this,int param_1)

{
  switch((this->ActiveSplitscreenType).Value) {
  case '\0':
  case '\x02':
  case '\x05':
  case '\b':
    return true;
  case '\x01':
  case '\x03':
  case '\x06':
  case '\t':
    return param_1 == 0;
  case '\x04':
  case '\a':
    return param_1 < 2;
  default:
    return false;
  }
}

// HideCursorDuringCapture @ 147c647c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::HideCursorDuringCapture(UGameViewportClient *this)

{
  return (bool)(this->OnInputAxisEvent).field_0x3;
}

// IgnoreInput @ 147c647d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IgnoreInput(UGameViewportClient *this)

{
  return (bool)(this->OnInputAxisEvent).field_0x1;
}

// Init @ 147c647e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::Init
          (UGameViewportClient *this,FWorldContext *param_1,UGameInstance *param_2,bool param_3)

{
  undefined1 *puVar1;
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *pTVar2;
  TObjectPtr<UWorld> *pTVar3;
  ulonglong uVar4;
  double *pdVar5;
  UWorld *pUVar6;
  longlong lVar7;
  code *pcVar8;
  void *pvVar9;
  ForElementType<unsigned_int> FVar10;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *pTVar11;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *pTVar12;
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *pTVar13;
  bool bVar14;
  uint uVar15;
  UClass *pUVar16;
  wchar_t *pwVar17;
  UEnum *this_00;
  FName *pFVar18;
  long64 lVar19;
  FSlateApplication *pFVar20;
  UUserInterfaceSettings *pUVar21;
  FAudioDeviceManager *this_01;
  FAudioDeviceHandle *pFVar22;
  FAudioDevice *this_02;
  AWorldSettings *pAVar23;
  FViewportClient *pFVar24;
  longlong lVar25;
  ForAnyElementType FVar26;
  int iVar27;
  FViewportClient *pFVar28;
  int iVar29;
  uint uVar30;
  ForElementType<unsigned_int> FVar31;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FString local_1a8;
  ForElementType<unsigned_int> local_198;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *local_190;
  uint uStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  ulonglong local_160;
  int local_158;
  int local_154;
  TObjectPtr<UWorld>_u_0 *local_150;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *local_148;
  UUserInterfaceSettings *local_140;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FName local_d8 [2];
  TVector2<double>_u_0 local_c8;
  TObjectPtr<UWorld>_u_0 local_b8 [4];
  FAudioDeviceHandle local_98 [2];
  undefined4 local_64;
  undefined4 local_44;
  
  pTVar3 = &this->World;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar6 = (param_1->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar6 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar3->field0_0x0 = (param_1->ThisCurrentWorld).field0_0x0;
  local_150 = &pTVar3->field0_0x0;
  TArray<TObjectPtr<UWorld>_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UWorld>_*>
            (&param_1->ExternalReferences,(TObjectPtr<UWorld> **)&local_150);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->GameInstance).field0_0x0.DebugPtr = param_2;
  pUVar16 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar16);
  }
  pFVar28 = (FViewportClient *)0x0;
  this->MouseCaptureMode = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x8;
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  pwVar17 = FCommandLine::Get();
  bVar14 = FParse::Value(pwVar17,L"DefaultViewportMouseCaptureMode=",&local_1a8,true,(wchar_t **)0x0
                        );
  uVar30 = 0;
  if (bVar14) {
    this_00 = StaticEnum<enum_EMouseCaptureMode>();
    if (this_00 == (UEnum *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x245,L"Unable to find EMouseCaptureMode enum");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar26.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      pFVar18 = ::FName::FName(local_d8,(wchar_t *)FVar26.Data);
      lVar19 = UEnum::GetValueByName(this_00,*pFVar18,None);
      if (lVar19 == -1) {
        if (2 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
      }
      else {
        this->MouseCaptureMode = (EMouseCaptureMode)lVar19;
      }
    }
  }
  pUVar16 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar16);
  }
  pvVar9 = ThreadLocalStoragePointer;
  this->MouseLockMode = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x9;
  if ((*(int *)(*(longlong *)((longlong)pvVar9 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar17 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar17,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    this->MouseCaptureMode = NoCapture;
    this->MouseLockMode = DoNotLock;
  }
  pFVar20 = FSlateApplication::Get();
  if (pFVar20->bRenderOffScreen != false) {
    this->MouseLockMode = DoNotLock;
  }
  pUVar16 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  pUVar21 = GetDefault<UUserInterfaceSettings>(pUVar16);
  local_140 = pUVar21;
  if ((GEngine != (UEngine *)0x0) &&
     (this_01 = UEngine::GetAudioDeviceManager(GEngine), this_01 != (FAudioDeviceManager *)0x0)) {
    FAudioDeviceManager::GetDefaultParamsForNewWorld
              (this_01,(FAudioDeviceParams *)&local_b8[0].ObjectPtr);
    local_b8[0].DebugPtr = *(UWorld **)&pTVar3->field0_0x0;
    pFVar22 = FAudioDeviceManager::RequestAudioDevice
                        (this_01,local_98,(FAudioDeviceParams *)&local_b8[0].ObjectPtr);
    FAudioDeviceHandle::operator=(&this->AudioDevice,pFVar22);
    FAudioDeviceHandle::~FAudioDeviceHandle(local_98);
    bVar14 = FAudioDeviceHandle::IsValid(&this->AudioDevice);
    if (bVar14) {
      pFVar24 = (FViewportClient *)&this->_padding_;
      if (this == (UGameViewportClient *)0x0) {
        pFVar24 = pFVar28;
      }
      Audio::FAudioDebugger::ResolveDesiredStats(pFVar24);
      if ((pTVar3->field0_0x0).DebugPtr != (UWorld *)0x0) {
        this_02 = FAudioDeviceHandle::GetAudioDevice(&this->AudioDevice);
        pAVar23 = UWorld::GetWorldSettings((pTVar3->field0_0x0).DebugPtr,false,true);
        FAudioDevice::SetDefaultBaseSoundMix
                  (this_02,(pAVar23->DefaultBaseSoundMix).field0_0x0.DebugPtr);
        UWorld::SetAudioDevice((pTVar3->field0_0x0).DebugPtr,&this->AudioDevice);
      }
      uVar15 = FAudioDeviceHandle::GetDeviceID(&this->AudioDevice);
      param_1->AudioDeviceID = uVar15;
    }
  }
  local_198 = (ForElementType<unsigned_int>)&(pUVar21->SoftwareCursors).field_0x10;
  uVar15 = *(uint *)&(pUVar21->SoftwareCursors).field_0x28;
  local_190 = &pUVar21->SoftwareCursors;
  local_160 = 1;
  local_170 = 0;
  iVar29 = 0;
  uStack_184 = 1;
  uStack_174 = local_170;
  if (uVar15 != 0) {
    puVar33 = *(uint **)&(pUVar21->SoftwareCursors).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)local_198;
    }
    uStack_184 = *puVar33;
    pFVar24 = pFVar28;
    local_170 = 0;
    uVar30 = 0;
    while (uStack_184 == 0) {
      iVar29 = (int)pFVar28;
      local_170 = (int)pFVar24 + 0x20;
      pFVar24 = (FViewportClient *)(ulonglong)local_170;
      uVar30 = iVar29 + 1;
      pFVar28 = (FViewportClient *)(ulonglong)uVar30;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar30) {
        iVar29 = *(int *)&(pUVar21->SoftwareCursors).field_0x28;
        uStack_184 = 1;
        uStack_174 = uVar15;
        goto LAB_147c64b78;
      }
      uStack_184 = (puVar33 + 1)[iVar29];
    }
    iVar29 = *(int *)&(pUVar21->SoftwareCursors).field_0x28;
    uStack_184 = -uStack_184 & uStack_184;
    uVar4 = (ulonglong)uStack_184 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_res18 = (int)lVar25;
    uStack_174 = (local_170 - 1) + local_res18;
    if (iVar29 < (int)uStack_174) {
      uStack_174 = uVar15;
    }
  }
LAB_147c64b78:
  uVar15 = *(uint *)&(pUVar21->SoftwareCursors).field_0x28;
  uStack_16c = local_64;
  iStack_168 = *(int *)&(pUVar21->SoftwareCursors).field_0x8 -
               *(int *)&(pUVar21->SoftwareCursors).field_0x34;
  uVar34 = uVar15 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_184,uVar30);
  uStack_178 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_174;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar15 >> 5;
  TStack_130._28_4_ = local_64;
  TStack_130.BaseBitIndex = local_170;
  uStack_110 = CONCAT44(uStack_164,iStack_168);
  uStack_188 = uVar30;
  local_180 = (undefined1 *)local_198;
  local_148 = local_190;
  local_138 = local_190;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_198;
  if ((((int)uVar15 < 0) || (iVar29 < (int)uVar15)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar11 = local_148;
  FVar10 = local_198;
  uVar30 = *(int *)((longlong)local_198 + 0x18);
  if (uVar15 != uVar30) {
    FVar31 = *(ForElementType<unsigned_int> *)((longlong)local_198 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_198 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar31 = local_198;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar31 + (longlong)iVar27 * 4);
    while (uVar15 == 0) {
      lVar25 = (longlong)iVar27;
      uVar34 = uVar34 + 0x20;
      iVar27 = iVar27 + 1;
      uVar15 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_147c64cb0;
      uVar15 = *(uint *)((undefined1 *)((longlong)FVar31 + 4) + lVar25 * 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_158 = (int)lVar25;
    uVar15 = local_158 + -1 + uVar34;
    if ((int)uVar30 < (int)uVar15) {
      uVar15 = uVar30;
    }
  }
LAB_147c64cb0:
  while( true ) {
    pTVar12 = local_138;
    if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pUVar21 = local_140;
    if (((TStack_130.CurrentBitIndex == uVar15) &&
        ((ForElementType<unsigned_int>)TStack_130.Array == FVar10)) && (pTVar12 == pTVar11)) break;
    lVar25 = *(longlong *)pTVar12;
    SetSoftwareCursorFromClassPath
              (this,(uint)*(byte *)((longlong)TStack_130.CurrentBitIndex * 0x30 + lVar25),
               (FSoftClassPath *)(lVar25 + 8 + (longlong)TStack_130.CurrentBitIndex * 0x30));
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uStack_188 = 0;
  iVar29 = *(int *)&(local_140->HardwareCursors).field_0x28;
  puVar1 = &(local_140->HardwareCursors).field_0x10;
  local_170 = 0;
  pTVar2 = &local_140->HardwareCursors;
  uStack_174 = 0;
  if (iVar29 != 0) {
    puVar33 = *(uint **)&(local_140->HardwareCursors).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uVar30 = *puVar33;
    while (uVar30 == 0) {
      lVar25 = (longlong)(int)uStack_188;
      local_170 = local_170 + 0x20;
      uStack_188 = uStack_188 + 1;
      uStack_174 = iVar29;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_188)
      goto LAB_147c64da0;
      uVar30 = puVar33[lVar25 + 1];
    }
    local_160 = (ulonglong)(-uVar30 & uVar30);
    uVar4 = local_160 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_154 = (int)lVar25;
    uStack_174 = local_170 + -1 + local_154;
    if (iVar29 < (int)uStack_174) {
      uStack_174 = iVar29;
    }
  }
LAB_147c64da0:
  uStack_184 = (uint)local_160;
  uStack_16c = local_44;
  iStack_168 = *(int *)&(local_140->HardwareCursors).field_0x8 -
               *(int *)&(local_140->HardwareCursors).field_0x34;
  uVar30 = *(uint *)&(local_140->HardwareCursors).field_0x28;
  uStack_178 = 0xffffffff;
  uVar15 = uVar30 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_184,uStack_188);
  TStack_100.CurrentBitIndex = uStack_174;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar30 >> 5;
  TStack_100._28_4_ = local_44;
  TStack_100.BaseBitIndex = local_170;
  uStack_e0 = CONCAT44(uStack_164,iStack_168);
  local_190 = (TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
               *)pTVar2;
  local_180 = puVar1;
  local_108 = pTVar2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar30 < 0) || (iVar29 < (int)uVar30)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar34 = *(uint *)&(pUVar21->HardwareCursors).field_0x28;
  if (uVar30 != uVar34) {
    puVar32 = *(undefined1 **)&(pUVar21->HardwareCursors).field_0x20;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = puVar1;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar27 * 4);
    while (uVar30 == 0) {
      lVar25 = (longlong)iVar27;
      uVar15 = uVar15 + 0x20;
      iVar27 = iVar27 + 1;
      uVar30 = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_147c64eb0;
      uVar30 = *(uint *)(puVar32 + lVar25 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar30 = (int)lVar25 + -1 + uVar15;
    if ((int)uVar34 < (int)uVar30) {
      uVar30 = uVar34;
    }
  }
LAB_147c64eb0:
  while( true ) {
    pTVar13 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FHardwareCursorReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar25 = (longlong)TStack_100.CurrentBitIndex;
    if (((TStack_100.CurrentBitIndex == uVar30) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar13 == pTVar2)
       ) break;
    lVar7 = *(longlong *)pTVar13;
    pdVar5 = (double *)(lVar7 + 0x10 + lVar25 * 0x28);
    local_c8._s_0.X = *pdVar5;
    local_c8._s_0.Y = pdVar5[1];
    SetHardwareCursor(this,(uint)*(byte *)(lVar7 + lVar25 * 0x28),
                      *(FName *)(lVar7 + 8 + lVar25 * 0x28),(TVector2<double> *)&local_c8._s_0);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return;
}

// InputAxis @ 147c67550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::InputAxis(UGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  FViewport *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  ULocalPlayer *pUVar6;
  longlong *plVar7;
  float local_res8 [2];
  FKey local_88;
  FViewport *local_68;
  int local_60;
  FInputDeviceId local_5c;
  FKey local_58;
  EInputEvent local_40;
  float local_3c;
  float local_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  ulong64 local_28;
  
  cVar3 = (**(code **)(this->_padding_ + 400))();
  if (cVar3 != '\0') {
    return false;
  }
  local_60 = param_1->ControllerId;
  local_5c.InternalId = (param_1->InputDevice).InternalId;
  local_58.KeyName = (param_1->Key).KeyName;
  local_58.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  local_58.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar1 = param_1->Viewport;
  if (local_58.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  local_40 = param_1->Event;
  local_3c = param_1->AmountDepressed;
  local_38 = param_1->DeltaTime;
  local_34 = param_1->NumSamples;
  local_30 = param_1->bIsTouchEvent;
  local_2f = param_1->bIsSimulatedInput;
  local_28 = param_1->EventTimestamp;
  local_68 = pFVar1;
  FKey::IsGamepadKey(&local_58);
  local_res8[0] = local_3c;
  (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x2e0))
            (&this[-1].OnInputAxisEvent.field_0x8,&local_68);
  bVar4 = FKey::IsGamepadKey(&local_58);
  local_88.KeyName = local_58.KeyName;
  local_88.KeyDetails.Object = local_58.KeyDetails.Object;
  local_88.KeyDetails.SharedReferenceCount.ReferenceController =
       local_58.KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_58.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(FViewport_*,int,FKey,float,float,int,bool),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(FViewport_*,int,FKey,float,float,int,bool),FDefaultDelegateUserPolicy>
               *)&(this->OnOverrideInputAxisEvent).field_0x8,pFVar1,local_60,&local_88,local_res8[0]
              ,local_38,local_34,bVar4);
  cVar3 = '\0';
  if ((pFVar1 == (FViewport *)0x0) ||
     (((pFVar1->bIsPlayInEditorViewport == 1 && pFVar1->bIsSlateViewport == 1 &&
       ((longlong *)this->_padding_ != (longlong *)0x0)) &&
      (cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x3a0))(), cVar5 != '\0'))))
  goto LAB_147c677d4;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 == (longlong *)0x0) {
LAB_147c67725:
    bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomNavigationEvent);
    if (bVar4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CustomNavigationEvent,(FReadAccessScope *)&local_88);
      if (*(int *)&(this->CustomNavigationEvent).field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(this->CustomNavigationEvent).field_0x8;
      }
      cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,&local_68,local_res8,&local_38,&local_34);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_88);
      if (cVar3 != '\0') goto LAB_147c677b6;
    }
    pUVar6 = UEngine::GetLocalPlayerFromInputDevice
                       (GEngine,(UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,local_5c
                       );
    if ((pUVar6 != (ULocalPlayer *)0x0) &&
       (plVar7 = (longlong *)pUVar6->_padding_, plVar7 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar7 + 0xdc0))(plVar7,&local_68);
    }
  }
  else {
    pcVar2 = *(code **)(*plVar7 + 0x370);
    bVar4 = FKey::IsGamepadKey(&local_58);
    local_88.KeyName = local_58.KeyName;
    local_88.KeyDetails.Object = local_58.KeyDetails.Object;
    local_88.KeyDetails.SharedReferenceCount.ReferenceController =
         local_58.KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_58.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar3 = (*pcVar2)(plVar7,local_5c.InternalId,&local_88,local_res8[0],local_38,local_34,bVar4);
    if (cVar3 == '\0') goto LAB_147c67725;
  }
LAB_147c677b6:
  if (pFVar1->bIsPlayInEditorViewport == 1 && pFVar1->bIsSlateViewport == 1) {
    cVar3 = '\x01';
  }
LAB_147c677d4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.KeyDetails.SharedReferenceCount.ReferenceController);
  return (bool)cVar3;
}

// InputChar @ 147c67810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::InputChar
          (UGameViewportClient *this,FViewport *param_1,int param_2,wchar_t param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::AppendChar(&local_18,param_3);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x360))(plVar1,param_2,&local_18);
  }
  cVar3 = (**(code **)(this->_padding_ + 400))(this);
  if (((cVar3 == '\0') && (cVar2 == '\0')) &&
     (param_1->bIsPlayInEditorViewport == 1 && param_1->bIsSlateViewport == 1)) {
    cVar2 = '\x01';
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)cVar2;
}

// InputKey @ 147c678c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::InputKey(UGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  undefined1 *puVar1;
  EInputEvent EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  FModifierKeysState FVar13;
  uint uVar14;
  FSlateApplication *pFVar15;
  undefined6 extraout_var;
  UInputSettings *pUVar16;
  undefined6 extraout_var_00;
  ULocalPlayer *pUVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  FViewport *local_e8;
  int local_e0;
  FInputDeviceId local_dc;
  FKey local_d8;
  EInputEvent local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  undefined1 local_b0;
  undefined1 local_af;
  ulong64 local_a8;
  FName local_98;
  FKeyDetails *local_90;
  TReferenceControllerBase<1> *local_88;
  FDestructionSentinel local_80;
  FName local_68;
  FKeyDetails *local_60;
  TReferenceControllerBase<1> *local_58;
  FReadAccessScope local_50;
  
  local_e8 = param_1->Viewport;
  pTVar3 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_1->Key).KeyName;
  local_e0 = param_1->ControllerId;
  local_dc.InternalId = (param_1->InputDevice).InternalId;
  local_d8.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b4 = param_1->NumSamples;
  local_bc = param_1->AmountDepressed;
  local_b8 = param_1->DeltaTime;
  EVar2 = param_1->Event;
  local_b0 = param_1->bIsTouchEvent;
  local_af = param_1->bIsSimulatedInput;
  local_a8 = param_1->EventTimestamp;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.KeyName = FVar4;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  local_c0 = EVar2;
  if ((FVar4 == EKeys::Enter.KeyName) && (EVar2 == IE_Pressed)) {
    pFVar15 = FSlateApplication::Get();
    FVar13 = FSlateApplication::GetModifierKeys(pFVar15);
    if (((*(byte *)CONCAT62(extraout_var,FVar13) & 0x30) == 0) ||
       (pUVar16 = GetDefault<UInputSettings>(), pUVar16->bAltEnterTogglesFullscreen == 0))
    goto LAB_147c67994;
LAB_147c679e0:
    HandleToggleFullscreenCommand((UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    cVar10 = '\x01';
  }
  else {
LAB_147c67994:
    plVar20 = (longlong *)0x0;
    if (((FVar4 == EKeys::F11.KeyName) && (EVar2 == IE_Pressed)) &&
       (pUVar16 = GetDefault<UInputSettings>(), pUVar16->bF11TogglesFullscreen != '\0')) {
      pFVar15 = FSlateApplication::Get();
      FVar13 = FSlateApplication::GetModifierKeys(pFVar15);
      if ((*(ushort *)CONCAT62(extraout_var_00,FVar13) & 0x30) == 0 ||
          (*(ushort *)CONCAT62(extraout_var_00,FVar13) & 0xc) == 0) goto LAB_147c679e0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    puVar1 = &this[-1].OnInputAxisEvent.field_0x8;
    if ((local_d8.KeyName == EKeys::LeftMouseButton.KeyName) && (local_c0 == IE_Pressed)) {
      UEngine::SetFlashIndicatorLatencyMarker(GFrameCounter);
    }
    (**(code **)(*(longlong *)puVar1 + 0x2e0))(puVar1,&local_e8);
    cVar8 = (**(code **)(this->_padding_ + 400))(this);
    if (cVar8 == '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnOverrideInputKeyEvent,(FWriteAccessScope *)&local_80);
      puVar1 = &(this->OnOverrideInputAxisEvent).field_0x4;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar9 = false;
      uVar18 = *(int *)&(this->OnOverrideInputKeyEvent).field_0x10 - 1;
      if (-1 < (int)uVar18) {
        lVar19 = (longlong)(int)uVar18 << 4;
        bVar9 = false;
        do {
          uVar14 = 0;
          if ((int)uVar18 < *(int *)&(this->OnOverrideInputKeyEvent).field_0x10) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
          lVar6 = *(longlong *)&(this->OnOverrideInputKeyEvent).field_0x8;
          if (((*(int *)(lVar6 + 8 + lVar19) == 0) ||
              (plVar7 = *(longlong **)(lVar6 + lVar19), plVar7 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar7 + 0x68))(), cVar8 == '\0')) {
            bVar9 = true;
          }
          lVar19 = lVar19 + -0x10;
          uVar18 = uVar18 - 1;
        } while (-1 < (int)uVar18);
      }
      puVar1 = &(this->OnOverrideInputAxisEvent).field_0x4;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnOverrideInputKeyEvent,false);
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      plVar7 = (longlong *)this->_padding_;
      cVar8 = '\0';
      if (plVar7 != (longlong *)0x0) {
        pcVar5 = *(code **)(*plVar7 + 0x368);
        bVar9 = FKey::IsGamepadKey(&local_d8);
        local_68 = local_d8.KeyName;
        local_60 = local_d8.KeyDetails.Object;
        local_58 = local_d8.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_d8.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar8 = (*pcVar5)(plVar7,local_dc.InternalId,&local_68,local_c0,local_bc,bVar9);
        cVar10 = cVar8;
        if (cVar8 != '\0') goto LAB_147c67c9c;
      }
      bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &(this->ToggleFullscreenDelegate).field_0x8);
      if (bVar9) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->ToggleFullscreenDelegate).field_0x8,&local_50);
        if (*(int *)&(this->ToggleFullscreenDelegate).field_0x18 != 0) {
          plVar20 = *(longlong **)&(this->ToggleFullscreenDelegate).field_0x10;
        }
        cVar10 = (**(code **)(*plVar20 + 0x60))(plVar20,&local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        cVar8 = '\0';
        if (cVar10 != '\0') goto LAB_147c67c9c;
      }
      pUVar17 = UEngine::GetLocalPlayerFromInputDevice
                          (GEngine,(UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,
                           local_dc);
      if ((pUVar17 != (ULocalPlayer *)0x0) &&
         (plVar20 = (longlong *)pUVar17->_padding_, plVar20 != (longlong *)0x0)) {
        cVar10 = (**(code **)(*plVar20 + 0xdc0))(plVar20,&local_e8);
        cVar8 = '\0';
        if (cVar10 != '\0') goto LAB_147c67c9c;
      }
      bVar9 = FKey::IsMouseButton(&local_d8);
      cVar10 = cVar8;
      if (bVar9) {
        cVar10 = '\x01';
      }
    }
    else {
      plVar20 = (longlong *)this->_padding_;
      cVar10 = '\0';
      if (plVar20 != (longlong *)0x0) {
        pcVar5 = *(code **)(*plVar20 + 0x368);
        bVar9 = FKey::IsGamepadKey(&local_d8);
        local_98 = local_d8.KeyName;
        local_90 = local_d8.KeyDetails.Object;
        local_88 = local_d8.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_d8.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar10 = (*pcVar5)(plVar20,local_dc.InternalId,&local_98,local_c0,local_bc,bVar9);
      }
    }
  }
LAB_147c67c9c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.KeyDetails.SharedReferenceCount.ReferenceController);
  return (bool)cVar10;
}

// InputMotion @ 147c67cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::InputMotion
          (UGameViewportClient *this,FViewport *param_1,FInputDeviceId param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,ulong64 param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  UClass *this_00;
  ULocalPlayer *pUVar4;
  
  cVar2 = (**(code **)(this->_padding_ + 400))();
  if (cVar2 == '\0') {
    this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((char)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 < '\0') {
      pUVar4 = UEngine::GetLocalPlayerFromInputDevice
                         (GEngine,(UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,
                          param_2);
      if (pUVar4 == (ULocalPlayer *)0x0) {
        return false;
      }
      plVar1 = (longlong *)pUVar4->_padding_;
      if (plVar1 == (longlong *)0x0) {
        return false;
      }
      uVar3 = (**(code **)(*plVar1 + 0xde0))
                        (plVar1,param_2.InternalId,param_3,param_4,param_5,param_6,param_7);
      return (bool)uVar3;
    }
  }
  return false;
}

// InputTouch @ 147c67db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::InputTouch
          (UGameViewportClient *this,FViewport *param_1,FInputDeviceId param_2,uint param_3,
          Type param_4,TVector2<double> *param_5,float param_6,uint param_7,ulong64 param_8)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  ULocalPlayer *pUVar4;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  cVar2 = (**(code **)(this->_padding_ + 400))();
  if (cVar2 != '\0') {
    return false;
  }
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x378))
                        (plVar1,param_2.InternalId,param_3,param_4,param_5,param_6,param_8,
                         CONCAT44(uVar5,param_7)), cVar2 != '\0')) {
    return (bool)cVar2;
  }
  uVar3 = 0;
  pUVar4 = UEngine::GetLocalPlayerFromInputDevice
                     (GEngine,(UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8,param_2);
  if ((pUVar4 != (ULocalPlayer *)0x0) &&
     (plVar1 = (longlong *)pUVar4->_padding_, plVar1 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0xdd0))
                      (plVar1,param_2.InternalId,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return (bool)uVar3;
}

// IsExclusiveFullscreenViewport @ 147c68fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsExclusiveFullscreenViewport(UGameViewportClient *this)

{
  undefined1 uVar1;
  
  if (this->Viewport != (FViewport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c68fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->Viewport->_padding_ + 0x138))();
    return (bool)uVar1;
  }
  return false;
}

// IsFocused @ 147c68fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsFocused(UGameViewportClient *this,FViewport *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(param_1->_padding_ + 0x98))(param_1);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// IsFullScreenViewport @ 147c69020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsFullScreenViewport(UGameViewportClient *this)

{
  undefined1 uVar1;
  
  if (this->Viewport != (FViewport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c6902f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->Viewport->_padding_ + 0x130))();
    return (bool)uVar1;
  }
  return false;
}

// IsInPermanentCapture @ 147c69240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsInPermanentCapture(UGameViewportClient *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x198))();
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)(this->_padding_ + 0x198))(this);
    if (cVar1 != '\x02') {
      bVar2 = false;
      goto LAB_147c69271;
    }
  }
  bVar2 = true;
LAB_147c69271:
  if ((longlong *)this->_padding_ == (longlong *)0x0) {
    return bVar2;
  }
  cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x3a0))();
  if ((cVar1 == '\0') && (bVar2 != false)) {
    return true;
  }
  return false;
}

// IsOrtho @ 147c692d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsOrtho(UGameViewportClient *this)

{
  return false;
}

// IsSimulateInEditorViewport @ 147c6a0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsSimulateInEditorViewport(UGameViewportClient *this)

{
  FViewport *pFVar1;
  
  pFVar1 = this->Viewport;
  if (((pFVar1 != (FViewport *)0x0) && (pFVar1->ViewportType == NAME_SceneViewport)) &&
     (pFVar1 != (FViewport *)&DAT_00000008)) {
    return (bool)(char)pFVar1[3].AppVersionString.Data.ArrayNum;
  }
  return false;
}

// IsStatEnabled @ 147c6a150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::IsStatEnabled(UGameViewportClient *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  pFVar4 = EnabledStats.AllocatorInstance.Data + (longlong)EnabledStats.ArrayNum * 0x10;
  FVar3.Data = EnabledStats.AllocatorInstance.Data;
  while( true ) {
    if (FVar3.Data == pFVar4) {
      return false;
    }
    iVar2 = *(int *)(FVar3.Data + 8);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)FVar3.Data,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    FVar3.Data = FVar3.Data + 0x10;
  }
  return true;
}

// LayoutPlayers @ 147c6b4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::LayoutPlayers(UGameViewportClient *this)

{
  float fVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UEngine *pUVar9;
  uint uVar10;
  UEngine *pUVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  UEngine *pUVar16;
  
  (**(code **)(this->_padding_ + 0x358))();
  pUVar11 = (UEngine *)0x0;
  bVar2 = (this->ActiveSplitscreenType).Value;
  uVar15 = (ulonglong)bVar2;
  uVar13 = (uint)bVar2;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar9 = (UEngine *)this->_padding_;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar9 = pUVar11;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar8 = UEngine::GetGamePlayers(pUVar9,this);
  uVar5 = __xmm_80000000800000008000000080000000;
  pUVar9 = pUVar11;
  pUVar16 = pUVar11;
  if (0 < pTVar8->ArrayNum) {
    do {
      uVar10 = (uint)pUVar11;
      if (((int)uVar15 < (this->SplitscreenInfo).ArrayNum) &&
         ((int)uVar10 < *(int *)((this->SplitscreenInfo).AllocatorInstance.Data + uVar15 * 0x10 + 8)
         )) {
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar12 = ~uVar10 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10));
        uVar7 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x90) = (double)fVar1;
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10) + 4
                          );
        uVar7 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x98) = (double)fVar1;
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10));
        uVar7 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x80) = (double)fVar1;
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10) + 4
                          );
        uVar7 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x88) = (double)fVar1;
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10));
        uVar14 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar14 = uVar12;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0xb8) = (double)(float)(uVar7 ^ uVar5);
        if (((this->SplitscreenInfo).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->SplitscreenInfo).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(pFVar3 + uVar15 * 0x10 + 8)) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)((longlong)&pUVar16->_padding_ + *(longlong *)(pFVar3 + uVar15 * 0x10) + 4)
        ;
        uVar14 = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar14 = uVar12;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0xc0) = (double)(float)(uVar7 ^ uVar5);
      }
      else {
        uVar14 = ~uVar10 >> 0x1f;
        uVar12 = 0;
        uVar7 = uVar12;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x90) = 0;
        uVar7 = uVar12;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x98) = 0;
        uVar7 = uVar12;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x80) = 0;
        uVar7 = uVar12;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0x88) = 0;
        uVar7 = uVar12;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0xb8) = 0;
        if ((int)uVar10 < pTVar8->ArrayNum) {
          uVar12 = uVar14;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)
         (*(longlong *)((longlong)&pUVar9->_padding_ + (longlong)(pTVar8->AllocatorInstance).Data) +
         0xc0) = 0;
      }
      uVar15 = (ulonglong)(int)uVar13;
      pUVar11 = (UEngine *)(ulonglong)(uVar10 + 1);
      pUVar9 = (UEngine *)&pUVar9->_padding_;
      pUVar16 = (UEngine *)&pUVar16->_padding_;
    } while ((int)(uVar10 + 1) < pTVar8->ArrayNum);
  }
  return;
}

// LoadAvailableCursorPngs @ 147c6bdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::LoadAvailableCursorPngs
          (UGameViewportClient *this,
          TArray<TSharedPtr<UGameViewportClient::FPngFileData,1>,TSizedDefaultAllocator<32>_>
          *param_1,FString *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  code *pcVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  wchar_t wVar11;
  int iVar12;
  FString *pFVar13;
  IFileManager *pIVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  double dVar22;
  FIdentityFunctor local_res10 [16];
  undefined1 local_res20 [8];
  ulonglong in_stack_fffffffffffffec0;
  ulonglong in_stack_fffffffffffffec8;
  TReferenceControllerBase<1> *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FString local_108;
  TReferenceControllerBase<1> *local_f8;
  ulonglong local_f0;
  FString local_e8;
  uint local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  pFVar13 = FPaths::GetCleanFilename(&local_80,param_2);
  ::FString::ConcatFC(&local_b0,pFVar13,L"*.png");
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  local_f8 = (TReferenceControllerBase<1> *)0x0;
  local_f0 = 0;
  pIVar14 = IFileManager::Get();
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar18.Data = local_b0.Data.AllocatorInstance.Data;
  }
  pcVar3 = *(code **)((longlong)*pIVar14 + 0x88);
  pFVar13 = FPaths::GetPath(local_70,param_2);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(pIVar14,&local_f8,pwVar19,FVar18.Data,1,in_stack_fffffffffffffec0 & 0xffffffffffffff00,
            in_stack_fffffffffffffec8 & 0xffffffffffffff00);
  if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
  }
  pTVar7 = _UNK_150651568;
  pTVar6 = ___xmm_00000000000000000000000000000010;
  uVar15 = (ulonglong)(int)(uint)local_f0;
  bVar9 = false;
  pTVar20 = local_f8 + uVar15;
  local_d8 = (uint)local_f0;
  uVar17 = uVar15;
  pTVar21 = local_f8;
LAB_147c6bec7:
  do {
    if ((int)uVar15 != (int)uVar17) {
      local_res10[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pTVar21 == pTVar20) {
      AlgoImpl::
      StableSortInternal<TSharedPtr<UGameViewportClient::FPngFileData,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UGameViewportClient::FPngFileData,1>,_UGameViewportClient::LoadAvailableCursorPngs_::__l2::<lambda_1>_>_>
                ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)
                 (param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10[0],
                 (<lambda_1> *)local_res20);
      DestructItems<FString,int>((FString *)local_f8,(uint)local_f0);
      if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      return bVar9;
    }
    FPaths::GetBaseFilename(&local_c0,(FString *)pTVar21,true);
    bVar5 = false;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    ::FString::FString(&local_a0,L"@");
    bVar8 = ::FString::Split(&local_c0,&local_a0,&local_d0,&local_e8,IgnoreCase,FromEnd);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      ::FString::FString(&local_90,L"x");
      bVar8 = ::FString::Split(&local_e8,&local_90,&local_108,&local_d0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (!bVar8) {
        iVar12 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange(&local_108,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar12);
      }
    }
    else {
      ::FString::operator=(&local_108,L"1");
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar18.Data = local_108.Data.AllocatorInstance.Data;
    }
    wVar11 = *(wchar_t *)FVar18.Data;
    if ((wVar11 == L'-') || (wVar11 == L'+')) {
      FVar18.Data = FVar18.Data + 2;
      wVar11 = *(wchar_t *)FVar18.Data;
    }
    if (wVar11 != L'\0') {
      wVar11 = *(wchar_t *)FVar18.Data;
      do {
        if (wVar11 == L'.') {
          if (bVar5) {
LAB_147c6c0ba:
            if (1 < (byte)LogInit._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            uVar15 = local_f0 & 0xffffffff;
            uVar17 = (ulonglong)local_d8;
            pTVar21 = pTVar21 + 1;
            goto LAB_147c6bec7;
          }
          bVar5 = true;
        }
        else {
          iVar12 = iswdigit(wVar11);
          if (iVar12 == 0) goto LAB_147c6c0ba;
        }
        wVar11 = *(wchar_t *)(FVar18.Data + 2);
        FVar18.Data = FVar18.Data + 2;
      } while (wVar11 != L'\0');
    }
    pTVar16 = ::operator_new(0x38);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      local_118 = pTVar6;
      pTStack_110 = pTVar7;
    }
    else {
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16[2]._padding_ = 0x3ff0000000000000;
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPngFileData_UGameViewportClient___00_SharedPointerInternals__6B_
      ;
      pTVar16[1]._padding_ = 0;
      pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[3]._padding_ = 0;
      if ((pTVar16 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      local_118 = pTVar16 + 1;
      pTStack_110 = pTVar16;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((local_118 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    pTVar16 = local_118;
    if (local_118 != pTVar21) {
      aVar1 = pTVar21->SharedReferenceCount;
      _Src = (void *)pTVar21->_padding_;
      aVar2 = local_118->WeakReferenceCount;
      local_118->SharedReferenceCount = aVar1;
      if ((aVar1 == (atomic<int>)0x0) && (aVar2 == (atomic<int>)0x0)) {
        local_118->WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)aVar1,(int)aVar2,(ForAnyElementType *)local_118,(int)aVar1,
                   (int *)&local_118->WeakReferenceCount);
        if (aVar1 != (atomic<int>)0x0) {
          memcpy((void *)pTVar16->_padding_,_Src,(longlong)(int)aVar1 * 2);
        }
      }
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar18.Data = local_108.Data.AllocatorInstance.Data;
    }
    dVar22 = _wtof((wchar_t *)FVar18.Data);
    if ((local_118 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    local_118[1]._padding_ = (longlong)(double)(float)dVar22;
    if (pTVar21->SharedReferenceCount == (atomic<int>)0x0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)pTVar21->_padding_;
    }
    if ((local_118 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    bVar9 = FFileHelper::LoadFileToArray
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                       &local_118[1].SharedReferenceCount,pwVar19,2);
    if ((bVar9) && (4 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    pFVar4 = (param_1->AllocatorInstance).Data;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar12 * 0x10) = local_118;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar12 * 0x10 + 8) = pTStack_110;
    if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110)
    ;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    uVar15 = local_f0 & 0xffffffff;
    pTVar21 = pTVar21 + 1;
    uVar17 = (ulonglong)local_d8;
  } while( true );
}

// LoadCursorFromPngs @ 147c6c7e0

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
UGameViewportClient::LoadCursorFromPngs
          (UGameViewportClient *this,ICursor *param_1,FString *param_2,TVector2<double> *param_3)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *pvVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  ForAnyElementType FVar16;
  FPngFileData *pFVar17;
  FSharedReferencer<1> FVar18;
  TReferenceControllerBase<1> *pTVar19;
  TSharedPtr<UGameViewportClient::FPngFileData,1> *pTVar20;
  float fVar21;
  undefined1 local_res10 [16];
  TVector2<double> *local_res20;
  FName local_d8;
  longlong *local_d0;
  TReferenceControllerBase<1> *local_c8;
  TArray<TSharedPtr<UGameViewportClient::FPngFileData,1>,TSizedDefaultAllocator<32>_> local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  local_res20 = param_3;
  cVar9 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if (cVar9 == '\0') {
    return (void *)0x0;
  }
  pvVar13 = (void *)0x0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  bVar10 = LoadAvailableCursorPngs(this,&local_c0,param_2);
  if (bVar10) {
    if (local_c0.ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CursorPngFiles.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                          ,0x12aa,L"");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
      if ((local_c0.ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
    }
    FVar18.ReferenceController =
         *(TReferenceControllerBase<1> **)(local_c0.AllocatorInstance.Data + 8);
    pFVar17 = *(FPngFileData **)local_c0.AllocatorInstance.Data;
    if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar18.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    fVar21 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(0.0,0.0);
    uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar8 = local_c0.ArrayNum;
    pTVar20 = (TSharedPtr<UGameViewportClient::FPngFileData,1> *)
              (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x10);
    FVar16.Data = local_c0.AllocatorInstance.Data;
    while( true ) {
      if (local_c0.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGameViewportClient::FPngFileData,1>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)FVar16.Data == pTVar20) break;
      if ((((TSharedPtr<UGameViewportClient::FPngFileData,1> *)FVar16.Data)->Object ==
           (FPngFileData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
      dVar3 = ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)FVar16.Data)->Object->ScaleFactor
              - (double)fVar21;
      if ((pFVar17 == (FPngFileData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
      dVar4 = pFVar17->ScaleFactor - (double)fVar21;
      pTVar19 = FVar18.ReferenceController;
      if ((double)(float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar6,
                                          SUB84(dVar3,0) & uVar5) <
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar6,SUB84(dVar4,0) & uVar5)) {
        pTVar19 = (((TSharedPtr<UGameViewportClient::FPngFileData,1> *)FVar16.Data)->
                  SharedReferenceCount).ReferenceController;
        pFVar17 = ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)FVar16.Data)->Object;
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar18.ReferenceController);
      }
      FVar16.Data = FVar16.Data + 0x10;
      FVar18.ReferenceController = pTVar19;
    }
    pFVar14 = ::FName::FName(&local_d8,"ImageWrapper");
    FVar1 = *pFVar14;
    this_00 = FModuleManager::Get();
    pIVar15 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,&local_d0,0,0);
    if (local_d0 != (longlong *)0x0) {
      if ((local_d0 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
      plVar7 = local_d0;
      pcVar2 = *(code **)*local_d0;
      if ((pFVar17 == (FPngFileData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        pvVar13 = (void *)(*pcVar2)();
        return pvVar13;
      }
      cVar9 = (*pcVar2)(plVar7,(pFVar17->FileData).AllocatorInstance.Data,
                        (longlong)(pFVar17->FileData).ArrayNum);
      if (cVar9 != '\0') {
        local_88 = 0;
        local_98 = (void *)0x0;
        uStack_90 = 0;
        if ((local_d0 == (longlong *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          pvVar13 = (void *)(*pcVar2)();
          return pvVar13;
        }
        cVar9 = (**(code **)(*local_d0 + 0x38))(local_d0,0,8,&local_98);
        if (cVar9 != '\0') {
          if ((local_d0 == (longlong *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            pvVar13 = (void *)(*pcVar2)();
            return pvVar13;
          }
          uVar11 = (**(code **)(*local_d0 + 0x40))();
          if ((local_d0 == (longlong *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            pvVar13 = (void *)(*pcVar2)();
            return pvVar13;
          }
          uVar12 = (**(code **)(*local_d0 + 0x48))();
          local_a8 = *(undefined4 *)&local_res20->field0_0x0;
          uStack_a4 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 4);
          uStack_a0 = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 8);
          uStack_9c = *(undefined4 *)((longlong)&local_res20->field0_0x0 + 0xc);
          pvVar13 = (void *)(**(code **)((longlong)*param_1 + 0x18))
                                      (param_1,local_98,uVar11,uVar12,&local_a8);
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
  }
  DestructItems<TSharedPtr<UGameViewportClient::FPngFileData,1>,int>
            ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)local_c0.AllocatorInstance.Data,
             local_c0.ArrayNum);
  if ((TSharedPtr<UGameViewportClient::FPngFileData,1> *)local_c0.AllocatorInstance.Data !=
      (TSharedPtr<UGameViewportClient::FPngFileData,1> *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return pvVar13;
}

// LockDuringCapture @ 147c6def0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::LockDuringCapture(UGameViewportClient *this)

{
  return (this->OnInputAxisEvent).field_0x4 != '\0';
}

// LostFocus @ 147c6e390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::LostFocus(UGameViewportClient *this,FViewport *param_1)

{
  byte bVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UWorld *this_00;
  UClass *this_01;
  UObject *pUVar8;
  FAudioDeviceManager *pFVar9;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = (UWorld *)
            (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x180))
                      (&this[-1].OnInputAxisEvent.field_0x8);
  this_01 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  bVar1 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x21;
  if ((this_00 != (UWorld *)0x0) && (this_00->bIsTearingDown == '\0')) {
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; iVar4 = local_18.Index, pTVar3 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      if ((local_18.Container)->ArrayNum <= local_18.Index) break;
      uVar7 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if (pUVar8 != (UObject *)0x0) {
        if ((bVar1 & 2) == 0) {
          cVar6 = (**(code **)(*(longlong *)pUVar8 + 0xdb8))(pUVar8);
          if (cVar6 == '\0') goto LAB_147c6e49e;
        }
        (**(code **)(*(longlong *)pUVar8 + 0xdb0))(pUVar8);
      }
LAB_147c6e49e:
    }
  }
  if (GEngine != (UEngine *)0x0) {
    pFVar9 = UEngine::GetAudioDeviceManager(GEngine);
    if (pFVar9 != (FAudioDeviceManager *)0x0) {
      (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.InlineData[4] = '\0';
    }
  }
  return;
}

// MapCursor @ 147c6ec60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<TSharedRef<SWidget,1>_> * __thiscall
UGameViewportClient::MapCursor
          (UGameViewportClient *this,TOptional<TSharedRef<SWidget,1>_> *__return_storage_ptr__,
          FViewport *param_1,FCursorReply *param_2)

{
  Type TVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TOptional<TSharedRef<SWidget,1>_> *pTVar6;
  Type *pTVar7;
  undefined1 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  if (((this->CursorWidgets).field_0x20 != '\0') && (TVar1 = param_2->MouseCursor, TVar1 != None)) {
    if (*(int *)&(this->HardwareCursors).field_0x28 != *(int *)&(this->CursorWidgets).field_0x4) {
      puVar8 = *(undefined1 **)&(this->CursorWidgets).field_0x10;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->CursorWidgets).field_0x8;
      }
      TVar5 = *(Type *)(puVar8 + (ulonglong)
                                 (*(int *)&(this->CursorWidgets).field_0x18 - Default & TVar1) * 4);
      if (TVar5 != ~None) {
        do {
          pTVar7 = (Type *)((longlong)(int)TVar5 * 0x20 +
                           *(longlong *)&(this->HardwareCursors).field_0x20);
          if (*pTVar7 == TVar1) {
            if (pTVar7 != (Type *)0x0) {
              pTVar9 = *(TReferenceControllerBase<1> **)(pTVar7 + 4);
              pSVar2 = *(SWidget **)(pTVar7 + 2);
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              if (pSVar2 != (SWidget *)0x0) {
                if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
                  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pSVar2;
                  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.
                  ReferenceController = (TReferenceControllerBase<1> *)0x0;
                }
                else {
                  LOCK();
                  pTVar9->SharedReferenceCount =
                       (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                  UNLOCK();
                  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pSVar2;
                  *(TReferenceControllerBase<1> **)
                   ((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar9;
                  LOCK();
                  pTVar9->SharedReferenceCount =
                       (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((__return_storage_ptr__->field0_0x0).TypedValue.Object == (SWidget *)0x0) {
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0xbd,
                                     L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                    );
                  if (bVar4) {
                    pcVar3 = (code *)swi(3);
                    pTVar6 = (TOptional<TSharedRef<SWidget,1>_> *)(*pcVar3)();
                    return pTVar6;
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar9);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar9);
                return __return_storage_ptr__;
              }
              goto LAB_147c6ece9;
            }
            break;
          }
          TVar5 = pTVar7[6];
        } while (TVar5 != ~None);
      }
    }
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_147c6ece9:
    if (2 < (byte)LogPlayerManagement._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// MouseEnter @ 147c6f940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::MouseEnter
          (UGameViewportClient *this,FViewport *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ICursor *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  UClass *this_00;
  FSlateApplication *this_01;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_b8 [4];
  int local_b4;
  TReferenceControllerBase<1> *local_b0;
  undefined1 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  uVar12 = 0;
  uVar10 = 0;
  if (param_1 != (FViewport *)0x0) {
    this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((((((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 4) != 0) &&
         (puVar1 = &(this->EngineShowFlags).field_0x10, uVar3 = *(undefined8 *)puVar1,
         ZPULL(uVar3,0,1) != 0 ||
         ((this->EngineShowFlags).Wireframe != 0 ||
         ((this->EngineShowFlags).Materials != 0 ||
         ((this->EngineShowFlags).StaticMeshes != 0 ||
         ((this->EngineShowFlags).Landscape != 0 ||
         ((this->EngineShowFlags).LightRadius != 0 ||
         ((this->EngineShowFlags).Fog != 0 ||
         ((this->EngineShowFlags).Volumes != 0 ||
         ((this->EngineShowFlags).Game != 0 ||
         ((this->EngineShowFlags).ActorColoration != 0 ||
         ((this->EngineShowFlags).BSP != 0 ||
         ((this->EngineShowFlags).Collision != 0 ||
         ((this->EngineShowFlags).CollisionVisibility != 0 ||
         ((this->EngineShowFlags).CollisionPawn != 0 ||
         ((this->EngineShowFlags).LightShafts != 0 ||
         ((this->EngineShowFlags).PostProcessMaterial != 0 ||
         ((this->EngineShowFlags).Atmosphere != 0 ||
         ((this->EngineShowFlags).Cloud != 0 ||
         ((this->EngineShowFlags).CameraAspectRatioBars != 0 ||
         ((this->EngineShowFlags).CameraSafeFrames != 0 ||
         ((this->EngineShowFlags).TextRender != 0 ||
         ((this->EngineShowFlags).Rendering != 0 ||
         ((this->EngineShowFlags).HighResScreenshotMask != 0 ||
         ((this->EngineShowFlags).HMDDistortion != 0 ||
         ((this->EngineShowFlags).StereoRendering != 0 ||
         ((this->EngineShowFlags).DistanceCulledPrimitives != 0 ||
         ((this->EngineShowFlags).VisualizeLightCulling != 0 ||
         ((this->EngineShowFlags).PrecomputedVisibility != 0 ||
         ((this->EngineShowFlags).SkyLighting != 0 ||
         ((this->EngineShowFlags).PreviewShadowsIndicator != 0 ||
         ((this->EngineShowFlags).PrecomputedVisibilityCells != 0 ||
         ((this->EngineShowFlags).VisualizeVolumetricLightmap != 0 ||
         ((this->EngineShowFlags).VolumeLightingSamples != 0 ||
         ((this->EngineShowFlags).Paper2DSprites != 0 ||
         ((this->EngineShowFlags).VisualizeDistanceFieldAO != 0 ||
         ((this->EngineShowFlags).VisualizeMeshDistanceFields != 0 ||
         ((this->EngineShowFlags).PhysicsField != 0 ||
         ((this->EngineShowFlags).VisualizeGlobalDistanceField != 0 ||
         ((this->EngineShowFlags).VisualizeLightingOnProbes != 0 ||
         ((this->EngineShowFlags).ScreenSpaceAO != 0 ||
         ((this->EngineShowFlags).DistanceFieldAO != 0 ||
         ((this->EngineShowFlags).LumenGlobalIllumination != 0 ||
         ((this->EngineShowFlags).VolumetricFog != 0 ||
         ((this->EngineShowFlags).VisualizeSSR != 0 ||
         ((this->EngineShowFlags).VisualizeShadingModels != 0 ||
         ((this->EngineShowFlags).VisualizeSenses != 0 ||
         ((this->EngineShowFlags).LODColoration != 0 ||
         ((this->EngineShowFlags).HLODColoration != 0 ||
         ((this->EngineShowFlags).QuadOverdraw != 0 ||
         ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0 ||
         ((this->EngineShowFlags).PrimitiveDistanceAccuracy != 0 ||
         ((this->EngineShowFlags).MeshUVDensityAccuracy != 0 ||
         ((this->EngineShowFlags).MaterialTextureScaleAccuracy != 0 ||
         ((this->EngineShowFlags).OutputMaterialTextureScales != 0 ||
         ((this->EngineShowFlags).RequiredTextureResolution != 0 ||
         ((this->EngineShowFlags).VisualizeVirtualTexture != 0 ||
         ((this->EngineShowFlags).WidgetComponents != 0 ||
         ((this->EngineShowFlags).Bones != 0 ||
         ((this->EngineShowFlags).ServerDrawDebug != 0 ||
         ((this->EngineShowFlags).MediaPlanes != 0 ||
         ((this->EngineShowFlags).VREditing != 0 ||
         ((this->EngineShowFlags).OcclusionMeshes != 0 ||
         ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries != 0 ||
         (this->EngineShowFlags).DisableOcclusionQueries != 0)))))))))))))))))))))))))))))))))))))))
         ))))))))))))))))))))))))) && (*(FName *)(uVar3 + 0xc4) == NAME_SceneViewport)) &&
       (uVar3 - 8 != 0)) {
      uVar8 = uVar12;
      if (*(FName *)(uVar3 + 0xc4) == NAME_SceneViewport) {
        uVar8 = uVar3 - 8;
      }
      if (*(char *)(uVar8 + 0x2b0) == '\0') {
        this_01 = FSlateApplication::Get();
        FSlateApplication::SetGameIsFakingTouchEvents(this_01,true,(TVector2<double> *)0x0);
      }
    }
  }
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar4 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  local_b0 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
             ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar4 != (ICursor *)0x0) {
    uStack_9c = 1;
    puVar1 = &(this->HardwareCursorCache).field_0x20;
    puVar2 = &(this->HardwareCursorCache).field_0x30;
    local_88 = 0;
    uVar14 = *(uint *)&(this->HardwareCursorCache).field_0x48;
    uStack_8c = uVar10;
    if (uVar14 != 0) {
      puVar16 = *(uint **)&(this->HardwareCursorCache).field_0x40;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar2;
      }
      uVar13 = *puVar16;
      uVar8 = uVar12;
      local_88 = 0;
      uVar10 = 0;
      while (uVar13 == 0) {
        iVar11 = (int)uVar12;
        local_88 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)local_88;
        uVar10 = iVar11 + 1;
        uVar12 = (ulonglong)uVar10;
        uStack_8c = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_147c6facd;
        uVar13 = puVar16[(longlong)iVar11 + 1];
      }
      uStack_9c = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_9c * 2 + 1;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_b4 = (int)lVar9;
      uStack_8c = (local_88 - 1) + local_b4;
      if ((int)uVar14 < (int)uStack_8c) {
        uStack_8c = uVar14;
      }
    }
LAB_147c6facd:
    uVar14 = *(uint *)&(this->HardwareCursorCache).field_0x48;
    uStack_84 = local_2c;
    iStack_80 = *(int *)&(this->HardwareCursorCache).field_0x28 -
                *(int *)&(this->HardwareCursors).field_0x4;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uStack_9c,uVar10);
    uStack_90 = 0xffffffff;
    TStack_70.CurrentBitIndex = uStack_8c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar14 >> 5;
    TStack_70._28_4_ = local_2c;
    TStack_70.BaseBitIndex = local_88;
    uStack_50 = CONCAT44(uStack_7c,iStack_80);
    local_a8 = puVar1;
    uStack_a0 = uVar10;
    local_98 = puVar2;
    local_78 = (longlong *)puVar1;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if (((int)uVar14 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = *(uint *)&(this->HardwareCursorCache).field_0x48;
    if (uVar14 != uVar10) {
      puVar15 = *(undefined1 **)&(this->HardwareCursorCache).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar9 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147c6fbd0;
        uVar14 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar14 = (int)lVar9 + -1 + uVar13;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_147c6fbd0:
    while( true ) {
      plVar6 = local_78;
      if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      if (((TStack_70.CurrentBitIndex == uVar14) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (plVar6 == (longlong *)puVar1)) break;
      lVar9 = *plVar6;
      (**(code **)((longlong)*pIVar4 + 0x58))
                (pIVar4,*(undefined4 *)(lVar9 + (longlong)TStack_70.CurrentBitIndex * 0x18),
                 *(undefined8 *)(lVar9 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  (this->OnInputAxisEvent).field_0x5 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  return;
}

// MouseLeave @ 147c6fc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::MouseLeave(UGameViewportClient *this,FViewport *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  SWidget *pSVar5;
  bool bVar6;
  atomic<int> aVar7;
  UClass *this_00;
  FSlateApplication *pFVar8;
  SWidget *this_01;
  SWidget *pSVar9;
  int local_res8;
  int local_resc;
  TVector2<double>_u_0 local_28;
  
  if (param_1 != (FViewport *)0x0) {
    this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if (((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 4) != 0) {
      pFVar8 = FSlateApplication::Get();
      bVar6 = FSlateApplication::IsDragDropping(pFVar8);
      if (!bVar6) {
        (**(code **)(param_1->_padding_ + 0x110))(param_1,&local_res8,0);
        puVar2 = &(this->EngineShowFlags).field_0x10;
        uVar4 = *(undefined8 *)puVar2;
        if (((ZPULL(uVar4,0,1) == 0 &&
              ((this->EngineShowFlags).Wireframe == 0 &&
              ((this->EngineShowFlags).Materials == 0 &&
              ((this->EngineShowFlags).StaticMeshes == 0 &&
              ((this->EngineShowFlags).Landscape == 0 &&
              ((this->EngineShowFlags).LightRadius == 0 &&
              ((this->EngineShowFlags).Fog == 0 &&
              ((this->EngineShowFlags).Volumes == 0 &&
              ((this->EngineShowFlags).Game == 0 &&
              ((this->EngineShowFlags).ActorColoration == 0 &&
              ((this->EngineShowFlags).BSP == 0 &&
              ((this->EngineShowFlags).Collision == 0 &&
              ((this->EngineShowFlags).CollisionVisibility == 0 &&
              ((this->EngineShowFlags).CollisionPawn == 0 &&
              ((this->EngineShowFlags).LightShafts == 0 &&
              ((this->EngineShowFlags).PostProcessMaterial == 0 &&
              ((this->EngineShowFlags).Atmosphere == 0 &&
              ((this->EngineShowFlags).Cloud == 0 &&
              ((this->EngineShowFlags).CameraAspectRatioBars == 0 &&
              ((this->EngineShowFlags).CameraSafeFrames == 0 &&
              ((this->EngineShowFlags).TextRender == 0 &&
              ((this->EngineShowFlags).Rendering == 0 &&
              ((this->EngineShowFlags).HighResScreenshotMask == 0 &&
              ((this->EngineShowFlags).HMDDistortion == 0 &&
              ((this->EngineShowFlags).StereoRendering == 0 &&
              ((this->EngineShowFlags).DistanceCulledPrimitives == 0 &&
              ((this->EngineShowFlags).VisualizeLightCulling == 0 &&
              ((this->EngineShowFlags).PrecomputedVisibility == 0 &&
              ((this->EngineShowFlags).SkyLighting == 0 &&
              ((this->EngineShowFlags).PreviewShadowsIndicator == 0 &&
              ((this->EngineShowFlags).PrecomputedVisibilityCells == 0 &&
              ((this->EngineShowFlags).VisualizeVolumetricLightmap == 0 &&
              ((this->EngineShowFlags).VolumeLightingSamples == 0 &&
              ((this->EngineShowFlags).Paper2DSprites == 0 &&
              ((this->EngineShowFlags).VisualizeDistanceFieldAO == 0 &&
              ((this->EngineShowFlags).VisualizeMeshDistanceFields == 0 &&
              ((this->EngineShowFlags).PhysicsField == 0 &&
              ((this->EngineShowFlags).VisualizeGlobalDistanceField == 0 &&
              ((this->EngineShowFlags).VisualizeLightingOnProbes == 0 &&
              ((this->EngineShowFlags).ScreenSpaceAO == 0 &&
              ((this->EngineShowFlags).DistanceFieldAO == 0 &&
              ((this->EngineShowFlags).LumenGlobalIllumination == 0 &&
              ((this->EngineShowFlags).VolumetricFog == 0 &&
              ((this->EngineShowFlags).VisualizeSSR == 0 &&
              ((this->EngineShowFlags).VisualizeShadingModels == 0 &&
              ((this->EngineShowFlags).VisualizeSenses == 0 &&
              ((this->EngineShowFlags).LODColoration == 0 &&
              ((this->EngineShowFlags).HLODColoration == 0 &&
              ((this->EngineShowFlags).QuadOverdraw == 0 &&
              ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw == 0 &&
              ((this->EngineShowFlags).PrimitiveDistanceAccuracy == 0 &&
              ((this->EngineShowFlags).MeshUVDensityAccuracy == 0 &&
              ((this->EngineShowFlags).MaterialTextureScaleAccuracy == 0 &&
              ((this->EngineShowFlags).OutputMaterialTextureScales == 0 &&
              ((this->EngineShowFlags).RequiredTextureResolution == 0 &&
              ((this->EngineShowFlags).VisualizeVirtualTexture == 0 &&
              ((this->EngineShowFlags).WidgetComponents == 0 &&
              ((this->EngineShowFlags).Bones == 0 &&
              ((this->EngineShowFlags).ServerDrawDebug == 0 &&
              ((this->EngineShowFlags).MediaPlanes == 0 &&
              ((this->EngineShowFlags).VREditing == 0 &&
              ((this->EngineShowFlags).OcclusionMeshes == 0 &&
              ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries == 0 &&
              (this->EngineShowFlags).DisableOcclusionQueries == 0))))))))))))))))))))))))))))))))))
              ))))))))))))))))))))))))))))) || (*(FName *)(uVar4 + 0xc4) != NAME_SceneViewport)) ||
           ((this->EngineShowFlags).ShadowFrustums == 0 &&
            ((this->EngineShowFlags).Wireframe == 0 &&
            ((this->EngineShowFlags).Materials == 0 &&
            ((this->EngineShowFlags).StaticMeshes == 1 &&
            ((this->EngineShowFlags).Landscape == 0 &&
            ((this->EngineShowFlags).LightRadius == 0 &&
            ((this->EngineShowFlags).Fog == 0 &&
            ((this->EngineShowFlags).Volumes == 0 &&
            ((this->EngineShowFlags).Game == 0 &&
            ((this->EngineShowFlags).ActorColoration == 0 &&
            ((this->EngineShowFlags).BSP == 0 &&
            ((this->EngineShowFlags).Collision == 0 &&
            ((this->EngineShowFlags).CollisionVisibility == 0 &&
            ((this->EngineShowFlags).CollisionPawn == 0 &&
            ((this->EngineShowFlags).LightShafts == 0 &&
            ((this->EngineShowFlags).PostProcessMaterial == 0 &&
            ((this->EngineShowFlags).Atmosphere == 0 &&
            ((this->EngineShowFlags).Cloud == 0 &&
            ((this->EngineShowFlags).CameraAspectRatioBars == 0 &&
            ((this->EngineShowFlags).CameraSafeFrames == 0 &&
            ((this->EngineShowFlags).TextRender == 0 &&
            ((this->EngineShowFlags).Rendering == 0 &&
            ((this->EngineShowFlags).HighResScreenshotMask == 0 &&
            ((this->EngineShowFlags).HMDDistortion == 0 &&
            ((this->EngineShowFlags).StereoRendering == 0 &&
            ((this->EngineShowFlags).DistanceCulledPrimitives == 0 &&
            ((this->EngineShowFlags).VisualizeLightCulling == 0 &&
            ((this->EngineShowFlags).PrecomputedVisibility == 0 &&
            ((this->EngineShowFlags).SkyLighting == 0 &&
            ((this->EngineShowFlags).PreviewShadowsIndicator == 0 &&
            ((this->EngineShowFlags).PrecomputedVisibilityCells == 0 &&
            ((this->EngineShowFlags).VisualizeVolumetricLightmap == 0 &&
            ((this->EngineShowFlags).VolumeLightingSamples == 0 &&
            ((this->EngineShowFlags).Paper2DSprites == 0 &&
            ((this->EngineShowFlags).VisualizeDistanceFieldAO == 0 &&
            ((this->EngineShowFlags).VisualizeMeshDistanceFields == 0 &&
            ((this->EngineShowFlags).PhysicsField == 0 &&
            ((this->EngineShowFlags).VisualizeGlobalDistanceField == 0 &&
            ((this->EngineShowFlags).VisualizeLightingOnProbes == 0 &&
            ((this->EngineShowFlags).ScreenSpaceAO == 0 &&
            ((this->EngineShowFlags).DistanceFieldAO == 0 &&
            ((this->EngineShowFlags).LumenGlobalIllumination == 0 &&
            ((this->EngineShowFlags).VolumetricFog == 0 &&
            ((this->EngineShowFlags).VisualizeSSR == 0 &&
            ((this->EngineShowFlags).VisualizeShadingModels == 0 &&
            ((this->EngineShowFlags).VisualizeSenses == 0 &&
            ((this->EngineShowFlags).LODColoration == 0 &&
            ((this->EngineShowFlags).HLODColoration == 0 &&
            ((this->EngineShowFlags).QuadOverdraw == 0 &&
            ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw == 0 &&
            ((this->EngineShowFlags).PrimitiveDistanceAccuracy == 0 &&
            ((this->EngineShowFlags).MeshUVDensityAccuracy == 0 &&
            ((this->EngineShowFlags).MaterialTextureScaleAccuracy == 0 &&
            ((this->EngineShowFlags).OutputMaterialTextureScales == 0 &&
            ((this->EngineShowFlags).RequiredTextureResolution == 0 &&
            ((this->EngineShowFlags).VisualizeVirtualTexture == 0 &&
            ((this->EngineShowFlags).WidgetComponents == 0 &&
            ((this->EngineShowFlags).Bones == 0 &&
            ((this->EngineShowFlags).ServerDrawDebug == 0 &&
            ((this->EngineShowFlags).MediaPlanes == 0 &&
            ((this->EngineShowFlags).VREditing == 0 &&
            ((this->EngineShowFlags).OcclusionMeshes == 0 &&
            ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries == 0 &&
            (this->EngineShowFlags).DisableOcclusionQueries == 0))))))))))))))))))))))))))))))))))))
            )))))))))))))))))))))))))))) {
          pSVar9 = (SWidget *)0x0;
        }
        else {
          this_01 = *(SWidget **)(uVar4 + 0x250);
          pSVar5 = *(SWidget **)(uVar4 + 600);
          pSVar9 = pSVar5;
          if (pSVar5 == (SWidget *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            this_01 = (SWidget *)0x0;
          }
          else {
            LOCK();
            ((atomic<int> *)&pSVar5->_padding_)[1] =
                 (atomic<int>)((int)((atomic<int> *)&pSVar5->_padding_)[1] + 1);
            UNLOCK();
            aVar3 = *(atomic<int> *)&pSVar5->_padding_;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                this_01 = (SWidget *)0x0;
                pSVar9 = this_01;
                break;
              }
              LOCK();
              aVar7 = *(atomic<int> *)&pSVar5->_padding_;
              bVar6 = aVar3 == aVar7;
              if (bVar6) {
                *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
                aVar7 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar7;
            } while (!bVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            LOCK();
            paVar1 = (atomic<int> *)&pSVar5->_padding_ + 1;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pSVar5->_padding_ + 8))(pSVar5);
            }
          }
          if ((this_01 != (SWidget *)0x0) &&
             (bVar6 = SWidget::HasFocusedDescendants(this_01), !bVar6)) {
            local_28._s_0.X = (double)local_res8;
            local_28._s_0.Y = (double)local_resc;
            pFVar8 = FSlateApplication::Get();
            FSlateApplication::SetGameIsFakingTouchEvents
                      (pFVar8,false,(TVector2<double> *)&local_28._s_0);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar9);
      }
    }
  }
  return;
}

// NotifyPlayerAdded @ 147c6ff50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::NotifyPlayerAdded(UGameViewportClient *this,int param_1,ULocalPlayer *param_2)

{
  IGameLayerManager *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateApplication *this_00;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  (**(code **)(this->_padding_ + 0x360))();
  this_00 = FSlateApplication::Get();
  FSlateApplication::SetUserFocusToGameViewport(this_00,param_1,SetDirectly);
  pTVar4 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c6ffb0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pIVar1 = (this->GameLayerManagerPtr).Object;
    if (pIVar1 != (IGameLayerManager *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1,param_2);
    }
  }
LAB_147c6ffb0:
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PlayerAddedDelegate,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// NotifyPlayerRemoved @ 147c70000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::NotifyPlayerRemoved
          (UGameViewportClient *this,int param_1,ULocalPlayer *param_2)

{
  IGameLayerManager *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  (**(code **)(this->_padding_ + 0x360))();
  pTVar4 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c70050;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pIVar1 = (this->GameLayerManagerPtr).Object;
    if (pIVar1 != (IGameLayerManager *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,param_2);
    }
  }
LAB_147c70050:
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PlayerRemovedDelegate,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnQueryPopupMethod @ 147c70420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPopupMethodReply * __thiscall
UGameViewportClient::OnQueryPopupMethod
          (UGameViewportClient *this,FPopupMethodReply *__return_storage_ptr__)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = UseCurrentWindow;
  __return_storage_ptr__->ShouldThrottle = No;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// PeekNetworkFailureMessages @ 147c70c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::PeekNetworkFailureMessages
          (UGameViewportClient *this,UWorld *param_1,UNetDriver *param_2,Type param_3,
          FString *param_4)

{
  LARGE_INTEGER local_18 [2];
  
  local_18[0].s.LowPart = 0;
  QueryPerformanceCounter(local_18);
  if ((double)GEngine->NetErrorLogInterval <
      ((double)CONCAT44(local_18[0].s.HighPart,local_18[0].s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - LastTimePrinted) {
    if (2 < (byte)LogNet._0_1_) {
      switch(param_3) {
      case NetDriverAlreadyExists:
        break;
      case NetDriverCreateFailure:
        break;
      case NetDriverListenFailure:
        break;
      case ConnectionLost:
        break;
      case ConnectionTimeout:
        break;
      case FailureReceived:
        break;
      case OutdatedClient:
        break;
      case OutdatedServer:
        break;
      case PendingConnectionFailure:
        break;
      case NetGuidMismatch:
        break;
      case NetChecksumMismatch:
      }
      if (param_2 != (UNetDriver *)0x0) {
        ::FName::ToString(&param_2->NetDriverName,(FString *)&local_18[0].s);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((param_2 != (UNetDriver *)0x0) &&
         ((void *)CONCAT44(local_18[0].s.HighPart,local_18[0].s.LowPart) != (void *)0x0)) {
        FMemory::Free((void *)CONCAT44(local_18[0].s.HighPart,local_18[0].s.LowPart));
      }
    }
    QueryPerformanceCounter(local_18);
    LastTimePrinted =
         (double)CONCAT44(local_18[0].s.HighPart,local_18[0].s.LowPart) *
         FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  }
  return;
}

// PeekTravelFailureMessages @ 147c70e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::PeekTravelFailureMessages
          (UGameViewportClient *this,UWorld *param_1,Type param_2,FString *param_3)

{
  if ((byte)LogNet._0_1_ < 3) {
    return;
  }
  switch(param_2) {
  case NoLevel:
    break;
  case LoadMapFailure:
    break;
  case InvalidURL:
    break;
  case PackageMissing:
    break;
  case PackageVersion:
    break;
  case NoDownload:
    break;
  case TravelFailure:
    break;
  case CheatCommands:
    break;
  case PendingNetGameCreateFailure:
    break;
  case CloudSaveFailure:
    break;
  case ServerTravelFailure:
    break;
  case ClientTravelFailure:
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  return;
}

// PostInitProperties @ 147c72000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::PostInitProperties(UGameViewportClient *this)

{
  undefined1 auStack_78 [32];
  FEngineShowFlags local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  UObject::PostInitProperties((UObject *)this);
  local_58.CustomShowFlags.MaxBits = 0x80;
  local_58.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.CustomShowFlags.NumBits = 0;
  local_58._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._8_8_ = _UNK_15060db28;
  local_58._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&local_58,ESFIM_Game);
  local_58.Pivot = 0;
  local_58.LightInfluences = 0;
  local_58.HitProxies = 0;
  local_58.Bounds = 0;
  local_58.ModeWidgets = 0;
  local_58.EditingLevelInstance = 0;
  local_58.Selection = 0;
  local_58.Splines = 0;
  local_58.Cover = 0;
  local_58.MeshEdges = 0;
  local_58.Snap = 0;
  local_58.Grid = 0;
  local_58.LargeVertices = 0;
  local_58.Editor = 0;
  local_58.Brushes = 0;
  local_58.BSPSplit = 0;
  local_58.AudioRadius = 0;
  local_58.CameraFrustums = 0;
  local_58.MassProperties = 0;
  local_58.Constraints = 0;
  local_58.StreamingBounds = 0;
  local_58.LightMapDensity = 0;
  local_58.StationaryLightOverlap = 0;
  local_58.ShaderComplexity = 0;
  local_58.LightComplexity = 0;
  local_58.VisualizeInstanceUpdates = 0;
  local_58.HISMCClusterTree = 0;
  local_58.HISMCOcclusionBounds = 0;
  local_58.Navigation = 0;
  local_58.DebugAI = 0;
  local_58.VisualizeSSS = 0;
  local_58.SelectionOutline = 0;
  local_58.DisableOcclusionQueries = 0;
  local_58.VisualizeInstanceOcclusionQueries = 0;
  local_58.OcclusionMeshes = 0;
  local_58.VREditing = 0;
  local_58.ServerDrawDebug = 0;
  local_58.Bones = 0;
  local_58.VisualizeVirtualTexture = 0;
  local_58.RequiredTextureResolution = 0;
  local_58.OutputMaterialTextureScales = 0;
  local_58.MaterialTextureScaleAccuracy = 0;
  local_58.MeshUVDensityAccuracy = 0;
  local_58.PrimitiveDistanceAccuracy = 0;
  local_58.ShaderComplexityWithQuadOverdraw = 0;
  local_58.QuadOverdraw = 0;
  local_58.HLODColoration = 0;
  local_58.LODColoration = 0;
  local_58.VisualizeShadingModels = 0;
  local_58.VisualizeSSR = 0;
  local_58.VisualizeLightingOnProbes = 0;
  local_58.VisualizeGlobalDistanceField = 0;
  local_58.PhysicsField = 0;
  local_58.VisualizeMeshDistanceFields = 0;
  local_58.VisualizeDistanceFieldAO = 0;
  local_58.VolumeLightingSamples = 0;
  local_58.VisualizeVolumetricLightmap = 0;
  local_58.PrecomputedVisibilityCells = 0;
  local_58.VisualizeLightCulling = 0;
  local_58.DistanceCulledPrimitives = 0;
  local_58.StereoRendering = 0;
  local_58.HMDDistortion = 0;
  local_58.HighResScreenshotMask = 0;
  local_58.CameraSafeFrames = 0;
  local_58.CameraAspectRatioBars = 0;
  local_58.CollisionPawn = 0;
  local_58.CollisionVisibility = 0;
  local_58.Collision = 0;
  local_58.ActorColoration = 0;
  local_58.Game = 1;
  local_58.Volumes = 0;
  local_58.LightRadius = 0;
  local_58.Wireframe = 0;
  local_58.ShadowFrustums = 0;
  local_58.VisualizeOutOfBoundsPixels = 0;
  local_58.VisualizeTSR = 0;
  local_58.VisualizeTemporalUpscaler = 0;
  local_58.VisualizeReprojection = 0;
  local_58.VisualizeMotionVectors = 0;
  local_58.VisualizeMotionBlur = 0;
  local_58.ScreenPercentage = 1;
  local_58.PhysicalMaterialMasks = 0;
  local_58.VertexColors = 0;
  local_58.VisualizeDOF = 0;
  local_58.TestImage = 0;
  local_58.OpaqueCompositeEditorPrimitives = 0;
  local_58.CompositeEditorPrimitives = 0;
  local_58.CompositeDebugPrimitives = 1;
  local_58.MotionBlur = 1;
  local_58.GBufferHints = 0;
  local_58.VectorFields = 0;
  local_58.VisualizeVirtualShadowMap = 0;
  local_58.VisualizeGroom = 0;
  local_58.VisualizeSubstrate = 0;
  local_58.VisualizeLumen = 0;
  local_58.VisualizeNanite = 0;
  local_58.VisualizeBuffer = 0;
  local_58.MaterialAmbientOcclusion = 1;
  local_58.MaterialNormal = 1;
  local_58.ReflectionOverride = 0;
  local_58.LightingOnlyOverride = 0;
  local_58.OverrideDiffuseAndSpecular = 0;
  local_58.VisualizeLocalExposure = 0;
  local_58.VisualizeLocalFogVolumes = 0;
  local_58.VisualizeSkyLightIlluminance = 0;
  local_58.VisualizeHDR = 0;
  local_58.RandomColor = 0;
  local_58.FrontBackFace = 0;
  local_58.Zebra = 0;
  local_58.Clay = 0;
  local_58.StereoMotionVectors = 0;
  local_58.AlphaInvert = 0;
  local_58.SceneCaptureCopySceneDepth = 1;
  local_58.VisualizeShadowCasters = 0;
  local_58.VisualizeLWCComplexity = 0;
  local_58.VisualizeGPUSkinCache = 0;
  local_58.LumenShortRangeAmbientOcclusion = 1;
  local_58.LumenSecondaryBounces = 1;
  local_58.LumenFarFieldTraces = 1;
  local_58.LumenGlobalTraces = 1;
  local_58.LumenDetailTraces = 1;
  local_58.LumenScreenTraces = 1;
  local_58.DebugDrawDistantVirtualSMLights = 0;
  local_58.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_58.VisualizeVolumetricCloudConservativeDensity = 0;
  local_58.VirtualTexturePrimitives = 0;
  local_58.VisualizePostProcessStack = 0;
  local_58.VisualizeCalibrationCustom = 0;
  local_58.VisualizeCalibrationGrayscale = 0;
  local_58.VisualizeCalibrationColor = 0;
  local_58.VisualizeLightFunctionAtlas = 0;
  local_58.VisualizeSkyAtmosphere = 0;
  local_58.RayTracingDebug = 0;
  local_58.PathTracing = 0;
  FEngineShowFlags::operator=(&this->EngineShowFlags,&local_58);
  if (local_58.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_58.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  return;
}

// PostRender @ 147c725b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::PostRender(UGameViewportClient *this,UCanvas *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c725b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))();
  return;
}

// Precache @ 147c72e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameViewportClient::Precache(UGameViewportClient *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  LARGE_INTEGER local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<USoundWave> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = FAudioDeviceHandle::IsValid((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
  if (bVar3) {
    if (4 < (byte)LogPlayerManagement._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = Z_Construct_UClass_USoundWave_NoRegister();
    uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
    GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USoundWave>::Advance(&local_28);
      uVar7 = (ulonglong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar5 == 0) {
        uVar8 = uVar7;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(undefined8 *)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      bVar3 = FAudioDeviceHandle::IsValid((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar8 = uVar8 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)&this->MaxSplitscreenPlayers + 0x60))
                (*(longlong **)&this->MaxSplitscreenPlayers,uVar1,0,1,uVar8);
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
    if (4 < (byte)LogPlayerManagement._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
  }
  if (bIsFirstCallOfFunction != false) {
    if (4 < (byte)LogPlayerManagement._0_1_) {
      QueryPerformanceCounter(&local_res8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    }
    bIsFirstCallOfFunction = false;
  }
  return;
}

// ProcessScreenShots @ 147c76860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::ProcessScreenShots(UGameViewportClient *this,FViewport *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  EDisplayOutputFormat EVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  FSlateApplication *this_00;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  longlong *plVar25;
  FReadSurfaceDataFlags *pFVar26;
  int iVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  SWidget *pSVar30;
  bool bVar31;
  int iVar32;
  TIntVector3<int>_u_0 local_1e8;
  uint local_1d8 [2];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_1d0;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1be [2];
  uint local_1bc;
  ForAnyElementType local_1b8;
  int local_1b0 [3];
  int local_1a4 [3];
  undefined1 local_198 [16];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_188;
  int local_178;
  FReadSurfaceDataFlags local_170;
  ForElementType<unsigned_int> local_150;
  FReadSurfaceDataFlags local_148;
  FReadSurfaceDataFlags local_12c;
  TSharedRef<SWidget,1> local_110;
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint *local_d8 [2];
  TIntVector3<int>_u_0 local_c8;
  TIntVector3<int>_u_0 local_b8;
  undefined8 *local_a8;
  TIntVector3<int>_u_0 *local_a0;
  int *local_98;
  uint *local_90;
  int *local_88;
  FDestructionSentinel local_80;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  FReadAccessScope local_58;
  
  if (((GIsDumpingMovie == 0) && (!FScreenshotRequest::bIsScreenshotRequested)) &&
     (!GIsHighResScreenshot)) {
    return false;
  }
  local_150 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  bVar7 = false;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  pSVar30 = (SWidget *)0x0;
  if (local_150 != (ForElementType<unsigned_int>)0x0) {
    iVar13 = *(int *)((longlong)local_150 + 8);
    do {
      if (iVar13 == 0) {
        local_150 = (ForElementType<unsigned_int>)0x0;
        pSVar30 = (SWidget *)0x0;
        goto LAB_147c768fa;
      }
      LOCK();
      iVar11 = *(int *)((longlong)local_150 + 8);
      bVar31 = iVar13 == iVar11;
      if (bVar31) {
        *(int *)((longlong)local_150 + 8) = iVar13 + 1;
        iVar11 = iVar13;
      }
      UNLOCK();
      iVar13 = iVar11;
    } while (!bVar31);
    pSVar30 = *(SWidget **)
               ((this->EngineShowFlags).CustomShowFlags.AllocatorInstance.InlineData + 8);
  }
LAB_147c768fa:
  FVar28 = local_150;
  if (((GIsDumpingMovie == 0) && (FScreenshotRequest::bShowUI != false)) &&
     (bVar7 = false, pSVar30 != (SWidget *)0x0)) {
    bVar7 = true;
  }
  bVar9 = false;
  lVar16 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1,local_68);
  uVar23 = *(uint *)(lVar16 + 4);
  puVar17 = (uint *)(**(code **)(param_1->_padding_ + 0x1e0))(param_1,local_60);
  local_1e8._s_0.X = *puVar17;
  local_1e8._s_0.Z = 0;
  local_1e8._s_0.Y = uVar23;
  EVar12 = (**(code **)(param_1->_padding_ + 0x40))(param_1);
  bVar31 = (bool)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  iVar13 = FScreenshotRequest::ViewRect.field0_0x0._8_4_;
  iVar11 = FScreenshotRequest::ViewRect.field0_0x0._12_4_;
  iVar27 = FScreenshotRequest::ViewRect.field0_0x0._0_4_;
  iVar32 = FScreenshotRequest::ViewRect.field0_0x0._4_4_;
  if ((bVar7) && (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    if ((iVar13 != iVar27) || (iVar11 != iVar32)) {
      local_1c0 = 0;
      `UGameViewportClient::ProcessScreenShots'::__l11::<lambda_1>::operator()(&local_1c0);
    }
    if ((pSVar30 == (SWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (FVar28 != (ForElementType<unsigned_int>)0x0) {
      LOCK();
      *(int *)((longlong)FVar28 + 8) = *(int *)((longlong)FVar28 + 8) + 1;
      UNLOCK();
    }
    if ((pSVar30 == (SWidget *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (FVar28 != (ForElementType<unsigned_int>)0x0) {
      LOCK();
      *(int *)((longlong)FVar28 + 8) = *(int *)((longlong)FVar28 + 8) + 1;
      UNLOCK();
    }
    local_110.Object = pSVar30;
    local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar28);
    this_00 = FSlateApplication::Get();
    if (bVar31 == false) {
      bVar9 = FSlateApplication::TakeScreenshot
                        (this_00,&local_110,&local_1d0,(TIntVector3<int> *)&local_1e8._s_0);
    }
    else {
      bVar9 = FSlateApplication::TakeHDRScreenshot
                        (this_00,&local_110,&local_188,(TIntVector3<int> *)&local_1e8._s_0);
      ConvertPixelDataToSCRGB(&local_188,EVar12);
    }
    bVar7 = true;
    GScreenshotResolutionX = local_1e8._s_0.X;
    GScreenshotResolutionY = local_1e8._s_0.Y;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
  }
  else {
    local_198._0_8_ = FScreenshotRequest::ViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_198._8_8_ = FScreenshotRequest::ViewRect.field0_0x0._8_8_;
    if ((iVar13 == iVar27) && (iVar11 == iVar32)) {
      local_f8 = 0;
      uStack_f0 = local_1e8._s_0.X;
      uStack_ec = local_1e8._s_0.Y;
LAB_147c76b61:
      iVar32 = 0;
      local_198._0_8_ = (TIntPoint<int>_u_0)0x0;
      local_198._12_4_ = local_1e8._s_0.Y;
      local_198._8_4_ = local_1e8._s_0.X;
      iVar27 = 0;
    }
    else {
      if ((((iVar27 < 0) || (local_1e8._s_0.X < iVar13)) ||
          ((longlong)FScreenshotRequest::ViewRect.field0_0x0._s_0.Min.field0_0x0 < 0)) ||
         (local_1e8._s_0.Y < iVar11)) {
        local_a8 = (undefined8 *)local_198;
        local_a0 = &local_1e8;
        `UGameViewportClient::ProcessScreenShots'::__l25::<lambda_2>::operator()(&local_a8);
        local_e8 = 0;
        uStack_e0 = local_1e8._s_0.X;
        uStack_dc = local_1e8._s_0.Y;
        goto LAB_147c76b61;
      }
      local_1e8._s_0.Y = iVar11 - iVar32;
      local_1e8._s_0.X = iVar13 - iVar27;
    }
    if (((local_1e8._s_0.X != (int)local_198._8_8_ - iVar27) ||
        (local_1e8._s_0.Y != SUB84(local_198._8_8_,4) - iVar32)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FIntPoint(Size.X, Size.Y) == ViewRect.Size()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                           ,0x972,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (bVar31 == false) {
      plVar18 = (longlong *)(**(code **)(param_1->_padding_ + 0x20))();
      if (*plVar18 == 0) {
LAB_147c77269:
        local_12c.CubeFace = CubeFace_MAX;
        local_12c.CompressionMode = RCM_UNorm;
        pFVar26 = &local_12c;
        local_12c.bLinearToGamma = true;
        local_12c.MaxDepthRange = 16000.0;
        local_12c.bOutputStencil = false;
        local_12c.MipLevel = '\0';
        local_12c.ArrayIndex = 0;
        local_12c.GPUIndex = 0;
      }
      else {
        puVar19 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
        lVar16 = (**(code **)(*(longlong *)*puVar19 + 0x20))();
        pTVar4 = CVarScreenshotTextureArrayMode.Ref;
        if (*(char *)(lVar16 + 0x32) != '\x01') goto LAB_147c77269;
        local_170.CubeFace = CubeFace_MAX;
        local_170.CompressionMode = RCM_UNorm;
        local_170.bLinearToGamma = true;
        local_170.MaxDepthRange = 16000.0;
        local_170.bOutputStencil = false;
        local_170.MipLevel = '\0';
        local_170.ArrayIndex = 0;
        local_170.GPUIndex = 0;
        bVar7 = IsInParallelGameThread();
        lVar16 = 4;
        if (bVar7) {
LAB_147c76c75:
          lVar20 = 0;
        }
        else {
          bVar7 = IsInGameThread();
          lVar20 = 4;
          if (bVar7) goto LAB_147c76c75;
        }
        local_1bc = *(uint *)((longlong)pTVar4->ShadowedValue + lVar20);
        puVar19 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
        lVar20 = (**(code **)(*(longlong *)*puVar19 + 0x20))();
        local_1d8[0] = (uint)*(ushort *)(lVar20 + 0x2e);
        if (2 < local_1bc) {
          local_d8[0] = &local_1bc;
          `UGameViewportClient::ProcessScreenShots'::__l41::<lambda_3>::operator()(local_d8);
        }
        uVar23 = local_1d8[0];
        pTVar4 = CVarScreenshotTextureArrayIndex.Ref;
        if (local_1bc - 1 < 2) {
          uVar22 = 0;
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0[0] = 0;
          local_1b0[1] = 0;
          if ((int)local_1d8[0] < 1) {
            if ((int)local_1d8[0] < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1d8[0]);
            }
          }
          else {
            iVar13 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,local_1d8[0],&local_1b8,local_1b0,local_1b0 + 1);
            memset(local_1b8.Data + (longlong)iVar13 * 0x10,0,(longlong)(int)uVar23 << 4);
          }
          if (0 < (int)local_1d8[0]) {
            lVar16 = 0;
            do {
              local_170.ArrayIndex = uVar22;
              uVar23 = 0;
              if ((int)uVar22 < local_1b0[0]) {
                uVar23 = ~uVar22 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              bVar9 = GetViewportScreenShot
                                (param_1,(TArray<FColor,TSizedDefaultAllocator<32>_> *)
                                         (local_1b8.Data + (longlong)(int)uVar22 * 0x10),
                                 (TIntRect<int> *)local_198,&local_170);
              uVar6 = local_1d0._8_8_;
              if (!bVar9) goto LAB_147c7724a;
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < (int)local_1d8[0]);
            iVar13 = local_1d0.ArrayMax;
            local_178 = local_1e8._s_0.Y * local_1e8._s_0.X;
            local_1d0._8_8_ = (ulonglong)(uint)local_1d0.ArrayMax << 0x20;
            uVar23 = local_178 * local_1d8[0];
            if (((longlong)uVar6 < 0) && (iVar13 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_1d0.AllocatorInstance,0,&local_1d0.ArrayMax);
            }
            if (local_1d0.ArrayNum < (int)uVar23) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar23 - local_1d0.ArrayNum,&local_1d0.AllocatorInstance,
                         &local_1d0.ArrayNum,&local_1d0.ArrayMax);
            }
            else {
              if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
              }
              if ((int)uVar23 < local_1d0.ArrayNum) {
                uVar22 = local_1d0.ArrayNum - uVar23;
                if (((int)(uVar23 | uVar22) < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  uVar8 = (*pcVar3)();
                  return (bool)uVar8;
                }
                if (uVar22 != 0) {
                  iVar13 = (local_1d0.ArrayNum - uVar22) - uVar23;
                  if (iVar13 != 0) {
                    memmove(local_1d0.AllocatorInstance.Data + (longlong)(int)uVar23 * 4,
                            local_1d0.AllocatorInstance.Data + (longlong)(int)uVar23 * 4 +
                            (longlong)(int)uVar22 * 4,(longlong)iVar13 << 2);
                  }
                  iVar13 = local_1d0.ArrayNum - uVar22;
                  local_1d0.ArrayNum = iVar13;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,&local_1d0.AllocatorInstance,iVar13,&local_1d0.ArrayMax);
                }
              }
            }
            iVar13 = local_178;
            uVar22 = 0;
            if (local_1bc == 1) {
              if (0 < (int)uVar23) {
                do {
                  uVar15 = (uint)((longlong)
                                  ((ulonglong)
                                   (uint)((int)((longlong)(int)uVar22 / (longlong)local_1e8._s_0.X)
                                         >> 0x1f) << 0x20 |
                                  (longlong)(int)uVar22 / (longlong)local_1e8._s_0.X & 0xffffffffU)
                                 % (longlong)(int)local_1d8[0]);
                  uVar29 = ((int)uVar22 / (int)(local_1d8[0] * local_1e8._s_0.X)) * local_1e8._s_0.X
                           + (int)uVar22 % local_1e8._s_0.X;
                  uVar14 = 0;
                  if ((int)uVar15 < local_1b0[0]) {
                    uVar14 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  FVar24.Data = local_1b8.Data;
                  uVar14 = 0;
                  if ((int)uVar29 < *(int *)(local_1b8.Data + (longlong)(int)uVar15 * 0x10 + 8)) {
                    uVar14 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  uVar2 = *(undefined4 *)
                           (*(longlong *)&FVar24.Data[(longlong)(int)uVar15 * 0x10].field_0x0 +
                           (longlong)(int)uVar29 * 4);
                  uVar14 = 0;
                  if ((int)uVar22 < local_1d0.ArrayNum) {
                    uVar14 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)(local_1d0.AllocatorInstance.Data + lVar16 * 4) = uVar2;
                  lVar16 = lVar16 + 1;
                } while (lVar16 < (int)uVar23);
              }
              GScreenshotResolutionX = local_1e8._s_0.X * local_1d8[0];
              local_1e8._s_0.X = GScreenshotResolutionX;
            }
            else {
              if (0 < (int)uVar23) {
                do {
                  uVar15 = (int)uVar22 / iVar13;
                  uVar29 = (int)uVar22 % iVar13;
                  uVar14 = 0;
                  if ((int)uVar15 < local_1b0[0]) {
                    uVar14 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  FVar24.Data = local_1b8.Data;
                  uVar14 = 0;
                  if ((int)uVar29 < *(int *)(local_1b8.Data + (longlong)(int)uVar15 * 0x10 + 8)) {
                    uVar14 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  uVar2 = *(undefined4 *)
                           (*(longlong *)&FVar24.Data[(longlong)(int)uVar15 * 0x10].field_0x0 +
                           (longlong)(int)uVar29 * 4);
                  uVar14 = 0;
                  if ((int)uVar22 < local_1d0.ArrayNum) {
                    uVar14 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                  uVar22 = uVar22 + 1;
                  *(undefined4 *)(local_1d0.AllocatorInstance.Data + lVar16 * 4) = uVar2;
                  lVar16 = lVar16 + 1;
                  FVar28 = local_150;
                } while (lVar16 < (int)uVar23);
              }
              GScreenshotResolutionY = local_1e8._s_0.Y * local_1d8[0];
              local_1e8._s_0.Y = GScreenshotResolutionY;
            }
          }
LAB_147c7724a:
          DestructItems<TArray<FColor,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FColor,TSizedDefaultAllocator<32>_> *)local_1b8.Data,local_1b0[0]);
          if ((TArray<FColor,TSizedDefaultAllocator<32>_> *)local_1b8.Data !=
              (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_1b8.Data);
          }
          goto LAB_147c772a3;
        }
        bVar7 = IsInParallelGameThread();
        if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
          lVar16 = 0;
        }
        local_1a4[0] = *(int *)((longlong)pTVar4->ShadowedValue + lVar16);
        iVar13 = local_1d8[0] - 1;
        if (local_1a4[0] < (int)(local_1d8[0] - 1)) {
          iVar13 = local_1a4[0];
        }
        local_1b0[2] = 0;
        if (0 < iVar13) {
          local_1b0[2] = iVar13;
        }
        if (local_1a4[0] != local_1b0[2]) {
          local_98 = local_1a4;
          local_90 = local_1d8;
          local_88 = local_1b0 + 2;
          `UGameViewportClient::ProcessScreenShots'::__l66::<lambda_4>::operator()(&local_98);
          local_1a4[0] = local_1b0[2];
        }
        local_170.ArrayIndex = local_1a4[0];
        pFVar26 = &local_170;
      }
      bVar9 = GetViewportScreenShot(param_1,&local_1d0,(TIntRect<int> *)local_198,pFVar26);
    }
    else {
      local_148.CubeFace = CubeFace_MAX;
      local_148.CompressionMode = RCM_MinMax;
      local_148.bLinearToGamma = true;
      local_148.MaxDepthRange = 16000.0;
      local_148.bOutputStencil = false;
      local_148.MipLevel = '\0';
      local_148.ArrayIndex = 0;
      local_148.GPUIndex = 0;
      bVar9 = GetViewportScreenShotHDR(param_1,&local_188,(TIntRect<int> *)local_198,&local_148);
      ConvertPixelDataToSCRGB(&local_188,EVar12);
    }
LAB_147c772a3:
    bVar7 = false;
  }
  if (bVar9 != false) {
    if (local_1d0.ArrayNum < 1) {
      local_b8._0_8_ = CONCAT44(local_1e8._s_0.Y,local_1e8._s_0.X);
      local_b8._s_0.Z = local_1e8._s_0.Z;
      bVar7 = ProcessScreenshotData<FLinearColor,float>
                        (&local_188,(TIntVector3<int> *)&local_b8._s_0,__real_3f800000,bVar31,bVar7,
                         L".exr");
      goto LAB_147c774c7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ScreenshotCapturedDelegate
               ,&local_58);
    uVar2 = ScreenshotCapturedDelegate._16_4_;
    uVar21 = (ulonglong)(int)ScreenshotCapturedDelegate._16_4_;
    plVar25 = (longlong *)(uVar21 * 0x10 + ScreenshotCapturedDelegate._8_8_);
    plVar18 = (longlong *)ScreenshotCapturedDelegate._8_8_;
    while( true ) {
      if ((int)uVar21 != uVar2) {
        local_1bf = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1bf);
        uVar21 = (ulonglong)(uint)ScreenshotCapturedDelegate._16_4_;
      }
      if (plVar18 == plVar25) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        goto LAB_147c77539;
      }
      if (((int)plVar18[1] != 0) && (*plVar18 != 0)) break;
      plVar18 = plVar18 + 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pTVar4 = CVarScreenshotDelegate.Ref;
    bVar9 = IsInParallelGameThread();
    if ((!bVar9) &&
       ((bVar9 = IsInGameThread(), !bVar9 &&
        (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar9)))) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (pTVar4->ShadowedValue[0] == 0) {
LAB_147c77539:
      local_c8._0_8_ = CONCAT44(local_1e8._s_0.Y,local_1e8._s_0.X);
      local_c8._s_0.Z = local_1e8._s_0.Z;
      bVar7 = ProcessScreenshotData<FColor,int>
                        (&local_1d0,(TIntVector3<int> *)&local_c8._s_0,0xff,bVar31,bVar7,L".png");
      goto LAB_147c774c7;
    }
    iVar13 = local_1d0.ArrayNum;
    uVar21 = (ulonglong)local_1d0.ArrayNum;
    pFVar1 = local_1d0.AllocatorInstance.Data + uVar21 * 4;
    FVar24.Data = local_1d0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar13) {
        local_1be[0] = 0;
        `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1be)
        ;
      }
      uVar5 = local_1e8._s_0.Y;
      uVar2 = local_1e8._s_0.X;
      if (FVar24.Data == pFVar1) break;
      FVar24.Data[3] = (FScriptContainerElement)0xff;
      FVar24.Data = FVar24.Data + 4;
      uVar21 = local_1d0._8_8_ & 0xffffffff;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ScreenshotCapturedDelegate
               ,(FWriteAccessScope *)&local_80);
    bVar7 = false;
    ScreenshotCapturedDelegate._28_4_ = ScreenshotCapturedDelegate._28_4_ + 1;
    uVar23 = ScreenshotCapturedDelegate._16_4_ - 1;
    if (-1 < (int)uVar23) {
      lVar16 = (longlong)(int)uVar23 << 4;
      bVar7 = false;
      do {
        uVar22 = 0;
        if ((int)uVar23 < (int)ScreenshotCapturedDelegate._16_4_) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        if (((*(int *)(lVar16 + 8 + ScreenshotCapturedDelegate._8_8_) == 0) ||
            (plVar18 = *(longlong **)(lVar16 + ScreenshotCapturedDelegate._8_8_),
            plVar18 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar18 + 0x68))(plVar18,uVar2,uVar5,&local_1d0), cVar10 == '\0')
           ) {
          bVar7 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar23 = uVar23 - 1;
      } while (-1 < (int)uVar23);
    }
    ScreenshotCapturedDelegate._28_4_ = ScreenshotCapturedDelegate._28_4_ + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&ScreenshotCapturedDelegate,
                 false);
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
  }
  bVar7 = false;
LAB_147c774c7:
  FScreenshotRequest::Reset();
  FTraceScreenshot::Reset();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FScreenshotRequest::ScreenshotProcessedDelegate);
  GAreScreenMessagesEnabled = GScreenMessagesRestoreState;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar28);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  return bVar7;
}

// QueryShowFocus @ 147c78110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<bool> __thiscall
UGameViewportClient::QueryShowFocus(UGameViewportClient *this,EFocusCause param_1)

{
  ERenderFocusRule EVar1;
  undefined2 *puVar2;
  UClass *pUVar3;
  UUserInterfaceSettings *pUVar4;
  undefined7 in_register_00000011;
  char in_R8B;
  
  puVar2 = (undefined2 *)CONCAT71(in_register_00000011,param_1);
  pUVar3 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  pUVar4 = GetDefault<UUserInterfaceSettings>(pUVar3);
  EVar1 = pUVar4->RenderFocusRule;
  if (EVar1 != Never) {
    if (EVar1 == NonPointer) {
      if (in_R8B != '\0') {
LAB_147c7815f:
        *puVar2 = 0x101;
        return SUB82(puVar2,0);
      }
    }
    else if ((EVar1 != NavigationOnly) || (in_R8B == '\x01')) goto LAB_147c7815f;
  }
  *puVar2 = 0x100;
  return SUB82(puVar2,0);
}

// RebuildCursors @ 147c78440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::RebuildCursors(UGameViewportClient *this)

{
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UUserInterfaceSettings *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_158;
  undefined4 uStack_124;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FHardwareCursorReference,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TVector2<double>_u_0 local_78 [2];
  undefined4 local_4c;
  
  pUVar12 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  pUVar13 = GetDefault<UUserInterfaceSettings>(pUVar12);
  iVar16 = 0;
  iVar17 = 0;
  iVar19 = 0;
  puVar2 = &(pUVar13->SoftwareCursors).field_0x10;
  local_158 = 1;
  iVar5 = *(int *)&(pUVar13->SoftwareCursors).field_0x28;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(pUVar13->SoftwareCursors).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar10 = *puVar20;
    iVar19 = 0;
    while (uVar10 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar10 = 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147c78510;
      uVar10 = puVar20[lVar14 + 1];
    }
    uVar10 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar11 = iVar19 + -1 + local_res20;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_147c78510:
  uVar15 = *(uint *)&(pUVar13->SoftwareCursors).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uVar10,iVar17);
  TStack_d0.CurrentBitIndex = iVar11;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = iVar19;
  uStack_b0 = CONCAT44(uStack_124,
                       *(int *)&(pUVar13->SoftwareCursors).field_0x8 -
                       *(int *)&(pUVar13->SoftwareCursors).field_0x34);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(pUVar13->SoftwareCursors).field_0x28;
  if (uVar15 != uVar10) {
    puVar18 = *(undefined1 **)&(pUVar13->SoftwareCursors).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_147c78640;
      uVar15 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (int)lVar14 + -1 + uVar21;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_147c78640:
  while( true ) {
    if (*(int *)&(pUVar13->SoftwareCursors).field_0x8 -
        *(int *)&(pUVar13->SoftwareCursors).field_0x34 != (int)uStack_b0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_d0.CurrentBitIndex == uVar15) &&
       (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    SetSoftwareCursorFromClassPath
              (this,(uint)*(byte *)((longlong)TStack_d0.CurrentBitIndex * 0x30 +
                                   *(longlong *)&pUVar13->SoftwareCursors),
               (FSoftClassPath *)
               (*(longlong *)&pUVar13->SoftwareCursors + 8 +
               (longlong)TStack_d0.CurrentBitIndex * 0x30));
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iVar5 = *(int *)&(pUVar13->HardwareCursors).field_0x28;
  puVar2 = &(pUVar13->HardwareCursors).field_0x10;
  iVar17 = 0;
  pTVar1 = &pUVar13->HardwareCursors;
  iVar19 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(pUVar13->HardwareCursors).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar10 = *puVar20;
    iVar17 = 0;
    while (uVar10 == 0) {
      lVar14 = (longlong)iVar16;
      iVar17 = iVar17 + 0x20;
      iVar16 = iVar16 + 1;
      iVar19 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_147c78731;
      uVar10 = puVar20[lVar14 + 1];
    }
    local_158 = -uVar10 & uVar10;
    uVar3 = (ulonglong)local_158 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar19 = iVar17 + -1 + (int)lVar14;
    if (iVar5 < iVar19) {
      iVar19 = iVar5;
    }
  }
LAB_147c78731:
  uVar10 = *(uint *)&(pUVar13->HardwareCursors).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(local_158,iVar16);
  TStack_a0.CurrentBitIndex = iVar19;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar10 >> 5;
  TStack_a0._28_4_ = iVar11;
  TStack_a0.BaseBitIndex = iVar17;
  uStack_80 = CONCAT44(uStack_dc,
                       *(int *)&(pUVar13->HardwareCursors).field_0x8 -
                       *(int *)&(pUVar13->HardwareCursors).field_0x34);
  local_a8 = pTVar1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar5 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar21 = *(uint *)&(pUVar13->HardwareCursors).field_0x28;
  if (uVar10 != uVar21) {
    puVar18 = *(undefined1 **)&(pUVar13->HardwareCursors).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar10 == 0) {
      lVar14 = (longlong)iVar19;
      uVar15 = uVar15 + 0x20;
      iVar19 = iVar19 + 1;
      uVar10 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_147c78830;
      uVar10 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar21 < (int)uVar10) {
      uVar10 = uVar21;
    }
  }
LAB_147c78830:
  while( true ) {
    pTVar8 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FHardwareCursorReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar14 = (longlong)TStack_a0.CurrentBitIndex;
    if (((TStack_a0.CurrentBitIndex == uVar10) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar1))
    break;
    lVar6 = *(longlong *)pTVar8;
    pdVar4 = (double *)(lVar6 + 0x10 + lVar14 * 0x28);
    local_78[0]._0_8_ = *pdVar4;
    local_78[0]._8_8_ = pdVar4[1];
    SetHardwareCursor(this,(uint)*(byte *)(lVar6 + lVar14 * 0x28),
                      *(FName *)(lVar6 + 8 + lVar14 * 0x28),(TVector2<double> *)&local_78[0]._s_0);
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  return;
}

// ReceivedFocus @ 147c788c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::ReceivedFocus(UGameViewportClient *this,FViewport *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  UClass *this_00;
  FSlateApplication *this_01;
  FAudioDeviceManager *pFVar4;
  longlong lVar5;
  
  this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 4) != 0) &&
     (puVar1 = &(this->EngineShowFlags).field_0x10, uVar2 = *(undefined8 *)puVar1,
     ZPULL(uVar2,0,1) != 0 ||
     ((this->EngineShowFlags).Wireframe != 0 ||
     ((this->EngineShowFlags).Materials != 0 ||
     ((this->EngineShowFlags).StaticMeshes != 0 ||
     ((this->EngineShowFlags).Landscape != 0 ||
     ((this->EngineShowFlags).LightRadius != 0 ||
     ((this->EngineShowFlags).Fog != 0 ||
     ((this->EngineShowFlags).Volumes != 0 ||
     ((this->EngineShowFlags).Game != 0 ||
     ((this->EngineShowFlags).ActorColoration != 0 ||
     ((this->EngineShowFlags).BSP != 0 ||
     ((this->EngineShowFlags).Collision != 0 ||
     ((this->EngineShowFlags).CollisionVisibility != 0 ||
     ((this->EngineShowFlags).CollisionPawn != 0 ||
     ((this->EngineShowFlags).LightShafts != 0 ||
     ((this->EngineShowFlags).PostProcessMaterial != 0 ||
     ((this->EngineShowFlags).Atmosphere != 0 ||
     ((this->EngineShowFlags).Cloud != 0 ||
     ((this->EngineShowFlags).CameraAspectRatioBars != 0 ||
     ((this->EngineShowFlags).CameraSafeFrames != 0 ||
     ((this->EngineShowFlags).TextRender != 0 ||
     ((this->EngineShowFlags).Rendering != 0 ||
     ((this->EngineShowFlags).HighResScreenshotMask != 0 ||
     ((this->EngineShowFlags).HMDDistortion != 0 ||
     ((this->EngineShowFlags).StereoRendering != 0 ||
     ((this->EngineShowFlags).DistanceCulledPrimitives != 0 ||
     ((this->EngineShowFlags).VisualizeLightCulling != 0 ||
     ((this->EngineShowFlags).PrecomputedVisibility != 0 ||
     ((this->EngineShowFlags).SkyLighting != 0 ||
     ((this->EngineShowFlags).PreviewShadowsIndicator != 0 ||
     ((this->EngineShowFlags).PrecomputedVisibilityCells != 0 ||
     ((this->EngineShowFlags).VisualizeVolumetricLightmap != 0 ||
     ((this->EngineShowFlags).VolumeLightingSamples != 0 ||
     ((this->EngineShowFlags).Paper2DSprites != 0 ||
     ((this->EngineShowFlags).VisualizeDistanceFieldAO != 0 ||
     ((this->EngineShowFlags).VisualizeMeshDistanceFields != 0 ||
     ((this->EngineShowFlags).PhysicsField != 0 ||
     ((this->EngineShowFlags).VisualizeGlobalDistanceField != 0 ||
     ((this->EngineShowFlags).VisualizeLightingOnProbes != 0 ||
     ((this->EngineShowFlags).ScreenSpaceAO != 0 ||
     ((this->EngineShowFlags).DistanceFieldAO != 0 ||
     ((this->EngineShowFlags).LumenGlobalIllumination != 0 ||
     ((this->EngineShowFlags).VolumetricFog != 0 ||
     ((this->EngineShowFlags).VisualizeSSR != 0 ||
     ((this->EngineShowFlags).VisualizeShadingModels != 0 ||
     ((this->EngineShowFlags).VisualizeSenses != 0 ||
     ((this->EngineShowFlags).LODColoration != 0 ||
     ((this->EngineShowFlags).HLODColoration != 0 ||
     ((this->EngineShowFlags).QuadOverdraw != 0 ||
     ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0 ||
     ((this->EngineShowFlags).PrimitiveDistanceAccuracy != 0 ||
     ((this->EngineShowFlags).MeshUVDensityAccuracy != 0 ||
     ((this->EngineShowFlags).MaterialTextureScaleAccuracy != 0 ||
     ((this->EngineShowFlags).OutputMaterialTextureScales != 0 ||
     ((this->EngineShowFlags).RequiredTextureResolution != 0 ||
     ((this->EngineShowFlags).VisualizeVirtualTexture != 0 ||
     ((this->EngineShowFlags).WidgetComponents != 0 ||
     ((this->EngineShowFlags).Bones != 0 ||
     ((this->EngineShowFlags).ServerDrawDebug != 0 ||
     ((this->EngineShowFlags).MediaPlanes != 0 ||
     ((this->EngineShowFlags).VREditing != 0 ||
     ((this->EngineShowFlags).OcclusionMeshes != 0 ||
     ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries != 0 ||
     (this->EngineShowFlags).DisableOcclusionQueries != 0)))))))))))))))))))))))))))))))))))))))))))
     ))))))))))))))))))))) {
    if ((*(FName *)(uVar2 + 0xc4) == NAME_SceneViewport) && (uVar2 + -8 != 0)) {
      lVar5 = 0;
      if (*(FName *)(uVar2 + 0xc4) == NAME_SceneViewport) {
        lVar5 = uVar2 + -8;
      }
      if (*(char *)(lVar5 + 0x2b0) == '\0') {
        this_01 = FSlateApplication::Get();
        FSlateApplication::SetGameIsFakingTouchEvents(this_01,true,(TVector2<double> *)0x0);
      }
    }
  }
  if (GEngine != (UEngine *)0x0) {
    pFVar4 = UEngine::GetAudioDeviceManager(GEngine);
    if (pFVar4 != (FAudioDeviceManager *)0x0) {
      pFVar4 = UEngine::GetAudioDeviceManager(GEngine);
      uVar3 = FAudioDeviceHandle::GetDeviceID
                        ((FAudioDeviceHandle *)&(this->SplitscreenInfo).ArrayNum);
      FAudioDeviceManager::SetActiveDevice(pFVar4,uVar3);
      (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.InlineData[4] = '\x01';
    }
  }
  return;
}

// RedrawRequested @ 147c78dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::RedrawRequested(UGameViewportClient *this,FViewport *param_1)

{
  return;
}

// RemapControllerInput @ 147c7b5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::RemapControllerInput(UGameViewportClient *this,FInputKeyEventArgs *param_1)

{
  undefined4 uVar1;
  UWorld *pUVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  int iVar6;
  UClass *this_00;
  longlong lVar7;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar8;
  IPlatformInputDeviceMapper *pIVar9;
  int *piVar10;
  int local_res8 [2];
  undefined1 local_res18 [8];
  
  pUVar2 = (this->World).field0_0x0.DebugPtr;
  if (pUVar2 == (UWorld *)0x0) {
LAB_147c7b73a:
    if (param_1->Viewport->bIsPlayInEditorViewport != 0) {
      bVar5 = FKey::IsGamepadKey(&param_1->Key);
      if (bVar5) {
        (**(code **)(GEngine->_padding_ + 0x408))(GEngine,this,&param_1->ControllerId);
      }
    }
    return;
  }
  iVar6 = UGameInstance::GetNumLocalPlayers((pUVar2->OwningGameInstance).field0_0x0.DebugPtr);
  if (iVar6 < 2) goto LAB_147c7b73a;
  bVar5 = FKey::IsGamepadKey(&param_1->Key);
  if (!bVar5) goto LAB_147c7b73a;
  this_00 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pTVar4 = CVarRemapDeviceIdForOffsetPlayerGamepadIds.Ref;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0xd == '\0') goto LAB_147c7b73a;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      lVar7 = 1;
      goto LAB_147c7b638;
    }
  }
  lVar7 = 0;
LAB_147c7b638:
  if (pTVar4->ShadowedValue[lVar7] != false) {
    pTVar8 = UGameInstance::GetLocalPlayers
                       ((((this->World).field0_0x0.DebugPtr)->OwningGameInstance).field0_0x0.
                        DebugPtr);
    iVar6 = param_1->ControllerId;
    if (-1 < iVar6) {
      if (((iVar6 < pTVar8->ArrayNum) && (iVar6 = iVar6 + 1, -1 < iVar6)) &&
         (iVar6 < pTVar8->ArrayNum)) {
        if (iVar6 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar1 = *(undefined4 *)
                 (*(longlong *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) + 0x11c);
        pIVar9 = IPlatformInputDeviceMapper::Get();
        (**(code **)(pIVar9->_padding_ + 0x70))(pIVar9,local_res8,uVar1);
        if (local_res8[0] < 0) {
          piVar10 = (int *)(**(code **)(pIVar9->_padding_ + 200))(pIVar9,local_res18);
          local_res8[0] = *piVar10;
          (**(code **)(pIVar9->_padding_ + 0x88))(pIVar9,local_res8[0],uVar1,3);
        }
        (param_1->InputDevice).InternalId = local_res8[0];
      }
    }
  }
  param_1->ControllerId = param_1->ControllerId + 1;
  return;
}

// RemoveAllViewportWidgets @ 147c7b950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::RemoveAllViewportWidgets(UGameViewportClient *this)

{
  undefined1 *puVar1;
  TMap<EMouseCursor::Type,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMouseCursor::Type,TSharedPtr<SWidget,1>,0>_>
  *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  SOverlay *this_01;
  IGameLayerManager *pIVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  this_00 = &this->CursorWidgets;
  bVar9 = 1 < *(int *)&(this->CursorWidgets).field_0x48;
  if (!bVar9) {
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->CursorWidgets).field_0x8);
  puVar1 = &(this->CursorWidgets).field_0xc;
  *(undefined4 *)&(this->CursorWidgets).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CursorWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CursorWidgets).field_0x34 = 0;
  iVar2 = *(int *)&(this->CursorWidgets).field_0x2c;
  *(undefined4 *)&(this->CursorWidgets).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CursorWidgets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CursorWidgets).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->CursorWidgets).field_0x48 = 1;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  pTVar3 = (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_147c7ba22;
      LOCK();
      aVar6 = pTVar3->SharedReferenceCount;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    this_01 = (this->ViewportOverlayWidget).Object;
    pTVar8 = pTVar3;
    if (this_01 != (SOverlay *)0x0) {
      SOverlay::ClearChildren(this_01);
    }
  }
LAB_147c7ba22:
  pTVar3 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  pTVar7 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_147c7ba46;
      LOCK();
      aVar6 = pTVar3->SharedReferenceCount;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    pIVar4 = (this->GameLayerManagerPtr).Object;
    pTVar7 = pTVar3;
    if (pIVar4 != (IGameLayerManager *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x58))();
    }
  }
LAB_147c7ba46:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// RemoveGameLayerWidget @ 147c7bc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::RemoveGameLayerWidget(UGameViewportClient *this,TSharedRef<SWidget,1> *param_1)

{
  IGameLayerManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c7bc43;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pIVar1 = (this->GameLayerManagerPtr).Object;
    if (pIVar1 != (IGameLayerManager *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x68);
      local_18 = param_1->Object;
      local_10 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pIVar1,&local_18);
    }
  }
LAB_147c7bc43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveViewportWidgetContent @ 147c7cfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::RemoveViewportWidgetContent
          (UGameViewportClient *this,TSharedRef<SWidget,1> *param_1)

{
  SOverlay *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c7cff3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->ViewportOverlayWidget).Object;
    if (this_00 != (SOverlay *)0x0) {
      local_18.Object = param_1->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SOverlay::RemoveSlot(this_00,&local_18);
    }
  }
LAB_147c7cff3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveViewportWidgetForPlayer @ 147c7d050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::RemoveViewportWidgetForPlayer
          (UGameViewportClient *this,ULocalPlayer *param_1,TSharedRef<SWidget,1> *param_2)

{
  IGameLayerManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c7d083;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pIVar1 = (this->GameLayerManagerPtr).Object;
    if (pIVar1 != (IGameLayerManager *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x38);
      local_18 = param_2->Object;
      local_10 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pIVar1,param_1,&local_18);
    }
  }
LAB_147c7d083:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RequestBugScreenShot @ 147c7d520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::RequestBugScreenShot(UGameViewportClient *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  UWorld *this_00;
  APlayerController *this_01;
  AHUD *pAVar7;
  int iVar8;
  wchar_t *pwVar9;
  bool bVar10;
  wchar_t *pwVar11;
  FString local_88;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TIntRect<int>_u_0 local_28;
  
  ::FString::FString(&local_88,param_1);
  if ((this->Viewport == (FViewport *)0x0) ||
     (cVar3 = (**(code **)(this->Viewport->_padding_ + 0x48))(), cVar3 == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  pwVar11 = L"png";
  if (bVar10 != false) {
    pwVar11 = L"exr";
  }
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    pwVar9 = L"BugScreenShot.png";
    if (bVar10 != false) {
      pwVar9 = L"BugScreenShot.exr";
    }
    ::FString::operator=(&local_88,pwVar9);
  }
  iVar8 = ::FString::Find(&local_88,L"/",1,IgnoreCase,FromStart,-1);
  if (iVar8 == -1) {
    FPaths::GetBaseFilename(&local_38,&local_88,true);
    FPaths::BugItDir(&local_48);
    ::FString::PrintfImpl(&local_58,L"%s%s_");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pIVar6 = IFileManager::Get();
    ::FString::FString(&local_68,pwVar11);
    FFileHelper::GenerateNextBitmapFilename(&local_58,&local_68,&local_88,pIVar6);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (this->Viewport != (FViewport *)0x0) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if ((param_2) && (this_00 != (UWorld *)0x0)) {
      UWorld::GetPlayerControllerIterator(this_00,&local_78);
      for (; (iVar8 = local_78.Index, pTVar2 = local_78.Container, -1 < local_78.Index &&
             (local_78.Index < (local_78.Container)->ArrayNum)); local_78.Index = local_78.Index + 1
          ) {
        if ((local_78.Index < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        this_01 = (APlayerController *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8));
        if ((this_01 != (APlayerController *)0x0) &&
           (pAVar7 = APlayerController::GetHUD(this_01), pAVar7 != (AHUD *)0x0)) {
          pAVar7 = APlayerController::GetHUD(this_01);
          (**(code **)(pAVar7->_padding_ + 0x808))(pAVar7);
        }
      }
    }
    local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FScreenshotRequest::RequestScreenshot
              (&local_88,true,false,bVar10,(TIntRect<int> *)&local_28._s_0);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return true;
}

// RequiresHitProxyStorage @ 147c7d840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::RequiresHitProxyStorage(UGameViewportClient *this)

{
  return false;
}

// RequiresUncapturedAxisInput @ 147c7d860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::RequiresUncapturedAxisInput(UGameViewportClient *this)

{
  undefined1 *puVar1;
  UGameInstance *this_00;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  undefined1 uVar3;
  APlayerController *pAVar4;
  
  puVar1 = &(this->EngineShowFlags).field_0x10;
  if (ZPULL(*(undefined8 *)puVar1,0,1) != 0 ||
      ((this->EngineShowFlags).Wireframe != 0 ||
      ((this->EngineShowFlags).Materials != 0 ||
      ((this->EngineShowFlags).StaticMeshes != 0 ||
      ((this->EngineShowFlags).Landscape != 0 ||
      ((this->EngineShowFlags).LightRadius != 0 ||
      ((this->EngineShowFlags).Fog != 0 ||
      ((this->EngineShowFlags).Volumes != 0 ||
      ((this->EngineShowFlags).Game != 0 ||
      ((this->EngineShowFlags).ActorColoration != 0 ||
      ((this->EngineShowFlags).BSP != 0 ||
      ((this->EngineShowFlags).Collision != 0 ||
      ((this->EngineShowFlags).CollisionVisibility != 0 ||
      ((this->EngineShowFlags).CollisionPawn != 0 ||
      ((this->EngineShowFlags).LightShafts != 0 ||
      ((this->EngineShowFlags).PostProcessMaterial != 0 ||
      ((this->EngineShowFlags).Atmosphere != 0 ||
      ((this->EngineShowFlags).Cloud != 0 ||
      ((this->EngineShowFlags).CameraAspectRatioBars != 0 ||
      ((this->EngineShowFlags).CameraSafeFrames != 0 ||
      ((this->EngineShowFlags).TextRender != 0 ||
      ((this->EngineShowFlags).Rendering != 0 ||
      ((this->EngineShowFlags).HighResScreenshotMask != 0 ||
      ((this->EngineShowFlags).HMDDistortion != 0 ||
      ((this->EngineShowFlags).StereoRendering != 0 ||
      ((this->EngineShowFlags).DistanceCulledPrimitives != 0 ||
      ((this->EngineShowFlags).VisualizeLightCulling != 0 ||
      ((this->EngineShowFlags).PrecomputedVisibility != 0 ||
      ((this->EngineShowFlags).SkyLighting != 0 ||
      ((this->EngineShowFlags).PreviewShadowsIndicator != 0 ||
      ((this->EngineShowFlags).PrecomputedVisibilityCells != 0 ||
      ((this->EngineShowFlags).VisualizeVolumetricLightmap != 0 ||
      ((this->EngineShowFlags).VolumeLightingSamples != 0 ||
      ((this->EngineShowFlags).Paper2DSprites != 0 ||
      ((this->EngineShowFlags).VisualizeDistanceFieldAO != 0 ||
      ((this->EngineShowFlags).VisualizeMeshDistanceFields != 0 ||
      ((this->EngineShowFlags).PhysicsField != 0 ||
      ((this->EngineShowFlags).VisualizeGlobalDistanceField != 0 ||
      ((this->EngineShowFlags).VisualizeLightingOnProbes != 0 ||
      ((this->EngineShowFlags).ScreenSpaceAO != 0 ||
      ((this->EngineShowFlags).DistanceFieldAO != 0 ||
      ((this->EngineShowFlags).LumenGlobalIllumination != 0 ||
      ((this->EngineShowFlags).VolumetricFog != 0 ||
      ((this->EngineShowFlags).VisualizeSSR != 0 ||
      ((this->EngineShowFlags).VisualizeShadingModels != 0 ||
      ((this->EngineShowFlags).VisualizeSenses != 0 ||
      ((this->EngineShowFlags).LODColoration != 0 ||
      ((this->EngineShowFlags).HLODColoration != 0 ||
      ((this->EngineShowFlags).QuadOverdraw != 0 ||
      ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0 ||
      ((this->EngineShowFlags).PrimitiveDistanceAccuracy != 0 ||
      ((this->EngineShowFlags).MeshUVDensityAccuracy != 0 ||
      ((this->EngineShowFlags).MaterialTextureScaleAccuracy != 0 ||
      ((this->EngineShowFlags).OutputMaterialTextureScales != 0 ||
      ((this->EngineShowFlags).RequiredTextureResolution != 0 ||
      ((this->EngineShowFlags).VisualizeVirtualTexture != 0 ||
      ((this->EngineShowFlags).WidgetComponents != 0 ||
      ((this->EngineShowFlags).Bones != 0 ||
      ((this->EngineShowFlags).ServerDrawDebug != 0 ||
      ((this->EngineShowFlags).MediaPlanes != 0 ||
      ((this->EngineShowFlags).VREditing != 0 ||
      ((this->EngineShowFlags).OcclusionMeshes != 0 ||
      ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries != 0 ||
      (this->EngineShowFlags).DisableOcclusionQueries != 0))))))))))))))))))))))))))))))))))))))))))
      ))))))))))))))))))))) {
    cVar2 = (**(code **)(*(longlong *)*(undefined8 *)puVar1 + 0xa0))();
    if (cVar2 != '\0') {
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x3a0))();
        if (cVar2 != '\0') {
          return true;
        }
      }
      this_00 = *(UGameInstance **)&(this->DebugProperties).ArrayNum;
      if (this_00 != (UGameInstance *)0x0) {
        pAVar4 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0);
        if (pAVar4 != (APlayerController *)0x0) {
          pAVar4 = UGameInstance::GetFirstLocalPlayerController
                             (*(UGameInstance **)&(this->DebugProperties).ArrayNum,(UWorld *)0x0);
          UNRECOVERED_JUMPTABLE = *(code **)(pAVar4->_padding_ + 0xf08);
                    /* WARNING: Could not recover jumptable at 0x000147c7d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE)(pAVar4,UNRECOVERED_JUMPTABLE);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

// ResetHardwareCursorStates @ 147c7d920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::ResetHardwareCursorStates(UGameViewportClient *this)

{
  TMap<EMouseCursor::Type,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMouseCursor::Type,void_*,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  ICursor *pIVar6;
  code *pcVar7;
  TMap<EMouseCursor::Type,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMouseCursor::Type,void_*,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  int local_res18;
  TMap<EMouseCursor::Type,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EMouseCursor::Type,void_*,0>_>
  *local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar5 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar6 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar6 != (ICursor *)0x0) {
    iVar15 = 0;
    pTVar1 = &this->HardwareCursors;
    iVar17 = 0;
    uVar10 = 1;
    puVar2 = &(this->HardwareCursors).field_0x10;
    iVar4 = *(int *)&(this->HardwareCursors).field_0x28;
    iVar11 = iVar17;
    if (iVar4 != 0) {
      puVar18 = *(uint **)&(this->HardwareCursors).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar2;
      }
      uVar14 = *puVar18;
      iVar17 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147c7da3e;
        uVar14 = puVar18[lVar12 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      iVar11 = local_res18 + -1 + iVar17;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_147c7da3e:
    uVar14 = *(uint *)&(this->HardwareCursors).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar10,iVar15);
    TStack_60.CurrentBitIndex = iVar11;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar17;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->HardwareCursors).field_0x8 -
                         *(int *)&(this->HardwareCursors).field_0x34);
    local_res20 = pTVar1;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = local_res20;
    uVar10 = *(uint *)&(this->HardwareCursors).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(this->HardwareCursors).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147c7db50;
        uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar13;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_147c7db50:
    while( true ) {
      if (*(int *)&(this->HardwareCursors).field_0x8 - *(int *)&(this->HardwareCursors).field_0x34
          != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EMouseCursor::Type,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar14) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar1 == pTVar8)
         ) break;
      (**(code **)((longlong)*pIVar6 + 0x58))
                (pIVar6,*(undefined4 *)
                         (*(longlong *)pTVar1 + (longlong)TStack_60.CurrentBitIndex * 0x18),0);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// SSSwapControllers @ 147c7ee20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::SSSwapControllers(UGameViewportClient *this)

{
  UEngine *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULocalPlayer *pUVar4;
  ULocalPlayer *pUVar5;
  int iVar6;
  int iVar7;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UEngine *)this->_padding_;
    if ((this_00 != (UEngine *)0x0) && (iVar3 = UEngine::GetNumGamePlayers(this_00,this), 1 < iVar3)
       ) {
      pUVar4 = UEngine::GetFirstGamePlayer(this_00,this);
      iVar7 = 0;
      if (pUVar4 == (ULocalPlayer *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = pUVar4->ControllerId;
      }
      iVar3 = iVar3 + -1;
      if (0 < iVar3) {
        do {
          pUVar4 = UEngine::GetGamePlayer(this_00,this,iVar7);
          iVar7 = iVar7 + 1;
          pcVar1 = *(code **)(pUVar4->_padding_ + 0x328);
          pUVar5 = UEngine::GetGamePlayer(this_00,this,iVar7);
          (*pcVar1)(pUVar4,pUVar5->ControllerId);
        } while (iVar7 < iVar3);
      }
      pUVar4 = UEngine::GetGamePlayer(this_00,this,iVar3);
      (**(code **)(pUVar4->_padding_ + 0x328))(pUVar4,iVar6);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetConsoleTarget @ 147c7fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::SetConsoleTarget(UGameViewportClient *this,int param_1)

{
  UConsole *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ULocalPlayer *pUVar5;
  UEngine *this_00;
  UEngine *this_01;
  
  if ((this->ViewportConsole).field0_0x0.DebugPtr != (UConsole *)0x0) {
    this_01 = (UEngine *)0x0;
    if (-1 < param_1) {
      if ((this->_padding_ & 0x10) == 0) {
        this_00 = (UEngine *)this->_padding_;
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4868594735687663688>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                           ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        this_00 = this_01;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = UEngine::GetNumGamePlayers(this_00,this);
      if (param_1 < iVar4) {
        if ((this->_padding_ & 0x10) == 0) {
          this_01 = (UEngine *)this->_padding_;
        }
        else {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4868594735687663688>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                             ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pUVar5 = UEngine::GetGamePlayer(this_01,this,param_1);
        pUVar1 = (this->ViewportConsole).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (ULocalPlayer *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (pUVar1->ConsoleTargetPlayer).field0_0x0.DebugPtr = pUVar5;
        return;
      }
    }
    (((this->ViewportConsole).field0_0x0.DebugPtr)->ConsoleTargetPlayer).field0_0x0.DebugPtr =
         (ULocalPlayer *)0x0;
  }
  return;
}

// SetDisplayConfiguration @ 147c7fef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::SetDisplayConfiguration
          (UGameViewportClient *this,TIntPoint<int> *param_1,Type param_2)

{
  longlong lVar1;
  UEngine *this_00;
  uint uVar2;
  UClass *pUVar3;
  UGameUserSettings *this_01;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  this_00 = GEngine;
  if ((this->Viewport != (FViewport *)0x0) && (this->ViewportFrame != (FViewportFrame *)0x0)) {
    if (GEngine != (UEngine *)0x0) {
      pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
      lVar1 = this_00->_padding_;
      iVar5 = (int)pUVar3->_padding_;
      if ((iVar5 <= *(int *)(lVar1 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar3->_padding_)) {
        this_01 = UEngine::GetGameUserSettings(this_00);
        UGameUserSettings::SetFullscreenMode(this_01,param_2);
        if (param_1 != (TIntPoint<int> *)0x0) {
          uVar4 = (param_1->field0_0x0)._s_0.X;
          uVar2 = (param_1->field0_0x0)._s_0.Y;
          if ((this_01->ResolutionSizeX != uVar4) || (this_01->ResolutionSizeY != uVar2)) {
            this_01->ResolutionSizeX = uVar4;
            this_01->ResolutionSizeY = uVar2;
            UGameUserSettings::UpdateResolutionQuality(this_01);
          }
        }
        (**(code **)(this_01->_padding_ + 0x2b0))(this_01,0);
        return true;
      }
    }
    iVar5 = GSystemResolution.ResX;
    iVar6 = GSystemResolution.ResY;
    if (param_1 != (TIntPoint<int> *)0x0) {
      iVar5 = (param_1->field0_0x0)._s_0.X;
      iVar6 = (param_1->field0_0x0)._s_0.Y;
    }
    FSystemResolution::RequestResolutionChange(iVar5,iVar6,param_2);
  }
  return true;
}

// SetDropDetail @ 147c80000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::SetDropDetail(UGameViewportClient *this,float param_1)

{
  bool bVar1;
  float fVar2;
  longlong lVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  
  if (GEngine != (UEngine *)0x0) {
    lVar3 = (**(code **)(this->_padding_ + 0x180))();
    fVar2 = __real_42c80000;
    if (lVar3 != 0) {
      fVar6 = 0.0;
      if (0.0 < param_1) {
        fVar6 = __real_3f800000 / param_1;
      }
      if (((FApp::bIsBenchmarking == false) && (FApp::bUseFixedTimeStep == false)) &&
         (GEngine->bUseFixedFrameRate == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      fVar5 = GEngine->MinDesiredFrameRate;
      if (__real_42c80000 <= GEngine->MinDesiredFrameRate) {
        fVar5 = __real_42c80000;
      }
      if (fVar5 <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      if ((fVar5 <= fVar6) || (bVar1)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 0x10;
      }
      lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
      *(byte *)(lVar3 + 0x18c) = *(byte *)(lVar3 + 0x18c) & 0xef;
      *(byte *)(lVar3 + 0x18c) = *(byte *)(lVar3 + 0x18c) | bVar4;
      fVar5 = GEngine->MinDesiredFrameRate - __real_40a00000;
      if (fVar2 <= fVar5) {
        fVar5 = fVar2;
      }
      if (fVar5 <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      if ((fVar5 <= fVar6) || (bVar1)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 0x20;
      }
      lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
      *(byte *)(lVar3 + 0x18c) = *(byte *)(lVar3 + 0x18c) & 0xdf;
      *(byte *)(lVar3 + 0x18c) = *(byte *)(lVar3 + 0x18c) | bVar4;
    }
  }
  return;
}

// SetEnabledStats @ 147c801a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetEnabledStats
          (UGameViewportClient *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  longlong lVar5;
  FAudioDeviceManager *pFVar6;
  
  bVar4 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar4) {
    if (param_1 != &EnabledStats) {
      DestructItems<FString,int>
                ((FString *)EnabledStats.AllocatorInstance.Data,EnabledStats.ArrayNum);
      iVar2 = param_1->ArrayNum;
      pFVar3 = (param_1->AllocatorInstance).Data;
      EnabledStats.ArrayNum = iVar2;
      if ((iVar2 == 0) && (EnabledStats.ArrayMax == 0)) {
        EnabledStats.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,EnabledStats.ArrayMax,&EnabledStats.AllocatorInstance,iVar2,
                   &EnabledStats.ArrayMax);
        ConstructItems<FString,FString,int>
                  (EnabledStats.AllocatorInstance.Data,(FString *)pFVar3,iVar2);
      }
    }
  }
  else if (2 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  puVar1 = &this[-1].OnInputAxisEvent.field_0x8;
  lVar5 = (**(code **)(*(longlong *)&this[-1].OnInputAxisEvent.field_0x8 + 0x180))(puVar1);
  if (lVar5 != 0) {
    pFVar6 = UEngine::GetAudioDeviceManager(GEngine);
    if (pFVar6 != (FAudioDeviceManager *)0x0) {
      if (puVar1 == (undefined1 *)0x0) {
        this = (UGameViewportClient *)0x0;
      }
      Audio::FAudioDebugger::ResolveDesiredStats((FViewportClient *)this);
    }
  }
  return;
}

// SetForceDisableSplitscreen @ 147c80320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetForceDisableSplitscreen(UGameViewportClient *this,bool param_1)

{
  this->bDisableSplitScreenOverride = param_1;
                    /* WARNING: Could not recover jumptable at 0x000147c80329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x360))();
  return;
}

// SetGameLayerManager @ 147c804a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetGameLayerManager
          (UGameViewportClient *this,TSharedPtr<IGameLayerManager,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->GameLayerManagerPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->GameLayerManagerPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetHardwareCursor @ 147c808d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::SetHardwareCursor
          (UGameViewportClient *this,Type param_1,FName param_2,TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  TReferenceControllerBase<1> *pTVar3;
  ICursor *pIVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TTuple<FName,void_*> *pTVar10;
  FString *pFVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  Type local_res10 [2];
  FName local_res18 [2];
  void *local_e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_d0 [8];
  FString *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FName *local_b8;
  void **local_b0;
  Type *local_a8;
  void **local_a0;
  FString local_98;
  FString local_88;
  TVector2<double>_u_0 local_78 [4];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar3 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar4 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = false;
  if (pIVar4 != (ICursor *)0x0) {
    pTVar10 = TSet<TTuple<FName,void_*>,TDefaultMapHashableKeyFuncs<FName,void_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,void_*>,TDefaultMapHashableKeyFuncs<FName,void_*,0>,FDefaultSetAllocator>
                      *)&this->HardwareCursorCache,local_res18[0]);
    dVar6 = __real_3ff0000000000000;
    if ((pTVar10 == (TTuple<FName,void_*> *)0x0) ||
       (local_e8 = *(void **)&pTVar10->field_0x8, local_e8 == (void *)0x0)) {
      dVar1 = (param_3->field0_0x0)._s_0.X;
      uVar18 = SUB84(__real_3ff0000000000000,0);
      uVar19 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      if (((dVar1 < 0.0) || (__real_3ff0000000000000 < dVar1)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6788966895396580755>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                             ,0x126d,"HotSpot.X >= 0.0f && HotSpot.X <= 1.0f"), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      dVar1 = (param_3->field0_0x0)._s_0.Y;
      if (((dVar1 < 0.0) || (dVar6 < dVar1)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6788966895396580754>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                             ,0x126e,"HotSpot.Y >= 0.0f && HotSpot.Y <= 1.0f"), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      dVar2 = *(double *)&param_3->field0_0x0;
      uVar16 = SUB84(dVar1,0);
      uVar17 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar6 <= dVar1) {
        uVar16 = uVar18;
        uVar17 = uVar19;
      }
      uVar14 = SUB84(dVar2,0);
      uVar15 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar6 <= dVar2) {
        uVar14 = uVar18;
        uVar15 = uVar19;
      }
      if ((double)CONCAT44(uVar17,uVar16) <= 0.0) {
        uVar16 = 0;
        uVar17 = 0;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= 0.0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      (param_3->field0_0x0)._s_0.Y = (double)CONCAT44(uVar17,uVar16);
      (param_3->field0_0x0)._s_0.X = (double)CONCAT44(uVar15,uVar14);
      pFVar11 = ::FName::ToString(local_res18,&local_88);
      local_c8 = pFVar11;
      pTVar12 = &FPaths::ProjectContentDir(&local_98)->Data;
      iVar9 = (pFVar11->Data).ArrayNum;
      iVar13 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar13 = 0;
      }
      if ((pTVar12->ArrayNum != 0) || (iVar9 = 2, iVar13 == -1)) {
        iVar9 = 1;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_e0,pTVar12,iVar13 + iVar9);
      ::FString::PathAppend
                ((FString *)&local_e0,(wchar_t *)(local_c8->Data).AllocatorInstance.Data,iVar13);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_c8 = (FString *)(param_3->field0_0x0)._s_0.X;
      uStack_c0 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
      uStack_bc = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
      local_e8 = (void *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_e0,&local_c8);
      if (local_e8 == (void *)0x0) {
        local_78[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
        local_78[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
        local_e8 = LoadCursorFromPngs(this,pIVar4,(FString *)&local_e0,
                                      (TVector2<double> *)&local_78[0]._s_0);
        if (local_e8 == (void *)0x0) {
          if (1 < (byte)LogInit._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          }
          if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.AllocatorInstance.Data);
          }
          bVar7 = false;
          goto LAB_147c80bf9;
        }
      }
      local_b8 = local_res18;
      local_b0 = &local_e8;
      TSet<TTuple<FName,void_*>,TDefaultMapHashableKeyFuncs<FName,void_*,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,void_*_const_&>_>
                ((TSet<TTuple<FName,void_*>,TDefaultMapHashableKeyFuncs<FName,void_*,0>,FDefaultSetAllocator>
                  *)&this->HardwareCursorCache,
                 (TPairInitializer<FName_const_&,void_*_const_&> *)local_d0,(bool *)&local_b8);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
    }
    local_a8 = local_res10;
    local_a0 = &local_e8;
    TSet<TTuple<enum_EMouseCursor::Type,void_*>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,void_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EMouseCursor::Type_const_&,void_*_const_&>_>
              (&this->HardwareCursors,
               (TPairInitializer<EMouseCursor::Type_const_&,void_*_const_&> *)(local_d0 + 4),
               (bool *)&local_a8);
    if (this->bIsMouseOverClient != false) {
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4,local_res10[0],local_e8);
    }
    bVar7 = true;
  }
LAB_147c80bf9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar7;
}

// SetHideCursorDuringCapture @ 147c80c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetHideCursorDuringCapture(UGameViewportClient *this,bool param_1)

{
  if (this->bHideCursorDuringCapture != param_1) {
    if (3 < (byte)LogViewport._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
    }
    this->bHideCursorDuringCapture = param_1;
  }
  return;
}

// SetIsSimulateInEditorViewport @ 147c80c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetIsSimulateInEditorViewport(UGameViewportClient *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *this_00;
  FSlateApplication *this_01;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UEngine *this_02;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if (((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 4) != 0) {
    this_01 = FSlateApplication::Get();
    FSlateApplication::SetGameIsFakingTouchEvents(this_01,!param_1,(TVector2<double> *)0x0);
  }
  if ((*(uint *)&this[-1].OnInputAxisEvent.field_0x10 & 0x10) == 0) {
    this_02 = (UEngine *)this[-1].StatHitchesData;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_02 = (UEngine *)0x0;
  }
  pTVar6 = UEngine::GetGamePlayers
                     (this_02,(UGameViewportClient *)&this[-1].OnInputAxisEvent.field_0x8);
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  iVar2 = pTVar6->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
LAB_147c80d40:
  do {
    if (pTVar6->ArrayNum != iVar2) {
      `TCheckedPointerIterator<ULocalPlayer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    if (*(longlong **)(*(longlong *)pFVar7 + 0x30) != (longlong *)0x0) {
      lVar3 = **(longlong **)(*(longlong *)pFVar7 + 0x30);
      if (param_1) {
        (**(code **)(lVar3 + 0xe98))();
        pFVar7 = pFVar7 + 8;
        goto LAB_147c80d40;
      }
      (**(code **)(lVar3 + 0xe90))();
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// SetMouseCaptureMode @ 147c80f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetMouseCaptureMode(UGameViewportClient *this,EMouseCaptureMode param_1)

{
  UEnum *pUVar1;
  FString local_28;
  FString local_18;
  
  if (this->MouseCaptureMode != param_1) {
    if (3 < (byte)LogViewport._0_1_) {
      pUVar1 = StaticEnum<enum_EMouseCaptureMode>();
      UEnum::GetNameStringByValue(pUVar1,&local_18,(ulonglong)param_1);
      pUVar1 = StaticEnum<enum_EMouseCaptureMode>();
      UEnum::GetNameStringByValue(pUVar1,&local_28,(ulonglong)this->MouseCaptureMode);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->MouseCaptureMode = param_1;
  }
  return;
}

// SetMouseLockMode @ 147c81030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetMouseLockMode(UGameViewportClient *this,EMouseLockMode param_1)

{
  UEnum *pUVar1;
  FString local_28;
  FString local_18;
  
  if (this->MouseLockMode != param_1) {
    if (3 < (byte)LogViewport._0_1_) {
      pUVar1 = StaticEnum<enum_EMouseLockMode>();
      UEnum::GetNameStringByValue(pUVar1,&local_18,(ulonglong)param_1);
      pUVar1 = StaticEnum<enum_EMouseLockMode>();
      UEnum::GetNameStringByValue(pUVar1,&local_28,(ulonglong)this->MouseLockMode);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogViewport);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->MouseLockMode = param_1;
  }
  return;
}

// SetSoftwareCursorFromClassPath @ 147c818e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetSoftwareCursorFromClassPath
          (UGameViewportClient *this,Type param_1,FSoftClassPath *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  FString *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  UUserWidget *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  FMessageLog *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  int iVar11;
  bool bVar12;
  Type local_res18 [2];
  FName local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_208;
  FString local_1f8;
  FString local_1e8;
  UClass *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TSharedPtr<SWidget,1> local_198;
  FTextFormat local_188;
  FText local_178;
  FFormatArgumentValue local_168;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  FString local_128;
  TSharedRef<SWidget,1> local_118;
  FString local_108;
  TSharedRef<FTokenizedMessage,1> local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  FText local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FText local_a8;
  FTextFormat local_98;
  FMessageLog local_88;
  FMessageLog local_58;
  
  iVar11 = 0;
  local_res18[0] = None;
  if (*(longlong *)param_2 == 0) {
    ::FName::FName(&local_1c0,"PIE");
    pFVar7 = FMessageLog::FMessageLog(&local_58,&local_1c0);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_c8,L"GameViewport",L"SetSoftwareCursorFromClassPath:InvalidClass",
                        L"UGameViewportClient::SetSoftwareCursorFromClassPath: Invalid class specified."
                       );
    FMessageLog::Warning(pFVar7,&local_d8,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    pFVar7 = &local_58;
    goto LAB_147c81cff;
  }
  local_1a8 = (wchar_t *)0x0;
  iStack_1a0 = 0;
  pFVar3 = FSoftObjectPath::ToString((FSoftObjectPath *)param_2,&local_128);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_1b8 = (FScriptContainerElement *)0x15060d16c;
LAB_147c8194c:
    sVar4 = wcslen((wchar_t *)local_1b8);
    iVar11 = (int)sVar4;
  }
  else {
    local_1b8 = (pFVar3->Data).AllocatorInstance.Data;
    if (local_1b8 != (FScriptContainerElement *)0x0) goto LAB_147c8194c;
  }
  iStack_1b0 = iVar11;
  pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
  local_148._12_4_ = uStack_19c;
  local_148.Size = iStack_1a0;
  local_138._12_4_ = uStack_1ac;
  local_138.Size = iStack_1b0;
  local_148.DataPtr = local_1a8;
  local_138.DataPtr = (wchar_t *)local_1b8;
  local_1d8 = StaticLoadClass(pUVar5,(UObject *)0x0,&local_138,&local_148,0,(UPackageMap *)0x0);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_1d8 != (UClass *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_1d8);
    }
    this_00 = CreateWidget<UUserWidget,UGameInstance_*>
                        ((this->GameInstance).field0_0x0.DebugPtr,
                         (TSubclassOf<UUserWidget>)&local_1d8,local_res20);
    if (this_00 != (UUserWidget *)0x0) {
      pTVar6 = UWidget::TakeWidget((UWidget *)this_00,&local_118);
      local_198.Object = pTVar6->Object;
      local_198.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SetSoftwareCursorWidget(this,param_1,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      return;
    }
    if (*(int *)&(this->CursorWidgets).field_0x8 == *(int *)&(this->CursorWidgets).field_0x34) {
      return;
    }
    local_res18[0] = param_1;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EMouseCursor::Type>(&this->CursorWidgets,param_1,local_res18);
    return;
  }
  ::FName::FName(&local_1d0,"PIE");
  pFVar7 = FMessageLog::FMessageLog(&local_88,&local_1d0);
  local_1c8.ComparisonIndex.Value = *(uint *)&param_2->field_0x8;
  local_1c8.Number = *(uint *)&param_2->field_0xc;
  local_b8 = *(undefined8 *)param_2;
  uStack_b0 = *(undefined8 *)&param_2->field_0x8;
  bVar12 = local_1c8 != (FName)0x0;
  if (bVar12) {
    pFVar3 = ::FName::ToString(&local_1c8,&local_108);
  }
  else {
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = &local_1f8;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
  }
  local_1e8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_1e8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if ((bVar12) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if ((!bVar12) && (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  pFVar8 = FText::FromString(&local_a8,&local_1e8);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"GameViewport",L"SetSoftwareCursorFromClassPath:LoadFailed",
                      L"UGameViewportClient::SetSoftwareCursorFromClassPath: Could not load cursor class \'{0}\'."
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_98,pFVar9,Default);
  local_168.Type = Text;
  FText::FText((FText *)&local_168.TextValue,pFVar8);
  if ((local_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_208.AllocatorInstance,1,&local_208.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_208.AllocatorInstance.Data,&local_168,1);
  local_188.TextFormatData.Object = (pFVar10->TextFormatData).Object;
  local_188.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_188.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_178,&local_188,&local_208);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
  if ((FFormatArgumentValue *)local_208.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_168.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar8->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FMessageLog::Warning(pFVar7,&local_f8,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pFVar7 = &local_88;
LAB_147c81cff:
  FMessageLog::~FMessageLog(pFVar7);
  return;
}

// SetSoftwareCursorWidget @ 147c81d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetSoftwareCursorWidget
          (UGameViewportClient *this,Type param_1,UUserWidget *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  Type local_res18 [4];
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (param_2 != (UUserWidget *)0x0) {
    pTVar1 = UWidget::TakeWidget((UWidget *)param_2,&local_18);
    local_28.Object = pTVar1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetSoftwareCursorWidget(this,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if (*(int *)&(this->CursorWidgets).field_0x8 != *(int *)&(this->CursorWidgets).field_0x34) {
    local_res18[0] = param_1;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EMouseCursor::Type>(&this->CursorWidgets,param_1,local_res18);
  }
  return;
}

// SetSoftwareCursorWidget @ 147c81dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetSoftwareCursorWidget
          (UGameViewportClient *this,Type param_1,TSharedPtr<SWidget,1> *param_2)

{
  Type local_res10 [2];
  TPairInitializer<EMouseCursor::Type_&,TSharedPtr<SWidget,1>_&> local_res18;
  Type *local_18;
  TSharedPtr<SWidget,1> *local_10;
  
  local_res10[0] = param_1;
  if (param_2->Object != (SWidget *)0x0) {
    local_18 = local_res10;
    local_10 = param_2;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EMouseCursor::Type_&,TSharedPtr<SWidget,1>_&>_>
              (&this->CursorWidgets,&local_res18,(bool *)&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  local_res18.Key._0_4_ = param_1;
  if (*(int *)&(this->CursorWidgets).field_0x8 != *(int *)&(this->CursorWidgets).field_0x34) {
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EMouseCursor::Type>(&this->CursorWidgets,param_1,(Type *)&local_res18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetStatEnabled @ 147c82060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UGameViewportClient::SetStatEnabled
          (UGameViewportClient *this,wchar_t *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  FString local_48;
  FString local_38;
  
  if (param_2) {
    if ((param_3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bAll",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                           ,0x385,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    ::FString::FString(&local_38,param_1);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(&EnabledStats,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return EnabledStats.ArrayNum;
    }
  }
  else {
    if (!param_3) {
      ::FString::FString(&local_48,param_1);
      if (((EnabledStats.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           EnabledStats.AllocatorInstance.Data + (longlong)EnabledStats.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      FVar2.Data = EnabledStats.AllocatorInstance.Data;
      lVar11 = (longlong)EnabledStats.ArrayNum;
      iVar4 = EnabledStats.ArrayNum;
      if (EnabledStats.ArrayNum != 0) {
        iVar4 = 0;
        iVar5 = *(int *)(EnabledStats.AllocatorInstance.Data + 8);
        if (iVar5 == local_48.Data.ArrayNum) {
          if (iVar5 < 2) {
            bVar3 = false;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)EnabledStats.AllocatorInstance.Data,
                               (wchar_t *)local_48.Data.AllocatorInstance.Data);
            bVar3 = iVar5 != 0;
          }
        }
        else {
          bVar3 = iVar5 + local_48.Data.ArrayNum != 1;
        }
        lVar10 = 0;
        uVar6 = local_48.Data._8_8_;
        iVar5 = 0;
        do {
          lVar10 = lVar10 + 1;
          iVar9 = iVar5 + 1;
          if (lVar10 < lVar11) {
            pFVar8 = FVar2.Data + lVar10 * 0x10;
            do {
              iVar7 = *(int *)(pFVar8 + 8);
              if (iVar7 == (int)uVar6) {
                if (iVar7 < 2) {
                  bVar12 = false;
                }
                else {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    (*(wchar_t **)pFVar8,
                                     (wchar_t *)local_48.Data.AllocatorInstance.Data);
                  bVar12 = iVar7 != 0;
                  uVar6 = local_48.Data._8_8_;
                }
              }
              else {
                bVar12 = iVar7 + (int)uVar6 != 1;
              }
              if (bVar3 != bVar12) break;
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 1;
              pFVar8 = pFVar8 + 0x10;
            } while (lVar10 < lVar11);
          }
          iVar7 = iVar9 - iVar5;
          if (bVar3 == false) {
            DestructItems<FString,int>((FString *)(FVar2.Data + (longlong)iVar5 * 0x10),iVar7);
            uVar6 = local_48.Data._8_8_;
          }
          else {
            if (iVar4 != iVar5) {
              memmove(FVar2.Data + (longlong)iVar4 * 0x10,FVar2.Data + (longlong)iVar5 * 0x10,
                      (longlong)iVar7 << 4);
              uVar6 = local_48.Data._8_8_;
            }
            iVar4 = iVar4 + iVar7;
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar5 = iVar9;
        } while (lVar10 < lVar11);
      }
      EnabledStats.ArrayNum = iVar4;
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EnabledStats.ArrayNum;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return EnabledStats.ArrayNum;
    }
    DestructItems<FString,int>((FString *)EnabledStats.AllocatorInstance.Data,EnabledStats.ArrayNum)
    ;
    EnabledStats.ArrayNum = 0;
    if (EnabledStats.ArrayMax == 0) {
      return 0;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&EnabledStats.AllocatorInstance,0,&EnabledStats.ArrayMax);
  }
  return EnabledStats.ArrayNum;
}

// SetViewMode @ 147c82800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetViewMode
          (UGameViewportClient *this,EViewModeIndex param_1,FOutputDevice *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  this->ViewModeIndex = param_1;
  if (param_1 == VMI_StationaryLightOverlap) {
    if (param_2 != (FOutputDevice *)0x0) {
      pwVar2 = L"This view mode is currently not supported in game.";
LAB_147c82848:
      FOutputDevice::Log(param_2,pwVar2);
    }
LAB_147c82850:
    this->ViewModeIndex = 3;
  }
  else if ((param_1 != VMI_Lit) && (param_1 != VMI_ShaderComplexity)) {
    bVar1 = AllowDebugViewmodes();
    if (!bVar1) {
      if (param_2 != (FOutputDevice *)0x0) {
        pwVar2 = L"Debug viewmodes not allowed on consoles by default.  See AllowDebugViewmodes().";
        goto LAB_147c82848;
      }
      goto LAB_147c82850;
    }
  }
  if ((GRHIGlobals.RayTracing.Supported != false) &&
     (GRHIGlobals.RayTracing.SupportsShaders != false)) goto LAB_147c828a8;
  if (this->ViewModeIndex == 0x1b) {
    if (param_2 != (FOutputDevice *)0x0) {
      pwVar2 = 
      L"Path Tracing view mode requires ray tracing support. It is not supported on this system.";
LAB_147c82896:
      FOutputDevice::Log(param_2,pwVar2);
    }
  }
  else {
    if (this->ViewModeIndex != 0x1c) goto LAB_147c828a8;
    if (param_2 != (FOutputDevice *)0x0) {
      pwVar2 = 
      L"Ray tracing view mode requires ray tracing support. It is not supported on this system.";
      goto LAB_147c82896;
    }
  }
  this->ViewModeIndex = 3;
LAB_147c828a8:
  ApplyViewMode(this->ViewModeIndex,true,&this->EngineShowFlags);
  return;
}

// SetViewport @ 147c828d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::SetViewport(UGameViewportClient *this,FViewport *param_1)

{
  FViewport *pFVar1;
  
  pFVar1 = this->Viewport;
  this->Viewport = param_1;
  if ((pFVar1 == (FViewport *)0x0) && (param_1 != (FViewport *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c828eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x360))();
    return;
  }
  return;
}

// SetViewportFrame @ 147c82900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetViewportFrame(UGameViewportClient *this,FViewportFrame *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  
  this->ViewportFrame = param_1;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0x330);
  if (param_1 != (FViewportFrame *)0x0) {
    uVar1 = (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c8293e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(this,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c82955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(this,0);
  return;
}

// SetViewportOverlayWidget @ 147c82a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetViewportOverlayWidget
          (UGameViewportClient *this,TSharedPtr<SWindow,1> *param_1,TSharedRef<SOverlay,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->Window).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Window).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Window).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Window).WeakReferenceCount.ReferenceController = pTVar3;
  }
  (this->ViewportOverlayWidget).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->ViewportOverlayWidget).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetVirtualCursorWidget @ 147c82b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UGameViewportClient::SetVirtualCursorWidget
          (UGameViewportClient *this,Type param_1,UUserWidget *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  Type local_res18 [4];
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (param_2 != (UUserWidget *)0x0) {
    pTVar1 = UWidget::TakeWidget((UWidget *)param_2,&local_18);
    local_28.Object = pTVar1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetSoftwareCursorWidget(this,param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if (*(int *)&(this->CursorWidgets).field_0x8 != *(int *)&(this->CursorWidgets).field_0x34) {
    local_res18[0] = param_1;
    TSet<TTuple<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<enum_EMouseCursor::Type,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EMouseCursor::Type>(&this->CursorWidgets,param_1,local_res18);
  }
  return;
}

// SetupInitialLocalPlayer @ 147c82ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameViewportClient::SetupInitialLocalPlayer(UGameViewportClient *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  UGameInstance *pUVar3;
  code *pcVar4;
  bool bVar5;
  ULocalPlayer *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UConsole *pUVar10;
  FOutputDeviceRedirector *this_00;
  FWorldContext *pFVar11;
  longlong *plVar12;
  UClass *pUVar13;
  undefined1 auStackY_128 [32];
  ulonglong uStack_f0;
  undefined1 local_e0 [24];
  code *local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [128];
  TObjectPtr<UWorld>_u_0 local_38;
  
  local_38.DebugPtr = (UWorld *)(__security_cookie.value ^ (ulonglong)auStackY_128);
  pUVar13 = (UClass *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar9 = (UClass *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar9 = pUVar13;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (ULocalPlayer *)(*pcVar4)();
      return pUVar6;
    }
  }
  lVar2 = *(longlong *)&(pUVar9->FuncMap).field_0x10;
  if ((lVar2 != 0) && (pUVar7 = Z_Construct_UClass_UConsole_NoRegister(), pUVar7 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)&(pUVar9->FuncMap).field_0x10 != 0)) goto LAB_147c82f74;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetOuterUEngine()->ConsoleClass != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                     ,0xadb,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pUVar6 = (ULocalPlayer *)(*pcVar4)();
    return pUVar6;
  }
LAB_147c82f74:
  (this->ActiveSplitscreenType).Value = '\0';
  if ((this->_padding_ & 0x10) == 0) {
    pUVar9 = (UClass *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4868594735687663688>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                       ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar9 = pUVar13;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (ULocalPlayer *)(*pcVar4)();
      return pUVar6;
    }
  }
  lVar2 = *(longlong *)&(pUVar9->FuncMap).field_0x10;
  pUVar7 = pUVar13;
  if ((lVar2 != 0) && (pUVar8 = Z_Construct_UClass_UConsole_NoRegister(), pUVar8 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar7 = *(UClass **)&(pUVar9->FuncMap).field_0x10;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UConsole_NoRegister();
  CheckIsClassChildOf_Internal(pUVar9,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar10 = (UConsole *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
  ;
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UConsole *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->ViewportConsole).field0_0x0.DebugPtr = pUVar10;
  this_00 = GetGlobalLogSingleton();
  pUVar10 = (this->ViewportConsole).field0_0x0.DebugPtr;
  pUVar9 = (UClass *)&pUVar10->_padding_;
  if (pUVar10 == (UConsole *)0x0) {
    pUVar9 = pUVar13;
  }
  FOutputDeviceRedirector::AddOutputDevice(this_00,(FOutputDevice *)pUVar9);
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  local_c8 = _vcall__928__flat______;
  uStack_c0 = uStack_f0;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ETravelFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UGameViewportClient>
            (&GEngine->TravelFailureEvent,(UGameViewportClient *)local_e0,(pmf_4468ac29 *)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UGameViewportClient>
            (&GEngine->NetworkFailureEvent,(UGameViewportClient *)(local_e0 + 8),
             (pmf_aec694ca *)this);
  pFVar11 = UEngine::GetWorldContextFromGameViewportChecked(GEngine,this);
  pUVar3 = (pFVar11->OwningGameInstance).field0_0x0.DebugPtr;
  if (pUVar3 == (UGameInstance *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6788966895396582676>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                       ,0xaec,"ViewportGameInstance != 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (ULocalPlayer *)(*pcVar4)();
      return pUVar6;
    }
    pUVar6 = (ULocalPlayer *)0x0;
  }
  else {
    pUVar6 = (ULocalPlayer *)(**(code **)(pUVar3->_padding_ + 0x328))(pUVar3,param_1);
  }
  return pUVar6;
}

// ShouldAlwaysLockMouse @ 147c83590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::ShouldAlwaysLockMouse(UGameViewportClient *this)

{
  undefined1 *puVar1;
  char cVar2;
  
  cVar2 = (this->OnInputAxisEvent).field_0x4;
  if (cVar2 == '\x02') {
    return true;
  }
  if (((cVar2 == '\x03') &&
      (puVar1 = &(this->EngineShowFlags).field_0x10,
      ZPULL(*(undefined8 *)puVar1,0,1) != 0 ||
      ((this->EngineShowFlags).Wireframe != 0 ||
      ((this->EngineShowFlags).Materials != 0 ||
      ((this->EngineShowFlags).StaticMeshes != 0 ||
      ((this->EngineShowFlags).Landscape != 0 ||
      ((this->EngineShowFlags).LightRadius != 0 ||
      ((this->EngineShowFlags).Fog != 0 ||
      ((this->EngineShowFlags).Volumes != 0 ||
      ((this->EngineShowFlags).Game != 0 ||
      ((this->EngineShowFlags).ActorColoration != 0 ||
      ((this->EngineShowFlags).BSP != 0 ||
      ((this->EngineShowFlags).Collision != 0 ||
      ((this->EngineShowFlags).CollisionVisibility != 0 ||
      ((this->EngineShowFlags).CollisionPawn != 0 ||
      ((this->EngineShowFlags).LightShafts != 0 ||
      ((this->EngineShowFlags).PostProcessMaterial != 0 ||
      ((this->EngineShowFlags).Atmosphere != 0 ||
      ((this->EngineShowFlags).Cloud != 0 ||
      ((this->EngineShowFlags).CameraAspectRatioBars != 0 ||
      ((this->EngineShowFlags).CameraSafeFrames != 0 ||
      ((this->EngineShowFlags).TextRender != 0 ||
      ((this->EngineShowFlags).Rendering != 0 ||
      ((this->EngineShowFlags).HighResScreenshotMask != 0 ||
      ((this->EngineShowFlags).HMDDistortion != 0 ||
      ((this->EngineShowFlags).StereoRendering != 0 ||
      ((this->EngineShowFlags).DistanceCulledPrimitives != 0 ||
      ((this->EngineShowFlags).VisualizeLightCulling != 0 ||
      ((this->EngineShowFlags).PrecomputedVisibility != 0 ||
      ((this->EngineShowFlags).SkyLighting != 0 ||
      ((this->EngineShowFlags).PreviewShadowsIndicator != 0 ||
      ((this->EngineShowFlags).PrecomputedVisibilityCells != 0 ||
      ((this->EngineShowFlags).VisualizeVolumetricLightmap != 0 ||
      ((this->EngineShowFlags).VolumeLightingSamples != 0 ||
      ((this->EngineShowFlags).Paper2DSprites != 0 ||
      ((this->EngineShowFlags).VisualizeDistanceFieldAO != 0 ||
      ((this->EngineShowFlags).VisualizeMeshDistanceFields != 0 ||
      ((this->EngineShowFlags).PhysicsField != 0 ||
      ((this->EngineShowFlags).VisualizeGlobalDistanceField != 0 ||
      ((this->EngineShowFlags).VisualizeLightingOnProbes != 0 ||
      ((this->EngineShowFlags).ScreenSpaceAO != 0 ||
      ((this->EngineShowFlags).DistanceFieldAO != 0 ||
      ((this->EngineShowFlags).LumenGlobalIllumination != 0 ||
      ((this->EngineShowFlags).VolumetricFog != 0 ||
      ((this->EngineShowFlags).VisualizeSSR != 0 ||
      ((this->EngineShowFlags).VisualizeShadingModels != 0 ||
      ((this->EngineShowFlags).VisualizeSenses != 0 ||
      ((this->EngineShowFlags).LODColoration != 0 ||
      ((this->EngineShowFlags).HLODColoration != 0 ||
      ((this->EngineShowFlags).QuadOverdraw != 0 ||
      ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0 ||
      ((this->EngineShowFlags).PrimitiveDistanceAccuracy != 0 ||
      ((this->EngineShowFlags).MeshUVDensityAccuracy != 0 ||
      ((this->EngineShowFlags).MaterialTextureScaleAccuracy != 0 ||
      ((this->EngineShowFlags).OutputMaterialTextureScales != 0 ||
      ((this->EngineShowFlags).RequiredTextureResolution != 0 ||
      ((this->EngineShowFlags).VisualizeVirtualTexture != 0 ||
      ((this->EngineShowFlags).WidgetComponents != 0 ||
      ((this->EngineShowFlags).Bones != 0 ||
      ((this->EngineShowFlags).ServerDrawDebug != 0 ||
      ((this->EngineShowFlags).MediaPlanes != 0 ||
      ((this->EngineShowFlags).VREditing != 0 ||
      ((this->EngineShowFlags).OcclusionMeshes != 0 ||
      ((this->EngineShowFlags).VisualizeInstanceOcclusionQueries != 0 ||
      (this->EngineShowFlags).DisableOcclusionQueries != 0))))))))))))))))))))))))))))))))))))))))))
      )))))))))))))))))))))) &&
     (cVar2 = (**(code **)(*(longlong *)*(undefined8 *)puVar1 + 0x138))(), cVar2 != '\0')) {
    return true;
  }
  return false;
}

// ShouldDPIScaleSceneCanvas @ 147c836b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::ShouldDPIScaleSceneCanvas(UGameViewportClient *this)

{
  return false;
}

// ShouldForceFullscreenViewport @ 147c836c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::ShouldForceFullscreenViewport(UGameViewportClient *this)

{
  UGameInstance *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  APlayerController *pAVar6;
  UEngine *this_01;
  
  if (!GForceFullscreen) {
    if ((this->_padding_ & 0x10) == 0) {
      this_01 = (UEngine *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4868594735687663688>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\GameViewportClient.h"
                         ,0x48,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_01 = (UEngine *)0x0;
    }
    iVar4 = UEngine::GetNumGamePlayers(this_01,this);
    if (iVar4 != 0) {
      lVar5 = (**(code **)(this->_padding_ + 0x180))(this);
      if (lVar5 != 0) {
        if ((*(byte *)(lVar5 + 0x18c) & 0x40) != 0) {
          return true;
        }
        this_00 = (this->GameInstance).field0_0x0.DebugPtr;
        if ((this_00 != (UGameInstance *)0x0) &&
           (pAVar6 = UGameInstance::GetFirstLocalPlayerController(this_00,(UWorld *)0x0),
           pAVar6 != (APlayerController *)0x0)) {
          return pAVar6->bCinematicMode != 0;
        }
      }
      return false;
    }
  }
  return true;
}

// ShowTitleSafeArea @ 147c83a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UGameViewportClient::ShowTitleSafeArea(UGameViewportClient *this)

{
  int iVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      DebugSafeZoneModeCvar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.DebugSafeZone.Mode",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (DebugSafeZoneModeCvar != (IConsoleVariable *)0x0) {
    iVar1 = (**(code **)(*(longlong *)DebugSafeZoneModeCvar + 200))();
    if (iVar1 != 1) {
      IConsoleVariable::Set<int>(DebugSafeZoneModeCvar,1,ECVF_SetByCode,(FName)0x0);
      return;
    }
    IConsoleVariable::Set<int>(DebugSafeZoneModeCvar,0,ECVF_SetByCode,(FName)0x0);
  }
  return;
}

// StaticRegisterNativesUGameViewportClient @ 147c88050

void __cdecl UGameViewportClient::StaticRegisterNativesUGameViewportClient(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGameViewportClient_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147c89810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::Tick(UGameViewportClient *this,float param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TickDelegate,
             (FWriteAccessScope *)local_38);
  puVar1 = &(this->TickDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->TickDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->TickDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->TickDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->TickDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TickDelegate,false);
  }
  if (local_38[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38[0].Accessor,local_38);
  }
  return;
}

// ToggleShowCollision @ 147c89940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::ToggleShowCollision(UGameViewportClient *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  UWorld *pUVar4;
  APlayerController *this_00;
  UObject *pUVar5;
  AActor *this_01;
  code *pcVar6;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined1 local_238 [8];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_230;
  int local_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_218;
  undefined4 local_210;
  uint uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  FName local_200;
  FName local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  int local_1e4;
  FName local_1e0;
  FName local_1d8;
  undefined8 local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FString local_160;
  FString local_150;
  FString local_140;
  longlong *local_130;
  longlong lStack_128;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 uStack_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  FGlobalComponentRecreateRenderStateContext local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  puVar1 = &(this->EngineShowFlags).field_0x10;
  uVar3 = *(undefined4 *)puVar1;
  if ((ZPULL(uVar3,0xb,1) != 0) && ((char)((this->EngineShowFlags).Volumes << 7) < '\0')) {
    *(uint *)&(this->EngineShowFlags).field_0x10 = uVar3 & 0xffffff7f;
    ToggleShowVolumes(this);
  }
  pUVar4 = (this->World).field0_0x0.DebugPtr;
  if (pUVar4 != (UWorld *)0x0) {
    pUVar4->field_0x18c =
         ((char)((uint)uVar3 >> 0xb) << 3 ^ pUVar4->field_0x18c) & 8U ^ pUVar4->field_0x18c;
    FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
              (&local_a8);
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
              (&local_a8);
  }
  if ((this->EngineShowFlags).Collision != 0) {
    UEngine::GetLocalPlayerIterator
              ((UEngine *)this->_padding_,&local_230,(this->World).field0_0x0.DebugPtr);
    for (; pTVar7 = local_230.Container, lVar12 = (longlong)local_230.Index, -1 < local_230.Index;
        local_230.Index = local_230.Index + 1) {
      iVar11 = (local_230.Container)->ArrayNum;
      if (iVar11 <= local_230.Index) break;
      uVar14 = 0;
      if (local_230.Index < iVar11) {
        uVar14 = (uint)~local_230.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_248 = lVar12, local_240 = (longlong)iVar11,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((pTVar7->AllocatorInstance).Data + lVar12 * 8) != 0) break;
    }
LAB_147c89a90:
    pTVar7 = local_230.Container;
    lVar12 = (longlong)local_230.Index;
    if (-1 < local_230.Index) {
      iVar11 = (local_230.Container)->ArrayNum;
      if (iVar11 <= local_230.Index) {
        return;
      }
      uVar14 = 0;
      if (local_230.Index < iVar11) {
        uVar14 = (uint)~local_230.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_248 = lVar12, local_240 = (longlong)iVar11,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(APlayerController **)
                 (*(longlong *)((pTVar7->AllocatorInstance).Data + lVar12 * 8) + 0x30);
      if (this_00 != (APlayerController *)0x0) {
        pUVar5 = (UObject *)this_00->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar5 == (UObject *)0x0) goto LAB_147c89fc3;
          UE::GC::MarkAsReachable(pUVar5);
        }
        if (pUVar5 != (UObject *)0x0) {
          pUVar5 = (UObject *)this_00->_padding_;
          local_200.ComparisonIndex.Value = 0;
          local_200.Number = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          local_1e0.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
          local_1e0.Number = *(uint *)&pUVar5->field_0x1c;
          ::FName::ToString(&local_1e0,&local_1c0);
          ::FString::PrintfImpl(&local_160,L"!!!! Player Pawn %s Collision Info !!!!");
          APlayerController::ClientMessage(this_00,&local_160,local_200,0.0);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          pUVar5 = (UObject *)this_00->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          lVar12 = (**(code **)(*(longlong *)pUVar5 + 0x768))(pUVar5);
          if (lVar12 != 0) {
            pUVar5 = (UObject *)this_00->_padding_;
            local_1f8.ComparisonIndex.Value = 0;
            local_1f8.Number = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            lVar12 = (**(code **)(*(longlong *)pUVar5 + 0x768))(pUVar5);
            local_1d8 = *(FName *)(lVar12 + 0x18);
            ::FName::ToString(&local_1d8,&local_1b0);
            ::FString::PrintfImpl(&local_150,L"Base %s");
            APlayerController::ClientMessage(this_00,&local_150,local_1f8,0.0);
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
          }
          this_01 = (AActor *)this_00->_padding_;
          local_f8._0_8_ = 0;
          local_f8._8_8_ = 0;
          local_d8 = (uint *)0x0;
          local_d0 = 0;
          local_cc = 0x80;
          local_c8 = 0xffffffff;
          local_c4 = 0;
          local_b8 = (ForElementType<FSetElementId>)0x0;
          local_b0 = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          local_1d0 = 0;
          AActor::GetOverlappingActors
                    (this_01,(TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)
                             local_f8,(TSubclassOf<AActor>)&local_1d0);
          uVar14 = local_d0;
          pTStack_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
          local_220 = 0;
          uStack_21c = 1;
          uStack_20c = 0;
          iStack_208 = 0;
          if (local_d0 != 0) {
            puVar15 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar15 = local_d8;
            }
            uVar13 = *puVar15;
            while (uVar13 == 0) {
              iStack_208 = iStack_208 + 0x20;
              lVar12 = (longlong)local_220;
              local_220 = local_220 + 1;
              if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_220) {
                uStack_20c = local_d0;
                goto LAB_147c89db6;
              }
              uVar13 = puVar15[lVar12 + 1];
            }
            uStack_21c = -uVar13 & uVar13;
            uVar2 = (ulonglong)uStack_21c * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_1e8 = (int)lVar12;
            uStack_20c = local_1e8 + -1 + iStack_208;
            if ((int)local_d0 < (int)uStack_20c) {
              uStack_20c = local_d0;
            }
          }
LAB_147c89db6:
          local_210 = 0xffffffff;
          TStack_188._padding_ = CONCAT44(uStack_21c,local_220);
          local_190 = (longlong *)local_f8;
          TStack_188.CurrentBitIndex = uStack_20c;
          TStack_188.UnvisitedBitMask = 0xffffffff;
          TStack_188._28_4_ = uStack_204;
          TStack_188.BaseBitIndex = iStack_208;
          local_108 = local_f8._8_4_ - local_c4;
          uVar13 = local_d0 & 0xffffffe0;
          iVar11 = (int)local_d0 >> 5;
          bVar10 = (byte)local_d0;
          uStack_168 = CONCAT44(uStack_104,local_108);
          TStack_188.Array = pTStack_218;
          local_130 = local_190;
          lStack_128 = TStack_188._padding_;
          pTStack_120 = pTStack_218;
          uStack_118 = TStack_188._16_8_;
          uStack_110 = TStack_188._24_8_;
          if (((int)local_d0 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar14 != local_d0) {
            puVar15 = (uint *)(local_f8 + 0x10);
            if (local_d8 != (uint *)0x0) {
              puVar15 = local_d8;
            }
            uVar14 = -1 << (bVar10 & 0x1f) & puVar15[iVar11];
            while (uVar14 == 0) {
              lVar12 = (longlong)iVar11;
              uVar13 = uVar13 + 0x20;
              iVar11 = iVar11 + 1;
              uVar14 = local_d0;
              if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
              goto LAB_147c89ec0;
              uVar14 = puVar15[lVar12 + 1];
            }
            uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_1e4 = (int)lVar12;
            uVar14 = local_1e4 + -1 + uVar13;
            if ((int)local_d0 < (int)uVar14) {
              uVar14 = local_d0;
            }
          }
LAB_147c89ec0:
          while( true ) {
            plVar8 = local_190;
            if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
              local_238[0] = 0;
              `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
            }
            if (((TStack_188.CurrentBitIndex == uVar14) &&
                (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
               (plVar8 == (longlong *)local_f8)) break;
            local_1f0 = 0;
            local_1c8 = *(FName *)(*(longlong *)
                                    (*plVar8 + (longlong)TStack_188.CurrentBitIndex * 0x10) + 0x18);
            ::FName::ToString(&local_1c8,&local_1a0);
            ::FString::PrintfImpl(&local_140,L"Touching %d: %s");
            APlayerController::ClientMessage(this_00,&local_140,(FName)0x0,0.0);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
          }
          local_b0 = 0;
          if (local_b8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_b8);
          }
          TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f8);
        }
      }
LAB_147c89fc3:
      do {
        pTVar7 = local_230.Container;
        uVar14 = local_230.Index + 1;
        local_230.Index = uVar14;
        if (((int)uVar14 < 0) || ((local_230.Container)->ArrayNum <= (int)uVar14)) break;
        if ((int)uVar14 < 0) {
          local_248 = (longlong)(int)uVar14;
          local_240 = (longlong)(local_230.Container)->ArrayNum;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      } while (*(longlong *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) == 0);
      goto LAB_147c89a90;
    }
  }
  return;
}

// ToggleShowVolumes @ 147c8a090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameViewportClient::ToggleShowVolumes(UGameViewportClient *this)

{
  undefined1 *puVar1;
  int iVar2;
  USceneComponent *this_00;
  AActor *this_01;
  FSceneInterface *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  FSceneInterface *pFVar10;
  UWorld *this_02;
  longlong lVar11;
  TObjectIterator<UBrushComponent> local_28;
  
  if ((this->EngineShowFlags).Volumes == 1 && (this->EngineShowFlags).Collision == 1) {
    (this->EngineShowFlags).Collision = 0;
    ToggleShowCollision(this);
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UBrushComponent_NoRegister();
  GetObjectsOfClass(pUVar9,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UBrushComponent>::Advance(&local_28);
  while( true ) {
    lVar11 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar8 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = *(USceneComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    this_01 = (AActor *)this_00->_padding_;
    if (this_01 != (AActor *)0x0) {
      pUVar9 = Z_Construct_UClass_AVolume_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) {
        lVar11 = (**(code **)(this->_padding_ + 0x180))(this);
        pFVar3 = *(FSceneInterface **)(lVar11 + 600);
        pFVar10 = UActorComponent::GetScene((UActorComponent *)this_00);
        if (pFVar10 == pFVar3) {
          bVar5 = FActorEditorUtils::IsABuilderBrush(this_01);
          if (!bVar5) {
            this_02 = AActor::GetWorld(this_01);
            bVar5 = UWorld::IsGameWorld(this_02);
            if (!bVar5) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Owner->GetWorld()->IsGameWorld()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                                 ,0xed6,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            cVar6 = (**(code **)(this_00->_padding_ + 0x560))(this_00);
            if (cVar6 == '\0') {
              USceneComponent::SetVisibility(this_00,true,DirtyOnly);
            }
            else {
              USceneComponent::SetVisibility(this_00,false,DirtyOnly);
            }
            USceneComponent::SetHiddenInGame(this_00,cVar6 != '\0',DirtyOnly);
          }
        }
      }
    }
    TObjectIterator<UBrushComponent>::Advance(&local_28);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// TryToggleFullscreenOnInputKey @ 147c8d430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameViewportClient::TryToggleFullscreenOnInputKey
          (UGameViewportClient *this,FKey *param_1,EInputEvent param_2)

{
  FModifierKeysState FVar1;
  FSlateApplication *pFVar2;
  undefined6 extraout_var;
  UInputSettings *pUVar3;
  undefined6 extraout_var_00;
  
  if ((param_1->KeyName == EKeys::Enter.KeyName) && (param_2 == IE_Pressed)) {
    pFVar2 = FSlateApplication::Get();
    FVar1 = FSlateApplication::GetModifierKeys(pFVar2);
    if (((*(byte *)CONCAT62(extraout_var,FVar1) & 0x30) != 0) &&
       (pUVar3 = GetDefault<UInputSettings>(), pUVar3->bAltEnterTogglesFullscreen != 0))
    goto LAB_147c8d4c5;
  }
  if (((param_1->KeyName == EKeys::F11.KeyName) && (param_2 == IE_Pressed)) &&
     (pUVar3 = GetDefault<UInputSettings>(), pUVar3->bF11TogglesFullscreen != '\0')) {
    pFVar2 = FSlateApplication::Get();
    FVar1 = FSlateApplication::GetModifierKeys(pFVar2);
    if ((*(ushort *)CONCAT62(extraout_var_00,FVar1) & 0x30) == 0 ||
        (*(ushort *)CONCAT62(extraout_var_00,FVar1) & 0xc) == 0) {
LAB_147c8d4c5:
      HandleToggleFullscreenCommand(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// UpdateActiveSplitscreenType @ 147c8e3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::UpdateActiveSplitscreenType(UGameViewportClient *this)

{
  char cVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorld *pUVar6;
  UClass *this_00;
  uchar uVar7;
  
  uVar7 = '\0';
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  iVar5 = UEngine::GetNumGamePlayers(GEngine,pUVar6);
  this_00 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((((pUVar2[2].field_0x8 == '\0') || (this->bDisableSplitScreenOverride != false)) ||
      (iVar5 == 0)) || (uVar7 = '\0', iVar5 == 1)) goto LAB_147c8e50e;
  if (iVar5 == 2) {
    if (pUVar2[2].field_0x9 == '\0') {
      uVar7 = '\x01';
      goto LAB_147c8e50e;
    }
    if (pUVar2[2].field_0x9 == '\x01') {
      uVar7 = '\x02';
      goto LAB_147c8e50e;
    }
    iVar5 = 0xb10;
  }
  else if (iVar5 == 3) {
    cVar1 = pUVar2[2].field_0xa;
    if (cVar1 == '\0') {
      uVar7 = '\x03';
      goto LAB_147c8e50e;
    }
    if (cVar1 == '\x01') {
      uVar7 = '\x04';
      goto LAB_147c8e50e;
    }
    if (cVar1 == '\x02') {
      uVar7 = '\x05';
      goto LAB_147c8e50e;
    }
    if (cVar1 == '\x03') {
      uVar7 = '\x06';
      goto LAB_147c8e50e;
    }
    iVar5 = 0xb28;
  }
  else {
    if (iVar5 != 4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6788966895396582611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                         ,0xb2d,"NumPlayers == 4");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    cVar1 = pUVar2[2].field_0xb;
    if (cVar1 == '\0') {
      uVar7 = '\a';
      goto LAB_147c8e50e;
    }
    if (cVar1 == '\x01') {
      uVar7 = '\b';
      goto LAB_147c8e50e;
    }
    if (cVar1 == '\x02') {
      uVar7 = '\t';
      goto LAB_147c8e50e;
    }
    iVar5 = 0xb3d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                     ,iVar5,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147c8e50e:
  (this->ActiveSplitscreenType).Value = uVar7;
  return;
}

// UpdateCsvCameraStats @ 147c8e540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameViewportClient::UpdateCsvCameraStats
          (UGameViewportClient *this,
          TMap<ULocalPlayer_*,FSceneView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>_>
          *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ULocalPlayer *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  FCsvLocalPlayer *pFVar20;
  FString *pFVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  uint local_res8 [2];
  FString local_148;
  TMap<ULocalPlayer_*,FSceneView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  TMap<ULocalPlayer_*,FSceneView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULocalPlayer_*,FSceneView_*,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  FString local_e0;
  FString local_d0 [10];
  
  bVar10 = false;
  bVar15 = false;
  local_res8[0] = 0;
  lVar18 = (**(code **)(this->_padding_ + 0x180))();
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar12 = __real_322bcc77;
  dVar11 = __real_3ff0000000000000;
  if ((this->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6788966895396585254>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameViewportClient.cpp"
                        ,0xda,"World");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    iStack_130 = 0;
    iVar24 = *(int *)&param_1->field_0x28;
    local_118 = 0;
    local_128 = &param_1->field_0x10;
    uStack_12c = 1;
    iStack_11c = 0;
    if (iVar24 != 0) {
      puVar19 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_128;
      }
      uVar17 = *puVar19;
      while (uVar17 == 0) {
        lVar22 = (longlong)iStack_130;
        local_118 = local_118 + 0x20;
        iStack_130 = iStack_130 + 1;
        iStack_11c = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
        goto LAB_147c8e64b;
        uVar17 = puVar19[lVar22 + 1];
      }
      uStack_12c = -uVar17 & uVar17;
      uVar1 = (ulonglong)uStack_12c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iStack_11c = local_118 + -1 + (int)lVar22;
      if (iVar24 < iStack_11c) {
        iStack_11c = iVar24;
      }
    }
LAB_147c8e64b:
    uStack_120 = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
    TStack_100.UnvisitedBitMask = 0xffffffff;
    TStack_100._28_4_ = iStack_11c;
    TStack_100.BaseBitIndex = local_118;
    local_138 = param_1;
    iStack_114 = iStack_11c;
    local_108 = param_1;
    TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
    TStack_100.CurrentBitIndex = iStack_11c;
    if (iStack_11c < iVar24) {
      do {
        this_00 = *(ULocalPlayer **)
                   (*(longlong *)local_108 + (longlong)TStack_100.CurrentBitIndex * 0x18);
        lVar22 = *(longlong *)
                  (*(longlong *)local_108 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18);
        local_res8[0] = ConvertLocalPlayerToGamePlayerIndex(this,this_00);
        if (local_res8[0] != 0xffffffff) {
          iVar25 = GCsvLocalPlayers._52_4_;
          iVar24 = GCsvLocalPlayers._8_4_;
          if (iVar24 != iVar25) {
            lVar23 = 0x154c438d8;
            if (GCsvLocalPlayers._64_8_ != 0) {
              lVar23 = GCsvLocalPlayers._64_8_;
            }
            uVar17 = *(uint *)(lVar23 + (ulonglong)(GCsvLocalPlayers._72_4_ - 1 & local_res8[0]) * 4
                              );
            while (uVar17 != 0xffffffff) {
              puVar19 = (uint *)((longlong)(int)uVar17 * 0x38 + GCsvLocalPlayers._0_8_);
              if (*puVar19 == local_res8[0]) {
                if (puVar19 != (uint *)0x0) {
                  pFVar20 = (FCsvLocalPlayer *)(puVar19 + 2);
                  goto LAB_147c8e7cd;
                }
                break;
              }
              uVar17 = puVar19[0xc];
            }
          }
          pFVar20 = TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
                    ::EmplaceByHash<unsigned_int_const_&>
                              ((TMapBase<unsigned_int,FCsvLocalPlayer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FCsvLocalPlayer,0>_>
                                *)&GCsvLocalPlayers,local_res8[0],local_res8);
          iVar25 = GCsvLocalPlayers._52_4_;
          iVar24 = GCsvLocalPlayers._8_4_;
LAB_147c8e7cd:
          if (pFVar20->CategoryIndex == 0xffffffff) {
            bVar16 = ULocalPlayer::IsPrimaryPlayer(this_00);
            if (bVar16) {
              bVar10 = true;
              pFVar21 = ::FString::FString(local_d0,L"View");
            }
            else {
              bVar15 = true;
              ::FString::PrintfImpl(&local_e0,L"View%d");
              pFVar21 = &local_e0;
            }
            local_148.Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
            (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.Data.ArrayNum = (pFVar21->Data).ArrayNum;
            local_148.Data.ArrayMax = (pFVar21->Data).ArrayMax;
            (pFVar21->Data).ArrayNum = 0;
            (pFVar21->Data).ArrayMax = 0;
            if ((bVar15) &&
               (bVar15 = false,
               local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if ((bVar10) &&
               (bVar10 = false,
               local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
            }
            FCsvProfiler::Get();
            uVar17 = FCsvProfiler::RegisterCategory(&local_148,iVar24 - iVar25 == 1,false);
            pFVar20->CategoryIndex = uVar17;
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          dVar8 = *(double *)(lVar22 + 0xbc8);
          dVar9 = *(double *)(lVar22 + 0xbd0);
          uVar17 = pFVar20->CategoryIndex;
          dVar2 = *(double *)(lVar18 + 0x908);
          dVar3 = *(double *)(lVar22 + 0xbd8);
          dVar4 = (pFVar20->PrevViewOrigin).field0_0x0._s_0.X;
          dVar5 = (pFVar20->PrevViewOrigin).field0_0x0._s_0.Y;
          dVar6 = (pFVar20->PrevViewOrigin).field0_0x0._s_0.Z;
          (pFVar20->PrevViewOrigin).field0_0x0._s_0.X = dVar8;
          (pFVar20->PrevViewOrigin).field0_0x0._s_0.Y = dVar9;
          (pFVar20->PrevViewOrigin).field0_0x0._s_0.Z = dVar3;
          uVar14 = GFrameNumber;
          fVar28 = (float)dVar2 - pFVar20->PrevTime;
          pFVar20->PrevTime = (float)dVar2;
          pFVar20->LastFrame = uVar14;
          FCsvProfiler::RecordCustomStat("PosX",uVar17,dVar8,Set);
          FCsvProfiler::RecordCustomStat("PosY",pFVar20->CategoryIndex,dVar9,Set);
          FCsvProfiler::RecordCustomStat("PosZ",pFVar20->CategoryIndex,dVar3,Set);
          if (fVar12 < (float)((uint)fVar28 & uVar13)) {
            auVar26._0_8_ = (double)fVar28;
            auVar26._8_8_ = 0;
            dVar2 = dVar11 / auVar26._0_8_;
            dVar6 = (dVar3 - dVar6) * dVar2;
            dVar3 = (dVar9 - dVar5) * dVar2;
            dVar2 = (dVar8 - dVar4) * dVar2;
            dVar2 = dVar3 * dVar3 + dVar2 * dVar2;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar6 * dVar6 + dVar2;
            auVar27 = sqrtpd(auVar26,auVar27);
            FCsvProfiler::RecordCustomStat("Speed",pFVar20->CategoryIndex,(float)auVar27._0_8_,Set);
            FCsvProfiler::RecordCustomStat("Speed2D",pFVar20->CategoryIndex,(float)SQRT(dVar2),Set);
          }
          dVar2 = *(double *)(lVar22 + 0x8e0);
          dVar3 = *(double *)(lVar22 + 0x900);
          dVar4 = *(double *)(lVar22 + 0x8b8);
          dVar5 = *(double *)(lVar22 + 0x8d8);
          dVar6 = *(double *)(lVar22 + 0x8f8);
          FCsvProfiler::RecordCustomStat
                    ("ForwardX",pFVar20->CategoryIndex,*(double *)(lVar22 + 0x8c0),Set);
          FCsvProfiler::RecordCustomStat("ForwardY",pFVar20->CategoryIndex,dVar2,Set);
          FCsvProfiler::RecordCustomStat("ForwardZ",pFVar20->CategoryIndex,dVar3,Set);
          FCsvProfiler::RecordCustomStat("UpX",pFVar20->CategoryIndex,dVar4,Set);
          FCsvProfiler::RecordCustomStat("UpY",pFVar20->CategoryIndex,dVar5,Set);
          FCsvProfiler::RecordCustomStat("UpZ",pFVar20->CategoryIndex,dVar6,Set);
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
    }
  }
  return;
}

// UpdateViewportClientWindowDPIScale @ 147c8f130

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UGameViewportClient::UpdateViewportClientWindowDPIScale(UGameViewportClient *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TSharedPtr<FGenericWindow,1> *pTVar4;
  ForElementType<unsigned_int> FVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> this_00;
  ForElementType<unsigned_int> FVar7;
  bool bVar8;
  float fVar9;
  TSharedPtr<FGenericWindow,1> local_38;
  TSharedPtr<FGenericWindow,1> local_28 [2];
  
  FVar6 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<unsigned_int>)0x0;
  this_00 = FVar7;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    iVar2 = *(int *)((longlong)FVar6 + 8);
    fVar9 = __real_3f800000;
    do {
      FVar5 = FVar7;
      __real_3f800000 = fVar9;
      if (iVar2 == 0) goto LAB_147c8f18d;
      LOCK();
      iVar3 = *(int *)((longlong)FVar6 + 8);
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)((longlong)FVar6 + 8) = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
      fVar9 = __real_3f800000;
    } while (!bVar8);
    this_00 = *(ForElementType<unsigned_int> *)
               ((this->EngineShowFlags).CustomShowFlags.AllocatorInstance.InlineData + 8);
  }
  fVar9 = __real_3f800000;
  FVar5 = FVar6;
  if (this_00 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)0x1;
    pTVar4 = SWindow::GetNativeWindow((SWindow *)this_00,&local_38);
    if (pTVar4->Object != (FGenericWindow *)0x0) {
      bVar8 = true;
      goto LAB_147c8f190;
    }
  }
LAB_147c8f18d:
  bVar8 = false;
  FVar6 = FVar5;
LAB_147c8f190:
  if (FVar7 != (ForElementType<unsigned_int>)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    if ((this_00 == (ForElementType<unsigned_int>)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      fVar9 = (float)(*pcVar1)();
      return fVar9;
    }
    pTVar4 = SWindow::GetNativeWindow((SWindow *)this_00,local_28);
    if ((pTVar4->Object == (FGenericWindow *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      fVar9 = (float)(*pcVar1)();
      return fVar9;
    }
    fVar9 = (float)(**(code **)(pTVar4->Object->_padding_ + 0xf8))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar6);
  return fVar9;
}

// VerifyPathRenderingComponents @ 147c8fce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameViewportClient::VerifyPathRenderingComponents(UGameViewportClient *this)

{
  undefined4 uVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (pUVar2 != (UWorld *)0x0) {
    FNavigationSystem::VerifyNavigationRenderingComponents
              (pUVar2,(this->EngineShowFlags).Navigation);
    return;
  }
  return;
}

// WindowCloseRequested @ 147c8fea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameViewportClient::WindowCloseRequested(UGameViewportClient *this)

{
  undefined1 *this_00;
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  this_00 = &(this->CursorWidgets).field_0x48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if (((*(int *)&this->CloseRequestedDelegate == 0) ||
      (*(longlong **)&this->bUseSoftwareCursorWidgets == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)&this->bUseSoftwareCursorWidgets + 0x38))(), cVar1 == '\0'
     )) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if (*(int *)&this->CloseRequestedDelegate == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&this->bUseSoftwareCursorWidgets;
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (cVar1 != '\0') {
    return true;
  }
  return false;
}

// execSSSwapControllers @ 147c9dcb0

void __cdecl
UGameViewportClient::execSSSwapControllers(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9dcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execSetConsoleTarget @ 147c9e4a0

void __cdecl
UGameViewportClient::execSetConsoleTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8[0]);
  return;
}

// execShowTitleSafeArea @ 147ca05f0

void __cdecl
UGameViewportClient::execShowTitleSafeArea(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ca0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

// operator() @ 15051abb0

bool __thiscall `UGameViewportClient::Draw'::__l73::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6788966895396583874>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6788966895396583874>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051ac00

bool __thiscall `UGameViewportClient::ProcessScreenShots'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6788966895396583091>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6788966895396583091>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051ac40

bool __thiscall `UGameViewportClient::ProcessScreenShots'::__l25::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6788966895396583064>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_38,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_48,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_28,L"Min=(%s) Max=(%s)");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6788966895396583064>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051ad63;
    }
  }
  bVar2 = false;
LAB_15051ad63:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15051ada0

bool __thiscall `UGameViewportClient::ProcessScreenShots'::__l41::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6788966895396583039>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6788966895396583039>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051adf0

bool __thiscall `UGameViewportClient::ProcessScreenShots'::__l66::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6788966895396582969>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6788966895396582969>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

