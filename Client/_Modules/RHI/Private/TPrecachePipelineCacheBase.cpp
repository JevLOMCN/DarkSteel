// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 22

// TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState> @ 145c84c20

TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
* __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,EType param_1,uint param_2)

{
  int *piVar1;
  TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType local_res8;
  
  this->PSOType = param_1;
  piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
  (this->PrecachePSOsRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  iVar8 = 0;
  (this->PrecachedPSOInitializers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecachedPSOInitializers).ArrayNum = 0;
  (this->PrecachedPSOInitializers).ArrayMax = 0;
  *(undefined8 *)&this->PrecachedPSOInitializerData = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x8 = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x20 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x28 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x34 = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x40 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x48 = 0;
  this->ActiveCompileCount = 0;
  this->HighPriorityCompileCount = 0;
  this_00 = &this->InMemoryPSOIndices;
  this->HighestPriorityCompileCount = 0;
  (this->PrecachedPSOsToCleanup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecachedPSOsToCleanup).ArrayNum = 0;
  *piVar1 = 0;
  (this_00->Storage).Data = (FScriptContainerElement *)0x0;
  (this->InMemoryPSOIndices).Capacity = 0;
  (this->InMemoryPSOIndices).Count = 0;
  (this->InMemoryPSOIndices).Head = 0;
  (this->InMemoryPSOIndices).Tail = 0;
  this->MaxInMemoryPSOs = param_2;
  bVar5 = ShouldKeepPrecachedPSOsInMemory();
  if (((bVar5) && (param_2 != 0)) && ((this->InMemoryPSOIndices).Capacity < (int)param_2)) {
    uVar6 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
    iVar2 = (this->InMemoryPSOIndices).Count;
    iVar9 = (int)(uVar6 >> 2);
    if (iVar9 < (int)param_2) {
      iVar9 = 0x7fffffff;
    }
    if (iVar2 != 0) {
      iVar7 = (this->InMemoryPSOIndices).Tail;
      iVar3 = (this->InMemoryPSOIndices).Head;
      if (iVar3 < iVar7) {
        if ((iVar3 != 0) && (0 < iVar2)) {
          do {
            iVar7 = (this->InMemoryPSOIndices).Head;
            pFVar4 = (this_00->Storage).Data;
            iVar3 = iVar2 - iVar8;
            if (iVar7 < iVar2 - iVar8) {
              iVar3 = iVar7;
            }
            memmove(pFVar4 + (longlong)iVar8 * 4,pFVar4 + ((longlong)iVar7 + (longlong)iVar8) * 4,
                    (longlong)iVar3 << 2);
            iVar8 = iVar8 + iVar3;
          } while (iVar8 < iVar2);
        }
      }
      else {
        local_res8.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,iVar7,4);
        memmove(local_res8.Data,(this_00->Storage).Data,
                (longlong)(this->InMemoryPSOIndices).Tail << 2);
        iVar2 = (this->InMemoryPSOIndices).Head;
        iVar7 = (this->InMemoryPSOIndices).Capacity - iVar2;
        if ((iVar2 != 0) && (0 < iVar7)) {
          do {
            iVar2 = (this->InMemoryPSOIndices).Head;
            pFVar4 = (this_00->Storage).Data;
            iVar3 = iVar7 - iVar8;
            if (iVar2 < iVar7 - iVar8) {
              iVar3 = iVar2;
            }
            memmove(pFVar4 + (longlong)iVar8 * 4,pFVar4 + ((longlong)iVar2 + (longlong)iVar8) * 4,
                    (longlong)iVar3 << 2);
            iVar8 = iVar8 + iVar3;
          } while (iVar8 < iVar7);
        }
        memmove((this_00->Storage).Data + (longlong)iVar7 * 4,local_res8.Data,
                (longlong)(this->InMemoryPSOIndices).Tail << 2);
        if (local_res8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res8.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this_00->Storage,(this->InMemoryPSOIndices).Count,iVar9,4);
    (this->InMemoryPSOIndices).Capacity = iVar9;
    (this->InMemoryPSOIndices).Tail = (this->InMemoryPSOIndices).Count;
    (this->InMemoryPSOIndices).Head = 0;
  }
  if (*piVar1 < 100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,100,&(this->PrecachedPSOsToCleanup).AllocatorInstance,
               (this->PrecachedPSOsToCleanup).ArrayNum,piVar1);
  }
  return this;
}

// TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState> @ 145c84e70

TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
* __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,EType param_1,uint param_2)

{
  int *piVar1;
  TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ulong64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType local_res8;
  
  this->PSOType = param_1;
  piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
  (this->PrecachePSOsRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  iVar8 = 0;
  (this->PrecachedPSOInitializers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecachedPSOInitializers).ArrayNum = 0;
  (this->PrecachedPSOInitializers).ArrayMax = 0;
  *(undefined8 *)&this->PrecachedPSOInitializerData = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x8 = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x20 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x28 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x34 = 0;
  *(undefined8 *)&(this->PrecachedPSOInitializerData).field_0x40 = 0;
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x48 = 0;
  this->ActiveCompileCount = 0;
  this->HighPriorityCompileCount = 0;
  this_00 = &this->InMemoryPSOIndices;
  this->HighestPriorityCompileCount = 0;
  (this->PrecachedPSOsToCleanup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecachedPSOsToCleanup).ArrayNum = 0;
  *piVar1 = 0;
  (this_00->Storage).Data = (FScriptContainerElement *)0x0;
  (this->InMemoryPSOIndices).Capacity = 0;
  (this->InMemoryPSOIndices).Count = 0;
  (this->InMemoryPSOIndices).Head = 0;
  (this->InMemoryPSOIndices).Tail = 0;
  this->MaxInMemoryPSOs = param_2;
  bVar5 = ShouldKeepPrecachedPSOsInMemory();
  if (((bVar5) && (param_2 != 0)) && ((this->InMemoryPSOIndices).Capacity < (int)param_2)) {
    uVar6 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
    iVar2 = (this->InMemoryPSOIndices).Count;
    iVar9 = (int)(uVar6 >> 2);
    if (iVar9 < (int)param_2) {
      iVar9 = 0x7fffffff;
    }
    if (iVar2 != 0) {
      iVar7 = (this->InMemoryPSOIndices).Tail;
      iVar3 = (this->InMemoryPSOIndices).Head;
      if (iVar3 < iVar7) {
        if ((iVar3 != 0) && (0 < iVar2)) {
          do {
            iVar7 = (this->InMemoryPSOIndices).Head;
            pFVar4 = (this_00->Storage).Data;
            iVar3 = iVar2 - iVar8;
            if (iVar7 < iVar2 - iVar8) {
              iVar3 = iVar7;
            }
            memmove(pFVar4 + (longlong)iVar8 * 4,pFVar4 + ((longlong)iVar7 + (longlong)iVar8) * 4,
                    (longlong)iVar3 << 2);
            iVar8 = iVar8 + iVar3;
          } while (iVar8 < iVar2);
        }
      }
      else {
        local_res8.Data = (FScriptContainerElement *)0x0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,iVar7,4);
        memmove(local_res8.Data,(this_00->Storage).Data,
                (longlong)(this->InMemoryPSOIndices).Tail << 2);
        iVar2 = (this->InMemoryPSOIndices).Head;
        iVar7 = (this->InMemoryPSOIndices).Capacity - iVar2;
        if ((iVar2 != 0) && (0 < iVar7)) {
          do {
            iVar2 = (this->InMemoryPSOIndices).Head;
            pFVar4 = (this_00->Storage).Data;
            iVar3 = iVar7 - iVar8;
            if (iVar2 < iVar7 - iVar8) {
              iVar3 = iVar2;
            }
            memmove(pFVar4 + (longlong)iVar8 * 4,pFVar4 + ((longlong)iVar2 + (longlong)iVar8) * 4,
                    (longlong)iVar3 << 2);
            iVar8 = iVar8 + iVar3;
          } while (iVar8 < iVar7);
        }
        memmove((this_00->Storage).Data + (longlong)iVar7 * 4,local_res8.Data,
                (longlong)(this->InMemoryPSOIndices).Tail << 2);
        if (local_res8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_res8.Data);
        }
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this_00->Storage,(this->InMemoryPSOIndices).Count,iVar9,4);
    (this->InMemoryPSOIndices).Capacity = iVar9;
    (this->InMemoryPSOIndices).Tail = (this->InMemoryPSOIndices).Count;
    (this->InMemoryPSOIndices).Head = 0;
  }
  if (*piVar1 < 100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,100,&(this->PrecachedPSOsToCleanup).AllocatorInstance,
               (this->PrecachedPSOsToCleanup).ArrayNum,piVar1);
  }
  return this;
}

// ~TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState> @ 145c89950

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::
~TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  WaitTasksComplete(this);
  (this->InMemoryPSOIndices).Count = 0;
  (this->InMemoryPSOIndices).Head = 0;
  (this->InMemoryPSOIndices).Tail = 0;
  if ((this->InMemoryPSOIndices).Capacity != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&(this->InMemoryPSOIndices).Storage,0,0,4);
    (this->InMemoryPSOIndices).Capacity = 0;
  }
  pFVar1 = (this->InMemoryPSOIndices).Storage.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrecachedPSOsToCleanup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PrecachedPSOInitializerData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecachedPSOInitializerData);
  pFVar1 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145c899f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// ~TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState> @ 145c89a40

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::
~TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  WaitTasksComplete(this);
  (this->InMemoryPSOIndices).Count = 0;
  (this->InMemoryPSOIndices).Head = 0;
  (this->InMemoryPSOIndices).Tail = 0;
  if ((this->InMemoryPSOIndices).Capacity != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&(this->InMemoryPSOIndices).Storage,0,0,4);
    (this->InMemoryPSOIndices).Capacity = 0;
  }
  pFVar1 = (this->InMemoryPSOIndices).Storage.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrecachedPSOsToCleanup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PrecachedPSOInitializerData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PrecachedPSOInitializerData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecachedPSOInitializerData);
  pFVar1 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145c89ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// GetPrecachingState @ 145cab280

