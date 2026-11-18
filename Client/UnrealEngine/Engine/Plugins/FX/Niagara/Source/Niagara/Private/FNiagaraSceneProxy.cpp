// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// FNiagaraSceneProxy @ 1490226d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSceneProxy * __thiscall
FNiagaraSceneProxy::FNiagaraSceneProxy(FNiagaraSceneProxy *this,FNiagaraSceneProxyDesc *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstanceController *this_00;
  UNiagaraSystem *this_01;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  FNiagaraSystemRenderData *pFVar8;
  FNiagaraSceneProxy *pFVar9;
  TStatId TVar10;
  FName FVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined1 local_res18 [16];
  
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  if (param_1->SystemAsset != (UNiagaraSystem *)0x0) {
    FVar11 = (FName)param_1->SystemAsset->_padding_;
  }
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(FPrimitiveSceneProxyDesc *)param_1,FVar11);
  this->_padding_ = (longlong)&___7FNiagaraSceneProxy__6B_;
  (this->CustomUniformBuffersGuard).State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&this->CustomUniformBuffers = 0;
  *(undefined8 *)&(this->CustomUniformBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->CustomUniformBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->CustomUniformBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x48 = 0;
  this->RenderData = (FNiagaraSystemRenderData *)0x0;
  this->ComputeDispatchInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  (this->SystemStatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->DynamicData).bUseCullProxy = false;
  (this->DynamicData).LODDistanceOverride = -1.0;
  (this->DynamicData).PerfStatsContext.WorldStats = (FParticlePerfStats *)0x0;
  (this->DynamicData).PerfStatsContext.SystemStats = (FParticlePerfStats *)0x0;
  (this->DynamicData).PerfStatsContext.ComponentStats = (FParticlePerfStats *)0x0;
  this->OcclusionQueryMode = param_1->OcclusionQueryMode;
  this->_padding_ = 0x40400000;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  bVar6 = NiagaraComponentPrivate::GParallelGDMEEnabled;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfd;
  *(byte *)((longlong)&this->_padding_ + 3) =
       *(byte *)((longlong)&this->_padding_ + 3) & 0x7f | bVar6 << 7;
  pTVar4 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  this_00 = (param_1->SystemInstanceController).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 != (FNiagaraSystemInstanceController *)0x0) &&
     (this_01 = param_1->SystemAsset, this_01 != (UNiagaraSystem *)0x0)) {
    FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,Niagara,true);
    pFVar8 = FNiagaraSystemInstanceController::CreateSystemRenderData
                       (this_00,*(Type *)(this->_padding_ + 8));
    this->RenderData = pFVar8;
    if ((this_00->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4531953176097587070>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                         ,0x82,"IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FNiagaraSceneProxy *)(*pcVar5)();
        return pFVar9;
      }
      if (((this_00->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FNiagaraSceneProxy *)(*pcVar5)();
        return pFVar9;
      }
    }
    pFVar8 = this->RenderData;
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
    this->ComputeDispatchInterface =
         (((this_00->SystemInstance).Object)->ComputeDispatchInterfacePtr).Object;
    bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
    *(byte *)((longlong)&this->_padding_ + 2) = pFVar8->bAnyMotionBlurEnabled << 7 | bVar2 & 0x7f;
    *(byte *)((longlong)&this->_padding_ + 1) =
         (pFVar8->bAnyHeterogeneousVolumesEnabled << 3 ^ bVar3) & 8 ^ bVar3;
    TVar10 = UNiagaraSystem::GetStatID(this_01,SUB81(local_res18,0),false);
    (this->SystemStatID).StatIdPtr = (TStatIdData *)(TVar10.StatIdPtr)->Name;
    TVar7 = FNiagaraSystemInstanceController::GetGpuComputeTickStage(this_00);
    if (TVar7 == PostInitViews) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
      *pbVar1 = *pbVar1 & 0x7f;
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

// ~FNiagaraSceneProxy @ 149026000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraSceneProxy::~FNiagaraSceneProxy(FNiagaraSceneProxy *this)

{
  FNiagaraSystemRenderData *this_00;
  void *pvVar1;
  
  this_00 = this->RenderData;
  this->_padding_ = (longlong)&___7FNiagaraSceneProxy__6B_;
  if (this_00 != (FNiagaraSystemRenderData *)0x0) {
    FNiagaraSystemRenderData::~FNiagaraSystemRenderData(this_00);
    ::operator_delete(this_00,0x48);
    this->RenderData = (FNiagaraSystemRenderData *)0x0;
  }
  ReleaseUniformBuffers(this,true);
  *(undefined4 *)&(this->CustomUniformBuffers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CustomUniformBuffers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomUniformBuffers);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CanBeOccluded @ 149031ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraSceneProxy::CanBeOccluded(FNiagaraSceneProxy *this)

{
  bool bVar1;
  
  if (this->OcclusionQueryMode == AlwaysEnabled) {
    return true;
  }
  if (this->OcclusionQueryMode != AlwaysDisabled) {
    bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    return !bVar1;
  }
  return false;
}

// CreateRenderThreadResources @ 14903b820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSceneProxy::CreateRenderThreadResources
          (FNiagaraSceneProxy *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
    FMemScope::FMemScope(local_res18,Niagara,true);
    FNiagaraSystemRenderData::CreateRenderThreadResources(this->RenderData,param_1);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// DestroyRenderState_Concurrent @ 14903daf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraSceneProxy::DestroyRenderState_Concurrent(FNiagaraSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraSystemRenderData *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackX_8 [8];
  
  pFVar3 = this->RenderData;
  if (pFVar3 == (FNiagaraSystemRenderData *)0x0) {
    return;
  }
  pFVar4 = (pFVar3->EmitterRenderers_GT).AllocatorInstance.Data;
  iVar2 = (pFVar3->EmitterRenderers_GT).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->EmitterRenderers_GT).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0x20))();
    }
    pFVar4 = pFVar4 + 8;
  }
  (pFVar3->EmitterRenderers_GT).ArrayNum = 0;
  if ((pFVar3->EmitterRenderers_GT).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar3->EmitterRenderers_GT).AllocatorInstance,0,
               &(pFVar3->EmitterRenderers_GT).ArrayMax);
  }
  return;
}

// GatherSimpleLights @ 1490429b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraSceneProxy::GatherSimpleLights
          (FNiagaraSceneProxy *this,FSceneViewFamily *param_1,FSimpleLightArray *param_2)

