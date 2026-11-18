// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// GetGPUInstanceCounterManager @ 148ebda90

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

FNiagaraGPUInstanceCountManager * __thiscall
FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
          (FNiagaraGpuComputeDispatchInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraGPUInstanceCountManager *pFVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraGPUInstanceCountManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->GPUInstanceCounterManager;
}

// FNiagaraGpuComputeDispatchInterface @ 1492d0e30

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

FNiagaraGpuComputeDispatchInterface * __thiscall
FNiagaraGpuComputeDispatchInterface::FNiagaraGpuComputeDispatchInterface
          (FNiagaraGpuComputeDispatchInterface *this,EShaderPlatform param_1,Type param_2)

{
  this->ShaderPlatform = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->GpuReadbackManagerPtr).Ptr = (FNiagaraGpuReadbackManager *)0x0;
  (this->EmptyUAVPoolPtr).Ptr = (FNiagaraEmptyUAVPool *)0x0;
  (this->GPUInstanceCounterManager).AddDrawIndirectGuard.State = (atomic<unsigned_char>)0x0;
  (this->GPUInstanceCounterManager).RequiredCulledCounts = (atomic<int>)0x0;
  (this->GPUInstanceCounterManager).AllocatedCulledCounts = 0;
  (this->GPUInstanceCounterManager).CountBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUInstanceCounterManager).CountBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUInstanceCounterManager).CountBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUInstanceCounterManager).CountBuffer.NumBytes = 0;
  (this->GPUInstanceCounterManager).CountBuffer.ClassName.ComparisonIndex = 0;
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDispatchInterface__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FeatureLevel = param_2;
  (this->GPUInstanceCounterManager).UsedInstanceCounts = 0;
  (this->GPUInstanceCounterManager).AllocatedInstanceCounts = 0;
  (this->GPUInstanceCounterManager).bAcquiredCulledCounts = false;
  (this->GPUInstanceCounterManager).CulledCountsRHIAccess = None;
  (this->GPUInstanceCounterManager).FeatureLevel = param_2;
  *(undefined8 *)&(this->GPUInstanceCounterManager).CountBuffer.ClassName.Number = 0;
  (this->GPUInstanceCounterManager).CountBuffer.OwnerName.Number = 0;
  (this->GPUInstanceCounterManager).CulledCountBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUInstanceCounterManager).CulledCountBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0
  ;
  (this->GPUInstanceCounterManager).CulledCountBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUInstanceCounterManager).CulledCountBuffer.NumBytes = 0;
  (this->GPUInstanceCounterManager).CulledCountBuffer.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).CulledCountBuffer.ClassName.Number = 0;
  (this->GPUInstanceCounterManager).CulledCountBuffer.OwnerName.Number = 0;
  (this->GPUInstanceCounterManager).FreeEntries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).FreeEntries.ArrayNum = 0;
  (this->GPUInstanceCounterManager).FreeEntries.ArrayMax = 0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.UAV.Reference =
       (FRHIUnorderedAccessView *)0x0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.SRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.NumBytes = 0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.ClassName.ComparisonIndex = 0;
  (this->GPUInstanceCounterManager).CountReadback = (FRHIGPUMemoryReadback *)0x0;
  (this->GPUInstanceCounterManager).CountReadbackSize = 0;
  (this->GPUInstanceCounterManager).MultiViewAllocatedInstanceCounts = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).MultiViewCountBuffer.ClassName.Number = 0;
  (this->GPUInstanceCounterManager).MultiViewCountBuffer.OwnerName.Number = 0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[0].ArrayNum = 0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[0].ArrayMax = 0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[1].ArrayNum = 0;
  (this->GPUInstanceCounterManager).DrawIndirectArgGenTasks[1].ArrayMax = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x8 = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x20 = 0;
  *(undefined4 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x28 = 0;
  *(undefined4 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x34 = 0;
  *(undefined8 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x40 = 0;
  *(undefined4 *)&(this->GPUInstanceCounterManager).DrawIndirectArgMap.field_0x48 = 0;
  (this->GPUInstanceCounterManager).InstanceCountClearTasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).InstanceCountClearTasks.ArrayNum = 0;
  (this->GPUInstanceCounterManager).InstanceCountClearTasks.ArrayMax = 0;
  (this->GPUInstanceCounterManager).InstanceCountInitTasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).InstanceCountInitTasks.ArrayNum = 0;
  (this->GPUInstanceCounterManager).InstanceCountInitTasks.ArrayMax = 0;
  (this->GPUInstanceCounterManager).DrawIndirectPool.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GPUInstanceCounterManager).DrawIndirectPool.ArrayNum = 0;
  (this->GPUInstanceCounterManager).DrawIndirectPool.ArrayMax = 0;
  (this->GPUInstanceCounterManager).DrawIndirectLowWaterFrames = 0;
  (this->GPUInstanceCounterManager).AcquireEntryGuard.State = (atomic<unsigned_char>)0x0;
  (this->GpuDataManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuDataManagers).ArrayNum = 0;
  (this->GpuDataManagers).ArrayMax = 0;
  (this->SimulationSceneViews).FirstElementPtr = (FSceneView *)0x0;
  (this->SimulationSceneViews).BytesBetweenElements = 0;
  (this->SimulationSceneViews).NumElements = 0;
  this->bIsOutsideSceneRenderer = false;
  this->bIsFirstViewFamily = true;
  this->bIsLastViewFamily = true;
  *(undefined8 *)&this->OnPreInitViewsEvent = 0;
  *(undefined8 *)&(this->OnPreInitViewsEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreInitViewsEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreInitViewsEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPreRenderEvent = 0;
  *(undefined8 *)&(this->OnPreRenderEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreRenderEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreRenderEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPostRenderEvent = 0;
  *(undefined8 *)&(this->OnPostRenderEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostRenderEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPostRenderEvent).field_0x18 = 2;
  (this->ComputeManagerGuard).State = (atomic<unsigned_char>)0x0;
  return this;
}

// ~FNiagaraGpuComputeDispatchInterface @ 1492d4620

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
FNiagaraGpuComputeDispatchInterface::~FNiagaraGpuComputeDispatchInterface
          (FNiagaraGpuComputeDispatchInterface *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraGpuReadbackManager *pFVar5;
  TNode *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FNiagaraGpuComputeDispatchInterface__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPostRenderEvent).field_0x8,*(int *)&(this->OnPostRenderEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnPostRenderEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostRenderEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreRenderEvent).field_0x8,*(int *)&(this->OnPreRenderEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnPreRenderEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreRenderEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreInitViewsEvent).field_0x8,*(int *)&(this->OnPreInitViewsEvent).field_0x10
            );
  pvVar3 = *(void **)&(this->OnPreInitViewsEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreInitViewsEvent);
  DestructItems<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,int>
            ((TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>
              *)(this->GpuDataManagers).AllocatorInstance.Data,(this->GpuDataManagers).ArrayNum);
  pFVar4 = (this->GpuDataManagers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FNiagaraGPUInstanceCountManager::~FNiagaraGPUInstanceCountManager
            (&this->GPUInstanceCounterManager);
  TDefaultDelete<FNiagaraEmptyUAVPool>::operator()
            ((TDefaultDelete<FNiagaraEmptyUAVPool> *)&this->EmptyUAVPoolPtr,
             (this->EmptyUAVPoolPtr).Ptr);
  pFVar5 = (this->GpuReadbackManagerPtr).Ptr;
  if (pFVar5 != (FNiagaraGpuReadbackManager *)0x0) {
    pTVar6 = (pFVar5->PendingReadbacks).Tail;
    while (pTVar6 != (TNode *)0x0) {
      (pFVar5->PendingReadbacks).Tail = pTVar6->NextNode;
      FNiagaraGpuReadbackManager::FPendingReadback::~FPendingReadback(&pTVar6->Item);
      ::operator_delete(pTVar6,0x70);
      pTVar6 = (pFVar5->PendingReadbacks).Tail;
    }
    ::operator_delete(pFVar5,0x10);
  }
  this->_padding_ = (longlong)&___7FFXSystemInterface__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// AddSortedGPUSimulation @ 1492db1f0

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

bool __thiscall
FNiagaraGpuComputeDispatchInterface::AddSortedGPUSimulation
          (FNiagaraGpuComputeDispatchInterface *this,FNiagaraGPUSortInfo *param_1)

{
  return false;
}

// Get @ 1492ed3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraGpuComputeDispatchInterface * __cdecl
FNiagaraGpuComputeDispatchInterface::Get(FFXSystemInterface *param_1)

{
  FNiagaraGpuComputeDispatchInterface *pFVar1;
  
  if (param_1 != (FFXSystemInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492ed3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FNiagaraGpuComputeDispatchInterface *)
             (**(code **)param_1->_padding_)(param_1,&FNiagaraGpuComputeDispatch::Name);
    return pFVar1;
  }
  return (FNiagaraGpuComputeDispatchInterface *)0x0;
}

// Get @ 1492ed3c0

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

FNiagaraGpuComputeDispatchInterface * __cdecl
FNiagaraGpuComputeDispatchInterface::Get(FSceneInterface *param_1)

{
  undefined8 *puVar1;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  
  if (param_1 != (FSceneInterface *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x478))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492ed3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar2 = (FNiagaraGpuComputeDispatchInterface *)
               (**(code **)*puVar1)(puVar1,&FNiagaraGpuComputeDispatch::Name,*(code **)*puVar1);
      return pFVar2;
    }
  }
  return (FNiagaraGpuComputeDispatchInterface *)0x0;
}

