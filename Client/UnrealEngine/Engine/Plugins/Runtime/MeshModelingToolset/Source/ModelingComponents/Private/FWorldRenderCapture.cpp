// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 21

// FWorldRenderCapture @ 14cb62400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldRenderCapture * __thiscall
UE::Geometry::FWorldRenderCapture::FWorldRenderCapture(FWorldRenderCapture *this)

{
  *(undefined2 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  *(undefined ***)this = &___7FWorldRenderCapture_Geometry_UE__6B_;
  *(undefined8 *)&(this->VisiblePrimitives).Elements = 0;
  *(undefined8 *)&(this->VisiblePrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisiblePrimitives).Elements.field_0x20 = 0;
  this->World = (UWorld *)0x0;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x34 = 0;
  (this->VisiblePrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisiblePrimitives).HashSize = 0;
  (this->Dimensions).Width = 0x80;
  (this->Dimensions).Height = 0x80;
  (this->LinearRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->GammaRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->DepthRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->RenderTextureDimensions).Width = 0;
  (this->RenderTextureDimensions).Height = 0;
  FViewMatrices::FViewMatrices(&this->LastCaptureViewMatrices);
  (this->ReadImageBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadImageBuffer).ArrayNum = 0;
  (this->ReadImageBuffer).ArrayMax = 0;
  this->bWriteDebugImage = false;
  this->DebugImageCounter = -1;
  ::FString::FString(&this->DebugImageFolderName,L"WorldRenderCapture");
  (this->ComponentsRestoreMaxDrawDistance).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentsRestoreMaxDrawDistance).ArrayNum = 0;
  (this->ComponentsRestoreMaxDrawDistance).ArrayMax = 0;
  return this;
}

// ~FWorldRenderCapture @ 14cb64af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Geometry::FWorldRenderCapture::~FWorldRenderCapture(FWorldRenderCapture *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined ***)this = &___7FWorldRenderCapture_Geometry_UE__6B_;
  RestoreComponentsMaxDrawDistance(this);
  pFVar1 = (this->ComponentsRestoreMaxDrawDistance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugImageFolderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReadImageBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->VisiblePrimitives).HashSize = 0;
  FVar2 = (this->VisiblePrimitives).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisiblePrimitives).Elements);
  *(undefined ***)this = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 14cb68520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
`UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition'::__l2::<lambda_1>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  float fVar4;
  
  fVar4 = __real_3f800000 -
          ((param_1->field0_0x0)._s_0.G * __real_3b808081 + (param_1->field0_0x0)._s_0.R +
          (param_1->field0_0x0)._s_0.B * ___real_37810182);
  if ((fVar4 < 0.0) || (__real_3f800000 < fVar4)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1012220025257327884>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                       ,0x2f4,"DeviceZ >= 0. && DeviceZ <= 1.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinearColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar4;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 0.0;
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 14cb73c40

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
UE::Geometry::FWorldRenderCapture::AddReferencedObjects
          (FWorldRenderCapture *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ComponentsRestoreMaxDrawDistance).AllocatorInstance.Data,
             (this->ComponentsRestoreMaxDrawDistance).ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->LinearRenderTexture,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->GammaRenderTexture,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014cb73cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->DepthRenderTexture,0,0);
  return;
}

// CaptureBufferVisualizationFromPosition @ 14cb77a80

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FWorldRenderCapture::CaptureBufferVisualizationFromPosition
          (FWorldRenderCapture *this,FName *param_1,TFrame3<double> *param_2,double param_3,
          double param_4,FImageAdapter *param_5,FRenderCaptureConfig *param_6)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this_00;
  FName FVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  FImageAdapter *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  UTextureRenderTarget2D *this_01;
  FTextureRenderTargetResource *pFVar8;
  ConstructionValues *pCVar9;
  FSceneView *this_02;
  FLegacyScreenPercentageDriver *this_03;
  FString *pFVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  int iVar14;
  FLegacyScreenPercentageDriver *pFVar15;
  bool bVar16;
  undefined1 auStackY_918 [32];
  undefined1 local_8c8 [8];
  FSceneView *local_8c0;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  undefined2 local_8a8;
  ushort uStack_8a6;
  undefined4 uStack_8a4;
  undefined8 local_898;
  int local_890;
  int local_88c;
  FImageView local_888;
  FName local_870;
  FName local_868;
  TFrame3<double> *local_860;
  FRenderTarget *local_858;
  longlong *local_848;
  FImageAdapter *local_840;
  FString local_838;
  FString local_828;
  code *local_818;
  undefined1 *local_810;
  FGameTime local_808;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  longlong local_7d8;
  undefined4 local_7d0;
  FString local_7c8;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  undefined1 local_778 [784];
  FEngineShowFlags local_468;
  undefined1 local_428 [24];
  undefined8 uStack_410;
  void *local_408;
  undefined4 local_400;
  uint local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  ForElementType<FSetElementId> local_3f0;
  ulonglong local_3e0;
  FSceneViewFamily local_3d8;
  ConstructionValues local_218;
  FCanvas local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_840 = param_5;
  local_860 = param_2;
  ::FName::ToString(param_1,&local_7c8);
  ::FString::PrintfImpl(&local_838,L"FWorldRenderCapture_%s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_838.Data.ArrayNum != 0) {
    FVar12.Data = local_838.Data.AllocatorInstance.Data;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar12.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
               ,0x30d);
  }
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
  }
  ::FName::FName(&local_870,"PreTonemapHDRColor");
  FVar1 = *param_1;
  ::FName::FName(&local_868,"Roughness");
  this_01 = GetRenderTexture(this,*param_1 != local_868);
  if (this_01 == (UTextureRenderTarget2D *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1012220025257327846>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                       ,0x31a,"RenderTargetTexture");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    bVar6 = false;
  }
  else {
    pFVar8 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                       ((UTextureRenderTarget *)this_01);
    local_468.CustomShowFlags.MaxBits = 0x80;
    local_468.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_468.CustomShowFlags.NumBits = 0;
    local_468._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_468._8_8_ = _UNK_15060db28;
    local_468._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_468._24_8_ = _UNK_15060db28;
    FEngineShowFlags::InitCustomShowFlags(&local_468,ESFIM_Game);
    local_468.Pivot = 0;
    local_468.LightInfluences = 0;
    local_468.HitProxies = 0;
    local_468.Bounds = 0;
    local_468.ModeWidgets = 0;
    local_468.EditingLevelInstance = 0;
    local_468.Selection = 0;
    local_468.Splines = 0;
    local_468.Cover = 0;
    local_468.MeshEdges = 0;
    local_468.Snap = 0;
    local_468.Grid = 0;
    local_468.LargeVertices = 0;
    local_468.Editor = 0;
    local_468.Brushes = 0;
    local_468.BSPSplit = 0;
    local_468.AudioRadius = 0;
    local_468.CameraFrustums = 0;
    local_468.MassProperties = 0;
    local_468.Constraints = 0;
    local_468.StreamingBounds = 0;
    local_468.LightMapDensity = 0;
    local_468.StationaryLightOverlap = 0;
    local_468.ShaderComplexity = 0;
    local_468.LightComplexity = 0;
    local_468.VisualizeInstanceUpdates = 0;
    local_468.HISMCClusterTree = 0;
    local_468.HISMCOcclusionBounds = 0;
    local_468.Navigation = 0;
    local_468.DebugAI = 0;
    local_468.VisualizeSSS = 0;
    local_468.SelectionOutline = 0;
    local_468.DisableOcclusionQueries = 0;
    local_468.VisualizeInstanceOcclusionQueries = 0;
    local_468.OcclusionMeshes = 0;
    local_468.VREditing = 0;
    local_468.ServerDrawDebug = 0;
    local_468.Bones = 0;
    local_468.VisualizeVirtualTexture = 0;
    local_468.RequiredTextureResolution = 0;
    local_468.OutputMaterialTextureScales = 0;
    local_468.MaterialTextureScaleAccuracy = 0;
    local_468.MeshUVDensityAccuracy = 0;
    local_468.PrimitiveDistanceAccuracy = 0;
    local_468.ShaderComplexityWithQuadOverdraw = 0;
    local_468.QuadOverdraw = 0;
    local_468.HLODColoration = 0;
    local_468.LODColoration = 0;
    local_468.VisualizeShadingModels = 0;
    local_468.VisualizeSSR = 0;
    local_468.VisualizeLightingOnProbes = 0;
    local_468.VisualizeGlobalDistanceField = 0;
    local_468.PhysicsField = 0;
    local_468.VisualizeMeshDistanceFields = 0;
    local_468.VisualizeDistanceFieldAO = 0;
    local_468.VolumeLightingSamples = 0;
    local_468.VisualizeVolumetricLightmap = 0;
    local_468.PrecomputedVisibilityCells = 0;
    local_468.VisualizeLightCulling = 0;
    local_468.DistanceCulledPrimitives = 0;
    local_468.StereoRendering = 0;
    local_468.HMDDistortion = 0;
    local_468.HighResScreenshotMask = 0;
    local_468.CameraSafeFrames = 0;
    local_468.CameraAspectRatioBars = 0;
    local_468.CollisionPawn = 0;
    local_468.CollisionVisibility = 0;
    local_468.Collision = 0;
    local_468.ActorColoration = 0;
    local_468.Game = 1;
    local_468.Volumes = 0;
    local_468.LightRadius = 0;
    local_468.Wireframe = 0;
    local_468.ShadowFrustums = 0;
    local_468.VisualizeOutOfBoundsPixels = 0;
    local_468.VisualizeTSR = 0;
    local_468.VisualizeTemporalUpscaler = 0;
    local_468.VisualizeReprojection = 0;
    local_468.VisualizeMotionVectors = 0;
    local_468.VisualizeMotionBlur = 0;
    local_468.ScreenPercentage = 1;
    local_468.PhysicalMaterialMasks = 0;
    local_468.VertexColors = 0;
    local_468.VisualizeDOF = 0;
    local_468.TestImage = 0;
    local_468.OpaqueCompositeEditorPrimitives = 0;
    local_468.CompositeEditorPrimitives = 0;
    local_468.CompositeDebugPrimitives = 1;
    local_468.MotionBlur = 1;
    local_468.GBufferHints = 0;
    local_468.VectorFields = 0;
    local_468.VisualizeVirtualShadowMap = 0;
    local_468.VisualizeGroom = 0;
    local_468.VisualizeSubstrate = 0;
    local_468.VisualizeLumen = 0;
    local_468.VisualizeNanite = 0;
    local_468.VisualizeBuffer = 0;
    local_468.MaterialAmbientOcclusion = 1;
    local_468.MaterialNormal = 1;
    local_468.ReflectionOverride = 0;
    local_468.LightingOnlyOverride = 0;
    local_468.OverrideDiffuseAndSpecular = 0;
    local_468.VisualizeLocalExposure = 0;
    local_468.VisualizeLocalFogVolumes = 0;
    local_468.VisualizeSkyLightIlluminance = 0;
    local_468.VisualizeHDR = 0;
    local_468.RandomColor = 0;
    local_468.FrontBackFace = 0;
    local_468.Zebra = 0;
    local_468.Clay = 0;
    local_468.StereoMotionVectors = 0;
    local_468.AlphaInvert = 0;
    local_468.SceneCaptureCopySceneDepth = 1;
    local_468.VisualizeShadowCasters = 0;
    local_468.VisualizeLWCComplexity = 0;
    local_468.VisualizeGPUSkinCache = 0;
    local_468.LumenShortRangeAmbientOcclusion = 1;
    local_468.LumenSecondaryBounces = 1;
    local_468.LumenFarFieldTraces = 1;
    local_468.LumenGlobalTraces = 1;
    local_468.LumenDetailTraces = 1;
    local_468.LumenScreenTraces = 1;
    local_468.DebugDrawDistantVirtualSMLights = 0;
    local_468.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    local_468.VisualizeVolumetricCloudConservativeDensity = 0;
    local_468.VirtualTexturePrimitives = 0;
    local_468.VisualizePostProcessStack = 0;
    local_468.VisualizeCalibrationCustom = 0;
    local_468.VisualizeCalibrationGrayscale = 0;
    local_468.VisualizeCalibrationColor = 0;
    local_468.VisualizeLightFunctionAtlas = 0;
    local_468.VisualizeSkyAtmosphere = 0;
    local_468.RayTracingDebug = 0;
    local_468.PathTracing = 0;
    ApplyViewMode(VMI_VisualizeBuffer,true,&local_468);
    local_468.ShaderPrint = 0;
    local_468.VirtualShadowMapPersistentData = 0;
    local_468.Diffuse = 0;
    local_468.ReflectionEnvironment = 0;
    local_468.MegaLights = 0;
    local_468.ScreenPercentage = 0;
    local_468.SeparateTranslucency = 0;
    local_468.ToneCurve = 0;
    local_468.SceneColorFringe = 0;
    local_468.Refraction = 0;
    local_468.MotionBlur = 0;
    local_468.DepthOfField = 0;
    local_468.ColorGrading = 0;
    local_468.RectLights = 0;
    local_468.SpotLights = 0;
    local_468.PointLights = 0;
    local_468.DirectionalLights = 0;
    local_468.Translucency = 0;
    local_468.DynamicShadows = 0;
    local_468.IndirectLightingCache = 0;
    local_468.VolumetricLightmap = 0;
    local_468.CapsuleShadows = 0;
    local_468.ContactShadows = 0;
    local_468.LumenReflections = 0;
    local_468.ScreenSpaceReflections = 0;
    local_468.Specular = 0;
    local_468.VolumetricFog = 0;
    local_468.LumenGlobalIllumination = 0;
    local_468.DistanceFieldAO = 0;
    local_468.SkyLighting = 0;
    local_468.StereoRendering = 0;
    local_468.HMDDistortion = 0;
    local_468.HighResScreenshotMask = 0;
    local_468.Atmosphere = 0;
    local_468.PostProcessMaterial = 1;
    local_468.LightShafts = 0;
    local_468.Fog = 0;
    local_7b8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
    local_7b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_468._0_8_ =
         CONCAT44(local_468._4_4_,
                  -(uint)(param_6->bAntiAliasing != false) & 0x10 | local_468._0_4_ & 0xffe42f45) |
         0x4000001;
    uVar3 = 0;
    if (FVar1 == local_870) {
      uVar3 = 0x1000;
    }
    local_848 = &pFVar8->_padding_;
    local_468.Lighting = uVar3 >> 0xc;
    pFVar15 = (FLegacyScreenPercentageDriver *)0x0;
    local_858 = (FRenderTarget *)local_848;
    if (pFVar8 == (FTextureRenderTargetResource *)0x0) {
      local_858 = (FRenderTarget *)0x0;
    }
    pCVar9 = FSceneViewFamily::ConstructionValues::ConstructionValues
                       (&local_218,local_858,this->World->Scene,&local_468,&local_7b8);
    (pCVar9->Time).RealTimeSeconds = 0.0;
    (pCVar9->Time).WorldTimeSeconds = 0.0;
    (pCVar9->Time).DeltaRealTimeSeconds = 0.0;
    (pCVar9->Time).DeltaWorldTimeSeconds = 0.0;
    pCVar9->bRealtimeUpdate = 0;
    pCVar9->bTimesSet = 1;
    FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_3d8,pCVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
    if (local_218.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_218.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                            SecondaryData);
    }
    local_428._16_8_ = 0;
    uStack_410 = 0;
    local_3f0.InlineData[0] = '\0';
    local_3f0.InlineData[1] = '\0';
    local_3f0.InlineData[2] = '\0';
    local_3f0.InlineData[3] = '\0';
    local_3f0._padding_ = 0;
    local_3e0 = 0;
    local_428._0_8_ = (FScriptContainerElement *)0x0;
    local_428._8_8_ = 0;
    local_408 = (void *)0x0;
    local_400 = 0;
    local_3fc = 0x80;
    local_3f8 = 0xffffffff;
    local_3f4 = 0;
    local_3f0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    UE::Internal::MakeSceneViewInitOptions
              ((FSceneViewInitOptions *)local_778,local_860,&this->Dimensions,param_3,param_4,
               &this->VisiblePrimitives,
               (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)local_428);
    local_3e0 = local_3e0 & 0xffffffff00000000;
    if (local_3f0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3f0.SecondaryData);
    }
    iVar14 = SUB84(local_428._8_8_,4);
    local_428._8_8_ = local_428._8_8_ & 0xffffffff00000000;
    if (iVar14 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_428,0,(int *)(local_428 + 0xc));
    }
    local_3f8 = 0xffffffff;
    local_3f4 = 0;
    local_400 = 0;
    if (0x80 < local_3fc) {
      local_3fc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_428 + 0x10),0);
    }
    if (local_408 != (void *)0x0) {
      FMemory::Free(local_408);
    }
    if ((FScriptContainerElement *)local_428._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_428._0_8_);
    }
    local_778._344_8_ = &local_3d8;
    this_02 = ::operator_new(0x1c30);
    if (this_02 == (FSceneView *)0x0) {
      local_8c0 = (FSceneView *)0x0;
    }
    else {
      local_8c0 = FSceneView::FSceneView(this_02,(FSceneViewInitOptions *)local_778);
    }
    if (((local_3d8.Views.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8c0) &&
        ((FScriptContainerElement *)&local_8c0 <
         local_3d8.Views.AllocatorInstance.Data + (longlong)local_3d8.Views.ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (local_3d8.Views.ArrayNum == local_3d8.Views.ArrayMax) {
      local_3d8.Views.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_3d8.Views.AllocatorInstance,&local_3d8.Views.ArrayMax);
    }
    *(FSceneView **)
     (local_3d8.Views.AllocatorInstance.Data + (longlong)local_3d8.Views.ArrayNum * 8) = local_8c0;
    local_8c0->CurrentBufferVisualizationMode = *param_1;
    local_3d8.Views.ArrayNum = local_3d8.Views.ArrayNum + 1;
    this_03 = ::operator_new(0x18);
    fVar4 = __real_3f800000;
    if (((this_03 == (FLegacyScreenPercentageDriver *)0x0) ||
        (pFVar15 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                             (this_03,&local_3d8,__real_3f800000),
        pFVar15 == (FLegacyScreenPercentageDriver *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InScreenPercentageInterface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa24,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if (((FLegacyScreenPercentageDriver *)local_3d8.ScreenPercentageInterface !=
         (FLegacyScreenPercentageDriver *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ScreenPercentageInterface == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa25,L"View family already had a screen percentage interface assigned."
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_808.RealTimeSeconds = 0.0;
    local_808.WorldTimeSeconds = 0.0;
    local_808.DeltaRealTimeSeconds = 0.0;
    local_808.DeltaWorldTimeSeconds = 0.0;
    local_3d8.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar15;
    FCanvas::FCanvas(&local_178,local_858,(FHitProxyConsumer *)0x0,&local_808,
                     local_8c0->FeatureLevel,fVar4);
    FCanvas::Clear(&local_178,&FLinearColor::Transparent);
    UE::Internal::PerformSceneRender(&local_178,&local_3d8);
    memcpy(&this->LastCaptureViewMatrices,&local_8c0->ViewMatrices,0x880);
    this_00 = &this->ReadImageBuffer;
    (this->ReadImageBuffer).ArrayNum = 0;
    if ((this->ReadImageBuffer).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&this_00->AllocatorInstance,0,&(this->ReadImageBuffer).ArrayMax);
    }
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,(this->Dimensions).Height * (this->Dimensions).Width,Default);
    local_8b8 = 6;
    uStack_8b4 = 0;
    uStack_8b0 = uStack_8b0 & 0xffffff00;
    local_8a8 = 0;
    uStack_8a4 = 0;
    local_7d8 = (ulonglong)uStack_8a6 << 0x10;
    local_898 = 0;
    local_7d0 = 0;
    if (FVar1 == local_870) {
      uStack_8b4 = 3;
    }
    uStack_8ac = 0x467a0000;
    local_890 = (this->Dimensions).Width;
    local_7e8 = CONCAT44(uStack_8b4,6);
    uStack_7e0 = CONCAT44(0x467a0000,uStack_8b0);
    local_88c = (this->Dimensions).Height;
    (**(code **)(*local_848 + 0x70))(local_848,this_00,&local_7e8,&local_898);
    pFVar5 = local_840;
    local_888.RawData = (this_00->AllocatorInstance).Data;
    local_888._padding_._0_4_ = (this->Dimensions).Width;
    local_888._padding_._4_4_ = (this->Dimensions).Height;
    local_810 = local_8c8;
    local_818 = Core::Private::Function::
                TFunctionRefCaller<UE::Internal::<lambda_25_>,FLinearColor,FLinearColor_const_&>::
                Call;
    local_888._padding_._0_4_ = 1;
    local_888._padding_._4_2_ = 5;
    UE::Internal::CopyCaptureDataToOutputImageFormat
              (&local_888,local_840,
               (TFunctionRef<FLinearColor___cdecl(FLinearColor_const_&)> *)&local_818);
    if (this->bWriteDebugImage != false) {
      pFVar10 = ::FName::ToString(param_1,&local_7a8);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_828,pwVar13);
      iVar14 = this->DebugImageCounter;
      if (this->DebugImageCounter < 0) {
        iVar14 = CaptureIndex;
        CaptureIndex = CaptureIndex + 1;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_828.Data.ArrayNum != 0) {
        FVar12.Data = local_828.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FString::FString(&local_798,(wchar_t *)FVar12.Data);
      pFVar11 = ::FString::FString(&local_788,&this->DebugImageFolderName);
      AssetUtils::SaveDebugImage(pFVar5,false,pFVar11,pFVar10,iVar14);
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
      if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
      }
    }
    bVar6 = true;
    FCanvas::~FCanvas(&local_178);
    if (local_778._604_4_ != -1) {
      local_778._664_4_ = 0;
      if ((ForElementType<FSetElementId>)local_778._656_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_778._656_8_);
      }
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_778 + 0x250));
    }
    local_778._584_4_ = 0;
    if ((ForElementType<FSetElementId>)local_778._576_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_778._576_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_778 + 0x200));
    FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_3d8);
    if (local_468.CustomShowFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_468.CustomShowFlags.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// CaptureDeviceDepthFromPosition @ 14cb783b0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition
          (FWorldRenderCapture *this,TFrame3<double> *param_1,double param_2,double param_3,
          FImageAdapter *param_4,FRenderCaptureConfig *param_5)

{
  longlong *plVar1;
  FImageDimensions *pFVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar5;
  FImageDimensions FVar6;
  TSharedRef<ISceneViewExtension,1> *pTVar7;
  code *pcVar8;
  float fVar9;
  UEngine *pUVar10;
  FImageAdapter *pFVar11;
  undefined1 uVar12;
  UObject *pUVar13;
  UTextureRenderTarget2D *pUVar14;
  FTextureRenderTargetResource *pFVar15;
  ConstructionValues *pCVar16;
  longlong lVar17;
  UWorld *pUVar18;
  AWorldSettings *pAVar19;
  FSceneView *pFVar20;
  FLegacyScreenPercentageDriver *this_01;
  FSceneView *pFVar21;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar22;
  ulonglong uVar23;
  FString *pFVar24;
  FString *pFVar25;
  FRenderTarget *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStackY_918 [32];
  FSceneView *local_8c8;
  undefined1 local_8c0;
  undefined1 local_8bf [7];
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  undefined2 local_8a8;
  ushort uStack_8a6;
  undefined4 uStack_8a4;
  undefined8 local_898;
  int local_890;
  int local_88c;
  FImageView local_888;
  FTextureRenderTargetResource *local_870;
  FImageAdapter *local_868;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_860;
  FString local_850;
  code *local_840;
  undefined1 *local_838;
  FGameTime local_830;
  FSceneViewExtensionContext local_818;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  longlong local_7e8;
  undefined4 local_7e0;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_7d8;
  TVector<double>_u_0 local_7c8;
  FString local_7a8;
  FString local_798;
  FSceneViewFamily local_788;
  undefined1 local_5c8 [684];
  float local_31c;
  FEngineShowFlags local_2b8;
  undefined1 local_278 [24];
  undefined8 uStack_260;
  void *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  ForElementType<FSetElementId> local_240;
  ulonglong local_230;
  ConstructionValues local_228;
  FCanvas local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_918;
  local_868 = param_4;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId672,"FWorldRenderCapture_DeviceDepth",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
               ,0x2a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId672);
  }
  pFVar2 = &this->Dimensions;
  if (((this->RenderTextureDimensions).Width != pFVar2->Width) ||
     ((this->RenderTextureDimensions).Height != (this->Dimensions).Height)) {
    (this->DepthRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  }
  pUVar14 = (this->DepthRenderTexture).field0_0x0.DebugPtr;
  if (pUVar14 == (UTextureRenderTarget2D *)0x0) {
    FVar6 = *pFVar2;
    this->RenderTextureDimensions = FVar6;
    pUVar13 = GetTransientPackageAsObject();
    pUVar14 = NewObject<UTextureRenderTarget2D>(pUVar13);
    if ((GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar14 == (UTextureRenderTarget2D *)0x0)) {
      (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar14;
      if (pUVar14 != (UTextureRenderTarget2D *)0x0) goto LAB_14cb784da;
      bVar30 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1012220025257328294>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                          ,0x15a,"DepthRenderTexture");
      if (bVar30) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
    }
    else {
      GC::MarkAsReachable((UObject *)pUVar14);
      (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar14;
LAB_14cb784da:
      (pUVar14->RenderTargetFormat).Value = '\t';
      (((this->DepthRenderTexture).field0_0x0.DebugPtr)->ClearColor).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
      UTextureRenderTarget2D::InitAutoFormat
                ((this->DepthRenderTexture).field0_0x0.DebugPtr,FVar6.Width,FVar6.Height);
      UTextureRenderTarget2D::UpdateResourceImmediate
                ((this->DepthRenderTexture).field0_0x0.DebugPtr,true);
      UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference();
    }
    pUVar14 = (this->DepthRenderTexture).field0_0x0.DebugPtr;
  }
  pFVar21 = (FSceneView *)0x0;
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar14 == (UTextureRenderTarget2D *)0x0)
     ) {
    (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar14;
    if (pUVar14 == (UTextureRenderTarget2D *)0x0) {
      bVar30 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1012220025257327965>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                          ,0x2a3,"DepthRenderTexture");
      if (bVar30) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      bVar30 = false;
      goto LAB_14cb78eb4;
    }
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar14);
    (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar14;
  }
  pFVar15 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                      ((UTextureRenderTarget *)pUVar14);
  local_2b8._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2b8._8_8_ = _UNK_15060db28;
  local_2b8.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2b8._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2b8._24_8_ = _UNK_15060db28;
  local_2b8.CustomShowFlags.NumBits = 0;
  local_2b8.CustomShowFlags.MaxBits = 0x80;
  local_870 = pFVar15;
  FEngineShowFlags::InitCustomShowFlags(&local_2b8,ESFIM_Game);
  local_2b8.Pivot = 0;
  local_2b8.LightInfluences = 0;
  local_2b8.HitProxies = 0;
  local_2b8.Bounds = 0;
  local_2b8.ModeWidgets = 0;
  local_2b8.EditingLevelInstance = 0;
  local_2b8.Selection = 0;
  local_2b8.Splines = 0;
  local_2b8.Cover = 0;
  local_2b8.MeshEdges = 0;
  local_2b8.Snap = 0;
  local_2b8.Grid = 0;
  local_2b8.LargeVertices = 0;
  local_2b8.Editor = 0;
  local_2b8.Lighting = 0;
  local_2b8.Brushes = 0;
  local_2b8.BSPSplit = 0;
  local_2b8.AudioRadius = 0;
  local_2b8.CameraFrustums = 0;
  local_2b8.MassProperties = 0;
  local_2b8.Constraints = 0;
  local_2b8.StreamingBounds = 0;
  local_2b8.LightMapDensity = 0;
  local_2b8.StationaryLightOverlap = 0;
  local_2b8.ShaderComplexity = 0;
  local_2b8.LightComplexity = 0;
  local_2b8.Translucency = 0;
  local_2b8.DynamicShadows = 0;
  local_2b8.VisualizeInstanceUpdates = 0;
  local_2b8.HISMCClusterTree = 0;
  local_2b8.HISMCOcclusionBounds = 0;
  local_2b8.Navigation = 0;
  local_2b8.DebugAI = 0;
  local_2b8.IndirectLightingCache = 0;
  local_2b8.VolumetricLightmap = 0;
  local_2b8.VisualizeSSS = 0;
  local_2b8.CapsuleShadows = 0;
  local_2b8.ContactShadows = 0;
  local_2b8.LumenReflections = 0;
  local_2b8.ScreenSpaceReflections = 0;
  local_2b8.SelectionOutline = 0;
  local_2b8.Specular = 0;
  local_2b8.DisableOcclusionQueries = 0;
  local_2b8.VisualizeInstanceOcclusionQueries = 0;
  local_2b8.OcclusionMeshes = 0;
  local_2b8.VREditing = 0;
  local_2b8.ServerDrawDebug = 0;
  local_2b8.Bones = 0;
  local_2b8.VisualizeVirtualTexture = 0;
  local_2b8.RequiredTextureResolution = 0;
  local_2b8.OutputMaterialTextureScales = 0;
  local_2b8.MaterialTextureScaleAccuracy = 0;
  local_2b8.MeshUVDensityAccuracy = 0;
  local_2b8.PrimitiveDistanceAccuracy = 0;
  local_2b8.ShaderComplexityWithQuadOverdraw = 0;
  local_2b8.QuadOverdraw = 0;
  local_2b8.HLODColoration = 0;
  local_2b8.LODColoration = 0;
  local_2b8.VisualizeShadingModels = 0;
  local_2b8.VisualizeSSR = 0;
  local_2b8.VolumetricFog = 0;
  local_2b8.LumenGlobalIllumination = 0;
  local_2b8.DistanceFieldAO = 0;
  local_2b8.VisualizeLightingOnProbes = 0;
  local_2b8.VisualizeGlobalDistanceField = 0;
  local_2b8.PhysicsField = 0;
  local_2b8.VisualizeMeshDistanceFields = 0;
  local_2b8.VisualizeDistanceFieldAO = 0;
  local_2b8.VolumeLightingSamples = 0;
  local_2b8.VisualizeVolumetricLightmap = 0;
  local_2b8.PrecomputedVisibilityCells = 0;
  local_2b8.SkyLighting = 0;
  local_2b8.VisualizeLightCulling = 0;
  local_2b8.DistanceCulledPrimitives = 0;
  local_2b8.StereoRendering = 0;
  local_2b8.HMDDistortion = 0;
  local_2b8.HighResScreenshotMask = 0;
  local_2b8.CameraSafeFrames = 0;
  local_2b8.CameraAspectRatioBars = 0;
  local_2b8.Atmosphere = 0;
  local_2b8.PostProcessMaterial = 0;
  local_2b8.LightShafts = 0;
  local_2b8.CollisionPawn = 0;
  local_2b8.CollisionVisibility = 0;
  local_2b8.Collision = 0;
  local_2b8.ActorColoration = 0;
  local_2b8.Game = 1;
  local_2b8.Volumes = 0;
  local_2b8.Fog = 0;
  local_2b8.LightRadius = 0;
  local_2b8.Wireframe = 0;
  local_2b8.ShadowFrustums = 0;
  local_2b8.RandomColor = 0;
  local_2b8.FrontBackFace = 0;
  local_2b8.Zebra = 0;
  local_2b8.Clay = 0;
  local_2b8.StereoMotionVectors = 0;
  local_2b8.AlphaInvert = 0;
  local_2b8.SceneCaptureCopySceneDepth = 1;
  local_2b8.ShaderPrint = 0;
  local_2b8.VisualizeShadowCasters = 0;
  local_2b8.VisualizeLWCComplexity = 0;
  local_2b8.VisualizeGPUSkinCache = 0;
  local_2b8.LumenShortRangeAmbientOcclusion = 1;
  local_2b8.LumenSecondaryBounces = 1;
  local_2b8.LumenFarFieldTraces = 1;
  local_2b8.LumenGlobalTraces = 1;
  local_2b8.LumenDetailTraces = 1;
  local_2b8.LumenScreenTraces = 1;
  local_2b8.DebugDrawDistantVirtualSMLights = 0;
  local_2b8.VirtualShadowMapPersistentData = 0;
  local_2b8.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_2b8.VisualizeVolumetricCloudConservativeDensity = 0;
  local_2b8.VirtualTexturePrimitives = 0;
  local_2b8.VisualizePostProcessStack = 0;
  local_2b8.VisualizeCalibrationCustom = 0;
  local_2b8.VisualizeCalibrationGrayscale = 0;
  local_2b8.VisualizeCalibrationColor = 0;
  local_2b8.VisualizeLightFunctionAtlas = 0;
  local_2b8.VisualizeSkyAtmosphere = 0;
  local_2b8.RayTracingDebug = 0;
  local_2b8.PathTracing = 0;
  local_2b8.Diffuse = 0;
  local_2b8.VisualizeOutOfBoundsPixels = 0;
  local_2b8.ReflectionEnvironment = 0;
  local_2b8.MegaLights = 0;
  local_2b8.VisualizeTSR = 0;
  local_2b8.VisualizeTemporalUpscaler = 0;
  local_2b8.VisualizeReprojection = 0;
  local_2b8.VisualizeMotionVectors = 0;
  local_2b8.VisualizeMotionBlur = 0;
  local_2b8.ScreenPercentage = 0;
  local_2b8.SeparateTranslucency = 0;
  local_2b8.ToneCurve = 0;
  local_2b8.SceneColorFringe = 0;
  local_2b8.Refraction = 0;
  local_2b8.PhysicalMaterialMasks = 0;
  local_2b8.VertexColors = 0;
  local_2b8.VisualizeDOF = 0;
  local_2b8.TestImage = 0;
  local_2b8.OpaqueCompositeEditorPrimitives = 0;
  local_2b8.CompositeEditorPrimitives = 0;
  local_2b8.CompositeDebugPrimitives = 1;
  local_2b8.MotionBlur = 0;
  local_2b8.GBufferHints = 0;
  local_2b8.DepthOfField = 0;
  local_2b8.VectorFields = 0;
  local_2b8.ColorGrading = 0;
  local_2b8.RectLights = 0;
  local_2b8.SpotLights = 0;
  local_2b8.PointLights = 0;
  local_2b8.DirectionalLights = 0;
  local_2b8.VisualizeVirtualShadowMap = 0;
  local_2b8.VisualizeGroom = 0;
  local_2b8.VisualizeSubstrate = 0;
  local_2b8.VisualizeLumen = 0;
  local_2b8.VisualizeNanite = 0;
  local_2b8.VisualizeBuffer = 0;
  local_2b8.MaterialAmbientOcclusion = 1;
  local_2b8.MaterialNormal = 1;
  local_2b8.ReflectionOverride = 0;
  local_2b8.LightingOnlyOverride = 0;
  local_2b8.OverrideDiffuseAndSpecular = 0;
  local_2b8.OnScreenDebug = 0;
  local_2b8.CameraImperfections = 0;
  local_2b8.AmbientOcclusion = 0;
  local_2b8.Grain = 0;
  local_2b8.Vignette = 0;
  local_2b8.GlobalIllumination = 0;
  local_2b8.LensFlares = 0;
  local_2b8.VisualizeLocalExposure = 0;
  local_2b8.VisualizeLocalFogVolumes = 0;
  local_2b8.VisualizeSkyLightIlluminance = 0;
  local_2b8.VisualizeHDR = 0;
  local_2b8.EyeAdaptation = 0;
  local_2b8.TemporalAA = 0;
  local_2b8.AntiAliasing = 0;
  local_2b8.Tonemapper = 0;
  local_2b8.Bloom = 0;
  local_2b8.PostProcessing = 0;
  local_7d8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_7d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar20 = (FSceneView *)&pFVar15->_padding_;
  if (pFVar15 == (FTextureRenderTargetResource *)0x0) {
    pFVar20 = pFVar21;
  }
  pCVar16 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_228,(FRenderTarget *)pFVar20,this->World->Scene,&local_2b8,&local_7d8)
  ;
  (pCVar16->Time).RealTimeSeconds = 0.0;
  (pCVar16->Time).WorldTimeSeconds = 0.0;
  (pCVar16->Time).DeltaRealTimeSeconds = 0.0;
  (pCVar16->Time).DeltaWorldTimeSeconds = 0.0;
  puVar4 = &pCVar16->field_0x80;
  pCVar16->bRealtimeUpdate = 0;
  pCVar16->bTimesSet = 1;
  pCVar16->bResolveScene = 0;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_788,pCVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_228.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  local_788.SceneCaptureSource = SCS_DeviceDepth;
  local_278._16_8_ = 0;
  uStack_260 = 0;
  local_240.InlineData[0] = '\0';
  local_240.InlineData[1] = '\0';
  local_240.InlineData[2] = '\0';
  local_240.InlineData[3] = '\0';
  local_240._padding_ = 0;
  local_230 = 0;
  local_278._0_8_ = (FScriptContainerElement *)0x0;
  local_278._8_8_ = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = 0xffffffff;
  local_244 = 0;
  local_240.SecondaryData = (ForElementType<FSetElementId>)0x0;
  UE::Internal::MakeSceneViewInitOptions
            ((FSceneViewInitOptions *)local_5c8,param_1,pFVar2,param_2,param_3,
             &this->VisiblePrimitives,
             (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              *)local_278);
  local_230 = local_230 & 0xffffffff00000000;
  if (local_240.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_240.SecondaryData);
  }
  bVar30 = local_278._12_4_ != 0;
  local_278._8_8_ = (ulonglong)(uint)local_278._12_4_ << 0x20;
  if (bVar30) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_278,0,(int *)(local_278 + 0xc));
  }
  local_248 = 0xffffffff;
  local_244 = 0;
  local_250 = 0;
  if (0x80 < local_24c) {
    local_24c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),0);
  }
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
  }
  if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_278._0_8_);
  }
  local_5c8._344_8_ = &local_788;
  local_31c = -1.0;
  lVar17 = (**(code **)((local_788.Scene)->_padding_ + 0x410))();
  if (lVar17 != 0) {
    pUVar18 = (UWorld *)(**(code **)((local_788.Scene)->_padding_ + 0x410))();
    pAVar19 = UWorld::GetWorldSettings(pUVar18,false,true);
    if (pAVar19 != (AWorldSettings *)0x0) {
      pUVar18 = (UWorld *)(**(code **)((local_788.Scene)->_padding_ + 0x410))();
      pAVar19 = UWorld::GetWorldSettings(pUVar18,false,true);
      local_5c8._456_4_ = pAVar19->WorldToMeters;
    }
  }
  pFVar20 = ::operator_new(0x1c30);
  local_8c8 = pFVar21;
  if (pFVar20 != (FSceneView *)0x0) {
    local_8c8 = FSceneView::FSceneView(pFVar20,(FSceneViewInitOptions *)local_5c8);
  }
  if (((local_788.Views.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8c8) &&
      ((FScriptContainerElement *)&local_8c8 <
       local_788.Views.AllocatorInstance.Data + (longlong)local_788.Views.ArrayMax * 8)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar30)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if (local_788.Views.ArrayNum == local_788.Views.ArrayMax) {
    local_788.Views.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_788.Views.AllocatorInstance,&local_788.Views.ArrayMax);
  }
  *(FSceneView **)(local_788.Views.AllocatorInstance.Data + (longlong)local_788.Views.ArrayNum * 8)
       = local_8c8;
  local_8c8->AntiAliasingMethod = AAM_None;
  local_788.Views.ArrayNum = local_788.Views.ArrayNum + 1;
  FSceneView::SetupAntiAliasingMethod(local_8c8);
  local_7c8._s_0.X = (double)local_5c8._0_8_;
  local_7c8._s_0.Y = (double)local_5c8._8_8_;
  local_7c8._s_0.Z = (double)local_5c8._16_8_;
  FSceneView::StartFinalPostprocessSettings(local_8c8,(TVector<double> *)&local_7c8._s_0);
  FSceneView::EndFinalPostprocessSettings(local_8c8,(FSceneViewInitOptions *)local_5c8);
  this_01 = ::operator_new(0x18);
  fVar9 = __real_3f800000;
  if (((this_01 == (FLegacyScreenPercentageDriver *)0x0) ||
      (pFVar21 = (FSceneView *)
                 FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                           (this_01,&local_788,__real_3f800000), pFVar21 == (FSceneView *)0x0)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("InScreenPercentageInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa24,L""), bVar30)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if (((FSceneView *)local_788.ScreenPercentageInterface != (FSceneView *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScreenPercentageInterface == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa25,L"View family already had a screen percentage interface assigned.")
     , bVar30)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  pUVar10 = GEngine;
  local_788.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar21;
  if (((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar30)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  local_818.Scene = this->World->Scene;
  local_818._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  local_818.Viewport = (FViewport *)0x0;
  local_818.bStereoEnabled = false;
  pTVar22 = FSceneViewExtensions::GatherActiveExtensions
                      ((pUVar10->ViewExtensions).Object,&local_860,&local_818);
  if (&local_788.ViewExtensions != pTVar22) {
    DestructItems<TSharedRef<ISceneViewExtension,1>,int>
              ((TSharedRef<ISceneViewExtension,1> *)local_788.ViewExtensions.AllocatorInstance.Data,
               local_788.ViewExtensions.ArrayNum);
    uVar5 = pTVar22->ArrayNum;
    pTVar7 = (TSharedRef<ISceneViewExtension,1> *)(pTVar22->AllocatorInstance).Data;
    local_788.ViewExtensions.ArrayNum = uVar5;
    if ((uVar5 == 0) && (local_788.ViewExtensions.ArrayMax == 0)) {
      local_788.ViewExtensions.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar5,local_788.ViewExtensions.ArrayMax,
                 &local_788.ViewExtensions.AllocatorInstance,uVar5,
                 &local_788.ViewExtensions.ArrayMax);
      ConstructItems<TSharedRef<ISceneViewExtension,1>,TSharedRef<ISceneViewExtension,1>,int>
                (local_788.ViewExtensions.AllocatorInstance.Data,pTVar7,uVar5);
    }
  }
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)local_860.AllocatorInstance.Data,
             local_860.ArrayNum);
  if ((TSharedRef<ISceneViewExtension,1> *)local_860.AllocatorInstance.Data !=
      (TSharedRef<ISceneViewExtension,1> *)0x0) {
    FMemory::Free(local_860.AllocatorInstance.Data);
  }
  iVar28 = local_788.ViewExtensions.ArrayNum;
  uVar23 = (ulonglong)local_788.ViewExtensions.ArrayNum;
  lVar17 = uVar23 * 0x10;
  FVar27.Data = local_788.ViewExtensions.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar23 != iVar28) {
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_8c0);
    }
    if ((TSharedRef<ISceneViewExtension,1> *)FVar27.Data ==
        (TSharedRef<ISceneViewExtension,1> *)
        (local_788.ViewExtensions.AllocatorInstance.Data + lVar17)) break;
    (**(code **)*((TSharedRef<ISceneViewExtension,1> *)FVar27.Data)->Object)
              (((TSharedRef<ISceneViewExtension,1> *)FVar27.Data)->Object,&local_788);
    (**(code **)((longlong)*((TSharedRef<ISceneViewExtension,1> *)FVar27.Data)->Object + 8))
              (((TSharedRef<ISceneViewExtension,1> *)FVar27.Data)->Object,&local_788);
    uVar23 = (ulonglong)(uint)local_788.ViewExtensions.ArrayNum;
    FVar27.Data = FVar27.Data + 0x10;
  }
  local_830.DeltaRealTimeSeconds = 0.0;
  local_830.DeltaWorldTimeSeconds = 0.0;
  local_830.RealTimeSeconds = 0.0;
  local_830.WorldTimeSeconds = 0.0;
  plVar1 = &local_870->_padding_;
  pFVar26 = (FRenderTarget *)0x0;
  if (local_870 != (FTextureRenderTargetResource *)0x0) {
    pFVar26 = (FRenderTarget *)plVar1;
  }
  FCanvas::FCanvas(&local_188,pFVar26,(FHitProxyConsumer *)0x0,&local_830,local_8c8->FeatureLevel,
                   fVar9);
  FCanvas::Clear(&local_188,&FLinearColor::Transparent);
  UE::Internal::PerformSceneRender(&local_188,&local_788);
  memcpy(&this->LastCaptureViewMatrices,&local_8c8->ViewMatrices,0x880);
  this_00 = &this->ReadImageBuffer;
  (this->ReadImageBuffer).ArrayNum = 0;
  if ((this->ReadImageBuffer).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&this_00->AllocatorInstance,0,&(this->ReadImageBuffer).ArrayMax);
  }
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (this_00,(this->Dimensions).Height * pFVar2->Width,Default);
  local_890 = pFVar2->Width;
  local_88c = (this->Dimensions).Height;
  local_8b8 = 6;
  uStack_8b4 = 3;
  uStack_8ac = 0x467a0000;
  uStack_8b0 = uStack_8b0 & 0xffffff00;
  local_7f8 = 0x300000006;
  uStack_7f0 = CONCAT44(0x467a0000,uStack_8b0);
  local_8a8 = 0;
  uStack_8a4 = 0;
  local_7e8 = (ulonglong)uStack_8a6 << 0x10;
  local_898 = 0;
  local_7e0 = 0;
  (**(code **)(*plVar1 + 0x70))(plVar1,this_00,&local_7f8,&local_898);
  pFVar11 = local_868;
  local_888.RawData = (this_00->AllocatorInstance).Data;
  local_888._padding_._0_4_ = pFVar2->Width;
  local_888._padding_._4_4_ = (this->Dimensions).Height;
  local_838 = local_8bf;
  local_840 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FWorldRenderCapture::CaptureDeviceDepthFromPosition'::__l2::<lambda_1>,FLinearColor,FLinearColor_const_&>
              ::Call;
  local_888._padding_._0_4_ = 1;
  local_888._padding_._4_2_ = 5;
  UE::Internal::CopyCaptureDataToOutputImageFormat
            (&local_888,local_868,
             (TFunctionRef<FLinearColor___cdecl(FLinearColor_const_&)> *)&local_840);
  if (this->bWriteDebugImage != false) {
    ::FString::FString(&local_850,L"DeviceDepth");
    iVar28 = this->DebugImageCounter;
    if (this->DebugImageCounter < 0) {
      iVar28 = CaptureIndex;
      CaptureIndex = CaptureIndex + 1;
    }
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_850.Data.ArrayNum != 0) {
      FVar27.Data = local_850.Data.AllocatorInstance.Data;
    }
    pFVar24 = ::FString::FString(&local_7a8,(wchar_t *)FVar27.Data);
    pFVar25 = ::FString::FString(&local_798,&this->DebugImageFolderName);
    AssetUtils::SaveDebugImage(pFVar11,false,pFVar25,pFVar24,iVar28);
    if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_850.Data.AllocatorInstance.Data);
    }
  }
  bVar30 = true;
  FCanvas::~FCanvas(&local_188);
  if (local_5c8._604_4_ != -1) {
    local_5c8._664_4_ = 0;
    if ((ForElementType<FSetElementId>)local_5c8._656_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_5c8._656_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_5c8 + 0x250));
  }
  local_5c8._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_5c8._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_5c8._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_5c8 + 0x200));
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_788);
  if (local_2b8.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_2b8.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
LAB_14cb78eb4:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar30;
}

// CaptureEmissiveFromPosition @ 14cb78f20

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
UE::Geometry::FWorldRenderCapture::CaptureEmissiveFromPosition
          (FWorldRenderCapture *this,TFrame3<double> *param_1,double param_2,double param_3,
          FImageAdapter *param_4,FRenderCaptureConfig *param_5)

{
  bool bVar1;
  FName local_38 [6];
  
  ::FName::FName(local_38,"PreTonemapHDRColor");
  bVar1 = CaptureBufferVisualizationFromPosition
                    (this,local_38,param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// CaptureFromPosition @ 14cb78fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
UE::Geometry::FWorldRenderCapture::CaptureFromPosition
          (FWorldRenderCapture *this,ERenderCaptureType param_1,TFrame3<double> *param_2,
          double param_3,double param_4,FImageAdapter *param_5,FRenderCaptureConfig *param_6)

{
  bool bVar1;
  FName local_58;
  FScopedCapture local_50;
  
  RenderCaptureInterface::FScopedCapture::FScopedCapture
            (&local_50,0 < RenderCaptureDraws,L"RenderCaptureFromPosition",(wchar_t *)0x0);
  RenderCaptureDraws = RenderCaptureDraws + -1;
  if (param_1 == CombinedMRS) {
    bVar1 = CaptureMRSFromPosition(this,param_2,param_3,param_4,param_5,param_6);
  }
  else if (param_1 == DeviceDepth) {
    bVar1 = CaptureDeviceDepthFromPosition(this,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    UE::Internal::GetBufferVisualizationModeName((ERenderCaptureType)&local_58);
    bVar1 = CaptureBufferVisualizationFromPosition
                      (this,&local_58,param_2,param_3,param_4,param_5,param_6);
  }
  RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_50);
  return bVar1;
}

// CaptureMRSFromPosition @ 14cb790f0

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

bool __thiscall
UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition
          (FWorldRenderCapture *this,TFrame3<double> *param_1,double param_2,double param_3,
          FImageAdapter *param_4,FRenderCaptureConfig *param_5)

{
  int *piVar1;
  FSceneInterface *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  ForAnyElementType _Src;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UTextureRenderTarget2D *this_00;
  char *pcVar11;
  FTextureRenderTargetResource *pFVar12;
  ConstructionValues *pCVar13;
  FLegacyScreenPercentageDriver *pFVar14;
  FSceneView *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  FImageView *pFVar17;
  atomic<unsigned_char> *paVar18;
  undefined ***pppuVar19;
  TReferenceControllerBase<1> *pTVar20;
  size_t _Size;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar21;
  FRenderTarget *pFVar22;
  bool bVar23;
  undefined1 auStackY_968 [32];
  FSceneView *local_918;
  undefined1 local_910 [8];
  UObject *local_908;
  FImagePixelData *local_900;
  FImagePixelPipe *local_8f8;
  TReferenceControllerBase<1> *pTStack_8f0;
  FSoftObjectPath local_8e8;
  TPersistentObjectPtr<FSoftObjectPath> local_8c8;
  TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_const_&> local_8a0;
  FString local_890;
  FScriptContainerElement *local_878;
  int iStack_870;
  undefined4 uStack_86c;
  undefined8 *local_868;
  FImagePixelPipe **local_860;
  code *local_858;
  undefined1 *local_850;
  FString local_848;
  TStringView<wchar_t> local_838;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_828;
  TVector<double>_u_0 local_818;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  FImageView local_7e0;
  undefined1 local_7c8 [716];
  float local_4fc;
  FEngineShowFlags local_4b8;
  undefined1 local_478 [24];
  undefined8 uStack_460;
  void *local_458;
  undefined4 local_450;
  uint local_44c;
  undefined4 local_448;
  undefined4 local_444;
  ForElementType<FSetElementId> local_440;
  ulonglong local_430;
  code *local_428 [2];
  undefined **local_418;
  FImagePixelData **local_410;
  undefined ***local_400;
  FSceneViewFamily local_3f8;
  ConstructionValues local_238;
  FCanvas local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_968;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId547,"FWorldRenderCapture_CombinedMRS",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
               ,0x223);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId547);
  }
  ::FString::FString(&local_890,
                     L"/MeshModelingToolsetExp/Materials/PostProcess_PackedMRSA.PostProcess_PackedMRSA"
                    );
  local_878 = local_890.Data.AllocatorInstance.Data;
  local_8e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_8e8.AssetPath.PackageName.Number = 0;
  local_8e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_8e8.AssetPath.AssetName.Number = 0;
  local_8e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.SubPathString.Data.ArrayNum = 0;
  local_8e8.SubPathString.Data.ArrayMax = 0;
  iStack_870 = 0;
  if (local_890.Data.ArrayNum != 0) {
    iStack_870 = local_890.Data.ArrayNum + -1;
  }
  local_838._12_4_ = uStack_86c;
  local_838.Size = iStack_870;
  local_838.DataPtr = (wchar_t *)local_890.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_8e8,&local_838);
  _Src.Data = local_8e8.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)local_8e8.SubPathString.Data.ArrayNum;
  local_8c8.WeakPtr.ObjectIndex = 0;
  local_8c8.WeakPtr.ObjectSerialNumber = 0;
  local_8c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.ObjectID.SubPathString.Data.ArrayNum = local_8e8.SubPathString.Data.ArrayNum;
  local_8c8.ObjectID.AssetPath.PackageName = local_8e8.AssetPath.PackageName;
  local_8c8.ObjectID.AssetPath.AssetName = local_8e8.AssetPath.AssetName;
  if (local_8e8.SubPathString.Data.ArrayNum == 0) {
    local_8c8.ObjectID.SubPathString.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_8e8.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_8c8.ObjectID.SubPathString,
               local_8e8.SubPathString.Data.ArrayNum,&local_8c8.ObjectID.SubPathString.Data.ArrayMax
              );
    memcpy(local_8c8.ObjectID.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  if (local_8e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.SubPathString.Data.AllocatorInstance.Data);
  }
  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_8c8);
  if (pUVar9 == (UObject *)0x0) {
    if (local_8c8.ObjectID.AssetPath.PackageName != (FName)0x0) {
      FSoftObjectPath::TryLoad(&local_8c8.ObjectID,(FUObjectSerializeContext *)0x0);
      pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_8c8);
      goto LAB_14cb7927a;
    }
LAB_14cb79c08:
    local_908 = (UObject *)0x0;
    pcVar11 = "PostProcessMaterial";
    iVar8 = 0x229;
    paVar18 = &bGEnsureHasExecuted<_1012220025257328087>;
  }
  else {
LAB_14cb7927a:
    if (pUVar9 == (UObject *)0x0) goto LAB_14cb79c08;
    pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) goto LAB_14cb79c08;
    local_908 = pUVar9;
    if ((this->World == (UWorld *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("this->World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                           ,0x22e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar2 = this->World->Scene;
    this_00 = GetRenderTexture(this,true);
    if (this_00 != (UTextureRenderTarget2D *)0x0) {
      pFVar12 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                          ((UTextureRenderTarget *)this_00);
      pTVar20 = (TReferenceControllerBase<1> *)0x0;
      local_4b8.CustomShowFlags.MaxBits = 0x80;
      local_4b8.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      pFVar22 = (FRenderTarget *)&pFVar12->_padding_;
      local_4b8.CustomShowFlags.NumBits = 0;
      if (pFVar12 == (FTextureRenderTargetResource *)0x0) {
        pFVar22 = (FRenderTarget *)0x0;
      }
      local_4b8._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_4b8._8_8_ = _UNK_15060db28;
      local_4b8._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
      local_4b8._24_8_ = _UNK_15060db28;
      FEngineShowFlags::InitCustomShowFlags(&local_4b8,ESFIM_Game);
      local_4b8.Pivot = 0;
      local_4b8.LightInfluences = 0;
      local_4b8.HitProxies = 0;
      local_4b8.Bounds = 0;
      local_4b8.ModeWidgets = 0;
      local_4b8.EditingLevelInstance = 0;
      local_4b8.Selection = 0;
      local_4b8.Splines = 0;
      local_4b8.Cover = 0;
      local_4b8.MeshEdges = 0;
      local_4b8.Snap = 0;
      local_4b8.Grid = 0;
      local_4b8.LargeVertices = 0;
      local_4b8.Editor = 0;
      local_4b8.Brushes = 0;
      local_4b8.BSPSplit = 0;
      local_4b8.AudioRadius = 0;
      local_4b8.CameraFrustums = 0;
      local_4b8.MassProperties = 0;
      local_4b8.Constraints = 0;
      local_4b8.StreamingBounds = 0;
      local_4b8.LightMapDensity = 0;
      local_4b8.StationaryLightOverlap = 0;
      local_4b8.ShaderComplexity = 0;
      local_4b8.LightComplexity = 0;
      local_4b8.VisualizeInstanceUpdates = 0;
      local_4b8.HISMCClusterTree = 0;
      local_4b8.HISMCOcclusionBounds = 0;
      local_4b8.Navigation = 0;
      local_4b8.DebugAI = 0;
      local_4b8.VisualizeSSS = 0;
      local_4b8.SelectionOutline = 0;
      local_4b8.DisableOcclusionQueries = 0;
      local_4b8.VisualizeInstanceOcclusionQueries = 0;
      local_4b8.OcclusionMeshes = 0;
      local_4b8.VREditing = 0;
      local_4b8.ServerDrawDebug = 0;
      local_4b8.Bones = 0;
      local_4b8.VisualizeVirtualTexture = 0;
      local_4b8.RequiredTextureResolution = 0;
      local_4b8.OutputMaterialTextureScales = 0;
      local_4b8.MaterialTextureScaleAccuracy = 0;
      local_4b8.MeshUVDensityAccuracy = 0;
      local_4b8.PrimitiveDistanceAccuracy = 0;
      local_4b8.ShaderComplexityWithQuadOverdraw = 0;
      local_4b8.QuadOverdraw = 0;
      local_4b8.HLODColoration = 0;
      local_4b8.LODColoration = 0;
      local_4b8.VisualizeShadingModels = 0;
      local_4b8.VisualizeSSR = 0;
      local_4b8.VisualizeLightingOnProbes = 0;
      local_4b8.VisualizeGlobalDistanceField = 0;
      local_4b8.PhysicsField = 0;
      local_4b8.VisualizeMeshDistanceFields = 0;
      local_4b8.VisualizeDistanceFieldAO = 0;
      local_4b8.VolumeLightingSamples = 0;
      local_4b8.VisualizeVolumetricLightmap = 0;
      local_4b8.PrecomputedVisibilityCells = 0;
      local_4b8.VisualizeLightCulling = 0;
      local_4b8.DistanceCulledPrimitives = 0;
      local_4b8.StereoRendering = 0;
      local_4b8.HMDDistortion = 0;
      local_4b8.HighResScreenshotMask = 0;
      local_4b8.CameraSafeFrames = 0;
      local_4b8.CameraAspectRatioBars = 0;
      local_4b8.CollisionPawn = 0;
      local_4b8.CollisionVisibility = 0;
      local_4b8.Collision = 0;
      local_4b8.ActorColoration = 0;
      local_4b8.Game = 1;
      local_4b8.Volumes = 0;
      local_4b8.LightRadius = 0;
      local_4b8.Wireframe = 0;
      local_4b8.ShadowFrustums = 0;
      local_4b8.VisualizeOutOfBoundsPixels = 0;
      local_4b8.VisualizeTSR = 0;
      local_4b8.VisualizeTemporalUpscaler = 0;
      local_4b8.VisualizeReprojection = 0;
      local_4b8.VisualizeMotionVectors = 0;
      local_4b8.VisualizeMotionBlur = 0;
      local_4b8.ScreenPercentage = 1;
      local_4b8.PhysicalMaterialMasks = 0;
      local_4b8.VertexColors = 0;
      local_4b8.VisualizeDOF = 0;
      local_4b8.TestImage = 0;
      local_4b8.OpaqueCompositeEditorPrimitives = 0;
      local_4b8.CompositeEditorPrimitives = 0;
      local_4b8.CompositeDebugPrimitives = 1;
      local_4b8.MotionBlur = 1;
      local_4b8.GBufferHints = 0;
      local_4b8.VectorFields = 0;
      local_4b8.VisualizeVirtualShadowMap = 0;
      local_4b8.VisualizeGroom = 0;
      local_4b8.VisualizeSubstrate = 0;
      local_4b8.VisualizeLumen = 0;
      local_4b8.VisualizeNanite = 0;
      local_4b8.VisualizeBuffer = 0;
      local_4b8.MaterialAmbientOcclusion = 1;
      local_4b8.MaterialNormal = 1;
      local_4b8.ReflectionOverride = 0;
      local_4b8.LightingOnlyOverride = 0;
      local_4b8.OverrideDiffuseAndSpecular = 0;
      local_4b8.VisualizeLocalExposure = 0;
      local_4b8.VisualizeLocalFogVolumes = 0;
      local_4b8.VisualizeSkyLightIlluminance = 0;
      local_4b8.VisualizeHDR = 0;
      local_4b8.RandomColor = 0;
      local_4b8.FrontBackFace = 0;
      local_4b8.Zebra = 0;
      local_4b8.Clay = 0;
      local_4b8.StereoMotionVectors = 0;
      local_4b8.AlphaInvert = 0;
      local_4b8.SceneCaptureCopySceneDepth = 1;
      local_4b8.VisualizeShadowCasters = 0;
      local_4b8.VisualizeLWCComplexity = 0;
      local_4b8.VisualizeGPUSkinCache = 0;
      local_4b8.LumenShortRangeAmbientOcclusion = 1;
      local_4b8.LumenSecondaryBounces = 1;
      local_4b8.LumenFarFieldTraces = 1;
      local_4b8.LumenGlobalTraces = 1;
      local_4b8.LumenDetailTraces = 1;
      local_4b8.LumenScreenTraces = 1;
      local_4b8.DebugDrawDistantVirtualSMLights = 0;
      local_4b8.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
      local_4b8.VisualizeVolumetricCloudConservativeDensity = 0;
      local_4b8.VirtualTexturePrimitives = 0;
      local_4b8.VisualizePostProcessStack = 0;
      local_4b8.VisualizeCalibrationCustom = 0;
      local_4b8.VisualizeCalibrationGrayscale = 0;
      local_4b8.VisualizeCalibrationColor = 0;
      local_4b8.VisualizeLightFunctionAtlas = 0;
      local_4b8.VisualizeSkyAtmosphere = 0;
      local_4b8.RayTracingDebug = 0;
      local_4b8.PathTracing = 0;
      ApplyViewMode(VMI_Unlit,true,&local_4b8);
      local_4b8.ShaderPrint = 0;
      local_4b8.VirtualShadowMapPersistentData = 0;
      local_4b8.VolumetricFog = 0;
      local_4b8.LumenGlobalIllumination = 0;
      local_4b8.DistanceFieldAO = 0;
      local_4b8.SkyLighting = 0;
      local_4b8.StereoRendering = 0;
      local_4b8.HMDDistortion = 0;
      local_4b8.HighResScreenshotMask = 0;
      local_4b8.Atmosphere = 0;
      local_4b8.PostProcessMaterial = 0;
      local_4b8.LightShafts = 0;
      local_4b8.Fog = 0;
      local_4b8.Lighting = 0;
      local_4b8.Translucency = 0;
      local_4b8.DynamicShadows = 0;
      local_4b8.IndirectLightingCache = 0;
      local_4b8.VolumetricLightmap = 0;
      local_4b8.CapsuleShadows = 0;
      local_4b8.ContactShadows = 0;
      local_4b8.LumenReflections = 0;
      local_4b8.ScreenSpaceReflections = 0;
      local_4b8.Specular = 0;
      local_4b8._0_8_ =
           CONCAT44(local_4b8._4_4_,
                    -(uint)(param_5->bAntiAliasing != false) & 0x10 | local_4b8._0_4_ & 0xffe42f44)
           & 0x4f85fd41ffffffff;
      local_828.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
      local_828.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pCVar13 = FSceneViewFamily::ConstructionValues::ConstructionValues
                          (&local_238,pFVar22,pFVar2,&local_4b8,&local_828);
      local_7f8._0_12_ = ZEXT812(0);
      local_7f8._12_4_ = 0;
      (pCVar13->Time).RealTimeSeconds = (double)local_7f8._0_8_;
      (pCVar13->Time).WorldTimeSeconds = (double)local_7f8._8_8_;
      (pCVar13->Time).DeltaRealTimeSeconds = 0.0;
      (pCVar13->Time).DeltaWorldTimeSeconds = 0.0;
      local_7e8 = 0;
      pCVar13->bRealtimeUpdate = 0;
      pCVar13->bTimesSet = 1;
      FSceneViewFamilyContext::FSceneViewFamilyContext
                ((FSceneViewFamilyContext *)&local_3f8,pCVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
      if (local_238.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_238.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                              SecondaryData);
      }
      pFVar14 = ::operator_new(0x18);
      fVar5 = __real_3f800000;
      if (pFVar14 == (FLegacyScreenPercentageDriver *)0x0) {
        pFVar14 = (FLegacyScreenPercentageDriver *)0x0;
LAB_14cb7951e:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InScreenPercentageInterface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa24,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        pFVar14 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                            (pFVar14,&local_3f8,__real_3f800000);
        if (pFVar14 == (FLegacyScreenPercentageDriver *)0x0) goto LAB_14cb7951e;
      }
      if (((FLegacyScreenPercentageDriver *)local_3f8.ScreenPercentageInterface !=
           (FLegacyScreenPercentageDriver *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScreenPercentageInterface == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                             ,0xa25,
                             L"View family already had a screen percentage interface assigned."),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_478._16_8_ = 0;
      uStack_460 = 0;
      local_440.InlineData[0] = '\0';
      local_440.InlineData[1] = '\0';
      local_440.InlineData[2] = '\0';
      local_440.InlineData[3] = '\0';
      local_440._padding_ = 0;
      local_430 = 0;
      local_478._0_8_ = (FScriptContainerElement *)0x0;
      local_478._8_8_ = 0;
      local_458 = (void *)0x0;
      local_450 = 0;
      local_44c = 0x80;
      local_448 = 0xffffffff;
      local_444 = 0;
      local_440.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_3f8.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar14;
      UE::Internal::MakeSceneViewInitOptions
                ((FSceneViewInitOptions *)local_7c8,param_1,&this->Dimensions,param_2,param_3,
                 &this->VisiblePrimitives,
                 (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                  *)local_478);
      local_430 = local_430 & 0xffffffff00000000;
      if (local_440.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_440.SecondaryData);
      }
      iVar8 = SUB84(local_478._8_8_,4);
      local_478._8_8_ = local_478._8_8_ & 0xffffffff00000000;
      if (iVar8 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_478,0,(int *)(local_478 + 0xc));
      }
      local_448 = 0xffffffff;
      local_444 = 0;
      local_450 = 0;
      if (0x80 < local_44c) {
        local_44c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_478 + 0x10),0);
      }
      if (local_458 != (void *)0x0) {
        FMemory::Free(local_458);
      }
      if ((FScriptContainerElement *)local_478._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_478._0_8_);
      }
      local_7c8._344_8_ = &local_3f8;
      local_4fc = (float)param_2;
      pFVar15 = ::operator_new(0x1c30);
      if (pFVar15 == (FSceneView *)0x0) {
        local_918 = (FSceneView *)0x0;
      }
      else {
        local_918 = FSceneView::FSceneView(pFVar15,(FSceneViewInitOptions *)local_7c8);
      }
      if (((local_3f8.Views.AllocatorInstance.Data <= (FScriptContainerElement *)&local_918) &&
          ((FScriptContainerElement *)&local_918 <
           local_3f8.Views.AllocatorInstance.Data + (longlong)local_3f8.Views.ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (local_3f8.Views.ArrayNum == local_3f8.Views.ArrayMax) {
        local_3f8.Views.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_3f8.Views.AllocatorInstance,&local_3f8.Views.ArrayMax);
      }
      *(FSceneView **)
       (local_3f8.Views.AllocatorInstance.Data + (longlong)local_3f8.Views.ArrayNum * 8) = local_918
      ;
      local_818._s_0.X = (double)local_7c8._0_8_;
      local_818._s_0.Y = (double)local_7c8._8_8_;
      local_818._s_0.Z = (double)local_7c8._16_8_;
      local_3f8.Views.ArrayNum = local_3f8.Views.ArrayNum + 1;
      FSceneView::StartFinalPostprocessSettings(local_918,(TVector<double> *)&local_818._s_0);
      local_900 = (FImagePixelData *)0x0;
      piVar1 = &(local_918->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax;
      (local_918->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(local_918->FinalPostProcessSettings).BufferVisualizationOverviewMaterials
                          .AllocatorInstance,0,piVar1);
      }
      pFVar15 = local_918;
      pTVar21 = &(local_918->FinalPostProcessSettings).BufferVisualizationOverviewMaterials;
      pFVar3 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_908) &&
          ((FScriptContainerElement *)&local_908 <
           pFVar3 + (longlong)
                    (local_918->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.
                    ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar8 = (pFVar15->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum;
      piVar1 = &(pFVar15->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar21->AllocatorInstance,piVar1);
      }
      (pFVar15->FinalPostProcessSettings).BufferVisualizationOverviewMaterials.ArrayNum = iVar8 + 1;
      *(UObject **)((pTVar21->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_908;
      TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
               *)&(local_918->FinalPostProcessSettings).BufferVisualizationPipes,0);
      pTVar16 = ::operator_new(0x50);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        local_8f8 = ___xmm_00000000000000000000000000000010;
        pTStack_8f0 = _UNK_150651568;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        *(undefined1 *)&pTVar16[1]._padding_ = 0;
        pTVar16->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_UFImagePixelPipe___00_SharedPointerInternals__6B_;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&pTVar16[1].SharedReferenceCount,4000);
        local_8f8 = (FImagePixelPipe *)(pTVar16 + 1);
        pTVar16[4]._padding_ = 0;
        pTVar16[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[4].WeakReferenceCount = (atomic<int>)0x0;
        if ((local_8f8 == (FImagePixelPipe *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        pTVar20 = pTVar16;
        pTStack_8f0 = pTVar16;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      if ((local_8f8 == (FImagePixelPipe *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_418 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::`2'::<lambda_1>,0,0>
                   ::_vftable_;
      local_410 = &local_900;
      local_428[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FWorldRenderCapture::CaptureMRSFromPosition'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
                     ::Call;
      local_400 = (undefined ***)0x0;
      FImagePixelPipe::AddEndpoint
                (local_8f8,
                 (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                  *)local_428);
      if (local_428[0] != (code *)0x0) {
        pppuVar19 = &local_418;
        if (local_400 != (undefined ***)0x0) {
          pppuVar19 = local_400;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      local_8a0._4_8_ = *(undefined8 *)&local_908->field_0x18;
      local_868 = (undefined8 *)((longlong)&local_8a0.Key + 4);
      local_860 = &local_8f8;
      TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_const_&>_>
                ((TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
                  *)&(local_918->FinalPostProcessSettings).BufferVisualizationPipes,&local_8a0,
                 (bool *)&local_868);
      (local_918->FinalPostProcessSettings).bBufferVisualizationDumpRequired = true;
      FSceneView::EndFinalPostprocessSettings(local_918,(FSceneViewInitOptions *)local_7c8);
      (local_918->FinalPostProcessSettings).field_0x36 = 2;
      FCanvas::FCanvas(&local_198,pFVar22,(FHitProxyConsumer *)0x0,this->World,SM5,CDM_DeferDrawing,
                       fVar5);
      FCanvas::Clear(&local_198,&FLinearColor::Transparent);
      UE::Internal::PerformSceneRender(&local_198,&local_3f8);
      memcpy(&this->LastCaptureViewMatrices,&local_918->ViewMatrices,0x880);
      if (local_900 == (FImagePixelData *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1012220025257328006>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                           ,0x27a,"PostProcessPassPixelData.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        bVar6 = false;
      }
      else {
        local_850 = local_910;
        local_858 = Core::Private::Function::
                    TFunctionRefCaller<UE::Internal::<lambda_25_>,FLinearColor,FLinearColor_const_&>
                    ::Call;
        pFVar17 = FImagePixelData::GetImageView(local_900,&local_7e0);
        UE::Internal::CopyCaptureDataToOutputImageFormat
                  (pFVar17,param_4,
                   (TFunctionRef<FLinearColor___cdecl(FLinearColor_const_&)> *)&local_858);
        if (this->bWriteDebugImage != false) {
          ::FString::FString(&local_848,L"CombinedMRS");
          WriteDebugImage(this,param_4,&local_848);
          if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_848.Data.AllocatorInstance.Data);
          }
        }
        bVar6 = true;
      }
      FCanvas::~FCanvas(&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_8f0);
      if (local_900 != (FImagePixelData *)0x0) {
        (**(code **)local_900->_padding_)(local_900,1);
      }
      if (local_7c8._604_4_ != -1) {
        local_7c8._664_4_ = 0;
        if ((ForElementType<FSetElementId>)local_7c8._656_8_ != (ForElementType<FSetElementId>)0x0)
        {
          FMemory::Free((void *)local_7c8._656_8_);
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_7c8 + 0x250));
      }
      local_7c8._584_4_ = 0;
      if ((ForElementType<FSetElementId>)local_7c8._576_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_7c8._576_8_);
      }
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_7c8 + 0x200));
      FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_3f8);
      if (local_4b8.CustomShowFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_4b8.CustomShowFlags.AllocatorInstance.SecondaryData);
      }
      goto LAB_14cb79c3d;
    }
    pcVar11 = "RenderTargetTexture";
    iVar8 = 0x232;
    paVar18 = &bGEnsureHasExecuted<_1012220025257328078>;
  }
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (paVar18,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                     ,iVar8,pcVar11);
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar6 = false;
LAB_14cb79c3d:
  if (local_8c8.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_8c8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// ComputeContainingRenderSphere @ 14cb7bc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSphere<double> * __thiscall
UE::Geometry::FWorldRenderCapture::ComputeContainingRenderSphere
          (FWorldRenderCapture *this,TSphere<double> *__return_storage_ptr__,float param_1,
          float param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TSphere<double> *pTVar5;
  float fVar6;
  
  if (*(int *)&(this->VisiblePrimitives).Elements.field_0x8 !=
      *(int *)&(this->VisiblePrimitives).Elements.field_0x34) {
    dVar3 = (this->VisibleBounds).Origin.field0_0x0._s_0.Y;
    fVar6 = param_1 * __real_3c0efa35;
    dVar1 = (this->VisibleBounds).Origin.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Center).field0_0x0._s_0.X =
         (this->VisibleBounds).Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar1;
    dVar1 = (this->VisibleBounds).SphereRadius;
    fVar6 = tanf(fVar6);
    __return_storage_ptr__->W = (double)((float)((double)param_2 * dVar1) / fVar6);
    return __return_storage_ptr__;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1012220025257328367>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                     ,0x111,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSphere<double> *)(*pcVar2)();
    return pTVar5;
  }
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->W = 1000.0;
  return __return_storage_ptr__;
}

