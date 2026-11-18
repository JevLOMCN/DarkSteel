// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// IsA @ 146e156a0

bool __thiscall FNavPathType::IsA(FNavPathType *this,FNavPathType *param_1)

{
  bool bVar1;
  
  if (this->Id == param_1->Id) {
    return true;
  }
  if ((this->ParentType != (FNavPathType *)0x0) && (bVar1 = IsA(this->ParentType,param_1), bVar1)) {
    return true;
  }
  return false;
}

