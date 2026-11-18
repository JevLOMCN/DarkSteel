// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 14

// StaticClass @ 14ddba2d0

UClass * __cdecl UMoviePipelineDeferredPass_PathTracer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMoviePipelineDeferredPassBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPass_PathTracer",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPass_PathTracer>,
               InternalVTableHelperCtorCaller<UMoviePipelineDeferredPass_PathTracer>,local_res8,
               UMoviePipelineDeferredPassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton;
}

// UMoviePipelineDeferredPass_PathTracer @ 14ddc7ea0

UMoviePipelineDeferredPass_PathTracer * __thiscall
UMoviePipelineDeferredPass_PathTracer::UMoviePipelineDeferredPass_PathTracer
          (UMoviePipelineDeferredPass_PathTracer *this,FVTableHelper *param_1)

{
  UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPass_PathTracer__6B_;
  return this;
}

// UMoviePipelineDeferredPass_PathTracer @ 14ddc7ed0

UMoviePipelineDeferredPass_PathTracer * __thiscall
UMoviePipelineDeferredPass_PathTracer::UMoviePipelineDeferredPass_PathTracer
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  ForAnyElementType FVar1;
  FString local_58;
  FString local_48;
  FMoviePipelinePassIdentifier local_38;
  
  UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPass_PathTracer__6B_;
  ::FString::FString(&local_48,L"camera");
  ::FString::FString(&local_58,"PathTracer");
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
            ((FMoviePipelinePassIdentifier *)&this->_padding_,&local_38);
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

// ~UMoviePipelineDeferredPass_PathTracer @ 14ddcbc40

void __thiscall
UMoviePipelineDeferredPass_PathTracer::~UMoviePipelineDeferredPass_PathTracer
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineDeferredPass_PathTracer__6B_;
  UMoviePipelineDeferredPassBase::~UMoviePipelineDeferredPassBase
            ((UMoviePipelineDeferredPassBase *)this);
  return;
}

// CalculateViewFamily @ 14ddd7c60

TSharedPtr<FSceneViewFamilyContext,1> * __thiscall
UMoviePipelineDeferredPass_PathTracer::CalculateViewFamily
          (UMoviePipelineDeferredPass_PathTracer *this,
          TSharedPtr<FSceneViewFamilyContext,1> *__return_storage_ptr__,
          FMoviePipelineRenderPassMetrics *param_1,IViewCalcPayload *param_2)

