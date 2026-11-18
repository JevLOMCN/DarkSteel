// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// FUMGViewportClient @ 146988430

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

FUMGViewportClient * __thiscall
FUMGViewportClient::FUMGViewportClient(FUMGViewportClient *this,FPreviewScene *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  undefined8 *puVar9;
  UWorld *pUVar10;
  Type TVar11;
  
  this->_padding_ = (longlong)&___7FCommonViewportClient__6B_;
  puVar9 = ::operator_new(0x18);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
  }
  this->_padding_ = (longlong)puVar9;
  this->_padding_ = (longlong)puVar9;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  (this->ViewInfo).bConstrainAspectRatio = 0;
  (this->ViewInfo).bUseFirstPersonParameters = 0;
  (this->ViewInfo).bUseFieldOfViewForLOD = 1;
  this->_padding_ = (longlong)&_vftable__for__FViewElementDrawer__;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->PreviewScene = param_1;
  (this->ViewInfo).Location.field0_0x0._s_0.X = 0.0;
  (this->ViewInfo).Location.field0_0x0._s_0.Y = 0.0;
  (this->ViewInfo).Location.field0_0x0._s_0.Z = 0.0;
  (this->ViewInfo).Rotation.Pitch = 0.0;
  (this->ViewInfo).Rotation.Yaw = 0.0;
  (this->ViewInfo).Rotation.Roll = 0.0;
  (this->ViewInfo).FOV = 90.0;
  (this->ViewInfo).DesiredFOV = 90.0;
  (this->ViewInfo).FirstPersonFOV = 90.0;
  (this->ViewInfo).FirstPersonScale = 1.0;
  (this->ViewInfo).OrthoWidth = 512.0;
  (this->ViewInfo).bAutoCalculateOrthoPlanes = true;
  (this->ViewInfo).AutoPlaneShift = 0.0;
  (this->ViewInfo).bUpdateOrthoPlanes = false;
  (this->ViewInfo).bUseCameraHeightAsViewTarget = false;
  (this->ViewInfo).OrthoNearClipPlane = 0.0;
  (this->ViewInfo).OrthoFarClipPlane = 2097152.0;
  (this->ViewInfo).PerspectiveNearClipPlane = -1.0;
  (this->ViewInfo).AspectRatio = 1.3333334;
  (this->ViewInfo).AspectRatioAxisConstraint.bIsSet = false;
  (this->ViewInfo).ProjectionMode.Value = '\0';
  (this->ViewInfo).PostProcessBlendWeight = 0.0;
  FPostProcessSettings::FPostProcessSettings(&(this->ViewInfo).PostProcessSettings);
  (this->ViewInfo).PreviousViewTransform.bIsSet = false;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X = 0.0;
  (this->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y = 0.0;
  (this->ViewInfo).OverscanResolutionFraction = 1.0;
  (this->ViewInfo).CropFraction = 1.0;
  (this->ViewInfo).AsymmetricCropFraction.field0_0x0._s_0.X = 1.0;
  (this->ViewInfo).AsymmetricCropFraction.field0_0x0._s_0.Y = 1.0;
  (this->ViewInfo).AsymmetricCropFraction.field0_0x0._s_0.Z = 1.0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricCropFraction.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->ViewInfo).AsymmetricOverscan.field0_0x0 + 8) = 0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Y = (double)uVar5;
  (this->ViewInfo).CameraToViewTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ViewTransform).TransitionStartTime = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewTransform).ViewLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewTransform).ViewLocation.field0_0x0._s_0.Y = (double)uVar5;
  (this->ViewTransform).ViewLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ViewTransform).ViewRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ViewTransform).ViewRotation.Yaw = dVar8;
  (this->ViewTransform).ViewRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewTransform).DesiredLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewTransform).DesiredLocation.field0_0x0._s_0.Y = (double)uVar5;
  (this->ViewTransform).DesiredLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewTransform).LookAt.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewTransform).LookAt.field0_0x0._s_0.Y = (double)uVar5;
  (this->ViewTransform).LookAt.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewTransform).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewTransform).StartLocation.field0_0x0._s_0.Y = (double)uVar5;
  (this->ViewTransform).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ViewTransform).OrthoZoom = 10000.0;
  this->Viewport = (FViewport *)0x0;
  (this->ViewState)._padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  (this->ViewState).Reference = (FSceneViewStateInterface *)0x0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).GlobalListLink._padding_ = 0;
  (this->ViewState).ShareOriginTarget = (FSceneViewStateReference *)0x0;
  uVar6 = _UNK_15060db28;
  uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->EngineShowFlags;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ViewState).ShareOriginRefCount = 0;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar5;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar6;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar5;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar6;
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
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
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
  puVar1 = &(this->EngineShowFlags).field_0x10;
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
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  if (pcVar4 == GetWorld) {
    pUVar10 = GetWorld(this);
  }
  else {
    pUVar10 = (UWorld *)(*pcVar4)();
  }
  TVar11 = GMaxRHIFeatureLevel;
  if ((pUVar10 != (UWorld *)0x0) && (pUVar10->Scene != (FSceneInterface *)0x0)) {
    TVar11 = pUVar10->Scene->FeatureLevel;
  }
  FSceneViewStateReference::Allocate(&this->ViewState,TVar11);
  fVar7 = FLinearColor::sRGBToLinearTable[0x37];
  (this->BackgroundColor).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0x37];
  (this->BackgroundColor).field0_0x0._s_0.G = fVar7;
  (this->BackgroundColor).field0_0x0._s_0.B = fVar7;
  (this->BackgroundColor).field0_0x0._s_0.A = 1.0;
  return this;
}

