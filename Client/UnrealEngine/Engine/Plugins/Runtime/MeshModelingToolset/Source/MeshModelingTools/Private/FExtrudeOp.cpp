// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FExtrudeOp @ 14cd4eec0

FExtrudeOp * __thiscall UE::Geometry::FExtrudeOp::FExtrudeOp(FExtrudeOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->DirectionMode = SelectedTriangleNormalsEven;
  this->ExtrudeDistance = 0.0;
  this->_padding_ = (longlong)&___7FExtrudeOp_Geometry_UE__6B_;
  this->MaxScaleForAdjustingTriNormalsOffset = 4.0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TriangleSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleSelection).ArrayNum = 0;
  (this->TriangleSelection).ArrayMax = 0;
  this->ExtrudeMode = MoveAndStitch;
  this->bUseColinearityForSettingBorderGroups = true;
  this->UVScaleFactor = 1.0;
  this->bShellsToSolids = true;
  (this->ExtrudedFaceNewGids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtrudedFaceNewGids).ArrayNum = 0;
  (this->ExtrudedFaceNewGids).ArrayMax = 0;
  return this;
}

// ~FExtrudeOp @ 14cd53170

void __thiscall UE::Geometry::FExtrudeOp::~FExtrudeOp(FExtrudeOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FExtrudeOp_Geometry_UE__6B_;
  pFVar1 = (this->ExtrudedFaceNewGids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleSelection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