{
  param_1->SpatialShiftX = 0.0;
  param_1->SpatialShiftY = 0.0;
  (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X = 0.5;
  (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y = 0.5;
  UMoviePipelineImagePassBase::CalculateViewFamily
            ((UMoviePipelineImagePassBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetOutputFileSortingOrder @ 14dde2e60

int __thiscall
UMoviePipelineDeferredPass_PathTracer::GetOutputFileSortingOrder
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  return 2;
}

// GetPrivateStaticClass @ 14dde3de0

UClass * __cdecl UMoviePipelineDeferredPass_PathTracer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMoviePipelineDeferredPassBase::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineDeferredPass_PathTracer",
               &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton,
               StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineDeferredPass_PathTracer>,
               InternalVTableHelperCtorCaller<UMoviePipelineDeferredPass_PathTracer>,local_res8,
               UMoviePipelineDeferredPassBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.InnerSingleton;
}

// GetViewShowFlags @ 14dde65d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMoviePipelineDeferredPass_PathTracer::GetViewShowFlags
          (UMoviePipelineDeferredPass_PathTracer *this,FEngineShowFlags *param_1,
          EViewModeIndex *param_2)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  FEngineShowFlags local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar1 = 0;
  local_68.CustomShowFlags.NumBits = 0;
  local_68.CustomShowFlags.MaxBits = 0x80;
  local_68._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_68._8_8_ = _UNK_15060db28;
  local_68._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_68._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&local_68,ESFIM_Game);
  local_68.Pivot = 0;
  local_68.LightInfluences = 0;
  local_68.HitProxies = 0;
  local_68.Bounds = 0;
  local_68.ModeWidgets = 0;
  local_68.EditingLevelInstance = 0;
  local_68.Selection = 0;
  local_68.Splines = 0;
  local_68.Cover = 0;
  local_68.MeshEdges = 0;
  local_68.Snap = 0;
  local_68.Grid = 0;
  local_68.LargeVertices = 0;
  local_68.Editor = 0;
  local_68.Brushes = 0;
  local_68.BSPSplit = 0;
  local_68.AudioRadius = 0;
  local_68.CameraFrustums = 0;
  local_68.MassProperties = 0;
  local_68.Constraints = 0;
  local_68.StreamingBounds = 0;
  local_68.LightMapDensity = 0;
  local_68.StationaryLightOverlap = 0;
  local_68.ShaderComplexity = 0;
  local_68.LightComplexity = 0;
  local_68.VisualizeInstanceUpdates = 0;
  local_68.HISMCClusterTree = 0;
  local_68.HISMCOcclusionBounds = 0;
  local_68.Navigation = 0;
  local_68.DebugAI = 0;
  local_68.VisualizeSSS = 0;
  local_68.SelectionOutline = 0;
  local_68.VisualizeOutOfBoundsPixels = 0;
  local_68.VisualizeTSR = 0;
  local_68.VisualizeTemporalUpscaler = 0;
  local_68.VisualizeReprojection = 0;
  local_68.VisualizeMotionVectors = 0;
  local_68.VisualizeMotionBlur = 0;
  local_68.ScreenPercentage = 1;
  local_68.PhysicalMaterialMasks = 0;
  local_68.VertexColors = 0;
  local_68.VisualizeDOF = 0;
  local_68.TestImage = 0;
  local_68.OpaqueCompositeEditorPrimitives = 0;
  local_68.CompositeEditorPrimitives = 0;
  local_68.CompositeDebugPrimitives = 1;
  local_68.MotionBlur = 1;
  local_68.GBufferHints = 0;
  local_68.VectorFields = 0;
  local_68.VisualizeVirtualShadowMap = 0;
  local_68.VisualizeGroom = 0;
  local_68.VisualizeSubstrate = 0;
  local_68.VisualizeLumen = 0;
  local_68.VisualizeNanite = 0;
  local_68.VisualizeBuffer = 0;
  local_68.MaterialAmbientOcclusion = 1;
  local_68.MaterialNormal = 1;
  local_68.ReflectionOverride = 0;
  local_68.LightingOnlyOverride = 0;
  local_68.OverrideDiffuseAndSpecular = 0;
  local_68.VisualizeLocalExposure = 0;
  local_68.VisualizeLocalFogVolumes = 0;
  local_68.VisualizeSkyLightIlluminance = 0;
  local_68.VisualizeHDR = 0;
  local_68.DisableOcclusionQueries = 0;
  local_68.VisualizeInstanceOcclusionQueries = 0;
  local_68.OcclusionMeshes = 0;
  local_68.VREditing = 0;
  local_68.ServerDrawDebug = 0;
  local_68.Bones = 0;
  local_68.VisualizeVirtualTexture = 0;
  local_68.RequiredTextureResolution = 0;
  local_68.OutputMaterialTextureScales = 0;
  local_68.MaterialTextureScaleAccuracy = 0;
  local_68.MeshUVDensityAccuracy = 0;
  local_68.PrimitiveDistanceAccuracy = 0;
  local_68.ShaderComplexityWithQuadOverdraw = 0;
  local_68.QuadOverdraw = 0;
  local_68.HLODColoration = 0;
  local_68.LODColoration = 0;
  local_68.VisualizeShadingModels = 0;
  local_68.VisualizeSSR = 0;
  local_68.VisualizeLightingOnProbes = 0;
  local_68.VisualizeGlobalDistanceField = 0;
  local_68.PhysicsField = 0;
  local_68.VisualizeMeshDistanceFields = 0;
  local_68.VisualizeDistanceFieldAO = 0;
  local_68.VolumeLightingSamples = 0;
  local_68.VisualizeVolumetricLightmap = 0;
  local_68.PrecomputedVisibilityCells = 0;
  local_68.VisualizeLightCulling = 0;
  local_68.DistanceCulledPrimitives = 0;
  local_68.StereoRendering = 0;
  local_68.HMDDistortion = 0;
  local_68.HighResScreenshotMask = 0;
  local_68.CameraSafeFrames = 0;
  local_68.CameraAspectRatioBars = 0;
  local_68.CollisionPawn = 0;
  local_68.CollisionVisibility = 0;
  local_68.Collision = 0;
  local_68.ActorColoration = 0;
  local_68.Game = 1;
  local_68.Volumes = 0;
  local_68.LightRadius = 0;
  local_68.Wireframe = 0;
  local_68.ShadowFrustums = 0;
  local_68.RandomColor = 0;
  local_68.FrontBackFace = 0;
  local_68.Zebra = 0;
  local_68.Clay = 0;
  local_68.StereoMotionVectors = 0;
  local_68.AlphaInvert = 0;
  local_68.SceneCaptureCopySceneDepth = 1;
  local_68.VisualizeShadowCasters = 0;
  local_68.VisualizeLWCComplexity = 0;
  local_68.VisualizeGPUSkinCache = 0;
  local_68.LumenShortRangeAmbientOcclusion = 1;
  local_68.LumenSecondaryBounces = 1;
  local_68.LumenFarFieldTraces = 1;
  local_68.LumenGlobalTraces = 1;
  local_68.LumenDetailTraces = 1;
  local_68.LumenScreenTraces = 1;
  local_68.DebugDrawDistantVirtualSMLights = 0;
  local_68.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_68.VisualizeVolumetricCloudConservativeDensity = 0;
  local_68.VirtualTexturePrimitives = 0;
  local_68.VisualizePostProcessStack = 0;
  local_68.VisualizeCalibrationCustom = 0;
  local_68.VisualizeCalibrationGrayscale = 0;
  local_68.VisualizeCalibrationColor = 0;
  local_68.VisualizeLightFunctionAtlas = 0;
  local_68.VisualizeSkyAtmosphere = 0;
  local_68.RayTracingDebug = 0;
  local_68.PathTracing = 0;
  FEngineShowFlags::operator=(param_1,&local_68);
  if (local_68.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_68.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  param_1->PathTracing = 1;
  if (this->bReferenceMotionBlur == false) {
    uVar1 = 0x200;
  }
  param_1->MotionBlur = uVar1 >> 9;
  *param_2 = VMI_PathTracing;
  return;
}

// IsAntiAliasingSupported @ 14dde7cd0

bool __thiscall
UMoviePipelineDeferredPass_PathTracer::IsAntiAliasingSupported
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  return false;
}

// NeedsFrameThrottle @ 14dde8b90

bool __thiscall
UMoviePipelineDeferredPass_PathTracer::NeedsFrameThrottle
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  return true;
}

