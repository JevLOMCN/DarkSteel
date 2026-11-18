// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// ~FTriangulateCurvesOp @ 14cee49c0

void __thiscall
UE::Geometry::FTriangulateCurvesOp::~FTriangulateCurvesOp(FTriangulateCurvesOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FTriangulateCurvesOp_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int>
            ((FCurvePath *)(this->Paths).AllocatorInstance.Data,(this->Paths).ArrayNum);
  pFVar1 = (this->Paths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