{
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    FNiagaraSystemRenderData::GatherSimpleLights(this->RenderData,param_2);
    return;
  }
  return;
}

// GetAllocatedSize @ 1490430f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNiagaraSceneProxy::GetAllocatedSize(FNiagaraSceneProxy *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)((longlong)&this->_padding_ + 4) * 4;
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    uVar1 = FNiagaraSystemRenderData::GetDynamicDataSize(this->RenderData);
    return uVar1 + uVar2;
  }
  return uVar2;
}

// GetCustomUniformBuffer @ 1490449c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIUniformBuffer * __thiscall
FNiagaraSceneProxy::GetCustomUniformBuffer
          (FNiagaraSceneProxy *this,FRHICommandListBase *param_1,bool param_2,TBox<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar3;
  FRHIUniformBuffer *pFVar4;
  
  if ((param_2) && (param_3->IsValid == '\0')) {
    return (FRHIUniformBuffer *)this->_padding_;
  }
  pTVar3 = GetCustomUniformBufferResource(this,param_1,param_2,param_3);
  if (pTVar3->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (pTVar3->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRHIUniformBuffer *)pTVar3->UniformBufferRHI;
}

// GetCustomUniformBufferResource @ 149044a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TUniformBuffer<FPrimitiveUniformShaderParameters> * __thiscall
FNiagaraSceneProxy::GetCustomUniformBufferResource
          (FNiagaraSceneProxy *this,FRHICommandListBase *param_1,bool param_2,TBox<double> *param_3)

{
  FMutex *this_00;
  TMap<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,0>_>
  *this_01;
  atomic<unsigned_char> aVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  undefined8 uVar9;
  FPrimitiveUniformShaderParametersBuilder *pFVar10;
  byte bVar11;
  bool bVar12;
  char cVar13;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar14;
  FPrimitiveUniformShaderParametersBuilder *pFVar15;
  FPrimitiveUniformShaderParametersBuilder *pFVar16;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *this_02;
  FPrimitiveUniformShaderParameters *pFVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  FPrimitiveUniformShaderParametersBuilder *pFVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_af8 [32];
  int *local_ad8;
  byte *local_ad0;
  byte local_ac8;
  uint local_ac4;
  byte local_ac0;
  byte local_abf [3];
  int local_abc;
  int local_ab8 [6];
  uint *local_aa0;
  FRHICommandListBase *local_a98;
  double local_a90;
  double dStack_a88;
  double local_a80;
  double local_a78;
  double dStack_a70;
  double local_a68;
  double local_a60;
  double dStack_a58;
  double local_a50;
  double local_a48;
  double dStack_a40;
  double local_a38;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  double dStack_9c0;
  double local_9b8;
  double dStack_9b0;
  undefined1 local_9a8 [664];
  float afStack_710 [2];
  TVector4<float>_u_0 local_708;
  TVector4<float>_u_0 local_6f8;
  TVector4<float>_u_0 local_6e8;
  TVector4<float>_u_0 local_6d8;
  TVector4<float>_u_0 local_6c8;
  TVector4<float>_u_0 local_6b8;
  TVector4<float>_u_0 local_6a8;
  TVector4<float>_u_0 local_698;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_570;
  float local_558;
  undefined4 local_554;
  uint local_550;
  FPrimitiveUniformShaderParametersBuilder local_548;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_af8;
  lVar21 = this->_padding_;
  iVar18 = (uint)param_2 - (uint)param_3->IsValid;
  uVar22 = 0x9e3779b9 - param_2 ^ iVar18 * 0x100;
  uVar26 = (param_3->IsValid - uVar22) - iVar18 ^ uVar22 >> 0xd;
  uVar19 = (iVar18 - uVar26) - uVar22 ^ uVar26 >> 0xc;
  uVar22 = (uVar22 - uVar19) - uVar26 ^ uVar19 << 0x10;
  uVar26 = (uVar26 - uVar22) - uVar19 ^ uVar22 >> 5;
  uVar19 = (uVar19 - uVar26) - uVar22 ^ uVar26 >> 3;
  uVar22 = (uVar22 - uVar19) - uVar26 ^ uVar19 << 10;
  local_ac4 = (uVar26 - uVar22) - uVar19 ^ uVar22 >> 0xf;
  local_ad0 = &local_ac0;
  local_ad8 = local_ab8;
  local_a98 = param_1;
  (**(code **)(*(longlong *)this->_padding_ + 0x250))
            ((longlong *)this->_padding_,lVar21,local_abf,&local_a28);
  bVar11 = *(byte *)((longlong)&this->_padding_ + 2);
  if (((((char)bVar11 < '\0') || ((bVar11 & 0x10) != 0)) || ((bVar11 & 3) == 3)) ||
     ((bVar11 & 0x60) != 0)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  local_ac0 = local_ac0 | bVar11;
  local_a90 = local_a28;
  dStack_a88 = dStack_a20;
  local_a80 = local_a18;
  uVar19 = FCrc::MemCrc_DEPRECATED(&local_a90,0x18,0);
  uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
  uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
  uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
  uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
  uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
  uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
  uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
  uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
  local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
  local_a78 = local_a08;
  dStack_a70 = dStack_a00;
  local_a68 = local_9f8;
  uVar19 = FCrc::MemCrc_DEPRECATED(&local_a78,0x18,0);
  uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
  uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
  uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
  uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
  uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
  uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
  uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
  uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
  local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
  local_a60 = local_9e8;
  dStack_a58 = dStack_9e0;
  local_a50 = local_9d8;
  uVar19 = FCrc::MemCrc_DEPRECATED(&local_a60,0x18,0);
  uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
  uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
  uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
  uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
  uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
  uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
  uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
  uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
  local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
  local_a48 = local_9c8;
  dStack_a40 = dStack_9c0;
  local_a38 = local_9b8;
  uVar19 = FCrc::MemCrc_DEPRECATED(&local_a48,0x18,0);
  uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
  uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
  uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
  uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
  uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
  uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
  uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
  uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
  local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
  if (param_3->IsValid != '\0') {
    uVar19 = FCrc::MemCrc_DEPRECATED(param_3,0x18,0);
    uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
    uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
    uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
    uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
    uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
    uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
    uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
    uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
    local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
    uVar19 = FCrc::MemCrc_DEPRECATED(&param_3->Max,0x18,0);
    uVar26 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
    uVar22 = (-0x61c88647 - uVar26) - uVar19 ^ uVar26 << 8;
    uVar27 = (uVar19 - uVar22) - uVar26 ^ uVar22 >> 0xd;
    uVar26 = (uVar26 - uVar27) - uVar22 ^ uVar27 >> 0xc;
    uVar19 = (uVar22 - uVar26) - uVar27 ^ uVar26 << 0x10;
    uVar27 = (uVar27 - uVar19) - uVar26 ^ uVar19 >> 5;
    uVar22 = (uVar26 - uVar27) - uVar19 ^ uVar27 >> 3;
    uVar19 = (uVar19 - uVar22) - uVar27 ^ uVar22 << 10;
    local_ac4 = (uVar27 - uVar19) - uVar22 ^ uVar19 >> 0xf;
  }
  if ((&this->_padding_ != (longlong *)0x0) && (iVar18 = (int)this->_padding_, iVar18 != 0)) {
    uVar19 = (*FCrc::MemCrc32Func)((void *)this->_padding_,iVar18 * 4,0);
    uVar22 = local_ac4 - uVar19 ^ uVar19 >> 0xd;
    uVar26 = (-0x61c88647 - uVar22) - uVar19 ^ uVar22 << 8;
    uVar27 = (uVar19 - uVar26) - uVar22 ^ uVar26 >> 0xd;
    uVar19 = (uVar22 - uVar27) - uVar26 ^ uVar27 >> 0xc;
    uVar22 = (uVar26 - uVar19) - uVar27 ^ uVar19 << 0x10;
    uVar26 = (uVar27 - uVar22) - uVar19 ^ uVar22 >> 5;
    uVar19 = (uVar19 - uVar26) - uVar22 ^ uVar26 >> 3;
    uVar22 = (uVar22 - uVar19) - uVar26 ^ uVar19 << 10;
    local_ac4 = (uVar26 - uVar22) - uVar19 ^ uVar22 >> 0xf;
  }
  this_00 = &this->CustomUniformBuffersGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar14 = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)(*pcVar8)();
    return pTVar14;
  }
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    UE::FMutex::LockSlow(this_00);
  }
  this_01 = &this->CustomUniformBuffers;
  if (*(int *)&(this->CustomUniformBuffers).field_0x8 !=
      *(int *)&(this->CustomUniformBuffers).field_0x34) {
    puVar23 = *(undefined1 **)&(this->CustomUniformBuffers).field_0x40;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->CustomUniformBuffers).field_0x38;
    }
    iVar18 = *(int *)(puVar23 +
                     (ulonglong)(*(int *)&(this->CustomUniformBuffers).field_0x48 - 1U & local_ac4)
                     * 4);
    if (iVar18 != -1) {
      do {
        lVar28 = *(longlong *)&this_01->field_0x0 + (longlong)iVar18 * 0x18;
        if (*(uint *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar18 * 0x18) == local_ac4) {
          if (lVar28 != 0) goto LAB_1490450f5;
          break;
        }
        iVar18 = *(int *)(lVar28 + 0x10);
      } while (iVar18 != -1);
    }
  }
  local_aa0 = &local_ac4;
  local_ad8 = (int *)0x0;
  TSet<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,0>,FDefaultSetAllocator>
              *)this_01,(uint)&local_abc,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_ac4,(bool *)&local_aa0);
  lVar28 = *(longlong *)&this_01->field_0x0 + (longlong)local_abc * 0x18;
