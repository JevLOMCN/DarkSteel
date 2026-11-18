// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// GetInstanceCountBuffer @ 148e6caa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRWBuffer * __thiscall
FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(FNiagaraGPUInstanceCountManager *this)

{
  code *pcVar1;
  bool bVar2;
  FRWBuffer *pFVar3;
  
  if (this->UsedInstanceCounts <= this->AllocatedInstanceCounts) {
    return &this->CountBuffer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UsedInstanceCounts <= AllocatedInstanceCounts",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                     ,0x44,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRWBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return &this->CountBuffer;
}

// FNiagaraGPUInstanceCountManager @ 1492d0280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FNiagaraGPUInstanceCountManager * __thiscall
FNiagaraGPUInstanceCountManager::FNiagaraGPUInstanceCountManager
          (FNiagaraGPUInstanceCountManager *this,Type param_1)

{
  (this->AddDrawIndirectGuard).State = (atomic<unsigned_char>)0x0;
  this->RequiredCulledCounts = (atomic<int>)0x0;
  this->AllocatedCulledCounts = 0;
  (this->CountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CountBuffer).NumBytes = 0;
  (this->CountBuffer).ClassName.ComparisonIndex = 0;
  this->UsedInstanceCounts = 0;
  this->AllocatedInstanceCounts = 0;
  this->bAcquiredCulledCounts = false;
  this->CulledCountsRHIAccess = None;
  this->FeatureLevel = param_1;
  *(undefined8 *)&(this->CountBuffer).ClassName.Number = 0;
  (this->CountBuffer).OwnerName.Number = 0;
  (this->CulledCountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CulledCountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CulledCountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CulledCountBuffer).NumBytes = 0;
  (this->CulledCountBuffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CulledCountBuffer).ClassName.Number = 0;
  (this->CulledCountBuffer).OwnerName.Number = 0;
  (this->FreeEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeEntries).ArrayNum = 0;
  (this->FreeEntries).ArrayMax = 0;
  (this->MultiViewCountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->MultiViewCountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->MultiViewCountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->MultiViewCountBuffer).NumBytes = 0;
  (this->MultiViewCountBuffer).ClassName.ComparisonIndex = 0;
  this->CountReadback = (FRHIGPUMemoryReadback *)0x0;
  this->CountReadbackSize = 0;
  this->MultiViewAllocatedInstanceCounts = 0;
  *(undefined8 *)&(this->MultiViewCountBuffer).ClassName.Number = 0;
  (this->MultiViewCountBuffer).OwnerName.Number = 0;
  this->DrawIndirectArgGenTasks[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DrawIndirectArgGenTasks[0].ArrayNum = 0;
  this->DrawIndirectArgGenTasks[0].ArrayMax = 0;
  this->DrawIndirectArgGenTasks[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DrawIndirectArgGenTasks[1].ArrayNum = 0;
  this->DrawIndirectArgGenTasks[1].ArrayMax = 0;
  *(undefined8 *)&this->DrawIndirectArgMap = 0;
  *(undefined8 *)&(this->DrawIndirectArgMap).field_0x8 = 0;
  *(undefined8 *)&(this->DrawIndirectArgMap).field_0x20 = 0;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x28 = 0;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x34 = 0;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DrawIndirectArgMap).field_0x40 = 0;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x48 = 0;
  (this->InstanceCountClearTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCountClearTasks).ArrayNum = 0;
  (this->InstanceCountClearTasks).ArrayMax = 0;
  (this->InstanceCountInitTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCountInitTasks).ArrayNum = 0;
  (this->InstanceCountInitTasks).ArrayMax = 0;
  (this->DrawIndirectPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawIndirectPool).ArrayNum = 0;
  (this->DrawIndirectPool).ArrayMax = 0;
  this->DrawIndirectLowWaterFrames = 0;
  (this->AcquireEntryGuard).State = (atomic<unsigned_char>)0x0;
  return this;
}

// ~FNiagaraGPUInstanceCountManager @ 1492d3ef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::~FNiagaraGPUInstanceCountManager
          (FNiagaraGPUInstanceCountManager *this)

{
  int *piVar1;
  TArray<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 *puVar5;
  FRHIResource *pFVar6;
  void *pvVar7;
  TMap<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  ReleaseCounts(this);
  pTVar2 = &this->DrawIndirectPool;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->DrawIndirectPool).ArrayNum;
  pFVar3 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->DrawIndirectPool).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar3) break;
    puVar5 = *(undefined8 **)pFVar8;
    *(undefined4 *)(puVar5 + 3) = 0;
    pFVar6 = (FRHIResource *)*puVar5;
    if (pFVar6 != (FRHIResource *)0x0) {
      *puVar5 = 0;
      FRHIResource::Release(pFVar6);
    }
    pFVar6 = (FRHIResource *)puVar5[1];
    if (pFVar6 != (FRHIResource *)0x0) {
      puVar5[1] = 0;
      FRHIResource::Release(pFVar6);
    }
    pFVar6 = (FRHIResource *)puVar5[2];
    if (pFVar6 != (FRHIResource *)0x0) {
      puVar5[2] = 0;
      FRHIResource::Release(pFVar6);
    }
    pFVar8 = pFVar8 + 8;
  }
  DestructItems<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int>
            ((TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>
              *)(pTVar2->AllocatorInstance).Data,(this->DrawIndirectPool).ArrayNum);
  piVar1 = &(this->DrawIndirectPool).ArrayMax;
  (this->DrawIndirectPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int>
            ((TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>
              *)(pTVar2->AllocatorInstance).Data,(this->DrawIndirectPool).ArrayNum);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceCountInitTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceCountClearTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = &this->DrawIndirectArgMap;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->DrawIndirectArgMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  lVar9 = 2;
  do {
    pFVar3 = ((TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *)
             ((FRWBuffer *)(this_00 + -1) + 1))[1].AllocatorInstance.Data;
    this_00 = (TMap<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>_>
               *)((TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *)
                  ((FRWBuffer *)(this_00 + -1) + 1) + 1);
    lVar9 = lVar9 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar9 != 0);
  FRWBuffer::~FRWBuffer(&this->MultiViewCountBuffer);
  pFVar3 = (this->FreeEntries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRWBuffer::~FRWBuffer(&this->CulledCountBuffer);
  FRWBuffer::~FRWBuffer(&this->CountBuffer);
  return;
}

// AcquireCulledCountsBuffer @ 1492d9cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRWBuffer * __thiscall
FNiagaraGPUInstanceCountManager::AcquireCulledCountsBuffer
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRWBuffer *pFVar3;
  uint uVar4;
  TArrayView<FRHITransitionInfo_const_,int> local_e8;
  TIntVector4<unsigned_int>_u_0 local_d8;
  FRHITransitionInfo local_c8;
  FRHITransitionInfo local_98;
  FRHITransitionInfo local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_38;
  TArrayView<FRHITransitionInfo_const_,int> local_28;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRWBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((int)this->RequiredCulledCounts < 1) {
    return (FRWBuffer *)0x0;
  }
  if (this->bAcquiredCulledCounts != false) {
    local_68.AccessBefore = this->CulledCountsRHIAccess;
    if (local_68.AccessBefore != UAVCompute) {
      local_68.field1_0x8 = (FRHITransitionInfo_u_8)(this->CulledCountBuffer).UAV.Reference;
      local_e8.DataPtr = &local_68;
      local_e8.ArrayNum = 1;
      local_28.ArrayNum = 1;
      local_28._12_4_ = local_e8._12_4_;
      local_68._padding_._0_4_ = 0xffffffff;
      local_68._padding_._4_2_ = 0xffff;
      local_68.Type = UAV;
      local_68.AccessAfter = UAVCompute;
      local_68.Flags = None;
      local_68.CommitInfo.bIsSet = false;
      local_28.DataPtr = local_e8.DataPtr;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_28,None);
      this->CulledCountsRHIAccess = UAVCompute;
    }
    return &this->CulledCountBuffer;
  }
  uVar4 = (uint)((float)(int)this->RequiredCulledCounts * GNiagaraGPUCountBufferSlack);
  if ((int)uVar4 < GNiagaraMinCulledGPUInstanceCount) {
    uVar4 = GNiagaraMinCulledGPUInstanceCount;
  }
  if (this->AllocatedCulledCounts < (int)uVar4) {
    FRWBuffer::Release(&this->CulledCountBuffer);
    this->AllocatedCulledCounts = uVar4;
    FRWBuffer::Initialize
              (&this->CulledCountBuffer,(FRHICommandListBase *)param_1,
               L"NiagaraCulledGPUInstanceCounts",4,uVar4,PF_R32_UINT,UAVCompute,None,
               (FResourceArrayUploadInterface *)0x0);
  }
  else {
    if (this->CulledCountsRHIAccess == UAVCompute) goto LAB_1492d9e38;
    local_c8.field1_0x8 = (FRHITransitionInfo_u_8)(this->CulledCountBuffer).UAV.Reference;
    local_e8.ArrayNum = 1;
    local_e8.DataPtr = &local_c8;
    local_c8._padding_._0_4_ = 0xffffffff;
    local_c8._padding_._4_2_ = 0xffff;
    local_c8.Type = UAV;
    local_c8.AccessAfter = UAVCompute;
    local_c8.Flags = None;
    local_c8.CommitInfo.bIsSet = false;
    local_c8.AccessBefore = this->CulledCountsRHIAccess;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_e8,None);
  }
  this->CulledCountsRHIAccess = UAVCompute;
LAB_1492d9e38:
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  FRHIComputeCommandList::ClearUAVUint
            ((FRHIComputeCommandList *)param_1,(this->CulledCountBuffer).UAV.Reference,
             (TIntVector4<unsigned_int> *)&local_d8._s_0);
  local_98.field1_0x8 = (FRHITransitionInfo_u_8)(this->CulledCountBuffer).UAV.Reference;
  local_e8.DataPtr = &local_98;
  local_e8.ArrayNum = 1;
  local_38.ArrayNum = 1;
  local_38._12_4_ = local_e8._12_4_;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._4_2_ = 0xffff;
  local_98.Type = UAV;
  local_98.AccessBefore = UAVCompute;
  local_98.AccessAfter = UAVCompute;
  local_98.Flags = None;
  local_98.CommitInfo.bIsSet = false;
  local_38.DataPtr = local_e8.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_38,None);
  this->bAcquiredCulledCounts = true;
  return &this->CulledCountBuffer;
}

// AcquireEntry @ 1492d9f70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall FNiagaraGPUInstanceCountManager::AcquireEntry(FNiagaraGPUInstanceCountManager *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x97,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  this_00 = &this->AcquireEntryGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar2 = (this->FreeEntries).ArrayNum;
  if (iVar2 == 0) {
    uVar5 = this->UsedInstanceCounts;
    if ((int)uVar5 < this->AllocatedInstanceCounts) {
      this->UsedInstanceCounts = uVar5 + 1;
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  else {
    if ((iVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    iVar2 = (this->FreeEntries).ArrayNum;
    iVar6 = iVar2 + -1;
    uVar5 = *(uint *)((this->FreeEntries).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->FreeEntries).ArrayNum = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeEntries).AllocatorInstance,iVar6,&(this->FreeEntries).ArrayMax);
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return uVar5;
}

// AcquireOrAllocateEntry @ 1492da140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall
FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar1 = (this->FreeEntries).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    iVar1 = (this->FreeEntries).ArrayNum;
    iVar5 = iVar1 + -1;
    uVar4 = *(uint *)((this->FreeEntries).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
    (this->FreeEntries).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeEntries).AllocatorInstance,iVar5,&(this->FreeEntries).ArrayMax);
    return uVar4;
  }
  uVar4 = this->UsedInstanceCounts;
  if (this->AllocatedInstanceCounts <= (int)uVar4) {
    ResizeBuffers(this,param_1,
                  GNiagaraGPUCountManagerAllocateIncrement + this->AllocatedInstanceCounts);
    if (this->AllocatedInstanceCounts <= this->UsedInstanceCounts) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts < AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0xbb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar4 = this->UsedInstanceCounts;
  }
  this->UsedInstanceCounts = uVar4 + 1;
  return uVar4;
}