// ~FUMGViewportClient @ 1469922b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FUMGViewportClient::~FUMGViewportClient(FUMGViewportClient *this)

{
  UWorld *this_00;
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FCommonViewportClient__;
  this->_padding_ = (longlong)&_vftable__for__FViewElementDrawer__;
  this_00 = (this->PreviewScene->PreviewWorld).field0_0x0.DebugPtr;
  if (this_00 != (UWorld *)0x0) {
    UWorld::EndPlay(this_00,RemovedFromWorld);
  }
  FVar1 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FSceneViewStateReference::~FSceneViewStateReference(&this->ViewState);
  pFVar2 = (this->ViewInfo).PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FCommonViewportClient::~FCommonViewportClient((FCommonViewportClient *)this);
  return;
}

// CalcSceneView @ 1469a5540

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

FSceneView * __thiscall
FUMGViewportClient::CalcSceneView(FUMGViewportClient *this,FSceneViewFamily *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  TInverseRotationMatrix<double> *pTVar7;
  UClass *this_00;
  FSceneView *this_01;
  FSceneView *pFVar8;
  undefined1 auStackY_588 [32];
  FSceneView *local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined8 local_528;
  undefined4 local_520;
  undefined4 uStack_51c;
  TVector<double>_u_0 local_518;
  TVector<double>_u_0 local_4f8;
  TMatrix<double> local_4d8;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  FSceneViewFamily *local_3a0;
  FSceneViewStateInterface *local_398;
  undefined8 uStack_390;
  FSceneViewOwner local_388;
  undefined4 local_378;
  longlong *local_370;
  FLinearColor_u_0 local_368;
  FLinearColor_u_0 local_358;
  FLinearColor_u_0 local_348;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  TBitArray<FDefaultBitArrayAllocator> local_2e8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  ForAnyElementType local_2a8;
  undefined4 local_2a0;
  int local_29c;
  TBitArray<FDefaultBitArrayAllocator> local_298;
  undefined4 local_278;
  undefined4 local_274;
  void *local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined5 uStack_220;
  undefined3 uStack_21b;
  undefined4 local_218;
  undefined2 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  TInverseRotationMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pFVar8 = (FSceneView *)0x0;
  local_4d8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_4d8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_3e8 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_3e0 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_398 = (FSceneViewStateInterface *)0x0;
  uStack_390 = 0;
  local_4f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_4f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4d8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_4d8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_4d8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_4d8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_4d8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_4d8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_4d8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_4d8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_4d8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_4d8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_4d8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_4d8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_4d8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_4d8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_458 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_450 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_448 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_440 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_438 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_430 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_428 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_420 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_418 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_410 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_408 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_400 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_3f8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_3f0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_3c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_3b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = (FSceneViewFamily *)0x0;
  FSceneViewOwner::FSceneViewOwner(&local_388,(AActor *)0x0);
  local_378 = 0xffffffff;
  local_370 = (longlong *)0x0;
  local_368 = FLinearColor::Transparent.field0_0x0;
  local_358 = FLinearColor::Transparent.field0_0x0;
  local_338 = 0;
  local_238 = 0;
  local_348 = FLinearColor::White.field0_0x0;
  local_318 = 0;
  uStack_310 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_334 = 0xffffffff;
  local_330 = 0x42c80000;
  local_328 = 0;
  uStack_320 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  local_2e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2e8.NumBits = 0;
  local_2e8.MaxBits = 0x80;
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_29c = -1;
  local_298.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_298.NumBits = 0;
  local_298.MaxBits = 0x80;
  local_278 = 0xffffffff;
  local_274 = 0;
  local_268 = (void *)0x0;
  local_260 = 0;
  local_258 = 0xffffffffffffffff;
  local_250 = 0x3f800000;
  local_24c = 0xbf800000;
  local_230 = 0x100;
  local_22c = 0x42b40000;
  _local_228 = CONCAT44(0x3f800000,(int)___xmm_00000000000000000000000042b40000);
  _uStack_220 = CONCAT35((int3)((ulonglong)_UNK_150ee30d8 >> 0x28),0x3f800000);
  local_218 = 0;
  local_214 = 0;
  local_210 = 0xbf800000;
  local_20c = 0x3f800000;
  local_208 = 0x3f800000;
  local_1f8 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_1f0 = _UNK_15076b1f8;
  (**(code **)(this->Viewport->_padding_ + 0x28))(this->Viewport,&local_530);
  local_4f8._s_0.X = (this->ViewTransform).ViewLocation.field0_0x0._s_0.X;
  local_4f8._s_0.Y = (this->ViewTransform).ViewLocation.field0_0x0._s_0.Y;
  local_520 = local_530;
  local_4f8._s_0.Z = (this->ViewTransform).ViewLocation.field0_0x0._s_0.Z;
  uStack_51c = local_52c;
  local_3d8 = 0;
  local_3b0 = 0;
  local_528 = 0;
  pTVar7 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                     (&local_e8,&(this->ViewTransform).ViewRotation);
  local_1e8.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_1e8.M[2][1] = _UNK_15061cbc8;
  local_1e8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1e8.M[3][3] = _UNK_15061cbc8;
  local_4d8.M[0][0] = *(double *)pTVar7;
  local_4d8.M[0][1] = *(double *)&pTVar7->field_0x8;
  local_4d8.M[0][2] = *(double *)&pTVar7->field_0x10;
  local_4d8.M[0][3] = *(double *)&pTVar7->field_0x18;
  local_4d8.M[1][0] = *(double *)&pTVar7->field_0x20;
  local_4d8.M[1][1] = *(double *)&pTVar7->field_0x28;
  local_4d8.M[1][2] = *(double *)&pTVar7->field_0x30;
  local_4d8.M[1][3] = *(double *)&pTVar7->field_0x38;
  local_4d8.M[2][0] = *(double *)&pTVar7->field_0x40;
  local_4d8.M[2][1] = *(double *)&pTVar7->field_0x48;
  local_4d8.M[2][2] = *(double *)&pTVar7->field_0x50;
  local_4d8.M[2][3] = *(double *)&pTVar7->field_0x58;
  local_4d8.M[3][0] = *(double *)&pTVar7->field_0x60;
  local_4d8.M[3][1] = *(double *)&pTVar7->field_0x68;
  local_4d8.M[3][2] = *(double *)&pTVar7->field_0x70;
  local_4d8.M[3][3] = *(double *)&pTVar7->field_0x78;
  local_1e8.M[0][0] = 0.0;
  local_1e8.M[0][1] = 0.0;
  local_1e8.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_1e8.M[0][3] = _UNK_150689518;
  local_1e8.M[1][0] = ___xmm_00000000000000003ff0000000000000;
  local_1e8.M[1][1] = _UNK_150689518;
  local_1e8.M[3][0] = 0.0;
  local_1e8.M[3][1] = 0.0;
  local_1e8.M[1][2] = 0.0;
  local_1e8.M[1][3] = 0.0;
  local_1e8.M[2][2] = 0.0;
  local_1e8.M[2][3] = 0.0;
  VectorMatrixMultiply(&local_168,&local_4d8,&local_1e8);
  local_4d8.M[0][0] = local_168.M[0][0];
  local_4d8.M[0][1] = local_168.M[0][1];
  local_4d8.M[0][2] = local_168.M[0][2];
  local_4d8.M[0][3] = local_168.M[0][3];
  local_4d8.M[1][0] = local_168.M[1][0];
  local_4d8.M[1][1] = local_168.M[1][1];
  local_4d8.M[1][2] = local_168.M[1][2];
  local_4d8.M[1][3] = local_168.M[1][3];
  local_4d8.M[2][0] = local_168.M[2][0];
  local_4d8.M[2][1] = local_168.M[2][1];
  local_4d8.M[2][2] = local_168.M[2][2];
  local_4d8.M[2][3] = local_168.M[2][3];
  local_4d8.M[3][2] = local_168.M[3][2];
  local_4d8.M[3][3] = local_168.M[3][3];
  local_4d8.M[3][0] = local_168.M[3][0];
  local_4d8.M[3][1] = local_168.M[3][1];
  this_00 = Z_Construct_UClass_ULocalPlayer_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FMinimalViewInfo::CalculateProjectionMatrixGivenView
            (&this->ViewInfo,
             (TEnumAsByte<EAspectRatioAxisConstraint>)
             *(uchar *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 5),this->Viewport,
             (FSceneViewProjectionData *)&local_4f8._s_0);
  local_398 = (this->ViewState).Reference;
  local_368 = (this->BackgroundColor).field0_0x0;
  local_370 = &this->_padding_;
  local_3a0 = param_1;
  this_01 = ::operator_new(0x1c30);
  if (this_01 != (FSceneView *)0x0) {
    pFVar8 = FSceneView::FSceneView(this_01,(FSceneViewInitOptions *)&local_4f8._s_0);
  }
  pFVar2 = (param_1->Views).AllocatorInstance.Data;
  local_538 = pFVar8;
  if (((pFVar2 <= (FScriptContainerElement *)&local_538) &&
      ((FScriptContainerElement *)&local_538 < pFVar2 + (longlong)(param_1->Views).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FSceneView *)(*pcVar3)();
    return pFVar8;
  }
  iVar6 = (param_1->Views).ArrayNum;
  piVar1 = &(param_1->Views).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->Views).AllocatorInstance,piVar1);
  }
  (param_1->Views).ArrayNum = iVar6 + 1;
  *(FSceneView **)((param_1->Views).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_538;
  local_518._s_0.X = (this->ViewTransform).ViewLocation.field0_0x0._s_0.X;
  local_518._s_0.Y = (this->ViewTransform).ViewLocation.field0_0x0._s_0.Y;
  local_518._s_0.Z = (this->ViewTransform).ViewLocation.field0_0x0._s_0.Z;
  FSceneView::StartFinalPostprocessSettings(local_538,(TVector<double> *)&local_518._s_0);
  FSceneView::EndFinalPostprocessSettings(local_538,(FSceneViewInitOptions *)&local_4f8._s_0);
  pFVar8 = local_538;
  if (local_29c != -1) {
    local_260 = 0;
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    local_2a0 = 0;
    if (local_29c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_2a8,0,&local_29c);
    }
    local_278 = 0xffffffff;
    local_274 = 0;
    local_298.NumBits = 0;
    if (0x80 < (uint)local_298.MaxBits) {
      local_298.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_298,0);
    }
    if (local_298.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_298.AllocatorInstance.SecondaryData);
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
  }
  local_2b0 = 0;
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  uVar4 = local_2f0 >> 0x20;
  local_2f0 = local_2f0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
  }
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2e8.NumBits = 0;
  if (0x80 < (uint)local_2e8.MaxBits) {
    local_2e8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2e8,0);
  }
  if (local_2e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2e8.AllocatorInstance.SecondaryData);
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  return pFVar8;
}

