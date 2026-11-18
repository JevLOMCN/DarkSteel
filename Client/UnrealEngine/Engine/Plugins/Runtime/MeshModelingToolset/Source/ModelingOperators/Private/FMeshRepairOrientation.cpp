// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// ~FMeshRepairOrientation @ 14c949720

void __thiscall
UE::Geometry::FMeshRepairOrientation::~FMeshRepairOrientation(FMeshRepairOrientation *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>
            ((Component *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Validate @ 14c987a90

EOperationValidationResult __thiscall
UE::Geometry::FMeshRepairOrientation::Validate(FMeshRepairOrientation *this)

{
  return Ok;
}

