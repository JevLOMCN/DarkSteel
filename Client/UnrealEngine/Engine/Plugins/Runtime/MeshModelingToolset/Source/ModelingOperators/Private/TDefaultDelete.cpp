// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// operator() @ 14c95a830

void __thiscall
TDefaultDelete<UE::Geometry::FMeshRegionOperator>::operator()
          (TDefaultDelete<UE::Geometry::FMeshRegionOperator> *this,FMeshRegionOperator *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (param_1 != (FMeshRegionOperator *)0x0) {
    pFVar1 = (param_1->CurrentBaseTris).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->ReinsertSubToBaseMapT).Sparse.field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->ReinsertSubToBaseMapT).Sparse.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->ReinsertSubToBaseMapT).Sparse);
    pFVar1 = (param_1->ReinsertSubToBaseMapT).Dense.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->ReinsertSubToBaseMapV).Sparse.field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->ReinsertSubToBaseMapV).Sparse.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->ReinsertSubToBaseMapV).Sparse);
    pFVar1 = (param_1->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(&param_1->Region);
    ::operator_delete(param_1,0x6f0);
  }
  return;
}

