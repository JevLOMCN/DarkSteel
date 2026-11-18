// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// operator!= @ 14d8c3b00

bool __thiscall FSlateColor::operator!=(FSlateColor *this,FSlateColor *param_1)

{
  if (((((param_1->SpecifiedColor).field0_0x0._s_0.R == (this->SpecifiedColor).field0_0x0._s_0.R) &&
       ((param_1->SpecifiedColor).field0_0x0._s_0.G == (this->SpecifiedColor).field0_0x0._s_0.G)) &&
      ((param_1->SpecifiedColor).field0_0x0._s_0.B == (this->SpecifiedColor).field0_0x0._s_0.B)) &&
     ((((param_1->SpecifiedColor).field0_0x0._s_0.A == (this->SpecifiedColor).field0_0x0._s_0.A &&
       (this->ColorUseRule == param_1->ColorUseRule)) &&
      ((this->ColorUseRule != UseColor_ColorTable || (this->ColorTableId == param_1->ColorTableId)))
      ))) {
    return false;
  }
  return true;
}

