// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SSafeZone @ 1428ba4e0

SSafeZone * __thiscall SSafeZone::SSafeZone(SSafeZone *this)

{
  TSlateAttribute<FMargin,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  SSafeZone *pSVar5;
  EWidgetUpdateFlags EVar6;
  
  SBox::SBox((SBox *)this);
  pTVar1 = &this->Padding;
  this->_padding_ = (longlong)&___7SSafeZone__6B_;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->Padding).field_0x8 = 0;
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SSafeZone *)(*pcVar3)();
      return pSVar5;
    }
  }
  (this->SafeAreaScale).Left = 0.0;
  (this->SafeAreaScale).Top = 0.0;
  (this->SafeAreaScale).Right = 0.0;
  (this->SafeAreaScale).Bottom = 0.0;
  (this->SafeMargin).Left = 0.0;
  (this->SafeMargin).Top = 0.0;
  (this->SafeMargin).Right = 0.0;
  (this->SafeMargin).Bottom = 0.0;
  (this->OnSafeFrameChangedHandle).ID = 0;
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar6);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SSafeZone @ 1428c1720

void __thiscall SSafeZone::~SSafeZone(SSafeZone *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->OnSafeFrameChangedHandle).ID;
  this->_padding_ = (longlong)&___7SSafeZone__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,FVar1);
  }
  this->_padding_ = (longlong)&___7SBox__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&this->_padding_);
  FChildren::~FChildren((FChildren *)&this->_padding_);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// ComputeDesiredSize @ 1428e11d0

TVector2<double> * __thiscall
SSafeZone::ComputeDesiredSize
          (SSafeZone *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FDeprecateSlateVector2D FVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  FMargin local_40 [3];
  
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(this->_padding_ + 0x39) ==
      EVisibility::Collapsed.Value.Value) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    return __return_storage_ptr__;
  }
  GetSafeMargin(this,local_40,param_1);
  uVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((SWidget *)this->_padding_)->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    fVar6 = *(float *)&this->_padding_;
    fVar7 = *(float *)((longlong)&this->_padding_ + 4);
    if (fVar7 == FOptionalSize::Unspecified) {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar3 = *(float *)((longlong)&this->_padding_ + 4);
      FVar2 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
      fVar7 = *(float *)((longlong)&this->_padding_ + 4);
      fVar3 = fVar3 + fVar1 + *(float *)((longlong)FVar2 + 4);
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      if ((fVar7 != FOptionalSize::Unspecified) && (fVar3 <= fVar7)) {
        fVar3 = fVar7;
      }
      fVar7 = fVar3;
      if ((fVar1 != FOptionalSize::Unspecified) && (fVar7 = fVar1, fVar3 <= fVar1)) {
        fVar7 = fVar3;
      }
    }
    if (fVar6 == FOptionalSize::Unspecified) {
      fVar1 = *(float *)&this->_padding_;
      fVar3 = *(float *)&this->_padding_;
      FVar2 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
      fVar6 = *(float *)&this->_padding_;
      fVar3 = fVar3 + fVar1 + *(float *)FVar2;
      fVar1 = *(float *)&this->_padding_;
      if ((fVar6 != FOptionalSize::Unspecified) && (fVar3 <= fVar6)) {
        fVar3 = fVar6;
      }
      fVar6 = fVar3;
      if ((fVar1 != FOptionalSize::Unspecified) && (fVar6 = fVar1, fVar3 <= fVar1)) {
        fVar6 = fVar3;
      }
    }
    uVar4 = (double)fVar6;
    uVar5 = (double)fVar7;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(double)uVar4 + local_40[0].Left + local_40[0].Right);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)((float)(double)uVar5 + local_40[0].Top + local_40[0].Bottom);
  return __return_storage_ptr__;
}

// ComputeScaledSafeMargin @ 1428e26e0

