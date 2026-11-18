// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 1

// FSlateRoundedBoxBrush<FSlateColor> @ 14d82a110

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,TVector2<double> *param_2)

{
  float local_res8;
  float fStackX_c;
  
  fStackX_c = (float)(param_2->field0_0x0)._s_0.Y;
  local_res8 = (float)(param_2->field0_0x0)._s_0.X;
  FSlateRoundedBoxBrush<FSlateColor>(this,param_1,(FDeprecateVector2DParameter *)&local_res8);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  return this;
}

