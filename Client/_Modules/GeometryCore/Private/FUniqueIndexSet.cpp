// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ~FUniqueIndexSet @ 1435e4ca0

void __thiscall UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(FUniqueIndexSet *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->Bits != (long64 *)0x0) {
    operator_delete__(this->Bits);
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

