// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// FMinimalHoleFiller @ 14c946980

FMinimalHoleFiller * __thiscall
UE::Geometry::FMinimalHoleFiller::FMinimalHoleFiller
          (FMinimalHoleFiller *this,FDynamicMesh3 *param_1,FEdgeLoop *param_2)

{
  FScriptContainerElement *pFVar1;
  
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FMinimalHoleFiller_Geometry_UE__6B_;
  this->_padding_ = 0;
  this->DevelopabilityTolerance = 0.0001;
  this->_padding_ = 0;
  this->bIgnoreBoundaryTriangles = false;
  this->bOptimizeDevelopability = true;
  this->bOptimizeTriangles = true;
  FEdgeLoop::FEdgeLoop(&this->FillLoop,param_2);
  (this->RegionOp).Ptr = (FMeshRegionOperator *)0x0;
  this->FillMesh = (FDynamicMesh3 *)0x0;
  *(undefined8 *)&(this->BoundaryVertices).Elements = 0;
  *(undefined8 *)&(this->BoundaryVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BoundaryVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BoundaryVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BoundaryVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoundaryVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoundaryVertices).Elements.field_0x34 = 0;
  (this->BoundaryVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BoundaryVertices).HashSize = 0;
  *(undefined8 *)&this->ExteriorAngleSums = 0;
  *(undefined8 *)&(this->ExteriorAngleSums).field_0x8 = 0;
  *(undefined8 *)&(this->ExteriorAngleSums).field_0x20 = 0;
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x28 = 0;
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x34 = 0;
  *(undefined8 *)&(this->ExteriorAngleSums).field_0x40 = 0;
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x48 = 0;
  (this->Curvatures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curvatures).ArrayNum = 0;
  (this->Curvatures).ArrayMax = 0;
  pFVar1 = (param_2->BowtieVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

