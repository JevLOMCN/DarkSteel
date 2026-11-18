// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CountBytes @ 1418425b0

void __thiscall
FArchiveCountConfigMem::CountBytes(FArchiveCountConfigMem *this,ulong64 param_1,ulong64 param_2)

{
  this->Num = this->Num + param_1;
  this->Max = this->Max + param_2;
  return;
}

