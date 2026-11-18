// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// IsSet @ 1429f63c0

bool __thiscall FOptionalSize::IsSet(FOptionalSize *this)

{
  if (Unspecified != this->Size) {
    return true;
  }
  return false;
}

