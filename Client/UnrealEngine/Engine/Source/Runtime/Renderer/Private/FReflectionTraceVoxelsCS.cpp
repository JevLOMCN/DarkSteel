// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// ConstructCompiledInstance @ 144cba9c0

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
FReflectionTraceVoxelsCS::ConstructCompiledInstance(FShaderCompiledShaderInitializerType *param_1)

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

// ConstructSerializedInstance @ 144cbba30

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

FShader * __cdecl FReflectionTraceVoxelsCS::ConstructSerializedInstance(void)

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

// GetStaticType @ 144cd1c30

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

FGlobalShaderType * __cdecl FReflectionTraceVoxelsCS::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar5,L"FReflectionTraceVoxelsCS",
                 L"/Engine/Private/Lumen/LumenReflectionTracing.usf",L"ReflectionTraceVoxelsCS",5,
                 0x80,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0xe0,pFVar4);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/Lumen/LumenReflectionTracing.usf");
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
      atexit(`FReflectionTraceVoxelsCS::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144cd7c90

FTypeLayoutDesc * __thiscall FReflectionTraceVoxelsCS::GetTypeLayout(FReflectionTraceVoxelsCS *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FReflectionTrac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FReflectionTraceVoxelsCS,0>::Do;
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

// InternalDestroy @ 144cd89c0

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
FReflectionTraceVoxelsCS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xe0);
  return;
}

// ShouldCompilePermutationImpl @ 144cea230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FReflectionTraceVoxelsCS::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  local_res8 [4];
  
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  ::
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
            (local_res8,param_1->PermutationId);
  if ((local_res8[0].Tail.DimensionValue == false) &&
     (local_res8[0].Tail.Tail.DimensionValue != false)) {
    return false;
  }
  bVar1 = DoesPlatformSupportLumenGI(param_1->Platform,false);
  return bVar1;
}

// ShouldPrecachePermutation @ 144cea860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EShaderPermutationPrecacheRequest __cdecl
FReflectionTraceVoxelsCS::ShouldPrecachePermutation(FGlobalShaderPermutationParameters *param_1)

{
  bool bVar1;
  bool bVar2;
  EShaderPermutationPrecacheRequest EVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  local_78 [2];
  FEngineShowFlags local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  bVar4 = false;
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
  if (((GLumenReflectionsSampleSceneColorAtHit != 0) && (GLumenReflectionScreenTraces != 0)) ||
     (GLumenReflectionsSampleSceneColorAtHit == 2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((GLumenReflectionsDistantScreenTraces == 0) || (GLumenReflectionScreenTraces == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  ::
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
            (local_78,*(int *)&param_1->field_0x4);
  bVar1 = Lumen::UseThreadGroupSize32();
  if (local_78[0].DimensionValue == bVar1) {
    bVar1 = Lumen::UseGlobalSDFTracing(&local_68);
    if (local_78[0].Tail.DimensionValue == bVar1) {
      bVar1 = Lumen::UseGlobalSDFTracing(&local_68);
      if (bVar1) {
        bVar1 = Lumen::UseGlobalSDFSimpleCoverageBasedExpand();
        if (bVar1) {
          bVar4 = true;
        }
      }
      if (local_78[0].Tail.Tail.DimensionValue == bVar4) {
        if (local_78[0].Tail.Tail.Tail.Tail.Tail.DimensionValue == bVar5) {
          if (local_78[0].Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == bVar2) {
            EVar3 = Precached;
          }
          else {
            EVar3 = NotPrecached;
          }
        }
        else {
          EVar3 = NotPrecached;
        }
      }
      else {
        EVar3 = NotPrecached;
      }
    }
    else {
      EVar3 = NotPrecached;
    }
  }
  else {
    EVar3 = NotUsed;
  }
  if (local_68.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_68.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  return EVar3;
}

// ShouldPrecachePermutationImpl @ 144ceaca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
FReflectionTraceVoxelsCS::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  bool bVar1;
  bool bVar2;
  EShaderPermutationPrecacheRequest EVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  aTStack_78 [2];
  FEngineShowFlags FStack_68;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  FStack_68.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  bVar4 = false;
  FStack_68.CustomShowFlags.NumBits = 0;
  FStack_68.CustomShowFlags.MaxBits = 0x80;
  FStack_68._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  FStack_68._8_8_ = _UNK_15060db28;
  FStack_68._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  FStack_68._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&FStack_68,ESFIM_Game);
  FStack_68.Pivot = 0;
  FStack_68.LightInfluences = 0;
  FStack_68.HitProxies = 0;
  FStack_68.Bounds = 0;
  FStack_68.ModeWidgets = 0;
  FStack_68.EditingLevelInstance = 0;
  FStack_68.Selection = 0;
  FStack_68.Splines = 0;
  FStack_68.Cover = 0;
  FStack_68.MeshEdges = 0;
  FStack_68.Snap = 0;
  FStack_68.Grid = 0;
  FStack_68.LargeVertices = 0;
  FStack_68.Editor = 0;
  FStack_68.Brushes = 0;
  FStack_68.BSPSplit = 0;
  FStack_68.AudioRadius = 0;
  FStack_68.CameraFrustums = 0;
  FStack_68.MassProperties = 0;
  FStack_68.Constraints = 0;
  FStack_68.StreamingBounds = 0;
  FStack_68.LightMapDensity = 0;
  FStack_68.StationaryLightOverlap = 0;
  FStack_68.ShaderComplexity = 0;
  FStack_68.LightComplexity = 0;
  FStack_68.VisualizeInstanceUpdates = 0;
  FStack_68.HISMCClusterTree = 0;
  FStack_68.HISMCOcclusionBounds = 0;
  FStack_68.Navigation = 0;
  FStack_68.DebugAI = 0;
  FStack_68.VisualizeSSS = 0;
  FStack_68.SelectionOutline = 0;
  FStack_68.DisableOcclusionQueries = 0;
  FStack_68.VisualizeInstanceOcclusionQueries = 0;
  FStack_68.OcclusionMeshes = 0;
  FStack_68.VREditing = 0;
  FStack_68.ServerDrawDebug = 0;
  FStack_68.Bones = 0;
  FStack_68.VisualizeVirtualTexture = 0;
  FStack_68.RequiredTextureResolution = 0;
  FStack_68.OutputMaterialTextureScales = 0;
  FStack_68.MaterialTextureScaleAccuracy = 0;
  FStack_68.MeshUVDensityAccuracy = 0;
  FStack_68.PrimitiveDistanceAccuracy = 0;
  FStack_68.ShaderComplexityWithQuadOverdraw = 0;
  FStack_68.QuadOverdraw = 0;
  FStack_68.HLODColoration = 0;
  FStack_68.LODColoration = 0;
  FStack_68.VisualizeShadingModels = 0;
  FStack_68.VisualizeSSR = 0;
  FStack_68.VisualizeLightingOnProbes = 0;
  FStack_68.VisualizeGlobalDistanceField = 0;
  FStack_68.PhysicsField = 0;
  FStack_68.VisualizeMeshDistanceFields = 0;
  FStack_68.VisualizeDistanceFieldAO = 0;
  FStack_68.VolumeLightingSamples = 0;
  FStack_68.VisualizeVolumetricLightmap = 0;
  FStack_68.PrecomputedVisibilityCells = 0;
  FStack_68.VisualizeLightCulling = 0;
  FStack_68.DistanceCulledPrimitives = 0;
  FStack_68.StereoRendering = 0;
  FStack_68.HMDDistortion = 0;
  FStack_68.HighResScreenshotMask = 0;
  FStack_68.CameraSafeFrames = 0;
  FStack_68.CameraAspectRatioBars = 0;
  FStack_68.CollisionPawn = 0;
  FStack_68.CollisionVisibility = 0;
  FStack_68.Collision = 0;
  FStack_68.ActorColoration = 0;
  FStack_68.Game = 1;
  FStack_68.Volumes = 0;
  FStack_68.LightRadius = 0;
  FStack_68.Wireframe = 0;
  FStack_68.ShadowFrustums = 0;
  FStack_68.VisualizeOutOfBoundsPixels = 0;
  FStack_68.VisualizeTSR = 0;
  FStack_68.VisualizeTemporalUpscaler = 0;
  FStack_68.VisualizeReprojection = 0;
  FStack_68.VisualizeMotionVectors = 0;
  FStack_68.VisualizeMotionBlur = 0;
  FStack_68.ScreenPercentage = 1;
  FStack_68.PhysicalMaterialMasks = 0;
  FStack_68.VertexColors = 0;
  FStack_68.VisualizeDOF = 0;
  FStack_68.TestImage = 0;
  FStack_68.OpaqueCompositeEditorPrimitives = 0;
  FStack_68.CompositeEditorPrimitives = 0;
  FStack_68.CompositeDebugPrimitives = 1;
  FStack_68.MotionBlur = 1;
  FStack_68.GBufferHints = 0;
  FStack_68.VectorFields = 0;
  FStack_68.VisualizeVirtualShadowMap = 0;
  FStack_68.VisualizeGroom = 0;
  FStack_68.VisualizeSubstrate = 0;
  FStack_68.VisualizeLumen = 0;
  FStack_68.VisualizeNanite = 0;
  FStack_68.VisualizeBuffer = 0;
  FStack_68.MaterialAmbientOcclusion = 1;
  FStack_68.MaterialNormal = 1;
  FStack_68.ReflectionOverride = 0;
  FStack_68.LightingOnlyOverride = 0;
  FStack_68.OverrideDiffuseAndSpecular = 0;
  FStack_68.VisualizeLocalExposure = 0;
  FStack_68.VisualizeLocalFogVolumes = 0;
  FStack_68.VisualizeSkyLightIlluminance = 0;
  FStack_68.VisualizeHDR = 0;
  FStack_68.RandomColor = 0;
  FStack_68.FrontBackFace = 0;
  FStack_68.Zebra = 0;
  FStack_68.Clay = 0;
  FStack_68.StereoMotionVectors = 0;
  FStack_68.AlphaInvert = 0;
  FStack_68.SceneCaptureCopySceneDepth = 1;
  FStack_68.VisualizeShadowCasters = 0;
  FStack_68.VisualizeLWCComplexity = 0;
  FStack_68.VisualizeGPUSkinCache = 0;
  FStack_68.LumenShortRangeAmbientOcclusion = 1;
  FStack_68.LumenSecondaryBounces = 1;
  FStack_68.LumenFarFieldTraces = 1;
  FStack_68.LumenGlobalTraces = 1;
  FStack_68.LumenDetailTraces = 1;
  FStack_68.LumenScreenTraces = 1;
  FStack_68.DebugDrawDistantVirtualSMLights = 0;
  FStack_68.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  FStack_68.VisualizeVolumetricCloudConservativeDensity = 0;
  FStack_68.VirtualTexturePrimitives = 0;
  FStack_68.VisualizePostProcessStack = 0;
  FStack_68.VisualizeCalibrationCustom = 0;
  FStack_68.VisualizeCalibrationGrayscale = 0;
  FStack_68.VisualizeCalibrationColor = 0;
  FStack_68.VisualizeLightFunctionAtlas = 0;
  FStack_68.VisualizeSkyAtmosphere = 0;
  FStack_68.RayTracingDebug = 0;
  FStack_68.PathTracing = 0;
  if (((GLumenReflectionsSampleSceneColorAtHit != 0) && (GLumenReflectionScreenTraces != 0)) ||
     (GLumenReflectionsSampleSceneColorAtHit == 2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((GLumenReflectionsDistantScreenTraces == 0) || (GLumenReflectionScreenTraces == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
  ::
  TShaderPermutationDomain<FReflectionTraceVoxelsCS::FThreadGroupSize32,FReflectionTraceVoxelsCS::FTraceGlobalSDF,FReflectionTraceVoxelsCS::FSimpleCoverageBasedExpand,FReflectionTraceVoxelsCS::FHairStrands,FReflectionTraceVoxelsCS::FRadianceCache,FReflectionTraceVoxelsCS::FSampleSceneColor,FReflectionTraceVoxelsCS::FDistantScreenTraces>
            (aTStack_78,param_1->PermutationId);
  bVar1 = Lumen::UseThreadGroupSize32();
  if (aTStack_78[0].DimensionValue == bVar1) {
    bVar1 = Lumen::UseGlobalSDFTracing(&FStack_68);
    if (aTStack_78[0].Tail.DimensionValue == bVar1) {
      bVar1 = Lumen::UseGlobalSDFTracing(&FStack_68);
      if (bVar1) {
        bVar1 = Lumen::UseGlobalSDFSimpleCoverageBasedExpand();
        if (bVar1) {
          bVar4 = true;
        }
      }
      if (aTStack_78[0].Tail.Tail.DimensionValue == bVar4) {
        if (aTStack_78[0].Tail.Tail.Tail.Tail.Tail.DimensionValue == bVar5) {
          if (aTStack_78[0].Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == bVar2) {
            EVar3 = Precached;
          }
          else {
            EVar3 = NotPrecached;
          }
        }
        else {
          EVar3 = NotPrecached;
        }
      }
      else {
        EVar3 = NotPrecached;
      }
    }
    else {
      EVar3 = NotPrecached;
    }
  }
  else {
    EVar3 = NotUsed;
  }
  if (FStack_68.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)FStack_68.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  return EVar3;
}

// StaticGetTypeLayout @ 144cedce0

FTypeLayoutDesc * __cdecl FReflectionTraceVoxelsCS::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xe0;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FReflectionTrac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FReflectionTraceVoxelsCS,0>::Do;
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

