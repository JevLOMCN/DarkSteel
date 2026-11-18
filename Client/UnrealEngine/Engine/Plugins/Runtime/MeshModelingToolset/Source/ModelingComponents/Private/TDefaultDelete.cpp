// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator() @ 14cadfe00

void __thiscall
TDefaultDelete<UE::Geometry::FDynamicSubmesh3>::operator()
          (TDefaultDelete<UE::Geometry::FDynamicSubmesh3> *this,FDynamicSubmesh3 *param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  if (param_1 != (FDynamicSubmesh3 *)0x0) {
    (param_1->BaseBorderV).HashSize = 0;
    FVar1 = (param_1->BaseBorderV).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->BaseBorderV).Elements);
    (param_1->BaseBoundaryE).HashSize = 0;
    FVar1 = (param_1->BaseBoundaryE).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->BaseBoundaryE).Elements);
    (param_1->BaseBorderE).HashSize = 0;
    FVar1 = (param_1->BaseBorderE).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->BaseBorderE).Elements);
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&param_1->Mappings);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&param_1->Submesh);
    ::operator_delete(param_1,0x5f0);
  }
  return;
}