// AddDrawIndirect @ 1492da570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FIndirectArgSlot * __thiscall
FNiagaraGPUInstanceCountManager::AddDrawIndirect
          (FNiagaraGPUInstanceCountManager *this,FIndirectArgSlot *__return_storage_ptr__,
          FRHICommandListBase *param_1,uint param_2,uint param_3,uint param_4,bool param_5,
          bool param_6,Type param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FIndirectArgSlot *pFVar10;
  FRWBuffer *pFVar11;
  undefined1 *puVar12;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar13;
  uint uVar14;
  FRWBuffer *this_02;
  longlong lVar15;
  FMutex *pFVar16;
  FRWBuffer *pFVar17;
  TKeyInitializer<FNiagaraDrawIndirectArgGenTaskInfo_const_&> local_res8;
  FNiagaraDrawIndirectArgGenTaskInfo *local_res10;
  FRHICommandListBase *local_res18;
  FNiagaraDrawIndirectArgGenTaskInfo local_88;
  FResourceArrayUploadInterface local_70;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_68;
  int local_60 [2];
  undefined1 local_58;
  
  local_res18 = param_1;
  if ((this == (FNiagaraGPUInstanceCountManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FIndirectArgSlot *)(*pcVar4)();
    return pFVar10;
  }
  LOCK();
  bVar5 = (this->AddDrawIndirectGuard).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->AddDrawIndirectGuard).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->AddDrawIndirectGuard);
  }
  this_02 = (FRWBuffer *)0x0;
  local_88.IndirectArgsBufferOffset = 0xffffffff;
  uVar6 = 0;
  if (param_7 == Last) {
    uVar6 = 4;
  }
  local_88.NumIndicesPerInstance = param_3;
  local_88.StartIndexLocation = param_4;
  uVar14 = uVar6 | (uint)param_5 * 2 | (uint)param_6;
  local_88.InstanceCountBufferOffset = param_2;
  local_88.Flags = uVar14;
  uVar6 = ::GetTypeHash(&local_88);
  if (*(int *)&(this->DrawIndirectArgMap).field_0x8 !=
      *(int *)&(this->DrawIndirectArgMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->DrawIndirectArgMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->DrawIndirectArgMap).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->DrawIndirectArgMap).field_0x48 - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        lVar15 = *(longlong *)&this->DrawIndirectArgMap + (longlong)iVar8 * 0x24;
        if ((((*(uint *)(*(longlong *)&this->DrawIndirectArgMap + 4 + (longlong)iVar8 * 0x24) ==
               param_2) && (*(uint *)(lVar15 + 8) == param_3)) &&
            (*(uint *)(lVar15 + 0xc) == param_4)) && (*(uint *)(lVar15 + 0x10) == uVar14)) {
          if (iVar8 != -1) {
            pFVar11 = (FRWBuffer *)(lVar15 + 0x14);
            if (lVar15 == 0) {
              pFVar11 = this_02;
            }
            if (pFVar11 != (FRWBuffer *)0x0) goto LAB_1492da9da;
          }
          break;
        }
        iVar8 = *(int *)(lVar15 + 0x1c);
      } while (iVar8 != -1);
    }
  }
  iVar8 = (this->DrawIndirectPool).ArrayNum;
  if (iVar8 < 1) {
    pFVar17 = (FRWBuffer *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar6 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FIndirectArgSlot *)(*pcVar4)();
      return pFVar10;
    }
    pFVar17 = *(FRWBuffer **)
               ((this->DrawIndirectPool).AllocatorInstance.Data +
               (longlong)(this->DrawIndirectPool).ArrayNum * 8 + -8);
    if ((pFVar17 != (FRWBuffer *)0x0) &&
       (*(uint *)((longlong)&pFVar17[1].Buffer.Reference + 4) <
        *(uint *)&pFVar17[1].Buffer.Reference)) goto LAB_1492da89d;
  }
  pFVar11 = ::operator_new(0x40);
  if (pFVar11 != (FRWBuffer *)0x0) {
    *(undefined8 *)&(pFVar11->OwnerName).Number = 0;
    (pFVar11->Buffer).Reference = (FRHIBuffer *)0x0;
    (pFVar11->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    (pFVar11->SRV).Reference = (FRHIShaderResourceView *)0x0;
    pFVar11->NumBytes = 0;
    (pFVar11->ClassName).ComparisonIndex = 0;
    *(undefined8 *)&(pFVar11->ClassName).Number = 0;
    pFVar11[1].Buffer.Reference = (FRHIBuffer *)0x0;
    pFVar11[1].UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    this_02 = pFVar11;
  }
  iVar8 = GNiagaraIndirectArgsPoolMinSize;
  if (pFVar17 != (FRWBuffer *)0x0) {
    iVar8 = (int)(longlong)
                 ((float)*(uint *)&pFVar17[1].Buffer.Reference *
                 GNiagaraIndirectArgsPoolBlockSizeFactor);
  }
  *(int *)&this_02[1].Buffer.Reference = iVar8;
  local_68.Packed = 0;
  local_70 = (FResourceArrayUploadInterface)&___7__TResourceArray_I_0A___6B_;
  local_60[0] = 0;
  local_60[1] = 0;
  local_58 = 0;
  iVar8 = *(int *)&this_02[1].Buffer.Reference * 5;
  iVar7 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,iVar8,(ForAnyElementType *)&local_68.Frozen,local_60,local_60 + 1);
  TVar13 = local_68;
  if ((local_68.Packed & 1) != 0) {
    TVar13.UnfrozenPtr =
         (FScriptContainerElement *)((longlong)&local_68 + ((longlong)local_68.Packed >> 0x18));
  }
  memset(TVar13.UnfrozenPtr + (longlong)iVar7 * 4,0,(longlong)iVar8 << 2);
  FRWBuffer::Initialize
            (this_02,local_res18,L"NiagaraGPUDrawIndirectArgs",4,
             *(int *)&this_02[1].Buffer.Reference * 5,PF_R32_UINT,SRVMask|IndirectArgs,
             DrawIndirect|Static,&local_70);
  iVar8 = (this->DrawIndirectPool).ArrayNum;
  piVar1 = &(this->DrawIndirectPool).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DrawIndirectPool).AllocatorInstance,piVar1);
  }
  (this->DrawIndirectPool).ArrayNum = iVar8 + 1;
  *(FRWBuffer **)((this->DrawIndirectPool).AllocatorInstance.Data + (longlong)iVar8 * 8) = this_02;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_68.Frozen);
  local_70 = (FResourceArrayUploadInterface)&___7FResourceArrayUploadInterface__6B_;
  pFVar17 = this_02;
LAB_1492da89d:
  local_88.IndirectArgsBufferOffset = *(int *)((longlong)&pFVar17[1].Buffer.Reference + 4) * 5;
  local_res10 = &local_88;
  piVar1 = (int *)((longlong)&pFVar17[1].Buffer.Reference + 4);
  *piVar1 = *piVar1 + 1;
  TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FNiagaraDrawIndirectArgGenTaskInfo_const_&>_>
            ((TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
              *)&this->DrawIndirectArgMap,&local_res8,(bool *)&local_res10);
  pFVar11 = (FRWBuffer *)
            (*(longlong *)&this->DrawIndirectArgMap + ((longlong)(int)local_res8.Key * 9 + 5) * 4);
  *(int *)&(pFVar11->Buffer).Reference = (this->DrawIndirectPool).ArrayNum + -1;
  lVar15 = 0xd0;
  if (param_7 == Last) {
    lVar15 = 0xe0;
  }
  pFVar16 = &this->AddDrawIndirectGuard + lVar15;
  *(uint *)((longlong)&(pFVar11->Buffer).Reference + 4) = local_88.IndirectArgsBufferOffset * 4;
  if (((*(FNiagaraDrawIndirectArgGenTaskInfo **)&pFVar16->State <= &local_88) &&
      (&local_88 < *(FNiagaraDrawIndirectArgGenTaskInfo **)&pFVar16->State + *(int *)(pFVar16 + 0xc)
      )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FIndirectArgSlot *)(*pcVar4)();
    return pFVar10;
  }
  iVar8 = *(int *)(pFVar16 + 8);
  if (iVar8 == *(int *)(pFVar16 + 0xc)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
  }
  *(int *)(pFVar16 + 8) = iVar8 + 1;
  lVar15 = *(longlong *)&pFVar16->State;
  puVar2 = (undefined8 *)(lVar15 + (longlong)iVar8 * 0x14);
  *puVar2 = CONCAT44(local_88.InstanceCountBufferOffset,local_88.IndirectArgsBufferOffset);
  puVar2[1] = CONCAT44(local_88.StartIndexLocation,local_88.NumIndicesPerInstance);
  *(uint *)(lVar15 + (longlong)iVar8 * 0x14 + 0x10) = local_88.Flags;
  lVar15 = 0x38;
  if (param_7 == Last) {
    lVar15 = 0x3c;
  }
  piVar1 = (int *)((longlong)&(pFVar17->Buffer).Reference + lVar15);
  *piVar1 = *piVar1 + 1;
LAB_1492da9da:
  uVar6 = *(uint *)&(pFVar11->Buffer).Reference;
  uVar14 = *(uint *)((longlong)&(pFVar11->Buffer).Reference + 4);
  uVar9 = 0;
  if ((int)uVar6 < (this->DrawIndirectPool).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FIndirectArgSlot *)(*pcVar4)();
    return pFVar10;
  }
  this_00 = *(FRHIShaderResourceView **)
             (*(longlong *)
               ((this->DrawIndirectPool).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) + 0x10);
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  uVar6 = *(uint *)&(pFVar11->Buffer).Reference;
  uVar9 = 0;
  if ((int)uVar6 < (this->DrawIndirectPool).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FIndirectArgSlot *)(*pcVar4)();
    return pFVar10;
  }
  this_01 = (FRHIBuffer *)
            **(undefined8 **)
              ((this->DrawIndirectPool).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  if (this_01 == (FRHIBuffer *)0x0) {
    (__return_storage_ptr__->Buffer).Reference = (FRHIBuffer *)0x0;
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_01);
    (__return_storage_ptr__->Buffer).Reference = this_01;
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  (__return_storage_ptr__->SRV).Reference = this_00;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  __return_storage_ptr__->Offset = uVar14;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (this != (FNiagaraGPUInstanceCountManager *)0x0) {
    LOCK();
    aVar3 = (this->AddDrawIndirectGuard).State;
    (this->AddDrawIndirectGuard).State =
         (atomic<unsigned_char>)((char)(this->AddDrawIndirectGuard).State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->AddDrawIndirectGuard);
    }
  }
  return __return_storage_ptr__;
}

// AddInstanceCountInitTask @ 1492dac90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::AddInstanceCountInitTask
          (FNiagaraGPUInstanceCountManager *this,uint param_1,uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  
  pTVar1 = &this->InstanceCountInitTasks;
  iVar2 = (this->InstanceCountInitTasks).ArrayNum;
  if (iVar2 == (this->InstanceCountInitTasks).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->InstanceCountInitTasks).ArrayMax);
  }
  (this->InstanceCountInitTasks).ArrayNum = iVar2 + 1;
  *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 4) = param_1;
  iVar2 = (this->InstanceCountInitTasks).ArrayNum;
  if (iVar2 == (this->InstanceCountInitTasks).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->InstanceCountInitTasks).ArrayMax);
  }
  (this->InstanceCountInitTasks).ArrayNum = iVar2 + 1;
  *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 4) = param_2;
  return;
}

// CopyToMultiViewCountBuffer @ 1492de520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::CopyToMultiViewCountBuffer
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListImmediate *param_1)