// Draw @ 1469beb10

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
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
FUMGViewportClient::Draw(FUMGViewportClient *this,FViewport *param_1,FCanvas *param_2)

{
  undefined1 *puVar1;
  FViewport *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  bool bVar7;
  FViewport *pFVar8;
  UWorld *this_00;
  FGameTime *pFVar9;
  FSceneInterface *pFVar10;
  ConstructionValues *pCVar11;
  longlong lVar12;
  FLegacyScreenPercentageDriver *pFVar13;
  IRendererModule *pIVar14;
  float fVar15;
  undefined1 auStackY_328 [32];
  ELineBatcherType local_2f8 [8];
  TArrayView<UWorld::ELineBatcherType_const_,int> local_2f0;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_2e0;
  FGameTime local_2d0;
  FSceneViewFamily local_2b8;
  ConstructionValues local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar2 = this->Viewport;
  pFVar8 = pFVar2;
  if (param_1 != (FViewport *)0x0) {
    pFVar8 = param_1;
  }
  this->Viewport = pFVar8;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x30))();
  pFVar9 = FGameTime::GetTimeSinceAppStart(&local_2d0);
  local_2e0.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_2e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  dVar4 = pFVar9->RealTimeSeconds;
  dVar5 = pFVar9->WorldTimeSeconds;
  fVar15 = pFVar9->DeltaRealTimeSeconds;
  fVar6 = pFVar9->DeltaWorldTimeSeconds;
  pFVar10 = (FSceneInterface *)(**(code **)(this->_padding_ + 0x208))(this);
  pCVar11 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_f8,param_2->RenderTarget,pFVar10,&this->EngineShowFlags,&local_2e0);
  pCVar11->bRealtimeUpdate = 1;
  pCVar11->bTimesSet = 1;
  (pCVar11->Time).RealTimeSeconds = dVar4;
  (pCVar11->Time).WorldTimeSeconds = dVar5;
  (pCVar11->Time).DeltaRealTimeSeconds = fVar15;
  (pCVar11->Time).DeltaWorldTimeSeconds = fVar6;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_2b8,pCVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_f8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  fVar15 = FCommonViewportClient::GetDPIDerivedResolutionFraction((FCommonViewportClient *)this);
  local_2b8.EngineShowFlags._4_4_ = local_2b8.EngineShowFlags._4_4_ | 0x400000;
  lVar12 = (**(code **)(this->_padding_ + 0x200))(this,&local_2b8);
  pFVar13 = ::operator_new(0x18);
  if (pFVar13 == (FLegacyScreenPercentageDriver *)0x0) {
    pFVar13 = (FLegacyScreenPercentageDriver *)0x0;
  }
  else {
    pFVar13 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                        (pFVar13,&local_2b8,fVar15);
    if (pFVar13 != (FLegacyScreenPercentageDriver *)0x0) goto LAB_1469bec6c;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScreenPercentageInterface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                     ,0xa24,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1469bec6c:
  if ((local_2b8.ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenPercentageInterface == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0xa25,L"View family already had a screen percentage interface assigned."),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar4 = *(double *)(lVar12 + 0x638);
  (this->CachedViewProjectionMatrix).M[0][0] = *(double *)(lVar12 + 0x630);
  (this->CachedViewProjectionMatrix).M[0][1] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x648);
  (this->CachedViewProjectionMatrix).M[0][2] = *(double *)(lVar12 + 0x640);
  (this->CachedViewProjectionMatrix).M[0][3] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x658);
  (this->CachedViewProjectionMatrix).M[1][0] = *(double *)(lVar12 + 0x650);
  (this->CachedViewProjectionMatrix).M[1][1] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x668);
  (this->CachedViewProjectionMatrix).M[1][2] = *(double *)(lVar12 + 0x660);
  (this->CachedViewProjectionMatrix).M[1][3] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x678);
  (this->CachedViewProjectionMatrix).M[2][0] = *(double *)(lVar12 + 0x670);
  (this->CachedViewProjectionMatrix).M[2][1] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x688);
  (this->CachedViewProjectionMatrix).M[2][2] = *(double *)(lVar12 + 0x680);
  (this->CachedViewProjectionMatrix).M[2][3] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x698);
  (this->CachedViewProjectionMatrix).M[3][0] = *(double *)(lVar12 + 0x690);
  (this->CachedViewProjectionMatrix).M[3][1] = dVar4;
  dVar4 = *(double *)(lVar12 + 0x6a8);
  (this->CachedViewProjectionMatrix).M[3][2] = *(double *)(lVar12 + 0x6a0);
  (this->CachedViewProjectionMatrix).M[3][3] = dVar4;
  *(undefined8 *)(lVar12 + 0x1230) = *(undefined8 *)(lVar12 + 0x380);
  *(undefined8 *)(lVar12 + 0x1238) = *(undefined8 *)(lVar12 + 0x388);
  local_2b8.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar13;
  if ((this->ViewInfo).bConstrainAspectRatio != 0) {
    FCanvas::Clear(param_2,&FLinearColor::Black);
  }
  FCanvas::Clear(param_2,&this->BackgroundColor);
  GFrameNumber = GFrameNumber - 1;
  pIVar14 = GetRendererModule();
  (**(code **)((longlong)*pIVar14 + 0x40))(pIVar14,param_2,&local_2b8);
  if (this_00 != (UWorld *)0x0) {
    local_2f0.DataPtr = local_2f8;
    local_2f8[0] = World;
    local_2f8[1] = Foreground;
    local_2f0.ArrayNum = 2;
    UWorld::FlushLineBatchers(this_00,&local_2f0);
  }
  this->Viewport = pFVar2;
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_2b8);
  return;
}

