// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ~FMeshRegionBoundaryLoops @ 14c6e1870

void __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(FMeshRegionBoundaryLoops *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->edges_roi).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) != -1) {
    (this->Edges).Sparse.field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->Edges).Sparse);
  }
  if (((this->Edges).Dense.field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->Edges).Dense.field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (*(int *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0xc) != -1) {
    (this->Triangles).Sparse.field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->Triangles).Sparse);
  }
  if (((this->Triangles).Dense.field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->Triangles).Dense.field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>
            ((FEdgeLoop *)(this->Loops).AllocatorInstance.Data,(this->Loops).ArrayNum);
  pFVar1 = (this->Loops).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

