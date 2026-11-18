// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// ActiveTick @ 1429c4b60

EActiveTimerReturnType __thiscall
SProgressBar::ActiveTick(SProgressBar *this,double param_1,float param_2)

{
  TOptional<float> *pTVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  auVar3 = roundpd(auVar3,auVar3,1);
  this->MarqueeOffset = (float)(param_1 - auVar3._0_8_);
  pTVar1 = TAttribute<TOptional<float>_>::Get(&this->Percent);
  if ((pTVar1->bIsSet == false) || (this->Style->EnableFillAnimation != false)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = this->MinimumTickRate;
  }
  SetActiveTimerTickRate(this,fVar2);
  SWidget::Invalidate((SWidget *)this,Paint);
  return Continue;
}

// ComputeDesiredSize @ 1429ce790

TVector2<double> * __thiscall
SProgressBar::ComputeDesiredSize
          (SProgressBar *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FSlateBrush *pFVar2;
  
  pFVar2 = this->MarqueeImage;
  if (pFVar2 == (FSlateBrush *)0x0) {
    pFVar2 = &this->Style->MarqueeImage;
  }
  fVar1 = *(float *)&(pFVar2->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pFVar2->ImageSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1429cfe90

bool __thiscall SProgressBar::ComputeVolatility(SProgressBar *this)

{
  bool bVar1;
  
  bVar1 = TAttribute<TOptional<float>_>::IsBound(&this->Percent);
  if (!bVar1) {
    bVar1 = TAttribute<FSlateColor>::IsBound(&this->FillColorAndOpacity);
    if (!bVar1) {
      bVar1 = TAttribute<UE::Math::TVector2<double>_>::IsBound(&this->BorderPadding);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// Construct @ 1429d6e50

void __thiscall SProgressBar::Construct(SProgressBar *this,FArguments *param_1)

{
  TAttribute<TOptional<float>_> *this_00;
  EWidgetUpdateFlags EVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  bool bVar7;
  EWidgetUpdateFlags EVar8;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  if (param_1->_Style == (FProgressBarStyle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SProgressBar.cpp"
                       ,0xb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->MarqueeOffset = 0.0;
  this->Style = param_1->_Style;
  local_30[4] = (param_1->_Percent).Value.bIsSet;
  if (local_30[4] != false) {
    local_30._0_4_ = (param_1->_Percent).Value.TypedValue;
  }
  local_30[8] = (param_1->_Percent).bIsSet;
  local_10 = 0;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
             &(param_1->_Percent).Getter);
  this_00 = &this->Percent;
  bVar7 = TAttribute<TOptional<float>_>::IdenticalTo
                    (this_00,(TAttribute<TOptional<float>_> *)local_30);
  if (!bVar7) {
    if ((TAttribute<TOptional<float>_> *)local_30 != this_00) {
      if (local_30[4] == false) {
        if ((this->Percent).Value.bIsSet != false) {
          (this->Percent).Value.bIsSet = false;
        }
      }
      else {
        (this_00->Value).TypedValue = (float)local_30._0_4_;
        (this->Percent).Value.bIsSet = true;
      }
    }
    (this->Percent).bIsSet = local_30[8];
    TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->Percent).Getter,
               (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_20);
    UpdateMarqueeActiveTimer(this);
    SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  this->BarFillType = param_1->_BarFillType;
  this->BarFillStyle = param_1->_BarFillStyle;
  this->BackgroundImage = param_1->_BackgroundImage;
  this->FillImage = param_1->_FillImage;
  this->MarqueeImage = param_1->_MarqueeImage;
  uVar3 = *(undefined8 *)
           ((longlong)&(param_1->_FillColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FillColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_FillColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->FillColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar3;
  EVar5 = (param_1->_FillColorAndOpacity).Value.ColorTableId;
  uVar6 = *(undefined2 *)&(param_1->_FillColorAndOpacity).Value.field_0x12;
  (this->FillColorAndOpacity).Value.ColorUseRule =
       (param_1->_FillColorAndOpacity).Value.ColorUseRule;
  (this->FillColorAndOpacity).Value.ColorTableId = EVar5;
  *(undefined2 *)&(this->FillColorAndOpacity).Value.field_0x12 = uVar6;
  (this->FillColorAndOpacity).bIsSet = (param_1->_FillColorAndOpacity).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->FillColorAndOpacity).Getter,&(param_1->_FillColorAndOpacity).Getter);
  dVar4 = (param_1->_BorderPadding).Value.field0_0x0._s_0.Y;
  (this->BorderPadding).Value.field0_0x0._s_0.X = (param_1->_BorderPadding).Value.field0_0x0._s_0.X;
  (this->BorderPadding).Value.field0_0x0._s_0.Y = dVar4;
  (this->BorderPadding).bIsSet = (param_1->_BorderPadding).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BorderPadding).Getter,&(param_1->_BorderPadding).Getter);
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  this->CurrentTickRate = 0.0;
  EVar8 = EVar1 & ~NeedsTick;
  this->MinimumTickRate = param_1->_RefreshRate;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar8);
  UpdateMarqueeActiveTimer(this);
  return;
}

// GetBackgroundImage @ 1429e8e70

FSlateBrush * __thiscall SProgressBar::GetBackgroundImage(SProgressBar *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->BackgroundImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->BackgroundImage;
  }
  return pFVar1;
}

// GetFillImage @ 1429eb710

FSlateBrush * __thiscall SProgressBar::GetFillImage(SProgressBar *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->FillImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->FillImage;
  }
  return pFVar1;
}

// GetMarqueeImage @ 1429ebd60

FSlateBrush * __thiscall SProgressBar::GetMarqueeImage(SProgressBar *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->MarqueeImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->MarqueeImage;
  }
  return pFVar1;
}

