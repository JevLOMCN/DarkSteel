// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FTextSearchHighlighter @ 1429b9ef0

FTextSearchHighlighter * __thiscall
SlateEditableTextTypes::FTextSearchHighlighter::FTextSearchHighlighter(FTextSearchHighlighter *this)

{
  this->_padding_ = (longlong)&___7FTextSearchHighlighter_SlateEditableTextTypes__6B_;
  return this;
}

// Create @ 1429de940

TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> * __cdecl
SlateEditableTextTypes::FTextSearchHighlighter::Create
          (TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> *__return_storage_ptr__)

{
  TRawPtrProxy<SlateEditableTextTypes::FTextSearchHighlighter> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FTextSearchHighlighter *)0x0) {
    (local_res8[0].Object)->_padding_ =
         (longlong)&___7FTextSearchHighlighter_SlateEditableTextTypes__6B_;
  }
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1><SlateEditableTextTypes::FTextSearchHighlighter>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// OnPaint @ 1429fd0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SlateEditableTextTypes::FTextSearchHighlighter::OnPaint
          (FTextSearchHighlighter *this,FPaintArgs *param_1,FLineView *param_2,
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
  FSlateColor *this_00;
  ESlateDrawEffect EVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auStackY_118 [32];
  undefined8 local_e8;
  FLinearColor_u_0 local_d0;
  TTransform2<float> local_c0;
  TTransform2<float> local_a8;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  dVar2 = (param_2->Offset).field0_0x0._s_0.X;
  dVar11 = (param_2->Offset).field0_0x0._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  this_00 = &param_5->HighlightColor;
  EVar5 = (param_5->HighlightColor).ColorUseRule;
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
  local_d0._s_0.G =
       (this_00->SpecifiedColor).field0_0x0._s_0.G *
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_d0._s_0.B =
       (this_00->SpecifiedColor).field0_0x0._s_0.B *
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_d0._s_0.R =
       (this_00->SpecifiedColor).field0_0x0._s_0.R *
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
  fVar1 = param_6->Scale;
  local_d0._s_0.A =
       (this_00->SpecifiedColor).field0_0x0._s_0.A *
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.A * __real_3e4ccccd;
  if (0.0 < param_4) {
    if ((param_11) && (this->bHasKeyboardFocus != false)) {
      EVar8 = None;
    }
    else {
      EVar8 = DisabledEffect;
    }
    TVar7 = (param_6->AbsolutePosition).field0_0x0._s_0;
    dVar12 = (double)(__real_3f800000 / fVar1);
    local_c0.M.M[0][1] = TVar7.X;
    local_c0.M.M[1][0] = TVar7.Y;
    local_e8._0_4_ = (undefined4)(dVar12 * (dVar2 + dVar3));
    local_e8._4_4_ = (undefined4)(dVar12 * (dVar11 + dVar4));
    local_c0.Trans.field0_0x0 = local_e8;
    dVar2 = (param_2->Size).field0_0x0._s_0.Y;
    dVar11 = (double)param_2->TextHeight;
    if ((double)param_2->TextHeight <= dVar2) {
      dVar11 = dVar2;
    }
    fVar10 = fVar1 * (float)local_e8._4_4_ + local_c0.M.M[1][0];
    fVar9 = fVar1 * (float)(undefined4)local_e8 + local_c0.M.M[0][1];
    local_c0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_c0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_c0.M.M[1][0] = (float)_UNK_15076b188;
    local_c0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_a8,&local_c0,&param_6->AccumulatedRenderTransform);
    local_90._s_0.Y = fVar10;
    local_90._s_0.X = fVar9;
    local_7c = CONCAT44((float)(dVar11 * dVar12),(float)((double)param_4 * dVar12));
    local_5c = param_6->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_74[0] = local_a8.M.M[0][0];
    local_74[1] = local_a8.M.M[0][1];
    afStack_6c[0] = local_a8.M.M[1][0];
    afStack_6c[1] = local_a8.M.M[1][1];
    local_64 = local_a8.Trans.field0_0x0;
    local_88 = fVar1;
    FSlateDrawElement::MakeBox
              (param_8,param_9 + 1,(FPaintGeometry *)&local_90._s_0,&param_5->HighlightShape,EVar8,
               (FLinearColor *)&local_d0._s_0);
    param_9 = param_9 + 1;
  }
  return param_9;
}

