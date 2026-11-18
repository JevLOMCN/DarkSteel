// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FSlateTextHighlightRunRenderer @ 142845b10

FSlateTextHighlightRunRenderer * __thiscall
FSlateTextHighlightRunRenderer::FSlateTextHighlightRunRenderer(FSlateTextHighlightRunRenderer *this)

{
  *this = (FSlateTextHighlightRunRenderer)&___7FSlateTextHighlightRunRenderer__6B_;
  return this;
}

// ~FSlateTextHighlightRunRenderer @ 142849d10

void __thiscall
FSlateTextHighlightRunRenderer::~FSlateTextHighlightRunRenderer
          (FSlateTextHighlightRunRenderer *this)

{
  *this = (FSlateTextHighlightRunRenderer)&___7IRunRenderer__6B_;
  return;
}

// Create @ 142865550

TSharedRef<FSlateTextHighlightRunRenderer,1> * __cdecl
FSlateTextHighlightRunRenderer::Create
          (TSharedRef<FSlateTextHighlightRunRenderer,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FSlateTextHighlightRunRenderer> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FSlateTextHighlightRunRenderer *)0x0) {
    *local_res8[0].Object = (FSlateTextHighlightRunRenderer)&___7FSlateTextHighlightRunRenderer__6B_
    ;
  }
  TSharedRef<FSlateTextHighlightRunRenderer,1>::
  TSharedRef<FSlateTextHighlightRunRenderer,1><FSlateTextHighlightRunRenderer>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// OnPaint @ 14288a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateTextHighlightRunRenderer::OnPaint
          (FSlateTextHighlightRunRenderer *this,FPaintArgs *param_1,FLineView *param_2,
          TSharedRef<ISlateRun,1> *param_3,TSharedRef<ILayoutBlock,1> *param_4,
          FTextBlockStyle *param_5,FGeometry *param_6,FSlateRect *param_7,
          FSlateWindowElementList *param_8,int param_9,FWidgetStyle *param_10,bool param_11)

{
  double dVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  TVector2<float>_u_0_s_0 TVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  FSlateColor *pFVar8;
  double dVar9;
  float fVar10;
  undefined1 auStackY_1b8 [32];
  undefined8 local_168;
  FLinearColor_u_0 local_160;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  TTransform2<float> local_140;
  undefined4 local_128;
  FSlateWindowElementList *local_120;
  TSharedRef<ISlateRun,1> *local_118;
  FSlateRect *local_110;
  FPaintArgs *local_108;
  TTransform2<float> local_100;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_110 = param_7;
  local_120 = param_8;
  local_118 = param_3;
  local_108 = param_1;
  (**(code **)((longlong)*param_4->Object + 0x38))(param_4->Object,&local_e8);
  local_e0 = (param_2->Offset).field0_0x0._s_0.Y;
  pFVar8 = &(param_5->HighlightShape).TintColor;
  EVar2 = (param_5->HighlightShape).TintColor.ColorUseRule;
  fVar10 = __real_3f800000 / param_6->Scale;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar8 = (FSlateColor *)&param_10->ForegroundColor;
    }
    else {
      pFVar8 = (FSlateColor *)&param_10->SubduedForeground;
    }
  }
  local_160._s_0.R =
       (pFVar8->SpecifiedColor).field0_0x0._s_0.R *
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_160._s_0.G =
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.G *
       *(float *)((longlong)&(pFVar8->SpecifiedColor).field0_0x0 + 4);
  local_160._s_0.A =
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.A *
       *(float *)((longlong)&(pFVar8->SpecifiedColor).field0_0x0 + 0xc);
  local_160._s_0.B =
       (param_10->ColorAndOpacityTint).field0_0x0._s_0.B *
       *(float *)((longlong)&(pFVar8->SpecifiedColor).field0_0x0 + 8);
  dVar5 = (double)fVar10;
  dVar1 = (param_2->Size).field0_0x0._s_0.Y;
  dVar9 = dVar5 * local_e0;
  local_168._4_4_ = (float)dVar9;
  local_168._0_4_ = (float)(dVar5 * local_e8);
  pdVar7 = (double *)(**(code **)((longlong)*param_4->Object + 0x18))(param_4->Object,local_a8);
  TVar4 = (param_6->AbsolutePosition).field0_0x0._s_0;
  local_100.M.M[0][1] = TVar4.X;
  local_100.M.M[1][0] = TVar4.Y;
  local_148 = (float)(dVar5 * *pdVar7);
  local_100.Trans.field0_0x0 = local_168;
  fStack_144 = (float)(dVar1 * dVar5);
  fVar10 = param_6->Scale;
  fStack_14c = fVar10 * (float)dVar9 + local_100.M.M[1][0];
  local_150 = fVar10 * (float)(dVar5 * local_e8) + local_100.M.M[0][1];
  local_100.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_100.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_100.M.M[1][0] = (float)_UNK_15076b188;
  local_100.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_140,&local_100,&param_6->AccumulatedRenderTransform);
  local_98._s_0.Y = fStack_14c;
  local_98._s_0.X = local_150;
  local_84 = CONCAT44(fStack_144,local_148);
  local_64 = param_6->bHasRenderTransform * '\x02' | local_64 & 0xfc;
  local_8c = 0;
  local_7c[0] = local_140.M.M[0][0];
  local_7c[1] = local_140.M.M[0][1];
  afStack_74[0] = local_140.M.M[1][0];
  afStack_74[1] = local_140.M.M[1][1];
  local_6c = local_140.Trans.field0_0x0;
  local_90 = fVar10;
  FSlateDrawElement::MakeBox
            (local_120,param_9 + 1,(FPaintGeometry *)&local_98._s_0,&param_5->HighlightShape,
             !param_11 << 5,(FLinearColor *)&local_160._s_0);
  EVar2 = (param_5->HighlightColor).ColorUseRule;
  pFVar8 = &param_5->HighlightColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar8 = (FSlateColor *)&param_10->ForegroundColor;
    }
    else {
      pFVar8 = (FSlateColor *)&param_10->SubduedForeground;
    }
  }
  local_c8 = (pFVar8->SpecifiedColor).field0_0x0._s_0.R;
  fStack_c4 = (pFVar8->SpecifiedColor).field0_0x0._s_0.G;
  fStack_c0 = (pFVar8->SpecifiedColor).field0_0x0._s_0.B;
  fStack_bc = (param_10->ForegroundColor).field0_0x0._s_0.A;
  local_d8 = *(undefined8 *)&(param_10->ColorAndOpacityTint).field0_0x0;
  uStack_d0 = *(undefined8 *)((longlong)&(param_10->ColorAndOpacityTint).field0_0x0 + 8);
  fStack_ac = fStack_bc * FWidgetStyle::SubdueAmount;
  local_140.M.M[1] = (float  [2])param_4;
  local_140.Trans.field0_0x0 = (TVector2<float>_u_0)param_5;
  local_128 = 0;
  local_140.M.M[0] = (float  [2])param_2;
  local_b8 = local_c8;
  fStack_b4 = fStack_c4;
  fStack_b0 = fStack_c0;
  iVar6 = (**(code **)((longlong)*local_118->Object + 0xa0))
                    (local_118->Object,local_108,&local_140,param_6);
  return iVar6;
}

