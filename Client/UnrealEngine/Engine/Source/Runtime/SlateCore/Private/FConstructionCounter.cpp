// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ResetCounter @ 14258f5e0

void __cdecl UE::Slate::Private::FConstructionCounter::ResetCounter(void)

{
  DefaultConstructionCounter = 0;
  CopyConstructionCounter = 0;
  MoveConstructionCounter = 0;
  CopyOperatorCounter = 0;
  MoveOperatorCounter = 0;
  return;
}

