// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// SetTextStyle @ 14300dec0

FHyperlinkStyle * __thiscall
FHyperlinkStyle::SetTextStyle(FHyperlinkStyle *this,FTextBlockStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FSlateFontInfo::operator=(&(this->TextStyle).Font,&param_1->Font);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  (this->TextStyle).ColorAndOpacity.ColorUseRule = (param_1->ColorAndOpacity).ColorUseRule;
  (this->TextStyle).ColorAndOpacity.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextStyle).ColorAndOpacity.field_0x12 = uVar3;
  (this->TextStyle).ShadowOffset = param_1->ShadowOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).ShadowColorAndOpacity.field0_0x0 =
       *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).ShadowColorAndOpacity.field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->TextStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SelectedBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SelectedBackgroundColor).field_0x12;
  (this->TextStyle).SelectedBackgroundColor.ColorUseRule =
       (param_1->SelectedBackgroundColor).ColorUseRule;
  (this->TextStyle).SelectedBackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextStyle).SelectedBackgroundColor.field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HighlightColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0 + 8) = uVar1
  ;
  EVar2 = (param_1->HighlightColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->HighlightColor).field_0x12;
  (this->TextStyle).HighlightColor.ColorUseRule = (param_1->HighlightColor).ColorUseRule;
  (this->TextStyle).HighlightColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextStyle).HighlightColor.field_0x12 = uVar3;
  FSlateBrush::operator=(&(this->TextStyle).HighlightShape,&param_1->HighlightShape);
  FSlateBrush::operator=(&(this->TextStyle).StrikeBrush,&param_1->StrikeBrush);
  FSlateBrush::operator=(&(this->TextStyle).UnderlineBrush,&param_1->UnderlineBrush);
  (this->TextStyle).TransformPolicy = param_1->TransformPolicy;
  (this->TextStyle).OverflowPolicy = param_1->OverflowPolicy;
  return this;
}