EPSOPrecacheResult __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::GetPrecachingState
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,FComputePipelineStateInitializer *param_1)

{
  EPSOPrecacheStateMask EVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  EPSOPrecacheResult EVar5;
  FPrecacheTask *pFVar6;
  
  lVar3 = param_1->ComputeShader->_padding_;
  AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  pFVar6 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,(ulonglong)(uint)lVar3);
  if (pFVar6 == (FPrecacheTask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    return Missed;
  }
  EVar1 = pFVar6->StateMask;
  ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  if ((EVar1 & (Failed|Succeeded)) == None) {
    return Active;
  }
  if ((EVar1 & (Failed|Succeeded)) == (Failed|Succeeded)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(CompilationState, CompletionMask) && !EnumHasAllFlags(CompilationState, CompletionMask)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xaa0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
  }
  EVar5 = Complete;
  if ((EVar1 & Failed) != None) {
    EVar5 = NotSupported;
  }
  return EVar5;
}

// GetPrecachingState @ 145cab350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

EPSOPrecacheResult __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::GetPrecachingState
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,FGraphicsPipelineStateInitializer *param_1)

{
  EPSOPrecacheStateMask EVar1;
  code *pcVar2;
  bool bVar3;
  EPSOPrecacheResult EVar4;
  ulong64 uVar5;
  FPrecacheTask *pFVar6;
  
  uVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))();
  AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  pFVar6 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,uVar5);
  if (pFVar6 == (FPrecacheTask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    return Missed;
  }
  EVar1 = pFVar6->StateMask;
  ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  if ((EVar1 & (Failed|Succeeded)) == None) {
    return Active;
  }
  if ((EVar1 & (Failed|Succeeded)) == (Failed|Succeeded)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(CompilationState, CompletionMask) && !EnumHasAllFlags(CompilationState, CompletionMask)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xaa0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = Complete;
  if ((EVar1 & Failed) != None) {
    EVar4 = NotSupported;
  }
  return EVar4;
}

// GetPrecachingStateInternal @ 145cab430

EPSOPrecacheResult __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::GetPrecachingStateInternal
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,ulong64 param_1,bool param_2,bool *param_3)

{
  FPlatformRWLock *SRWLock;
  EPSOPrecacheStateMask EVar1;
  code *pcVar2;
  EPSOPrecacheStateMask EVar3;
  EPSOPrecacheResult EVar4;
  FPrecacheTask *pFVar5;
  bool bVar6;
  
  SRWLock = &this->PrecachePSOsRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar5 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,param_1);
  if (pFVar5 == (FPrecacheTask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return Missed;
  }
  if (param_2) {
    EVar3 = pFVar5->StateMask;
    do {
      LOCK();
      EVar1 = pFVar5->StateMask;
      bVar6 = EVar3 == EVar1;
      if (bVar6) {
        pFVar5->StateMask = EVar3 | UsedForRendering;
        EVar1 = EVar3;
      }
      EVar3 = EVar1;
      UNLOCK();
    } while (!bVar6);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if ((EVar3 & UsedForRendering) == None) {
      bVar6 = true;
      goto LAB_145cab4d2;
    }
  }
  else {
    EVar3 = pFVar5->StateMask;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  bVar6 = false;
LAB_145cab4d2:
  *param_3 = bVar6;
  if ((EVar3 & (Failed|Succeeded)) == None) {
    EVar4 = Active;
  }
  else {
    if (((EVar3 & (Failed|Succeeded)) == (Failed|Succeeded)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(CompilationState, CompletionMask) && !EnumHasAllFlags(CompilationState, CompletionMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0xaa0,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    EVar4 = Complete;
    if ((EVar3 & Failed) != None) {
      EVar4 = NotSupported;
    }
  }
  return EVar4;
}

// GetPrecachingStateInternal @ 145cab540

/* WARNING: Enum "Type": Some values do not have unique names */

EPSOPrecacheResult __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::GetPrecachingStateInternal
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,ulong64 param_1,bool param_2,bool *param_3)

{
  FPlatformRWLock *SRWLock;
  EPSOPrecacheStateMask EVar1;
  code *pcVar2;
  EPSOPrecacheStateMask EVar3;
  EPSOPrecacheResult EVar4;
  FPrecacheTask *pFVar5;
  bool bVar6;
  
  SRWLock = &this->PrecachePSOsRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar5 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,param_1);
  if (pFVar5 == (FPrecacheTask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return Missed;
  }
  if (param_2) {
    EVar3 = pFVar5->StateMask;
    do {
      LOCK();
      EVar1 = pFVar5->StateMask;
      bVar6 = EVar3 == EVar1;
      if (bVar6) {
        pFVar5->StateMask = EVar3 | UsedForRendering;
        EVar1 = EVar3;
      }
      EVar3 = EVar1;
      UNLOCK();
    } while (!bVar6);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if ((EVar3 & UsedForRendering) == None) {
      bVar6 = true;
      goto LAB_145cab5e2;
    }
  }
  else {
    EVar3 = pFVar5->StateMask;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  bVar6 = false;
LAB_145cab5e2:
  *param_3 = bVar6;
  if ((EVar3 & (Failed|Succeeded)) == None) {
    EVar4 = Active;
  }
  else {
    if (((EVar3 & (Failed|Succeeded)) == (Failed|Succeeded)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(CompilationState, CompletionMask) && !EnumHasAllFlags(CompilationState, CompletionMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0xaa0,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    EVar4 = Complete;
    if ((EVar3 & Failed) != None) {
      EVar4 = NotSupported;
    }
  }
  return EVar4;
}

// HasPSOBeenRequested @ 145cb0170

bool __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::HasPSOBeenRequested
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,FComputePipelineStateInitializer *param_1,ulong64 param_2,
          FPSOPrecacheRequestResult *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPrecacheTask *pFVar7;
  FBaseGraphTask *pFVar8;
  
  pFVar7 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,param_2);
  if (pFVar7 == (FPrecacheTask *)0x0) {
    return false;
  }
  if ((pFVar7->StateMask & (Failed|Succeeded)) == None) {
    param_3->RequestID = pFVar7->RequestID;
    pFVar8 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)pFVar7->PipelineState);
    pFVar3 = (param_3->AsyncCompileEvent).Reference;
    if (pFVar3 != pFVar8) {
      (param_3->AsyncCompileEvent).Reference = pFVar8;
      if (pFVar8 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar3->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
    }
    if (param_3.Type == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.RequestID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa79,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  return true;
}

// HasPSOBeenRequested @ 145cb0220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::HasPSOBeenRequested
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,FGraphicsPipelineStateInitializer *param_1,ulong64 param_2,
          FPSOPrecacheRequestResult *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FPrecacheTask *pFVar7;
  FBaseGraphTask *pFVar8;
  
  pFVar7 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,param_2);
  if (pFVar7 == (FPrecacheTask *)0x0) {
    return false;
  }
  if ((pFVar7->StateMask & (Failed|Succeeded)) == None) {
    param_3->RequestID = pFVar7->RequestID;
    pFVar8 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)pFVar7->PipelineState);
    pFVar3 = (param_3->AsyncCompileEvent).Reference;
    if (pFVar3 != pFVar8) {
      (param_3->AsyncCompileEvent).Reference = pFVar8;
      if (pFVar8 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar3->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
    }
    if (param_3.Type == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.RequestID.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa79,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  return true;
}

// PrecacheFinished @ 145cb4840

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::PrecacheFinished(TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                   *this,FComputePipelineStateInitializer *param_1,bool param_2)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  EPSOPrecacheStateMask EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EPSOPrecacheStateMask EVar7;
  int iVar8;
  FPrecacheTask *pFVar9;
  ulong64 local_18 [2];
  
  local_18[0] = (ulong64)(uint)param_1->ComputeShader->_padding_;
  AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  pFVar9 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,local_18[0]);
  if ((pFVar9 == (FPrecacheTask *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa1a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar7 = pFVar9->StateMask;
  do {
    LOCK();
    EVar3 = pFVar9->StateMask;
    bVar6 = EVar7 == EVar3;
    if (bVar6) {
      pFVar9->StateMask = EVar7 | !param_2 * '\x02' + (Succeeded|Compiling);
      EVar3 = EVar7;
    }
    EVar7 = EVar3;
    UNLOCK();
  } while (!bVar6);
  bVar6 = ShouldKeepPrecachedPSOsInMemory();
  if (!bVar6) {
    pTVar2 = &this->PrecachedPSOsToCleanup;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar4 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->PrecachedPSOsToCleanup).ArrayNum;
    piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PrecachedPSOsToCleanup).ArrayNum = iVar8 + 1;
    *(ulong64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  if ((EVar7 & (Boosted|Compiling)) == (Boosted|Compiling)) {
    if ((EVar7 & HighestPri) == None) {
      LOCK();
      piVar1 = &this->HighPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xaba,L""), bVar6)) goto code_r0x000145cb49f6;
    }
    else {
      LOCK();
      piVar1 = &this->HighestPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighestPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xac7,L""), bVar6)) {
code_r0x000145cb49f6:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  LOCK();
  this->ActiveCompileCount = this->ActiveCompileCount + -1;
  UNLOCK();
  return;
}

// PrecacheFinished @ 145cb4a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::PrecacheFinished(TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                   *this,FGraphicsPipelineStateInitializer *param_1,bool param_2)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  EPSOPrecacheStateMask EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EPSOPrecacheStateMask EVar7;
  int iVar8;
  FPrecacheTask *pFVar9;
  ulong64 local_18 [2];
  
  local_18[0] = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))();
  AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  pFVar9 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
           ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                   *)&this->PrecachedPSOInitializerData,local_18[0]);
  if ((pFVar9 == (FPrecacheTask *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa1a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar7 = pFVar9->StateMask;
  do {
    LOCK();
    EVar3 = pFVar9->StateMask;
    bVar6 = EVar7 == EVar3;
    if (bVar6) {
      pFVar9->StateMask = EVar7 | !param_2 * '\x02' + (Succeeded|Compiling);
      EVar3 = EVar7;
    }
    EVar7 = EVar3;
    UNLOCK();
  } while (!bVar6);
  bVar6 = ShouldKeepPrecachedPSOsInMemory();
  if (!bVar6) {
    pTVar2 = &this->PrecachedPSOsToCleanup;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar4 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->PrecachedPSOsToCleanup).ArrayNum;
    piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PrecachedPSOsToCleanup).ArrayNum = iVar8 + 1;
    *(ulong64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  if ((EVar7 & (Boosted|Compiling)) == (Boosted|Compiling)) {
    if ((EVar7 & HighestPri) == None) {
      LOCK();
      piVar1 = &this->HighPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xaba,L""), bVar6)) goto code_r0x000145cb4be4;
    }
    else {
      LOCK();
      piVar1 = &this->HighestPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighestPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xac7,L""), bVar6)) {
code_r0x000145cb4be4:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  LOCK();
  this->ActiveCompileCount = this->ActiveCompileCount + -1;
  UNLOCK();
  return;
}