FMargin * __thiscall
SSafeZone::ComputeScaledSafeMargin(SSafeZone *this,FMargin *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar2 = __real_3f000000;
  fVar4 = __real_3f800000 / param_1;
  auVar3 = roundps(in_XMM0,ZEXT416((uint)(fVar4 * (this->SafeMargin).Left + __real_3f000000)),1);
  __return_storage_ptr__->Left = auVar3._0_4_;
  auVar3 = roundps(auVar3,ZEXT416((uint)(fVar4 * (this->SafeMargin).Top + fVar2)),1);
  __return_storage_ptr__->Top = auVar3._0_4_;
  fVar1 = (this->SafeMargin).Bottom;
  auVar3 = roundps(auVar3,ZEXT416((uint)(fVar4 * (this->SafeMargin).Right + fVar2)),1);
  __return_storage_ptr__->Right = auVar3._0_4_;
  auVar3 = roundps(auVar3,ZEXT416((uint)(fVar4 * fVar1 + fVar2)),1);
  __return_storage_ptr__->Bottom = auVar3._0_4_;
  return __return_storage_ptr__;
}

// Construct @ 142900b50

void __thiscall SSafeZone::Construct(SSafeZone *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FArguments *pFVar7;
  FDelegateHandle FVar8;
  FArguments local_348;
  
  pFVar7 = SBox::FArguments::FArguments(&local_348);
  pFVar7->_HAlign = param_1->_HAlign;
  pFVar7->_VAlign = param_1->_VAlign;
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar2;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SBox::Construct((SBox *)this,pFVar7);
  SBox::FArguments::~FArguments(&local_348);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Padding,(SWidget *)this,&param_1->_Padding,None);
  fVar4 = (param_1->_SafeAreaScale).Top;
  fVar5 = (param_1->_SafeAreaScale).Right;
  fVar6 = (param_1->_SafeAreaScale).Bottom;
  (this->SafeAreaScale).Left = (param_1->_SafeAreaScale).Left;
  (this->SafeAreaScale).Top = fVar4;
  (this->SafeAreaScale).Right = fVar5;
  (this->SafeAreaScale).Bottom = fVar6;
  this->bIsTitleSafe = param_1->_IsTitleSafe;
  this->bPadLeft = param_1->_PadLeft;
  this->bPadRight = param_1->_PadRight;
  this->bPadTop = param_1->_PadTop;
  this->bPadBottom = param_1->_PadBottom;
  this->bSafeMarginNeedsUpdate = true;
  UpdateSafeMargin(this);
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddSP<SSafeZone>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                            *)&FCoreDelegates::OnSafeFrameChangedEvent,(SSafeZone *)&stack0x00000008
                           ,(pmf_e6a47658 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnSafeFrameChangedHandle).ID = *FVar8.ID;
  return;
}

// GetGlobalSafeZoneScale @ 142940d20

TOptional<float> __cdecl SSafeZone::GetGlobalSafeZoneScale(void)

{
  TOptional<float> in_RCX;
  
  *(undefined1 *)((longlong)in_RCX + 4) = 0;
  if (bEnableSafeZoneScale != false) {
    *(float *)in_RCX = GSafeZoneScale;
    *(undefined1 *)((longlong)in_RCX + 4) = 1;
  }
  return in_RCX;
}

// GetSafeMargin @ 142947700