LAB_1490450f5:
  if (*(longlong *)(lVar28 + 8) == 0) {
    bVar12 = IsRayTracingEnabled();
    if (bVar12) {
      cVar13 = (**(code **)(this->_padding_ + 0x68))();
      if ((cVar13 == '\0') || ((this->_padding_ & 0x2000000) == 0)) {
        local_ac8 = 0;
      }
      else {
        local_ac8 = 1;
      }
    }
    else {
      local_ac8 = (**(code **)(this->_padding_ + 0x198))(this);
    }
    memset((FPrimitiveUniformShaderParametersBuilder *)local_9a8,0,0x460);
    pfVar20 = &(((FPrimitiveUniformShaderParametersBuilder *)local_9a8)->Parameters).
               CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
    local_9a8._368_8_ = ___xmm_3f800000000000000000000000000000;
    local_9a8._376_8_ = _UNK_150689648;
    lVar24 = 9;
    local_9a8._448_8_ = ___xmm_3f800000000000000000000000000000;
    local_9a8._456_8_ = _UNK_150689648;
    do {
      ((TVector4<float>_u_0_s_0 *)(pfVar20 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar20 + -2))->Y = 0.0;
      *pfVar20 = 0.0;
      pfVar20[1] = 1.0;
      pfVar20 = pfVar20 + 4;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    local_678 = (double)this->_padding_;
    dStack_670 = (double)this->_padding_;
    local_550 = local_550 & 0xfffffc00;
    local_9a8._656_8_ = 0;
    afStack_710[0] = 0.0;
    afStack_710[1] = 0.0;
    local_ab8[1] = 0xffffff00;
    local_708._0_8_ = 0;
    local_708._8_8_ = 0;
    local_ab8[2] = 0xffffff00;
    local_9a8._584_8_ = (TVector2<float>_u_0)0xffffff00ffffff00;
    local_6f8._0_8_ = 0;
    local_6f8._8_8_ = 0;
    local_6e8._0_8_ = 0;
    local_6e8._8_8_ = 0;
    local_9a8._624_8_ = (TIntVector2<unsigned_int>_u_0)0x0;
    local_6d8._0_8_ = 0;
    local_6d8._8_8_ = 0;
    local_9a8._640_4_ = 0.0;
    local_6c8._0_8_ = 0;
    local_6c8._8_8_ = 0;
    local_9a8._396_4_ = 0.0;
    local_6b8._0_8_ = 0;
    local_6b8._8_8_ = 0;
    local_9a8._412_4_ = 0.0;
    local_6a8._0_8_ = 0;
    local_6a8._8_8_ = 0;
    local_9a8._444_4_ = 0;
    local_698._0_8_ = 0;
    local_698._8_8_ = 0;
    local_9a8._428_4_ = 0xffffffff;
    local_688 = (double)this->_padding_;
    dStack_680 = (double)this->_padding_;
    local_668 = (double)this->_padding_;
    dStack_660 = (double)this->_padding_;
    local_658 = (double)this->_padding_;
    dStack_650 = (double)this->_padding_;
    local_648 = (double)this->_padding_;
    dStack_640 = (double)this->_padding_;
    local_638 = (double)this->_padding_;
    dStack_630 = (double)this->_padding_;
    local_628 = (double)this->_padding_;
    dStack_620 = (double)this->_padding_;
    local_618 = (double)this->_padding_;
    dStack_610 = (double)this->_padding_;
    local_608 = local_a28;
    dStack_600 = dStack_a20;
    local_5f8 = local_a18;
    dStack_5f0 = dStack_a10;
    local_5e8 = local_a08;
    dStack_5e0 = dStack_a00;
    local_5d8 = local_9f8;
    dStack_5d0 = dStack_9f0;
    local_5c8 = local_9e8;
    dStack_5c0 = dStack_9e0;
    local_5b8 = local_9d8;
    dStack_5b0 = dStack_9d0;
    local_5a8 = local_9c8;
    dStack_5a0 = dStack_9c0;
    local_570._s_0.X = (double)this->_padding_;
    local_570._s_0.Y = (double)this->_padding_;
    local_9a8._12_4_ = -1;
    local_598 = local_9b8;
    dStack_590 = dStack_9b0;
    local_570._s_0.Z = (double)this->_padding_;
    local_9a8._596_4_ = -1;
    local_588._s_0.X = (double)this->_padding_;
    local_588._s_0.Y = (double)this->_padding_;
    local_9a8._28_4_ = 0xffffffff;
    local_588._s_0.Z = (double)this->_padding_;
    local_9a8._476_4_ = 0xffffffff;
    local_9a8._492_4_ = 0xffffffff;
    local_9a8._496_4_ = 0xffffffff;
    local_9a8._592_4_ = 0xffffff;
    local_9a8._636_4_ = 0xffffffff;
    local_9a8._4_4_ = 0xffffffff;
    local_9a8._8_4_ = 0;
    local_9a8._556_4_ = 0xffffffff;
    local_9a8._572_4_ = 0;
    local_9a8._576_4_ = 0;
    local_ab8[3] = 0;
    local_ab8[4] = 0;
    local_9a8._632_4_ = 0;
    INSERT(0,0,0x1f,1);
    INSERT(local_554,0,0x1e,1);
    INSERT(local_554,0,0x1d,1);
    INSERT(local_554,0,0x1c,1);
    INSERT(local_554,0,0x1b,1);
    INSERT(local_554,0,0x1a,1);
    INSERT(local_554,0,0x19,1);
    INSERT(local_554,0,0x18,1);
    INSERT(local_554,1,0x17,1);
    INSERT(local_554,1,0x16,1);
    INSERT(local_554,1,0x15,1);
    INSERT(local_554,1,0x14,1);
    INSERT(local_554,1,0x13,1);
    INSERT(local_554,1,0x12,1);
    INSERT(local_554,1,0x11,1);
    INSERT(local_554,1,0x10,1);
    INSERT(local_554,0,0xf,1);
    INSERT(local_554,0,0xe,1);
    INSERT(local_554,0,0xd,1);
    INSERT(local_554,0,0xc,1);
    INSERT(local_554,0,0xb,1);
    INSERT(local_554,0,10,1);
    INSERT(local_554,1,9,1);
    INSERT(local_554,1,8,1);
    INSERT(local_554,1,7,1);
    INSERT(local_554,0,6,1);
    INSERT(local_554,0,5,1);
    INSERT(local_554,0,4,1);
    INSERT(local_554,0,3,1);
    INSERT(local_554,1,0,3);
    local_558 = (float)(double)this->_padding_;
    local_9a8._524_4_ = (undefined4)(double)this->_padding_;
    local_9a8._364_4_ = (undefined4)(double)this->_padding_;
    local_9a8._540_4_ = (undefined4)(double)this->_padding_;
    local_9a8._512_4_ = (undefined4)((double)this->_padding_ - (double)this->_padding_);
    local_9a8._516_4_ = (undefined4)((double)this->_padding_ - (double)this->_padding_);
    local_9a8._520_4_ = (undefined4)((double)this->_padding_ - (double)this->_padding_);
    local_9a8._528_4_ = (undefined4)((double)this->_padding_ + (double)this->_padding_);
    local_9a8._532_4_ = (undefined4)((double)this->_padding_ + (double)this->_padding_);
    local_9a8._536_4_ = (undefined4)((double)this->_padding_ + (double)this->_padding_);
    pFVar15 = FPrimitiveUniformShaderParametersBuilder::CustomPrimitiveData
                        ((FPrimitiveUniformShaderParametersBuilder *)local_9a8,
                         (FCustomPrimitiveData *)&this->_padding_);
    *(uint *)&pFVar15->field_0x454 =
         ((uint)*(byte *)((longlong)&this->_padding_ + 1) ^
         ZPULL(*(undefined4 *)&pFVar15->field_0x454,0,3)) & 7 ^ *(undefined4 *)&pFVar15->field_0x454
    ;
    if (lVar21 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(uint *)(lVar21 + 0x234);
    }
    (pFVar15->Parameters).LightmapDataIndex = uVar19;
    uVar19 = (**(code **)(this->_padding_ + 0x1f8))(this);
    (pFVar15->Parameters).LightmapUVIndex = uVar19;
    (pFVar15->Parameters).SingleCaptureIndex = local_ab8[0];
    if (lVar21 == 0) {
      (pFVar15->Parameters).InstanceSceneDataOffset = 0xffffffff;
      uVar19 = 0;
      (pFVar15->Parameters).NumInstanceSceneDataEntries = 0;
      (pFVar15->Parameters).InstancePayloadDataOffset = 0xffffffff;
    }
    else {
      (pFVar15->Parameters).InstanceSceneDataOffset = *(uint *)(lVar21 + 0x224);
      (pFVar15->Parameters).NumInstanceSceneDataEntries = *(uint *)(lVar21 + 0x228);
      (pFVar15->Parameters).InstancePayloadDataOffset = *(uint *)(lVar21 + 0x22c);
      uVar19 = *(uint *)(lVar21 + 0x230);
    }
    pTVar14 = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0;
    (pFVar15->Parameters).InstancePayloadDataStride = uVar19;
    uVar19 = ((uint)(byte)this->_padding_ ^ *(uint *)&pFVar15->field_0x454) & 8 ^
             *(uint *)&pFVar15->field_0x454;
    *(uint *)&pFVar15->field_0x454 = uVar19;
    uVar19 = ((uint)local_ac0 << 6 ^ uVar19) & 0x40 ^ uVar19;
    *(uint *)&pFVar15->field_0x454 = uVar19;
    uVar19 = ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 8 ^ uVar19) & 0x200 ^ uVar19;
    *(uint *)&pFVar15->field_0x454 = uVar19;
    uVar19 = ((uint)*(byte *)((longlong)&this->_padding_ + 5) << 7 ^ uVar19) & 0x100 ^ uVar19;
    *(uint *)&pFVar15->field_0x454 = uVar19;
    *(uint *)&pFVar15->field_0x458 =
         ((uint)(*(byte *)((longlong)&this->_padding_ + 4) >> 4) ^
         ZPULL(*(undefined4 *)&pFVar15->field_0x458,0,1)) & 1 ^ *(undefined4 *)&pFVar15->field_0x458
    ;
    *(uint *)&pFVar15->field_0x454 = ((uint)local_ac8 << 0xb ^ uVar19) & 0x800 ^ uVar19;
    bVar11 = (**(code **)(this->_padding_ + 0x1a0))(this);
    uVar19 = ((uint)bVar11 << 0xc ^ *(uint *)&pFVar15->field_0x454) & 0x1000 ^
             *(uint *)&pFVar15->field_0x454;
    *(uint *)&pFVar15->field_0x454 = uVar19;
    *(uint *)&pFVar15->field_0x454 = ((uint)local_abf[0] << 5 ^ uVar19) & 0x20 ^ uVar19;
    bVar12 = FPrimitiveSceneProxy::UseSingleSampleShadowFromStationaryLights
                       ((FPrimitiveSceneProxy *)this);
    pFVar15->bUseSingleSampleShadowFromStationaryLights = 0;
    *(uint *)&pFVar15->field_0x454 = *(uint *)&pFVar15->field_0x454 | (uint)bVar12 << 4;
    uVar19 = ((uint)*(byte *)((longlong)&this->_padding_ + 2) * 2 ^ *(uint *)&pFVar15->field_0x458)
             & 0x20 ^ *(uint *)&pFVar15->field_0x458;
    *(uint *)&pFVar15->field_0x458 = uVar19;
    lVar21 = 8;
    *(uint *)&pFVar15->field_0x458 =
         ((uint)*(byte *)((longlong)&this->_padding_ + 5) << 9 ^ uVar19) & 0x200 ^ uVar19;
    pFVar10 = &local_548;
    do {
      pFVar25 = pFVar15;
      pFVar16 = pFVar10;
      pFVar10 = (FPrimitiveUniformShaderParametersBuilder *)
                ((pFVar16->Parameters).RelativeWorldToLocal.M + 2);
      uVar19 = (pFVar25->Parameters).InstanceSceneDataOffset;
      uVar22 = (pFVar25->Parameters).NumInstanceSceneDataEntries;
      iVar18 = (pFVar25->Parameters).SingleCaptureIndex;
      pFVar15 = (FPrimitiveUniformShaderParametersBuilder *)
                ((pFVar25->Parameters).RelativeWorldToLocal.M + 2);
      (pFVar16->Parameters).Flags = (pFVar25->Parameters).Flags;
      (pFVar16->Parameters).InstanceSceneDataOffset = uVar19;
      (pFVar16->Parameters).NumInstanceSceneDataEntries = uVar22;
      (pFVar16->Parameters).SingleCaptureIndex = iVar18;
      uVar9 = *(undefined8 *)((longlong)&(pFVar25->Parameters).PositionHigh.field0_0x0 + 8);
      *(undefined8 *)&(pFVar16->Parameters).PositionHigh.field0_0x0 =
           *(undefined8 *)&(pFVar25->Parameters).PositionHigh.field0_0x0;
      *(undefined8 *)((longlong)&(pFVar16->Parameters).PositionHigh.field0_0x0 + 8) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).LocalToRelativeWorld.M[0] + 2);
      *(undefined8 *)(pFVar16->Parameters).LocalToRelativeWorld.M[0] =
           *(undefined8 *)(pFVar25->Parameters).LocalToRelativeWorld.M[0];
      *(undefined8 *)((pFVar16->Parameters).LocalToRelativeWorld.M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).LocalToRelativeWorld.M[1] + 2);
      *(undefined8 *)(pFVar16->Parameters).LocalToRelativeWorld.M[1] =
           *(undefined8 *)(pFVar25->Parameters).LocalToRelativeWorld.M[1];
      *(undefined8 *)((pFVar16->Parameters).LocalToRelativeWorld.M[1] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).LocalToRelativeWorld.M[2] + 2);
      *(undefined8 *)(pFVar16->Parameters).LocalToRelativeWorld.M[2] =
           *(undefined8 *)(pFVar25->Parameters).LocalToRelativeWorld.M[2];
      *(undefined8 *)((pFVar16->Parameters).LocalToRelativeWorld.M[2] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).LocalToRelativeWorld.M[3] + 2);
      *(undefined8 *)(pFVar16->Parameters).LocalToRelativeWorld.M[3] =
           *(undefined8 *)(pFVar25->Parameters).LocalToRelativeWorld.M[3];
      *(undefined8 *)((pFVar16->Parameters).LocalToRelativeWorld.M[3] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).RelativeWorldToLocal.M[0] + 2);
      *(undefined8 *)(pFVar16->Parameters).RelativeWorldToLocal.M[0] =
           *(undefined8 *)(pFVar25->Parameters).RelativeWorldToLocal.M[0];
      *(undefined8 *)((pFVar16->Parameters).RelativeWorldToLocal.M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar25->Parameters).RelativeWorldToLocal.M[1] + 2);
      *(undefined8 *)(pFVar16->Parameters).RelativeWorldToLocal.M[1] =
           *(undefined8 *)(pFVar25->Parameters).RelativeWorldToLocal.M[1];
      *(undefined8 *)((pFVar16->Parameters).RelativeWorldToLocal.M[1] + 2) = uVar9;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    uVar19 = (pFVar15->Parameters).InstanceSceneDataOffset;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).RelativeWorldToLocal.M[2] + 2);
    (pFVar10->Parameters).Flags = (pFVar15->Parameters).Flags;
    (pFVar10->Parameters).InstanceSceneDataOffset = uVar19;
    *(undefined8 *)((pFVar16->Parameters).RelativeWorldToLocal.M[2] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).RelativeWorldToLocal.M[3] + 2);
    *(undefined8 *)(pFVar16->Parameters).RelativeWorldToLocal.M[3] =
         *(undefined8 *)(pFVar25->Parameters).RelativeWorldToLocal.M[3];
    *(undefined8 *)((pFVar16->Parameters).RelativeWorldToLocal.M[3] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).PreviousLocalToRelativeWorld.M[0] + 2);
    *(undefined8 *)(pFVar16->Parameters).PreviousLocalToRelativeWorld.M[0] =
         *(undefined8 *)(pFVar25->Parameters).PreviousLocalToRelativeWorld.M[0];
    *(undefined8 *)((pFVar16->Parameters).PreviousLocalToRelativeWorld.M[0] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).PreviousLocalToRelativeWorld.M[1] + 2);
    *(undefined8 *)(pFVar16->Parameters).PreviousLocalToRelativeWorld.M[1] =
         *(undefined8 *)(pFVar25->Parameters).PreviousLocalToRelativeWorld.M[1];
    *(undefined8 *)((pFVar16->Parameters).PreviousLocalToRelativeWorld.M[1] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).PreviousLocalToRelativeWorld.M[2] + 2);
    *(undefined8 *)(pFVar16->Parameters).PreviousLocalToRelativeWorld.M[2] =
         *(undefined8 *)(pFVar25->Parameters).PreviousLocalToRelativeWorld.M[2];
    *(undefined8 *)((pFVar16->Parameters).PreviousLocalToRelativeWorld.M[2] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar25->Parameters).PreviousLocalToRelativeWorld.M[3] + 2);
    *(undefined8 *)(pFVar16->Parameters).PreviousLocalToRelativeWorld.M[3] =
         *(undefined8 *)(pFVar25->Parameters).PreviousLocalToRelativeWorld.M[3];
    *(undefined8 *)((pFVar16->Parameters).PreviousLocalToRelativeWorld.M[3] + 2) = uVar9;
    if (param_3->IsValid != '\0') {
      local_548._1108_4_ = local_548._1108_4_ | 0x6000;
      dVar2 = (param_3->Max).field0_0x0._s_0.X;
      dVar3 = (param_3->Max).field0_0x0._s_0.Y;
      dVar4 = (param_3->Min).field0_0x0._s_0.X;
      dVar5 = (param_3->Max).field0_0x0._s_0.Z;
      dVar6 = (param_3->Min).field0_0x0._s_0.Y;
      dVar7 = (param_3->Min).field0_0x0._s_0.Z;
      fVar29 = (float)dVar2;
      fVar30 = (float)dVar3;
      fVar31 = (float)dVar5;
      local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.X = (float)dVar4;
      local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Y = (float)dVar6;
      local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Z = (float)dVar7;
      local_548.Parameters.InstanceLocalBoundsCenter.field0_0x0._s_0.X =
           (fVar29 + local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.X) *
           __real_3f000000;
      local_548.Parameters.InstanceLocalBoundsCenter.field0_0x0._s_0.Z =
           (fVar31 + local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Z) *
           __real_3f000000;
      local_548.Parameters.InstanceLocalBoundsExtent.field0_0x0._s_0.X =
           (fVar29 - local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.X) *
           __real_3f000000;
      local_548.Parameters.InstanceLocalBoundsCenter.field0_0x0._s_0.Y =
           (fVar30 + local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Y) *
           __real_3f000000;
      dVar3 = (dVar3 - dVar6) * __real_3fe0000000000000;
      dVar5 = (dVar5 - dVar7) * __real_3fe0000000000000;
      dVar2 = (dVar2 - dVar4) * __real_3fe0000000000000;
      local_548.Parameters.InstanceLocalBoundsExtent.field0_0x0._s_0.Y =
           (fVar30 - local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Y) *
           __real_3f000000;
      local_548.Parameters.InstanceLocalBoundsExtent.field0_0x0._s_0.Z =
           (fVar31 - local_548.Parameters.PreSkinnedLocalBoundsMin.field0_0x0._s_0.Z) *
           __real_3f000000;
      local_548.Parameters.PreSkinnedLocalBoundsMax.field0_0x0._s_0.X =
           (float)(dVar2 + dVar4 + dVar2);
      local_548.Parameters.PreSkinnedLocalBoundsMax.field0_0x0._s_0.Y =
           (float)(dVar3 + dVar6 + dVar3);
      local_548.Parameters.PreSkinnedLocalBoundsMax.field0_0x0._s_0.Z =
           (float)(dVar5 + dVar7 + dVar5);
    }
    this_02 = ::operator_new(0x38);
    if (this_02 != (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0) {
      FRenderResource::FRenderResource((FRenderResource *)this_02);
      this_02->BufferUsage = UniformBuffer_MultiFrame;
      this_02->_padding_ = (longlong)&___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_
      ;
      this_02->UniformBufferRHI = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
      this_02->Contents = (uchar *)0x0;
      pTVar14 = this_02;
    }
    *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)(lVar28 + 8) = pTVar14;
    pFVar17 = FPrimitiveUniformShaderParametersBuilder::Build(&local_548);
    TUniformBuffer<FPrimitiveUniformShaderParameters>::SetContents(pTVar14,local_a98,pFVar17);
    (**(code **)(**(longlong **)(lVar28 + 8) + 0x18))(*(longlong **)(lVar28 + 8),local_a98);
  }
  pTVar14 = *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)(lVar28 + 8);
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return pTVar14;
}

