// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FHoleFillOp @ 14ccb9c50

FHoleFillOp * __thiscall UE::Geometry::FHoleFillOp::FHoleFillOp(FHoleFillOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->FillType = Minimal;
  this->NumFailedLoops = 0;
  this->_padding_ = (longlong)&___7FHoleFillOp_Geometry_UE__6B_;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SmoothFillOptions).InteriorSmoothness = 0.2;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->MeshUVScaleFactor = 1.0;
  (this->Loops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Loops).ArrayNum = 0;
  (this->Loops).ArrayMax = 0;
  (this->FillOptions).bRemoveIsolatedTriangles = false;
  (this->FillOptions).bQuickFillSmallHoles = false;
  (this->SmoothFillOptions).bConstrainToHoleInterior = true;
  (this->SmoothFillOptions).RemeshingExteriorRegionWidth = 2;
  (this->SmoothFillOptions).SmoothingExteriorRegionWidth = 2;
  (this->SmoothFillOptions).SmoothingInteriorRegionWidth = 2;
  (this->SmoothFillOptions).FillDensityScalar = 1.0;
  (this->SmoothFillOptions).bProjectDuringRemesh = false;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = 0;
  (this->NewTriangles).ArrayMax = 0;
  return this;
}

