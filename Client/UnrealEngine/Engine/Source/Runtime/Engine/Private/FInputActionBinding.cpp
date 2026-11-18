// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GenerateNewHandle @ 1478ce470

void __thiscall FInputActionBinding::GenerateNewHandle(FInputActionBinding *this)

{
  this->Handle = GHandle;
  GHandle = GHandle + 1;
  return;
}