// OnPaint @ 1429fe970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SProgressBar::OnPaint
          (SProgressBar *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ESlateColorStylingMode EVar4;
  undefined1 uVar5;
  Type TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float afVar9 [2];
  float afVar10 [2];
  float fVar11;
  float fVar12;
  bool bVar13;
  TOptional<float> *pTVar14;
  TVector2<double> *pTVar15;
  FSlateColor *pFVar16;
  Type TVar17;
  TVector2<float>_u_0_s_0 TVar18;
  byte bVar19;
  uint uVar20;
  TVector2<float>_u_0 *pTVar21;
  FSlateBrush *pFVar22;
  FSlateBrush *pFVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_1e8 [32];
  TVector2<double>_u_0 local_1b8;
  TTransform2<float> local_1a8;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  TVector2<double>_u_0 local_178 [2];
  float local_158;
  char local_154;
  TTransform2<float> *local_150;
  FLinearColor_u_0 local_148;
  TVector2<float>_u_0 local_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  undefined4 local_104;
  undefined1 local_100 [8];
  undefined8 uStack_f8;
  longlong local_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((!param_7) || (bVar13 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar13 = false;
  }
  pFVar23 = this->FillImage;
  local_158 = 4.48416e-44;
  if (bVar13) {
    local_158 = 0.0;
  }
  if (pFVar23 == (FSlateBrush *)0x0) {
    pFVar23 = &this->Style->FillImage;
  }
  pTVar14 = TAttribute<TOptional<float>_>::Get(&this->Percent);
  local_154 = pTVar14->bIsSet;
  fVar28 = local_158;
  if ((bool)local_154 != false) {
    fVar28 = pTVar14->TypedValue;
  }
  pTVar15 = TAttribute<UE::Math::TVector2<double>_>::Get(&this->BorderPadding);
  pFVar22 = this->BackgroundImage;
  uVar7 = *(undefined8 *)&pTVar15->field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&pTVar15->field0_0x0 + 8);
  if (pFVar22 == (FSlateBrush *)0x0) {
    pFVar22 = &this->Style->BackgroundImage;
  }
  EVar4 = (pFVar22->TintColor).ColorUseRule;
  pFVar16 = &pFVar22->TintColor;
  if (EVar4 != UseColor_Specified) {
    if (EVar4 == UseColor_ColorTable) {
      pFVar16 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar16);
    }
    else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
      pFVar16 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar16 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_148._s_0.R =
       (pFVar16->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_138._s_0.X = TVar18.X;
  local_138._s_0.Y = TVar18.Y;
  fStack_124 = SUB84(param_2->Size,0);
  fStack_120 = SUB84(param_2->Size,4);
  uVar20 = param_5 + 1;
  local_150 = &param_2->AccumulatedRenderTransform;
  local_148._s_0.G =
       (pFVar16->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  uStack_12c = 0;
  uStack_128 = 0;
  local_148._s_0.B =
       (pFVar16->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_148._s_0.A =
       (pFVar16->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  fStack_130 = param_2->Scale;
  afVar9 = (local_150->M).M[0];
  afVar10 = (param_2->AccumulatedRenderTransform).M.M[1];
  TVar18 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0;
  local_104 = CONCAT31(local_104._1_3_,
                       param_2->bHasRenderTransform * '\x02' | (byte)local_104 & 0xfc);
  fStack_11c = afVar9[0];
  fStack_118 = afVar9[1];
  fStack_114 = afVar10[0];
  fStack_110 = afVar10[1];
  local_10c = TVar18.X;
  fStack_108 = TVar18.Y;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_138._s_0,pFVar22,SUB41(local_158,0),
             (FLinearColor *)&local_148._s_0);
  local_1b8._0_4_ = (undefined4)uVar7;
  local_1b8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_1b8._8_4_ = (undefined4)uVar8;
  local_1b8._12_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (local_154 == '\0') {
    pFVar23 = this->MarqueeImage;
    if (pFVar23 == (FSlateBrush *)0x0) {
      pFVar23 = &this->Style->MarqueeImage;
    }
    pFVar16 = TAttribute<FSlateColor>::Get(&this->FillColorAndOpacity);
    EVar4 = pFVar16->ColorUseRule;
    if (EVar4 != UseColor_Specified) {
      if (EVar4 == UseColor_ColorTable) {
        pFVar16 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar16);
      }
      else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
        pFVar16 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar16 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    fVar28 = (pFVar16->SpecifiedColor).field0_0x0._s_0.R;
    fVar33 = (pFVar16->SpecifiedColor).field0_0x0._s_0.G;
    fVar32 = (pFVar16->SpecifiedColor).field0_0x0._s_0.B;
    fVar30 = (pFVar16->SpecifiedColor).field0_0x0._s_0.A;
    pFVar16 = &pFVar23->TintColor;
    EVar4 = (pFVar23->TintColor).ColorUseRule;
    fVar31 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    fVar29 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar1 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    if (EVar4 != UseColor_Specified) {
      if (EVar4 == UseColor_ColorTable) {
        pFVar16 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar16);
      }
      else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
        pFVar16 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar16 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_148._s_0.R = fVar28 * fVar31 * (pFVar16->SpecifiedColor).field0_0x0._s_0.R;
    local_148._s_0.G = fVar33 * fVar29 * (pFVar16->SpecifiedColor).field0_0x0._s_0.G;
    local_148._s_0.B = fVar32 * fVar1 * (pFVar16->SpecifiedColor).field0_0x0._s_0.B;
    local_148._s_0.A = fVar30 * fVar2 * (pFVar16->SpecifiedColor).field0_0x0._s_0.A;
    fVar28 = *(float *)&pFVar23->ImageSize;
    local_1a8.M.M[0][0] = (float)___xmm_3f8000003f8000000000000000000000;
    local_1a8.M.M[0][1] = (float)((ulonglong)___xmm_3f8000003f8000000000000000000000 >> 0x20);
    local_1a8.M.M[1][0] = (float)_UNK_15076b1e8;
    local_1a8.M.M[1][1] = (float)((ulonglong)_UNK_15076b1e8 >> 0x20);
    fVar33 = this->MarqueeOffset;
    local_178[0]._s_0.X = 0.0;
    local_178[0]._s_0.Y = 0.0;
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    local_178[0]._0_8_ = param_2->Size;
    local_1b8._0_4_ = fVar28 * fVar33 - fVar28;
    local_1a8.M.M[0][0] = (float)local_178[0]._0_8_;
    local_188 = local_1a8.M.M[0][0] + fVar28;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    fVar28 = param_2->Scale;
    fStack_184 = (float)local_178[0]._4_4_;
    local_1b8._4_4_ = 0.0;
    local_1a8.Trans.field0_0x0._s_0.Y = 0.0;
    local_180 = fVar28 * (float)local_1b8._0_4_ + local_1a8.M.M[0][1];
    fStack_17c = fVar28 * 0.0 + local_1a8.M.M[1][0];
    local_1a8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_1a8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_1a8.M.M[1][0] = (float)_UNK_15076b188;
    local_1a8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    local_1a8.Trans.field0_0x0._s_0.X = (float)local_1b8._0_4_;
    Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
    pTVar21 = &local_138;
    fStack_124 = local_188;
    fStack_120 = fStack_184;
    local_104 = CONCAT31(local_104._1_3_,
                         param_2->bHasRenderTransform * '\x02' | (byte)local_104 & 0xfc);
    fStack_11c = (float)local_178[0]._s_0.X;
    fStack_118 = (float)((ulonglong)local_178[0]._0_8_ >> 0x20);
    fStack_114 = (float)local_178[0]._s_0.Y;
    fStack_110 = (float)((ulonglong)local_178[0]._8_8_ >> 0x20);
    local_10c = (float)local_178[1]._0_8_;
    fStack_108 = (float)((ulonglong)local_178[1]._0_8_ >> 0x20);
    fStack_130 = fVar28;
    goto LAB_1429ffa1e;
  }
  pFVar16 = TAttribute<FSlateColor>::Get(&this->FillColorAndOpacity);
  EVar4 = pFVar16->ColorUseRule;
  if (EVar4 != UseColor_Specified) {
    if (EVar4 == UseColor_ColorTable) {
      pFVar16 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar16);
    }
    else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
      pFVar16 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar16 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar33 = (pFVar16->SpecifiedColor).field0_0x0._s_0.R;
  fVar32 = (pFVar16->SpecifiedColor).field0_0x0._s_0.G;
  fVar30 = (pFVar16->SpecifiedColor).field0_0x0._s_0.B;
  fVar31 = (pFVar16->SpecifiedColor).field0_0x0._s_0.A;
  pFVar16 = &pFVar23->TintColor;
  EVar4 = (pFVar23->TintColor).ColorUseRule;
  fVar29 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  fVar1 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  fVar3 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  if (EVar4 != UseColor_Specified) {
    if (EVar4 == UseColor_ColorTable) {
      pFVar16 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar16);
    }
    else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
      pFVar16 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar16 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  TVar17 = this->BarFillType;
  local_148._s_0.R = fVar33 * fVar29 * (pFVar16->SpecifiedColor).field0_0x0._s_0.R;
  local_148._s_0.G = fVar32 * fVar1 * (pFVar16->SpecifiedColor).field0_0x0._s_0.G;
  local_148._s_0.A = fVar31 * fVar3 * (pFVar16->SpecifiedColor).field0_0x0._s_0.A;
  local_148._s_0.B = fVar30 * fVar2 * (pFVar16->SpecifiedColor).field0_0x0._s_0.B;
  if (GSlateFlowDirection == RightToLeft) {
    if (TVar17 == LeftToRight) {
      TVar17 = RightToLeft;
    }
    else if (TVar17 == RightToLeft) {
      TVar17 = LeftToRight;
    }
  }
  fVar30 = 0.0;
  fVar32 = 0.0;
  fVar31 = 0.0;
  fVar33 = 0.0;
  if (this->Style->EnableFillAnimation != false) {
    fVar33 = *(float *)&(pFVar23->ImageSize).field_0x4;
    fVar32 = *(float *)&pFVar23->ImageSize;
    fVar30 = this->MarqueeOffset * fVar32;
    fVar31 = fVar33 * this->MarqueeOffset;
  }
  TVar6 = this->BarFillStyle;
  if (__real_3f800000 <= fVar28) {
    fVar28 = __real_3f800000;
  }
  if (fVar28 <= 0.0) {
    fVar28 = 0.0;
  }
  switch(TVar17) {
  default:
    local_178[0]._s_0.X = 0.0;
    local_178[0]._s_0.Y = 0.0;
    local_1a8.M.M[0][0] = 0.0;
    local_1a8.M.M[0][1] = 0.0;
    local_1a8.M.M[1][1] = 1.0;
    local_1a8.M.M[1][0] = fVar28;
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar29 = param_2->Scale;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_1a8.M.M[0][0] = (float)local_178[0]._0_8_;
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      local_1b8._0_4_ = 0.0;
      local_188 = local_1a8.M.M[0][0] * fVar28;
    }
    else {
      local_1b8._0_4_ = fVar30 - fVar32;
      local_188 = local_1a8.M.M[0][0] + fVar32;
    }
    local_1b8._4_4_ = 0.0;
    fStack_184 = (float)local_178[0]._4_4_;
    goto LAB_1429ff3c4;
  case RightToLeft:
    local_178[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_178[0]._s_0.Y = _UNK_150689518;
    local_1a8.M.M[0][1] = 0.0;
    local_1a8.M.M[1][0] = 0.0;
    local_1a8.M.M[1][1] = 1.0;
    local_1a8.M.M[0][0] = fVar28;
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    fVar33 = param_2->Scale;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_1a8.M.M[0][0] = (float)local_178[0]._0_8_;
    local_f0 = 0;
    fStack_e8 = 0.0;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      local_1b8._0_4_ = (fVar11 - fVar28) * local_1a8.M.M[0][0];
      local_188 = fVar28 * local_1a8.M.M[0][0];
    }
    else {
      local_1b8._0_4_ = fVar30 - fVar32;
      local_188 = local_1a8.M.M[0][0] + fVar32;
    }
    local_1b8._4_4_ = 0.0;
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    fStack_184 = (float)local_178[0]._4_4_;
    local_1a8.Trans.field0_0x0._s_0.X = (float)local_1b8._0_4_;
    local_1a8.Trans.field0_0x0._s_0.Y = 0.0;
    fStack_17c = fVar33 * 0.0 + local_1a8.M.M[1][0];
    local_180 = (float)local_1b8._0_4_ * fVar33 + local_1a8.M.M[0][1];
    local_1a8.M.M[0][0] = fStack_e4;
    local_1a8.M.M[0][1] = fStack_e0;
    local_1a8.M.M[1][0] = fStack_dc;
    local_1a8.M.M[1][1] = fStack_d8;
    Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
    fStack_11c = (float)local_178[0]._s_0.X;
    fStack_118 = (float)((ulonglong)local_178[0]._0_8_ >> 0x20);
    fStack_114 = (float)local_178[0]._s_0.Y;
    fStack_110 = (float)((ulonglong)local_178[0]._8_8_ >> 0x20);
    auVar26._0_8_ = CONCAT44(fStack_130,local_180) << 0x20;
    auVar26._8_4_ = fStack_17c;
    auVar27._4_8_ = auVar26._4_8_;
    auVar27._0_4_ = fVar33;
    auVar27._12_4_ = 0;
    break;
  case FillFromCenter:
    local_1a8.M.M[0][0] = fVar28 * __real_3f000000;
    local_178[0]._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
    local_178[0]._s_0.Y = _UNK_150689678;
    local_1a8.M.M[0][1] = local_1a8.M.M[0][0];
    local_1a8.M.M[1][0] = local_1a8.M.M[0][0];
    local_1a8.M.M[1][1] = local_1a8.M.M[0][0];
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_178[0]._0_8_ = param_2->Size;
    local_1a8.M.M[0][0] = (float)local_178[0]._0_8_;
    local_1a8.M.M[0][1] = SUB84(local_178[0]._0_8_,4);
    fVar33 = local_1a8.M.M[0][1];
    local_f0 = 0;
    fStack_e8 = 0.0;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    local_1a8.M.M[1][1] = fStack_d8;
    if (TVar6 == Scale) {
      fStack_184 = local_1a8.M.M[0][1] * fVar12;
      local_188 = local_1a8.M.M[0][0] * fVar12 - fVar28 * local_1a8.M.M[0][0] * fVar12;
      fVar32 = fVar28 * local_1a8.M.M[0][1];
      TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
      local_1a8.M.M[0][1] = TVar18.X;
      local_1a8.M.M[1][0] = TVar18.Y;
      fStack_184 = fStack_184 - fVar32 * fVar12;
      local_1b8._0_4_ = fVar28 * local_1a8.M.M[0][0];
      local_1b8._4_4_ = fVar28 * fVar33;
      fVar28 = param_2->Scale;
      bVar19 = param_2->field_0x34;
      local_180 = local_188 * fVar28 + local_1a8.M.M[0][1];
      fStack_17c = fStack_184 * fVar28 + local_1a8.M.M[1][0];
      local_1a8.M.M[0][0] = fStack_e4;
      local_1a8.M.M[0][1] = fStack_e0;
      local_1a8.M.M[1][0] = fStack_dc;
      local_1a8.Trans.field0_0x0._s_0.X = local_188;
      local_1a8.Trans.field0_0x0._s_0.Y = fStack_184;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
      fStack_124 = (float)local_1b8._0_4_;
      fStack_120 = (float)local_1b8._4_4_;
    }
    else {
      TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
      fVar28 = param_2->Scale;
      bVar19 = param_2->field_0x34;
      local_1a8.M.M[0][1] = TVar18.X;
      local_1a8.M.M[1][0] = TVar18.Y;
      local_188 = local_1a8.M.M[0][0];
      fStack_184 = fVar33;
      local_1b8._8_4_ = 0;
      local_1a8.Trans.field0_0x0._s_0.X = 0.0;
      local_1a8.Trans.field0_0x0._s_0.Y = 0.0;
      local_1b8._0_4_ = 0.0;
      local_1b8._4_4_ = 0.0;
      local_180 = fVar28 * 0.0 + local_1a8.M.M[0][1];
      fStack_17c = fVar28 * 0.0 + local_1a8.M.M[1][0];
      local_1a8.M.M[0][0] = fStack_e4;
      local_1a8.M.M[0][1] = fStack_e0;
      local_1a8.M.M[1][0] = fStack_dc;
      Concatenate<TTransform2<float>_>
                ((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
      fStack_124 = local_188;
      fStack_120 = fStack_184;
    }
    pTVar21 = (TVector2<float>_u_0 *)local_100;
    fStack_11c = (float)local_178[0]._s_0.X;
    fStack_118 = (float)((ulonglong)local_178[0]._0_8_ >> 0x20);
    fStack_114 = (float)local_178[0]._s_0.Y;
    fStack_110 = (float)((ulonglong)local_178[0]._8_8_ >> 0x20);
    local_10c = (float)local_178[1]._0_8_;
    fStack_108 = (float)((ulonglong)local_178[1]._0_8_ >> 0x20);
    local_104 = CONCAT31(local_104._1_3_,(bVar19 & 1) * '\x02' | (byte)local_104 & 0xfc);
    local_100._4_4_ = fStack_17c;
    local_100._0_4_ = local_180;
    uStack_f8._0_4_ = fVar28;
    uStack_f8._4_4_ = 0;
    local_f0 = (ulonglong)(uint)fStack_124 << 0x20;
    fStack_e0 = fStack_118;
    fStack_dc = fStack_114;
    fStack_d8 = fStack_110;
    uStack_d4 = local_10c;
    fStack_e4 = fStack_11c;
    uStack_d0 = fStack_108;
    uStack_cc = local_104;
    fStack_e8 = fStack_120;
    goto LAB_1429ffa1e;
  case FillFromCenterHorizontal:
    local_1a8.M.M[0][1] = 0.0;
    local_1a8.M.M[0][0] = fVar28 * __real_3f000000;
    local_1a8.M.M[1][1] = 1.0;
    local_178[0]._s_0.X = ___xmm_00000000000000003fe0000000000000;
    local_178[0]._s_0.Y = _UNK_150978bb8;
    local_1a8.M.M[1][0] = local_1a8.M.M[0][0];
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    fVar29 = param_2->Scale;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_1a8.M.M[0][0] = (float)local_178[0]._0_8_;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      local_188 = fVar28 * local_1a8.M.M[0][0];
      local_1b8._0_4_ = local_1a8.M.M[0][0] * fVar12 - fVar28 * local_1a8.M.M[0][0] * fVar12;
    }
    else {
      local_188 = local_1a8.M.M[0][0];
      local_1b8._0_4_ = 0.0;
    }
    fStack_184 = (float)local_178[0]._4_4_;
    local_1b8._4_4_ = 0.0;
    fStack_17c = fVar29 * 0.0;
    local_180 = fVar29 * (float)local_1b8._0_4_;
    goto LAB_1429ff0d4;
  case FillFromCenterVertical:
    local_1a8.M.M[0][0] = 0.0;
    local_1a8.M.M[0][1] = fVar28 * __real_3f000000;
    local_1a8.M.M[1][0] = 1.0;
    local_178[0]._s_0.X = ___xmm_3fe00000000000000000000000000000;
    local_178[0]._s_0.Y = _UNK_15076b778;
    local_1a8.M.M[1][1] = local_1a8.M.M[0][1];
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    fVar29 = param_2->Scale;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_1a8.M.M[0][1] = SUB84(local_178[0]._0_8_,4);
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      local_1b8._4_4_ = local_1a8.M.M[0][1] * fVar12 - local_1a8.M.M[0][1] * fVar28 * fVar12;
      local_1a8.M.M[0][1] = local_1a8.M.M[0][1] * fVar28;
    }
    else {
      local_1b8._4_4_ = 0.0;
    }
    local_1b8._0_4_ = 0.0;
    local_188 = (float)local_178[0]._0_8_;
    fStack_17c = (float)local_1b8._4_4_ * fVar29;
    local_180 = fVar29 * 0.0;
    fStack_184 = local_1a8.M.M[0][1];
LAB_1429ff0d4:
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    goto LAB_1429ff0de;
  case TopToBottom:
    local_178[0]._s_0.X = 0.0;
    local_178[0]._s_0.Y = 0.0;
    local_1a8.M.M[0][0] = 0.0;
    local_1a8.M.M[0][1] = 0.0;
    local_1a8.M.M[1][0] = 1.0;
    local_1a8.M.M[1][1] = fVar28;
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fVar29 = param_2->Scale;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    local_188 = (float)local_178[0]._0_8_;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      local_1b8._4_4_ = 0.0;
      fStack_184 = (float)local_178[0]._4_4_ * fVar28;
    }
    else {
      local_1b8._4_4_ = fVar31 - fVar33;
      fStack_184 = (float)local_178[0]._4_4_ + fVar33;
    }
    local_1b8._0_4_ = 0.0;
LAB_1429ff3c4:
    local_180 = (float)local_1b8._0_4_ * fVar29;
    fStack_17c = (float)local_1b8._4_4_ * fVar29;
LAB_1429ff0de:
    uStack_d0 = 0;
    uStack_d4 = 0;
    fStack_e8 = 0.0;
    local_f0 = 0;
    fStack_17c = fStack_17c + local_1a8.M.M[1][0];
    local_180 = local_180 + local_1a8.M.M[0][1];
    local_1a8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_1a8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_1a8.M.M[1][0] = (float)_UNK_15076b188;
    local_1a8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    local_1a8.Trans.field0_0x0._s_0.X = (float)local_1b8._0_4_;
    local_1a8.Trans.field0_0x0._s_0.Y = (float)local_1b8._4_4_;
    Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
    fStack_11c = (float)local_178[0]._s_0.X;
    fStack_118 = (float)((ulonglong)local_178[0]._0_8_ >> 0x20);
    fStack_114 = (float)local_178[0]._s_0.Y;
    fStack_110 = (float)((ulonglong)local_178[0]._8_8_ >> 0x20);
    auVar24._0_8_ = CONCAT44(fStack_130,local_180) << 0x20;
    auVar24._8_4_ = fStack_17c;
    auVar27._4_8_ = auVar24._4_8_;
    auVar27._0_4_ = fVar29;
    auVar27._12_4_ = 0;
    break;
  case BottomToTop:
    local_178[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_178[0]._s_0.Y = _UNK_15061cbc8;
    local_1a8.M.M[0][0] = 0.0;
    local_1a8.M.M[1][0] = 1.0;
    local_1a8.M.M[1][1] = 0.0;
    local_1a8.M.M[0][1] = fVar28;
    bVar13 = PushTransformedClip(param_4,param_2,(TVector2<double> *)&local_1b8._s_0,
                                 (TVector2<double> *)&local_178[0]._s_0,(FSlateRect *)&local_1a8);
    if (!bVar13) goto LAB_1429ffa41;
    fVar32 = param_2->Scale;
    TVar18 = (param_2->AbsolutePosition).field0_0x0._s_0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_178[0]._0_8_ = param_2->Size;
    bVar19 = param_2->field_0x34;
    local_f0 = 0;
    fStack_e8 = 0.0;
    uStack_f8 = _UNK_150689538;
    local_100 = (undefined1  [8])___xmm_000000003f8000000000000000000000;
    fStack_e4 = (float)___xmm_3f80000000000000000000003f800000;
    fStack_e0 = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    fStack_dc = (float)_UNK_15076b188;
    fStack_d8 = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    if (TVar6 == Scale) {
      fStack_184 = (float)local_178[0]._4_4_ * fVar28;
      local_1b8._4_4_ = (fVar11 - fVar28) * (float)local_178[0]._4_4_;
    }
    else {
      local_1b8._4_4_ = fVar31 - fVar33;
      fStack_184 = (float)local_178[0]._4_4_ + fVar33;
    }
    local_1b8._0_4_ = 0.0;
    local_1a8.M.M[0][1] = TVar18.X;
    local_1a8.M.M[1][0] = TVar18.Y;
    local_188 = (float)local_178[0]._0_8_;
    local_1a8.Trans.field0_0x0._s_0.X = 0.0;
    local_1a8.Trans.field0_0x0._s_0.Y = (float)local_1b8._4_4_;
    fStack_17c = (float)local_1b8._4_4_ * fVar32 + local_1a8.M.M[1][0];
    local_180 = fVar32 * 0.0 + local_1a8.M.M[0][1];
    local_1a8.M.M[0][0] = fStack_e4;
    local_1a8.M.M[0][1] = fStack_e0;
    local_1a8.M.M[1][0] = fStack_dc;
    local_1a8.M.M[1][1] = fStack_d8;
    Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_178[0]._s_0,&local_1a8,local_150);
    fStack_11c = (float)local_178[0]._s_0.X;
    fStack_118 = (float)((ulonglong)local_178[0]._0_8_ >> 0x20);
    fStack_114 = (float)local_178[0]._s_0.Y;
    fStack_110 = (float)((ulonglong)local_178[0]._8_8_ >> 0x20);
    auVar25._0_8_ = CONCAT44(fStack_130,local_180) << 0x20;
    auVar25._8_4_ = fStack_17c;
    auVar27._4_8_ = auVar25._4_8_;
    auVar27._0_4_ = fVar32;
    auVar27._12_4_ = 0;
  }
  fStack_124 = local_188;
  fStack_120 = fStack_184;
  pTVar21 = (TVector2<float>_u_0 *)local_100;
  uStack_f8._4_4_ = auVar27._12_4_;
  local_100 = auVar27._4_8_;
  uStack_f8._0_4_ = auVar27._0_4_;
  local_f0 = (ulonglong)(uint)local_188 << 0x20;
  local_104 = CONCAT31(local_104._1_3_,(bVar19 & 1) * '\x02' | (byte)local_104 & 0xfc);
  local_10c = (float)local_178[1]._0_8_;
  fStack_108 = (float)((ulonglong)local_178[1]._0_8_ >> 0x20);
  fStack_e8 = fStack_184;
  fStack_e4 = fStack_11c;
  uStack_d0 = fStack_108;
  uStack_cc = local_104;
  fStack_e0 = fStack_118;
  fStack_dc = fStack_114;
  fStack_d8 = fStack_110;
  uStack_d4 = local_10c;
LAB_1429ffa1e:
  uStack_128 = 0;
  uStack_12c = 0;
  local_138._s_0.X = local_180;
  local_138._s_0.Y = fStack_17c;
  FSlateDrawElement::MakeBox
            (param_4,uVar20,(FPaintGeometry *)&pTVar21->_s_0,pFVar23,SUB41(local_158,0),
             (FLinearColor *)&local_148._s_0);
  FSlateWindowElementList::PopClip(param_4);
  uVar20 = param_5 + 2;
LAB_1429ffa41:
  return uVar20 - 1;
}

// SetActiveTimerTickRate @ 142a06f20

void __thiscall SProgressBar::SetActiveTimerTickRate(SProgressBar *this,float param_1)

{
  FActiveTimerHandle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  if ((((param_1 != this->CurrentTickRate) ||
       ((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0)) ||
      (pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
    this->CurrentTickRate = param_1;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142a06f80;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar6 = aVar3 == aVar4;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar6);
      pFVar1 = (this->ActiveTimerHandle).Object;
      if (pFVar1 != (FActiveTimerHandle *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        local_18.Object = pFVar1;
        local_18.SharedReferenceCount.ReferenceController = pTVar5;
        if ((pFVar1 == (FActiveTimerHandle *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
LAB_142a06f80:
    UpdateMarqueeActiveTimer(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// SetBackgroundImage @ 142a07670

void __thiscall SProgressBar::SetBackgroundImage(SProgressBar *this,FSlateBrush *param_1)

{
  if (this->BackgroundImage != param_1) {
    this->BackgroundImage = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetBarFillStyle @ 142a07690

void __thiscall SProgressBar::SetBarFillStyle(SProgressBar *this,Type param_1)

{
  if (this->BarFillStyle != param_1) {
    this->BarFillStyle = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetBarFillType @ 142a076b0

void __thiscall SProgressBar::SetBarFillType(SProgressBar *this,Type param_1)

{
  if (this->BarFillType != param_1) {
    this->BarFillType = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetBorderPadding @ 142a076d0

void __thiscall
SProgressBar::SetBorderPadding(SProgressBar *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  void *pvVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = TAttribute<UE::Math::TVector2<double>_>::IdenticalTo(&this->BorderPadding,param_1);
  if (!bVar3) {
    dVar2 = (param_1->Value).field0_0x0._s_0.Y;
    (this->BorderPadding).Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
    (this->BorderPadding).Value.field0_0x0._s_0.Y = dVar2;
    (this->BorderPadding).bIsSet = param_1->bIsSet;
    TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->BorderPadding).Getter,&param_1->Getter);
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetFillColorAndOpacity @ 142a09bc0

void __thiscall
SProgressBar::SetFillColorAndOpacity(SProgressBar *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  bool bVar5;
  
  bVar5 = TAttribute<FSlateColor>::IdenticalTo(&this->FillColorAndOpacity,param_1);
  if (!bVar5) {
    uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(this->FillColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(this->FillColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
         uVar2;
    EVar3 = (param_1->Value).ColorTableId;
    uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
    (this->FillColorAndOpacity).Value.ColorUseRule = (param_1->Value).ColorUseRule;
    (this->FillColorAndOpacity).Value.ColorTableId = EVar3;
    *(undefined2 *)&(this->FillColorAndOpacity).Value.field_0x12 = uVar4;
    (this->FillColorAndOpacity).bIsSet = param_1->bIsSet;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->FillColorAndOpacity).Getter,&param_1->Getter);
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetFillImage @ 142a09c60

void __thiscall SProgressBar::SetFillImage(SProgressBar *this,FSlateBrush *param_1)

{
  if (this->FillImage != param_1) {
    this->FillImage = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetMarqueeImage @ 142a0aca0

void __thiscall SProgressBar::SetMarqueeImage(SProgressBar *this,FSlateBrush *param_1)

{
  if (this->MarqueeImage != param_1) {
    this->MarqueeImage = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetPercent @ 142a0b690

void __thiscall SProgressBar::SetPercent(SProgressBar *this,TAttribute<TOptional<float>_> *param_1)

{
  TAttribute<TOptional<float>_> *this_00;
  void *pvVar1;
  bool bVar2;
  
  this_00 = &this->Percent;
  bVar2 = TAttribute<TOptional<float>_>::IdenticalTo(this_00,param_1);
  if (!bVar2) {
    if (param_1 != this_00) {
      if ((param_1->Value).bIsSet == false) {
        if ((this->Percent).Value.bIsSet != false) {
          (this->Percent).Value.bIsSet = false;
        }
      }
      else {
        (this_00->Value).TypedValue = (param_1->Value).TypedValue;
        (this->Percent).Value.bIsSet = true;
      }
    }
    (this->Percent).bIsSet = param_1->bIsSet;
    TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->Percent).Getter,&param_1->Getter);
    UpdateMarqueeActiveTimer(this);
    SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetStyle @ 142a0beb0

void __thiscall SProgressBar::SetStyle(SProgressBar *this,FProgressBarStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_2b8 [536];
  undefined1 local_a0 [48];
  undefined1 local_70 [48];
  undefined1 local_40 [56];
  
  this->Style = param_1;
  if (param_1 == (FProgressBarStyle *)0x0) {
    FArguments::FArguments((FArguments *)local_2b8);
    this->Style = (FProgressBarStyle *)local_2b8._504_8_;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if ((void *)local_40._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_40._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
    if ((void *)local_70._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_70._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
    if ((void *)local_a0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2b8);
  }
  if (this->Style == (FProgressBarStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SProgressBar.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateMarqueeActiveTimer(this);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// UpdateMarqueeActiveTimer @ 142a13d80

void __thiscall SProgressBar::UpdateMarqueeActiveTimer(SProgressBar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  char cVar7;
  atomic<int> aVar8;
  TOptional<float> *pTVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TSharedRef<FActiveTimerHandle,1> *pTVar13;
  FActiveTimerHandle *pFVar14;
  FActiveTimerHandle *pFVar15;
  FActiveTimerHandle *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  uint uStackX_c;
  TSharedRef<FActiveTimerHandle,1> local_98;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  TSharedRef<FActiveTimerHandle,1> local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  TSharedRef<SWidget,1> local_40;
  FReadAccessScope local_30;
  
  pFVar14 = (FActiveTimerHandle *)0x0;
  if ((((this->ActiveTimerHandle).Object != (FActiveTimerHandle *)0x0) &&
      (pTVar17 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar17 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar17->SharedReferenceCount)) {
    local_98.SharedReferenceCount.ReferenceController =
         (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
    pFVar15 = (FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController;
    pFVar16 = pFVar14;
    if ((FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController ==
        (FActiveTimerHandle *)0x0) {
LAB_142a13df5:
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      if (bVar18) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      aVar2 = *(atomic<int> *)
               &((FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController)->
                TimerFunction;
      do {
        pFVar15 = pFVar14;
        pFVar16 = (FActiveTimerHandle *)0x0;
        if (aVar2 == (atomic<int>)0x0) goto LAB_142a13df5;
        LOCK();
        aVar8 = *(atomic<int> *)
                 &((FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController)->
                  TimerFunction;
        bVar18 = aVar2 == aVar8;
        if (bVar18) {
          *(int *)&((FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController)->
                   TimerFunction = (int)aVar2 + 1;
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar18);
      pFVar16 = (this->ActiveTimerHandle).Object;
      pFVar15 = (FActiveTimerHandle *)local_98.SharedReferenceCount.ReferenceController;
      if (pFVar16 == (FActiveTimerHandle *)0x0) goto LAB_142a13df5;
    }
    local_98.Object = pFVar16;
    if ((pFVar16 == (FActiveTimerHandle *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::UnRegisterActiveTimer((SWidget *)this,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Percent).Getter,
             &local_30);
  if (((*(int *)&(this->Percent).Getter.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Percent).Getter.field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    pTVar9 = TAttribute<TOptional<float>_>::Get(&this->Percent);
    if (pTVar9->bIsSet == false) goto LAB_142a13ee5;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
  }
  if (this->Style->EnableFillAnimation == false) {
    return;
  }
LAB_142a13ee5:
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_80;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_80);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_98.Object = (FActiveTimerHandle *)ActiveTick;
    local_98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_70.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40);
    pTVar17 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar11->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSProgressBar___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar14 = (FActiveTimerHandle *)&DAT_00000007;
    puVar10[5] = local_98.Object;
    puVar10[6] = local_98.SharedReferenceCount.ReferenceController;
  }
  if (((ulonglong)pFVar14 & 4) != 0) {
    pFVar14 = (FActiveTimerHandle *)(ulonglong)((uint)pFVar14 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (((ulonglong)pFVar14 & 2) != 0) {
    pFVar14 = (FActiveTimerHandle *)(ulonglong)((uint)pFVar14 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (((ulonglong)pFVar14 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.SharedReferenceCount.ReferenceController);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  pTVar13 = SWidget::RegisterActiveTimer
                      ((SWidget *)this,&local_70,this->CurrentTickRate,
                       (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                        *)local_88);
  (this->ActiveTimerHandle).Object = pTVar13->Object;
  pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
  if (pTVar17 != (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar17;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_70.SharedReferenceCount.ReferenceController._4_4_,
                      local_70.SharedReferenceCount.ReferenceController._0_4_));
  return;
}

