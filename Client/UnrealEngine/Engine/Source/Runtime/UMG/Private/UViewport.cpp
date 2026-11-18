// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 37

// GetBackgroundColor_WrapperImpl @ 146961fa0

void __cdecl UViewport::GetBackgroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1d0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1c8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetBackgroundColor_WrapperImpl @ 146961fd0

void __cdecl UViewport::SetBackgroundColor_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1c8) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = uVar3;
  if (*(longlong *)((longlong)param_1 + 0x1d8) != 0) {
    if (*(longlong *)(*(longlong *)((longlong)param_1 + 0x1d8) + 0x350) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportWidget->ViewportClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                         ,0x236,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)((longlong)param_1 + 0x1d8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)((longlong)param_1 + 0x1d8);
    if (*(longlong *)(lVar1 + 0x350) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x350);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x1d0);
    *(undefined8 *)(lVar1 + 0x920) = *(undefined8 *)((longlong)param_1 + 0x1c8);
    *(undefined8 *)(lVar1 + 0x928) = uVar3;
  }
  return;
}

// StaticClass @ 1469620c0

UClass * __cdecl UViewport::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Viewport",&Z_Registration_Info_UClass_UViewport.InnerSingleton,
               StaticRegisterNativesUViewport,0x228,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewport>,InternalVTableHelperCtorCaller<UViewport>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewport.InnerSingleton;
}

// UViewport @ 14698eac0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UViewport * __thiscall UViewport::UViewport(UViewport *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this_00 = &this->ShowFlags;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  (this->ViewportWidget).Object = (SAutoRefreshViewport *)0x0;
  (this->ViewportWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  EnsureRetrievingVTablePtrDuringCtor(L"FEngineShowFlags()");
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)this_00 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar5;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar4;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar5;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->ShowFlags).VectorFields = 0;
  (this->ShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->ShowFlags).VisualizeTSR = 0;
  (this->ShowFlags).VisualizeTemporalUpscaler = 0;
  (this->ShowFlags).VisualizeReprojection = 0;
  (this->ShowFlags).VisualizeMotionVectors = 0;
  (this->ShowFlags).VisualizeMotionBlur = 0;
  (this->ShowFlags).PhysicalMaterialMasks = 0;
  (this->ShowFlags).VertexColors = 0;
  (this->ShowFlags).VisualizeDOF = 0;
  (this->ShowFlags).TestImage = 0;
  (this->ShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->ShowFlags).CompositeEditorPrimitives = 0;
  (this->ShowFlags).GBufferHints = 0;
  (this->ShowFlags).PathTracing = 0;
  (this->ShowFlags).AlphaInvert = 0;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->ShowFlags).VisualizeShadowCasters = 0;
  (this->ShowFlags).VisualizeLWCComplexity = 0;
  (this->ShowFlags).VisualizeGPUSkinCache = 0;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->ShowFlags).LumenSecondaryBounces = 0;
  (this->ShowFlags).LumenFarFieldTraces = 0;
  (this->ShowFlags).LumenGlobalTraces = 0;
  (this->ShowFlags).LumenDetailTraces = 0;
  (this->ShowFlags).LumenScreenTraces = 0;
  (this->ShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->ShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->ShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->ShowFlags).VirtualTexturePrimitives = 0;
  (this->ShowFlags).VisualizePostProcessStack = 0;
  (this->ShowFlags).VisualizeCalibrationCustom = 0;
  (this->ShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->ShowFlags).VisualizeCalibrationColor = 0;
  (this->ShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->ShowFlags).VisualizeSkyAtmosphere = 0;
  (this->ShowFlags).RayTracingDebug = 0;
  (this->ShowFlags).LightComplexity = 0;
  (this->ShowFlags).Pivot = 0;
  (this->ShowFlags).LightInfluences = 0;
  (this->ShowFlags).HitProxies = 0;
  (this->ShowFlags).Bounds = 0;
  (this->ShowFlags).ModeWidgets = 0;
  (this->ShowFlags).EditingLevelInstance = 0;
  (this->ShowFlags).Selection = 0;
  (this->ShowFlags).Splines = 0;
  (this->ShowFlags).Cover = 0;
  (this->ShowFlags).MeshEdges = 0;
  (this->ShowFlags).Snap = 0;
  (this->ShowFlags).Grid = 0;
  (this->ShowFlags).LargeVertices = 0;
  (this->ShowFlags).Editor = 0;
  (this->ShowFlags).Brushes = 0;
  (this->ShowFlags).BSPSplit = 0;
  (this->ShowFlags).AudioRadius = 0;
  (this->ShowFlags).CameraFrustums = 0;
  (this->ShowFlags).MassProperties = 0;
  (this->ShowFlags).Constraints = 0;
  (this->ShowFlags).StreamingBounds = 0;
  (this->ShowFlags).LightMapDensity = 0;
  (this->ShowFlags).StationaryLightOverlap = 0;
  (this->ShowFlags).ShaderComplexity = 0;
  (this->ShowFlags).SelectionOutline = 0;
  (this->ShowFlags).VisualizeInstanceUpdates = 0;
  (this->ShowFlags).HISMCClusterTree = 0;
  (this->ShowFlags).HISMCOcclusionBounds = 0;
  (this->ShowFlags).Navigation = 0;
  (this->ShowFlags).DebugAI = 0;
  (this->ShowFlags).VisualizeSSS = 0;
  (this->ShowFlags).MotionBlur = 1;
  (this->ShowFlags).ScreenPercentage = 1;
  (this->ShowFlags).CompositeDebugPrimitives = 1;
  (this->ShowFlags).VolumeLightingSamples = 0;
  (this->ShowFlags).DisableOcclusionQueries = 0;
  (this->ShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->ShowFlags).OcclusionMeshes = 0;
  (this->ShowFlags).VREditing = 0;
  (this->ShowFlags).ServerDrawDebug = 0;
  (this->ShowFlags).Bones = 0;
  (this->ShowFlags).VisualizeVirtualTexture = 0;
  (this->ShowFlags).RequiredTextureResolution = 0;
  (this->ShowFlags).OutputMaterialTextureScales = 0;
  (this->ShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->ShowFlags).MeshUVDensityAccuracy = 0;
  (this->ShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->ShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->ShowFlags).QuadOverdraw = 0;
  (this->ShowFlags).HLODColoration = 0;
  (this->ShowFlags).LODColoration = 0;
  (this->ShowFlags).VisualizeShadingModels = 0;
  (this->ShowFlags).VisualizeSSR = 0;
  (this->ShowFlags).VisualizeLightingOnProbes = 0;
  (this->ShowFlags).VisualizeGlobalDistanceField = 0;
  (this->ShowFlags).PhysicsField = 0;
  (this->ShowFlags).VisualizeMeshDistanceFields = 0;
  (this->ShowFlags).VisualizeDistanceFieldAO = 0;
  (this->ShowFlags).LumenScreenTraces = 1;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->ShowFlags).LumenSecondaryBounces = 1;
  (this->ShowFlags).LumenFarFieldTraces = 1;
  (this->ShowFlags).LumenGlobalTraces = 1;
  (this->ShowFlags).LumenDetailTraces = 1;
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
  (this->ShowFlags).StereoMotionVectors = 0;
  (this->ShowFlags).RandomColor = 0;
  (this->ShowFlags).FrontBackFace = 0;
  (this->ShowFlags).Zebra = 0;
  (this->ShowFlags).Clay = 0;
  puVar2 = &(this->ShowFlags).field_0x10;
  (this->ShowFlags).ShadowFrustums = 0;
  (this->ShowFlags).VisualizeVolumetricLightmap = 0;
  (this->ShowFlags).PrecomputedVisibilityCells = 0;
  (this->ShowFlags).VisualizeLightCulling = 0;
  (this->ShowFlags).DistanceCulledPrimitives = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).CameraSafeFrames = 0;
  (this->ShowFlags).CameraAspectRatioBars = 0;
  (this->ShowFlags).CollisionPawn = 0;
  (this->ShowFlags).CollisionVisibility = 0;
  (this->ShowFlags).Collision = 0;
  (this->ShowFlags).ActorColoration = 0;
  (this->ShowFlags).Game = 1;
  (this->ShowFlags).Volumes = 0;
  (this->ShowFlags).LightRadius = 0;
  (this->ShowFlags).Wireframe = 0;
  return this;
}