// GetBackgroundColor @ 1469cd130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLinearColor * __thiscall
FUMGViewportClient::GetBackgroundColor
          (FUMGViewportClient *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetOrthoUnitsPerPixel @ 1469d2e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
FUMGViewportClient::GetOrthoUnitsPerPixel(FUMGViewportClient *this,FViewport *param_1)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)(**(code **)(param_1->_padding_ + 0x28))(param_1,local_res8);
  return (__real_3d888889 / (float)*piVar1) * (this->ViewTransform).OrthoZoom;
}

// GetScene @ 1469d7050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneInterface * __thiscall FUMGViewportClient::GetScene(FUMGViewportClient *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x30))();
  if (lVar1 != 0) {
    return *(FSceneInterface **)(lVar1 + 600);
  }
  return (FSceneInterface *)0x0;
}

// GetViewProjectionMatrix @ 1469d9de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMatrix<double> * __thiscall
FUMGViewportClient::GetViewProjectionMatrix
          (FUMGViewportClient *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->CachedViewProjectionMatrix).M[0][1];
  dVar2 = (this->CachedViewProjectionMatrix).M[0][2];
  dVar3 = (this->CachedViewProjectionMatrix).M[0][3];
  __return_storage_ptr__->M[0][0] = (this->CachedViewProjectionMatrix).M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = (this->CachedViewProjectionMatrix).M[1][0];
  dVar4 = (this->CachedViewProjectionMatrix).M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = (this->CachedViewProjectionMatrix).M[1][2];
  dVar3 = (this->CachedViewProjectionMatrix).M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = (this->CachedViewProjectionMatrix).M[2][0];
  dVar4 = (this->CachedViewProjectionMatrix).M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = (this->CachedViewProjectionMatrix).M[2][2];
  dVar3 = (this->CachedViewProjectionMatrix).M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = (this->CachedViewProjectionMatrix).M[3][0];
  dVar4 = (this->CachedViewProjectionMatrix).M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = (this->CachedViewProjectionMatrix).M[3][2];
  dVar3 = (this->CachedViewProjectionMatrix).M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// GetWorld @ 1469da870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FUMGViewportClient::GetWorld(FUMGViewportClient *this)

