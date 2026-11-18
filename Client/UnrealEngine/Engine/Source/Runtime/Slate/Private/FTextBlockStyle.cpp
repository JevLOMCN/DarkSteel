// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// IsIdenticalTo @ 1429f55c0

bool __thiscall FTextBlockStyle::IsIdenticalTo(FTextBlockStyle *this,FTextBlockStyle *param_1)

{
  ESlateColorStylingMode EVar1;
  bool bVar2;
  
  bVar2 = FSlateFontInfo::IsIdenticalTo(&this->Font,&param_1->Font);
  if ((((((bVar2) &&
         ((param_1->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R ==
          (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R)) &&
        ((param_1->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G ==
         (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G)) &&
       ((((param_1->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B ==
          (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B &&
         ((param_1->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A ==
          (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A)) &&
        ((EVar1 = (this->ColorAndOpacity).ColorUseRule,
         EVar1 == (param_1->ColorAndOpacity).ColorUseRule &&
         ((EVar1 != UseColor_ColorTable ||
          ((this->ColorAndOpacity).ColorTableId == (param_1->ColorAndOpacity).ColorTableId))))))))
      && (*(float *)&param_1->ShadowOffset == *(float *)&this->ShadowOffset)) &&
     ((((*(float *)&(param_1->ShadowOffset).field_0x4 == *(float *)&(this->ShadowOffset).field_0x4
        && ((param_1->ShadowColorAndOpacity).field0_0x0._s_0.R ==
            (this->ShadowColorAndOpacity).field0_0x0._s_0.R)) &&
       ((param_1->ShadowColorAndOpacity).field0_0x0._s_0.G ==
        (this->ShadowColorAndOpacity).field0_0x0._s_0.G)) &&
      (((((param_1->ShadowColorAndOpacity).field0_0x0._s_0.B ==
          (this->ShadowColorAndOpacity).field0_0x0._s_0.B &&
         ((param_1->ShadowColorAndOpacity).field0_0x0._s_0.A ==
          (this->ShadowColorAndOpacity).field0_0x0._s_0.A)) &&
        ((((param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.R ==
           (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.R &&
          (((param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.G ==
            (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.G &&
           ((param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B ==
            (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B)))) &&
         ((param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A ==
          (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A)))) &&
       (((EVar1 = (this->SelectedBackgroundColor).ColorUseRule,
         EVar1 == (param_1->SelectedBackgroundColor).ColorUseRule &&
         ((((EVar1 != UseColor_ColorTable ||
            ((this->SelectedBackgroundColor).ColorTableId ==
             (param_1->SelectedBackgroundColor).ColorTableId)) &&
           ((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.R ==
            (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.R)) &&
          (((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.G ==
            (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.G &&
           ((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.B ==
            (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.B)))))) &&
        (((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.A ==
          (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.A &&
         ((EVar1 = (this->HighlightColor).ColorUseRule,
          EVar1 == (param_1->HighlightColor).ColorUseRule &&
          ((EVar1 != UseColor_ColorTable ||
           ((this->HighlightColor).ColorTableId == (param_1->HighlightColor).ColorTableId)))))))))))
      ))) {
    bVar2 = FSlateBrush::operator==(&this->HighlightShape,&param_1->HighlightShape);
    if (bVar2) {
      bVar2 = FSlateBrush::operator==(&this->StrikeBrush,&param_1->StrikeBrush);
      if (bVar2) {
        bVar2 = FSlateBrush::operator==(&this->UnderlineBrush,&param_1->UnderlineBrush);
        if (((bVar2) && (this->TransformPolicy == param_1->TransformPolicy)) &&
           (this->OverflowPolicy == param_1->OverflowPolicy)) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsIdenticalTo @ 1429f5840

bool __thiscall FTextBlockStyle::IsIdenticalTo(FTextBlockStyle *this,CompareParams *param_1)

{
  ESlateColorStylingMode EVar1;
  FSlateColor *pFVar2;
  FLinearColor *pFVar3;
  FTextBlockStyle *pFVar4;
  bool bVar5;
  FSlateBrush *pFVar6;
  FSlateBrush *pFVar7;
  
  pFVar7 = param_1->StrikeBrush;
  if (pFVar7 == (FSlateBrush *)0x0) {
    pFVar7 = &param_1->StyleBase->StrikeBrush;
  }
  pFVar6 = param_1->HighlightShape;
  if (pFVar6 == (FSlateBrush *)0x0) {
    pFVar6 = &param_1->StyleBase->HighlightShape;
  }
  bVar5 = FSlateFontInfo::IsIdenticalTo(&this->Font,param_1->Font);
  if ((((((bVar5) &&
         (pFVar2 = param_1->ColorAndOpacity,
         (pFVar2->SpecifiedColor).field0_0x0._s_0.R ==
         (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R)) &&
        ((pFVar2->SpecifiedColor).field0_0x0._s_0.G ==
         (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G)) &&
       ((((pFVar2->SpecifiedColor).field0_0x0._s_0.B ==
          (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B &&
         ((pFVar2->SpecifiedColor).field0_0x0._s_0.A ==
          (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A)) &&
        ((EVar1 = (this->ColorAndOpacity).ColorUseRule, EVar1 == pFVar2->ColorUseRule &&
         ((EVar1 != UseColor_ColorTable ||
          ((this->ColorAndOpacity).ColorTableId == pFVar2->ColorTableId)))))))) &&
      (((param_1->ShadowOffset).field0_0x0._s_0.X == *(float *)&this->ShadowOffset &&
       ((((param_1->ShadowOffset).field0_0x0._s_0.Y == *(float *)&(this->ShadowOffset).field_0x4 &&
         (pFVar3 = param_1->ShadowColorAndOpacity,
         (pFVar3->field0_0x0)._s_0.R == (this->ShadowColorAndOpacity).field0_0x0._s_0.R)) &&
        ((pFVar3->field0_0x0)._s_0.G == (this->ShadowColorAndOpacity).field0_0x0._s_0.G)))))) &&
     ((((((pFVar3->field0_0x0)._s_0.B == (this->ShadowColorAndOpacity).field0_0x0._s_0.B &&
         ((pFVar3->field0_0x0)._s_0.A == (this->ShadowColorAndOpacity).field0_0x0._s_0.A)) &&
        ((pFVar4 = param_1->StyleBase,
         (pFVar4->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.R ==
         (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.R &&
         (((pFVar4->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.G ==
           (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.G &&
          ((pFVar4->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B ==
           (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B)))))) &&
       ((pFVar4->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A ==
        (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A)) &&
      (((EVar1 = (this->SelectedBackgroundColor).ColorUseRule,
        EVar1 == (pFVar4->SelectedBackgroundColor).ColorUseRule &&
        ((((EVar1 != UseColor_ColorTable ||
           ((this->SelectedBackgroundColor).ColorTableId ==
            (pFVar4->SelectedBackgroundColor).ColorTableId)) &&
          ((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.R ==
           (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.R)) &&
         (((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.G ==
           (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.G &&
          ((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.B ==
           (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.B)))))) &&
       (((param_1->HighlightColor).SpecifiedColor.field0_0x0._s_0.A ==
         (this->HighlightColor).SpecifiedColor.field0_0x0._s_0.A &&
        ((((EVar1 = (this->HighlightColor).ColorUseRule,
           EVar1 == (param_1->HighlightColor).ColorUseRule &&
           ((EVar1 != UseColor_ColorTable ||
            ((this->HighlightColor).ColorTableId == (param_1->HighlightColor).ColorTableId)))) &&
          (bVar5 = FSlateBrush::operator==(&this->HighlightShape,pFVar6), bVar5)) &&
         ((((bVar5 = FSlateBrush::operator==(&this->StrikeBrush,pFVar7), bVar5 &&
            (bVar5 = FSlateBrush::operator==(&this->UnderlineBrush,&pFVar4->UnderlineBrush), bVar5))
           && (this->TransformPolicy == pFVar4->TransformPolicy)) &&
          (this->OverflowPolicy == pFVar4->OverflowPolicy)))))))))))) {
    return true;
  }
  return false;
}

