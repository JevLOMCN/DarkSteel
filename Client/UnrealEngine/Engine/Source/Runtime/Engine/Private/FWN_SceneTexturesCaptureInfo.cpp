// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FWN_SceneTexturesCaptureInfo @ 14850f830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWN_SceneTexturesCaptureInfo * __thiscall
FWN_SceneTexturesCaptureInfo::FWN_SceneTexturesCaptureInfo(FWN_SceneTexturesCaptureInfo *this)

{
  FEngineShowFlags *pFVar1;
  undefined1 *puVar2;
  FEngineShowFlags *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->bOverrideEngineShowFlags = false;
  (this->EngineShowFlags).CustomShowFlags.NumBits = 0;
  (this->EngineShowFlags).CustomShowFlags.MaxBits = 0x80;
  *(undefined8 *)&this->EngineShowFlags = uVar6;
  *(undefined8 *)&(this->EngineShowFlags).field_0x8 = uVar7;
  *(undefined8 *)&(this->EngineShowFlags).field_0x10 = uVar6;
  *(undefined8 *)&(this->EngineShowFlags).field_0x18 = uVar7;
  FEngineShowFlags::InitCustomShowFlags(&this->EngineShowFlags,ESFIM_Game);
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
  pFVar3 = &this->EngineShowFlags;
  pFVar3->VisualizeHDR = 0;
  pFVar3->VisualizeVirtualShadowMap = 0;
  pFVar3->VisualizeGroom = 0;
  pFVar3->VisualizeSubstrate = 0;
  pFVar3->VisualizeLumen = 0;
  pFVar3->VisualizeNanite = 0;
  pFVar3->VisualizeBuffer = 0;
  pFVar3->MaterialAmbientOcclusion = 1;
  pFVar3->MaterialNormal = 1;
  pFVar3->ReflectionOverride = 0;
  pFVar3->LightingOnlyOverride = 0;
  pFVar3->OverrideDiffuseAndSpecular = 0;
  pFVar3->VisualizeLocalExposure = 0;
  pFVar3->VisualizeLocalFogVolumes = 0;
  pFVar3->VisualizeSkyLightIlluminance = 0;
  (this->EngineShowFlags).StereoMotionVectors = 0;
  (this->EngineShowFlags).RandomColor = 0;
  (this->EngineShowFlags).FrontBackFace = 0;
  (this->EngineShowFlags).Zebra = 0;
  (this->EngineShowFlags).Clay = 0;
  puVar4 = &(this->EngineShowFlags).field_0x10;
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
  (this->DirectoryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoryPath).Data.ArrayNum = 0;
  (this->DirectoryPath).Data.ArrayMax = 0;
  this->Width = 0;
  this->Height = 0;
  (this->Colors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Colors).ArrayNum = 0;
  (this->Colors).ArrayMax = 0;
  (this->Depths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Depths).ArrayNum = 0;
  (this->Depths).ArrayMax = 0;
  (this->Velocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Velocities).ArrayNum = 0;
  (this->Velocities).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->BRDFs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BRDFs).ArrayNum = 0;
  (this->BRDFs).ArrayMax = 0;
  (this->Albedos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Albedos).ArrayNum = 0;
  (this->Albedos).ArrayMax = 0;
  (this->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Results).ArrayNum = 0;
  (this->Results).ArrayMax = 0;
  (this->CompletionTask).Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

// ~FWN_SceneTexturesCaptureInfo @ 1485116e0

void __thiscall
FWN_SceneTexturesCaptureInfo::~FWN_SceneTexturesCaptureInfo(FWN_SceneTexturesCaptureInfo *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<unsigned_int> FVar5;
  
  pFVar3 = (this->CompletionTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->Results).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Albedos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->BRDFs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Normals).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Velocities).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Depths).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Colors).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->DirectoryPath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar5 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar5);
    return;
  }
  return;
}