// GetDepthRenderTexture @ 14cb95c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
UE::Geometry::FWorldRenderCapture::GetDepthRenderTexture(FWorldRenderCapture *this)

{
  FImageDimensions FVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UTextureRenderTarget2D *pUVar5;
  
  if (((this->RenderTextureDimensions).Width != (this->Dimensions).Width) ||
     ((this->RenderTextureDimensions).Height != (this->Dimensions).Height)) {
    (this->DepthRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  }
  pUVar5 = (this->DepthRenderTexture).field0_0x0.DebugPtr;
  if (pUVar5 != (UTextureRenderTarget2D *)0x0) {
    return pUVar5;
  }
  FVar1 = this->Dimensions;
  this->RenderTextureDimensions = FVar1;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UTextureRenderTarget2D>(pUVar4);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UTextureRenderTarget2D *)0x0))
  {
    (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UTextureRenderTarget2D *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1012220025257328294>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                         ,0x15a,"DepthRenderTexture");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UTextureRenderTarget2D *)(*pcVar2)();
        return pUVar5;
      }
      goto LAB_14cb95d01;
    }
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar5);
    (this->DepthRenderTexture).field0_0x0.DebugPtr = pUVar5;
  }
  (pUVar5->RenderTargetFormat).Value = '\t';
  (((this->DepthRenderTexture).field0_0x0.DebugPtr)->ClearColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  UTextureRenderTarget2D::InitAutoFormat
            ((this->DepthRenderTexture).field0_0x0.DebugPtr,FVar1.Width,FVar1.Height);
  UTextureRenderTarget2D::UpdateResourceImmediate
            ((this->DepthRenderTexture).field0_0x0.DebugPtr,true);
  UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference();
LAB_14cb95d01:
  return (this->DepthRenderTexture).field0_0x0.DebugPtr;
}