// UViewport @ 14698ebb0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UViewport * __thiscall UViewport::UViewport(UViewport *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FEngineShowFlags *this_00;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  UWidget::UWidget((UWidget *)this,param_1);
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  this_00 = &this->ShowFlags;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ViewportWidget).Object = (SAutoRefreshViewport *)0x0;
  (this->ViewportWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ShowFlags).CustomShowFlags.NumBits = 0;
  (this->ShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)this_00 = uVar6;
  *(undefined8 *)&(this->ShowFlags).field_0x8 = uVar7;
  *(undefined8 *)&(this->ShowFlags).field_0x10 = uVar6;
  *(undefined8 *)&(this->ShowFlags).field_0x18 = uVar7;
  FEngineShowFlags::InitCustomShowFlags(this_00,ESFIM_Game);
  (this->ShowFlags).VectorFields = 0;
  (this->ShowFlags).VisualizeOutOfBoundsPixels = 0;
  (this->ShowFlags).VisualizeTSR = 0;
  (this->ShowFlags).VisualizeTemporalUpscaler = 0;
  (this->ShowFlags).VisualizeReprojection = 0;
  (this->ShowFlags).VisualizeMotionVectors = 0;
  (this->ShowFlags).VisualizeMotionBlur = 0;
  (this->ShowFlags).PhysicalMaterialMasks = 0;
  (this->ShowFlags).VertexColors = 0;
  (this->ShowFlags).VisualizeDOF = 0;
  (this->ShowFlags).TestImage = 0;
  (this->ShowFlags).OpaqueCompositeEditorPrimitives = 0;
  (this->ShowFlags).CompositeEditorPrimitives = 0;
  (this->ShowFlags).GBufferHints = 0;
  (this->ShowFlags).PathTracing = 0;
  (this->ShowFlags).AlphaInvert = 0;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 0;
  (this->ShowFlags).VisualizeShadowCasters = 0;
  (this->ShowFlags).VisualizeLWCComplexity = 0;
  (this->ShowFlags).VisualizeGPUSkinCache = 0;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 0;
  (this->ShowFlags).LumenSecondaryBounces = 0;
  (this->ShowFlags).LumenFarFieldTraces = 0;
  (this->ShowFlags).LumenGlobalTraces = 0;
  (this->ShowFlags).LumenDetailTraces = 0;
  (this->ShowFlags).LumenScreenTraces = 0;
  (this->ShowFlags).DebugDrawDistantVirtualSMLights = 0;
  (this->ShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  (this->ShowFlags).VisualizeVolumetricCloudConservativeDensity = 0;
  (this->ShowFlags).VirtualTexturePrimitives = 0;
  (this->ShowFlags).VisualizePostProcessStack = 0;
  (this->ShowFlags).VisualizeCalibrationCustom = 0;
  (this->ShowFlags).VisualizeCalibrationGrayscale = 0;
  (this->ShowFlags).VisualizeCalibrationColor = 0;
  (this->ShowFlags).VisualizeLightFunctionAtlas = 0;
  (this->ShowFlags).VisualizeSkyAtmosphere = 0;
  (this->ShowFlags).RayTracingDebug = 0;
  (this->ShowFlags).LightComplexity = 0;
  (this->ShowFlags).Pivot = 0;
  (this->ShowFlags).LightInfluences = 0;
  (this->ShowFlags).HitProxies = 0;
  (this->ShowFlags).Bounds = 0;
  (this->ShowFlags).ModeWidgets = 0;
  (this->ShowFlags).EditingLevelInstance = 0;
  (this->ShowFlags).Selection = 0;
  (this->ShowFlags).Splines = 0;
  (this->ShowFlags).Cover = 0;
  (this->ShowFlags).MeshEdges = 0;
  (this->ShowFlags).Snap = 0;
  (this->ShowFlags).Grid = 0;
  (this->ShowFlags).LargeVertices = 0;
  (this->ShowFlags).Editor = 0;
  (this->ShowFlags).Brushes = 0;
  (this->ShowFlags).BSPSplit = 0;
  (this->ShowFlags).AudioRadius = 0;
  (this->ShowFlags).CameraFrustums = 0;
  (this->ShowFlags).MassProperties = 0;
  (this->ShowFlags).Constraints = 0;
  (this->ShowFlags).StreamingBounds = 0;
  (this->ShowFlags).LightMapDensity = 0;
  (this->ShowFlags).StationaryLightOverlap = 0;
  (this->ShowFlags).ShaderComplexity = 0;
  (this->ShowFlags).SelectionOutline = 0;
  (this->ShowFlags).VisualizeInstanceUpdates = 0;
  (this->ShowFlags).HISMCClusterTree = 0;
  (this->ShowFlags).HISMCOcclusionBounds = 0;
  (this->ShowFlags).Navigation = 0;
  (this->ShowFlags).DebugAI = 0;
  (this->ShowFlags).VisualizeSSS = 0;
  (this->ShowFlags).MotionBlur = 1;
  (this->ShowFlags).ScreenPercentage = 1;
  (this->ShowFlags).CompositeDebugPrimitives = 1;
  (this->ShowFlags).VolumeLightingSamples = 0;
  (this->ShowFlags).DisableOcclusionQueries = 0;
  (this->ShowFlags).VisualizeInstanceOcclusionQueries = 0;
  (this->ShowFlags).OcclusionMeshes = 0;
  (this->ShowFlags).VREditing = 0;
  (this->ShowFlags).ServerDrawDebug = 0;
  (this->ShowFlags).Bones = 0;
  (this->ShowFlags).VisualizeVirtualTexture = 0;
  (this->ShowFlags).RequiredTextureResolution = 0;
  (this->ShowFlags).OutputMaterialTextureScales = 0;
  (this->ShowFlags).MaterialTextureScaleAccuracy = 0;
  (this->ShowFlags).MeshUVDensityAccuracy = 0;
  (this->ShowFlags).PrimitiveDistanceAccuracy = 0;
  (this->ShowFlags).ShaderComplexityWithQuadOverdraw = 0;
  (this->ShowFlags).QuadOverdraw = 0;
  (this->ShowFlags).HLODColoration = 0;
  (this->ShowFlags).LODColoration = 0;
  (this->ShowFlags).VisualizeShadingModels = 0;
  (this->ShowFlags).VisualizeSSR = 0;
  (this->ShowFlags).VisualizeLightingOnProbes = 0;
  (this->ShowFlags).VisualizeGlobalDistanceField = 0;
  (this->ShowFlags).PhysicsField = 0;
  (this->ShowFlags).VisualizeMeshDistanceFields = 0;
  (this->ShowFlags).VisualizeDistanceFieldAO = 0;
  (this->ShowFlags).LumenScreenTraces = 1;
  (this->ShowFlags).SceneCaptureCopySceneDepth = 1;
  (this->ShowFlags).LumenShortRangeAmbientOcclusion = 1;
  (this->ShowFlags).LumenSecondaryBounces = 1;
  (this->ShowFlags).LumenFarFieldTraces = 1;
  (this->ShowFlags).LumenGlobalTraces = 1;
  (this->ShowFlags).LumenDetailTraces = 1;
  (this->ShowFlags).StereoMotionVectors = 0;
  (this->ShowFlags).RandomColor = 0;
  (this->ShowFlags).FrontBackFace = 0;
  (this->ShowFlags).Zebra = 0;
  (this->ShowFlags).Clay = 0;
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
  puVar2 = &(this->ShowFlags).field_0x10;
  (this->ShowFlags).ShadowFrustums = 0;
  (this->ShowFlags).VisualizeVolumetricLightmap = 0;
  (this->ShowFlags).PrecomputedVisibilityCells = 0;
  (this->ShowFlags).VisualizeLightCulling = 0;
  (this->ShowFlags).DistanceCulledPrimitives = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).CameraSafeFrames = 0;
  (this->ShowFlags).CameraAspectRatioBars = 0;
  (this->ShowFlags).CollisionPawn = 0;
  (this->ShowFlags).CollisionVisibility = 0;
  (this->ShowFlags).Collision = 0;
  (this->ShowFlags).ActorColoration = 0;
  (this->ShowFlags).Game = 1;
  (this->ShowFlags).Volumes = 0;
  (this->ShowFlags).LightRadius = 0;
  (this->ShowFlags).Wireframe = 0;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 | 1;
  (this->BackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->ShowFlags).LightShafts = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).PostProcessMaterial = 0;
  (this->ShowFlags).DistanceFieldAO = 0;
  (this->ShowFlags).VolumetricFog = 0;
  (this->ShowFlags).LumenGlobalIllumination = 0;
  (this->ShowFlags).ScreenSpaceReflections = 0;
  (this->ShowFlags).IndirectLightingCache = 0;
  (this->ShowFlags).VolumetricLightmap = 0;
  (this->ShowFlags).LumenReflections = 0;
  (this->ShowFlags).ColorGrading = 0;
  (this->ShowFlags).MegaLights = 0;
  (this->ShowFlags).ScreenPercentage = 0;
  (this->ShowFlags).SeparateTranslucency = 0;
  (this->ShowFlags).DepthOfField = 0;
  (this->ShowFlags).VirtualShadowMapPersistentData = 0;
  (this->ShowFlags).ShaderPrint = 0;
  this_00->TemporalAA = 0;
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
  this_00->OnScreenDebug = 0;
  this_00->CameraImperfections = 0;
  this_00->AmbientOcclusion = 0;
  this_00->Grain = 0;
  this_00->Vignette = 0;
  this_00->LensFlares = 0;
  this_00->VisualizeLocalExposure = 0;
  this_00->VisualizeLocalFogVolumes = 0;
  this_00->VisualizeSkyLightIlluminance = 0;
  this_00->VisualizeHDR = 0;
  this_00->EyeAdaptation = 0;
  return this;
}

