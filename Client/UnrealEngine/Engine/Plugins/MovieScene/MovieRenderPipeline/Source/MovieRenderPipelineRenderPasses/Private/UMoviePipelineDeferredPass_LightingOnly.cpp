// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 8

// StaticClass @ 14ddba150

UClass * __cdecl UMoviePipelineDeferredPass_LightingOnly::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMoviePipelineDeferredPassBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPass_LightingOnly",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPass_LightingOnly>
               ,InternalVTableHelperCtorCaller<UMoviePipelineDeferredPass_LightingOnly>,local_res8,
               UMoviePipelineDeferredPassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton;
}

// UMoviePipelineDeferredPass_LightingOnly @ 14ddc7cf0

UMoviePipelineDeferredPass_LightingOnly * __thiscall
UMoviePipelineDeferredPass_LightingOnly::UMoviePipelineDeferredPass_LightingOnly
          (UMoviePipelineDeferredPass_LightingOnly *this,FVTableHelper *param_1)

{
  UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineDeferredPass_LightingOnly__6B_;
  return this;
}

// UMoviePipelineDeferredPass_LightingOnly @ 14ddc7d20

UMoviePipelineDeferredPass_LightingOnly * __thiscall
UMoviePipelineDeferredPass_LightingOnly::UMoviePipelineDeferredPass_LightingOnly
          (UMoviePipelineDeferredPass_LightingOnly *this)

{
  ForAnyElementType FVar1;
  FString local_58;
  FString local_48;
  FMoviePipelinePassIdentifier local_38;
  
  UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this);
  *(undefined ***)this = &___7UMoviePipelineDeferredPass_LightingOnly__6B_;
  ::FString::FString(&local_48,L"camera");
  ::FString::FString(&local_58,"LightingOnly");
  FVar1.Data = local_58.Data.AllocatorInstance.Data;
  local_38.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_38.Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_58.Data.ArrayNum,
               &local_38.Name.Data.ArrayMax);
    memcpy(local_38.Name.Data.AllocatorInstance.Data,FVar1.Data,(longlong)local_58.Data.ArrayNum * 2
          );
  }
  FVar1.Data = local_48.Data.AllocatorInstance.Data;
  local_38.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_38.CameraName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_38.CameraName,
               local_48.Data.ArrayNum,&local_38.CameraName.Data.ArrayMax);
    memcpy(local_38.CameraName.Data.AllocatorInstance.Data,FVar1.Data,
           (longlong)local_48.Data.ArrayNum * 2);
  }
  FMoviePipelinePassIdentifier::operator=
            ((FMoviePipelinePassIdentifier *)&this->field_0x128,&local_38);
  if (local_38.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_38.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Name.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UMoviePipelineDeferredPass_LightingOnly @ 14ddcbc20

void __thiscall
UMoviePipelineDeferredPass_LightingOnly::~UMoviePipelineDeferredPass_LightingOnly
          (UMoviePipelineDeferredPass_LightingOnly *this)

{
  *(undefined ***)this = &___7UMoviePipelineDeferredPass_LightingOnly__6B_;
  UMoviePipelineDeferredPassBase::~UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this);
  return;
}

// GetOutputFileSortingOrder @ 14dde2e50

int __thiscall
UMoviePipelineDeferredPass_LightingOnly::GetOutputFileSortingOrder
          (UMoviePipelineDeferredPass_LightingOnly *this)

{
  return 2;
}

// GetPrivateStaticClass @ 14dde3d20

UClass * __cdecl UMoviePipelineDeferredPass_LightingOnly::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMoviePipelineDeferredPassBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPass_LightingOnly",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly,0x278,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPass_LightingOnly>
               ,InternalVTableHelperCtorCaller<UMoviePipelineDeferredPass_LightingOnly>,local_res8,
               UMoviePipelineDeferredPassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.InnerSingleton;
}

// GetViewShowFlags @ 14dde64d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMoviePipelineDeferredPass_LightingOnly::GetViewShowFlags
          (UMoviePipelineDeferredPass_LightingOnly *this,FEngineShowFlags *param_1,
          EViewModeIndex *param_2)

{
  undefined1 auStack_78 [32];
  FEngineShowFlags local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.CustomShowFlags.NumBits = 0;
  local_58.CustomShowFlags.MaxBits = 0x80;
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
  FEngineShowFlags::operator=(param_1,&local_58);
  if (local_58.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_58.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  param_1->LightingOnlyOverride = 1;
  *param_2 = VMI_LightingOnly;
  return;
}

// StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly @ 14ddff240

void __cdecl
UMoviePipelineDeferredPass_LightingOnly::
StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly(void)

{
  return;
}