// Get @ 1492ed400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraGpuComputeDispatchInterface * __cdecl
FNiagaraGpuComputeDispatchInterface::Get(UWorld *param_1)

{
  undefined8 *puVar1;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  
  if ((param_1 != (UWorld *)0x0) && (param_1->Scene != (FSceneInterface *)0x0)) {
    puVar1 = (undefined8 *)(**(code **)(param_1->Scene->_padding_ + 0x478))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492ed437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar2 = (FNiagaraGpuComputeDispatchInterface *)
               (**(code **)*puVar1)(puVar1,&FNiagaraGpuComputeDispatch::Name,*(code **)*puVar1);
      return pFVar2;
    }
  }
  return (FNiagaraGpuComputeDispatchInterface *)0x0;
}

// GetBlackTexture @ 1492ed5c0

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

FRDGTexture * __thiscall
FNiagaraGpuComputeDispatchInterface::GetBlackTexture
          (FNiagaraGpuComputeDispatchInterface *this,FRDGBuilder *param_1,ETextureDimension param_2)

{
  code *pcVar1;
  bool bVar2;
  FRDGSystemTextures *pFVar3;
  FRDGTexture *pFVar4;
  
  pFVar3 = FRDGSystemTextures::Get(param_1);
  if (param_2 == Texture2D) {
    return pFVar3->Black;
  }
  if (param_2 == Texture2DArray) {
    return pFVar3->BlackArray;
  }
  if (param_2 == Texture3D) {
    return pFVar3->VolumetricBlack;
  }
  if (param_2 != TextureCube) {
    if (param_2 == TextureCubeArray) {
      return pFVar3->CubeArrayBlack;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatchInterface.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
    return (FRDGTexture *)0x0;
  }
  return pFVar3->CubeBlack;
}

// GetBlackTextureSRV @ 1492ed660

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

FRDGTextureSRV * __thiscall
FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
          (FNiagaraGpuComputeDispatchInterface *this,FRDGBuilder *param_1,ETextureDimension param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FRDGSystemTextures *pFVar4;
  FRDGTextureSRV *pFVar5;
  FRDGTextureSRVDesc *pFVar6;
  FRDGTextureSRVDesc local_88;
  FRDGTextureSRVDesc local_70;
  FRDGTextureSRVDesc local_58;
  FRDGTextureSRVDesc local_40;
  FRDGTextureSRVDesc local_28;
  
  pFVar4 = FRDGSystemTextures::Get(param_1);
  if (param_2 == Texture2D) {
    local_28.Texture = pFVar4->Black;
    local_28._padding_._0_2_ = 0;
    local_28._padding_._3_1_ = 0;
    local_28._padding_._4_4_ = 0;
    local_28._padding_._0_1_ = 0;
    local_28._padding_._2_1_ = 0;
    local_28._padding_._2_1_ = ((local_28.Texture)->Desc).field_0x30;
    cVar1 = ((local_28.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_28._padding_._4_4_ = (uint)*(ushort *)&((local_28.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar6 = &local_28;
  }
  else if (param_2 == Texture2DArray) {
    local_40.Texture = pFVar4->BlackArray;
    local_40._padding_._0_2_ = 0;
    local_40._padding_._3_1_ = 0;
    local_40._padding_._4_4_ = 0;
    local_40._padding_._0_1_ = 0;
    local_40._padding_._2_1_ = 0;
    local_40._padding_._2_1_ = ((local_40.Texture)->Desc).field_0x30;
    cVar1 = ((local_40.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_40._padding_._4_4_ = (uint)*(ushort *)&((local_40.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar6 = &local_40;
  }
  else if (param_2 == Texture3D) {
    local_58.Texture = pFVar4->VolumetricBlack;
    local_58._padding_._0_2_ = 0;
    local_58._padding_._3_1_ = 0;
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_1_ = 0;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._2_1_ = ((local_58.Texture)->Desc).field_0x30;
    cVar1 = ((local_58.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_58._padding_._4_4_ = (uint)*(ushort *)&((local_58.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar6 = &local_58;
  }
  else if (param_2 == TextureCube) {
    local_70.Texture = pFVar4->CubeBlack;
    local_70._padding_._0_2_ = 0;
    local_70._padding_._3_1_ = 0;
    local_70._padding_._4_4_ = 0;
    local_70._padding_._0_1_ = 0;
    local_70._padding_._2_1_ = 0;
    local_70._padding_._2_1_ = ((local_70.Texture)->Desc).field_0x30;
    cVar1 = ((local_70.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_70._padding_._4_4_ = (uint)*(ushort *)&((local_70.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar6 = &local_70;
  }
  else {
    if (param_2 != TextureCubeArray) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatchInterface.cpp"
                         ,0x4a,L"");
      if (!bVar3) {
        return (FRDGTextureSRV *)0x0;
      }
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGTextureSRV *)(*pcVar2)();
      return pFVar5;
    }
    local_88.Texture = pFVar4->CubeArrayBlack;
    local_88._padding_._0_2_ = 0;
    local_88._padding_._3_1_ = 0;
    local_88._padding_._4_4_ = 0;
    local_88._padding_._0_1_ = 0;
    local_88._padding_._2_1_ = 0;
    local_88._padding_._2_1_ = ((local_88.Texture)->Desc).field_0x30;
    cVar1 = ((local_88.Texture)->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_88._padding_._4_4_ = (uint)*(ushort *)&((local_88.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar6 = &local_88;
  }
  pFVar5 = FRDGBuilder::CreateSRV(param_1,pFVar6);
  return pFVar5;
}

// GetEmptyBufferSRV @ 1492ee6f0

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

FRDGBufferSRV * __thiscall
FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
          (FNiagaraGpuComputeDispatchInterface *this,FRDGBuilder *param_1,EPixelFormat param_2)

{
  FRDGBuffer *pFVar1;
  FRDGBufferSRV *pFVar2;
  TIntVector4<unsigned_int>_u_0 local_18;
  
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  pFVar1 = FSystemTextures::GetDefaultBuffer
                     ((FSystemTextures *)&GSystemTextures,param_1,GPixelFormats[param_2].BlockBytes,
                      (TIntVector4<unsigned_int> *)&local_18._s_0);
  pFVar2 = FRDGBuilder::CreateSRV(param_1,pFVar1,param_2);
  return pFVar2;
}

// GetEmptyBufferUAV @ 1492ee750

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

FRDGBufferUAV * __thiscall
FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
          (FNiagaraGpuComputeDispatchInterface *this,FRDGBuilder *param_1,EPixelFormat param_2)

{
  FRDGBufferUAV *pFVar1;
  
  pFVar1 = FNiagaraEmptyUAVPool::GetEmptyRDGUAVFromPool((this->EmptyUAVPoolPtr).Ptr,param_1,param_2)
  ;
  return pFVar1;
}

// GetEmptyTextureUAV @ 1492ee760

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

FRDGTextureUAV * __thiscall
FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
          (FNiagaraGpuComputeDispatchInterface *this,FRDGBuilder *param_1,EPixelFormat param_2,
          ETextureDimension param_3)

{
  FRDGTextureUAV *pFVar1;
  
  pFVar1 = FNiagaraEmptyUAVPool::GetEmptyRDGUAVFromPool
                     ((this->EmptyUAVPoolPtr).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// GetOrCreateDataManager<FNiagaraGpuRibbonsDataManager> @ 14932ae60

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

FNiagaraGpuRibbonsDataManager * __thiscall
FNiagaraGpuComputeDispatchInterface::GetOrCreateDataManager<FNiagaraGpuRibbonsDataManager>
          (FNiagaraGpuComputeDispatchInterface *this)

{
  int *piVar1;
  FMutex *this_00;
  TArray<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FNiagaraGpuRibbonsDataManager *pFVar9;
  FName FVar10;
  longlong lVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 local_res8 [32];
  
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x4c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNiagaraGpuRibbonsDataManager *)(*pcVar5)();
    return pFVar9;
  }
  this_00 = &this->ComputeManagerGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNiagaraGpuRibbonsDataManager *)(*pcVar5)();
    return pFVar9;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'
                    ::__l2::ManagerName,"FNiagaraGpuRibbonsDataManager");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar6 = `public:_static_class_FName___cdecl_FNiagaraGpuRibbonsDataManager::GetManagerName(void)'::
          __l2::ManagerName;
  pTVar2 = &this->GpuDataManagers;
  iVar8 = (this->GpuDataManagers).ArrayNum;
  pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar13 + (longlong)iVar8 * 2;
  while( true ) {
    if ((this->GpuDataManagers).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar12) break;
    if (*pFVar13 == FVar6) {
      FVar10 = pFVar13[1];
LAB_14932b09f:
      if (this_00 != (FMutex *)0x0) {
        LOCK();
        aVar3 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
      return (FNiagaraGpuRibbonsDataManager *)FVar10;
    }
    pFVar13 = pFVar13 + 2;
  }
  FVar10 = (FName)::operator_new(0x100);
  if (FVar10 != (FName)0x0) {
    *(FNiagaraGpuComputeDispatchInterface **)((longlong)FVar10 + 8) = this;
    *(undefined ***)FVar10 = &___7FNiagaraGpuRibbonsDataManager__6B_;
    *(undefined8 *)((longlong)FVar10 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x30) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x38) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x40) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x50) = 0;
    *(undefined4 *)((longlong)FVar10 + 0x58) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x60) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x68) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x70) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x78) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x80) = 0;
    *(undefined4 *)((longlong)FVar10 + 0x88) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x90) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x98) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xa0) = 0;
    *(undefined4 *)((longlong)FVar10 + 0xa8) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xb0) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xb8) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xc0) = 0;
    *(undefined4 *)((longlong)FVar10 + 200) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xd0) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xd8) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xe0) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xe8) = 0;
    *(undefined8 *)((longlong)FVar10 + 0xf0) = 0;
    *(undefined1 *)((longlong)FVar10 + 0xf8) = 0;
    lVar11 = (**(code **)(this->_padding_ + 0xa0))(this);
    TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FNiagaraGpuRibbonsDataManager>
              ((TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                *)(lVar11 + 0x10),(FNiagaraGpuRibbonsDataManager *)(local_res8 + 8),
               (pmf_3044a2ea)FVar10);
    TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FNiagaraGpuRibbonsDataManager>
              ((TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                *)(lVar11 + 0x30),(FNiagaraGpuRibbonsDataManager *)(local_res8 + 0x10),
               (pmf_3044a2ea)FVar10);
  }
  iVar8 = (this->GpuDataManagers).ArrayNum;
  piVar1 = &(this->GpuDataManagers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GpuDataManagers).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar4 + (longlong)iVar8 * 0x10) = FVar6;
  *(FName *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = FVar10;
  goto LAB_14932b09f;
}

// GetGPUInstanceCounterManager @ 1493548c0

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

FNiagaraGPUInstanceCountManager * __thiscall
FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
          (FNiagaraGpuComputeDispatchInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraGPUInstanceCountManager *pFVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraGPUInstanceCountManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->GPUInstanceCounterManager;
}

// GetOrCreateDataManager<FNiagaraStatelessComputeManager> @ 1494752d0

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

FNiagaraStatelessComputeManager * __thiscall
FNiagaraGpuComputeDispatchInterface::GetOrCreateDataManager<FNiagaraStatelessComputeManager>
          (FNiagaraGpuComputeDispatchInterface *this)

{
  int *piVar1;
  FMutex *this_00;
  TArray<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FNiagaraStatelessComputeManager *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 local_res8 [8];
  
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x4c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNiagaraStatelessComputeManager *)(*pcVar5)();
    return pFVar9;
  }
  this_00 = &this->ComputeManagerGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FNiagaraStatelessComputeManager *)(*pcVar5)();
    return pFVar9;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'
                    ::__l2::ManagerName,"FNiagaraStatelessComputeManager");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar6 = `public:_static_class_FName___cdecl_FNiagaraStatelessComputeManager::GetManagerName(void)'
          ::__l2::ManagerName;
  pTVar2 = &this->GpuDataManagers;
  iVar8 = (this->GpuDataManagers).ArrayNum;
  pFVar12 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar8 * 2;
  while( true ) {
    if ((this->GpuDataManagers).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TTuple<FName,TUniquePtr<FNiagaraGpuComputeDataManager,TDefaultDelete<FNiagaraGpuComputeDataManager>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    if (*pFVar12 == FVar6) {
      FVar10 = pFVar12[1];
LAB_14947541f:
      if (this_00 != (FMutex *)0x0) {
        LOCK();
        aVar3 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
      return (FNiagaraStatelessComputeManager *)FVar10;
    }
    pFVar12 = pFVar12 + 2;
  }
  pFVar9 = ::operator_new(0xa0);
  if (pFVar9 == (FNiagaraStatelessComputeManager *)0x0) {
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    FVar10 = (FName)FNiagaraStatelessComputeManager::FNiagaraStatelessComputeManager(pFVar9,this);
  }
  iVar8 = (this->GpuDataManagers).ArrayNum;
  piVar1 = &(this->GpuDataManagers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->GpuDataManagers).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FName *)(pFVar4 + (longlong)iVar8 * 0x10) = FVar6;
  *(FName *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = FVar10;
  goto LAB_14947541f;
}

