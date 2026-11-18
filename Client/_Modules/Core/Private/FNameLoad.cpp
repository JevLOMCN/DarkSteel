// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// SetOut @ 141a91f60

void __thiscall FNameLoad<1>::SetOut(FNameLoad<1> *this,FNameEntryId param_1)

{
  (this->Out->Id).Value = param_1.Value;
  return;
}

