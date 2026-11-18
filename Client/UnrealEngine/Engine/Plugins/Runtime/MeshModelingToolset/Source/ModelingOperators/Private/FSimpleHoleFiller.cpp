// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// FSimpleHoleFiller @ 14c946e40

FSimpleHoleFiller * __thiscall
UE::Geometry::FSimpleHoleFiller::FSimpleHoleFiller
          (FSimpleHoleFiller *this,FDynamicMesh3 *param_1,FEdgeLoop *param_2,EFillType param_3)

{
  FScriptContainerElement *pFVar1;
  
  this->Mesh = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSimpleHoleFiller_Geometry_UE__6B_;
  FEdgeLoop::FEdgeLoop(&this->Loop,param_2);
  this->FillType = param_3;
  this->NewVertex = -1;
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