// ProcessDelayedCleanup @ 145cb5820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::ProcessDelayedCleanup
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  FPSOPrecacheAsyncTask *this_00;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ActiveComputePSOPrecacheRequests> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_HighPriorityComputePSOPrecacheRequests> FVar16;
  FThreadSafeStaticStat<FStat_STAT_HighestPriorityComputePSOPrecacheRequests> FVar17;
  FCompletionState *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount> FVar19;
  int iVar20;
  ulonglong *puVar21;
  undefined1 *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_b8;
  FPlatformRWLock *local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  iVar11 = this->ActiveCompileCount;
  FVar13 = StatPtr_STAT_ActiveComputePSOPrecacheRequests;
  if (StatPtr_STAT_ActiveComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_ActiveComputePSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ActiveComputePSOPrecacheRequests");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ActiveComputePSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveComputePSOPrecacheRequests,
                        *pFVar12,L"Active Compute PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar3;
    local_a8.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_a8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_a8);
    FStatsTrace::Set(&local_res10,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  iVar11 = this->HighPriorityCompileCount;
  FVar16 = StatPtr_STAT_HighPriorityComputePSOPrecacheRequests;
  if (StatPtr_STAT_HighPriorityComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighPriorityComputePSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_HighPriorityComputePSOPrecacheRequests");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_HighPriorityComputePSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HighPriorityComputePSOPrecacheRequests,*pFVar12,
                        L"High Priority Compute PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar16;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_98.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar3;
    local_98.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_98.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_98);
    FStatsTrace::Set(&local_res18,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  iVar11 = this->HighestPriorityCompileCount;
  FVar17 = StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests;
  if (StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighestPriorityComputePSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_HighestPriorityComputePSOPrecacheRequests");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_HighestPriorityComputePSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HighestPriorityComputePSOPrecacheRequests,*pFVar12,
                        L"Highest Priority Compute PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar17;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_88.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res20 = FVar3;
    local_88.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_88.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_88);
    FStatsTrace::Set(&local_res20,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  local_b0 = &this->PrecachePSOsRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_b0);
  uVar25 = 0;
  if (0 < (this->PrecachedPSOsToCleanup).ArrayNum) {
    pTVar2 = &this->PrecachedPSOsToCleanup;
    uVar27 = uVar25;
    do {
      puVar24 = (ulonglong *)0x0;
      uVar26 = (uint)uVar27;
      uVar10 = 0;
      if ((int)uVar26 < (this->PrecachedPSOsToCleanup).ArrayNum) {
        uVar10 = ~uVar26 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar27 = *(ulonglong *)((pTVar2->AllocatorInstance).Data + uVar25);
      puVar23 = puVar24;
      if (*(int *)&(this->PrecachedPSOInitializerData).field_0x8 !=
          *(int *)&(this->PrecachedPSOInitializerData).field_0x34) {
        puVar4 = *(undefined1 **)&(this->PrecachedPSOInitializerData).field_0x40;
        puVar22 = &(this->PrecachedPSOInitializerData).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar22 = puVar4;
        }
        iVar11 = *(int *)(puVar22 +
                         ((ulonglong)(*(int *)&(this->PrecachedPSOInitializerData).field_0x48 - 1) &
                         (uVar27 >> 0x20) * 0x17 + uVar27) * 4);
        if (iVar11 != -1) {
          do {
            puVar21 = (ulonglong *)
                      ((longlong)iVar11 * 0x20 + *(longlong *)&this->PrecachedPSOInitializerData);
            if (*puVar21 == uVar27) {
              puVar23 = puVar21 + 1;
              if (puVar21 == (ulonglong *)0x0) {
                puVar23 = puVar24;
              }
              if ((puVar23 != (ulonglong *)0x0) &&
                 ((bVar9 = ShouldKeepPrecachedPSOsInMemory(), bVar9 ||
                  ((*(byte *)((longlong)puVar23 + 0xc) & 6) != 0)))) goto LAB_145cb5cbd;
              break;
            }
            iVar11 = (int)puVar21[3];
          } while (iVar11 != -1);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindResult && (ShouldKeepPrecachedPSOsInMemory() || IsCompilationDone((FindResult->ReadPSOPrecacheState())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa46,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (puVar23 == (ulonglong *)0x0) {
LAB_145cb5f24:
        uVar10 = 0;
        if ((int)uVar26 < (this->PrecachedPSOsToCleanup).ArrayNum) {
          uVar10 = ~uVar26 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->PrecachedPSOsToCleanup).ArrayNum;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        iVar20 = ~uVar26 + iVar11;
        if (1 < iVar20) {
          iVar20 = 1;
        }
        if (iVar20 != 0) {
          memmove(pFVar7 + (longlong)(int)uVar26 * 8,pFVar7 + (longlong)(iVar11 - iVar20) * 8,
                  (longlong)iVar20 << 3);
        }
        piVar1 = &(this->PrecachedPSOsToCleanup).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PrecachedPSOsToCleanup).ArrayNum,
                   &(this->PrecachedPSOsToCleanup).ArrayMax);
        uVar26 = uVar26 - 1;
        uVar25 = uVar25 - 8;
      }
      else {
LAB_145cb5cbd:
        uVar27 = *puVar23;
        if (uVar27 == 0) goto LAB_145cb5f24;
        bVar9 = IsInParallelRHIThread();
        if ((bVar9) || (GEnablePSOAsyncCacheConsolidation == false)) {
          puVar24 = (ulonglong *)&DAT_00000010;
        }
        plVar5 = *(longlong **)(uVar27 + 0x10 + (longlong)puVar24);
        if (plVar5 == (longlong *)0x0) {
LAB_145cb5d5f:
          bVar9 = FPipelineStateAsync::WaitCompletion((FPipelineStateAsync *)*puVar23);
          if ((bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!FindResult->PipelineState->WaitCompletion()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0xa50,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar6 = (undefined8 *)*puVar23;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
          }
          *puVar23 = 0;
          bVar9 = ShouldKeepPrecachedPSOsInMemory();
          if (bVar9) {
            FVar19 = StatPtr_STAT_InMemoryPrecachedPSOCount;
            if (StatPtr_STAT_InMemoryPrecachedPSOCount ==
                (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)0x0) {
              pFVar12 = ::FName::FName(local_50,"STAT_InMemoryPrecachedPSOCount");
              FVar19 = (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_InMemoryPrecachedPSOCount,*pFVar12,
                                  L"Precached PSOs Kept In Memory","STATGROUP_PipelineStateCache",
                                  "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar3 = *(FName *)FVar19;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_78.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
              local_78.StatData.Pad[0] = '\x01';
              local_78.StatData.Pad[1] = '\0';
              local_78.StatData.Pad[2] = '\0';
              local_78.StatData.Pad[3] = '\0';
              local_78.StatData.Pad[4] = '\0';
              local_78.StatData.Pad[5] = '\0';
              local_78.StatData.Pad[6] = '\0';
              local_78.StatData.Pad[7] = '\0';
              local_b8 = FVar3;
              local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_78);
              FStatsTrace::Add(&local_b8,-1);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          goto LAB_145cb5f24;
        }
        if ((*plVar5 == 0) || (*(char *)(*plVar5 + 0xd0) != '\0')) {
          if ((*(longlong *)(uVar27 + 0x10 + (longlong)puVar24) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)(*(longlong *)(uVar27 + 0x10 + (longlong)puVar24) + 8) != 0) {
            pFVar18 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                                ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                                 ((longlong)puVar24 + uVar27 + 0x10));
            this_00 = (pFVar18->PrecompileTask).Ptr;
            if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145cb5fd3;
            FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
          }
          goto LAB_145cb5d5f;
        }
      }
LAB_145cb5fd3:
      uVar27 = (ulonglong)(uVar26 + 1);
      uVar25 = uVar25 + 8;
    } while ((int)(uVar26 + 1) < (this->PrecachedPSOsToCleanup).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000145cb5ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)local_b0);
  return;
}

// ProcessDelayedCleanup @ 145cb6010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::ProcessDelayedCleanup
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  FPSOPrecacheAsyncTask *this_00;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ActiveGraphicsPSOPrecacheRequests> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_HighPriorityGraphicsPSOPrecacheRequests> FVar16;
  FThreadSafeStaticStat<FStat_STAT_HighestPriorityGraphicsPSOPrecacheRequests> FVar17;
  FCompletionState *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount> FVar19;
  int iVar20;
  ulonglong *puVar21;
  undefined1 *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_b8;
  FPlatformRWLock *local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  iVar11 = this->ActiveCompileCount;
  FVar13 = StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests;
  if (StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_ActiveGraphicsPSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ActiveGraphicsPSOPrecacheRequests");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ActiveGraphicsPSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveGraphicsPSOPrecacheRequests
                        ,*pFVar12,L"Active Graphics PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a8.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar3;
    local_a8.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_a8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_a8);
    FStatsTrace::Set(&local_res10,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  iVar11 = this->HighPriorityCompileCount;
  FVar16 = StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests;
  if (StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighPriorityGraphicsPSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_HighPriorityGraphicsPSOPrecacheRequests");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_HighPriorityGraphicsPSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HighPriorityGraphicsPSOPrecacheRequests,*pFVar12,
                        L"High Priority Graphics PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar16;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_98.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar3;
    local_98.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_98.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_98);
    FStatsTrace::Set(&local_res18,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  iVar11 = this->HighestPriorityCompileCount;
  FVar17 = StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests;
  if (StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests ==
      (FThreadSafeStaticStat<FStat_STAT_HighestPriorityGraphicsPSOPrecacheRequests>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_HighestPriorityGraphicsPSOPrecacheRequests");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_HighestPriorityGraphicsPSOPrecacheRequests>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_HighestPriorityGraphicsPSOPrecacheRequests,*pFVar12,
                        L"Highest Priority Graphics PSO Precache Requests",
                        "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar17;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_88.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res20 = FVar3;
    local_88.StatData.Pad = (uchar  [8])(longlong)iVar11;
    local_88.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_88);
    FStatsTrace::Set(&local_res20,(longlong)iVar11);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  local_b0 = &this->PrecachePSOsRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_b0);
  uVar25 = 0;
  if (0 < (this->PrecachedPSOsToCleanup).ArrayNum) {
    pTVar2 = &this->PrecachedPSOsToCleanup;
    uVar27 = uVar25;
    do {
      puVar24 = (ulonglong *)0x0;
      uVar26 = (uint)uVar27;
      uVar10 = 0;
      if ((int)uVar26 < (this->PrecachedPSOsToCleanup).ArrayNum) {
        uVar10 = ~uVar26 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar27 = *(ulonglong *)((pTVar2->AllocatorInstance).Data + uVar25);
      puVar23 = puVar24;
      if (*(int *)&(this->PrecachedPSOInitializerData).field_0x8 !=
          *(int *)&(this->PrecachedPSOInitializerData).field_0x34) {
        puVar4 = *(undefined1 **)&(this->PrecachedPSOInitializerData).field_0x40;
        puVar22 = &(this->PrecachedPSOInitializerData).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar22 = puVar4;
        }
        iVar11 = *(int *)(puVar22 +
                         ((ulonglong)(*(int *)&(this->PrecachedPSOInitializerData).field_0x48 - 1) &
                         (uVar27 >> 0x20) * 0x17 + uVar27) * 4);
        if (iVar11 != -1) {
          do {
            puVar21 = (ulonglong *)
                      ((longlong)iVar11 * 0x20 + *(longlong *)&this->PrecachedPSOInitializerData);
            if (*puVar21 == uVar27) {
              puVar23 = puVar21 + 1;
              if (puVar21 == (ulonglong *)0x0) {
                puVar23 = puVar24;
              }
              if ((puVar23 != (ulonglong *)0x0) &&
                 ((bVar9 = ShouldKeepPrecachedPSOsInMemory(), bVar9 ||
                  ((*(byte *)((longlong)puVar23 + 0xc) & 6) != 0)))) goto LAB_145cb64ad;
              break;
            }
            iVar11 = (int)puVar21[3];
          } while (iVar11 != -1);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindResult && (ShouldKeepPrecachedPSOsInMemory() || IsCompilationDone((FindResult->ReadPSOPrecacheState())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0xa46,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (puVar23 == (ulonglong *)0x0) {
LAB_145cb6714:
        uVar10 = 0;
        if ((int)uVar26 < (this->PrecachedPSOsToCleanup).ArrayNum) {
          uVar10 = ~uVar26 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->PrecachedPSOsToCleanup).ArrayNum;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        iVar20 = ~uVar26 + iVar11;
        if (1 < iVar20) {
          iVar20 = 1;
        }
        if (iVar20 != 0) {
          memmove(pFVar7 + (longlong)(int)uVar26 * 8,pFVar7 + (longlong)(iVar11 - iVar20) * 8,
                  (longlong)iVar20 << 3);
        }
        piVar1 = &(this->PrecachedPSOsToCleanup).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PrecachedPSOsToCleanup).ArrayNum,
                   &(this->PrecachedPSOsToCleanup).ArrayMax);
        uVar26 = uVar26 - 1;
        uVar25 = uVar25 - 8;
      }
      else {
LAB_145cb64ad:
        uVar27 = *puVar23;
        if (uVar27 == 0) goto LAB_145cb6714;
        bVar9 = IsInParallelRHIThread();
        if ((bVar9) || (GEnablePSOAsyncCacheConsolidation == false)) {
          puVar24 = (ulonglong *)&DAT_00000010;
        }
        plVar5 = *(longlong **)(uVar27 + 0x10 + (longlong)puVar24);
        if (plVar5 == (longlong *)0x0) {
LAB_145cb654f:
          bVar9 = FPipelineStateAsync::WaitCompletion((FPipelineStateAsync *)*puVar23);
          if ((bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!FindResult->PipelineState->WaitCompletion()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0xa50,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar6 = (undefined8 *)*puVar23;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
          }
          *puVar23 = 0;
          bVar9 = ShouldKeepPrecachedPSOsInMemory();
          if (bVar9) {
            FVar19 = StatPtr_STAT_InMemoryPrecachedPSOCount;
            if (StatPtr_STAT_InMemoryPrecachedPSOCount ==
                (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)0x0) {
              pFVar12 = ::FName::FName(local_50,"STAT_InMemoryPrecachedPSOCount");
              FVar19 = (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_InMemoryPrecachedPSOCount,*pFVar12,
                                  L"Precached PSOs Kept In Memory","STATGROUP_PipelineStateCache",
                                  "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar3 = *(FName *)FVar19;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_78.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
              local_78.StatData.Pad[0] = '\x01';
              local_78.StatData.Pad[1] = '\0';
              local_78.StatData.Pad[2] = '\0';
              local_78.StatData.Pad[3] = '\0';
              local_78.StatData.Pad[4] = '\0';
              local_78.StatData.Pad[5] = '\0';
              local_78.StatData.Pad[6] = '\0';
              local_78.StatData.Pad[7] = '\0';
              local_b8 = FVar3;
              local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_78);
              FStatsTrace::Add(&local_b8,-1);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          goto LAB_145cb6714;
        }
        if ((*plVar5 == 0) || (*(char *)(*plVar5 + 0xd0) != '\0')) {
          if ((*(longlong *)(uVar27 + 0x10 + (longlong)puVar24) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)(*(longlong *)(uVar27 + 0x10 + (longlong)puVar24) + 8) != 0) {
            pFVar18 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                                ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                                 ((longlong)puVar24 + uVar27 + 0x10));
            this_00 = (pFVar18->PrecompileTask).Ptr;
            if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145cb67c3;
            FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
          }
          goto LAB_145cb654f;
        }
      }
LAB_145cb67c3:
      uVar27 = (ulonglong)(uVar26 + 1);
      uVar25 = uVar25 + 8;
    } while ((int)(uVar26 + 1) < (this->PrecachedPSOsToCleanup).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x000145cb67ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)local_b0);
  return;
}

// RescheduleTaskToHighPriority @ 145cbda80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::RescheduleTaskToHighPriority
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,EPSOPrecacheStateMask param_1,EPSOPrecacheStateMask param_2,
          FComputePipelineState *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  EPSOPrecacheCompileType EVar4;
  int iVar5;
  longlong lVar6;
  FPSOPrecacheAsyncTask *pFVar7;
  FQueuedThreadPool *pFVar8;
  FPSOPrecacheAsyncTask *this_00;
  longlong lVar9;
  EQueuedWorkPriority EVar10;
  byte bVar11;
  
  bVar11 = param_1 >> 4 & 1;
  if (((param_2 & HighestPri) != None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(PrevState, EPSOPrecacheStateMask::HighestPri)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x920,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((1 < (byte)LogRHI._0_1_) && ((param_2 & (Failed|Succeeded)) != None)) {
    UE::Logging::Private::BasicLog<2>
              (&`protected:_void___cdecl_TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::RescheduleTaskToHighPriority(EPSOPrecacheStateMask,EPSOPrecacheStateMask,FComputePipelineState*___ptr64)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar5 = FPSOPrecacheThreadPool::GetDesiredPoolSize();
  if (0 < iVar5) {
    bVar3 = IsInParallelRHIThread();
    lVar9 = 0x10;
    if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar6 = 0x20;
    }
    lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
    if (((lVar6 == 0) || (*(longlong *)(lVar6 + 8) == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PipelineState->GetPrecompileTask()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x927,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar10 = (bVar11 ^ 1) + Highest;
    bVar3 = IsInParallelRHIThread();
    if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar6 = 0x20;
    }
    lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) {
      bVar3 = IsInParallelRHIThread();
      if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar6 = 0x20;
      }
      lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
      this_00 = (FPSOPrecacheAsyncTask *)0x0;
      pFVar7 = this_00;
      if (lVar6 != 0) {
        pFVar7 = *(FPSOPrecacheAsyncTask **)(lVar6 + 8);
      }
      if (((EQueuedWorkPriority)pFVar7->_padding_ <= EVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrevPriority > NewPriority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x92c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = IsInParallelRHIThread();
      if ((bVar3) || (GEnablePSOAsyncCacheConsolidation == false)) {
        lVar9 = 0x20;
      }
      lVar9 = *(longlong *)((longlong)&param_3->_padding_ + lVar9);
      if (lVar9 != 0) {
        this_00 = *(FPSOPrecacheAsyncTask **)(lVar9 + 8);
      }
      pFVar8 = FPSOPrecacheThreadPool::Get(&GPSOPrecacheThreadPool);
      bVar3 = FPSOPrecacheAsyncTask::Reschedule(this_00,pFVar8,EVar10);
      if (bVar3) {
        EVar4 = GetPSOCompileTypeFromQueuePri(EVar10);
        FPSOCSVStatTracker::SetPriority((FPSOCSVStatTracker *)&param_3->_padding_,EVar4);
      }
    }
  }
  if (bVar11 == 0) {
    LOCK();
    this->HighPriorityCompileCount = this->HighPriorityCompileCount + 1;
    UNLOCK();
  }
  else {
    LOCK();
    this->HighestPriorityCompileCount = this->HighestPriorityCompileCount + 1;
    UNLOCK();
    if ((param_2 & Boosted) != None) {
      LOCK();
      piVar1 = &this->HighPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xaba,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// RescheduleTaskToHighPriority @ 145cbdcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::RescheduleTaskToHighPriority
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,EPSOPrecacheStateMask param_1,EPSOPrecacheStateMask param_2,
          FGraphicsPipelineState *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  EPSOPrecacheCompileType EVar4;
  int iVar5;
  longlong lVar6;
  FPSOPrecacheAsyncTask *pFVar7;
  FQueuedThreadPool *pFVar8;
  FPSOPrecacheAsyncTask *this_00;
  longlong lVar9;
  EQueuedWorkPriority EVar10;
  byte bVar11;
  
  bVar11 = param_1 >> 4 & 1;
  if (((param_2 & HighestPri) != None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(PrevState, EPSOPrecacheStateMask::HighestPri)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x920,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((1 < (byte)LogRHI._0_1_) && ((param_2 & (Failed|Succeeded)) != None)) {
    UE::Logging::Private::BasicLog<2>
              (&`protected:_void___cdecl_TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::RescheduleTaskToHighPriority(EPSOPrecacheStateMask,EPSOPrecacheStateMask,FGraphicsPipelineState*___ptr64)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar5 = FPSOPrecacheThreadPool::GetDesiredPoolSize();
  if (0 < iVar5) {
    bVar3 = IsInParallelRHIThread();
    lVar9 = 0x10;
    if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar6 = 0x20;
    }
    lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
    if (((lVar6 == 0) || (*(longlong *)(lVar6 + 8) == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PipelineState->GetPrecompileTask()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x927,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar10 = (bVar11 ^ 1) + Highest;
    bVar3 = IsInParallelRHIThread();
    if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
      lVar6 = 0x20;
    }
    lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) {
      bVar3 = IsInParallelRHIThread();
      if ((bVar3) || (lVar6 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar6 = 0x20;
      }
      lVar6 = *(longlong *)((longlong)&param_3->_padding_ + lVar6);
      this_00 = (FPSOPrecacheAsyncTask *)0x0;
      pFVar7 = this_00;
      if (lVar6 != 0) {
        pFVar7 = *(FPSOPrecacheAsyncTask **)(lVar6 + 8);
      }
      if (((EQueuedWorkPriority)pFVar7->_padding_ <= EVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrevPriority > NewPriority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x92c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = IsInParallelRHIThread();
      if ((bVar3) || (GEnablePSOAsyncCacheConsolidation == false)) {
        lVar9 = 0x20;
      }
      lVar9 = *(longlong *)((longlong)&param_3->_padding_ + lVar9);
      if (lVar9 != 0) {
        this_00 = *(FPSOPrecacheAsyncTask **)(lVar9 + 8);
      }
      pFVar8 = FPSOPrecacheThreadPool::Get(&GPSOPrecacheThreadPool);
      bVar3 = FPSOPrecacheAsyncTask::Reschedule(this_00,pFVar8,EVar10);
      if (bVar3) {
        EVar4 = GetPSOCompileTypeFromQueuePri(EVar10);
        FPSOCSVStatTracker::SetPriority((FPSOCSVStatTracker *)&param_3->_padding_,EVar4);
      }
    }
  }
  if (bVar11 == 0) {
    LOCK();
    this->HighPriorityCompileCount = this->HighPriorityCompileCount + 1;
    UNLOCK();
  }
  else {
    LOCK();
    this->HighestPriorityCompileCount = this->HighestPriorityCompileCount + 1;
    UNLOCK();
    if ((param_2 & Boosted) != None) {
      LOCK();
      piVar1 = &this->HighPriorityCompileCount;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("HighPriorityCompileCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0xaba,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// SetMaxInMemoryPSOs @ 145cbf4a0

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::SetMaxInMemoryPSOs
          (TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
           *this,uint param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  int iVar11;
  
  bVar7 = ShouldKeepPrecachedPSOsInMemory();
  if ((bVar7) && (this->MaxInMemoryPSOs != param_1)) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    this->MaxInMemoryPSOs = param_1;
    if ((this->InMemoryPSOIndices).Capacity < (int)param_1) {
      uVar10 = FMemory::QuantizeSize((longlong)(int)param_1 << 2,0);
      iVar9 = (int)(uVar10 >> 2);
      if (iVar9 < (int)param_1) {
        iVar9 = 0x7fffffff;
      }
      TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::Grow(&this->InMemoryPSOIndices,iVar9);
    }
    if (this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count) {
      pTVar1 = &this->PrecachedPSOsToCleanup;
      do {
        if (((this->InMemoryPSOIndices).Count < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Count)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                               ,0x248,L"Parameter index %d exceeds container size %d"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(uint *)((this->InMemoryPSOIndices).Storage.Data +
                         (longlong)(this->InMemoryPSOIndices).Head * 4);
        if (((this->InMemoryPSOIndices).Count < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Count)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                               ,0x248,L"Parameter index %d exceeds container size %d"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->InMemoryPSOIndices).Capacity;
        iVar11 = (this->InMemoryPSOIndices).Head + 1;
        if (iVar9 <= iVar11) {
          iVar11 = iVar11 - iVar9;
        }
        piVar2 = &(this->InMemoryPSOIndices).Count;
        *piVar2 = *piVar2 + -1;
        (this->InMemoryPSOIndices).Head = iVar11;
        uVar8 = 0;
        if ((int)uVar4 < (this->PrecachedPSOInitializers).ArrayNum) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar3 = (this->PrecachedPSOInitializers).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
        if (((pFVar5 <= pFVar3) &&
            (pFVar3 < pFVar5 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->PrecachedPSOsToCleanup).ArrayNum;
        if (iVar9 == (this->PrecachedPSOsToCleanup).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,
                             &(this->PrecachedPSOsToCleanup).ArrayMax);
        }
        (this->PrecachedPSOsToCleanup).ArrayNum = iVar9 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             *(undefined8 *)pFVar3;
      } while (this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  }
  return;
}

// SetMaxInMemoryPSOs @ 145cbf710

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::SetMaxInMemoryPSOs
          (TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
           *this,uint param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  int iVar11;
  
  bVar7 = ShouldKeepPrecachedPSOsInMemory();
  if ((bVar7) && (this->MaxInMemoryPSOs != param_1)) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    this->MaxInMemoryPSOs = param_1;
    if ((this->InMemoryPSOIndices).Capacity < (int)param_1) {
      uVar10 = FMemory::QuantizeSize((longlong)(int)param_1 << 2,0);
      iVar9 = (int)(uVar10 >> 2);
      if (iVar9 < (int)param_1) {
        iVar9 = 0x7fffffff;
      }
      TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::Grow(&this->InMemoryPSOIndices,iVar9);
    }
    if (this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count) {
      pTVar1 = &this->PrecachedPSOsToCleanup;
      do {
        if (((this->InMemoryPSOIndices).Count < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Count)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                               ,0x248,L"Parameter index %d exceeds container size %d"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(uint *)((this->InMemoryPSOIndices).Storage.Data +
                         (longlong)(this->InMemoryPSOIndices).Head * 4);
        if (((this->InMemoryPSOIndices).Count < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Count)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                               ,0x248,L"Parameter index %d exceeds container size %d"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->InMemoryPSOIndices).Capacity;
        iVar11 = (this->InMemoryPSOIndices).Head + 1;
        if (iVar9 <= iVar11) {
          iVar11 = iVar11 - iVar9;
        }
        piVar2 = &(this->InMemoryPSOIndices).Count;
        *piVar2 = *piVar2 + -1;
        (this->InMemoryPSOIndices).Head = iVar11;
        uVar8 = 0;
        if ((int)uVar4 < (this->PrecachedPSOInitializers).ArrayNum) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar3 = (this->PrecachedPSOInitializers).AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
        if (((pFVar5 <= pFVar3) &&
            (pFVar3 < pFVar5 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->PrecachedPSOsToCleanup).ArrayNum;
        if (iVar9 == (this->PrecachedPSOsToCleanup).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,
                             &(this->PrecachedPSOsToCleanup).ArrayMax);
        }
        (this->PrecachedPSOsToCleanup).ArrayNum = iVar9 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
             *(undefined8 *)pFVar3;
      } while (this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
  }
  return;
}

// TryAddNewState @ 145cc6020

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FPSOPrecacheRequestResult * __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::TryAddNewState(TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                 *this,FPSOPrecacheRequestResult *__return_storage_ptr__,
                FComputePipelineStateInitializer *param_1,FString *param_2,bool param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  EPSOPrecacheStateMask EVar4;
  FScriptContainerElement *pFVar5;
  FRHIComputeShader *pFVar6;
  FBaseGraphTask *pFVar7;
  FScriptContainerElement *pFVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  EPSOPrecacheStateMask EVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FPSOPrecacheRequestResult *pFVar16;
  FComputePipelineState *pFVar17;
  TRefCountPtr<FBaseGraphTask> TVar18;
  FBaseGraphTask *pFVar19;
  uint *puVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount> FVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPrecacheTask *pFVar23;
  FComputePipelineState *this_02;
  FNameEntryId FVar24;
  uint local_res8 [2];
  TPairInitializer<unsigned___int64_const_&,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask_const_&>
  local_res10;
  FPSOCompilationDebugData *local_res20;
  ulong64 local_c8;
  uint local_c0;
  uint uStack_bc;
  FPSOCompilationDebugData local_b8;
  FName local_98;
  FComputePipelineState *local_90;
  FPSOPrecacheRequestID local_88;
  undefined1 local_84;
  FStatMessage local_80;
  ulong64 *local_70;
  FComputePipelineState **local_68;
  FName local_58 [3];
  
  this_02 = (FComputePipelineState *)0x0;
  __return_storage_ptr__.Type = 0;
  __return_storage_ptr__.RequestID = 0;
  (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  local_c8 = (ulong64)(uint)param_1->ComputeShader->_padding_;
  local_res10.Value = (FPrecacheTask *)param_1;
  local_res20 = (FPSOCompilationDebugData *)param_2;
  AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  bVar11 = HasPSOBeenRequested(this,param_1,local_c8,__return_storage_ptr__);
  if (!bVar11) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    bVar11 = HasPSOBeenRequested(this,param_1,local_c8,__return_storage_ptr__);
    if (bVar11) {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->RequestID =
         (FPSOPrecacheRequestID)
         ((uint)__return_storage_ptr__->RequestID ^
         (__return_storage_ptr__.Type ^ this->PSOType) & (Compute|Graphics));
    pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         pFVar5 + (longlong)(this->PrecachedPSOInitializers).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
      return pFVar16;
    }
    iVar13 = (this->PrecachedPSOInitializers).ArrayNum;
    piVar1 = &(this->PrecachedPSOInitializers).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->PrecachedPSOInitializers).AllocatorInstance,piVar1);
    }
    pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
    (this->PrecachedPSOInitializers).ArrayNum = iVar13 + 1;
    *(ulong64 *)(pFVar5 + (longlong)iVar13 * 8) = local_c8;
    __return_storage_ptr__.RequestID = 0;
    __return_storage_ptr__->RequestID =
         (FPSOPrecacheRequestID)((uint)__return_storage_ptr__->RequestID | iVar13 * 4);
    pFVar17 = ::operator_new(0x50);
    if (pFVar17 != (FComputePipelineState *)0x0) {
      pFVar6 = param_1->ComputeShader;
      pFVar17->_padding_ = 0;
      pFVar17->_padding_ = 0;
      pFVar17->_padding_ = 0;
      pFVar17->_padding_ = 0;
      pFVar17->_padding_ = 0;
      *(undefined2 *)&pFVar17->_padding_ = 0;
      *(undefined1 *)((longlong)&pFVar17->_padding_ + 2) = 0;
      pFVar17->ComputeShader = pFVar6;
      pFVar6 = pFVar17->ComputeShader;
      pFVar17->_padding_ = (longlong)&___7FComputePipelineState__6B_;
      (pFVar17->RHIPipeline).Reference = (FRHIComputePipelineState *)0x0;
      (pFVar17->InUseCount).Counter = 0;
      FRHIResource::AddRef((FRHIResource *)pFVar6);
      this_02 = pFVar17;
    }
    local_88 = __return_storage_ptr__->RequestID;
    local_70 = &local_c8;
    local_84 = 0;
    local_68 = &local_90;
    local_90 = this_02;
    TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask_const_&>_>
              ((TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                *)&this->PrecachedPSOInitializerData,&local_res10,(bool *)&local_70);
    if (param_3) {
      TVar18 = FBaseGraphTask::CreateGraphEvent();
      FPipelineStateAsync::SetCompletionEvent((FPipelineStateAsync *)this_02,TVar18);
      pFVar19 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)this_02);
      pFVar7 = (__return_storage_ptr__->AsyncCompileEvent).Reference;
      if (pFVar7 != pFVar19) {
        (__return_storage_ptr__->AsyncCompileEvent).Reference = pFVar19;
        if (pFVar19 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar19->field_0x30 = *(int *)&pFVar19->field_0x30 + 1;
          UNLOCK();
        }
        if (pFVar7 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar2 = &pFVar7->field_0x30;
          iVar13 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
          }
        }
      }
      LOCK();
      this->ActiveCompileCount = this->ActiveCompileCount + 1;
      UNLOCK();
    }
    bVar11 = ShouldKeepPrecachedPSOsInMemory();
    if (bVar11) {
      if (this->MaxInMemoryPSOs != 0) {
        if ((this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("static_cast<uint32>(InMemoryPSOIndices.Num()) <= MaxInMemoryPSOs",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                ,0x975,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
          return pFVar16;
        }
        if ((this->InMemoryPSOIndices).Count == this->MaxInMemoryPSOs) {
          puVar20 = TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::First
                              (&this->InMemoryPSOIndices);
          uVar15 = *puVar20;
          TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::PopFirst(&this->InMemoryPSOIndices);
          pTVar3 = &this->PrecachedPSOsToCleanup;
          uVar14 = 0;
          if ((int)uVar15 < (this->PrecachedPSOInitializers).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
            return pFVar16;
          }
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data +
                   (longlong)(int)uVar15 * 8;
          if (((pFVar8 <= pFVar5) &&
              (pFVar5 < pFVar8 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
            return pFVar16;
          }
          iVar13 = (this->PrecachedPSOsToCleanup).ArrayNum;
          piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->PrecachedPSOsToCleanup).ArrayNum = iVar13 + 1;
          *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) =
               *(undefined8 *)pFVar5;
        }
        local_res8[0] = __return_storage_ptr__.RequestID;
        TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::EmplaceLast<unsigned_int>
                  (&this->InMemoryPSOIndices,local_res8);
      }
      FVar22 = StatPtr_STAT_InMemoryPrecachedPSOCount;
      if (StatPtr_STAT_InMemoryPrecachedPSOCount ==
          (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)0x0) {
        pFVar21 = ::FName::FName(local_58,"STAT_InMemoryPrecachedPSOCount");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InMemoryPrecachedPSOCount,
                            *pFVar21,L"Precached PSOs Kept In Memory","STATGROUP_PipelineStateCache"
                            ,"STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar9 = *(FName *)FVar22;
      FVar24 = FVar9.ComparisonIndex.Value;
      uVar15 = FVar9.Number;
      local_c0 = FVar24.Value;
      uStack_bc = uVar15;
      if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_80.NameAndInfo.Number = uVar15 & 0xffffafff | 0xa000;
        local_80.StatData.Pad[0] = '\x01';
        local_80.StatData.Pad[1] = '\0';
        local_80.StatData.Pad[2] = '\0';
        local_80.StatData.Pad[3] = '\0';
        local_80.StatData.Pad[4] = '\0';
        local_80.StatData.Pad[5] = '\0';
        local_80.StatData.Pad[6] = '\0';
        local_80.StatData.Pad[7] = '\0';
        local_98 = FVar9;
        local_80.NameAndInfo.Index.Value = FVar24.Value;
        FThreadStats::AddStatMessage(this_00,&local_80);
        FStatsTrace::Add(&local_98,1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    pFVar23 = local_res10.Value;
    if (((FRHIComputeShader *)(local_res10.Value)->PipelineState == (FRHIComputeShader *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ComputeInitializer.ComputeShader",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                            ,0x1157,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
      return pFVar16;
    }
    if (((((FComputePipelineStateInitializer_u_8 *)&pFVar23->RequestID)->Flags & 0x40) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ComputeInitializer.bPSOPrecache",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                            ,0x1158,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
      return pFVar16;
    }
    local_b8.PSOCompilationEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.PSOCompilationEventName.Data.ArrayNum = 0;
    local_b8.PSOCompilationEventName.Data.ArrayMax = 0;
    local_b8.BreadcrumbRoot = (FRHIBreadcrumbNode *)0x0;
    local_b8.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
    if (&local_b8 != local_res20) {
      uVar15 = (local_res20->PSOCompilationEventName).Data.ArrayNum;
      pFVar5 = (local_res20->PSOCompilationEventName).Data.AllocatorInstance.Data;
      local_b8.PSOCompilationEventName.Data.ArrayMax = 0;
      local_b8.PSOCompilationEventName.Data.ArrayNum = uVar15;
      if (uVar15 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,0,(ForAnyElementType *)&local_b8,uVar15,
                   &local_b8.PSOCompilationEventName.Data.ArrayMax);
        memcpy(local_b8.PSOCompilationEventName.Data.AllocatorInstance.Data,pFVar5,
               (longlong)(int)uVar15 * 2);
      }
    }
    InternalCreateComputePipelineState
              ((FComputePipelineStateInitializer *)pFVar23,param_3,Active,false,this_02,&local_b8,
               false);
    if (local_b8.PSOCompilationEventName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.PSOCompilationEventName.Data.AllocatorInstance.Data);
    }
    AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    pFVar23 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
              ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
                      *)&this->PrecachedPSOInitializerData,local_c8);
    if (pFVar23 == (FPrecacheTask *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FindResult != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x98d,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        pFVar16 = (FPSOPrecacheRequestResult *)(*pcVar10)();
        return pFVar16;
      }
    }
    else {
      EVar12 = pFVar23->StateMask;
      do {
        LOCK();
        EVar4 = pFVar23->StateMask;
        bVar11 = EVar12 == EVar4;
        if (bVar11) {
          pFVar23->StateMask = EVar12 | Compiling;
          EVar4 = EVar12;
        }
        EVar12 = EVar4;
        UNLOCK();
      } while (!bVar11);
      if (((EVar12 & (Failed|Succeeded)) == None) && ((EVar12 & Boosted) != None)) {
        RescheduleTaskToHighPriority(this,EVar12,None,pFVar23->PipelineState);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  return __return_storage_ptr__;
}

// TryAddNewState @ 145cc66d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FPSOPrecacheRequestResult * __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::TryAddNewState(TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                 *this,FPSOPrecacheRequestResult *__return_storage_ptr__,
                FGraphicsPipelineStateInitializer *param_1,FString *param_2,bool param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  EPSOPrecacheStateMask EVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ulonglong uVar8;
  bool bVar9;
  EPSOPrecacheStateMask EVar10;
  int iVar11;
  uint uVar12;
  FPSOPrecacheRequestResult *pFVar13;
  FGraphicsPipelineState *pFVar14;
  TRefCountPtr<FBaseGraphTask> TVar15;
  FBaseGraphTask *pFVar16;
  uint *puVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount> FVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FBaseGraphTask *pFVar20;
  FPrecacheTask *pFVar21;
  FGraphicsPipelineState *this_02;
  uint uVar22;
  undefined1 auStackY_228 [32];
  ulong64 local_1c8;
  FPSOCompilationDebugData *local_1c0;
  uint local_1b8 [2];
  uint local_1b0;
  uint uStack_1ac;
  FPSOCompilationDebugData local_1a8;
  TPairInitializer<unsigned___int64_const_&,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask_const_&>
  local_188;
  FGraphicsPipelineState *local_178;
  FPSOPrecacheRequestID local_170;
  undefined1 local_16c;
  FStatMessage local_168;
  ulong64 *local_158;
  FGraphicsPipelineState **local_150;
  FName local_140;
  FGraphicsPipelineStateInitializer local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_02 = (FGraphicsPipelineState *)0x0;
  __return_storage_ptr__.Type = 0;
  __return_storage_ptr__.RequestID = 0;
  (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  local_1c0 = (FPSOCompilationDebugData *)param_2;
  local_1c8 = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))(GDynamicRHI,param_1);
  AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  bVar9 = HasPSOBeenRequested(this,param_1,local_1c8,__return_storage_ptr__);
  if (bVar9) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    bVar9 = HasPSOBeenRequested(this,param_1,local_1c8,__return_storage_ptr__);
    if (bVar9) {
      ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    }
    else {
      __return_storage_ptr__->RequestID =
           (FPSOPrecacheRequestID)
           ((uint)__return_storage_ptr__->RequestID ^
           (__return_storage_ptr__.Type ^ this->PSOType) & (Compute|Graphics));
      pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 <
           pFVar5 + (longlong)(this->PrecachedPSOInitializers).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
        return pFVar13;
      }
      iVar11 = (this->PrecachedPSOInitializers).ArrayNum;
      piVar1 = &(this->PrecachedPSOInitializers).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->PrecachedPSOInitializers).AllocatorInstance,piVar1);
      }
      pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data;
      (this->PrecachedPSOInitializers).ArrayNum = iVar11 + 1;
      *(ulong64 *)(pFVar5 + (longlong)iVar11 * 8) = local_1c8;
      __return_storage_ptr__.RequestID = 0;
      __return_storage_ptr__->RequestID =
           (FPSOPrecacheRequestID)((uint)__return_storage_ptr__->RequestID | iVar11 * 4);
      pFVar14 = ::operator_new(0x50);
      if (pFVar14 != (FGraphicsPipelineState *)0x0) {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ = 0;
        *(undefined2 *)&pFVar14->_padding_ = 0;
        *(undefined1 *)((longlong)&pFVar14->_padding_ + 2) = 0;
        pFVar14->_padding_ = (longlong)&___7FGraphicsPipelineState__6B_;
        (pFVar14->RHIPipeline).Reference = (FRHIGraphicsPipelineState *)0x0;
        (pFVar14->InUseCount).Counter = 0;
        pFVar14->SortKey = 0;
        this_02 = pFVar14;
      }
      local_170 = __return_storage_ptr__->RequestID;
      local_158 = &local_1c8;
      local_16c = 0;
      local_150 = &local_178;
      local_178 = this_02;
      TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask_const_&>_>
                ((TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                  *)&this->PrecachedPSOInitializerData,&local_188,(bool *)&local_158);
      if (param_3) {
        TVar15 = FBaseGraphTask::CreateGraphEvent();
        FPipelineStateAsync::SetCompletionEvent((FPipelineStateAsync *)this_02,TVar15);
        pFVar16 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)this_02);
        pFVar20 = (__return_storage_ptr__->AsyncCompileEvent).Reference;
        if (pFVar20 != pFVar16) {
          (__return_storage_ptr__->AsyncCompileEvent).Reference = pFVar16;
          if (pFVar16 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar16->field_0x30 = *(int *)&pFVar16->field_0x30 + 1;
            UNLOCK();
          }
          if (pFVar20 != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar2 = &pFVar20->field_0x30;
            iVar11 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (*(code *)**(undefined8 **)pFVar20)(pFVar20,1);
            }
          }
        }
        LOCK();
        this->ActiveCompileCount = this->ActiveCompileCount + 1;
        UNLOCK();
      }
      bVar9 = ShouldKeepPrecachedPSOsInMemory();
      if (bVar9) {
        if (this->MaxInMemoryPSOs != 0) {
          if ((this->MaxInMemoryPSOs < (uint)(this->InMemoryPSOIndices).Count) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("static_cast<uint32>(InMemoryPSOIndices.Num()) <= MaxInMemoryPSOs",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0x975,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
            return pFVar13;
          }
          if ((this->InMemoryPSOIndices).Count == this->MaxInMemoryPSOs) {
            puVar17 = TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::First
                                (&this->InMemoryPSOIndices);
            uVar12 = *puVar17;
            TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::PopFirst(&this->InMemoryPSOIndices);
            pTVar3 = &this->PrecachedPSOsToCleanup;
            uVar22 = 0;
            if ((int)uVar12 < (this->PrecachedPSOInitializers).ArrayNum) {
              uVar22 = ~uVar12 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
              return pFVar13;
            }
            pFVar6 = (pTVar3->AllocatorInstance).Data;
            pFVar5 = (this->PrecachedPSOInitializers).AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 8;
            if (((pFVar6 <= pFVar5) &&
                (pFVar5 < pFVar6 + (longlong)(this->PrecachedPSOsToCleanup).ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
              return pFVar13;
            }
            iVar11 = (this->PrecachedPSOsToCleanup).ArrayNum;
            piVar1 = &(this->PrecachedPSOsToCleanup).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->PrecachedPSOsToCleanup).ArrayNum = iVar11 + 1;
            *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) =
                 *(undefined8 *)pFVar5;
          }
          local_1b8[0] = __return_storage_ptr__.RequestID;
          TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::EmplaceLast<unsigned_int>
                    (&this->InMemoryPSOIndices,local_1b8);
        }
        FVar19 = StatPtr_STAT_InMemoryPrecachedPSOCount;
        if (StatPtr_STAT_InMemoryPrecachedPSOCount ==
            (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)0x0) {
          pFVar18 = ::FName::FName(&local_140,"STAT_InMemoryPrecachedPSOCount");
          FVar19 = (FThreadSafeStaticStat<FStat_STAT_InMemoryPrecachedPSOCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InMemoryPrecachedPSOCount,
                              *pFVar18,L"Precached PSOs Kept In Memory",
                              "STATGROUP_PipelineStateCache","STATCAT_Advanced",
                              L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Invalid);
        }
        pFVar21 = *(FPrecacheTask **)FVar19;
        uVar22 = (uint)pFVar21;
        uVar12 = (uint)((ulonglong)pFVar21 >> 0x20);
        param_2 = &local_1c0->PSOCompilationEventName;
        local_1b0 = uVar22;
        uStack_1ac = uVar12;
        if (((pFVar21 != (FPrecacheTask *)0x0) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_168.NameAndInfo.Number = uVar12 & 0xffffafff | 0xa000;
          local_168.StatData.Pad[0] = '\x01';
          local_168.StatData.Pad[1] = '\0';
          local_168.StatData.Pad[2] = '\0';
          local_168.StatData.Pad[3] = '\0';
          local_168.StatData.Pad[4] = '\0';
          local_168.StatData.Pad[5] = '\0';
          local_168.StatData.Pad[6] = '\0';
          local_168.StatData.Pad[7] = '\0';
          local_188.Value = pFVar21;
          local_168.NameAndInfo.Index.Value = uVar22;
          FThreadStats::AddStatMessage(this_00,&local_168);
          FStatsTrace::Add((FName *)&local_188.Value,1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
            param_2 = &local_1c0->PSOCompilationEventName;
          }
          else {
            param_2 = &local_1c0->PSOCompilationEventName;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
              param_2 = &local_1c0->PSOCompilationEventName;
            }
          }
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
      ValidateGraphicsPipelineStateInitializer(param_1);
      pFVar20 = FPipelineStateAsync::GetCompletionEvent((FPipelineStateAsync *)this_02);
      if (((pFVar20 != (FBaseGraphTask *)0x0) != param_3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(NewGraphicsPipelineState->GetCompletionEvent() != nullptr) == bDoAsyncCompile"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x117b,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
        return pFVar13;
      }
      local_138.BoundShaderState.VertexDeclarationRHI =
           (param_1->BoundShaderState).VertexDeclarationRHI;
      local_138.BoundShaderState.VertexShaderRHI = (param_1->BoundShaderState).VertexShaderRHI;
      local_1a8.PSOCompilationEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_138.BoundShaderState.PixelShaderRHI = (param_1->BoundShaderState).PixelShaderRHI;
      local_138.BoundShaderState.MeshShaderRHI = (param_1->BoundShaderState).MeshShaderRHI;
      local_1a8.PSOCompilationEventName.Data.ArrayNum = 0;
      local_1a8.PSOCompilationEventName.Data.ArrayMax = 0;
      local_138.BoundShaderState.AmplificationShaderRHI =
           (param_1->BoundShaderState).AmplificationShaderRHI;
      local_138.BoundShaderState.GeometryShaderRHI = (param_1->BoundShaderState).GeometryShaderRHI;
      local_138.BoundShaderState.WorkGraphMeshShaderRHI =
           (param_1->BoundShaderState).WorkGraphMeshShaderRHI;
      local_138.BlendState = param_1->BlendState;
      local_138.RasterizerState = param_1->RasterizerState;
      local_138.DepthStencilState = param_1->DepthStencilState;
      local_138.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
           (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0];
      local_138.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
           (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1];
      local_138.PrimitiveType = param_1->PrimitiveType;
      local_138.RenderTargetsEnabled = param_1->RenderTargetsEnabled;
      local_138.RenderTargetFormats.Elements = *&(param_1->RenderTargetFormats).Elements;
      local_138.RenderTargetFlags.Elements[0] = (param_1->RenderTargetFlags).Elements[0];
      local_138.RenderTargetFlags.Elements[1] = (param_1->RenderTargetFlags).Elements[1];
      local_138.RenderTargetFlags.Elements[2] = (param_1->RenderTargetFlags).Elements[2];
      local_138.RenderTargetFlags.Elements[3] = (param_1->RenderTargetFlags).Elements[3];
      local_138.RenderTargetFlags.Elements[4] = (param_1->RenderTargetFlags).Elements[4];
      local_138.RenderTargetFlags.Elements[5] = (param_1->RenderTargetFlags).Elements[5];
      local_138.RenderTargetFlags.Elements[6] = (param_1->RenderTargetFlags).Elements[6];
      local_138.RenderTargetFlags.Elements[7] = (param_1->RenderTargetFlags).Elements[7];
      local_138.DepthStencilTargetFormat = param_1->DepthStencilTargetFormat;
      local_138._177_7_ = *(undefined7 *)&param_1->field_0xb1;
      local_138.DepthStencilTargetFlag = param_1->DepthStencilTargetFlag;
      local_138.DepthTargetLoadAction = param_1->DepthTargetLoadAction;
      local_138.DepthTargetStoreAction = param_1->DepthTargetStoreAction;
      local_138.StencilTargetLoadAction = param_1->StencilTargetLoadAction;
      local_138.StencilTargetStoreAction = param_1->StencilTargetStoreAction;
      local_138.DepthStencilAccess.Value = (param_1->DepthStencilAccess).Value;
      local_138.NumSamples = param_1->NumSamples;
      local_138.SubpassHint = param_1->SubpassHint;
      local_138.SubpassIndex = param_1->SubpassIndex;
      local_138.ConservativeRasterization = param_1->ConservativeRasterization;
      local_138.bDepthBounds = param_1->bDepthBounds;
      local_138.MultiViewCount = param_1->MultiViewCount;
      local_138.bHasFragmentDensityAttachment = param_1->bHasFragmentDensityAttachment;
      uVar8._0_1_ = param_1->bAllowVariableRateShading;
      uVar8._1_1_ = param_1->ShadingRate;
      uVar8._2_2_ = param_1->field25_0xd2;
      uVar8._4_4_ = *(undefined4 *)&param_1->field_0xd4;
      local_138.StatePrecachePSOHash = param_1->StatePrecachePSOHash;
      local_138._208_8_ = uVar8 | 0x8000000;
      local_1a8.BreadcrumbRoot = (FRHIBreadcrumbNode *)0x0;
      local_1a8.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
      if (&local_1a8 != (FPSOCompilationDebugData *)param_2) {
        uVar12 = (((FPSOCompilationDebugData *)param_2)->PSOCompilationEventName).Data.ArrayNum;
        pFVar5 = (((FPSOCompilationDebugData *)param_2)->PSOCompilationEventName).Data.
                 AllocatorInstance.Data;
        local_1a8.PSOCompilationEventName.Data.ArrayMax = 0;
        local_1a8.PSOCompilationEventName.Data.ArrayNum = uVar12;
        if (uVar12 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar12,0,(ForAnyElementType *)&local_1a8,uVar12,
                     &local_1a8.PSOCompilationEventName.Data.ArrayMax);
          memcpy(local_1a8.PSOCompilationEventName.Data.AllocatorInstance.Data,pFVar5,
                 (longlong)(int)uVar12 * 2);
        }
      }
      InternalCreateGraphicsPipelineState(&local_138,Active,false,param_3,this_02,&local_1a8,false);
      if (local_1a8.PSOCompilationEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.PSOCompilationEventName.Data.AllocatorInstance.Data);
      }
      AcquireSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
      pFVar21 = TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                ::Find((TMapBase<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
                        *)&this->PrecachedPSOInitializerData,local_1c8);
      if (pFVar21 == (FPrecacheTask *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindResult != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x98d,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FPSOPrecacheRequestResult *)(*pcVar7)();
          return pFVar13;
        }
      }
      else {
        EVar10 = pFVar21->StateMask;
        do {
          LOCK();
          EVar4 = pFVar21->StateMask;
          bVar9 = EVar10 == EVar4;
          if (bVar9) {
            pFVar21->StateMask = EVar10 | Compiling;
            EVar4 = EVar10;
          }
          EVar10 = EVar4;
          UNLOCK();
        } while (!bVar9);
        if (((EVar10 & (Failed|Succeeded)) == None) && ((EVar10 & Boosted) != None)) {
          RescheduleTaskToHighPriority(this,EVar10,None,pFVar21->PipelineState);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->PrecachePSOsRWLock);
    }
  }
  return __return_storage_ptr__;
}

// WaitTasksComplete @ 145ccc4e0

void __thiscall
TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
::WaitTasksComplete(TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                    *this)

{
  TMap<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>_>
  *pTVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  FPSOPrecacheAsyncTask *this_00;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FCompletionState *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  fVar8 = __real_3c23d70a;
  pTVar1 = &this->PrecachedPSOInitializerData;
  do {
    bVar7 = false;
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar13 = local_a8._24_8_ >> 0x20;
    local_48 = (TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
      do {
        lVar2 = *local_78;
        iVar10 = (int)uVar13;
        lVar3 = *(longlong *)((longlong)iVar10 * 0x20 + 8 + lVar2);
        if (lVar3 != 0) {
          bVar9 = IsInParallelRHIThread();
          if ((bVar9) || (GEnablePSOAsyncCacheConsolidation == false)) {
            lVar12 = 0x10;
          }
          else {
            lVar12 = 0;
          }
          plVar4 = *(longlong **)(lVar3 + 0x10 + lVar12);
          if (plVar4 != (longlong *)0x0) {
            if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0xd0) == '\0')) {
LAB_145ccc6d2:
              bVar7 = true;
              break;
            }
            if ((*(longlong *)(lVar3 + 0x10 + lVar12) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)(*(longlong *)(lVar3 + 0x10 + lVar12) + 8) != 0) {
              pFVar11 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                                  ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                                   (lVar12 + 0x10 + lVar3));
              this_00 = (pFVar11->PrecompileTask).Ptr;
              if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145ccc6d2;
              FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
            }
          }
        }
        if (*(longlong *)((longlong)iVar10 * 0x20 + 8 + lVar2) != 0) {
          if (((*(byte *)((longlong)iVar10 * 0x20 + 0x14 + lVar2) & 6) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumHasAnyFlags(PrecacheTask.ReadPSOPrecacheState(), (EPSOPrecacheStateMask::Succeeded | EPSOPrecacheStateMask::Failed))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0x9b5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar5 = *(undefined8 **)((longlong)iVar10 * 0x20 + 8 + lVar2);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)();
          }
          *(undefined8 *)((longlong)iVar10 * 0x20 + 8 + lVar2) = 0;
        }
        uStack_60 = uStack_60 & ~auStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
        uVar13 = (ulonglong)uStack_5c;
      } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        uVar14 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
        if (uVar14 < 4) {
          iVar10 = 1;
        }
        else {
          uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar14) && (local_48->HashSize < iVar10)) || (iVar10 < local_48->HashSize)) {
          local_48->HashSize = iVar10;
          TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
          ::Rehash(local_48);
        }
      }
      if (!bVar7) goto LAB_145ccc747;
    }
    else {
LAB_145ccc747:
      (this->PrecachedPSOsToCleanup).ArrayNum = 0;
      if ((this->PrecachedPSOsToCleanup).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->PrecachedPSOsToCleanup).AllocatorInstance,0,
                   &(this->PrecachedPSOsToCleanup).ArrayMax);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    if (!bVar7) {
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar8);
  } while( true );
}

// WaitTasksComplete @ 145ccc7d0

void __thiscall
TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
::WaitTasksComplete(TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>
                    *this)

{
  TMap<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>_>
  *pTVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  FPSOPrecacheAsyncTask *this_00;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FCompletionState *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  fVar8 = __real_3c23d70a;
  pTVar1 = &this->PrecachedPSOInitializerData;
  do {
    bVar7 = false;
    AcquireSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar13 = local_a8._24_8_ >> 0x20;
    local_48 = (TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
      do {
        lVar2 = *local_78;
        iVar10 = (int)uVar13;
        lVar3 = *(longlong *)((longlong)iVar10 * 0x20 + 8 + lVar2);
        if (lVar3 != 0) {
          bVar9 = IsInParallelRHIThread();
          if ((bVar9) || (GEnablePSOAsyncCacheConsolidation == false)) {
            lVar12 = 0x10;
          }
          else {
            lVar12 = 0;
          }
          plVar4 = *(longlong **)(lVar3 + 0x10 + lVar12);
          if (plVar4 != (longlong *)0x0) {
            if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0xd0) == '\0')) {
LAB_145ccc9c2:
              bVar7 = true;
              break;
            }
            if ((*(longlong *)(lVar3 + 0x10 + lVar12) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)(*(longlong *)(lVar3 + 0x10 + lVar12) + 8) != 0) {
              pFVar11 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                                  ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                                   (lVar12 + 0x10 + lVar3));
              this_00 = (pFVar11->PrecompileTask).Ptr;
              if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145ccc9c2;
              FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
            }
          }
        }
        if (*(longlong *)((longlong)iVar10 * 0x20 + 8 + lVar2) != 0) {
          if (((*(byte *)((longlong)iVar10 * 0x20 + 0x14 + lVar2) & 6) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumHasAnyFlags(PrecacheTask.ReadPSOPrecacheState(), (EPSOPrecacheStateMask::Succeeded | EPSOPrecacheStateMask::Failed))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0x9b5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar5 = *(undefined8 **)((longlong)iVar10 * 0x20 + 8 + lVar2);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)();
          }
          *(undefined8 *)((longlong)iVar10 * 0x20 + 8 + lVar2) = 0;
        }
        uStack_60 = uStack_60 & ~auStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
        uVar13 = (ulonglong)uStack_5c;
      } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        uVar14 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
        if (uVar14 < 4) {
          iVar10 = 1;
        }
        else {
          uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar14) && (local_48->HashSize < iVar10)) || (iVar10 < local_48->HashSize)) {
          local_48->HashSize = iVar10;
          TSet<TTuple<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask>,TDefaultMapHashableKeyFuncs<unsigned___int64,TPrecachePipelineCacheBase<FPrecacheGraphicsPipelineCache,FGraphicsPipelineStateInitializer,FGraphicsPipelineState>::FPrecacheTask,0>,FDefaultSetAllocator>
          ::Rehash(local_48);
        }
      }
      if (!bVar7) goto LAB_145ccca37;
    }
    else {
LAB_145ccca37:
      (this->PrecachedPSOsToCleanup).ArrayNum = 0;
      if ((this->PrecachedPSOsToCleanup).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->PrecachedPSOsToCleanup).AllocatorInstance,0,
                   &(this->PrecachedPSOsToCleanup).ArrayMax);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PrecachePSOsRWLock);
    if (!bVar7) {
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar8);
  } while( true );
}