// GetDynamicMeshElements @ 149045e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSceneProxy::GetDynamicMeshElements
          (FNiagaraSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  TStatIdData *pTVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT> FVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentGetDynamicMeshElements> FVar13;
  longlong lVar14;
  FPrimitiveDrawInterface *pFVar15;
  TBoxSphereBounds<double,double> *pTVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  undefined1 uVar19;
  FName FVar20;
  FSceneViewFamily *pFVar21;
  FName FVar22;
  uint uVar23;
  FColor_u_0 local_res8;
  uint uStackX_c;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_res10;
  FSceneViewFamily *local_res18;
  uint local_res20;
  FColor_u_0 local_d0;
  uint uStack_cc;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  FName local_98;
  undefined1 local_88 [72];
  
  uVar23 = 0;
  FVar12 = StatPtr_STAT_NiagaraOverview_RT;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar11 = ::FName::FName(&local_c0,"STAT_NiagaraOverview_RT");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar11,
                        L"RT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar8 = false;
  bVar3 = false;
  FVar17.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar10 = FVar20.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_149045fd5:
    bVar7 = bVar3;
    bVar5 = bVar8;
    bVar8 = false;
    local_c0 = local_b8;
    FVar20 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar8 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar17.Bits;
        uStackX_c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x21a);
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149045fd5;
    local_res8.Bits = FVar17.Bits;
    uStackX_c = uVar10;
    local_c0 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  FVar13 = StatPtr_STAT_NiagaraComponentGetDynamicMeshElements;
  if (StatPtr_STAT_NiagaraComponentGetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentGetDynamicMeshElements>)0x0) {
    pFVar11 = ::FName::FName(&local_c8,"STAT_NiagaraComponentGetDynamicMeshElements");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentGetDynamicMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraComponentGetDynamicMeshElements,*pFVar11,
                        L"Get Dynamic Mesh Elements (RT)","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  uVar19 = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8.Bits = local_res8.Bits & 0xffffff00;
  FVar17.Bits = (uint)FVar22.ComparisonIndex.Value;
  uVar10 = FVar22.Number;
  if ((FVar17.Bits == 0) && (uVar10 == 0)) {
LAB_149046139:
    local_c8 = local_a8;
    FVar22 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      uVar19 = 1;
      local_res8._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar17.Bits;
        uStackX_c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x21b);
        uVar19 = 3;
        local_res8._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149046139;
    local_res8.Bits = FVar17.Bits;
    uStackX_c = uVar10;
    local_c8 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    local_res8.Bits = CONCAT31(local_res8.Bits._1_3_,uVar19) | 4;
  }
  pTVar2 = (this->SystemStatID).StatIdPtr;
  bVar3 = false;
  bVar6 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar18 = *(FName *)&pTVar2->Name;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d0._s_0,(pTVar2->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.Bits = FVar17.Bits;
        uStack_cc = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d0._s_0,(pTVar2->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponent.cpp"
                   ,0x21d);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d0.Bits = FVar17.Bits;
      uStack_cc = uVar10;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar4 = true;
      goto LAB_149046201;
    }
  }
  bVar4 = false;
  FVar18 = local_98;