// ~UViewport @ 146994940

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

void __thiscall UViewport::~UViewport(UViewport *this)

{
  ForElementType<unsigned_int> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar1 = (this->ShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewportWidget).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetBackgroundColor @ 1469cd150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLinearColor * __thiscall UViewport::GetBackgroundColor(UViewport *this)

{
  return &this->BackgroundColor;
}

// GetPrivateStaticClass @ 1469d6890

UClass * __cdecl UViewport::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UViewport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Viewport",&Z_Registration_Info_UClass_UViewport.InnerSingleton,
               StaticRegisterNativesUViewport,0x228,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UViewport>,InternalVTableHelperCtorCaller<UViewport>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UViewport.InnerSingleton;
}

// GetViewLocation @ 1469d9d20

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

TVector<double> * __thiscall
UViewport::GetViewLocation(UViewport *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  SAutoRefreshViewport *pSVar2;
  FUMGViewportClient *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  
  pSVar2 = (this->ViewportWidget).Object;
  if (pSVar2 == (SAutoRefreshViewport *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  if ((pSVar2->ViewportClient).Object == (FUMGViewportClient *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (pSVar2->ViewportClient).Object;
  dVar5 = (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.Y;
  dVar1 = (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewProjectionMatrix @ 1469d9e50

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

TMatrix<double> * __thiscall
UViewport::GetViewProjectionMatrix(UViewport *this,TMatrix<double> *__return_storage_ptr__)

{
  SAutoRefreshViewport *pSVar1;
  FUMGViewportClient *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TMatrix<double> *pTVar9;
  
  dVar6 = UE::Math::TMatrix<double>::Identity.M[0][3];
  dVar5 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dVar4 = UE::Math::TMatrix<double>::Identity.M[0][1];
  pSVar1 = (this->ViewportWidget).Object;
  __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  __return_storage_ptr__->M[0][1] = dVar4;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][1];
  dVar4 = UE::Math::TMatrix<double>::Identity.M[1][0];
  __return_storage_ptr__->M[0][2] = dVar5;
  __return_storage_ptr__->M[0][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[1][3];
  dVar5 = UE::Math::TMatrix<double>::Identity.M[1][2];
  __return_storage_ptr__->M[1][0] = dVar4;
  __return_storage_ptr__->M[1][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][1];
  dVar4 = UE::Math::TMatrix<double>::Identity.M[2][0];
  __return_storage_ptr__->M[1][2] = dVar5;
  __return_storage_ptr__->M[1][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[2][3];
  dVar5 = UE::Math::TMatrix<double>::Identity.M[2][2];
  __return_storage_ptr__->M[2][0] = dVar4;
  __return_storage_ptr__->M[2][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][1];
  dVar4 = UE::Math::TMatrix<double>::Identity.M[3][0];
  __return_storage_ptr__->M[2][2] = dVar5;
  __return_storage_ptr__->M[2][3] = dVar6;
  dVar6 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar5 = UE::Math::TMatrix<double>::Identity.M[3][2];
  __return_storage_ptr__->M[3][0] = dVar4;
  __return_storage_ptr__->M[3][1] = dVar7;
  __return_storage_ptr__->M[3][2] = dVar5;
  __return_storage_ptr__->M[3][3] = dVar6;
  if (pSVar1 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportWidget->ViewportClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                         ,0x207,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMatrix<double> *)(*pcVar3)();
        return pTVar9;
      }
    }
    if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMatrix<double> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pSVar1 = (this->ViewportWidget).Object;
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TMatrix<double> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pFVar2 = (pSVar1->ViewportClient).Object;
    dVar4 = (pFVar2->CachedViewProjectionMatrix).M[0][1];
    dVar5 = (pFVar2->CachedViewProjectionMatrix).M[0][2];
    dVar6 = (pFVar2->CachedViewProjectionMatrix).M[0][3];
    __return_storage_ptr__->M[0][0] = (pFVar2->CachedViewProjectionMatrix).M[0][0];
    __return_storage_ptr__->M[0][1] = dVar4;
    dVar4 = (pFVar2->CachedViewProjectionMatrix).M[1][0];
    dVar7 = (pFVar2->CachedViewProjectionMatrix).M[1][1];
    __return_storage_ptr__->M[0][2] = dVar5;
    __return_storage_ptr__->M[0][3] = dVar6;
    dVar5 = (pFVar2->CachedViewProjectionMatrix).M[1][2];
    dVar6 = (pFVar2->CachedViewProjectionMatrix).M[1][3];
    __return_storage_ptr__->M[1][0] = dVar4;
    __return_storage_ptr__->M[1][1] = dVar7;
    dVar4 = (pFVar2->CachedViewProjectionMatrix).M[2][0];
    dVar7 = (pFVar2->CachedViewProjectionMatrix).M[2][1];
    __return_storage_ptr__->M[1][2] = dVar5;
    __return_storage_ptr__->M[1][3] = dVar6;
    dVar5 = (pFVar2->CachedViewProjectionMatrix).M[2][2];
    dVar6 = (pFVar2->CachedViewProjectionMatrix).M[2][3];
    __return_storage_ptr__->M[2][0] = dVar4;
    __return_storage_ptr__->M[2][1] = dVar7;
    dVar4 = (pFVar2->CachedViewProjectionMatrix).M[3][0];
    dVar7 = (pFVar2->CachedViewProjectionMatrix).M[3][1];
    __return_storage_ptr__->M[2][2] = dVar5;
    __return_storage_ptr__->M[2][3] = dVar6;
    dVar5 = (pFVar2->CachedViewProjectionMatrix).M[3][2];
    dVar6 = (pFVar2->CachedViewProjectionMatrix).M[3][3];
    __return_storage_ptr__->M[3][0] = dVar4;
    __return_storage_ptr__->M[3][1] = dVar7;
    __return_storage_ptr__->M[3][2] = dVar5;
    __return_storage_ptr__->M[3][3] = dVar6;
  }
  return __return_storage_ptr__;
}

// GetViewRotation @ 1469d9fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRotator<double> * __thiscall
UViewport::GetViewRotation(UViewport *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  SAutoRefreshViewport *pSVar2;
  FUMGViewportClient *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TRotator<double> *pTVar7;
  
  pSVar2 = (this->ViewportWidget).Object;
  if (pSVar2 == (SAutoRefreshViewport *)0x0) {
    __return_storage_ptr__->Pitch = 0.0;
    __return_storage_ptr__->Yaw = 0.0;
    __return_storage_ptr__->Roll = 0.0;
    return __return_storage_ptr__;
  }
  if ((pSVar2->ViewportClient).Object == (FUMGViewportClient *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TRotator<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar3 = (pSVar2->ViewportClient).Object;
  dVar5 = (pFVar3->ViewTransform).ViewRotation.Yaw;
  dVar1 = (pFVar3->ViewTransform).ViewRotation.Roll;
  __return_storage_ptr__->Pitch = (pFVar3->ViewTransform).ViewRotation.Pitch;
  __return_storage_ptr__->Yaw = dVar5;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetViewportWorld @ 1469da070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UViewport::GetViewportWorld(UViewport *this)

{
  SAutoRefreshViewport *pSVar1;
  
  pSVar1 = (this->ViewportWidget).Object;
  if (pSVar1 != (SAutoRefreshViewport *)0x0) {
    return (pSVar1->PreviewScene).PreviewWorld.field0_0x0.DebugPtr;
  }
  return (UWorld *)0x0;
}

// OnSlotAdded @ 1469f1160

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

void __thiscall UViewport::OnSlotAdded(UViewport *this,UPanelSlot *param_1)

{
  SAutoRefreshViewport *this_00;
  UWidget *this_01;
  bool bVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedRef<SWidget,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_28.Object = SNullWidget::NullWidget.Object;
  this_00 = (this->ViewportWidget).Object;
  bVar1 = false;
  if (this_00 != (SAutoRefreshViewport *)0x0) {
    this_01 = (param_1->Content).field0_0x0.DebugPtr;
    if (this_01 == (UWidget *)0x0) {
      local_38.Object = SNullWidget::NullWidget.Object;
      local_38.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = false;
      pTVar4 = &local_38;
      bVar1 = true;
    }
    else {
      pTVar4 = UWidget::TakeWidget(this_01,&local_18);
      bVar2 = true;
      local_28.Object = pTVar4->Object;
    }
    FVar3.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SViewport::SetContent((SViewport *)this_00,&local_28);
    if (bVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSlotRemoved @ 1469f1b80

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

void __thiscall UViewport::OnSlotRemoved(UViewport *this,UPanelSlot *param_1)

{
  SAutoRefreshViewport *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  this_00 = (this->ViewportWidget).Object;
  if (this_00 != (SAutoRefreshViewport *)0x0) {
    local_18.Object = SNullWidget::NullWidget.Object;
    local_18.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SViewport::SetContent((SViewport *)this_00,&local_18);
  }
  return;
}

// RebuildWidget @ 146a08610

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

TSharedRef<SWidget,1> * __thiscall
UViewport::RebuildWidget(UViewport *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TSharedPtr<SAutoRefreshViewport,1> *pTVar2;
  SAutoRefreshViewport *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FSlateBaseNamedArgs *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  UPanelSlot *pUVar12;
  UObject *pUVar13;
  int iVar14;
  int iVar15;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  TSlateDecl<SAutoRefreshViewport,RequiredArgs::T0RequiredArgs> local_298;
  SAutoRefreshViewport *local_280;
  FSharedReferencer<1> local_278;
  FName local_270;
  FMemScope local_268;
  TSharedRef<SWidget,1> local_260;
  TSharedPtr<SWidget,1> local_250;
  TSharedRef<SWidget,1> local_240;
  FSlateBaseNamedArgs local_230;
  
  iVar14 = 0;
  pFVar10 = (FSlateBaseNamedArgs *)
            SAutoRefreshViewport::FArguments::FArguments((FArguments *)&local_230);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_270 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_270,true);
  TSlateDecl<SAutoRefreshViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAutoRefreshViewport,RequiredArgs::T0RequiredArgs>
            (&local_298,"SAutoRefreshViewport",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
             ,399,local_res18);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res20);
  pSVar3 = local_298._Widget.Object;
  if (local_298._Widget.Object == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_298._Widget.Object,pFVar10);
  SAutoRefreshViewport::Construct(local_298._Widget.Object,(FArguments *)pFVar10);
  if (local_298._Widget.Object == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  if (((local_298._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_298._Widget.Object)->_padding_ + 0x228))(local_298._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_146a08758;
  }
  bVar9 = 0x20;
LAB_146a08758:
  *(byte *)&(local_298._Widget.Object)->_padding_ =
       (byte)(local_298._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_298._Widget.Object)->_padding_ =
       (byte)(local_298._Widget.Object)->_padding_ | bVar9;
  if (local_298._Widget.Object == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_298._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_298._Widget.Object == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  FVar6.ReferenceController = local_298._Widget.SharedReferenceCount.ReferenceController;
  local_298._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_298._Widget.Object = (SAutoRefreshViewport *)0x0;
  if (pSVar3 == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  local_280 = pSVar3;
  local_278.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ViewportWidget;
  if (pTVar2 != (TSharedPtr<SAutoRefreshViewport,1> *)&local_280) {
    pTVar2->Object = pSVar3;
    local_280 = (SAutoRefreshViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewportWidget).SharedReferenceCount,&local_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_230);
  if (0 < (int)this->_padding_) {
    if (pTVar2->Object == (SAutoRefreshViewport *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
    pSVar3 = pTVar2->Object;
    if ((int)this->_padding_ < 1) {
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar13 = *(UObject **)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
    }
    local_250.Object = SNullWidget::NullWidget.Object;
    if (*(longlong *)&pUVar13[1].field_0x8 == 0) {
      local_260.Object = SNullWidget::NullWidget.Object;
      local_260.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = &local_260;
      iVar15 = 2;
    }
    else {
      pUVar12 = UContentWidget::GetContentSlot((UContentWidget *)this);
      pTVar11 = UWidget::TakeWidget((pUVar12->Content).field0_0x0.DebugPtr,&local_240);
      local_250.Object = pTVar11->Object;
      iVar15 = iVar14;
      iVar14 = 1;
    }
    FVar6.ReferenceController = local_260.SharedReferenceCount.ReferenceController;
    local_250.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_250.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SViewport::SetContent((SViewport *)pSVar3,&local_250);
    if (iVar15 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    if (iVar14 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_240.SharedReferenceCount.ReferenceController);
    }
  }
  if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pTVar4 = (this->ViewportWidget).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->ViewportWidget).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SAutoRefreshViewport *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::ReleaseSlateResources(UViewport *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ViewportWidget != (TSharedPtr<SAutoRefreshViewport,1> *)&local_18) {
    (this->ViewportWidget).Object = (SAutoRefreshViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewportWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetBackgroundColor @ 146a111e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetBackgroundColor(UViewport *this,FLinearColor *param_1)

{
  SAutoRefreshViewport *pSVar1;
  FUMGViewportClient *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pSVar1 = (this->ViewportWidget).Object;
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar4;
  if (pSVar1 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportWidget->ViewportClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                         ,0x236,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar1 = (this->ViewportWidget).Object;
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (pSVar1->ViewportClient).Object;
    uVar4 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar2->BackgroundColor).field0_0x0 =
         *(undefined8 *)&(this->BackgroundColor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar2->BackgroundColor).field0_0x0 + 8) = uVar4;
  }
  return;
}

// SetEnableAdvancedFeatures @ 146a13300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetEnableAdvancedFeatures(UViewport *this,bool param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FUMGViewportClient *pFVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  FEngineShowFlags *pFVar11;
  FEngineShowFlags *this_00;
  SAutoRefreshViewport *pSVar12;
  FEngineShowFlags local_88;
  FEngineShowFlags local_48;
  
  pFVar11 = &this->ShowFlags;
  pFVar11->TemporalAA = 0;
  pFVar11->OnScreenDebug = 0;
  pFVar11->CameraImperfections = 0;
  pFVar11->AmbientOcclusion = 0;
  pFVar11->Grain = 0;
  pFVar11->Vignette = 0;
  pFVar11->LensFlares = 0;
  pFVar11->EyeAdaptation = 0;
  (this->ShowFlags).LightShafts = 0;
  (this->ShowFlags).StereoRendering = 0;
  (this->ShowFlags).HMDDistortion = 0;
  (this->ShowFlags).HighResScreenshotMask = 0;
  (this->ShowFlags).PostProcessMaterial = 0;
  (this->ShowFlags).DistanceFieldAO = 0;
  (this->ShowFlags).VolumetricFog = 0;
  (this->ShowFlags).LumenGlobalIllumination = 0;
  (this->ShowFlags).ScreenSpaceReflections = 0;
  (this->ShowFlags).IndirectLightingCache = 0;
  (this->ShowFlags).VolumetricLightmap = 0;
  (this->ShowFlags).LumenReflections = 0;
  (this->ShowFlags).ColorGrading = 0;
  (this->ShowFlags).MegaLights = 0;
  (this->ShowFlags).ScreenPercentage = 0;
  (this->ShowFlags).SeparateTranslucency = 0;
  (this->ShowFlags).DepthOfField = 0;
  (this->ShowFlags).VirtualShadowMapPersistentData = 0;
  (this->ShowFlags).ShaderPrint = 0;
  pSVar12 = (this->ViewportWidget).Object;
  if (pSVar12 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar12->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ViewportWidget->ViewportClient.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                          ,0x212,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar2 = *(uint *)pFVar11;
    uVar3 = *(uint *)&(this->ShowFlags).field_0x4;
    uVar4 = *(uint *)&(this->ShowFlags).field_0x8;
    uVar5 = *(uint *)&(this->ShowFlags).field_0x10;
    uVar6 = *(uint *)&(this->ShowFlags).field_0x14;
    if (param_1) {
      (this->ShowFlags).VirtualShadowMapPersistentData = 0;
      *(uint *)&(this->ShowFlags).field_0x14 = uVar6 & 0xfffffdff | 0x100;
      *(uint *)&(this->ShowFlags).field_0x8 = uVar4 & 0xfffffff7 | 0x404;
      *(uint *)&(this->ShowFlags).field_0x4 = uVar3 & 0xefffffff | 0x2000a0;
      *(uint *)pFVar11 = uVar2 | 0xb90a0;
      *(uint *)&(this->ShowFlags).field_0x10 = uVar5 | 0xc000;
      if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pSVar12 = (this->ViewportWidget).Object;
      if ((pSVar12->ViewportClient).Object == (FUMGViewportClient *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      this_00 = &local_88;
    }
    else {
      (this->ShowFlags).VirtualShadowMapPersistentData = 0;
      (this->ShowFlags).ShaderPrint = 0;
      *(uint *)pFVar11 = uVar2 & 0xffe46f5f;
      *(uint *)&(this->ShowFlags).field_0x10 = uVar5 & 0xfe3f3fff;
      *(uint *)&(this->ShowFlags).field_0x14 = uVar6 & 0xfffff8ff;
      *(uint *)&(this->ShowFlags).field_0x8 = uVar4 & 0xfffff9f3;
      *(uint *)&(this->ShowFlags).field_0x4 = uVar3 & 0xef9fff5f;
      if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pSVar12 = (this->ViewportWidget).Object;
      if ((pSVar12->ViewportClient).Object == (FUMGViewportClient *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      this_00 = &local_48;
    }
    pFVar7 = (pSVar12->ViewportClient).Object;
    pFVar11 = FEngineShowFlags::FEngineShowFlags(this_00,pFVar11);
    FEngineShowFlags::operator=(&pFVar7->EngineShowFlags,pFVar11);
    FVar8 = (pFVar11->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
  }
  return;
}

// SetLightIntensity @ 146a168f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetLightIntensity(UViewport *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPreviewScene::SetLightBrightness(&((this->ViewportWidget).Object)->PreviewScene,param_1);
  return;
}

// SetShowFlag @ 146a1ae80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetShowFlag(UViewport *this,FString *param_1,bool param_2)

{
  SAutoRefreshViewport *pSVar1;
  FUMGViewportClient *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FEngineShowFlags *pFVar9;
  wchar_t *pwVar10;
  FEngineShowFlags local_48;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar7 = FEngineShowFlags::FindIndexByName(pwVar10,(wchar_t *)0x0);
  if (iVar7 != -1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar8 = FEngineShowFlags::FindIndexByName(pwVar10,(wchar_t *)0x0);
    FEngineShowFlags::SetSingleFlag(&this->ShowFlags,uVar8,param_2);
    if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pSVar1 = (this->ViewportWidget).Object;
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (pSVar1->ViewportClient).Object;
    pFVar9 = FEngineShowFlags::FEngineShowFlags(&local_48,&this->ShowFlags);
    FEngineShowFlags::operator=(&pFVar2->EngineShowFlags,pFVar9);
    FVar3 = (pFVar9->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// SetSkyIntensity @ 146a1b720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetSkyIntensity(UViewport *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPreviewScene::SetSkyBrightness(&((this->ViewportWidget).Object)->PreviewScene,param_1);
  return;
}

// SetViewLocation @ 146a1d980

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

void __thiscall UViewport::SetViewLocation(UViewport *this,TVector<double> *param_1)

{
  double dVar1;
  SAutoRefreshViewport *pSVar2;
  FUMGViewportClient *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  
  pSVar2 = (this->ViewportWidget).Object;
  if (pSVar2 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar2->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (pSVar2->ViewportClient).Object;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.Y = dVar5;
    (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.Z = dVar1;
    dVar5 = (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.Y;
    (pFVar3->ViewTransform).DesiredLocation.field0_0x0._s_0.X =
         (pFVar3->ViewTransform).ViewLocation.field0_0x0._s_0.X;
    (pFVar3->ViewTransform).DesiredLocation.field0_0x0._s_0.Y = dVar5;
    (pFVar3->ViewTransform).DesiredLocation.field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// SetViewRotation @ 146a1da10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UViewport::SetViewRotation(UViewport *this,TRotator<double> *param_1)

{
  double dVar1;
  SAutoRefreshViewport *pSVar2;
  FUMGViewportClient *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  
  pSVar2 = (this->ViewportWidget).Object;
  if (pSVar2 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar2->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (pSVar2->ViewportClient).Object;
    dVar5 = param_1->Yaw;
    dVar1 = param_1->Roll;
    (pFVar3->ViewTransform).ViewRotation.Pitch = param_1->Pitch;
    (pFVar3->ViewTransform).ViewRotation.Yaw = dVar5;
    (pFVar3->ViewTransform).ViewRotation.Roll = dVar1;
  }
  return;
}

// Spawn @ 146a1e4b0

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

AActor * __thiscall UViewport::Spawn(UViewport *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  SAutoRefreshViewport *pSVar2;
  UWorld *this_00;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  AActor *pAVar6;
  longlong *plVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pSVar2 = (this->ViewportWidget).Object;
  if (pSVar2 == (SAutoRefreshViewport *)0x0) {
    return (AActor *)0x0;
  }
  this_00 = (pSVar2->PreviewScene).PreviewWorld.field0_0x0.DebugPtr;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  local_88[0x30] = AlwaysSpawn;
  if ((lVar3 != 0) && (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_146a1e53b;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_146a1e53b:
  pAVar6 = UWorld::SpawnActor(this_00,pUVar5,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)local_88);
  if (local_88._64_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return pAVar6;
}

// StaticRegisterNativesUViewport @ 146a1f360

void __cdecl UViewport::StaticRegisterNativesUViewport(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UViewport_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a27490

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

void __thiscall UViewport::SynchronizeProperties(UViewport *this)

{
  SAutoRefreshViewport *pSVar1;
  FUMGViewportClient *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FEngineShowFlags *pFVar7;
  FEngineShowFlags local_48;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->ViewportWidget).Object;
  if (pSVar1 != (SAutoRefreshViewport *)0x0) {
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportWidget->ViewportClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                         ,0x1a0,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar1 = (this->ViewportWidget).Object;
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (pSVar1->ViewportClient).Object;
    uVar5 = *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar2->BackgroundColor).field0_0x0 =
         *(undefined8 *)&(this->BackgroundColor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar2->BackgroundColor).field0_0x0 + 8) = uVar5;
    if ((this->ViewportWidget).Object == (SAutoRefreshViewport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar1 = (this->ViewportWidget).Object;
    if ((pSVar1->ViewportClient).Object == (FUMGViewportClient *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (pSVar1->ViewportClient).Object;
    pFVar7 = FEngineShowFlags::FEngineShowFlags(&local_48,&this->ShowFlags);
    FEngineShowFlags::operator=(&pFVar2->EngineShowFlags,pFVar7);
    FVar3 = (pFVar7->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
  }
  return;
}

// execGetViewLocation @ 146a36760

void __cdecl UViewport::execGetViewLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0xb].field_0x20;
  if (lVar2 == 0) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    return;
  }
  if (*(longlong *)(lVar2 + 0x350) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x350);
  uVar4 = *(undefined8 *)(lVar2 + 0x940);
  uVar1 = *(undefined8 *)(lVar2 + 0x948);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x938);
  *(undefined8 *)((longlong)param_3 + 8) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetViewProjectionMatrix @ 146a36860

void __cdecl UViewport::execGetViewProjectionMatrix(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
  uVar5 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
  uVar6 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
  uVar7 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
  uVar8 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
  uVar9 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
  uVar10 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
  uVar11 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
  uVar12 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
  uVar13 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
  uVar14 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
  uVar15 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
  uVar16 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_;
  uVar17 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_;
  uVar18 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_;
  uVar19 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_;
  uVar20 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
  uVar21 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
  uVar22 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
  uVar23 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
  uVar24 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
  uVar25 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
  uVar26 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
  uVar27 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
  uVar28 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
  uVar29 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
  uVar30 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
  uVar31 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
  uVar32 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
  uVar33 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
  uVar34 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
  uVar35 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
  if (*(longlong *)&param_1[0xb].field_0x20 != 0) {
    if (*(longlong *)(*(longlong *)&param_1[0xb].field_0x20 + 0x350) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewportWidget->ViewportClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp"
                         ,0x207,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)&param_1[0xb].field_0x20 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)&param_1[0xb].field_0x20;
    if (*(longlong *)(lVar1 + 0x350) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x350);
    uVar4 = *(undefined4 *)(lVar1 + 0xa40);
    uVar5 = *(undefined4 *)(lVar1 + 0xa44);
    uVar6 = *(undefined4 *)(lVar1 + 0xa48);
    uVar7 = *(undefined4 *)(lVar1 + 0xa4c);
    uVar8 = *(undefined4 *)(lVar1 + 0xa50);
    uVar9 = *(undefined4 *)(lVar1 + 0xa54);
    uVar10 = *(undefined4 *)(lVar1 + 0xa58);
    uVar11 = *(undefined4 *)(lVar1 + 0xa5c);
    uVar12 = *(undefined4 *)(lVar1 + 0xa60);
    uVar13 = *(undefined4 *)(lVar1 + 0xa64);
    uVar14 = *(undefined4 *)(lVar1 + 0xa68);
    uVar15 = *(undefined4 *)(lVar1 + 0xa6c);
    uVar16 = *(undefined4 *)(lVar1 + 0xa70);
    uVar17 = *(undefined4 *)(lVar1 + 0xa74);
    uVar18 = *(undefined4 *)(lVar1 + 0xa78);
    uVar19 = *(undefined4 *)(lVar1 + 0xa7c);
    uVar20 = *(undefined4 *)(lVar1 + 0xa80);
    uVar21 = *(undefined4 *)(lVar1 + 0xa84);
    uVar22 = *(undefined4 *)(lVar1 + 0xa88);
    uVar23 = *(undefined4 *)(lVar1 + 0xa8c);
    uVar24 = *(undefined4 *)(lVar1 + 0xa90);
    uVar25 = *(undefined4 *)(lVar1 + 0xa94);
    uVar26 = *(undefined4 *)(lVar1 + 0xa98);
    uVar27 = *(undefined4 *)(lVar1 + 0xa9c);
    uVar28 = *(undefined4 *)(lVar1 + 0xaa0);
    uVar29 = *(undefined4 *)(lVar1 + 0xaa4);
    uVar30 = *(undefined4 *)(lVar1 + 0xaa8);
    uVar31 = *(undefined4 *)(lVar1 + 0xaac);
    uVar32 = *(undefined4 *)(lVar1 + 0xab0);
    uVar33 = *(undefined4 *)(lVar1 + 0xab4);
    uVar34 = *(undefined4 *)(lVar1 + 0xab8);
    uVar35 = *(undefined4 *)(lVar1 + 0xabc);
  }
  *(undefined4 *)param_3 = uVar4;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0x20) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar13;
  *(undefined4 *)((longlong)param_3 + 0x28) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x38) = uVar18;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x40) = uVar20;
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar21;
  *(undefined4 *)((longlong)param_3 + 0x48) = uVar22;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar23;
  *(undefined4 *)((longlong)param_3 + 0x50) = uVar24;
  *(undefined4 *)((longlong)param_3 + 0x54) = uVar25;
  *(undefined4 *)((longlong)param_3 + 0x58) = uVar26;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uVar27;
  *(undefined4 *)((longlong)param_3 + 0x60) = uVar28;
  *(undefined4 *)((longlong)param_3 + 100) = uVar29;
  *(undefined4 *)((longlong)param_3 + 0x68) = uVar30;
  *(undefined4 *)((longlong)param_3 + 0x6c) = uVar31;
  *(undefined4 *)((longlong)param_3 + 0x70) = uVar32;
  *(undefined4 *)((longlong)param_3 + 0x74) = uVar33;
  *(undefined4 *)((longlong)param_3 + 0x78) = uVar34;
  *(undefined4 *)((longlong)param_3 + 0x7c) = uVar35;
  return;
}

// execGetViewRotation @ 146a369f0

void __cdecl UViewport::execGetViewRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0xb].field_0x20;
  if (lVar2 == 0) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    return;
  }
  if (*(longlong *)(lVar2 + 0x350) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x350);
  uVar4 = *(undefined8 *)(lVar2 + 0x958);
  uVar1 = *(undefined8 *)(lVar2 + 0x960);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x950);
  *(undefined8 *)((longlong)param_3 + 8) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetViewportWorld @ 146a36aa0

void __cdecl UViewport::execGetViewportWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xb].field_0x20 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[0xb].field_0x20 + 0x338);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetEnableAdvancedFeatures @ 146a3c0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UViewport::execSetEnableAdvancedFeatures(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetEnableAdvancedFeatures((UViewport *)param_1,local_res10[0] != 0);
  return;
}

// execSetLightIntensity @ 146a3ebf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UViewport::execSetLightIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xb].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FPreviewScene::SetLightBrightness
            ((FPreviewScene *)(*(longlong *)&param_1[0xb].field_0x20 + 0x308),fVar3);
  return;
}

// execSetShowFlag @ 146a42570

void __cdecl UViewport::execSetShowFlag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  void *_Src;
  int iVar4;
  uint uVar5;
  FEngineShowFlags *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  bool bVar9;
  int local_res10 [2];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  FEngineShowFlags local_58;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_68;
  bVar9 = local_res10[0] != 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_60;
  local_70 = (int)local_60;
  if ((int)local_60 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,&local_78,(int)local_60,&local_6c);
    memcpy(local_78.Data,_Src,lVar8 * 2);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_70 != 0) {
    FVar7.Data = local_78.Data;
  }
  iVar4 = FEngineShowFlags::FindIndexByName((wchar_t *)FVar7.Data,(wchar_t *)0x0);
  if (iVar4 != -1) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_70 != 0) {
      FVar7.Data = local_78.Data;
    }
    uVar5 = FEngineShowFlags::FindIndexByName((wchar_t *)FVar7.Data,(wchar_t *)0x0);
    FEngineShowFlags::SetSingleFlag((FEngineShowFlags *)&param_1[0xc].field_0x8,uVar5,bVar9);
    if (*(longlong *)&param_1[0xb].field_0x20 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar8 = *(longlong *)&param_1[0xb].field_0x20;
    if (*(longlong *)(lVar8 + 0x350) == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x350);
    pFVar6 = FEngineShowFlags::FEngineShowFlags
                       (&local_58,(FEngineShowFlags *)&param_1[0xc].field_0x8);
    FEngineShowFlags::operator=((FEngineShowFlags *)(lVar8 + 0x9f8),pFVar6);
    FVar2 = (pFVar6->CustomShowFlags).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execSetSkyIntensity @ 146a42b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UViewport::execSetSkyIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xb].field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FPreviewScene::SetSkyBrightness
            ((FPreviewScene *)(*(longlong *)&param_1[0xb].field_0x20 + 0x308),fVar3);
  return;
}

// execSetViewLocation @ 146a44660

void __cdecl UViewport::execSetViewLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0xb].field_0x20;
  local_18 = local_38;
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x350) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x350);
    *(undefined4 *)(lVar2 + 0x938) = local_48;
    *(undefined4 *)(lVar2 + 0x93c) = uStack_44;
    *(undefined4 *)(lVar2 + 0x940) = uStack_40;
    *(undefined4 *)(lVar2 + 0x944) = uStack_3c;
    *(undefined8 *)(lVar2 + 0x948) = local_38;
    *(undefined8 *)(lVar2 + 0x968) = *(undefined8 *)(lVar2 + 0x938);
    *(undefined8 *)(lVar2 + 0x970) = *(undefined8 *)(lVar2 + 0x940);
    *(undefined8 *)(lVar2 + 0x978) = local_38;
  }
  return;
}

// execSetViewRotation @ 146a44780

void __cdecl UViewport::execSetViewRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0xb].field_0x20;
  local_18 = local_38;
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x350) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x350);
    *(undefined4 *)(lVar2 + 0x950) = local_48;
    *(undefined4 *)(lVar2 + 0x954) = uStack_44;
    *(undefined4 *)(lVar2 + 0x958) = uStack_40;
    *(undefined4 *)(lVar2 + 0x95c) = uStack_3c;
    *(undefined8 *)(lVar2 + 0x960) = local_38;
  }
  return;
}

// execSpawn @ 146a44c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UViewport::execSpawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UWorld *this;
  bool bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  longlong *plVar6;
  UClass *pUVar7;
  undefined1 auStackY_d8 [32];
  UClass *local_a8 [2];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pUVar7 = local_a8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  if (*(longlong *)&param_1[0xb].field_0x20 == 0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  this = *(UWorld **)(*(longlong *)&param_1[0xb].field_0x20 + 0x338);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98[0x30] = AlwaysSpawn;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_AActor_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_146a44d83;
  }
  pUVar7 = (UClass *)0x0;
LAB_146a44d83:
  pAVar5 = UWorld::SpawnActor(this,pUVar7,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(AActor **)param_3 = pAVar5;
  return;
}