{
  FRHIGPUMask FVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int local_res8 [2];
  FRHIUnorderedAccessView *local_res18;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  FRHITransitionInfo local_78;
  FRHITransitionInfo local_48;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                       ,0x29c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < this->AllocatedInstanceCounts) {
    FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    uVar2 = this->AllocatedInstanceCounts;
    if (this->MultiViewAllocatedInstanceCounts == uVar2) {
      local_78.field1_0x8 = (FRHITransitionInfo_u_8)(this->MultiViewCountBuffer).UAV.Reference;
      local_98.ArrayNum = 1;
      local_98.DataPtr = &local_78;
      local_78._padding_._0_4_ = 0xffffffff;
      local_78._padding_._4_2_ = 0xffff;
      local_78.Type = UAV;
      local_78.AccessBefore = CopySrc|SRVMask;
      local_78.AccessAfter = UAVCompute;
      local_78.Flags = None;
      local_78.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
    }
    else {
      this->MultiViewAllocatedInstanceCounts = uVar2;
      FRWBuffer::Initialize
                (&this->MultiViewCountBuffer,(FRHICommandListBase *)param_1,
                 L"NiagaraGPUInstanceCounts",4,uVar2,PF_R32_UINT,UAVCompute,SourceCopy|Static,
                 (FResourceArrayUploadInterface *)0x0);
    }
    local_res18 = (this->MultiViewCountBuffer).UAV.Reference;
    local_res8[0] = this->MultiViewAllocatedInstanceCounts;
    CopyUIntBufferToTargets
              ((FRHICommandList *)param_1,this->FeatureLevel,(this->CountBuffer).SRV.Reference,
               &local_res18,local_res8,0,1);
    local_48.field1_0x8 = (FRHITransitionInfo_u_8)(this->MultiViewCountBuffer).UAV.Reference;
    local_98.DataPtr = &local_48;
    local_98.ArrayNum = 1;
    local_88.ArrayNum = 1;
    local_88._12_4_ = local_98._12_4_;
    local_48._padding_._0_4_ = 0xffffffff;
    local_48._padding_._4_2_ = 0xffff;
    local_48.Type = UAV;
    local_48.AccessBefore = UAVCompute;
    local_48.AccessAfter = CopySrc|SRVMask;
    local_48.Flags = None;
    local_48.CommitInfo.bIsSet = false;
    local_88.DataPtr = local_98.DataPtr;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
  }
  return;
}

// EnqueueGPUReadback @ 1492e3000

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::EnqueueGPUReadback
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListImmediate *param_1)

{
  FRHIBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIGPUBufferReadback *pFVar4;
  FName *pFVar5;
  FName local_res8;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                       ,0x286,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((0 < this->UsedInstanceCounts) && (this->UsedInstanceCounts != (this->FreeEntries).ArrayNum))
  {
    pFVar4 = (FRHIGPUBufferReadback *)this->CountReadback;
    if (pFVar4 == (FRHIGPUBufferReadback *)0x0) {
      pFVar4 = ::operator_new(0x58);
      if (pFVar4 == (FRHIGPUBufferReadback *)0x0) {
        pFVar4 = (FRHIGPUBufferReadback *)0x0;
      }
      else {
        pFVar5 = ::FName::FName(&local_res8,L"Niagara GPU Instance Count Readback");
        pFVar4 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar4,*pFVar5);
      }
      this->CountReadback = (FRHIGPUMemoryReadback *)pFVar4;
    }
    pFVar1 = (this->CountBuffer).Buffer.Reference;
    this->CountReadbackSize = this->UsedInstanceCounts;
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,param_1,pFVar1,0);
  }
  return;
}

// FlushIndirectArgsPool @ 1492eb600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::FlushIndirectArgsPool
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FRHIResource *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar9;
  uint uVar10;
  FResourceArrayUploadInterface local_38;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_30;
  int local_28 [2];
  undefined1 local_20;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x141,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)&(this->DrawIndirectArgMap).field_0x8 !=
       *(int *)&(this->DrawIndirectArgMap).field_0x34) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DrawIndirectArgMap.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x142,
                         L"DrawIndirectArgMap is not empty in FlushIndirectArgsPool.  This means that OnPostRenderOpaque was not called on the GPU sort manager."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->DrawIndirectPool).ArrayNum;
  while( true ) {
    if (iVar7 < 2) {
      if (((GNiagaraIndirectArgsPoolAllowShrinking != 0) && (0 < iVar7)) &&
         ((uint)GNiagaraIndirectArgsPoolLowWaterFrames <= this->DrawIndirectLowWaterFrames)) {
        pFVar4 = (this->DrawIndirectPool).AllocatorInstance.Data;
        puVar2 = *(undefined8 **)pFVar4;
        uVar10 = (int)ROUND((float)*(uint *)(puVar2 + 6) *
                            (__real_3f800000 / GNiagaraIndirectArgsPoolBlockSizeFactor +
                            __real_3f800000 / GNiagaraIndirectArgsPoolBlockSizeFactor) -
                            __real_3f000000) >> 1;
        if (uVar10 < (uint)GNiagaraIndirectArgsPoolMinSize) {
          uVar10 = GNiagaraIndirectArgsPoolMinSize;
        }
        *(undefined4 *)(puVar2 + 3) = 0;
        pFVar3 = (FRHIResource *)*puVar2;
        if (pFVar3 != (FRHIResource *)0x0) {
          *puVar2 = 0;
          FRHIResource::Release(pFVar3);
        }
        pFVar3 = (FRHIResource *)puVar2[1];
        if (pFVar3 != (FRHIResource *)0x0) {
          puVar2[1] = 0;
          FRHIResource::Release(pFVar3);
        }
        pFVar3 = (FRHIResource *)puVar2[2];
        if (pFVar3 != (FRHIResource *)0x0) {
          puVar2[2] = 0;
          FRHIResource::Release(pFVar3);
        }
        *(uint *)(*(longlong *)pFVar4 + 0x30) = uVar10;
        local_38 = (FResourceArrayUploadInterface)&___7__TResourceArray_I_0A___6B_;
        local_30.Packed = 0;
        local_28[0] = 0;
        local_28[1] = 0;
        local_20 = 0;
        iVar7 = *(int *)(*(longlong *)pFVar4 + 0x30) * 5;
        iVar8 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (4,4,iVar7,(ForAnyElementType *)&local_30.Frozen,local_28,local_28 + 1);
        TVar9 = local_30;
        if ((local_30.Packed & 1) != 0) {
          TVar9.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_30 + ((longlong)local_30.Packed >> 0x18));
        }
        memset(TVar9.UnfrozenPtr + (longlong)iVar8 * 4,0,(longlong)iVar7 << 2);
        FRWBuffer::Initialize
                  (*(FRWBuffer **)pFVar4,param_1,L"NiagaraGPUDrawIndirectArgs",4,
                   *(int *)&(*(FRWBuffer **)pFVar4)[1].Buffer.Reference * 5,PF_R32_UINT,
                   SRVMask|IndirectArgs,DrawIndirect|Static,&local_38);
        this->DrawIndirectLowWaterFrames = 0;
        FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                  ((FMemoryImageAllocatorBase *)&local_30.Frozen);
      }
      return;
    }
    if (((this->DrawIndirectPool).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    puVar2 = *(undefined8 **)(this->DrawIndirectPool).AllocatorInstance.Data;
    *(undefined4 *)(puVar2 + 3) = 0;
    pFVar3 = (FRHIResource *)*puVar2;
    if (pFVar3 != (FRHIResource *)0x0) {
      *puVar2 = 0;
      FRHIResource::Release(pFVar3);
    }
    pFVar3 = (FRHIResource *)puVar2[1];
    if (pFVar3 != (FRHIResource *)0x0) {
      puVar2[1] = 0;
      FRHIResource::Release(pFVar3);
    }
    pFVar3 = (FRHIResource *)puVar2[2];
    if (pFVar3 != (FRHIResource *)0x0) {
      puVar2[2] = 0;
      FRHIResource::Release(pFVar3);
    }
    if (((this->DrawIndirectPool).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->DrawIndirectPool).AllocatorInstance.Data;
    puVar2 = *(undefined8 **)pFVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 3) = 0;
      pFVar3 = (FRHIResource *)*puVar2;
      if (pFVar3 != (FRHIResource *)0x0) {
        *puVar2 = 0;
        FRHIResource::Release(pFVar3);
      }
      pFVar3 = (FRHIResource *)puVar2[1];
      if (pFVar3 != (FRHIResource *)0x0) {
        puVar2[1] = 0;
        FRHIResource::Release(pFVar3);
      }
      pFVar3 = (FRHIResource *)puVar2[2];
      if (pFVar3 != (FRHIResource *)0x0) {
        puVar2[2] = 0;
        FRHIResource::Release(pFVar3);
      }
      if ((FRHIResource *)puVar2[2] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar2[2]);
      }
      if ((FRHIResource *)puVar2[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar2[1]);
      }
      if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar2);
      }
      ::operator_delete(puVar2,0x40);
    }
    iVar7 = (this->DrawIndirectPool).ArrayNum + -1;
    if (iVar7 != 0) {
      memmove(pFVar4,pFVar4 + 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->DrawIndirectPool).ArrayNum;
    *piVar1 = *piVar1 + -1;
    iVar7 = (this->DrawIndirectPool).ArrayNum;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// FreeEntry @ 1492ebd50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::FreeEntry(FNiagaraGPUInstanceCountManager *this,uint *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0xc1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*param_1 != 0xffffffff) {
    pFVar6 = (this->FreeEntries).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)(this->FreeEntries).ArrayNum * 4;
    for (; pFVar6 != pFVar2; pFVar6 = pFVar6 + 4) {
      if (*(uint *)pFVar6 == *param_1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FreeEntries.Contains(BufferOffset)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                           ,0xc5,L"BufferOffset %u exists in FreeEntries");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
    pTVar7 = &this->InstanceCountClearTasks;
    pFVar6 = (pTVar7->AllocatorInstance).Data;
    pFVar2 = pFVar6 + (longlong)(this->InstanceCountClearTasks).ArrayNum * 4;
    if (pFVar6 != pFVar2) {
      do {
        if (*(uint *)pFVar6 == *param_1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InstanceCountClearTasks.Contains(BufferOffset)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                             ,0xc6,L"BufferOffset %u exists in InstanceCountClearTasks");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        pFVar6 = pFVar6 + 4;
      } while (pFVar6 != pFVar2);
    }
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) &&
        (param_1 < pFVar2 + (longlong)(this->InstanceCountClearTasks).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->InstanceCountClearTasks).ArrayNum;
    piVar1 = &(this->InstanceCountClearTasks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar7->AllocatorInstance,piVar1);
    }
    (this->InstanceCountClearTasks).ArrayNum = iVar5 + 1;
    *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 4) = *param_1;
    *param_1 = 0xffffffff;
  }
  return;
}

// FreeEntryArray @ 1492ebee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::FreeEntryArray
          (FNiagaraGPUInstanceCountManager *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0xcf,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (0 < iVar3) {
    pTVar1 = &this->InstanceCountClearTasks;
    puVar10 = param_1->DataPtr;
    puVar5 = puVar10 + iVar3;
    for (; puVar10 != puVar5; puVar10 = puVar10 + 1) {
      pFVar9 = (this->FreeEntries).AllocatorInstance.Data;
      uVar4 = *puVar10;
      pFVar2 = pFVar9 + (longlong)(this->FreeEntries).ArrayNum * 4;
      for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 4) {
        if (*(uint *)pFVar9 == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FreeEntries.Contains(BufferOffset)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                             ,0xd7,L"BufferOffset %u exists in FreeEntries");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          break;
        }
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      pFVar2 = pFVar9 + (longlong)(this->InstanceCountClearTasks).ArrayNum * 4;
      for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 4) {
        if (*(uint *)pFVar9 == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InstanceCountClearTasks.Contains(BufferOffset)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                             ,0xd8,L"BufferOffset %u exists in InstanceCountClearTasks");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          break;
        }
      }
    }
    puVar5 = param_1->DataPtr;
    if ((puVar5 == (uint *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar3,&pTVar1->AllocatorInstance,
                       &(this->InstanceCountClearTasks).ArrayNum,
                       &(this->InstanceCountClearTasks).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4,puVar5,(longlong)iVar3 * 4);
  }
  return;
}

