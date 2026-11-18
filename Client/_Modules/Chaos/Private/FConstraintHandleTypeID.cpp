// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// IsA @ 143797280

bool __thiscall
Chaos::FConstraintHandleTypeID::IsA(FConstraintHandleTypeID *this,FConstraintHandleTypeID *param_1)

{
  FName FVar1;
  
  FVar1 = this->TypeName;
  while( true ) {
    if (param_1->TypeName == FVar1) {
      return true;
    }
    this = this->BaseType;
    if (this == (FConstraintHandleTypeID *)0x0) break;
    FVar1 = this->TypeName;
  }
  return false;
}

