// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 25

// SBox @ 1428b9900

SBox * __thiscall SBox::SBox(SBox *this)

{
  undefined1 *this_00;
  FBoxOneChildSlot *pFVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  SBox *pSVar5;
  EWidgetUpdateFlags EVar6;
  undefined1 local_res8 [8];
  
  SPanel::SPanel((SPanel *)this);
  pFVar1 = &this->ChildSlot;
  this->_padding_ = (longlong)&___7SBox__6B_;
  *(SBox **)&(this->ChildSlot).field_0x8 = this;
  *(undefined ***)&pFVar1->field_0x0 = &___7FChildren__6B_;
  ::FName::FName((FName *)&(this->ChildSlot).field_0x10,"Children");
  *(undefined2 *)&(this->ChildSlot).field_0x18 = 0xdc00;
  FSlotBase::FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20,(FChildren *)pFVar1);
  this_00 = &(this->ChildSlot).field_0x40;
  *(undefined ***)&pFVar1->field_0x0 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ChildSlot).field_0x48 = 0;
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SBox *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar4) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBox,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  *(undefined8 *)&(this->ChildSlot).field_0x50 = 0;
  *(undefined ***)&pFVar1->field_0x0 = &FBoxOneChildSlot::_vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &FBoxOneChildSlot::_vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->WidthOverride,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->HeightOverride,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MinDesiredWidth,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MinDesiredHeight,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MaxDesiredWidth,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MaxDesiredHeight,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MinAspectRatio,this);
  SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
            (&this->MaxAspectRatio,this);
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar6);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SBox @ 1428c10a0

void __thiscall SBox::~SBox(SBox *this)