// SetupImpl @ 14ddfee40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineDeferredPass_PathTracer::SetupImpl
          (UMoviePipelineDeferredPass_PathTracer *this,FMoviePipelineRenderPassInitSettings *param_1
          )

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  UMoviePipeline *pUVar2;
  
  bVar1 = UMoviePipelineDeferredPassBase::CheckIfPathTracerIsSupported
                    ((UMoviePipelineDeferredPassBase *)this);
  if (!bVar1) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar2 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00014ddfee96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar2,1,UNRECOVERED_JUMPTABLE);
    return;
  }
  UMoviePipelineDeferredPassBase::SetupImpl((UMoviePipelineDeferredPassBase *)this,param_1);
  return;
}

// StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer @ 14ddff250

void __cdecl
UMoviePipelineDeferredPass_PathTracer::StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02e50

void __thiscall
UMoviePipelineDeferredPass_PathTracer::UpdateTelemetry
          (UMoviePipelineDeferredPass_PathTracer *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  
  bVar2 = param_1->bUsesPPMs;
  param_1->bUsesPathTracer = true;
  iVar3 = (int)this->_padding_;
  pcVar5 = (char *)this->_padding_;
  pcVar1 = pcVar5 + (longlong)iVar3 * 0x48;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<FMoviePipelinePostProcessPass_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pcVar5 == pcVar1) break;
    if (*pcVar5 != '\0') {
      bVar4 = 1;
LAB_14de02eb8:
      param_1->bUsesPPMs = (bool)(bVar2 | bVar4);
      return;
    }
    pcVar5 = pcVar5 + 0x48;
  }
  bVar4 = 0;
  goto LAB_14de02eb8;
}

// ValidateStateImpl @ 14de02f40

void __thiscall
UMoviePipelineDeferredPass_PathTracer::ValidateStateImpl
          (UMoviePipelineDeferredPass_PathTracer *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [24];
  FText local_18;
  
  UMoviePipelineSetting::ValidateStateImpl((UMoviePipelineSetting *)this);
  bVar3 = UMoviePipelineDeferredPassBase::CheckIfPathTracerIsSupported
                    ((UMoviePipelineDeferredPassBase *)this);
  if (!bVar3) {
    FText::AsLocalizable_Advanced_LocText
              (&local_18,L"MovieRenderPipeline",L"PathTracerValidation_Unsupported",
               L"Path Tracing is currently not enabled for this project and this render pass will not work."
              );
    if (((FText *)this->_padding_ <= &local_18) &&
       (&local_18 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
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
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar4 = (int)this->_padding_;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    puVar5 = (undefined8 *)(this->_padding_ + (longlong)iVar4 * 0x10);
    *puVar5 = 0;
    *puVar5 = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res10);
    }
    *(uint *)(puVar5 + 1) = local_18.Flags;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

