// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// IsColorSpecified @ 142ebb550

bool __thiscall FSlateColor::IsColorSpecified(FSlateColor *this)

{
  if ((this->ColorUseRule != UseColor_Specified) && (this->ColorUseRule != UseColor_ColorTable)) {
    return false;
  }
  return true;
}