FMargin * __thiscall
SSafeZone::GetSafeMargin(SSafeZone *this,FMargin *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_register_00001284 [12];
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  
  auVar7._4_12_ = in_register_00001284;
  auVar7._0_4_ = param_1;
  auVar6._4_4_ = in_register_00001284._0_4_;
  auVar6._0_4_ = param_1;
  auVar6._8_4_ = in_register_00001284._4_4_;
  auVar6._12_4_ = in_register_00001284._8_4_;
  if (this->bSafeMarginNeedsUpdate != false) {
    UpdateSafeMargin(this);
  }
  fVar3 = *(float *)&(this->Padding).field_0x4;
  fVar4 = *(float *)&(this->Padding).field_0x8;
  fVar5 = *(float *)&(this->Padding).field_0xc;
  fVar10 = __real_3f800000 / param_1;
  auVar11 = roundps(auVar6,ZEXT416((uint)(fVar10 * (this->SafeMargin).Left + __real_3f000000)),1);
  auVar9 = roundps(in_XMM3,ZEXT416((uint)(fVar10 * (this->SafeMargin).Top + __real_3f000000)),1);
  fVar1 = (this->SafeAreaScale).Top;
  auVar6 = ZEXT416((uint)(fVar10 * (this->SafeMargin).Right + __real_3f000000));
  auVar8 = roundps(auVar7,auVar6,1);
  fVar2 = (this->SafeAreaScale).Right;
  auVar7 = roundps(auVar6,ZEXT416((uint)(fVar10 * (this->SafeMargin).Bottom + __real_3f000000)),1);
  fVar10 = (this->SafeAreaScale).Bottom;
  __return_storage_ptr__->Left =
       auVar11._0_4_ * (this->SafeAreaScale).Left + *(float *)&this->Padding;
  __return_storage_ptr__->Top = auVar9._0_4_ * fVar1 + fVar3;
  __return_storage_ptr__->Right = auVar8._0_4_ * fVar2 + fVar4;
  __return_storage_ptr__->Bottom = auVar7._0_4_ * fVar10 + fVar5;
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 14295feb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SSafeZone::OnArrangeChildren(SSafeZone *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int iVar1;
  float fVar2;
  FDeprecateSlateVector2D FVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  undefined1 local_f0 [12];
  float local_e4;
  FArrangedWidget local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)((longlong)&this->_padding_ + 1)) == 0) {
    return;
  }
  GetSafeMargin(this,(FMargin *)local_f0,param_1->Scale);
  local_f8 = param_1->Size;
  iVar1 = (int)this->_padding_;
  fVar2 = (float)local_f8;
  fVar6 = (float)local_f8 - ((float)local_f0._8_4_ + (float)local_f0._0_4_);
  fVar5 = (float)local_f0._0_4_;
  if (iVar1 == 0) {
LAB_14295ffcd:
    fVar4 = fVar6;
    if (fVar6 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  else {
    FVar3 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar4 = fVar6;
    if (*(float *)FVar3 <= fVar6) {
      fVar4 = *(float *)FVar3;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar5 = ((fVar2 - fVar4) * __real_3f000000 + (float)local_f0._0_4_) - (float)local_f0._8_4_;
      }
      else {
        if (iVar1 != 3) goto LAB_14295ffcd;
        fVar5 = (fVar2 - fVar4) - (float)local_f0._8_4_;
      }
    }
  }
  local_f8 = param_1->Size;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  fVar2 = local_f8._4_4_;
  fVar6 = local_f8._4_4_ - (local_e4 + (float)local_f0._4_4_);
  if (iVar1 != 0) {
    FVar3 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    local_f8._4_4_ = *(float *)((longlong)FVar3 + 4);
    if (fVar6 <= *(float *)((longlong)FVar3 + 4)) {
      local_f8._4_4_ = fVar6;
    }
    if (local_f8._4_4_ <= 0.0) {
      local_f8._4_4_ = 0.0;
    }
    if (iVar1 == 1) goto LAB_14296006b;
    if (iVar1 == 2) {
      local_f0._4_4_ =
           ((fVar2 - local_f8._4_4_) * __real_3f000000 + (float)local_f0._4_4_) - local_e4;
      goto LAB_14296006b;
    }
    if (iVar1 == 3) {
      local_f0._4_4_ = (fVar2 - local_f8._4_4_) - local_e4;
      goto LAB_14296006b;
    }
  }
  local_f8._4_4_ = fVar6;
  if (fVar6 <= 0.0) {
    local_f8._4_4_ = 0.0;
  }
LAB_14296006b:
  local_f8._0_4_ = fVar4;
  local_f0._0_4_ = 1.0;
  local_f0._8_4_ = local_f0._4_4_;
  local_f0._4_4_ = fVar5;
  FGeometry::MakeChild
            (param_1,&local_d8,(TSharedRef<SWidget,1> *)&this->_padding_,
             (FDeprecateVector2DParameter *)&local_f8,(FSlateLayoutTransform *)local_f0);
  FArrangedChildren::AddWidget(param_2,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// SetGlobalSafeZoneScale @ 142990b10

void __cdecl SSafeZone::SetGlobalSafeZoneScale(TOptional<float> param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  bEnableSafeZoneScale = *(bool *)((longlong)param_1 + 4);
  if ((bEnableSafeZoneScale == false) ||
     (GSafeZoneScale = *(float *)param_1, *(float *)param_1 < 0.0)) {
    GSafeZoneScale = __real_3f800000;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnSafeFrameChangedEvent,(FWriteAccessScope *)&local_28);
  bVar2 = false;
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + 1;
  uVar6 = FCoreDelegates::OnSafeFrameChangedEvent._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)FCoreDelegates::OnSafeFrameChangedEvent._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == 0) ||
          (*(longlong **)(lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == (longlong *)0x0)
          ) || (cVar4 = (**(code **)(**(longlong **)
                                       (lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) +
                                    0x68))(), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// SetSafeAreaScale @ 142998b50

void __thiscall SSafeZone::SetSafeAreaScale(SSafeZone *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->SafeAreaScale).Left = param_1->Left;
  (this->SafeAreaScale).Top = fVar1;
  (this->SafeAreaScale).Right = fVar2;
  (this->SafeAreaScale).Bottom = fVar3;
  return;
}

// SetSidesToPad @ 142999820

void __thiscall
SSafeZone::SetSidesToPad(SSafeZone *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  this->bPadBottom = param_4;
  this->bPadLeft = param_1;
  this->bPadRight = param_2;
  this->bPadTop = param_3;
  UpdateSafeMargin(this);
  return;
}

// SetTitleSafe @ 14299ede0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SSafeZone::SetTitleSafe(SSafeZone *this,bool param_1)

{
  FMargin *pFVar1;
  FSlateApplication *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FDeprecateVector2DParameter FStackX_8;
  
  this->bSafeMarginNeedsUpdate = true;
  this_00 = FSlateApplication::Get();
  pFVar1 = &this->SafeMargin;
  FStackX_8 = (FDeprecateVector2DParameter)0x0;
  FSlateApplicationBase::GetSafeZoneSize((FSlateApplicationBase *)this_00,pFVar1,&FStackX_8);
  if (bEnableSafeZoneScale != false) {
    fVar3 = (this->SafeMargin).Top * GSafeZoneScale;
    fVar4 = (this->SafeMargin).Right * GSafeZoneScale;
    fVar5 = (this->SafeMargin).Bottom * GSafeZoneScale;
    pFVar1->Left = pFVar1->Left * GSafeZoneScale;
    (this->SafeMargin).Top = fVar3;
    (this->SafeMargin).Right = fVar4;
    (this->SafeMargin).Bottom = fVar5;
  }
  fVar3 = 0.0;
  if (this->bPadBottom == false) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (this->SafeMargin).Bottom;
  }
  if (this->bPadRight == false) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (this->SafeMargin).Right;
  }
  if (this->bPadTop == false) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (this->SafeMargin).Top;
  }
  if (this->bPadLeft != false) {
    fVar3 = pFVar1->Left;
  }
  pFVar1->Left = fVar3;
  (this->SafeMargin).Top = fVar2;
  (this->SafeMargin).Right = fVar5;
  (this->SafeMargin).Bottom = fVar4;
  SWidget::Invalidate((SWidget *)this,Layout);
  this->bSafeMarginNeedsUpdate = false;
  return;
}