// GetReferencerName @ 14cb99840

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
UE::Geometry::FWorldRenderCapture::GetReferencerName
          (FWorldRenderCapture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FWorldRenderCapture");
  return __return_storage_ptr__;
}

// GetRenderTexture @ 14cb99ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
UE::Geometry::FWorldRenderCapture::GetRenderTexture(FWorldRenderCapture *this,bool param_1)

{
  FImageDimensions FVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UTextureRenderTarget2D *pUVar5;
  TObjectPtr<UTextureRenderTarget2D>_u_0 *pTVar6;
  undefined4 uVar7;
  
  if (((this->RenderTextureDimensions).Width != (this->Dimensions).Width) ||
     ((this->RenderTextureDimensions).Height != (this->Dimensions).Height)) {
    (this->LinearRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
    (this->GammaRenderTexture).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  }
  pTVar6 = &(this->LinearRenderTexture).field0_0x0;
  if (!param_1) {
    pTVar6 = &(this->GammaRenderTexture).field0_0x0;
  }
  if (pTVar6->DebugPtr != (UTextureRenderTarget2D *)0x0) {
    UTextureRenderTarget2D::UpdateResourceImmediate(pTVar6->DebugPtr,true);
    UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference();
    return pTVar6->DebugPtr;
  }
  FVar1 = this->Dimensions;
  this->RenderTextureDimensions = FVar1;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UTextureRenderTarget2D>(pUVar4);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UTextureRenderTarget2D *)0x0))
  {
    pTVar6->DebugPtr = pUVar5;
    if (pUVar5 == (UTextureRenderTarget2D *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1012220025257328325>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                         ,0x13b,"*WhichTexture");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UTextureRenderTarget2D *)(*pcVar2)();
        return pUVar5;
      }
      goto LAB_14cb99c26;
    }
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar5);
    pTVar6->DebugPtr = pUVar5;
  }
  (pUVar5->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  uVar7 = __real_400ccccd;
  if (param_1) {
    uVar7 = __real_3f800000;
  }
  *(undefined4 *)&pTVar6->DebugPtr->_padding_ = uVar7;
  UTextureRenderTarget2D::InitCustomFormat
            (pTVar6->DebugPtr,FVar1.Width,FVar1.Height,PF_FloatRGBA,false);
  UTextureRenderTarget2D::UpdateResourceImmediate(pTVar6->DebugPtr,true);
  UE::Internal::FlushRHIThreadToUpdateTextureRenderTargetReference();
LAB_14cb99c26:
  return pTVar6->DebugPtr;
}

