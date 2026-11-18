// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FTextSelectionHighlighter @ 1429b9f10

FTextSelectionHighlighter * __thiscall
SlateEditableTextTypes::FTextSelectionHighlighter::FTextSelectionHighlighter
          (FTextSelectionHighlighter *this)

{
  this->_padding_ = (longlong)&___7FTextSelectionHighlighter_SlateEditableTextTypes__6B_;
  return this;
}

// Create @ 1429de990

TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> * __cdecl
SlateEditableTextTypes::FTextSelectionHighlighter::Create
          (TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *__return_storage_ptr__)

{
  TRawPtrProxy<SlateEditableTextTypes::FTextSelectionHighlighter> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FTextSelectionHighlighter *)0x0) {
    (local_res8[0].Object)->_padding_ =
         (longlong)&___7FTextSelectionHighlighter_SlateEditableTextTypes__6B_;
  }
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1><SlateEditableTextTypes::FTextSelectionHighlighter>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// OnPaint @ 1429fd350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SlateEditableTextTypes::FTextSelectionHighlighter::OnPaint
          (FTextSelectionHighlighter *this,FPaintArgs *param_1,FLineView *param_2,
          TVector2<double> *param_3,float param_4,FTextBlockStyle *param_5,FGeometry *param_6,
          FSlateRect *param_7,FSlateWindowElementList *param_8,int param_9,FWidgetStyle *param_10,
          bool param_11)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ESlateColorStylingMode EVar5;
  undefined1 uVar6;
  TVector2<float>_u_0_s_0 TVar7;
  float fVar8;
  FSlateColor *this_00;
  FLinearColor *pFVar9;
  ESlateDrawEffect EVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auStackY_138 [32];
  undefined8 local_108;
  TTransform2<float> local_f8;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  FLinearColor_u_0 local_c8;
  TTransform2<float> local_b8;
  TVector2<float>_u_0 local_a0;
  float local_98;
  undefined8 local_94;
  undefined8 local_8c;
  float local_84 [2];
  float afStack_7c [2];
  TVector2<float>_u_0 local_74;
  byte local_6c;
  ulonglong local_68;
  
  fVar8 = __real_3f800000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  dVar2 = (param_2->Offset).field0_0x0._s_0.X;
  dVar12 = (param_2->Offset).field0_0x0._s_0.Y;
  EVar5 = (param_5->SelectedBackgroundColor).ColorUseRule;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  if ((EVar5 == UseColor_Specified) || (EVar5 == UseColor_ColorTable)) {
    if (EVar5 == UseColor_ColorTable) {
      pFVar9 = FSlateColor::GetColorFromTable(&param_5->SelectedBackgroundColor);
      local_f8.M.M[0][0] = (pFVar9->field0_0x0)._s_0.R;
      local_f8.M.M[0][1] = (pFVar9->field0_0x0)._s_0.G;
      local_f8.M.M[1][0] = (pFVar9->field0_0x0)._s_0.B;
      local_f8.M.M[1][1] = (pFVar9->field0_0x0)._s_0.A;
    }
    else {
      local_f8.M.M[0][0] = (param_5->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.R;
      local_f8.M.M[0][1] = (param_5->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.G;
      local_f8.M.M[1][0] = (param_5->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B;
      local_f8.M.M[1][1] = (param_5->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A;
    }
    local_f8.M.M[0][0] = local_f8.M.M[0][0] * (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_f8.M.M[0][1] = local_f8.M.M[0][1] * (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_f8.M.M[1][0] = local_f8.M.M[1][0] * (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_f8.M.M[1][1] = local_f8.M.M[1][1] * (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
  }
  else {
    this_00 = &param_5->SelectedBackgroundColor;
    if (EVar5 != UseColor_Specified) {
      if (EVar5 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar5 == UseColor_Foreground) || (EVar5 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_10->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_10->SubduedForeground;
      }
    }
    local_f8.M.M[0][0] =
         ((FLinearColor::White.field0_0x0._s_0.R - (this_00->SpecifiedColor).field0_0x0._s_0.R) *
          __real_3f000000 - __real_3e4ccccd) * (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_f8.M.M[1][0] =
         ((FLinearColor::White.field0_0x0._s_0.B - (this_00->SpecifiedColor).field0_0x0._s_0.B) *
          __real_3f000000 + __real_3e19999a) * (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_f8.M.M[0][1] =
         ((FLinearColor::White.field0_0x0._s_0.G - (this_00->SpecifiedColor).field0_0x0._s_0.G) *
          __real_3f000000 - __real_3d4ccccd) * (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_f8.M.M[1][1] =
         ((FLinearColor::White.field0_0x0._s_0.A - (this_00->SpecifiedColor).field0_0x0._s_0.A) *
          __real_3f000000 + fVar8) * (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
  }
  local_c8._0_8_ = CONCAT44(local_f8.M.M[0][1],local_f8.M.M[0][0]);
  local_c8._8_8_ = CONCAT44(local_f8.M.M[1][1],local_f8.M.M[1][0]);
  fVar1 = param_6->Scale;
  if ((param_2->Range).EndIndex - (param_2->Range).BeginIndex < 1) {
    fVar11 = fVar1 * __real_40800000;
  }
  else {
    fVar11 = 0.0;
  }
  if (fVar11 <= param_4) {
    fVar11 = param_4;
  }
  if (0.0 < fVar11) {
    if ((param_11) && (this->bHasKeyboardFocus != false)) {
      EVar10 = None;
    }
    else {
      EVar10 = DisabledEffect;
    }
    TVar7 = (param_6->AbsolutePosition).field0_0x0._s_0;
    local_f8.M.M[0][1] = TVar7.X;
    local_f8.M.M[1][0] = TVar7.Y;
    dVar13 = (double)(fVar8 / fVar1);
    local_108._0_4_ = (undefined4)((dVar2 + dVar3) * dVar13);
    local_108._4_4_ = (undefined4)((dVar12 + dVar4) * dVar13);
    local_d0 = (float)((double)fVar11 * dVar13);
    local_f8.Trans.field0_0x0 = local_108;
    dVar2 = (param_2->Size).field0_0x0._s_0.Y;
    dVar12 = (double)param_2->TextHeight;
    if ((double)param_2->TextHeight <= dVar2) {
      dVar12 = dVar2;
    }
    fStack_cc = (float)(dVar12 * dVar13);
    fStack_d4 = fVar1 * (float)local_108._4_4_ + local_f8.M.M[1][0];
    local_d8 = fVar1 * (float)(undefined4)local_108 + local_f8.M.M[0][1];
    local_f8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_f8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_f8.M.M[1][0] = (float)_UNK_15076b188;
    local_f8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_b8,&local_f8,&param_6->AccumulatedRenderTransform);
    local_a0._s_0.Y = fStack_d4;
    local_a0._s_0.X = local_d8;
    local_8c = CONCAT44(fStack_cc,local_d0);
    local_6c = param_6->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_94 = 0;
    local_84[0] = local_b8.M.M[0][0];
    local_84[1] = local_b8.M.M[0][1];
    afStack_7c[0] = local_b8.M.M[1][0];
    afStack_7c[1] = local_b8.M.M[1][1];
    local_74 = local_b8.Trans.field0_0x0;
    local_98 = fVar1;
    FSlateDrawElement::MakeBox
              (param_8,param_9 + 1,(FPaintGeometry *)&local_a0._s_0,&param_5->HighlightShape,EVar10,
               (FLinearColor *)&local_c8._s_0);
    param_9 = param_9 + 1;
  }
  return param_9;
}

