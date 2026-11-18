// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~FPCGGraphCompilerCache @ 149ca6220

void __thiscall FPCGGraphCompilerCache::~FPCGGraphCompilerCache(FPCGGraphCompilerCache *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  *(undefined4 *)&(this->TopGraphToComputeGraphMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TopGraphToComputeGraphMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TObjectPtr<UPCGComputeGraph>,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TopGraphToComputeGraphMap);
  *(undefined4 *)&(this->TopGraphToStackContextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TopGraphToStackContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TopGraphToStackContextMap);
  *(undefined4 *)&(this->TopGraphToTaskMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TopGraphToTaskMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TopGraphToTaskMap);
  *(undefined4 *)&(this->GraphToStackContextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GraphToStackContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphToStackContextMap);
  *(undefined4 *)&(this->GraphToTaskMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GraphToTaskMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGGraph_*,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphToTaskMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000149ca62f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// GetCompiledComputeGraph @ 149cc6e10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGComputeGraph * __thiscall
FPCGGraphCompilerCache::GetCompiledComputeGraph
          (FPCGGraphCompilerCache *this,UPCGGraph *param_1,uint param_2,uint param_3)

{
  UPCGGraphCompilationData *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPCGComputeGraph *pUVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  
  if ((param_1 != (UPCGGraph *)0x0) &&
     (pUVar1 = (param_1->CookedCompilationData).field0_0x0.DebugPtr,
     pUVar1 != (UPCGGraphCompilationData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (*(int *)&(pUVar1->ComputeGraphs).field_0x8 != *(int *)&(pUVar1->ComputeGraphs).field_0x34) {
      puVar7 = *(undefined1 **)&(pUVar1->ComputeGraphs).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pUVar1->ComputeGraphs).field_0x38;
      }
      uVar4 = *(uint *)(puVar7 + (ulonglong)
                                 (*(int *)&(pUVar1->ComputeGraphs).field_0x48 - 1U & param_2) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&pUVar1->ComputeGraphs);
          if (*puVar6 == param_2) {
            puVar8 = puVar6 + 2;
            if (puVar6 == (uint *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 == (uint *)0x0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)param_3 < 0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)puVar8[2] <= (int)param_3) {
              return (UPCGComputeGraph *)0x0;
            }
            if (((int)param_3 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pUVar5 = (UPCGComputeGraph *)(*pcVar2)();
              return pUVar5;
            }
            return *(UPCGComputeGraph **)(*(longlong *)puVar8 + (longlong)(int)param_3 * 8);
          }
          uVar4 = puVar6[6];
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  return (UPCGComputeGraph *)0x0;
}