LAB_149046201:
  pFVar21 = local_res18;
  if ((this->RenderData != (FNiagaraSystemRenderData *)0x0) &&
     (lVar14 = (**(code **)(local_res18->Scene->_padding_ + 0x478))(), lVar14 != 0)) {
    FNiagaraSystemRenderData::GetDynamicMeshElements
              (this->RenderData,param_1,pFVar21,local_res20,param_4,this);
  }
  if ((((pFVar21->EngineShowFlags).Bounds != 0) &&
      ((pFVar21->EngineShowFlags).Particles == 1 && (pFVar21->EngineShowFlags).Niagara == 1)) &&
     (pFVar21 = local_res18, uVar10 = local_res20, 0 < param_1->ArrayNum)) {
    do {
      if ((uVar10 >> (uVar23 & 0x1f) & 1) != 0) {
        lVar14 = this->_padding_;
        pFVar15 = FMeshElementCollector::GetPDI(param_4,uVar23);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar15,&pFVar21->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar14 & 0x600) != 0);
        cVar9 = (**(code **)(this->_padding_ + 0x188))(this);
        uVar10 = local_res20;
        if (cVar9 != '\0') {
          lVar14 = this->_padding_;
          pTVar16 = (TBoxSphereBounds<double,double> *)
                    (**(code **)(this->_padding_ + 400))(this,local_88);
          pFVar15 = FMeshElementCollector::GetPDI(param_4,uVar23);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar15,&local_res18->EngineShowFlags,pTVar16,
                     (lVar14 & 0x600) != 0);
          pFVar21 = local_res18;
          param_1 = local_res10;
          uVar10 = local_res20;
        }
      }
      uVar23 = uVar23 + 1;
      FVar20 = local_c0;
      FVar22 = local_c8;
    } while ((int)uVar23 < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  FVar17 = local_res8;
  if ((local_res8.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar17.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar17.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 149046430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraSceneProxy::GetDynamicRayTracingInstances
          (FNiagaraSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    FNiagaraSystemRenderData::GetDynamicRayTracingInstances(this->RenderData,param_1,this);
    return;
  }
  return;
}

// GetLWCRenderTile @ 149046fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<float> * __thiscall FNiagaraSceneProxy::GetLWCRenderTile(FNiagaraSceneProxy *this)

{
  FNiagaraSystemRenderData *pFVar1;
  
  pFVar1 = (FNiagaraSystemRenderData *)&UE::Math::TVector<float>::ZeroVector;
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    pFVar1 = this->RenderData;
  }
  return &pFVar1->LWCRenderTile;
}

// GetMemoryFootprint @ 149047030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNiagaraSceneProxy::GetMemoryFootprint(FNiagaraSceneProxy *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)&this->_padding_ + 4) * 4;
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    uVar1 = FNiagaraSystemRenderData::GetDynamicDataSize(this->RenderData);
    return uVar1 + 0x3a0 + iVar2;
  }
  return iVar2 + 0x3a0;
}

