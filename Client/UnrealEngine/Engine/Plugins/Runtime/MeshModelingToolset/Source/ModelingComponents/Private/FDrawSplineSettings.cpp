// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// FDrawSplineSettings @ 14cb61170

FDrawSplineSettings * __thiscall
UE::Geometry::SplineUtil::FDrawSplineSettings::FDrawSplineSettings(FDrawSplineSettings *this)

{
  FLinearColor *pFVar1;
  FLinearColor_u_0 local_18;
  
  if (FStyleColors::White.ColorUseRule == UseColor_ColorTable) {
    pFVar1 = FSlateColor::GetColorFromTable(&FStyleColors::White);
    local_18._s_0.R = (pFVar1->field0_0x0)._s_0.R;
    local_18._s_0.G = (pFVar1->field0_0x0)._s_0.G;
    local_18._s_0.B = (pFVar1->field0_0x0)._s_0.B;
    local_18._s_0.A = (pFVar1->field0_0x0)._s_0.A;
  }
  else {
    local_18._s_0.R = (float)FStyleColors::White.SpecifiedColor.field0_0x0._0_4_;
    local_18._s_0.G = (float)FStyleColors::White.SpecifiedColor.field0_0x0._4_4_;
    local_18._s_0.B = (float)FStyleColors::White.SpecifiedColor.field0_0x0._8_4_;
    local_18._s_0.A = (float)FStyleColors::White.SpecifiedColor.field0_0x0._12_4_;
  }
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  if (FStyleColors::AccentOrange.ColorUseRule == UseColor_ColorTable) {
    pFVar1 = FSlateColor::GetColorFromTable(&FStyleColors::AccentOrange);
    local_18._s_0.R = (pFVar1->field0_0x0)._s_0.R;
    local_18._s_0.G = (pFVar1->field0_0x0)._s_0.G;
    local_18._s_0.B = (pFVar1->field0_0x0)._s_0.B;
    local_18._s_0.A = (pFVar1->field0_0x0)._s_0.A;
  }
  else {
    local_18._s_0.R = (float)FStyleColors::AccentOrange.SpecifiedColor.field0_0x0._0_4_;
    local_18._s_0.G = (float)FStyleColors::AccentOrange.SpecifiedColor.field0_0x0._4_4_;
    local_18._s_0.B = (float)FStyleColors::AccentOrange.SpecifiedColor.field0_0x0._8_4_;
    local_18._s_0.A = (float)FStyleColors::AccentOrange.SpecifiedColor.field0_0x0._12_4_;
  }
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  this->ScaleVisualizationWidth = 0.0;
  this->SelectedKeys = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  return this;
}