// operator() @ 148514850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this_00;
  FTaskEvent FVar4;
  undefined8 *puVar5;
  FTaskEvent local_res8;
  
  FVar4 = (FTaskEvent)
          UE::Tasks::Private::FTaskEventBase::Create
                    (
                    L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp(2980)"
                    );
  if (FVar4 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(*(FTaskBase **)this,(FTaskBase *)FVar4);
    LOCK();
    *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
    UNLOCK();
  }
  local_res8 = FVar4;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar5;
    *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,``FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[2] = 0;
    *(FTaskEvent *)(puVar5 + 2) = local_res8;
    local_res8 = (FTaskEvent)0x0;
    puVar5[3] = L"TRHILambdaCommand";
  }
  else {
    RHITriggerTaskEventOnFlip(GRHIGlobals.PresentCounter - 1,&local_res8);
  }
  if (local_res8 != (FTaskEvent)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res8 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8)(local_res8,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0xd0) == '\0')) {
    this_00 = *(FTaskBase **)this;
    LOCK();
    aVar2 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  if (FVar4 != (FTaskEvent)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar4 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar4)(FVar4,1);
    }
  }
  return;
}

// BeginRenderingFence @ 1485182a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWN_SceneTexturesCaptureInfo::BeginRenderingFence(FWN_SceneTexturesCaptureInfo *this)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FRenderCommandPipe *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskBase *this_00;
  FTaskBase *pFVar7;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  FRenderCommandPipe **ppFVar14;
  undefined1 auStack_158 [32];
  FWN_SceneTexturesCaptureInfo *local_138;
  TArrayView<FRenderCommandPipe_*_const,int> local_130;
  longlong local_120;
  code *local_118 [2];
  undefined **local_108;
  FTaskBase *pFStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FTaskBase *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FTaskBase *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  FTaskBase *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (!GIsThreadedRendering) {
    return;
  }
  local_138 = this;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0xb90,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (FTaskBase *)
            UE::Tasks::Private::FTaskEventBase::Create
                      (
                      L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp(2962)"
                      );
  UE::RenderCommandPipe::GetPipes(&local_130);
  for (ppFVar14 = local_130.DataPtr; ppFVar14 != local_130.DataPtr + local_130.ArrayNum;
      ppFVar14 = ppFVar14 + 1) {
    pFVar4 = *ppFVar14;
    if ((pFVar4->bRecording != false) &&
       ((pFVar4->NumInFlightCommands != (atomic<int>)0x0 ||
        (pFVar4->NumInFlightCommandLists != (atomic<int>)0x0)))) {
      pFVar7 = (FTaskBase *)
               UE::Tasks::Private::FTaskEventBase::Create
                         (
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp(2968)"
                         );
      if (pFVar7 != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar7);
      }
      local_f0 = (undefined ***)0x0;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::`19'::<lambda_1>,1,0>
                   ::_vftable_;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_100 = pFVar7;
      pFVar8 = FRenderCommandList::GetInstanceTLS();
      if (pFVar8 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FWN_SceneTexturesCaptureInfo::BeginRenderingFence_::__l19::TSTR_BeginFence2971>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
        local_b8._0_8_ = local_118[0];
        local_90 = local_f0;
        local_f0 = (undefined ***)0x0;
        local_a8 = local_108;
        pFStack_a0 = pFStack_100;
        local_98 = local_f8;
        local_118[0] = (code *)0x0;
        local_88 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::__l19::TSTR_BeginFence2971>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_b8,pFVar10);
        uVar13 = (ulonglong)local_88;
        if ((2 < uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_b8._0_8_ != (code *)0x0) {
            pppuVar12 = (undefined ***)(local_b8 + 0x10);
            if (local_90 != (undefined ***)0x0) {
              pppuVar12 = local_90;
            }
            (*(code *)(*pppuVar12)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_b8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar12 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar12 = local_f0;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    this = local_138;
  }
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  local_c0 = (undefined ***)0x0;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_d0 = this_00;
  pFVar8 = FRenderCommandList::GetInstanceTLS();
  if (pFVar8 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FWN_SceneTexturesCaptureInfo::BeginRenderingFence_::__l2::TSTR_WN_SceneTexturesCapture_BeginFence2978>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
    local_78._0_8_ = local_e8[0];
    local_50 = local_c0;
    local_68 = local_d8;
    pFStack_60 = pFStack_d0;
    local_58 = local_c8;
    local_e8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FWN_SceneTexturesCaptureInfo::BeginRenderingFence'::__l2::TSTR_WN_SceneTexturesCapture_BeginFence2978>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar10);
    uVar13 = (ulonglong)local_48;
    if ((2 < uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar12 = local_50;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_78);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar12 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar12 = local_c0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  pFVar2 = &this->CompletionTask;
  if (pFVar2 == (FTaskHandle *)&local_120) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar11 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar7 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = this_00;
    if (pFVar7 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar11 = (undefined8 *)pFVar7->_padding_;
    this_00 = pFVar7;
  }
  (*(code *)*puVar11)(this_00,1);
  return;
}

// IsComplete @ 1485320d0

bool __thiscall FWN_SceneTexturesCaptureInfo::IsComplete(FWN_SceneTexturesCaptureInfo *this)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong local_18 [2];
  
  if (GIsThreadedRendering) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = (*IsInAsyncLoadingThread)();
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInAsyncLoadingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                           ,0xc0c,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
    }
    CheckRenderingThreadHealth();
    pFVar2 = &this->CompletionTask;
    pFVar4 = (pFVar2->Pimpl).Reference;
    if ((pFVar4 != (FTaskBase *)0x0) && ((pFVar4->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
      return false;
    }
    if (pFVar2 != (FTaskHandle *)local_18) {
      pFVar4 = (pFVar2->Pimpl).Reference;
      (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  return true;
}

// Wait @ 14854db30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FWN_SceneTexturesCaptureInfo::Wait(FWN_SceneTexturesCaptureInfo *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  FEvent *pFVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_GameIdleTime> FVar15;
  FTaskGraphInterface *pFVar16;
  FTaskBase *pFVar17;
  ulonglong uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  wchar_t *pwVar19;
  FTaskBase *pFVar20;
  FName FVar21;
  FTaskBase *pFVar22;
  FSharedReferencer<1> FVar23;
  undefined1 auVar24 [16];
  bool local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_b8;
  FName local_b0;
  FSharedEventRef local_a0;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  longlong local_70;
  longlong local_68;
  FThreadHeartBeatClock local_60;
  
  if (!GIsThreadedRendering) {
    return;
  }
  bVar10 = IsInGameThread();
  if (((!bVar10) && (bVar10 = (*IsInAsyncLoadingThread)(), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() || IsInAsyncLoadingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0xc0c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  CheckRenderingThreadHealth();
  pFVar3 = &this->CompletionTask;
  pFVar20 = (pFVar3->Pimpl).Reference;
  if ((pFVar20 == (FTaskBase *)0x0) || ((pFVar20->Subsequents).bIsClosed != (atomic<bool>)0x0)) {
    if (pFVar3 == (FTaskHandle *)&local_68) {
      return;
    }
    pFVar20 = (pFVar3->Pimpl).Reference;
    (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar20 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar20->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    goto LAB_14854e1b0;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2998,"GameThreadWaitForTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
               ,0xbb6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2998);
  }
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0xbb9,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((pFVar3->Pimpl).Reference == (FTaskBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Task.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                          ,0xbba,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20 = (pFVar3->Pimpl).Reference;
  pFVar22 = (FTaskBase *)0x0;
  if ((pFVar20 != (FTaskBase *)0x0) && ((pFVar20->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    FVar15 = StatPtr_STAT_GameIdleTime;
    if (StatPtr_STAT_GameIdleTime == (FThreadSafeStaticStat<FStat_STAT_GameIdleTime>)0x0) {
      pFVar14 = ::FName::FName(&local_78,"STAT_GameIdleTime");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_GameIdleTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameIdleTime,*pFVar14,
                          L"Game thread idle time","STATGROUP_Threading","STATCAT_Advanced",
                          L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar21 = *(FName *)FVar15;
    bVar11 = false;
    bVar8 = false;
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_14854ddda:
      bVar7 = false;
      FVar21 = local_b0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res18[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar11 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_b8.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
          local_b8.Number = FVar21.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                     ,0xbbe);
          bVar11 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14854ddda;
      local_res20 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
    }
    NumRecursiveCalls = NumRecursiveCalls + 1;
    if (NumRecursiveCalls < 2) {
LAB_14854de1c:
      pFVar16 = FTaskGraphInterface::Get();
      cVar12 = (**(code **)((longlong)*pFVar16 + 0x38))(pFVar16,1);
      local_res10 = param_1;
      if (cVar12 != '\0') goto LAB_14854de37;
    }
    else {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_FlushRenderingC_151b077e8,
                   (FLogCategoryBase *)&LogTemp);
      }
      if (NumRecursiveCalls < 2) goto LAB_14854de1c;
LAB_14854de37:
      local_res10 = false;
    }
    FThreadHeartBeatClock::FThreadHeartBeatClock(&local_60,__real_3f70624dd2f1a9fc);
    FThreadHeartBeatClock::Seconds(&local_60);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar19 = FCommandLine::Get();
      bDisabled = FParse::Param(pwVar19,L"nothreadtimeout");
      _Init_thread_footer(&::_TSS0);
    }
    FSharedEventRef::FSharedEventRef(&local_a0,AutoReset);
    FVar23.ReferenceController = local_a0.Ptr.SharedReferenceCount.ReferenceController;
    local_res20 = (FName)local_a0.Ptr.Object;
    if ((FTaskBase *)local_a0.Ptr.SharedReferenceCount.ReferenceController != (FTaskBase *)0x0) {
      LOCK();
      (local_a0.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    pFVar20 = pFVar22;
    if (pFVar17 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar17,2,true);
      pFVar17->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`WN_GameThreadWaitForTask'::`20'::<lambda_1>,void,void>::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar17,L"WN Waiting Task (FrameSync)",Default,Inline,None);
      pFVar17[1]._padding_ = (longlong)local_res20;
      pFVar17[1]._padding_ = (longlong)FVar23.ReferenceController;
      pFVar17->_padding_ =
           (longlong)
           &UE::Tasks::Private::TExecutableTask<`WN_GameThreadWaitForTask'::`20'::<lambda_1>_>::
            _vftable_;
      pFVar20 = pFVar17;
      FVar23.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
    }
    pFVar17 = (pFVar3->Pimpl).Reference;
    if (pFVar17 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar20,pFVar17);
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x100);
    if (pFVar20 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar23.ReferenceController);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = __real_40c3884000000000;
    auVar24 = roundpd(auVar24,auVar24,1);
    uVar6 = (longlong)auVar24._0_8_ / 10000;
    uVar18 = 0xffffffff;
    if ((longlong)uVar6 < 0xffffffff) {
      uVar18 = uVar6;
    }
    if (0 < (longlong)uVar18) {
      pFVar22 = (FTaskBase *)(uVar18 & 0xffffffff);
    }
    do {
      CheckRenderingThreadHealth();
      if (local_res10 != false) {
        pFVar16 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar16 + 0x48))(pFVar16,1);
      }
      pFVar9 = local_a0.Ptr.Object;
      if (((longlong)auVar24._0_8_ < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("WaitTime.GetTicks() >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                              ,0x58,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar12 = (**(code **)(pFVar9->_padding_ + 0x20))(pFVar9,pFVar22);
      FThreadHeartBeatClock::Tick(&local_60);
    } while (cVar12 == '\0');
    NumRecursiveCalls = NumRecursiveCalls + -1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.Ptr.SharedReferenceCount.ReferenceController);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_88.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
        local_88.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_90);
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
        local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
        local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
        local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_88);
        piVar2 = &this_00->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar3 = &this->CompletionTask;
  if (pFVar3 == (FTaskHandle *)&local_70) {
    return;
  }
  pFVar20 = (pFVar3->Pimpl).Reference;
  (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
  if (pFVar20 == (FTaskBase *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &pFVar20->RefCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
LAB_14854e1b0:
  if (aVar4 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar20->_padding_)(pFVar20,1);
  }
  return;
}

