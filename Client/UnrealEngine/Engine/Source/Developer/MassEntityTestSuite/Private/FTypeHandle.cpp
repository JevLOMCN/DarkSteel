// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator== @ 1470f9540

bool __thiscall UE::Mass::FTypeHandle::operator==(FTypeHandle *this,FTypeHandle *param_1)

{
  bool bVar1;
  
  bVar1 = FObjectKey::operator==((FObjectKey *)this,(FObjectKey *)param_1);
  return bVar1;
}

// IsValid @ 147192a00

bool __thiscall UE::Mass::FTypeHandle::IsValid(FTypeHandle *this)

{
  if (((this->TypeKey).ObjectKey.ObjectIndex == 0) &&
     ((this->TypeKey).ObjectKey.ObjectSerialNumber == 0)) {
    return false;
  }
  return true;
}