// RestoreComponentsMaxDrawDistance @ 14cbad430

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
UE::Geometry::FWorldRenderCapture::RestoreComponentsMaxDrawDistance(FWorldRenderCapture *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ComponentsRestoreMaxDrawDistance).AllocatorInstance.Data;
  iVar2 = (this->ComponentsRestoreMaxDrawDistance).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ComponentsRestoreMaxDrawDistance).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UPrimitiveComponent::SetCachedMaxDrawDistance
              (*(UPrimitiveComponent **)pFVar3,(*(UPrimitiveComponent **)pFVar3)->LDMaxDrawDistance)
    ;
    pFVar3 = pFVar3 + 8;
  }
  (this->ComponentsRestoreMaxDrawDistance).ArrayNum = 0;
  if ((this->ComponentsRestoreMaxDrawDistance).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ComponentsRestoreMaxDrawDistance).AllocatorInstance,0,
               &(this->ComponentsRestoreMaxDrawDistance).ArrayMax);
  }
  return;
}

// SetDimensions @ 14cbaf3a0

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
UE::Geometry::FWorldRenderCapture::SetDimensions
          (FWorldRenderCapture *this,FImageDimensions *param_1)

{
  this->Dimensions = *param_1;
  return;
}

// SetEnableWriteDebugImage @ 14cbaf3d0

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
UE::Geometry::FWorldRenderCapture::SetEnableWriteDebugImage
          (FWorldRenderCapture *this,bool param_1,int param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  this->bWriteDebugImage = param_1;
  if (0 < param_2) {
    this->DebugImageCounter = param_2;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    ::FString::AssignRange
              (&this->DebugImageFolderName,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar3);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetVisibleActors @ 14cbb2260

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
UE::Geometry::FWorldRenderCapture::SetVisibleActors
          (FWorldRenderCapture *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SetVisibleActorsAndComponents(this,param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// SetVisibleActorsAndComponents @ 14cbb22a0

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
UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents
          (FWorldRenderCapture *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  TVector<double>_u_0 *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  undefined1 local_res20 [8];
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  int local_180;
  int local_17c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_178;
  FScriptContainerElement *local_170;
  <lambda_1> local_168;
  <lambda_1> local_158;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TVector<double>_u_0 local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_a8 [2];
  char local_70;
  undefined4 local_4c;
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId201,"FWorldRenderCapture::SetVisibleActorsAndComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
               ,0xc9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId201);
  }
  if (*(int *)&(this->VisiblePrimitives).Elements.field_0x8 !=
      *(int *)&(this->VisiblePrimitives).Elements.field_0x34) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    UnhashElements(&this->VisiblePrimitives);
    iVar19 = *(int *)&(this->VisiblePrimitives).Elements.field_0xc;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x8 = 0;
    if (iVar19 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->VisiblePrimitives,0,
                 (int *)&(this->VisiblePrimitives).Elements.field_0xc);
    }
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x28 = 0;
  }
  RestoreComponentsMaxDrawDistance(this);
  local_184 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)local_184;
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_70 = '\0';
  local_170 = pFVar17 + uVar15 * 8;
  do {
    pFVar20 = local_170;
    if (param_1->ArrayNum != (int)uVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar17 == pFVar20) {
      pFVar20 = (param_2->AllocatorInstance).Data;
      iVar19 = param_2->ArrayNum;
      pFVar17 = pFVar20 + (longlong)iVar19 * 8;
      while( true ) {
        if (param_2->ArrayNum != iVar19) {
          `TCheckedPointerIterator<UActorComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_187);
        }
        if (pFVar20 == pFVar17) break;
        local_158.__this = this;
        local_158.BoundsBuilder = (Builder *)local_a8;
        ``UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents'::__l2::<lambda_1>::
        operator()'::__l2::<lambda_1>::
        operator()<__UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                  (&local_158,*(UActorComponent **)pFVar20,&local_158);
        pFVar20 = pFVar20 + 8;
      }
      pTVar14 = local_a8;
      if (local_70 == '\0') {
        pTVar14 = &local_e8;
      }
      local_b8 = 0;
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Y = 0.0;
      local_e8._s_0.Z = 0.0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      dVar2 = (pTVar14->_s_0).Y;
      dVar7 = (pTVar14->_s_0).Z;
      dVar8 = (&pTVar14->_s_0)[1].X;
      (this->VisibleBounds).Origin.field0_0x0._s_0.X = (pTVar14->_s_0).X;
      (this->VisibleBounds).Origin.field0_0x0._s_0.Y = dVar2;
      dVar9 = (&pTVar14->_s_0)[1].Y;
      dVar10 = (&pTVar14->_s_0)[1].Z;
      (this->VisibleBounds).Origin.field0_0x0._s_0.Z = dVar7;
      (this->VisibleBounds).BoxExtent.field0_0x0._s_0.X = dVar8;
      dVar2 = (&pTVar14->_s_0)[2].X;
      (this->VisibleBounds).BoxExtent.field0_0x0._s_0.Y = dVar9;
      (this->VisibleBounds).BoxExtent.field0_0x0._s_0.Z = dVar10;
      (this->VisibleBounds).SphereRadius = dVar2;
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)(*(longlong *)pFVar17 + 0x248));
    uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
    iStack_140 = 0;
    local_128 = 0;
    puVar1 = &(pTVar13->Elements).field_0x10;
    uStack_13c = 1;
    uStack_12c = 0;
    if (uVar3 != 0) {
      puVar4 = *(uint **)&(pTVar13->Elements).field_0x20;
      puVar22 = (uint *)puVar1;
      if (puVar4 != (uint *)0x0) {
        puVar22 = puVar4;
      }
      uVar18 = *puVar22;
      while (uVar18 == 0) {
        lVar16 = (longlong)iStack_140;
        local_128 = local_128 + 0x20;
        iStack_140 = iStack_140 + 1;
        uStack_12c = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_140)
        goto LAB_14cbb2460;
        uVar18 = puVar22[lVar16 + 1];
      }
      uStack_13c = -uVar18 & uVar18;
      uVar15 = (ulonglong)uStack_13c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_180 = (int)lVar16;
      uStack_12c = local_128 + -1 + local_180;
      if ((int)uVar3 < (int)uStack_12c) {
        uStack_12c = uVar3;
      }
    }
LAB_14cbb2460:
    uVar18 = *(uint *)&(pTVar13->Elements).field_0x28;
    uStack_124 = local_4c;
    iStack_120 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
    uVar23 = uVar18 & 0xffffffe0;
    TStack_110._padding_ = CONCAT44(uStack_13c,iStack_140);
    uStack_130 = 0xffffffff;
    iVar19 = (int)uVar18 >> 5;
    TStack_110._28_4_ = local_4c;
    TStack_110.BaseBitIndex = local_128;
    uStack_f0 = CONCAT44(uStack_11c,iStack_120);
    TStack_110.UnvisitedBitMask = 0xffffffff;
    local_178 = pTVar13;
    local_148 = pTVar13;
    local_138 = puVar1;
    local_118 = pTVar13;
    TStack_110.CurrentBitIndex = uStack_12c;
    TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar18 < 0) || ((int)uVar3 < (int)uVar18)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar11 = local_178;
    uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
    if (uVar18 != uVar3) {
      puVar5 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
      puVar21 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar21 = puVar5;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar18 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14cbb2580;
        uVar18 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar15 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_17c = (int)lVar16;
      uVar18 = local_17c + -1 + uVar23;
      if ((int)uVar3 < (int)uVar18) {
        uVar18 = uVar3;
      }
    }
LAB_14cbb2580:
    while( true ) {
      pTVar13 = local_118;
      if (*(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34 !=
          (int)uStack_f0) {
        local_188 = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
      }
      if (((TStack_110.CurrentBitIndex == uVar18) &&
          (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar13 == pTVar11)) break;
      local_168.BoundsBuilder = (Builder *)local_a8;
      local_168.__this = this;
      ``UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents'::__l2::<lambda_1>::
      operator()'::__l2::<lambda_1>::
      operator()<__UE::Geometry::FWorldRenderCapture::SetVisibleActorsAndComponents_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (&local_168,
                 *(UActorComponent **)
                  (*(longlong *)&pTVar13->Elements + (longlong)TStack_110.CurrentBitIndex * 0x10),
                 &local_168);
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    pFVar17 = pFVar17 + 8;
    uVar15 = (ulonglong)local_184;
  } while( true );
}

// SetVisibleComponents @ 14cbb26d0

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
UE::Geometry::FWorldRenderCapture::SetVisibleComponents
          (FWorldRenderCapture *this,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SetVisibleActorsAndComponents(this,&local_18,param_1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// SetWorld @ 14cbb2710

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
UE::Geometry::FWorldRenderCapture::SetWorld(FWorldRenderCapture *this,UWorld *param_1)

{
  this->World = param_1;
  return;
}

// WriteDebugImage @ 14cbbce90

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
UE::Geometry::FWorldRenderCapture::WriteDebugImage
          (FWorldRenderCapture *this,FImageAdapter *param_1,FString *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  iVar4 = this->DebugImageCounter;
  if (this->DebugImageCounter < 0) {
    iVar4 = CaptureIndex;
    CaptureIndex = CaptureIndex + 1;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FString::FString(&local_28,pwVar3);
  pFVar2 = ::FString::FString(&local_18,&this->DebugImageFolderName);
  AssetUtils::SaveDebugImage(param_1,false,pFVar2,pFVar1,iVar4);
  return;
}

