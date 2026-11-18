// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// operator() @ 14e936f60

void __thiscall
TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
::operator()(TDefaultDelete<Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>_>
             *this,TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                   *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (param_1 !=
      (TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
       *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->CriticalSection);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1->Leafs).AllocatorInstance.Data,
               (param_1->Leafs).ArrayNum);
    pFVar1 = (param_1->Leafs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<Chaos::TBVHNode<double,3>,int>
              ((TBVHNode<double,3> *)(param_1->Elements).AllocatorInstance.Data,
               (param_1->Elements).ArrayNum);
    pFVar1 = (param_1->Elements).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->MScratchAllObjects).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->MWorldSpaceBoxes).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->MWorldSpaceBoxes).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->MWorldSpaceBoxes);
    pFVar1 = (param_1->MGlobalObjects).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xd8);
  }
  return;
}