// GetGPUReadback @ 1492efab0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint * __thiscall
FNiagaraGPUInstanceCountManager::GetGPUReadback(FNiagaraGPUInstanceCountManager *this)

{
  int *piVar1;
  FRHIGPUMemoryReadback *pFVar2;
  FRHIGPUFence *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint *puVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x26e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    puVar9 = (uint *)(*pcVar4)();
    return puVar9;
  }
  pFVar2 = this->CountReadback;
  if (pFVar2 == (FRHIGPUMemoryReadback *)0x0) {
    return (uint *)0x0;
  }
  if (this->CountReadbackSize == 0) {
    return (uint *)0x0;
  }
  pFVar3 = (pFVar2->Fence).Reference;
  if (pFVar3 != (FRHIGPUFence *)0x0) {
    if ((pFVar3->NumPendingWriteCommands).Counter != 0) {
      return (uint *)0x0;
    }
    cVar8 = (**(code **)(((pFVar2->Fence).Reference)->_padding_ + 0x20))();
    if (cVar8 == '\0') {
      return (uint *)0x0;
    }
  }
  FVar15.Bits = 0;
  FVar11 = StatPtr_STAT_NiagaraGPUReadbackLock;
  if (StatPtr_STAT_NiagaraGPUReadbackLock ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock>)0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_NiagaraGPUReadbackLock");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUReadbackLock,*pFVar10,
                        L"GPU Readback Lock","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar13.Bits;
        local_res14 = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                   ,0x272);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      FVar15.Bits = FVar13.Bits;
      goto LAB_1492efc96;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1492efc96:
  puVar9 = (uint *)(**(code **)(this->CountReadback->_padding_ + 0x18))
                             (this->CountReadback,this->CountReadbackSize << 2);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar15.Bits;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return puVar9;
}

// HasPendingGPUReadback @ 1492f3050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
FNiagaraGPUInstanceCountManager::HasPendingGPUReadback(FNiagaraGPUInstanceCountManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                       ,0x296,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((this->CountReadback != (FRHIGPUMemoryReadback *)0x0) && (this->CountReadbackSize != 0)) {
    return true;
  }
  return false;
}

// InitRHI @ 1492f8040

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::InitRHI
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListBase *param_1)

{
  return;
}

// ProcessInitInstanceCountTasks @ 1492ff680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::ProcessInitInstanceCountTasks
          (FNiagaraGPUInstanceCountManager *this,FNiagaraGpuComputeDispatchInterface *param_1,
          FRHICommandList *param_2)

{
  FRHITransitionInfo_u_8 FVar1;
  code *pcVar2;
  FShader *pFVar3;
  FNiagaraGPUInstanceCountManager *pFVar4;
  EBufferUsageFlags EVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  TRefCountPtr<FRHIShaderResourceView> TVar13;
  void *_Dst;
  FRHIUnorderedAccessView *this_00;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar14;
  FName this_02;
  FShaderParametersMetadata *pFVar15;
  FRHIComputeShader *pFVar16;
  FRHIBatchedShaderUnbinds *pFVar17;
  longlong lVar18;
  ForElementType<FRHITransitionInfo> FVar19;
  FRHIUnorderedAccessView *this_03;
  FRHIBuffer *this_04;
  FRHIResource *this_05;
  undefined1 auStackY_428 [32];
  TIntVector3<int>_u_0 local_3e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d8;
  uint local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  int iStack_3bc;
  wchar_t *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 local_390 [16];
  FNiagaraGPUInstanceCountManager *local_380;
  FNiagaraEmptyUAVPoolScopedAccess local_378;
  undefined8 local_370;
  FName FStack_368;
  TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable> local_360;
  undefined1 local_350 [24];
  ForElementType<FRHITransitionInfo> local_338;
  int iStack_330;
  undefined4 uStack_32c;
  ForElementType<FRHITransitionInfo> local_328;
  EBufferUsageFlags EStack_320;
  FRHIGPUMask FStack_31c;
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong local_308;
  wchar_t *pwStack_300;
  FRHIBreadcrumbScope local_2f8;
  char local_2e8;
  FRHIResource *local_2d8;
  FRHIUnorderedAccessView *local_2d0;
  int local_2c8;
  undefined1 local_2b8 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_2a8;
  FString local_298;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_288;
  TArrayView<FRHITransitionInfo_const_,int> local_278;
  ulonglong local_268;
  undefined8 uStack_260;
  wchar_t *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 local_230 [16];
  uchar local_220;
  uchar local_21c [20];
  uchar local_208;
  ForElementType<FRHITransitionInfo> local_50;
  EBufferUsageFlags local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if (((longlong)(this->InstanceCountInitTasks).ArrayNum & 0x3fffffffffffffffU) == 0) {
    return;
  }
  local_380 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_310 = 0x2bd;
    local_318 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
    ;
    local_308 = 0;
    pwStack_300 = L"NiagaraProcessInitInstanceCountTasks";
    ::Desc._padding_._0_4_ = 0x51ddd340;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x2bd;
    ::Desc._padding_._4_4_ = uStack_30c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51ddd800;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraGPUInstanceCountManager::ProcessInitInstanceCountTasks'::__l10::<lambda_1>::
           operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
  pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
  pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar11->Allocator = pFVar10;
  pFVar11->TraceCpuSpecId = 0;
  pFVar11->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar11->ID = uVar7;
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar11[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar8 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar8;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_2f8,(FRHIComputeCommandList *)param_2,pFVar11);
  iVar9 = (this->InstanceCountInitTasks).ArrayNum;
  uStack_39c = 0;
  uStack_398 = 0;
  uStack_3c4 = 0;
  uStack_3c0 = 0x4104;
  uVar7 = iVar9 * 4;
  iVar9 = iVar9 / 2;
  local_350._0_8_ = (FRHIBuffer *)0x0;
  local_350._8_8_ = (FRHIResource *)0x0;
  iStack_3bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_3b8 = L"NiagaraInitCountsTaskInfosBuffer";
  local_268 = (ulonglong)uVar7;
  uStack_260 = CONCAT44(iStack_3bc,0x4104);
  uStack_3b0 = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  local_3a8 = 0x70;
  local_248 = 0x70;
  uStack_240 = 0;
  uStack_394 = 0;
  local_258 = L"NiagaraInitCountsTaskInfosBuffer";
  uStack_250 = 0;
  local_2e8 = '\x01';
  local_238 = 0;
  local_3c8 = uVar7;
  TVar12 = FRHICommandListBase::CreateBuffer
                     ((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)local_390);
  this_04 = (FRHIBuffer *)local_350._0_8_;
  if ((FRHIBuffer *)local_350 != TVar12.Reference) {
    this_04 = (FRHIBuffer *)(TVar12.Reference)->_padding_;
    (TVar12.Reference)->_padding_ = 0;
  }
  if ((FRHIResource *)local_390._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_390._0_8_);
  }
  FStack_368.ComparisonIndex.Value = 0;
  FStack_368.Number = 0;
  local_370._0_4_ = BVHRead|RTV|UAVMask;
  local_370._4_4_ = Default;
  TVar13 = FRHICommandListBase::CreateShaderResourceView
                     ((FRHICommandListBase *)param_2,(FRHIBuffer *)(local_390 + 8),
                      (FInitializer *)this_04);
  this_05 = (FRHIResource *)local_350._8_8_;
  if ((FRHIShaderResourceView *)(local_350 + 8) != TVar13.Reference) {
    this_05 = *(FRHIResource **)TVar13.Reference;
    *(undefined8 *)TVar13.Reference = 0;
  }
  if ((FRHIResource *)local_390._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_390._8_8_);
  }
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_2,this_04,0,uVar7,RLM_WriteOnly);
  memcpy(_Dst,(this->InstanceCountInitTasks).AllocatorInstance.Data,(ulonglong)uVar7);
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_2,this_04);
  FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
            (&local_378,(param_1->EmptyUAVPoolPtr).Ptr);
  this_03 = (this->CountBuffer).UAV.Reference;
  local_50 = (ForElementType<FRHITransitionInfo>)0x0;
  local_48 = 0;
  local_44 = 10;
  if (this_03 == (FRHIUnorderedAccessView *)0x0) {
    this_00 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                        ((param_1->EmptyUAVPoolPtr).Ptr,param_2,PF_R32_UINT,Buffer);
    this_03 = (FRHIUnorderedAccessView *)0x0;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      this_03 = this_00;
    }
  }
  else {
    local_230[4] = 0xff;
    local_230[5] = 0xff;
    local_48 = 1;
    local_230[0] = 0xff;
    local_230[1] = 0xff;
    local_230[2] = 0xff;
    local_230[3] = 0xff;
    local_220 = '\x03';
    local_21c[0] = '\0';
    local_21c[1] = '\0';
    local_21c[2] = '\0';
    local_21c[3] = '\0';
    local_21c[4] = '\0';
    local_21c[5] = '\x04';
    local_21c[6] = '\0';
    local_21c[7] = '\0';
    local_21c[8] = '\0';
    local_208 = '\0';
    local_230._8_8_ = this_03;
    FRHIResource::AddRef((FRHIResource *)this_03);
  }
  EVar5 = local_48;
  local_338 = (ForElementType<FRHITransitionInfo>)local_230;
  if (local_50 != (ForElementType<FRHITransitionInfo>)0x0) {
    local_338 = local_50;
  }
  if (((int)local_48 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_330 = EVar5;
  local_2a8._8_8_ = CONCAT44(uStack_32c,EVar5);
  local_2a8.DataPtr = (FRHITransitionInfo *)local_338;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_2a8,None);
  local_2d8 = this_05;
  local_2d0 = this_03;
  local_2c8 = iVar9;
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel]);
  pFVar14 = (FShaderType *)FNiagaraInstanceCountsInitCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_3d8,pFVar14,0);
  if ((FName)local_3d8.ShaderContent == (FName)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2b8);
    ::FName::ToString((FName *)this_02,&local_298);
    FNiagaraInstanceCountsInitCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraInstanceCountsInitCS::GetStaticType();
  pFVar3 = local_3d8.ShaderContent;
  local_360.ShaderContent = (FNiagaraInstanceCountsInitCS *)local_3d8.ShaderContent;
  local_360.ShaderMap = local_3d8.ShaderMap;
  iVar9 = iVar9 + 0x3f;
  uVar7 = (int)((iVar9 >> 0x1f & 0x3fU) + iVar9) >> 6;
  pFVar15 = FNiagaraInstanceCountsInitCS::FParameters::FTypeInfo::GetStructMetadata();
  local_3e8._s_0.Y = 1;
  local_3e8._s_0.Z = 1;
  local_3e8._s_0.X = uVar7;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_3e8._s_0);
  pFVar16 = TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_360);
  SetComputePipelineState((FRHIComputeCommandList *)param_2,pFVar16);
  local_288.ShaderContent = local_3d8.ShaderContent;
  local_288.ShaderMap = local_3d8.ShaderMap;
  ValidateShaderParameters(&local_288,pFVar15,&local_2d8);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_2,pFVar16,&pFVar3->Bindings,pFVar15,&local_2d8);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_2,uVar7,1,1);
  pFVar16 = TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_360);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar17 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    if ((*(ushort *)((longlong)pFVar3 + 0x54) != 0xffff) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnsetShaderUAVs(pFVar17,&pFVar3->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_2,pFVar16,pFVar17);
  }
  if (local_44 < 0) {
    local_48 = 0;
    if (local_44 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,0,(ForElementType<FRHITransitionInfo> *)local_230,0,&local_44);
      goto LAB_1492ffc99;
    }
  }
  else {
    local_48 = 0;
LAB_1492ffc99:
    if (local_48 != local_44) goto LAB_1492ffcb5;
  }
  local_48 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                       (0x830,(ForElementType<FRHITransitionInfo> *)local_230,&local_44);
