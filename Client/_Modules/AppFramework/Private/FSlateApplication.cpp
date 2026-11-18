// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// GetDeltaTime @ 1430c8ca0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FSlateApplication::GetDeltaTime(FSlateApplication *this)

{
  return (float)(this->CurrentTime - this->LastTickTime);
}

