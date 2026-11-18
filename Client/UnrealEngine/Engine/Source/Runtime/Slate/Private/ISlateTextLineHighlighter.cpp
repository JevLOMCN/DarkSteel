// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ISlateTextLineHighlighter @ 142846e40

ISlateTextLineHighlighter * __thiscall
ISlateTextLineHighlighter::ISlateTextLineHighlighter
          (ISlateTextLineHighlighter *this,FSlateBrush *param_1,FSlateFontInfo *param_2,
          FSlateColor *param_3,FDeprecateVector2DParameter param_4,FLinearColor *param_5)

{
  undefined1 uVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  double dVar5;
  TVector2<float>_u_0 TVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar12;
  bool bVar13;
  undefined6 uVar14;
  undefined3 uVar15;
  ESlateColorStylingMode EVar16;
  byte bVar17;
  
  this->_padding_ = (longlong)&___7ISlateTextLineHighlighter__6B_;
  (this->LineBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  uVar4 = *(undefined8 *)((longlong)&(param_1->TintColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LineBrush).TintColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TintColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LineBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar7 = (param_1->TintColor).ColorTableId;
  uVar8 = *(undefined2 *)&(param_1->TintColor).field_0x12;
  (this->LineBrush).TintColor.ColorUseRule = (param_1->TintColor).ColorUseRule;
  (this->LineBrush).TintColor.ColorTableId = EVar7;
  *(undefined2 *)&(this->LineBrush).TintColor.field_0x12 = uVar8;
  (this->LineBrush).DrawAs.Value = (param_1->DrawAs).Value;
  (this->LineBrush).Tiling.Value = (param_1->Tiling).Value;
  (this->LineBrush).Mirroring.Value = (param_1->Mirroring).Value;
  (this->LineBrush).ImageType.Value = (param_1->ImageType).Value;
  (this->LineBrush).ImageSize = param_1->ImageSize;
  fVar9 = (param_1->Margin).Top;
  fVar10 = (param_1->Margin).Right;
  fVar11 = (param_1->Margin).Bottom;
  (this->LineBrush).Margin.Left = (param_1->Margin).Left;
  (this->LineBrush).Margin.Top = fVar9;
  (this->LineBrush).Margin.Right = fVar10;
  (this->LineBrush).Margin.Bottom = fVar11;
  pUVar2 = (param_1->ResourceObject).field0_0x0.DebugPtr;
  (this->LineBrush).ResourceObject.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  dVar5 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
  (this->LineBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
  (this->LineBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
  (this->LineBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
       (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
  (this->LineBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar5;
  uVar4 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->LineBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LineBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8)
       = uVar4;
  TVar12.Value = (param_1->OutlineSettings).RoundingType.Value;
  bVar13 = (param_1->OutlineSettings).bUseBrushTransparency;
  uVar14 = *(undefined6 *)&(param_1->OutlineSettings).field_0x3a;
  *(undefined8 *)&(this->LineBrush).OutlineSettings.Color.ColorUseRule =
       *(undefined8 *)&(param_1->OutlineSettings).Color.ColorUseRule;
  (this->LineBrush).OutlineSettings.RoundingType =
       (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar12.Value;
  (this->LineBrush).OutlineSettings.bUseBrushTransparency = bVar13;
  *(undefined6 *)&(this->LineBrush).OutlineSettings.field_0x3a = uVar14;
  TVar6 = (param_1->UVRegion).Max.field0_0x0;
  (this->LineBrush).UVRegion.Min.field0_0x0 = (param_1->UVRegion).Min.field0_0x0;
  (this->LineBrush).UVRegion.Max.field0_0x0 = TVar6;
  uVar15 = *(undefined3 *)&(param_1->UVRegion).field_0x11;
  (this->LineBrush).UVRegion.bIsValid = (param_1->UVRegion).bIsValid;
  *(undefined3 *)&(this->LineBrush).UVRegion.field_0x11 = uVar15;
  uVar1 = (this->LineBrush).field_0x94;
  bVar17 = ((this->LineBrush).bIsDynamicallyLoaded ^ param_1->bIsDynamicallyLoaded) & 1 ^ uVar1;
  (this->LineBrush).field_0x94 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x94) & 2 ^ bVar17;
  (this->LineBrush).field_0x94 = bVar17;
  (this->LineBrush).field_0x94 = (bVar17 ^ param_1->field_0x94) & 4 ^ bVar17;
  (this->LineBrush).ResourceHandle.Data.Object = (param_1->ResourceHandle).Data.Object;
  pTVar3 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  (this->LineBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->LineBrush).ResourceName = param_1->ResourceName;
  FSlateFontInfo::FSlateFontInfo(&this->FontInfo,param_2);
  uVar4 = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
  EVar16 = param_3->ColorUseRule;
  EVar7 = param_3->ColorTableId;
  uVar8 = *(undefined2 *)&param_3->field_0x12;
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar4;
  (this->ColorAndOpacity).ColorUseRule = EVar16;
  (this->ColorAndOpacity).ColorTableId = EVar7;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar8;
  this->ShadowOffset = (FDeprecateSlateVector2D)param_4;
  uVar4 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = uVar4;
  return this;
}

// OnPaint @ 14288c7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
ISlateTextLineHighlighter::OnPaint
          (ISlateTextLineHighlighter *this,FPaintArgs *param_1,FLineView *param_2,
          TVector2<double> *param_3,float param_4,FTextBlockStyle *param_5,FGeometry *param_6,
          FSlateRect *param_7,FSlateWindowElementList *param_8,int param_9,FWidgetStyle *param_10,
          bool param_11)

{
  ESlateColorStylingMode EVar1;
  undefined1 uVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  float afVar12 [2];
  bool bVar13;
  ushort uVar14;
  short sVar15;
  int iVar16;
  FSlateApplication *pFVar17;
  FSlateColor *this_00;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_248 [32];
  undefined8 local_218;
  short local_210 [2];
  short local_20c [2];
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  FLinearColor_u_0 local_1f0;
  FLinearColor_u_0 local_1e0;
  TVector2<float>_u_0_s_0 local_1cc;
  TVector2<float>_u_0_s_0 local_1c0;
  TSharedRef<FSlateFontCache,1> local_1b8;
  TTransform2<float> local_1a8;
  TTransform2<float> local_190;
  TTransform2<float> local_178;
  TTransform2<float> local_160;
  TVector2<float>_u_0 local_148;
  float local_140;
  undefined8 local_13c;
  undefined8 local_134;
  float local_12c [2];
  float afStack_124 [2];
  TVector2<float>_u_0 local_11c;
  byte local_114;
  TVector2<float>_u_0 local_110;
  float local_108;
  undefined8 local_104;
  undefined8 local_fc;
  float local_f4 [2];
  float afStack_ec [2];
  TVector2<float>_u_0 local_e4;
  byte local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar17 = FSlateApplication::Get();
  lVar3 = *(longlong *)&pFVar17->field_0x60;
  if ((*(longlong *)(lVar3 + 8) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    iVar16 = (*pcVar4)();
    return iVar16;
  }
  FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar3 + 8),&local_1b8);
  uVar14 = FSlateFontCache::GetMaxCharacterHeight(local_1b8.Object,&this->FontInfo,param_6->Scale);
  sVar15 = FSlateFontCache::GetBaseline(local_1b8.Object,&this->FontInfo,param_6->Scale);
  pcVar4 = *(code **)(this->_padding_ + 0x18);
  (*pcVar4)(this,pcVar4,local_210,local_20c);
  fVar20 = param_6->Scale;
  fVar24 = (float)((param_2->Offset).field0_0x0._s_0.X + (param_3->field0_0x0)._s_0.X);
  fVar23 = __real_3f800000 / fVar20;
  if (local_20c[0] < 1) {
    local_20c[0] = 1;
  }
  fVar25 = (float)(((param_2->Offset).field0_0x0._s_0.Y + (param_3->field0_0x0)._s_0.Y +
                   (double)(int)sVar15 + (double)uVar14) -
                  (double)((float)(int)local_210[0] * __real_3f000000));
  if (param_4 != 0.0) {
    EVar1 = (this->ColorAndOpacity).ColorUseRule;
    this_00 = &this->ColorAndOpacity;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
        fVar20 = param_6->Scale;
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_10->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_10->SubduedForeground;
      }
    }
    afVar11 = _UNK_15076b188;
    afVar9 = ___xmm_3f80000000000000000000003f800000;
    fVar5 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
    fVar6 = (this_00->SpecifiedColor).field0_0x0._s_0.G;
    fVar7 = (this_00->SpecifiedColor).field0_0x0._s_0.B;
    fVar8 = (this_00->SpecifiedColor).field0_0x0._s_0.A;
    if (((this->ShadowColorAndOpacity).field0_0x0._s_0.A <= 0.0) ||
       (fVar22 = *(float *)&(this->ShadowOffset).field_0x4,
       fVar22 * fVar22 + *(float *)&this->ShadowOffset * *(float *)&this->ShadowOffset <= 0.0)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    fVar22 = *(float *)&(this->ShadowOffset).field_0x4;
    if (fVar22 <= 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = fVar22 * fVar20;
    }
    fVar21 = *(float *)&this->ShadowOffset;
    if (fVar21 <= 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = fVar21 * fVar20;
    }
    if (0.0 <= fVar22) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = (float)((uint)(fVar22 * fVar20) ^ __xmm_80000000800000008000000080000000);
    }
    if (0.0 <= fVar21) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (float)((uint)(fVar21 * fVar20) ^ __xmm_80000000800000008000000080000000);
    }
    if (bVar13) {
      local_1f0._s_0.R =
           (param_10->ColorAndOpacityTint).field0_0x0._s_0.R *
           (this->ShadowColorAndOpacity).field0_0x0._s_0.R;
      local_1cc = (param_6->AbsolutePosition).field0_0x0._s_0;
      local_1f0._s_0.G =
           (this->ShadowColorAndOpacity).field0_0x0._s_0.G *
           (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_1f0._s_0.B =
           (this->ShadowColorAndOpacity).field0_0x0._s_0.B *
           (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_1f0._s_0.A =
           (this->ShadowColorAndOpacity).field0_0x0._s_0.A *
           (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_1a8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_1a8.M.M[0][1] = _UNK_15076b184;
      local_1a8.M.M[1][0] = _UNK_15076b188;
      local_1a8.M.M[1][1] = _UNK_15076b18c;
      local_208._0_4_ = (fVar24 + fVar18) * fVar23;
      local_208._4_4_ = (fVar25 + fVar19) * fVar23;
      local_1f8 = fVar23 * param_4;
      fStack_1f4 = (float)(int)local_20c[0] * fVar23;
      local_1a8.Trans.field0_0x0 = local_208;
      fStack_1fc = (float)local_208._4_4_ * fVar20 + local_1cc.Y;
      local_200 = (float)(undefined4)local_208 * fVar20 + local_1cc.X;
      Concatenate<TTransform2<float>_>(&local_190,&local_1a8,&param_6->AccumulatedRenderTransform);
      local_148._s_0.Y = fStack_1fc;
      local_148._s_0.X = local_200;
      local_134 = CONCAT44(fStack_1f4,local_1f8);
      param_9 = param_9 + 1;
      local_114 = param_6->bHasRenderTransform * '\x02' | local_114 & 0xfc;
      local_13c = 0;
      local_12c[0] = local_190.M.M[0][0];
      local_12c[1] = local_190.M.M[0][1];
      afStack_124[0] = local_190.M.M[1][0];
      afStack_124[1] = local_190.M.M[1][1];
      local_11c = local_190.Trans.field0_0x0;
      local_140 = fVar20;
      FSlateDrawElement::MakeBox
                (param_8,param_9,(FPaintGeometry *)&local_148._s_0,&this->LineBrush,!param_11 << 5,
                 (FLinearColor *)&local_1f0._s_0);
      fVar20 = param_6->Scale;
    }
    afVar12 = _UNK_15076b188;
    afVar10 = ___xmm_3f80000000000000000000003f800000;
    local_1c0 = (param_6->AbsolutePosition).field0_0x0._s_0;
    local_1e0._s_0.R = fVar5 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
    fStack_1fc = (float)(int)local_20c[0] * fVar23;
    local_1e0._s_0.G = fVar6 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_1e0._s_0.B = fVar7 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_218._0_4_ = (fVar24 + fVar21) * fVar23;
    local_200 = fVar23 * param_4;
    local_218._4_4_ = (fVar25 + fVar22) * fVar23;
    local_1e0._s_0.A = fVar8 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_178.Trans.field0_0x0 = local_218;
    local_1f8 = (float)(undefined4)local_218 * fVar20 + local_1c0.X;
    fStack_1f4 = (float)local_218._4_4_ * fVar20 + local_1c0.Y;
    ___xmm_3f80000000000000000000003f800000 = afVar9[0];
    _UNK_15076b184 = afVar9[1];
    local_178.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_178.M.M[0][1] = _UNK_15076b184;
    _UNK_15076b188 = afVar11[0];
    _UNK_15076b18c = afVar11[1];
    local_178.M.M[1][0] = _UNK_15076b188;
    local_178.M.M[1][1] = _UNK_15076b18c;
    ___xmm_3f80000000000000000000003f800000 = afVar10;
    _UNK_15076b188 = afVar12;
    Concatenate<TTransform2<float>_>(&local_160,&local_178,&param_6->AccumulatedRenderTransform);
    local_110._s_0.Y = fStack_1f4;
    local_110._s_0.X = local_1f8;
    local_fc = CONCAT44(fStack_1fc,local_200);
    param_9 = param_9 + 1;
    local_dc = param_6->bHasRenderTransform * '\x02' | local_dc & 0xfc;
    local_104 = 0;
    local_f4[0] = local_160.M.M[0][0];
    local_f4[1] = local_160.M.M[0][1];
    afStack_ec[0] = local_160.M.M[1][0];
    afStack_ec[1] = local_160.M.M[1][1];
    local_e4 = local_160.Trans.field0_0x0;
    local_108 = fVar20;
    FSlateDrawElement::MakeBox
              (param_8,param_9,(FPaintGeometry *)&local_110._s_0,&this->LineBrush,!param_11 << 5,
               (FLinearColor *)&local_1e0._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  return param_9;
}

