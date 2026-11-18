// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 14

// StaticClass @ 149483620

UClass * __cdecl AWN_GSS_CineCameraActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_GSS_CineCameraActor",
               &Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton,
               StaticRegisterNativesAWN_GSS_CineCameraActor,0xb00,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_GSS_CineCameraActor>,
               InternalVTableHelperCtorCaller<AWN_GSS_CineCameraActor>,local_res8,
               ACineCameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton;
}

// AWN_GSS_CineCameraActor @ 14948c3b0

AWN_GSS_CineCameraActor * __thiscall
AWN_GSS_CineCameraActor::AWN_GSS_CineCameraActor
          (AWN_GSS_CineCameraActor *this,FVTableHelper *param_1)

{
  ACineCameraActor::ACineCameraActor((ACineCameraActor *)this,param_1);
  this->bCapturingEnabled = false;
  this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
  (this->BaseCapturingDirPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseCapturingDirPath).Data.ArrayNum = 0;
  (this->BaseCapturingDirPath).Data.ArrayMax = 0;
  this->CapturingCount = 0;
  return this;
}

// AWN_GSS_CineCameraActor @ 14948c400

AWN_GSS_CineCameraActor * __thiscall
AWN_GSS_CineCameraActor::AWN_GSS_CineCameraActor
          (AWN_GSS_CineCameraActor *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FDateTime local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ACineCameraActor::ACineCameraActor((ACineCameraActor *)this,param_1);
  this->bCapturingEnabled = false;
  this->CapturingCount = 0;
  this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
  pFVar1 = &this->BaseCapturingDirPath;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseCapturingDirPath).Data.ArrayNum = 0;
  (this->BaseCapturingDirPath).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar4 = FPaths::ProjectDir(&local_28);
  if (&local_48 != pFVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = ::FString::EndsWith(&local_48,L"/",1,IgnoreCase);
  if (!bVar3) {
    ::FString::AppendChars(&local_48,L"/",1);
  }
  FDateTime::Now();
  FDateTime::ToString(&local_res8,&local_28,L"%Y_%H_%M_%S");
  ::FString::PrintfImpl(&local_38,L"%sSaved/GSS/%s/");
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->BaseCapturingDirPath).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->BaseCapturingDirPath).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~AWN_GSS_CineCameraActor @ 14948fdb0

