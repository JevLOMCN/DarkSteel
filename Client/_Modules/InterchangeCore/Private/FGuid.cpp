// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// FGuid @ 14e400890

FGuid * __thiscall FGuid::FGuid(FGuid *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  this->D = param_4;
  this->A = param_1;
  this->B = param_2;
  this->C = param_3;
  return this;
}

// FGuid @ 14e4008b0

FGuid * __thiscall FGuid::FGuid(FGuid *this)

{
  this->A = 0;
  this->B = 0;
  this->C = 0;
  this->D = 0;
  return this;
}

