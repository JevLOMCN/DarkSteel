// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FCollisionEnabledMask @ 1482d86e0

FCollisionEnabledMask * __thiscall
FCollisionEnabledMask::FCollisionEnabledMask(FCollisionEnabledMask *this,schar param_1)

{
  this->Bits = param_1;
  return this;
}

// FCollisionEnabledMask @ 1482d86f0

FCollisionEnabledMask * __thiscall
FCollisionEnabledMask::FCollisionEnabledMask(FCollisionEnabledMask *this,Type param_1)

{
  this->Bits = '\x01' << ((byte)param_1 & 0x1f);
  return this;
}

// operator_signed_char @ 1482de880

schar __thiscall FCollisionEnabledMask::operator_signed_char(FCollisionEnabledMask *this)

{
  return this->Bits;
}

// operator_bool @ 1482de890

bool __thiscall FCollisionEnabledMask::operator_bool(FCollisionEnabledMask *this)

{
  return this->Bits != '\0';
}

// operator& @ 1482de940

FCollisionEnabledMask __thiscall
FCollisionEnabledMask::operator&(FCollisionEnabledMask *this,FCollisionEnabledMask param_1)

{
  undefined7 in_register_00000011;
  byte in_R8B;
  
  *(byte *)CONCAT71(in_register_00000011,param_1.Bits) = this->Bits & in_R8B;
  return (FCollisionEnabledMask)param_1.Bits;
}

// operator& @ 1482de960

FCollisionEnabledMask __thiscall
FCollisionEnabledMask::operator&(FCollisionEnabledMask *this,Type param_1)

{
  undefined4 in_register_00000014;
  byte in_R8B;
  
  *(char *)CONCAT44(in_register_00000014,param_1) = '\x01' << (in_R8B & 0x1f) & this->Bits;
  return (FCollisionEnabledMask)(schar)param_1;
}

// operator| @ 1482e2f50

FCollisionEnabledMask __thiscall
FCollisionEnabledMask::operator|(FCollisionEnabledMask *this,FCollisionEnabledMask param_1)

{
  undefined7 in_register_00000011;
  byte in_R8B;
  
  *(byte *)CONCAT71(in_register_00000011,param_1.Bits) = in_R8B | this->Bits;
  return (FCollisionEnabledMask)param_1.Bits;
}

// operator| @ 1482e2f60

FCollisionEnabledMask __thiscall
FCollisionEnabledMask::operator|(FCollisionEnabledMask *this,Type param_1)

{
  undefined4 in_register_00000014;
  uint in_R8D;
  
  *(byte *)CONCAT44(in_register_00000014,param_1) = this->Bits | (byte)(1 << (in_R8D & 0x1f));
  return (FCollisionEnabledMask)(schar)param_1;
}

