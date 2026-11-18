// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144e03720

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
FScreenProbeIntegrateCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

{
  int iVar1;
  FShaderParameterMap *pFVar2;
  FShader *this;
  FShaderParametersMetadata *pFVar3;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
    pFVar2 = param_1->ParameterMap;
    iVar1 = param_1->PermutationId;
    pFVar3 = FParameters::FTypeInfo::GetStructMetadata();
    FShaderParameterBindings::BindForLegacyShaderParameters
              (&this->Bindings,this,iVar1,pFVar2,pFVar3,true);
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144e04650

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl FScreenProbeIntegrateCS::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0xe0);
  if (this != (FShader *)0x0) {
    memset(this,0,0xe0);
    FShader::FShader(this);
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144e21c90

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl FScreenProbeIntegrateCS::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  FTypeLayoutDesc *pFVar5;
  FString *pFVar6;
  FGlobalShaderType *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FParameters::FTypeInfo::GetStructMetadata();
      pFVar5 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FScreenProbeIntegrateCS",
                 L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",L"ScreenProbeIntegrateCS",5,
                 0x400,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/Lumen/LumenScreenProbeGather.usf");
      pFVar6 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar8,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar7;
        }
      }
      atexit(`FScreenProbeIntegrateCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144e27350

FTypeLayoutDesc * __thiscall FScreenProbeIntegrateCS::GetTypeLayout(FScreenProbeIntegrateCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenProbeInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenProbeIntegrateCS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144e27f30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FScreenProbeIntegrateCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144e309e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FScreenProbeIntegrateCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  local_38;
  
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  ::
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
            (&local_38,param_1->PermutationId);
  if (local_38.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    bVar1 = Lumen::SupportsMultipleClosureEvaluation(param_1->Platform);
    if (!bVar1) {
      return false;
    }
  }
  bVar1 = DoesPlatformSupportLumenGI(param_1->Platform,false);
  return bVar1;
}

// ShouldPrecachePermutation @ 144e30ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FScreenProbeIntegrateCS::ShouldPrecachePermutation(FGlobalShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  EScreenProbeIrradianceFormat EVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  local_88;
  FEngineShowFlags local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  ::
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
            (&local_88,*(int *)&param_1->field_0x4);
  if ((local_88.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
     (bVar2 = Lumen::SupportsMultipleClosureEvaluation(*(EShaderPlatform *)param_1), !bVar2)) {
    return NotUsed;
  }
  pTVar1 = CVarLumenShortRangeAOApplyDuringIntegration.Ref;
  if (local_88.Tail.Tail.Tail.Tail.DimensionValue != (GLumenScreenProbeStochasticInterpolation != 0)
     ) {
    return NotUsed;
  }
  if (GLumenScreenProbeIntegrationTileClassification != 0) {
    iVar4 = GLumenScreenProbeDiffuseIntegralMethod;
    if (GLumenScreenProbeGatherReferenceMode != 0) {
      iVar4 = 2;
    }
    if (iVar4 != 2) {
      if (local_88.DimensionValue == 3) {
        return NotUsed;
      }
      goto LAB_144e30f41;
    }
  }
  if (local_88.DimensionValue != 3) {
    return NotUsed;
  }
LAB_144e30f41:
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  if ((local_88.Tail.DimensionValue != false) &&
     (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) == 0)) {
    return NotUsed;
  }
  local_58.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._8_8_ = _UNK_15060db28;
  local_58.CustomShowFlags.NumBits = 0;
  local_58._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_58._24_8_ = _UNK_15060db28;
  local_58.CustomShowFlags.MaxBits = 0x80;
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
  EVar3 = LumenScreenProbeGather::GetScreenProbeIrradianceFormat(&local_58);
  if (local_58.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_58.CustomShowFlags.AllocatorInstance.SecondaryData);
    return local_88.Tail.Tail.Tail.DimensionValue != EVar3;
  }
  return local_88.Tail.Tail.Tail.DimensionValue != EVar3;
}

// ShouldPrecachePermutationImpl @ 144e31480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FScreenProbeIntegrateCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  EScreenProbeIrradianceFormat EVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  TStack_88;
  FEngineShowFlags FStack_58;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
  ::
  TShaderPermutationDomain<FScreenProbeIntegrateCS::FTileClassificationMode,FScreenProbeIntegrateCS::FShortRangeAO,FScreenProbeIntegrateCS::FShortRangeAOBentNormal,FScreenProbeIntegrateCS::FProbeIrradianceFormat,FScreenProbeIntegrateCS::FStochasticProbeInterpolation,FScreenProbeIntegrateCS::FOverflowTile,FScreenProbeIntegrateCS::FSupportBackfaceDiffuse,FScreenProbeIntegrateCS::FScreenProbeExtraAO,FScreenProbeIntegrateCS::FIntegrateDownsampleFactor>
            (&TStack_88,param_1->PermutationId);
  if ((TStack_88.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
     (bVar2 = Lumen::SupportsMultipleClosureEvaluation(param_1->Platform), !bVar2)) {
    return NotUsed;
  }
  pTVar1 = CVarLumenShortRangeAOApplyDuringIntegration.Ref;
  if (TStack_88.Tail.Tail.Tail.Tail.DimensionValue !=
      (GLumenScreenProbeStochasticInterpolation != 0)) {
    return NotUsed;
  }
  if (GLumenScreenProbeIntegrationTileClassification != 0) {
    iVar4 = GLumenScreenProbeDiffuseIntegralMethod;
    if (GLumenScreenProbeGatherReferenceMode != 0) {
      iVar4 = 2;
    }
    if (iVar4 != 2) {
      if (TStack_88.DimensionValue == 3) {
        return NotUsed;
      }
      goto LAB_144e30f41;
    }
  }
  if (TStack_88.DimensionValue != 3) {
    return NotUsed;
  }
LAB_144e30f41:
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  if ((TStack_88.Tail.DimensionValue != false) &&
     (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) == 0)) {
    return NotUsed;
  }
  FStack_58.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FStack_58._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  FStack_58._8_8_ = _UNK_15060db28;
  FStack_58.CustomShowFlags.NumBits = 0;
  FStack_58._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  FStack_58._24_8_ = _UNK_15060db28;
  FStack_58.CustomShowFlags.MaxBits = 0x80;
  FEngineShowFlags::InitCustomShowFlags(&FStack_58,ESFIM_Game);
  FStack_58.Pivot = 0;
  FStack_58.LightInfluences = 0;
  FStack_58.HitProxies = 0;
  FStack_58.Bounds = 0;
  FStack_58.ModeWidgets = 0;
  FStack_58.EditingLevelInstance = 0;
  FStack_58.Selection = 0;
  FStack_58.Splines = 0;
  FStack_58.Cover = 0;
  FStack_58.MeshEdges = 0;
  FStack_58.Snap = 0;
  FStack_58.Grid = 0;
  FStack_58.LargeVertices = 0;
  FStack_58.Editor = 0;
  FStack_58.Brushes = 0;
  FStack_58.BSPSplit = 0;
  FStack_58.AudioRadius = 0;
  FStack_58.CameraFrustums = 0;
  FStack_58.MassProperties = 0;
  FStack_58.Constraints = 0;
  FStack_58.StreamingBounds = 0;
  FStack_58.LightMapDensity = 0;
  FStack_58.StationaryLightOverlap = 0;
  FStack_58.ShaderComplexity = 0;
  FStack_58.LightComplexity = 0;
  FStack_58.VisualizeInstanceUpdates = 0;
  FStack_58.HISMCClusterTree = 0;
  FStack_58.HISMCOcclusionBounds = 0;
  FStack_58.Navigation = 0;
  FStack_58.DebugAI = 0;
  FStack_58.VisualizeSSS = 0;
  FStack_58.SelectionOutline = 0;
  FStack_58.DisableOcclusionQueries = 0;
  FStack_58.VisualizeInstanceOcclusionQueries = 0;
  FStack_58.OcclusionMeshes = 0;
  FStack_58.VREditing = 0;
  FStack_58.ServerDrawDebug = 0;
  FStack_58.Bones = 0;
  FStack_58.VisualizeVirtualTexture = 0;
  FStack_58.RequiredTextureResolution = 0;
  FStack_58.OutputMaterialTextureScales = 0;
  FStack_58.MaterialTextureScaleAccuracy = 0;
  FStack_58.MeshUVDensityAccuracy = 0;
  FStack_58.PrimitiveDistanceAccuracy = 0;
  FStack_58.ShaderComplexityWithQuadOverdraw = 0;
  FStack_58.QuadOverdraw = 0;
  FStack_58.HLODColoration = 0;
  FStack_58.LODColoration = 0;
  FStack_58.VisualizeShadingModels = 0;
  FStack_58.VisualizeSSR = 0;
  FStack_58.VisualizeLightingOnProbes = 0;
  FStack_58.VisualizeGlobalDistanceField = 0;
  FStack_58.PhysicsField = 0;
  FStack_58.VisualizeMeshDistanceFields = 0;
  FStack_58.VisualizeDistanceFieldAO = 0;
  FStack_58.VolumeLightingSamples = 0;
  FStack_58.VisualizeVolumetricLightmap = 0;
  FStack_58.PrecomputedVisibilityCells = 0;
  FStack_58.VisualizeLightCulling = 0;
  FStack_58.DistanceCulledPrimitives = 0;
  FStack_58.StereoRendering = 0;
  FStack_58.HMDDistortion = 0;
  FStack_58.HighResScreenshotMask = 0;
  FStack_58.CameraSafeFrames = 0;
  FStack_58.CameraAspectRatioBars = 0;
  FStack_58.CollisionPawn = 0;
  FStack_58.CollisionVisibility = 0;
  FStack_58.Collision = 0;
  FStack_58.ActorColoration = 0;
  FStack_58.Game = 1;
  FStack_58.Volumes = 0;
  FStack_58.LightRadius = 0;
  FStack_58.Wireframe = 0;
  FStack_58.ShadowFrustums = 0;
  FStack_58.VisualizeOutOfBoundsPixels = 0;
  FStack_58.VisualizeTSR = 0;
  FStack_58.VisualizeTemporalUpscaler = 0;
  FStack_58.VisualizeReprojection = 0;
  FStack_58.VisualizeMotionVectors = 0;
  FStack_58.VisualizeMotionBlur = 0;
  FStack_58.ScreenPercentage = 1;
  FStack_58.PhysicalMaterialMasks = 0;
  FStack_58.VertexColors = 0;
  FStack_58.VisualizeDOF = 0;
  FStack_58.TestImage = 0;
  FStack_58.OpaqueCompositeEditorPrimitives = 0;
  FStack_58.CompositeEditorPrimitives = 0;
  FStack_58.CompositeDebugPrimitives = 1;
  FStack_58.MotionBlur = 1;
  FStack_58.GBufferHints = 0;
  FStack_58.VectorFields = 0;
  FStack_58.VisualizeVirtualShadowMap = 0;
  FStack_58.VisualizeGroom = 0;
  FStack_58.VisualizeSubstrate = 0;
  FStack_58.VisualizeLumen = 0;
  FStack_58.VisualizeNanite = 0;
  FStack_58.VisualizeBuffer = 0;
  FStack_58.MaterialAmbientOcclusion = 1;
  FStack_58.MaterialNormal = 1;
  FStack_58.ReflectionOverride = 0;
  FStack_58.LightingOnlyOverride = 0;
  FStack_58.OverrideDiffuseAndSpecular = 0;
  FStack_58.VisualizeLocalExposure = 0;
  FStack_58.VisualizeLocalFogVolumes = 0;
  FStack_58.VisualizeSkyLightIlluminance = 0;
  FStack_58.VisualizeHDR = 0;
  FStack_58.RandomColor = 0;
  FStack_58.FrontBackFace = 0;
  FStack_58.Zebra = 0;
  FStack_58.Clay = 0;
  FStack_58.StereoMotionVectors = 0;
  FStack_58.AlphaInvert = 0;
  FStack_58.SceneCaptureCopySceneDepth = 1;
  FStack_58.VisualizeShadowCasters = 0;
  FStack_58.VisualizeLWCComplexity = 0;
  FStack_58.VisualizeGPUSkinCache = 0;
  FStack_58.LumenShortRangeAmbientOcclusion = 1;
  FStack_58.LumenSecondaryBounces = 1;
  FStack_58.LumenFarFieldTraces = 1;
  FStack_58.LumenGlobalTraces = 1;
  FStack_58.LumenDetailTraces = 1;
  FStack_58.LumenScreenTraces = 1;
  FStack_58.DebugDrawDistantVirtualSMLights = 0;
  FStack_58.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  FStack_58.VisualizeVolumetricCloudConservativeDensity = 0;
  FStack_58.VirtualTexturePrimitives = 0;
  FStack_58.VisualizePostProcessStack = 0;
  FStack_58.VisualizeCalibrationCustom = 0;
  FStack_58.VisualizeCalibrationGrayscale = 0;
  FStack_58.VisualizeCalibrationColor = 0;
  FStack_58.VisualizeLightFunctionAtlas = 0;
  FStack_58.VisualizeSkyAtmosphere = 0;
  FStack_58.RayTracingDebug = 0;
  FStack_58.PathTracing = 0;
  EVar3 = LumenScreenProbeGather::GetScreenProbeIrradianceFormat(&FStack_58);
  if (FStack_58.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)FStack_58.CustomShowFlags.AllocatorInstance.SecondaryData);
    return TStack_88.Tail.Tail.Tail.DimensionValue != EVar3;
  }
  return TStack_88.Tail.Tail.Tail.DimensionValue != EVar3;
}

// StaticGetTypeLayout @ 144e33c00

FTypeLayoutDesc * __cdecl FScreenProbeIntegrateCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FScreenProbeInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FScreenProbeIntegrateCS,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

