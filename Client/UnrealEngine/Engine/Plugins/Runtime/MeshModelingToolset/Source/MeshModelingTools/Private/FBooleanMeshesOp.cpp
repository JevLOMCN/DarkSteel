// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FBooleanMeshesOp @ 14cc1b170

FBooleanMeshesOp * __thiscall
UE::Geometry::FBooleanMeshesOp::FBooleanMeshesOp(FBooleanMeshesOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->bTrimMode = false;
  this->bAttemptFixHoles = false;
  this->_padding_ = (longlong)&___7FBooleanMeshesOp_Geometry_UE__6B_;
  this->WindingThreshold = 0.5;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  this->bTryCollapseExtraEdges = false;
  this->TryCollapseExtraEdgesPlanarThresh = 0.01;
  (this->CreatedBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedBoundaryEdges).ArrayNum = 0;
  (this->CreatedBoundaryEdges).ArrayMax = 0;
  return this;
}

// ~FBooleanMeshesOp @ 14cc21ee0

void __thiscall UE::Geometry::FBooleanMeshesOp::~FBooleanMeshesOp(FBooleanMeshesOp *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CreatedBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)
             (this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

