// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// SetForegroundColor @ 1425fc710

FWidgetStyle * __thiscall
FWidgetStyle::SetForegroundColor(FWidgetStyle *this,TAttribute<FSlateColor> *param_1)

{
  ESlateColorStylingMode EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FSlateColor *this_00;
  float fVar6;
  
  this_00 = TAttribute<FSlateColor>::Get(param_1);
  EVar1 = this_00->ColorUseRule;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&this->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&this->SubduedForeground;
    }
  }
  fVar2 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
  fVar3 = (this_00->SpecifiedColor).field0_0x0._s_0.G;
  fVar4 = (this_00->SpecifiedColor).field0_0x0._s_0.B;
  fVar5 = (this_00->SpecifiedColor).field0_0x0._s_0.A;
  fVar6 = fVar5 * __real_3f19999a;
  (this->SubduedForeground).field0_0x0._s_0.R = fVar2;
  (this->SubduedForeground).field0_0x0._s_0.G = fVar3;
  (this->SubduedForeground).field0_0x0._s_0.B = fVar4;
  (this->SubduedForeground).field0_0x0._s_0.A = fVar5;
  (this->SubduedForeground).field0_0x0._s_0.A = fVar6;
  (this->ForegroundColor).field0_0x0._s_0.R = fVar2;
  (this->ForegroundColor).field0_0x0._s_0.G = fVar3;
  (this->ForegroundColor).field0_0x0._s_0.B = fVar4;
  (this->ForegroundColor).field0_0x0._s_0.A = fVar5;
  return this;
}