// UpdateSafeMargin @ 1429af200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SSafeZone::UpdateSafeMargin(SSafeZone *this)

{
  FMargin *pFVar1;
  FSlateApplication *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FDeprecateVector2DParameter local_res8;
  
  this->bSafeMarginNeedsUpdate = true;
  this_00 = FSlateApplication::Get();
  pFVar1 = &this->SafeMargin;
  local_res8 = (FDeprecateVector2DParameter)0x0;
  FSlateApplicationBase::GetSafeZoneSize((FSlateApplicationBase *)this_00,pFVar1,&local_res8);
  if (bEnableSafeZoneScale != false) {
    fVar3 = (this->SafeMargin).Top * GSafeZoneScale;
    fVar4 = (this->SafeMargin).Right * GSafeZoneScale;
    fVar5 = (this->SafeMargin).Bottom * GSafeZoneScale;
    pFVar1->Left = pFVar1->Left * GSafeZoneScale;
    (this->SafeMargin).Top = fVar3;
    (this->SafeMargin).Right = fVar4;
    (this->SafeMargin).Bottom = fVar5;
  }
  fVar3 = 0.0;
  if (this->bPadBottom == false) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (this->SafeMargin).Bottom;
  }
  if (this->bPadRight == false) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (this->SafeMargin).Right;
  }
  if (this->bPadTop == false) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (this->SafeMargin).Top;
  }
  if (this->bPadLeft != false) {
    fVar3 = pFVar1->Left;
  }
  pFVar1->Left = fVar3;
  (this->SafeMargin).Top = fVar2;
  (this->SafeMargin).Right = fVar5;
  (this->SafeMargin).Bottom = fVar4;
  SWidget::Invalidate((SWidget *)this,Layout);
  this->bSafeMarginNeedsUpdate = false;
  return;
}