{
  UWorldProxy UVar1;
  
  if ((this->PreviewScene == (FPreviewScene *)0x0) ||
     (UVar1.World = (this->PreviewScene->PreviewWorld).field0_0x0.DebugPtr,
     UVar1.World == (UWorld *)0x0)) {
    UVar1.World = GWorld.World;
  }
  return UVar1.World;
}

// IsAspectRatioConstrained @ 1469e0a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FUMGViewportClient::IsAspectRatioConstrained(FUMGViewportClient *this)

{
  return (this->ViewInfo).bConstrainAspectRatio;
}

// SetBackgroundColor @ 146a111c0

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
FUMGViewportClient::SetBackgroundColor(FUMGViewportClient *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar1;
  return;
}

// Tick @ 146a29ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FUMGViewportClient::Tick(FUMGViewportClient *this,float param_1)

{
  UWorld *this_00;
  code *pcVar1;
  bool bVar2;
  AActor *this_01;
  UClass *local_res8;
  TActorIteratorBase<FActorIterator> local_78;
  
  this_00 = (this->PreviewScene->PreviewWorld).field0_0x0.DebugPtr;
  bVar2 = UWorld::GetBegunPlay(this_00);
  if (!bVar2) {
    local_res8 = Z_Construct_UClass_AActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_78.Flags = OnlyActiveLevels|SkipPendingKill;
    local_78.State.bIsSet = false;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FActorIteratorState::FActorIteratorState
              (&local_78.State.TypedValue,this_00,(TSubclassOf<AActor>)&local_res8);
    local_78.State.bIsSet = true;
    TActorIteratorBase<FActorIterator>::operator++(&local_78);
    while( true ) {
      if (local_78.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_78.State.TypedValue.ReachedEnd != false) break;
      if (local_78.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_01 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
      AActor::DispatchBeginPlay(this_01,false);
      TActorIteratorBase<FActorIterator>::operator++(&local_78);
    }
    if (local_78.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_78.State.TypedValue.CurrentWorld,
                 local_78.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    UWorld::SetBegunPlay(this_00,true);
  }
  UWorld::Tick(this_00,LEVELTICK_All,param_1);
  return;
}

