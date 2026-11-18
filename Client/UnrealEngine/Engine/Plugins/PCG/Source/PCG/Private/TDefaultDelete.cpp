// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator() @ 149f39a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TDefaultDelete<FPCGActorAndComponentMapping>::operator()
          (TDefaultDelete<FPCGActorAndComponentMapping> *this,FPCGActorAndComponentMapping *param_1)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  if (param_1 != (FPCGActorAndComponentMapping *)0x0) {
    FPCGComponentOctreeAndMap::~FPCGComponentOctreeAndMap(&param_1->NonPartitionedOctree);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->ComponentToPartitionActorsMapLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ComponentToPartitionActorsMapLock);
    }
    *(undefined4 *)&(param_1->ComponentToPartitionActorsMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->ComponentToPartitionActorsMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->ComponentToPartitionActorsMap);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->PartitionActorsMapLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->PartitionActorsMapLock);
    }
    *(undefined4 *)&(param_1->PartitionActorsMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->PartitionActorsMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->PartitionActorsMap);
    FPCGComponentOctreeAndMap::~FPCGComponentOctreeAndMap(&param_1->PartitionedOctree);
    ::operator_delete(param_1,0x2e0);
  }
  return;
}