LAB_1492ffcb5:
  pFVar4 = local_380;
  lVar18 = (longlong)(int)local_48;
  FVar19 = (ForElementType<FRHITransitionInfo>)local_230;
  if (local_50 != (ForElementType<FRHITransitionInfo>)0x0) {
    FVar19 = local_50;
  }
  FVar1 = (FRHITransitionInfo_u_8)(local_380->CountBuffer).UAV.Reference;
  local_48 = local_48 + Static;
  *(undefined4 *)&((FRHITransitionInfo *)((longlong)FVar19 + lVar18 * 0x30))->_padding_ = 0xffffffff
  ;
  *(undefined2 *)((undefined1 *)((longlong)FVar19 + 4) + lVar18 * 0x30) = 0xffff;
  ((FRHITransitionInfo_u_8 *)((longlong)FVar19 + 8))[lVar18 * 6] = FVar1;
  ((EType *)((longlong)FVar19 + 0x10))[lVar18 * 0x30] = UAV;
  ((ERHIAccess *)((longlong)FVar19 + 0x14))[lVar18 * 0xc] = UAVCompute;
  ((ERHIAccess *)((longlong)FVar19 + 0x18))[lVar18 * 0xc] = CopySrc|SRVMask;
  ((EResourceTransitionFlags *)((longlong)FVar19 + 0x1c))[lVar18 * 0x30] = None;
  ((bool *)((longlong)FVar19 + 0x28))[lVar18 * 0x30] = false;
  EStack_320 = local_48;
  local_328 = (ForElementType<FRHITransitionInfo>)local_230;
  if (local_50 != (ForElementType<FRHITransitionInfo>)0x0) {
    local_328 = local_50;
  }
  if (((int)local_48 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_278._12_4_ = FStack_31c.GPUMask;
  local_278.ArrayNum = EStack_320;
  local_278.DataPtr = (FRHITransitionInfo *)local_328;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_278,None);
  (pFVar4->InstanceCountInitTasks).ArrayNum = 0;
  if ((pFVar4->InstanceCountInitTasks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(pFVar4->InstanceCountInitTasks).AllocatorInstance,0,
               &(pFVar4->InstanceCountInitTasks).ArrayMax);
  }
  if (this_03 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  if (local_50 != (ForElementType<FRHITransitionInfo>)0x0) {
    FMemory::Free((void *)local_50);
  }
  FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess(&local_378);
  if (this_05 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_05);
  }
  if (this_04 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04);
  }
  if (local_2e8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2f8);
  }
  return;
}

// ReleaseCounts @ 149302fe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::ReleaseCounts(FNiagaraGPUInstanceCountManager *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRHIGPUMemoryReadback *pFVar4;
  
  (this->CountBuffer).NumBytes = 0;
  pFVar1 = (this->CountBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->CountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->CountBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->CountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CountBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->CountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->CulledCountBuffer).NumBytes = 0;
  pFVar1 = (this->CulledCountBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->CulledCountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->CulledCountBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->CulledCountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CulledCountBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->CulledCountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->MultiViewCountBuffer).NumBytes = 0;
  pFVar1 = (this->MultiViewCountBuffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->MultiViewCountBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->MultiViewCountBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->MultiViewCountBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->MultiViewCountBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MultiViewCountBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = this->CountReadback;
  this->AllocatedInstanceCounts = 0;
  this->AllocatedCulledCounts = 0;
  if (pFVar4 != (FRHIGPUMemoryReadback *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
    this->CountReadback = (FRHIGPUMemoryReadback *)0x0;
    this->CountReadbackSize = 0;
  }
  return;
}

// ReleaseGPUReadback @ 1493030f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::ReleaseGPUReadback(FNiagaraGPUInstanceCountManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x27d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->CountReadback == (FRHIGPUMemoryReadback *)0x0) || (this->CountReadbackSize == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CountReadback && CountReadbackSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x27e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->CountReadback->_padding_ + 0x20))();
  this->CountReadbackSize = 0;
  return;
}

// ReleaseRHI @ 149303290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FNiagaraGPUInstanceCountManager::ReleaseRHI(FNiagaraGPUInstanceCountManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FRHIResource *pFVar5;
  TArray<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  ReleaseCounts(this);
  pTVar6 = &this->DrawIndirectPool;
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  iVar3 = (this->DrawIndirectPool).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->DrawIndirectPool).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    puVar4 = *(undefined8 **)pFVar7;
    *(undefined4 *)(puVar4 + 3) = 0;
    pFVar5 = (FRHIResource *)*puVar4;
    if (pFVar5 != (FRHIResource *)0x0) {
      *puVar4 = 0;
      FRHIResource::Release(pFVar5);
    }
    pFVar5 = (FRHIResource *)puVar4[1];
    if (pFVar5 != (FRHIResource *)0x0) {
      puVar4[1] = 0;
      FRHIResource::Release(pFVar5);
    }
    pFVar5 = (FRHIResource *)puVar4[2];
    if (pFVar5 != (FRHIResource *)0x0) {
      puVar4[2] = 0;
      FRHIResource::Release(pFVar5);
    }
    pFVar7 = pFVar7 + 8;
  }
  DestructItems<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int>
            ((TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>
              *)(pTVar6->AllocatorInstance).Data,(this->DrawIndirectPool).ArrayNum);
  piVar1 = &(this->DrawIndirectPool).ArrayMax;
  (this->DrawIndirectPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,piVar1);
  }
  return;
}

// ResizeBuffers @ 149304730