// GetTypeHash @ 14904a080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FNiagaraSceneProxy::GetTypeHash(FNiagaraSceneProxy *this)

{
  return 0x155271198;
}

// GetViewRelevance @ 14904c310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNiagaraSceneProxy::GetViewRelevance
          (FNiagaraSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  FNiagaraSystemRenderData *this_00;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FPrimitiveViewRelevance *pFVar8;
  uint uVar9;
  uint uVar10;
  FPrimitiveViewRelevance local_18;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  this_00 = this->RenderData;
  if (((this_00 != (FNiagaraSystemRenderData *)0x0) && (this_00->bRenderingEnabled_RT != false)) &&
     (0 < (this_00->EmitterRenderers_RT).ArrayNum)) {
    pFVar8 = FNiagaraSystemRenderData::GetViewRelevance(this_00,&local_18,param_1,this);
    uVar5 = *(undefined8 *)&pFVar8->field_0x8;
    __return_storage_ptr__->_padding_ = pFVar8->_padding_;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
    __return_storage_ptr__->bDynamicRelevance = 1;
    bVar6 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
    uVar7 = 0;
    if ((!bVar6) ||
       (uVar9 = 4,
       (param_1->Family->EngineShowFlags).Particles != 1 ||
       (param_1->Family->EngineShowFlags).Niagara != 1)) {
      uVar9 = uVar7;
    }
    __return_storage_ptr__->bDrawRelevance = 0;
    *(uint *)&__return_storage_ptr__->field_0x8 =
         *(uint *)&__return_storage_ptr__->field_0x8 | uVar9;
    bVar6 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    __return_storage_ptr__->bRenderCustomDepth = 0;
    *(uint *)&__return_storage_ptr__->field_0x8 =
         *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar6 << 5;
    bVar6 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
    __return_storage_ptr__->bShadowRelevance = 0;
    *(uint *)&__return_storage_ptr__->field_0x8 =
         *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar6 << 3;
    uVar9 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
            *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
            *(uint *)&__return_storage_ptr__->field_0x8;
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar9;
    if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
      uVar7 = 0x2000;
    }
    uVar9 = uVar9 & 0xffffdfff;
    uVar7 = uVar7 | uVar9;
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
    uVar7 = ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^ uVar7) & 0x4000 ^ uVar7;
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
    cVar3 = (char)this->_padding_;
    if (((((cVar3 == '\x02') || (cVar3 == '\x01')) ||
         (((this->_padding_ & 0x1000000000000) != 0 ||
          ((bVar4 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar4 < '\0' ||
           (uVar10 = 0, (bVar4 & 0x72) != 0)))))) &&
        (uVar10 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0)) &&
       ((char)uVar9 < '\0')) {
      uVar10 = 0x10;
    }
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar7 & 0xffffffef | uVar10;
  }
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 14904c870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraSceneProxy::HasRayTracingRepresentation(FNiagaraSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 14905a790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraSceneProxy::IsRayTracingRelevant(FNiagaraSceneProxy *this)

{
  return true;
}

// OnTransformChanged @ 14905c970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraSceneProxy::OnTransformChanged(FNiagaraSceneProxy *this,FRHICommandListBase *param_1)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  pTVar2 = UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&this->_padding_,&local_88);
  dVar1 = pTVar2->M[0][1];
  (this->LocalToWorldInverse).M[0][0] = pTVar2->M[0][0];
  (this->LocalToWorldInverse).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->LocalToWorldInverse).M[0][2] = pTVar2->M[0][2];
  (this->LocalToWorldInverse).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->LocalToWorldInverse).M[1][0] = pTVar2->M[1][0];
  (this->LocalToWorldInverse).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->LocalToWorldInverse).M[1][2] = pTVar2->M[1][2];
  (this->LocalToWorldInverse).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->LocalToWorldInverse).M[2][0] = pTVar2->M[2][0];
  (this->LocalToWorldInverse).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->LocalToWorldInverse).M[2][2] = pTVar2->M[2][2];
  (this->LocalToWorldInverse).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->LocalToWorldInverse).M[3][0] = pTVar2->M[3][0];
  (this->LocalToWorldInverse).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->LocalToWorldInverse).M[3][2] = pTVar2->M[3][2];
  (this->LocalToWorldInverse).M[3][3] = dVar1;
  ReleaseUniformBuffers(this,false);
  return;
}