void __thiscall AWN_GSS_CineCameraActor::~AWN_GSS_CineCameraActor(AWN_GSS_CineCameraActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
  pFVar1 = (this->BaseCapturingDirPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ACineCameraActor::~ACineCameraActor((ACineCameraActor *)this);
  return;
}

// Capture @ 149498520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_GSS_CineCameraActor::Capture(AWN_GSS_CineCameraActor *this)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  UWorld *this_00;
  UWorld *pUVar3;
  uint uVar4;
  FString local_68;
  FString local_58;
  FEngineShowFlags local_48;
  
  this_00 = AActor::GetWorld((AActor *)this);
  uVar4 = this->CapturingCount;
  this->CapturingCount = uVar4 + 1;
  UWorld::GetMapName(this_00,&local_58);
  ::FString::PrintfImpl(&local_68,L"%s%s/%u/");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if ((pUVar1 != (UGameViewportClient *)0x0) &&
     (pUVar3 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))(pUVar1), pUVar3 == this_00)) {
    local_48.CustomShowFlags.MaxBits = 0x80;
    local_48._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_48._8_8_ = _UNK_15060db28;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x1e0);
    local_48.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_48.CustomShowFlags.NumBits = 0;
    local_48._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_48._24_8_ = _UNK_15060db28;
    FEngineShowFlags::InitCustomShowFlags(&local_48,ESFIM_Game);
    local_48.Pivot = 0;
    local_48.LightInfluences = 0;
    local_48.HitProxies = 0;
    local_48.Bounds = 0;
    local_48.ModeWidgets = 0;
    local_48.EditingLevelInstance = 0;
    local_48.Selection = 0;
    local_48.Splines = 0;
    local_48.Cover = 0;
    local_48.MeshEdges = 0;
    local_48.Snap = 0;
    local_48.Grid = 0;
    local_48.LargeVertices = 0;
    local_48.Editor = 0;
    local_48.Brushes = 0;
    local_48.BSPSplit = 0;
    local_48.AudioRadius = 0;
    local_48.CameraFrustums = 0;
    local_48.MassProperties = 0;
    local_48.Constraints = 0;
    local_48.StreamingBounds = 0;
    local_48.LightMapDensity = 0;
    local_48.StationaryLightOverlap = 0;
    local_48.ShaderComplexity = 0;
    local_48.LightComplexity = 0;
    local_48.VisualizeInstanceUpdates = 0;
    local_48.HISMCClusterTree = 0;
    local_48.HISMCOcclusionBounds = 0;
    local_48.Navigation = 0;
    local_48.DebugAI = 0;
    local_48.VisualizeSSS = 0;
    local_48.SelectionOutline = 0;
    local_48.DisableOcclusionQueries = 0;
    local_48.VisualizeInstanceOcclusionQueries = 0;
    local_48.OcclusionMeshes = 0;
    local_48.VREditing = 0;
    local_48.ServerDrawDebug = 0;
    local_48.Bones = 0;
    local_48.VisualizeVirtualTexture = 0;
    local_48.RequiredTextureResolution = 0;
    local_48.OutputMaterialTextureScales = 0;
    local_48.MaterialTextureScaleAccuracy = 0;
    local_48.MeshUVDensityAccuracy = 0;
    local_48.PrimitiveDistanceAccuracy = 0;
    local_48.ShaderComplexityWithQuadOverdraw = 0;
    local_48.QuadOverdraw = 0;
    local_48.HLODColoration = 0;
    local_48.LODColoration = 0;
    local_48.VisualizeShadingModels = 0;
    local_48.VisualizeSSR = 0;
    local_48.VisualizeLightingOnProbes = 0;
    local_48.VisualizeGlobalDistanceField = 0;
    local_48.PhysicsField = 0;
    local_48.VisualizeMeshDistanceFields = 0;
    local_48.VisualizeDistanceFieldAO = 0;
    local_48.VolumeLightingSamples = 0;
    local_48.VisualizeVolumetricLightmap = 0;
    local_48.PrecomputedVisibilityCells = 0;
    local_48.VisualizeLightCulling = 0;
    local_48.DistanceCulledPrimitives = 0;
    local_48.StereoRendering = 0;
    local_48.HMDDistortion = 0;
    local_48.HighResScreenshotMask = 0;
    local_48.CameraSafeFrames = 0;
    local_48.CameraAspectRatioBars = 0;
    local_48.CollisionPawn = 0;
    local_48.CollisionVisibility = 0;
    local_48.Collision = 0;
    local_48.ActorColoration = 0;
    local_48.Game = 1;
    local_48.Volumes = 0;
    local_48.LightRadius = 0;
    local_48.Wireframe = 0;
    local_48.ShadowFrustums = 0;
    local_48.VisualizeOutOfBoundsPixels = 0;
    local_48.VisualizeTSR = 0;
    local_48.VisualizeTemporalUpscaler = 0;
    local_48.VisualizeReprojection = 0;
    local_48.VisualizeMotionVectors = 0;
    local_48.VisualizeMotionBlur = 0;
    local_48.ScreenPercentage = 1;
    local_48.PhysicalMaterialMasks = 0;
    local_48.VertexColors = 0;
    local_48.VisualizeDOF = 0;
    local_48.TestImage = 0;
    local_48.OpaqueCompositeEditorPrimitives = 0;
    local_48.CompositeEditorPrimitives = 0;
    local_48.CompositeDebugPrimitives = 1;
    local_48.MotionBlur = 1;
    local_48.GBufferHints = 0;
    local_48.VectorFields = 0;
    local_48.VisualizeVirtualShadowMap = 0;
    local_48.VisualizeGroom = 0;
    local_48.VisualizeSubstrate = 0;
    local_48.VisualizeLumen = 0;
    local_48.VisualizeNanite = 0;
    local_48.VisualizeBuffer = 0;
    local_48.MaterialAmbientOcclusion = 1;
    local_48.MaterialNormal = 1;
    local_48.ReflectionOverride = 0;
    local_48.LightingOnlyOverride = 0;
    local_48.OverrideDiffuseAndSpecular = 0;
    local_48.VisualizeLocalExposure = 0;
    local_48.VisualizeLocalFogVolumes = 0;
    local_48.VisualizeSkyLightIlluminance = 0;
    local_48.VisualizeHDR = 0;
    local_48.RandomColor = 0;
    local_48.FrontBackFace = 0;
    local_48.Zebra = 0;
    local_48.Clay = 0;
    local_48.StereoMotionVectors = 0;
    local_48.AlphaInvert = 0;
    local_48.SceneCaptureCopySceneDepth = 1;
    local_48.VisualizeShadowCasters = 0;
    local_48.VisualizeLWCComplexity = 0;
    local_48.VisualizeGPUSkinCache = 0;
    local_48.LumenShortRangeAmbientOcclusion = 1;
    local_48.LumenSecondaryBounces = 1;
    local_48.LumenFarFieldTraces = 1;
    local_48.LumenGlobalTraces = 1;
    local_48.LumenDetailTraces = 1;
    local_48.LumenScreenTraces = 1;
    local_48.DebugDrawDistantVirtualSMLights = 0;
    local_48.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
    local_48.VisualizeVolumetricCloudConservativeDensity = 0;
    local_48.VirtualTexturePrimitives = 0;
    local_48.VisualizePostProcessStack = 0;
    local_48.VisualizeCalibrationCustom = 0;
    local_48.VisualizeCalibrationGrayscale = 0;
    local_48.VisualizeCalibrationColor = 0;
    local_48.VisualizeLightFunctionAtlas = 0;
    local_48.VisualizeSkyAtmosphere = 0;
    local_48.RayTracingDebug = 0;
    local_48.PathTracing = 0;
    (*pcVar2)(&pUVar1->_padding_,&local_68,1,&local_48,uVar4);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1494a13d0