/* WARNING: Removing unreachable block (ram,0x000149304a88) */
/* WARNING: Removing unreachable block (ram,0x000149304a95) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::ResizeBuffers
          (FNiagaraGPUInstanceCountManager *this,FRHICommandListImmediate *param_1,int param_2)

{
  FName FVar1;
  uint uVar2;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *pFVar3;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIUnorderedAccessView> TVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraUsedGPUInstanceCounters> FVar6;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  int local_res18 [2];
  FResourceArrayUploadInterface local_f8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_f0;
  int local_e8 [2];
  undefined1 local_e0;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  FRWBuffer local_b8;
  FRHITransitionInfo local_88;
  TOptional<FRHIBreadcrumbScope> local_58 [2];
  
  iVar8 = param_2 - (this->FreeEntries).ArrayNum;
  iVar9 = 0;
  if (0 < iVar8) {
    iVar9 = iVar8;
  }
  iVar9 = iVar9 + this->UsedInstanceCounts;
  if (iVar9 < 1) {
    ReleaseCounts(this);
    if (iVar9 == 0) {
      return;
    }
  }
  else {
    uVar2 = (int)((float)iVar9 * GNiagaraGPUCountBufferSlack);
    if ((int)((float)iVar9 * GNiagaraGPUCountBufferSlack) < GNiagaraMinGPUInstanceCount) {
      uVar2 = GNiagaraMinGPUInstanceCount;
    }
    if (this->AllocatedInstanceCounts == 0) {
      this->AllocatedInstanceCounts = uVar2;
      local_f8 = (FResourceArrayUploadInterface)&___7__TResourceArray_I_0A___6B_;
      local_f0.Packed = 0;
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_e0 = 0;
      iVar8 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (4,4,uVar2,(ForAnyElementType *)&local_f0.Frozen,local_e8,local_e8 + 1);
      TVar7 = local_f0;
      if ((local_f0.Packed & 1) != 0) {
        TVar7.UnfrozenPtr =
             (FScriptContainerElement *)((longlong)&local_f0 + ((longlong)local_f0.Packed >> 0x18));
      }
      memset(TVar7.UnfrozenPtr + (longlong)iVar8 * 4,0,(longlong)(int)uVar2 << 2);
      FRWBuffer::Initialize
                (&this->CountBuffer,(FRHICommandListBase *)param_1,L"NiagaraGPUInstanceCounts",4,
                 this->AllocatedInstanceCounts,PF_R32_UINT,CopySrc|SRVMask,SourceCopy|Static,
                 &local_f8);
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                ((FMemoryImageAllocatorBase *)&local_f0.Frozen);
    }
    else if (this->AllocatedInstanceCounts < iVar9) {
      local_58[0].bIsSet = false;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_c8 = 0;
        uStack_c4 = 0;
        ::Desc._12_8_ = ZEXT48((uint)local_d8._12_4_);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_ResizeNiagaraGP;
        ::Desc._padding_._0_4_ = 0x11b;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FNiagaraGPUInstanceCountManager::ResizeBuffers'::__l17::<lambda_1>::operator()<>'::
               __l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_d8.ArrayNum = 0x54c81410;
      local_d8._12_4_ = 1;
      TOptional<FRHIBreadcrumbScope>::
      Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
                (local_58,(FRHIComputeCommandList *)param_1,
                 (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>
                  *)&local_d8);
      local_f0.Packed = 0;
      local_f8 = (FResourceArrayUploadInterface)&___7__TResourceArray_I_0A___6B_;
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_e0 = 0;
      iVar8 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (4,4,uVar2,(ForAnyElementType *)&local_f0.Frozen,local_e8,local_e8 + 1);
      TVar7 = local_f0;
      if ((local_f0.Packed & 1) != 0) {
        TVar7.UnfrozenPtr =
             (FScriptContainerElement *)((longlong)&local_f0 + ((longlong)local_f0.Packed >> 0x18));
      }
      memset(TVar7.UnfrozenPtr + (longlong)iVar8 * 4,0,(longlong)(int)uVar2 << 2);
      local_b8.SRV.Reference = (FRHIShaderResourceView *)0x0;
      local_b8.Buffer.Reference = (FRHIBuffer *)0x0;
      local_b8.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      local_b8.NumBytes = 0;
      local_b8.ClassName.ComparisonIndex.Value = 0;
      local_b8.ClassName.Number = 0;
      local_b8.OwnerName.ComparisonIndex.Value = 0;
      local_b8.OwnerName.Number = 0;
      FRWBuffer::Initialize
                (&local_b8,(FRHICommandListBase *)param_1,L"NiagaraGPUInstanceCounts",4,uVar2,
                 PF_R32_UINT,UAVCompute,SourceCopy|Static,&local_f8);
      TVar4.Reference = local_b8.UAV.Reference;
      local_res18[0] = this->AllocatedInstanceCounts;
      local_res8 = (FName)local_b8.UAV.Reference;
      CopyUIntBufferToTargets
                ((FRHICommandList *)param_1,this->FeatureLevel,(this->CountBuffer).SRV.Reference,
                 (FRHIUnorderedAccessView **)&local_res8,local_res18,0,1);
      local_88._padding_._0_4_ = 0xffffffff;
      local_88._padding_._4_2_ = 0xffff;
      local_d8.DataPtr = &local_88;
      local_88.field1_0x8.UAV = TVar4.Reference;
      local_d8.ArrayNum = 1;
      local_88.Type = UAV;
      local_88.AccessBefore = UAVCompute;
      local_88.AccessAfter = CopySrc|SRVMask;
      local_88.Flags = None;
      local_88.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_d8,None);
      this->AllocatedInstanceCounts = uVar2;
      this_00 = (this->CountBuffer).Buffer.Reference;
      pFVar3 = (this->CountBuffer).UAV.Reference;
      this_01 = (this->CountBuffer).SRV.Reference;
      (this->CountBuffer).Buffer.Reference = local_b8.Buffer.Reference;
      (this->CountBuffer).UAV.Reference = local_b8.UAV.Reference;
      (this->CountBuffer).SRV.Reference = local_b8.SRV.Reference;
      (this->CountBuffer).NumBytes = local_b8.NumBytes;
      (this->CountBuffer).ClassName.ComparisonIndex =
           (FNameEntryId)local_b8.ClassName.ComparisonIndex.Value;
      *(undefined8 *)&(this->CountBuffer).ClassName.Number = local_b8._32_8_;
      *(ulonglong *)&(this->CountBuffer).OwnerName.Number =
           CONCAT44(local_b8._44_4_,local_b8.OwnerName.Number);
      local_b8.Buffer.Reference = this_00;
      local_b8.UAV.Reference = pFVar3;
      if (this_00 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
      if (local_b8.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b8.UAV.Reference);
      }
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
      FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
                ((FMemoryImageAllocatorBase *)&local_f0.Frozen);
      local_f8 = (FResourceArrayUploadInterface)&___7FResourceArrayUploadInterface__6B_;
      if (local_58[0].bIsSet != false) {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58[0].TypedValue);
      }
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar6 = StatPtr_STAT_NiagaraUsedGPUInstanceCounters;
    if (StatPtr_STAT_NiagaraUsedGPUInstanceCounters ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraUsedGPUInstanceCounters>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraUsedGPUInstanceCounters");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraUsedGPUInstanceCounters>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraUsedGPUInstanceCounters,
                         *pFVar5,L"Used GPU Instance Counters","STATGROUP_Niagara","STATCAT_Niagara"
                         ,L"Niagara",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_d8._12_4_ = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_d8.DataPtr = (FRHITransitionInfo *)(longlong)iVar9;
      local_d8.ArrayNum = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_02,(FStatMessage *)&local_d8);
      FStatsTrace::Add(&local_res8,(long64)(longlong)iVar9);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// UpdateDrawIndirectBuffers @ 14930bfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers
          (FNiagaraGPUInstanceCountManager *this,FNiagaraGpuComputeDispatchInterface *param_1,
          FRHICommandList *param_2,Type param_3)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>_>
  *this_00;
  FScriptContainerElement *pFVar4;
  uchar *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  FRWBuffer *pFVar8;
  FNiagaraDrawIndirectArgsGenCS *pFVar9;
  FNiagaraGpuComputeDispatchInterface *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  atomic<unsigned_int> aVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraIndirectDraws> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRHIBreadcrumbAllocator *pFVar17;
  FRHIBreadcrumbNode *pFVar18;
  void *pvVar19;
  longlong lVar20;
  longlong lVar21;
  FGlobalShaderMap *pFVar22;
  FShaderType *pFVar23;
  FName FVar24;
  FRHIUnorderedAccessView *pFVar25;
  FShaderParametersMetadata *pFVar26;
  FRHIComputeShader *pFVar27;
  FRHIComputeShader *pFVar28;
  FRHIBatchedShaderUnbinds *pFVar29;
  ForElementType<FRHITransitionInfo> FVar30;
  uint uVar31;
  FRHIUnorderedAccessView *this_03;
  FScriptContainerElement *pFVar32;
  FNameEntryId FVar33;
  int iVar34;
  size_t _Size;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar35;
  FRHIUnorderedAccessView *this_04;
  ERHIAccess EVar36;
  int iVar37;
  TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *pTVar38;
  uchar auVar39 [8];
  FRHICommandListBase *pFVar40;
  float fVar41;
  undefined1 auStackY_548 [32];
  undefined1 local_4e7;
  undefined1 local_4e6 [2];
  Type local_4e4;
  FRHICommandListBase *local_4e0;
  undefined1 local_4d8 [4];
  uint local_4d4;
  int local_4d0;
  uint local_4cc;
  TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable> local_4c8;
  uint local_4b8;
  uint uStack_4b4;
  FRHIComputeShader *local_4a8;
  TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *local_498;
  FNiagaraGpuComputeDispatchInterface *local_490;
  longlong local_488;
  FRHIUnorderedAccessView *local_480;
  TRefCountPtr<FRHIUnorderedAccessView> *local_478;
  longlong local_470;
  TIntVector3<int>_u_0 local_468;
  TIntVector3<int>_u_0 local_458;
  TIntVector3<int>_u_0 local_448;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_438;
  FRHIShaderResourceView *local_428;
  FRHIUnorderedAccessView *local_420;
  FRHIUnorderedAccessView *local_418;
  FRHIUnorderedAccessView *local_410;
  int local_408;
  uint uStack_404;
  int iStack_400;
  int iStack_3fc;
  FReadBuffer local_3f8;
  FNiagaraEmptyUAVPoolScopedAccess local_3e0;
  FRHIUnorderedAccessView *local_3d8;
  FStatMessage local_3d0;
  TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable> local_3c0;
  FName local_3b0;
  FRHIUnorderedAccessView *local_3a8 [2];
  ForElementType<FRHITransitionInfo> local_398;
  int iStack_390;
  undefined4 uStack_38c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  FRHIUnorderedAccessView **local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FRHIUnorderedAccessView **local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  ForElementType<FRHITransitionInfo> local_358;
  int iStack_350;
  undefined4 uStack_34c;
  char *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  wchar_t *pwStack_330;
  FRHIShaderResourceView *local_328;
  FRHIUnorderedAccessView *local_320;
  longlong local_318;
  undefined8 uStack_310;
  FRHIBreadcrumbScope local_308;
  char local_2f8;
  undefined1 local_2f0 [8];
  TArrayView<FRHITransitionInfo_const_,int> local_2e8;
  FString local_2d8;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_2c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2a8;
  FString local_298;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_288;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_278;
  TArrayView<FRHITransitionInfo_const_,int> local_268;
  FName local_258;
  undefined1 local_250 [8];
  ForElementType<FRHITransitionInfo> local_248;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_548;
  local_4e4 = param_3;
  local_4e0 = (FRHICommandListBase *)param_2;
  local_490 = param_1;
  bVar11 = IsInRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                          ,0x192,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar38 = this->DrawIndirectArgGenTasks + (int)param_3;
  if (((param_3 == PreOpaque) && (0 < (this->InstanceCountClearTasks).ArrayNum)) &&
     (param_1->bIsFirstViewFamily != false)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  local_498 = pTVar38;
  if ((0 < pTVar38->ArrayNum) || (bVar11)) {
    bVar12 = FNiagaraUtilities::AllowComputeShaders();
    if (bVar12) {
      auVar39 = (uchar  [8])(longlong)pTVar38->ArrayNum;
      if ((auVar39 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar16 = StatPtr_STAT_NiagaraIndirectDraws;
        if (StatPtr_STAT_NiagaraIndirectDraws ==
            (FThreadSafeStaticStat<FStat_STAT_NiagaraIndirectDraws>)0x0) {
          pFVar15 = ::FName::FName(&local_258,"STAT_NiagaraIndirectDraws");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraIndirectDraws>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraIndirectDraws,
                              *pFVar15,L"Indirect Draw Calls","STATGROUP_Niagara","STATCAT_Niagara",
                              L"Niagara",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar24 = *(FName *)FVar16;
        FVar33 = FVar24.ComparisonIndex.Value;
        uVar13 = FVar24.Number;
        local_4b8 = FVar33.Value;
        uStack_4b4 = uVar13;
        if (((FVar24 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_3d0.NameAndInfo.Number = uVar13 & 0xffffafff | 0xa000;
          local_3d0.StatData.Pad = auVar39;
          local_3d0.NameAndInfo.Index.Value = FVar33.Value;
          local_3b0 = FVar24;
          FThreadStats::AddStatMessage(this_01,&local_3d0);
          FStatsTrace::Add(&local_3b0,(long64)auVar39);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      _Size = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_348 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
        ;
        pwStack_330 = L"NiagaraUpdateDrawIndirectBuffers";
        uStack_340 = 0x19b;
        ::Desc._padding_ = CONCAT44(uStack_33c,0x19b);
        local_338 = 0;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_._0_4_ = 0x51ddd710;
        ::Desc._padding_._4_4_ = 1;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers'::__l24::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar17 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
      pFVar18 = FMemStackBase::Alloc(&pFVar17->Inner,0x50,8);
      pFVar18->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar18->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar18->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar18->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar18->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar18->Data = (FRHIBreadcrumbData *)&::Desc;
      pFVar18->Allocator = pFVar17;
      pFVar18->TraceCpuSpecId = 0;
      pFVar18->TraceCpuMetadataId = 0;
      LOCK();
      UNLOCK();
      uVar13 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar18->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar18->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar18->ID = uVar13;
      pFVar18->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar18[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar12 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar12)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar14 = (atomic<unsigned_int>)
                   FCpuProfilerTrace::OutputEventType
                             ((wchar_t *)
                              CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                              (char *)::Desc._padding_,(uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar14;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar18->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_308,(FRHIComputeCommandList *)param_2,pFVar18)
      ;
      local_2f8 = '\x01';
      local_3f8.Buffer.Reference = (FRHIBuffer *)0x0;
      local_3f8.SRV.Reference = (FRHIShaderResourceView *)0x0;
      local_3f8.NumBytes = 0;
      uVar13 = pTVar38->ArrayNum * 0x14;
      if (bVar11) {
        _Size = (size_t)(uint)((this->InstanceCountClearTasks).ArrayNum << 2);
      }
      uVar31 = (int)_Size + uVar13;
      FReadBuffer::Initialize
                (&local_3f8,(FRHICommandListBase *)param_2,L"NiagaraTaskInfosBuffer",4,uVar31 >> 2,
                 PF_R32_UINT,Volatile,(FResourceArrayUploadInterface *)0x0);
      pvVar19 = FRHICommandListBase::LockBuffer
                          ((FRHICommandListBase *)param_2,local_3f8.Buffer.Reference,0,uVar31,
                           RLM_WriteOnly);
      memcpy(pvVar19,(local_498->AllocatorInstance).Data,(ulonglong)uVar13);
      memcpy((void *)((ulonglong)uVar13 + (longlong)pvVar19),
             (this->InstanceCountClearTasks).AllocatorInstance.Data,_Size);
      FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_2,local_3f8.Buffer.Reference);
      pFVar10 = local_490;
      FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
                (&local_3e0,(local_490->EmptyUAVPoolPtr).Ptr);
      uVar13 = (this->DrawIndirectPool).ArrayNum + 2;
      local_248.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
      local_60 = 0;
      local_5c = 10;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (10 < (int)uVar13) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                  (0x30,8,uVar13,&local_248,0,&local_5c);
      }
      if ((pFVar10->bIsFirstViewFamily != false) ||
         (pFVar8 = &this->MultiViewCountBuffer, local_4e4 == PostOpaque)) {
        pFVar8 = &this->CountBuffer;
      }
      pTVar35 = &pFVar8->UAV;
      pFVar25 = pTVar35->Reference;
      local_480 = pFVar25;
      local_478 = pTVar35;
      if (pFVar25 == (FRHIUnorderedAccessView *)0x0) {
        pFVar25 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                            ((pFVar10->EmptyUAVPoolPtr).Ptr,param_2,PF_R32_UINT,Buffer);
      }
      else {
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                               (0x830,&local_248,&local_5c);
          pFVar25 = pTVar35->Reference;
        }
        lVar20 = (longlong)local_60;
        FVar30 = (ForElementType<FRHITransitionInfo>)&local_248;
        if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
          FVar30 = local_248.SecondaryData;
        }
        local_60 = local_60 + 1;
        *(undefined4 *)((longlong)FVar30 + lVar20 * 0x30) = 0xffffffff;
        ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[0] = 0xff;
        ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[1] = 0xff;
        *(FRHIUnorderedAccessView **)((uchar *)((longlong)FVar30 + 8) + lVar20 * 0x30) = pFVar25;
        ((uchar *)((longlong)FVar30 + 0x10))[lVar20 * 0x30] = '\x03';
        puVar5 = (uchar *)((longlong)FVar30 + 0x14) + lVar20 * 0x30;
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5 = (uchar *)((longlong)FVar30 + 0x18) + lVar20 * 0x30;
        puVar5[0] = '\0';
        puVar5[1] = '\x04';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        ((uchar *)((longlong)FVar30 + 0x1c))[lVar20 * 0x30] = '\0';
        ((uchar *)((longlong)FVar30 + 0x28))[lVar20 * 0x30] = '\0';
        pFVar25 = pTVar35->Reference;
      }
      this_03 = (FRHIUnorderedAccessView *)0x0;
      if (pFVar25 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar25);
        this_03 = pFVar25;
      }
      if ((this->CulledCountBuffer).SRV.Reference == (FRHIShaderResourceView *)0x0) {
        pFVar25 = (FRHIUnorderedAccessView *)FNiagaraRenderer::GetDummyUIntBuffer();
      }
      else {
        EVar36 = this->CulledCountsRHIAccess;
        if (EVar36 != SRVCompute) {
          if (local_60 == local_5c) {
            local_60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                                 (0x830,&local_248,&local_5c);
            EVar36 = this->CulledCountsRHIAccess;
          }
          lVar20 = (longlong)local_60;
          FVar30 = (ForElementType<FRHITransitionInfo>)&local_248;
          if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar30 = local_248.SecondaryData;
          }
          pFVar25 = (this->CulledCountBuffer).UAV.Reference;
          local_60 = local_60 + 1;
          *(undefined4 *)((longlong)FVar30 + lVar20 * 0x30) = 0xffffffff;
          ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[0] = 0xff;
          ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[1] = 0xff;
          *(FRHIUnorderedAccessView **)((uchar *)((longlong)FVar30 + 8) + lVar20 * 0x30) = pFVar25;
          ((uchar *)((longlong)FVar30 + 0x10))[lVar20 * 0x30] = '\x03';
          *(ERHIAccess *)((uchar *)((longlong)FVar30 + 0x14) + lVar20 * 0x30) = EVar36;
          puVar5 = (uchar *)((longlong)FVar30 + 0x18) + lVar20 * 0x30;
          puVar5[0] = '\x10';
          puVar5[1] = '\0';
          puVar5[2] = '\0';
          puVar5[3] = '\0';
          ((uchar *)((longlong)FVar30 + 0x1c))[lVar20 * 0x30] = '\0';
          ((uchar *)((longlong)FVar30 + 0x28))[lVar20 * 0x30] = '\0';
          this->CulledCountsRHIAccess = SRVCompute;
        }
        pFVar25 = (FRHIUnorderedAccessView *)(this->CulledCountBuffer).SRV.Reference;
      }
      this_04 = (FRHIUnorderedAccessView *)0x0;
      if (pFVar25 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar25);
        this_04 = pFVar25;
      }
      pFVar32 = (this->DrawIndirectPool).AllocatorInstance.Data;
      iVar37 = (this->DrawIndirectPool).ArrayNum;
      pFVar4 = pFVar32 + (longlong)iVar37 * 8;
      while( true ) {
        if ((this->DrawIndirectPool).ArrayNum != iVar37) {
          local_4e7 = 0;
          `TCheckedPointerIterator<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_4e7);
        }
        iVar34 = local_60;
        pFVar40 = local_4e0;
        if (pFVar32 == pFVar4) break;
        lVar20 = *(longlong *)pFVar32;
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                               (0x830,&local_248,&local_5c);
        }
        lVar21 = (longlong)local_60;
        FVar30 = (ForElementType<FRHITransitionInfo>)&local_248;
        if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
          FVar30 = local_248.SecondaryData;
        }
        uVar6 = *(undefined8 *)(lVar20 + 8);
        pFVar32 = pFVar32 + 8;
        local_60 = local_60 + 1;
        *(undefined4 *)((longlong)FVar30 + lVar21 * 0x30) = 0xffffffff;
        ((uchar *)((longlong)FVar30 + 4) + lVar21 * 0x30)[0] = 0xff;
        ((uchar *)((longlong)FVar30 + 4) + lVar21 * 0x30)[1] = 0xff;
        *(undefined8 *)((uchar *)((longlong)FVar30 + 8) + lVar21 * 0x30) = uVar6;
        ((uchar *)((longlong)FVar30 + 0x10))[lVar21 * 0x30] = '\x03';
        puVar5 = (uchar *)((longlong)FVar30 + 0x14) + lVar21 * 0x30;
        puVar5[0] = 't';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5 = (uchar *)((longlong)FVar30 + 0x18) + lVar21 * 0x30;
        puVar5[0] = '\0';
        puVar5[1] = '\x04';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        ((uchar *)((longlong)FVar30 + 0x1c))[lVar21 * 0x30] = '\0';
        ((uchar *)((longlong)FVar30 + 0x28))[lVar21 * 0x30] = '\0';
      }
      local_398 = (ForElementType<FRHITransitionInfo>)&local_248;
      if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_398 = local_248.SecondaryData;
      }
      if ((local_60 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iStack_390 = iVar34;
      local_2e8._12_4_ = uStack_38c;
      local_2e8.ArrayNum = iVar34;
      local_2e8.DataPtr = (FRHITransitionInfo *)local_398;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar40,&local_2e8,None);
      bVar12 = GRHIGlobals.SupportsRWTextureBuffers;
      pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)this->FeatureLevel]);
      pFVar23 = (FShaderType *)FNiagaraDrawIndirectArgsGenCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar22,&local_388,pFVar23,(uint)(bVar12 != false));
      if ((FRHIComputeShader *)local_388.ShaderContent == (FRHIComputeShader *)0x0) {
        FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2f0);
        ::FName::ToString((FName *)FVar24,&local_2d8);
        FNiagaraDrawIndirectArgsGenCS::GetStaticType();
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FNiagaraDrawIndirectArgsGenCS::GetStaticType();
      local_4c8.ShaderContent = (FNiagaraDrawIndirectArgsGenCS *)local_388.ShaderContent;
      local_4c8.ShaderMap = local_388.ShaderMap;
      if (local_480 != (FRHIUnorderedAccessView *)0x0) {
        local_378 = local_3a8;
        uStack_370 = 1;
        local_2c8._12_4_ = uStack_36c;
        local_2c8.ArrayNum = 1;
        local_3a8[0] = this_03;
        local_2c8.DataPtr = local_378;
        FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)pFVar40,&local_2c8);
      }
      iVar37 = (this->DrawIndirectPool).ArrayNum;
      iVar34 = 1;
      if (1 < iVar37) {
        iVar34 = iVar37;
      }
      local_470 = (longlong)iVar34;
      local_4d0 = 0;
      local_4cc = 0;
      if (0 < iVar34) {
        local_4b8 = iVar34 - 1;
        local_488 = 0;
        do {
          lVar20 = local_488;
          uVar31 = local_4cc;
          uVar13 = 0;
          local_4d4 = 0;
          if (((int)local_4cc < 0) || ((this->DrawIndirectPool).ArrayNum <= (int)local_4cc)) {
            pFVar25 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                                ((local_490->EmptyUAVPoolPtr).Ptr,(FRHICommandList *)pFVar40,
                                 PF_R32_UINT,Buffer);
          }
          else {
            if ((int)local_4cc < (this->DrawIndirectPool).ArrayNum) {
              uVar13 = ~local_4cc >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar20 = *(longlong *)((this->DrawIndirectPool).AllocatorInstance.Data + lVar20 * 8);
            uVar13 = *(uint *)(lVar20 + 0x38 + (longlong)(int)local_4e4 * 4);
            pFVar25 = *(FRHIUnorderedAccessView **)(lVar20 + 8);
            local_4d4 = uVar13;
          }
          if ((uVar31 == local_4b8) && (bVar11)) {
            iVar37 = (this->InstanceCountClearTasks).ArrayNum;
          }
          else {
            iVar37 = 0;
          }
          iVar34 = iVar37 + uVar13;
          if (iVar34 != 0) {
            local_428 = local_3f8.SRV.Reference;
            local_408 = local_4d0;
            local_420 = this_04;
            local_418 = this_03;
            local_410 = pFVar25;
            uStack_404 = uVar13;
            iStack_400 = iVar37;
            iStack_3fc = iVar34;
            if (GRHIGlobals.SupportsRWTextureBuffers == false) {
              if (0 < (int)uVar13) {
                pFVar26 = FNiagaraDrawIndirectArgsGenCS::FParameters::FTypeInfo::GetStructMetadata()
                ;
                local_458._s_0.Y = 1;
                local_458._s_0.Z = 1;
                uVar13 = (int)(((int)(local_4d4 + 0x3f) >> 0x1f & 0x3fU) + local_4d4 + 0x3f) >> 6;
                local_458._s_0.X = uVar13;
                FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_458._s_0);
                pFVar28 = TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::
                          GetComputeShader(&local_4c8);
                SetComputePipelineState((FRHIComputeCommandList *)local_4e0,pFVar28);
                local_2a8.ShaderContent = (FShader *)local_4c8.ShaderContent;
                local_2a8.ShaderMap = local_4c8.ShaderMap;
                ValidateShaderParameters(&local_2a8,pFVar26,&local_428);
                pFVar9 = local_4c8.ShaderContent;
                ::SetShaderParameters
                          ((FRHIComputeCommandList *)local_4e0,pFVar28,
                           (FShaderParameterBindings *)local_4c8.ShaderContent,pFVar26,&local_428);
                pFVar40 = local_4e0;
                FRHIComputeCommandList::DispatchComputeShader
                          ((FRHIComputeCommandList *)local_4e0,uVar13,1,1);
                local_4a8 = TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::
                            GetComputeShader(&local_4c8);
                if (GRHIGlobals.NeedsShaderUnbinds != false) {
                  pFVar29 = FRHICommandListBase::GetScratchShaderUnbinds(pFVar40);
                  if ((*(short *)((longlong)&pFVar9->field_0x50 + 4) != -1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                          ,0xb3,
                                          L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."
                                         ), bVar12)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UnsetShaderUAVs(pFVar29,(FShaderParameterBindings *)pFVar9);
                  FRHIComputeCommandList::SetBatchedShaderUnbinds
                            ((FRHIComputeCommandList *)pFVar40,local_4a8,pFVar29);
                }
              }
              if (0 < iVar37) {
                uStack_310 = CONCAT44(iStack_3fc,iStack_400);
                local_328 = local_428;
                local_320 = local_418;
                local_318 = (ulonglong)uStack_404 << 0x20;
                pFVar22 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                             [(int)this->FeatureLevel]);
                pFVar23 = (FShaderType *)FNiagaraDrawIndirectResetCountsCS::GetStaticType();
                FGlobalShaderMap::GetShader(pFVar22,&local_438,pFVar23,0);
                if ((FRHIComputeShader *)local_438.ShaderContent == (FRHIComputeShader *)0x0) {
                  FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_250);
                  ::FName::ToString((FName *)FVar24,&local_298);
                  FNiagaraDrawIndirectResetCountsCS::GetStaticType();
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Shader.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                      ,0xc0,L"Failed to find shader type %s in Platform %s");
                  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_298.Data.AllocatorInstance.Data);
                  }
                  if (bVar12) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                FNiagaraDrawIndirectResetCountsCS::GetStaticType();
                local_4a8 = (FRHIComputeShader *)local_438.ShaderContent;
                local_3c0.ShaderContent =
                     (FNiagaraDrawIndirectResetCountsCS *)local_438.ShaderContent;
                local_3c0.ShaderMap = local_438.ShaderMap;
                pFVar26 = FNiagaraDrawIndirectResetCountsCS::FParameters::FTypeInfo::
                          GetStructMetadata();
                local_468._s_0.Y = 1;
                local_468._s_0.Z = 1;
                uVar13 = (int)((iVar37 + 0x3f >> 0x1f & 0x3fU) + iVar37 + 0x3f) >> 6;
                local_468._s_0.X = uVar13;
                FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_468._s_0);
                pFVar27 = TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable>::
                          GetComputeShader(&local_3c0);
                SetComputePipelineState((FRHIComputeCommandList *)local_4e0,pFVar27);
                local_288.ShaderContent = local_438.ShaderContent;
                local_288.ShaderMap = local_438.ShaderMap;
                ValidateShaderParameters(&local_288,pFVar26,&local_328);
                pFVar28 = local_4a8;
                ::SetShaderParameters
                          ((FRHIComputeCommandList *)local_4e0,pFVar27,
                           (FShaderParameterBindings *)local_4a8,pFVar26,&local_328);
                pFVar40 = local_4e0;
                FRHIComputeCommandList::DispatchComputeShader
                          ((FRHIComputeCommandList *)local_4e0,uVar13,1,1);
                pFVar27 = TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable>::
                          GetComputeShader(&local_3c0);
                goto LAB_14930cd59;
              }
            }
            else {
              pFVar26 = FNiagaraDrawIndirectArgsGenCS::FParameters::FTypeInfo::GetStructMetadata();
              local_448._s_0.Y = 1;
              local_448._s_0.Z = 1;
              uVar13 = (int)((iVar34 + 0x3f >> 0x1f & 0x3fU) + iVar34 + 0x3f) >> 6;
              local_448._s_0.X = uVar13;
              FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_448._s_0);
              pFVar27 = TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::
                        GetComputeShader(&local_4c8);
              SetComputePipelineState((FRHIComputeCommandList *)local_4e0,pFVar27);
              local_2b8.ShaderContent = (FShader *)local_4c8.ShaderContent;
              local_2b8.ShaderMap = local_4c8.ShaderMap;
              ValidateShaderParameters(&local_2b8,pFVar26,&local_428);
              pFVar28 = (FRHIComputeShader *)local_4c8.ShaderContent;
              ::SetShaderParameters
                        ((FRHIComputeCommandList *)local_4e0,pFVar27,
                         (FShaderParameterBindings *)local_4c8.ShaderContent,pFVar26,&local_428);
              pFVar40 = local_4e0;
              FRHIComputeCommandList::DispatchComputeShader
                        ((FRHIComputeCommandList *)local_4e0,uVar13,1,1);
              pFVar27 = TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::
                        GetComputeShader(&local_4c8);
LAB_14930cd59:
              if (GRHIGlobals.NeedsShaderUnbinds != false) {
                pFVar29 = FRHICommandListBase::GetScratchShaderUnbinds(pFVar40);
                if ((*(short *)((longlong)&pFVar28->_padding_ + 4) != -1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                        ,0xb3,
                                        L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."
                                       ), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                UnsetShaderUAVs(pFVar29,(FShaderParameterBindings *)pFVar28);
                FRHIComputeCommandList::SetBatchedShaderUnbinds
                          ((FRHIComputeCommandList *)pFVar40,pFVar27,pFVar29);
              }
            }
            local_4d0 = local_4d0 + local_4d4;
          }
          local_4cc = local_4cc + 1;
          local_488 = local_488 + 1;
        } while (local_488 < local_470);
      }
      if (local_480 != (FRHIUnorderedAccessView *)0x0) {
        local_368 = &local_3d8;
        uStack_360 = 1;
        local_278._12_4_ = uStack_35c;
        local_278.ArrayNum = 1;
        local_3d8 = this_03;
        local_278.DataPtr = local_368;
        FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)pFVar40,&local_278);
      }
      local_60 = 0;
      if ((local_5c < 0) && (local_5c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                  (0x30,8,0,&local_248,0,&local_5c);
      }
      pFVar32 = (this->DrawIndirectPool).AllocatorInstance.Data;
      iVar37 = (this->DrawIndirectPool).ArrayNum;
      pFVar4 = pFVar32 + (longlong)iVar37 * 8;
      while( true ) {
        if ((this->DrawIndirectPool).ArrayNum != iVar37) {
          local_4e6[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_4e6);
        }
        pFVar40 = local_4e0;
        if (pFVar32 == pFVar4) break;
        lVar20 = *(longlong *)pFVar32;
        if (local_60 == local_5c) {
          local_60 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                               (0x830,&local_248,&local_5c);
        }
        lVar21 = (longlong)local_60;
        FVar30 = (ForElementType<FRHITransitionInfo>)&local_248;
        if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
          FVar30 = local_248.SecondaryData;
        }
        uVar6 = *(undefined8 *)(lVar20 + 8);
        pFVar32 = pFVar32 + 8;
        local_60 = local_60 + 1;
        *(undefined4 *)((longlong)FVar30 + lVar21 * 0x30) = 0xffffffff;
        ((uchar *)((longlong)FVar30 + 4) + lVar21 * 0x30)[0] = 0xff;
        ((uchar *)((longlong)FVar30 + 4) + lVar21 * 0x30)[1] = 0xff;
        *(undefined8 *)((uchar *)((longlong)FVar30 + 8) + lVar21 * 0x30) = uVar6;
        ((uchar *)((longlong)FVar30 + 0x10))[lVar21 * 0x30] = '\x03';
        puVar5 = (uchar *)((longlong)FVar30 + 0x14) + lVar21 * 0x30;
        puVar5[0] = '\0';
        puVar5[1] = '\x04';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5 = (uchar *)((longlong)FVar30 + 0x18) + lVar21 * 0x30;
        puVar5[0] = 't';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        ((uchar *)((longlong)FVar30 + 0x1c))[lVar21 * 0x30] = '\0';
        ((uchar *)((longlong)FVar30 + 0x28))[lVar21 * 0x30] = '\0';
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,&local_248,&local_5c);
      }
      FVar30 = (ForElementType<FRHITransitionInfo>)&local_248;
      if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar30 = local_248.SecondaryData;
      }
      lVar20 = (longlong)local_60;
      local_60 = local_60 + 1;
      *(FRHIUnorderedAccessView **)((uchar *)((longlong)FVar30 + 8) + lVar20 * 0x30) =
           local_478->Reference;
      *(undefined4 *)((longlong)FVar30 + lVar20 * 0x30) = 0xffffffff;
      ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[0] = 0xff;
      ((uchar *)((longlong)FVar30 + 4) + lVar20 * 0x30)[1] = 0xff;
      ((uchar *)((longlong)FVar30 + 0x10))[lVar20 * 0x30] = '\x03';
      puVar5 = (uchar *)((longlong)FVar30 + 0x14) + lVar20 * 0x30;
      puVar5[0] = '\0';
      puVar5[1] = '\x04';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5 = (uchar *)((longlong)FVar30 + 0x18) + lVar20 * 0x30;
      puVar5[0] = 0xf0;
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      ((uchar *)((longlong)FVar30 + 0x1c))[lVar20 * 0x30] = '\0';
      ((uchar *)((longlong)FVar30 + 0x28))[lVar20 * 0x30] = '\0';
      iStack_350 = local_60;
      local_358 = (ForElementType<FRHITransitionInfo>)&local_248;
      if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_358 = local_248.SecondaryData;
      }
      if ((local_60 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_268._12_4_ = uStack_34c;
      local_268.ArrayNum = iStack_350;
      local_268.DataPtr = (FRHITransitionInfo *)local_358;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar40,&local_268,None);
      if (this_04 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_04);
      }
      if (this_03 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_03);
      }
      if (local_248.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FMemory::Free((void *)local_248.SecondaryData);
      }
      FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess(&local_3e0);
      if (local_3f8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3f8.SRV.Reference);
      }
      if (local_3f8.Buffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3f8.Buffer.Reference);
      }
      pTVar38 = local_498;
      param_3 = local_4e4;
      if (local_2f8 != '\0') {
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_308);
        pTVar38 = local_498;
        param_3 = local_4e4;
      }
    }
    if (bVar11) {
      pTVar2 = &this->FreeEntries;
      pTVar3 = &this->InstanceCountClearTasks;
      if ((pTVar2 == pTVar3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar37 = (this->InstanceCountClearTasks).ArrayNum;
      if (iVar37 != 0) {
        iVar34 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar37,&pTVar2->AllocatorInstance,&(this->FreeEntries).ArrayNum,
                            &(this->FreeEntries).ArrayMax);
        memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 4,
               (pTVar3->AllocatorInstance).Data,(longlong)iVar37 << 2);
      }
      piVar1 = &(this->InstanceCountClearTasks).ArrayMax;
      (this->InstanceCountClearTasks).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
    }
  }
  pTVar38->ArrayNum = 0;
  if (pTVar38->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&pTVar38->AllocatorInstance,0,&pTVar38->ArrayMax);
  }
  if (param_3 != PostOpaque) {
    return;
  }
  this_00 = &this->DrawIndirectArgMap;
  bVar11 = 1 < *(int *)&(this->DrawIndirectArgMap).field_0x48;
  if (!bVar11) {
    TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x8 = 0;
  if (*(int *)&(this->DrawIndirectArgMap).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)this_00,0,(int *)&(this->DrawIndirectArgMap).field_0xc)
    ;
  }
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x34 = 0;
  iVar37 = *(int *)&(this->DrawIndirectArgMap).field_0x2c;
  *(undefined4 *)&(this->DrawIndirectArgMap).field_0x28 = 0;
  if ((iVar37 < 0) || (0x80 < iVar37)) {
    *(undefined4 *)&(this->DrawIndirectArgMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DrawIndirectArgMap).field_0x10,0);
  }
  if (bVar11) {
    *(undefined4 *)&(this->DrawIndirectArgMap).field_0x48 = 1;
    TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDrawIndirectArgGenTaskInfo,FNiagaraGPUInstanceCountManager::FNiagaraDrawIndirectArgGenSlotInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->bAcquiredCulledCounts = false;
  LOCK();
  this->RequiredCulledCounts = (atomic<int>)0x0;
  UNLOCK();
  if (GNiagaraIndirectArgsPoolAllowShrinking != 0) {
    if (((this->DrawIndirectPool).ArrayNum == 1) &&
       ((uint)GNiagaraIndirectArgsPoolMinSize <
        *(uint *)(*(longlong *)(this->DrawIndirectPool).AllocatorInstance.Data + 0x30))) {
      if (((this->DrawIndirectPool).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = *(longlong *)(this->DrawIndirectPool).AllocatorInstance.Data;
      fVar41 = (float)*(uint *)(lVar20 + 0x30) * GNiagaraIndirectArgsPoolLowWaterAmount;
      uVar13 = -((int)ROUND(__real_bf000000 - (fVar41 + fVar41)) >> 1);
      if (uVar13 < (uint)GNiagaraIndirectArgsPoolMinSize) {
        uVar13 = GNiagaraIndirectArgsPoolMinSize;
      }
      if (*(uint *)(lVar20 + 0x34) < uVar13) {
        this->DrawIndirectLowWaterFrames = this->DrawIndirectLowWaterFrames + 1;
        goto LAB_14930d302;
      }
    }
    this->DrawIndirectLowWaterFrames = 0;
  }
LAB_14930d302:
  pFVar32 = (this->DrawIndirectPool).AllocatorInstance.Data;
  iVar37 = (this->DrawIndirectPool).ArrayNum;
  pFVar4 = pFVar32 + (longlong)iVar37 * 8;
  while( true ) {
    if ((this->DrawIndirectPool).ArrayNum != iVar37) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry,TDefaultDelete<FNiagaraGPUInstanceCountManager::FIndirectArgsPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_4d8);
    }
    if (pFVar32 == pFVar4) break;
    *(undefined4 *)(*(longlong *)pFVar32 + 0x34) = 0;
    pvVar19 = (void *)(*(longlong *)pFVar32 + 0x38);
    if (pvVar19 <= (void *)(*(longlong *)pFVar32 + 0x40U)) {
      memset(pvVar19,0,8);
    }
    pFVar32 = pFVar32 + 8;
  }
  return;
}

// AcquireCulledEntry @ 14938f2f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall
FNiagaraGPUInstanceCountManager::AcquireCulledEntry(FNiagaraGPUInstanceCountManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->bAcquiredCulledCounts != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAcquiredCulledCounts",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  LOCK();
  paVar1 = &this->RequiredCulledCounts;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  return (uint)aVar2;
}

