// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FMassEntityHandle @ 1470f48b0

FMassEntityHandle * __thiscall FMassEntityHandle::FMassEntityHandle(FMassEntityHandle *this)

{
  this->Index = 0;
  this->SerialNumber = 0;
  return this;
}

// operator== @ 1470f9500

bool __thiscall FMassEntityHandle::operator==(FMassEntityHandle *this,FMassEntityHandle param_1)

{
  if ((this->Index == param_1.Index) && (this->SerialNumber == param_1.SerialNumber)) {
    return true;
  }
  return false;
}

// operator!= @ 1470f95c0

bool __thiscall FMassEntityHandle::operator!=(FMassEntityHandle *this,FMassEntityHandle param_1)

{
  if ((this->Index == param_1.Index) && (this->SerialNumber == param_1.SerialNumber)) {
    return false;
  }
  return true;
}

// IsValid @ 1471929c0

bool __thiscall FMassEntityHandle::IsValid(FMassEntityHandle *this)

{
  if ((this->Index != 0) && (this->SerialNumber != 0)) {
    return true;
  }
  return false;
}