{
  this->_padding_ = (longlong)&___7SBox__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// operator() @ 1428c7780

void __thiscall `SBox::OnArrangeChildren'::__l14::<lambda_1>::operator()(void *this,float param_1)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_3f800000 / param_1;
  cVar2 = **(char **)this;
  if (cVar2 == '\0') {
    if (**(char **)((longlong)this + 8) != '\0') goto LAB_1428c77af;
  }
  else if (**(char **)((longlong)this + 8) == '\0') goto LAB_1428c77af;
  cVar2 = __real_3f800000 <= param_1;
LAB_1428c77af:
  if (cVar2 == '\0') {
    fVar3 = fVar4;
    if (__real_3f800000 <= param_1) {
      fVar3 = param_1;
    }
    *(float *)(*(longlong *)((longlong)this + 0x10) + 4) =
         (*(float **)((longlong)this + 0x18))[1] * fVar3;
    **(float **)((longlong)this + 0x10) = param_1 * (*(float **)((longlong)this + 0x10))[1];
    pfVar1 = *(float **)((longlong)this + 0x20);
    fVar3 = fVar4 * *pfVar1;
    if (pfVar1[1] <= fVar4 * *pfVar1) {
      fVar3 = pfVar1[1];
    }
    pfVar1[1] = fVar3;
    **(float **)((longlong)this + 0x20) = param_1 * (*(float **)((longlong)this + 0x20))[1];
    return;
  }
  fVar3 = fVar4;
  if (__real_3f800000 <= param_1) {
    fVar3 = param_1;
  }
  **(float **)((longlong)this + 0x10) = **(float **)((longlong)this + 0x18) * fVar3;
  (*(float **)((longlong)this + 0x10))[1] = fVar4 * **(float **)((longlong)this + 0x10);
  pfVar1 = *(float **)((longlong)this + 0x20);
  fVar3 = param_1 * pfVar1[1];
  if (*pfVar1 <= param_1 * pfVar1[1]) {
    fVar3 = *pfVar1;
  }
  *pfVar1 = fVar3;
  (*(float **)((longlong)this + 0x20))[1] = fVar4 * **(float **)((longlong)this + 0x20);
  return;
}

// ComputeDesiredHeight @ 1428e0720

float __thiscall SBox::ComputeDesiredHeight(SBox *this)

{
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  float fVar3;
  FDeprecateSlateVector2D FVar4;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  
  fVar2 = *(float *)&(this->ChildSlot).field_0x44;
  fVar3 = *(float *)&(this->ChildSlot).field_0x4c;
  FVar4 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
  TVar5 = this->MinDesiredHeight;
  TVar6 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
          (fVar3 + fVar2 + *(float *)((longlong)FVar4 + 4));
  TVar1 = this->MaxDesiredHeight;
  if (((float)TVar5 != FOptionalSize::Unspecified) && ((float)TVar6 <= (float)TVar5)) {
    TVar6 = TVar5;
  }
  TVar5 = TVar6;
  if (((float)TVar1 != FOptionalSize::Unspecified) && (TVar5 = TVar1, (float)TVar6 <= (float)TVar1))
  {
    TVar5 = TVar6;
  }
  return (float)TVar5;
}

// ComputeDesiredSize @ 1428e0830

TVector2<double> * __thiscall
SBox::ComputeDesiredSize(SBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  SWidget *this_00;
  float fVar2;
  float fVar3;
  FDeprecateSlateVector2D FVar4;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar7;
  
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x30;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute ==
      EVisibility::Collapsed.Value.Value) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  TVar6 = this->WidthOverride;
  TVar7 = this->HeightOverride;
  if ((float)this->HeightOverride == FOptionalSize::Unspecified) {
    fVar2 = *(float *)&(this->ChildSlot).field_0x44;
    fVar3 = *(float *)&(this->ChildSlot).field_0x4c;
    FVar4 = SWidget::GetDesiredSize(this_00);
    TVar7 = this->MinDesiredHeight;
    TVar5 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            (fVar3 + fVar2 + *(float *)((longlong)FVar4 + 4));
    TVar1 = this->MaxDesiredHeight;
    if (((float)TVar7 != FOptionalSize::Unspecified) && ((float)TVar5 <= (float)TVar7)) {
      TVar5 = TVar7;
    }
    TVar7 = TVar5;
    if (((float)TVar1 != FOptionalSize::Unspecified) &&
       (TVar7 = TVar1, (float)TVar5 <= (float)TVar1)) {
      TVar7 = TVar5;
    }
  }
  if ((float)TVar6 == FOptionalSize::Unspecified) {
    fVar2 = *(float *)&(this->ChildSlot).field_0x40;
    fVar3 = *(float *)&(this->ChildSlot).field_0x48;
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    TVar6 = this->MinDesiredWidth;
    TVar5 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            (fVar3 + fVar2 + *(float *)FVar4);
    TVar1 = this->MaxDesiredWidth;
    if (((float)TVar6 != FOptionalSize::Unspecified) && ((float)TVar5 <= (float)TVar6)) {
      TVar5 = TVar6;
    }
    TVar6 = TVar5;
    if (((float)TVar1 != FOptionalSize::Unspecified) &&
       (TVar6 = TVar1, (float)TVar5 <= (float)TVar1)) {
      TVar6 = TVar5;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)TVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)TVar7;
  return __return_storage_ptr__;
}

// ComputeDesiredWidth @ 1428e2100

float __thiscall SBox::ComputeDesiredWidth(SBox *this)

{
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  float fVar3;
  FDeprecateSlateVector2D FVar4;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  
  fVar2 = *(float *)&(this->ChildSlot).field_0x40;
  fVar3 = *(float *)&(this->ChildSlot).field_0x48;
  FVar4 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
  TVar6 = this->MinDesiredWidth;
  TVar5 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
          (fVar3 + fVar2 + *(float *)FVar4);
  TVar1 = this->MaxDesiredWidth;
  if (((float)TVar6 != FOptionalSize::Unspecified) && ((float)TVar5 <= (float)TVar6)) {
    TVar5 = TVar6;
  }
  TVar6 = TVar5;
  if (((float)TVar1 != FOptionalSize::Unspecified) && (TVar6 = TVar1, (float)TVar5 <= (float)TVar1))
  {
    TVar6 = TVar5;
  }
  return (float)TVar6;
}

// Construct @ 1428f91e0

void __thiscall SBox::Construct(SBox *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined1 auVar20 [8];
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar21;
  FBoxOneChildSlot *pFVar22;
  undefined1 local_38 [8];
  undefined1 auStack_30 [16];
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  auVar20 = local_38;
  uVar4 = (param_1->_WidthOverride).Value;
  uVar5 = (param_1->_WidthOverride).bIsSet;
  local_38[4] = uVar5;
  local_38._0_4_ = uVar4;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_WidthOverride).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->WidthOverride,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar6 = (param_1->_HeightOverride).Value;
  uVar7 = (param_1->_HeightOverride).bIsSet;
  local_38[4] = uVar7;
  local_38._0_4_ = uVar6;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_HeightOverride).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HeightOverride,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar8 = (param_1->_MinDesiredWidth).Value;
  uVar9 = (param_1->_MinDesiredWidth).bIsSet;
  local_38[4] = uVar9;
  local_38._0_4_ = uVar8;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinDesiredWidth).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredWidth,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar10 = (param_1->_MinDesiredHeight).Value;
  uVar11 = (param_1->_MinDesiredHeight).bIsSet;
  local_38[4] = uVar11;
  local_38._0_4_ = uVar10;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinDesiredHeight).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredHeight,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar12 = (param_1->_MaxDesiredWidth).Value;
  uVar13 = (param_1->_MaxDesiredWidth).bIsSet;
  local_38[4] = uVar13;
  local_38._0_4_ = uVar12;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxDesiredWidth).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredWidth,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar14 = (param_1->_MaxDesiredHeight).Value;
  uVar15 = (param_1->_MaxDesiredHeight).bIsSet;
  local_38[4] = uVar15;
  local_38._0_4_ = uVar14;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxDesiredHeight).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredHeight,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar16 = (param_1->_MinAspectRatio).Value;
  uVar17 = (param_1->_MinAspectRatio).bIsSet;
  local_38[4] = uVar17;
  local_38._0_4_ = uVar16;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MinAspectRatio).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinAspectRatio,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  auVar20 = local_38;
  uVar18 = (param_1->_MaxAspectRatio).Value;
  uVar19 = (param_1->_MaxAspectRatio).bIsSet;
  local_38[4] = uVar19;
  local_38._0_4_ = uVar18;
  local_38._5_3_ = auVar20._5_3_;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_MaxAspectRatio).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxAspectRatio,(SWidget *)this,(TAttribute<FOptionalSize> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30);
  if ((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(auStack_30._9_7_,auStack_30[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_30);
  local_20._16_4_ = 0;
  *(EHorizontalAlignment *)&(this->ChildSlot).field_0x50 = param_1->_HAlign;
  pFVar22 = &this->ChildSlot;
  if (this == (SBox *)0xfffffffffffffd98) {
    pFVar22 = (FBoxOneChildSlot *)0x0;
  }
  *(EVerticalAlignment *)&pFVar22->field_0x54 = param_1->_VAlign;
  local_38 = *(undefined1 (*) [8])&(param_1->_Padding).Value;
  auStack_30._0_8_ = *(undefined8 *)&(param_1->_Padding).Value.Right;
  auStack_30[8] = (param_1->_Padding).bIsSet;
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_20,&(param_1->_Padding).Getter);
  pTVar21 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)&pFVar22->field_0x40,(TAttribute<FMargin> *)local_38);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pTVar21->field_0x20);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&pTVar21->field_0x38;
  *(SWidget **)&pTVar21->field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&pTVar21->field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pTVar21->field_0x20);
  return;
}

// GetChildren @ 14293e4d0

FChildren * __thiscall SBox::GetChildren(SBox *this)

{
  return (FChildren *)&this->ChildSlot;
}

// GetPrivateWidgetClass @ 142946a10

FSlateWidgetClassData * __cdecl SBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c5a0

FSlateWidgetClassData * __thiscall SBox::GetWidgetClass(SBox *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 14295db30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SBox::OnArrangeChildren(SBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int iVar1;
  SWidget *this_00;
  float fVar2;
  bool bVar3;
  bool bVar4;
  FDeprecateSlateVector2D FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar13;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar14;
  undefined1 auStackY_198 [32];
  char local_168;
  char local_167 [7];
  undefined8 local_160;
  float local_158;
  float local_150;
  float fStack_14c;
  undefined1 local_148 [4];
  TVector2<float>_u_0 TStack_144;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined8 *local_110;
  float *local_108;
  FSharedReferencer<1> local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x30;
  if (((param_2->VisibilityFilter).Value.Value & (byte)this_00->VisibilityAttribute) == 0) {
    return;
  }
  local_160 = param_1->Size;
  iVar1 = *(int *)&(this->ChildSlot).field_0x50;
  TVar13 = this->MaxAspectRatio;
  TVar14 = this->MinAspectRatio;
  fVar12 = (float)local_160;
  fVar8 = *(float *)&(this->ChildSlot).field_0x40;
  fVar2 = *(float *)&(this->ChildSlot).field_0x44;
  fVar10 = *(float *)&(this->ChildSlot).field_0x48;
  fVar7 = *(float *)&(this->ChildSlot).field_0x4c;
  local_150 = fVar10 + fVar8;
  fVar11 = (float)local_160 - local_150;
  fVar9 = fVar8;
  if (iVar1 == 0) {
LAB_14295dc69:
    fVar6 = fVar11;
    if (fVar11 <= 0.0) {
      fVar6 = 0.0;
    }
  }
  else {
    FVar5 = SWidget::GetDesiredSize(this_00);
    fVar6 = *(float *)FVar5;
    if (fVar11 <= *(float *)FVar5) {
      fVar6 = fVar11;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar9 = ((fVar12 - fVar6) * __real_3f000000 + fVar8) - fVar10;
      }
      else {
        if (iVar1 != 3) goto LAB_14295dc69;
        fVar9 = (fVar12 - fVar6) - fVar10;
      }
    }
  }
  local_160 = param_1->Size;
  iVar1 = *(int *)&(this->ChildSlot).field_0x54;
  local_158 = fVar7 + fVar2;
  fVar12 = local_160._4_4_;
  fVar11 = local_160._4_4_ - local_158;
  local_138 = fVar7;
  fStack_134 = fVar7;
  fStack_130 = fVar7;
  fStack_12c = fVar7;
  TStack_144._s_0.Y = fVar2;
  if (iVar1 == 0) {
LAB_14295dd20:
    fVar7 = fVar11;
    if (fVar11 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  else {
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    fVar7 = *(float *)((longlong)FVar5 + 4);
    if (fVar11 <= *(float *)((longlong)FVar5 + 4)) {
      fVar7 = fVar11;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        TStack_144._s_0.Y = ((fVar12 - fVar7) * __real_3f000000 + fVar2) - local_138;
      }
      else {
        if (iVar1 != 3) goto LAB_14295dd20;
        TStack_144._s_0.Y = (fVar12 - fVar7) - local_138;
      }
    }
  }
  fVar12 = local_150;
  if (((float)TVar13 == FOptionalSize::Unspecified) && ((float)TVar14 == FOptionalSize::Unspecified)
     ) goto LAB_14295dfe7;
  local_160._4_4_ = fVar7;
  local_160._0_4_ = fVar6;
  if ((float)TVar14 == FOptionalSize::Unspecified) {
    TVar14 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0
    ;
  }
  if ((float)TVar13 == FOptionalSize::Unspecified) {
    TVar13 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0
    ;
  }
  if ((fVar6 <= 0.0) || (fVar7 <= 0.0)) goto LAB_14295dfe7;
  if ((fVar6 / fVar7 <= (float)TVar13) || ((float)TVar13 == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((float)TVar14 <= fVar6 / fVar7) || ((float)TVar14 == 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar3) && (!bVar4)) goto LAB_14295dfe7;
  local_168 = *(int *)&(this->ChildSlot).field_0x50 == 0;
  local_167[0] = *(int *)&(this->ChildSlot).field_0x54 == 0;
  local_150 = *(float *)&param_1->Size - local_150;
  fStack_14c = *(float *)&(param_1->Size).field_0x4 - local_158;
  local_128._0_8_ = &local_168;
  local_128._8_8_ = local_167;
  local_118 = local_148;
  local_110 = &local_160;
  local_108 = &local_150;
  if (!bVar3) {
    TVar13 = TVar14;
  }
  local_148 = (undefined1  [4])local_150;
  TStack_144._s_0.X = fStack_14c;
  `SBox::OnArrangeChildren'::__l14::<lambda_1>::operator()(local_128,(float)TVar13);
  if (local_150 < (float)local_148) {
    if ((float)local_148 == 0.0) {
      local_148 = (undefined1  [4])((float)local_148 * 0.0);
      TStack_144._s_0.X = TStack_144._s_0.X * 0.0;
    }
    else {
      fVar7 = local_150 / (float)local_148;
      local_148 = (undefined1  [4])((float)local_148 * fVar7);
      TStack_144._s_0.X = TStack_144._s_0.X * fVar7;
    }
  }
  if (fStack_14c < TStack_144._s_0.X) {
    if (TStack_144._s_0.X == 0.0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fStack_14c / TStack_144._s_0.X;
    }
    local_148 = (undefined1  [4])((float)local_148 * fVar7);
    TStack_144._s_0.X = TStack_144._s_0.X * fVar7;
  }
  local_160._0_4_ = SUB84(param_1->Size,0);
  fVar12 = (float)local_160 - fVar12;
  fVar6 = fVar12;
  if (local_168 == '\0') {
    iVar1 = *(int *)&(this->ChildSlot).field_0x50;
    if (iVar1 == 0) {
      if (fVar12 <= 0.0) {
        fVar6 = 0.0;
      }
    }
    else {
      if ((float)local_148 <= fVar12) {
        fVar6 = (float)local_148;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (iVar1 != 1) {
        if (iVar1 == 2) goto LAB_14295df47;
        if (iVar1 == 3) {
          local_160._0_4_ = (float)local_160 - fVar6;
          goto LAB_14295df58;
        }
        fVar6 = fVar12;
        if (fVar12 <= 0.0) {
          fVar6 = 0.0;
        }
      }
    }
  }
  else {
    if ((float)local_148 <= fVar12) {
      fVar6 = (float)local_148;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
LAB_14295df47:
    local_160._0_4_ = ((float)local_160 - fVar6) * __real_3f000000 + fVar8;
LAB_14295df58:
    fVar8 = (float)local_160 - fVar10;
  }
  local_160._4_4_ = SUB84(param_1->Size,4);
  fVar10 = local_160._4_4_ - local_158;
  fVar7 = fVar10;
  fVar9 = fVar8;
  if (local_167[0] == '\0') {
    iVar1 = *(int *)&(this->ChildSlot).field_0x54;
    if (iVar1 == 0) {
LAB_14295dfbe:
      TStack_144._s_0.Y = fVar2;
      fVar7 = fVar10;
      if (fVar10 <= 0.0) {
        fVar7 = 0.0;
      }
      goto LAB_14295dfe7;
    }
    if (TStack_144._s_0.X <= fVar10) {
      fVar7 = TStack_144._s_0.X;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    TStack_144._s_0.Y = fVar2;
    if (iVar1 == 1) goto LAB_14295dfe7;
    if (iVar1 == 2) goto LAB_14295dfd8;
    if (iVar1 != 3) goto LAB_14295dfbe;
    local_160._4_4_ = local_160._4_4_ - fVar7;
  }
  else {
    if (TStack_144._s_0.X <= fVar10) {
      fVar7 = TStack_144._s_0.X;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
LAB_14295dfd8:
    local_160._4_4_ = (local_160._4_4_ - fVar7) * __real_3f000000 + fVar2;
  }
  TStack_144._s_0.Y = local_160._4_4_ - local_138;
LAB_14295dfe7:
  local_160._4_4_ = fVar7;
  local_160._0_4_ = fVar6;
  TStack_144._s_0.X = fVar9;
  local_148 = (undefined1  [4])0x3f800000;
  FGeometry::MakeChild
            (param_1,(FArrangedWidget *)local_128,
             (TSharedRef<SWidget,1> *)&(this->ChildSlot).field_0x30,
             (FDeprecateVector2DParameter *)&local_160,(FSlateLayoutTransform *)local_148);
  FArrangedChildren::AddWidget(param_2,(FArrangedWidget *)local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
  return;
}

// OnPaint @ 14297dfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SBox::OnPaint(SBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
             FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1e8 [32];
  FPaintArgs local_1a8;
  FArrangedChildren local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_178.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_178.Array.ArrayNum = 0;
  local_178.Array.ArrayMax = 4;
  local_178.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_178,false);
  if (0 < local_178.Array.ArrayNum) {
    if ((local_178.Array.ArrayNum != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SBox.cpp"
                           ,0x130,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((local_178.Array.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
    if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
    }
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_1a8.RootGrid = param_1->RootGrid;
    local_1a8.CurrentGrid = param_1->CurrentGrid;
    local_1a8.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_1a8.CurrentTime = param_1->CurrentTime;
    local_1a8.DeltaTime = param_1->DeltaTime;
    local_1a8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_1a8.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint(((TSharedRef<SWidget,1> *)((longlong)FVar4 + 0x38))->Object,&local_1a8,
                             (FGeometry *)FVar4,param_3,param_4,param_5,param_6,bVar2);
  }
  FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_178.Array.ArrayNum);
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 142985010

void __cdecl SBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"SlotPadding");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985097:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985097;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"WidthOverride",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_14298511c:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14298511c;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"HeightOverride",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x274,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1429851a1:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1429851a1;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"MinDesiredWidth",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x278,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985226:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985226;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x10,L"MinDesiredHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x27c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1429852ab:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1429852ab;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"MaxDesiredWidth",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x280,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142985330:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142985330;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x10,L"MaxDesiredHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x284,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1429853b5:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1429853b5;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"MinAspectRatio",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x288,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142985444;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142985444:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"MaxAspectRatio",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x28c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// SetContent @ 14298efa0

void __thiscall SBox::SetContent(SBox *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this_00 = &(this->ChildSlot).field_0x20;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  return;
}

// SetHAlign @ 142990cc0

void __thiscall SBox::SetHAlign(SBox *this,EHorizontalAlignment param_1)

{
  undefined1 *puVar1;
  FBoxOneChildSlot *pFVar2;
  
  puVar1 = &(this->ChildSlot).field_0x50;
  if (*(EHorizontalAlignment *)&(this->ChildSlot).field_0x50 != param_1) {
    *(EHorizontalAlignment *)puVar1 = param_1;
    pFVar2 = &this->ChildSlot;
    if (puVar1 == (undefined1 *)0x0) {
      pFVar2 = (FBoxOneChildSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar2->field_0x20,Layout);
    return;
  }
  return;
}

// SetHeightOverride @ 142990de0

void __thiscall SBox::SetHeightOverride(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HeightOverride,(SWidget *)this,param_1,None);
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

// SetMaxAspectRatio @ 142993040

void __thiscall SBox::SetMaxAspectRatio(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxAspectRatio,(SWidget *)this,param_1,None);
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

// SetMaxDesiredHeight @ 142993090

void __thiscall SBox::SetMaxDesiredHeight(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredHeight,(SWidget *)this,param_1,None);
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

// SetMaxDesiredWidth @ 1429930e0

void __thiscall SBox::SetMaxDesiredWidth(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredWidth,(SWidget *)this,param_1,None);
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

// SetMinAspectRatio @ 142995920

void __thiscall SBox::SetMinAspectRatio(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinAspectRatio,(SWidget *)this,param_1,None);
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

// SetMinDesiredHeight @ 142995970

void __thiscall SBox::SetMinDesiredHeight(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredHeight,(SWidget *)this,param_1,None);
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

// SetMinDesiredWidth @ 142995ba0

void __thiscall SBox::SetMinDesiredWidth(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredWidth,(SWidget *)this,param_1,None);
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

// SetPadding @ 142998640

void __thiscall SBox::SetPadding(SBox *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *this_01;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FBoxOneChildSlot *pFVar5;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  local_40._0_4_ = (param_1->Value).Left;
  local_40._4_4_ = (param_1->Value).Top;
  local_40._8_4_ = (param_1->Value).Right;
  local_40._12_4_ = (param_1->Value).Bottom;
  local_40[0x10] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  local_18 = 0;
  this_01 = &(this->ChildSlot).field_0x40;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,this_00);
  pFVar5 = &this->ChildSlot;
  if (this_01 == (undefined1 *)0x0) {
    pFVar5 = (FBoxOneChildSlot *)0x0;
  }
  pSVar4 = FSlotBase::GetOwnerWidget((FSlotBase *)&pFVar5->field_0x20);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_01,pSVar4,(TAttribute<FMargin> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetVAlign @ 14299f090

void __thiscall SBox::SetVAlign(SBox *this,EVerticalAlignment param_1)

{
  FBoxOneChildSlot *pFVar1;
  
  if (*(EVerticalAlignment *)&(this->ChildSlot).field_0x54 != param_1) {
    *(EVerticalAlignment *)&(this->ChildSlot).field_0x54 = param_1;
    pFVar1 = &this->ChildSlot;
    if (this == (SBox *)0xfffffffffffffd98) {
      pFVar1 = (FBoxOneChildSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar1->field_0x20,Layout);
    return;
  }
  return;
}

// SetWidthOverride @ 14299f8a0

void __thiscall SBox::SetWidthOverride(SBox *this,TAttribute<FOptionalSize> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->WidthOverride,(SWidget *)this,param_1,None);
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

