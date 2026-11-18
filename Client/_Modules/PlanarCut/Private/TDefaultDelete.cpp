// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// operator() @ 14c9afe10

void __thiscall
TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData>::operator()
          (TDefaultDelete<UE::PlanarCut::FDynamicMeshCollection::FMeshData> *this,FMeshData *param_1
          )

{
  void *pvVar1;
  
  if (param_1 != (FMeshData *)0x0) {
    *(undefined4 *)&(param_1->MeshToCollectionFaceMapping).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->MeshToCollectionFaceMapping).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->MeshToCollectionFaceMapping);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&param_1->AugMesh);
    ::operator_delete(param_1,0x330);
  }
  return;
}