// ReleaseRenderThreadResources @ 1490629c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraSceneProxy::ReleaseRenderThreadResources(FNiagaraSceneProxy *this)

{
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    FNiagaraSystemRenderData::ReleaseRenderThreadResources(this->RenderData);
  }
  ReleaseUniformBuffers(this,true);
  return;
}

// ReleaseUniformBuffers @ 149062c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraSceneProxy::ReleaseUniformBuffers(FNiagaraSceneProxy *this,bool param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar10 = 0;
  iVar2 = *(int *)&(this->CustomUniformBuffers).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CustomUniformBuffers).field_0x10
  ;
  iVar19 = 0;
  uVar8 = 1;
  iVar9 = iVar19;
  iVar14 = iVar19;
  iVar16 = iVar19;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->CustomUniformBuffers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_70.Array;
    }
    uVar13 = *puVar17;
    iVar16 = iVar10;
    iVar14 = iVar10;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149062cce;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res20;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_149062cce:
  uVar13 = *(uint *)&(this->CustomUniformBuffers).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  puVar18 = &(this->CustomUniformBuffers).field_0x10;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar8,iVar14);
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->CustomUniformBuffers).field_0x8 -
                       *(int *)&(this->CustomUniformBuffers).field_0x34);
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CustomUniformBuffers).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->CustomUniformBuffers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar18;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149062dd0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_149062dd0:
  while( true ) {
    if (*(int *)&(this->CustomUniformBuffers).field_0x8 -
        *(int *)&(this->CustomUniformBuffers).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) break;
    lVar3 = *(longlong *)&(this->CustomUniformBuffers).field_0x0;
    lVar11 = lVar3 + (longlong)TStack_70.CurrentBitIndex * 0x18;
    plVar4 = *(longlong **)(lVar3 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
      puVar5 = *(undefined8 **)(lVar11 + 8);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      *(undefined8 *)(lVar11 + 8) = 0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (this->RenderData != (FNiagaraSystemRenderData *)0x0) {
    iVar19 = (this->RenderData->RendererDrawOrder).ArrayNum;
  }
  if ((!param_1) &&
     (iVar10 = *(int *)&(this->CustomUniformBuffers).field_0x8 -
               *(int *)&(this->CustomUniformBuffers).field_0x34, iVar19 < iVar10)) {
    iVar10 = iVar19;
  }
  TSet<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBuffer<FPrimitiveUniformShaderParameters>_*,0>,FDefaultSetAllocator>
           *)&this->CustomUniformBuffers,iVar10);
  return;
}

// SetRenderingEnabled_GT @ 149067c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraSceneProxy::SetRenderingEnabled_GT(FNiagaraSceneProxy *this,bool param_1)

{
  FNiagaraSystemRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FNiagaraSystemRenderData *pFStack_30;
  undefined ***pppuStack_20;
  ulonglong uStack_18;
  
  pFVar1 = this->RenderData;
  if (pFVar1 == (FNiagaraSystemRenderData *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemRenderData.cpp"
                       ,0x174,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pFVar1->bRenderingEnabled_GT != param_1) {
    pFVar1->bRenderingEnabled_GT = param_1;
    ppuStack_38 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::<lambda_1>,1,0>
                   ::_vftable_;
    pppuStack_20 = (undefined ***)0x0;
    apcStack_48[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,void>
         ::Call;
    pFStack_30 = pFVar1;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>
              (&UE::RenderCommandPipe::NiagaraDynamicData,
               (TUniqueFunction<void___cdecl(void)> *)apcStack_48);
    if (apcStack_48[0] != (code *)0x0) {
      pppuVar4 = &ppuStack_38;
      if (pppuStack_20 != (undefined ***)0x0) {
        pppuVar4 = pppuStack_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