UClass * __cdecl AWN_GSS_CineCameraActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_GSS_CineCameraActor",
               &Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton,
               StaticRegisterNativesAWN_GSS_CineCameraActor,0xb00,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_GSS_CineCameraActor>,
               InternalVTableHelperCtorCaller<AWN_GSS_CineCameraActor>,local_res8,
               ACineCameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton;
}

// NotifyCameraCut @ 1494a6480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AWN_GSS_CineCameraActor::NotifyCameraCut(AWN_GSS_CineCameraActor *this)

{
  ACineCameraActor::NotifyCameraCut((ACineCameraActor *)this);
  if (4 < (byte)Common._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Common);
    return;
  }
  return;
}

// SetCapturingEnabled @ 1494ad4e0

void __thiscall
AWN_GSS_CineCameraActor::SetCapturingEnabled(AWN_GSS_CineCameraActor *this,bool param_1)

{
  this->bCapturingEnabled = param_1;
  return;
}

// ShouldTickIfViewportsOnly @ 1494ad830

bool __thiscall AWN_GSS_CineCameraActor::ShouldTickIfViewportsOnly(AWN_GSS_CineCameraActor *this)

{
  return true;
}

// StaticRegisterNativesAWN_GSS_CineCameraActor @ 1494ae150

void __cdecl AWN_GSS_CineCameraActor::StaticRegisterNativesAWN_GSS_CineCameraActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_AWN_GSS_CineCameraActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 1494ae400

void __thiscall AWN_GSS_CineCameraActor::Tick(AWN_GSS_CineCameraActor *this,float param_1)

{
  ACineCameraActor::Tick((ACineCameraActor *)this,param_1);
  if (this->bCapturingEnabled != false) {
    Capture(this);
    return;
  }
  return;
}

// __DefaultConstructor @ 1494b2aa0

void __cdecl AWN_GSS_CineCameraActor::__DefaultConstructor(FObjectInitializer *param_1)

{
  longlong *plVar1;
  ACineCameraActor *this;
  bool bVar2;
  FString *pFVar3;
  FDateTime local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this = (ACineCameraActor *)param_1->Obj;
  if (this != (ACineCameraActor *)0x0) {
    ACineCameraActor::ACineCameraActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
    plVar1 = &this[1]._padding_;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar3 = FPaths::ProjectDir(&local_18);
    if (&local_38 != pFVar3) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar2 = ::FString::EndsWith(&local_38,L"/",1,IgnoreCase);
    if (!bVar2) {
      ::FString::AppendChars(&local_38,L"/",1);
    }
    FDateTime::Now();
    FDateTime::ToString(&local_res8,&local_18,L"%Y_%H_%M_%S");
    ::FString::PrintfImpl(&local_28,L"%sSaved/GSS/%s/");
    if ((FString *)plVar1 != &local_28) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_28.Data.AllocatorInstance.Data;
      *(int *)&this[1]._padding_ = local_28.Data.ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execCapture @ 1494b2ee0

void __cdecl AWN_GSS_CineCameraActor::execCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Capture((AWN_GSS_CineCameraActor *)param_1);
  return;
}

// execSetCapturingEnabled @ 1494b4ae0

void __cdecl
AWN_GSS_CineCameraActor::execSetCapturingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x45].field_0x18 = local_res8[0] != 0;
  return;
}

