// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FObjectKey @ 1470f4d60

FObjectKey * __thiscall FObjectKey::FObjectKey(FObjectKey *this)

{
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  return this;
}

// operator== @ 1470f9520

bool __thiscall FObjectKey::operator==(FObjectKey *this,FObjectKey *param_1)

{
  if ((this->ObjectIndex == param_1->ObjectIndex) &&
     (this->ObjectSerialNumber == param_1->ObjectSerialNumber)) {
    return true;
  }
  return false;
}

