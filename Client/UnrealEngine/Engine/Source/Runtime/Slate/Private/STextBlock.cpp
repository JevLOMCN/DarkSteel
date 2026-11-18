// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 49

// GetText @ 142815d20

FText * __thiscall STextBlock::GetText(STextBlock *this)

{
  if ((*(byte *)&this->field91_0x60c & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->BoundText,(SWidget *)this,Member);
  }
  return (FText *)&this->BoundText;
}

// STextBlock @ 1429bae70

STextBlock * __thiscall STextBlock::STextBlock(STextBlock *this)

{
  byte *pbVar1;
  TSlateAttribute<FSlateFontInfo,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_02;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  TSlateAttribute<ETextWrappingPolicy,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_03;
  TSlateAttribute<ETextTransformPolicy,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_04
  ;
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_05;
  TSlateAttribute<ETextJustify::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_06;
  EWidgetUpdateFlags EVar4;
  code *pcVar5;
  double _X;
  bool bVar6;
  int iVar7;
  STextBlock *pSVar8;
  EWidgetUpdateFlags EVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  FLinearColor_u_0 local_5c;
  FLinearColor_u_0 local_4c [2];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7STextBlock__6B_;
  SWidget::TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->BoundText,this);
  (this->TextLayoutCache).Ptr = (FSlateTextBlockLayout *)0x0;
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  this_00 = &this->Font;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)this_00);
  pSVar8 = this + 1;
  if ((this_00 < this) || (pSVar8 <= this_00)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar6) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  SWidget::TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->StrikeBrush,this);
  this_01 = &this->ColorAndOpacity;
  *(undefined8 *)&this_01->field_0x0 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacity).field_0x8 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacity).field_0xc = 0x3f800000;
  (this->ColorAndOpacity).field_0x10 = 0;
  if ((this_01 < this) || (pSVar8 <= this_01)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar6) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_02 = &this->ShadowOffset;
  *this_02 = (TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar7 = _finite(*(double *)&this_02->field_0x0);
  if (iVar7 != 0) {
    iVar7 = _finite(*(double *)&(this->ShadowOffset).field_0x8);
    if (iVar7 != 0) goto LAB_1429bafd2;
  }
  local_res18[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res18);
LAB_1429bafd2:
  if ((this_02 < this) || (pSVar8 <= this_02)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar6) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  local_5c._0_8_ = 0;
  local_5c._8_8_ = 0;
  SWidget::TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->ShadowColorAndOpacity,this,(FLinearColor *)&local_5c._s_0);
  local_4c[0]._0_8_ = 0;
  local_4c[0]._8_8_ = 0;
  SWidget::TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->HighlightColor,this,(FLinearColor *)&local_4c[0]._s_0);
  SWidget::TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->HighlightShape,this);
  SWidget::TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
            (&this->HighlightText,this);
  pTVar2 = &this->WrapTextAt;
  *pTVar2 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  iVar7 = _finite(0.0);
  if (iVar7 == 0) {
    local_68 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_68);
  }
  if ((pTVar2 < this) || (pSVar8 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar6) {
    local_67 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_67);
  }
  pTVar3 = &this->AutoWrapText;
  *pTVar3 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  if ((pTVar3 < this) || (pSVar8 <= pTVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar3,(SWidget *)this);
  if (!bVar6) {
    local_66 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_66);
  }
  this_03 = &this->WrappingPolicy;
  *this_03 = (TSlateAttribute<ETextWrappingPolicy,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x0;
  if ((this_03 < this) || (pSVar8 <= this_03)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_03,(SWidget *)this);
  if (!bVar6) {
    local_65 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_65);
  }
  this_04 = &this->TransformPolicy;
  *this_04 = (TSlateAttribute<ETextTransformPolicy,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x0;
  if ((this_04 < this) || (pSVar8 <= this_04)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_04,(SWidget *)this);
  if (!bVar6) {
    local_64 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_64);
  }
  this_05 = &this->Margin;
  *(undefined8 *)&this_05->field_0x0 = 0;
  *(undefined8 *)&(this->Margin).field_0x8 = 0;
  if ((this_05 < this) || (pSVar8 <= this_05)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_05,(SWidget *)this);
  if (!bVar6) {
    local_63 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_63);
  }
  this_06 = &this->Justification;
  *this_06 = (TSlateAttribute<ETextJustify::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x0;
  if ((this_06 < this) || (pSVar8 <= this_06)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_06,(SWidget *)this);
  if (!bVar6) {
    local_62 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_62);
  }
  _X = __real_3ff0000000000000;
  pTVar2 = &this->LineHeightPercentage;
  *pTVar2 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x3f800000;
  iVar7 = _finite(_X);
  if (iVar7 == 0) {
    local_61 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_61);
  }
  if ((pTVar2 < this) || (pSVar8 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar6) {
    local_60 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_60);
  }
  pTVar3 = &this->ApplyLineHeightToBottomLine;
  *pTVar3 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
  if ((pTVar3 < this) || (pSVar8 <= pTVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar3,(SWidget *)this);
  if (!bVar6) {
    local_5f = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_5f);
  }
  pTVar2 = &this->MinDesiredWidth;
  *pTVar2 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  iVar7 = _finite(0.0);
  if (iVar7 == 0) {
    local_5e = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_5e);
  }
  if ((pTVar2 < this) || (pSVar8 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (STextBlock *)(*pcVar5)();
      return pSVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar6) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(&local_5d);
  }
  (this->CachedSimpleDesiredSize).bIsSet = false;
  EVar4 = (EWidgetUpdateFlags)this->_padding_;
  (this->field91_0x60c).Union_Flags = 0;
  EVar9 = EVar4 & ~NeedsTick;
  this->bSimpleTextMode = false;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar9;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar4,EVar9);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  (this->field91_0x60c).Union_Flags = (this->field91_0x60c).Union_Flags | 0xc00;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~STextBlock @ 1429c0210

void __thiscall STextBlock::~STextBlock(STextBlock *this)

{
  this->_padding_ = (longlong)&___7STextBlock__6B_;
  if (*(longlong **)&this->HighlightText != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->HighlightText + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Font).field_0x38);
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&this->TextLayoutCache,
             (this->TextLayoutCache).Ptr);
  if (*(longlong **)&this->BoundText != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->BoundText + 0x10))();
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 1429cea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
STextBlock::ComputeDesiredSize
          (STextBlock *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  FSlateTextBlockLayout *pFVar4;
  code *pcVar5;
  TVector2<float>_u_0 TVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_Stat_SlateTextBlockCDS> FVar12;
  FSlateApplication *pFVar13;
  TVector2<double> *pTVar14;
  FDeprecateSlateVector2D FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar16;
  longlong lVar17;
  FName FVar18;
  longlong lVar19;
  TOptional<UE::Math::TVector2<float>_> *pTVar20;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar21;
  undefined8 uVar22;
  float in_XMM3_Da;
  float fVar23;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  float local_1c8;
  float fStack_1c4;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_1b0;
  float fStack_1ac;
  FName local_1a8;
  LARGE_INTEGER local_198;
  LARGE_INTEGER local_190;
  FStatMessage local_188;
  FStatMessage local_178;
  TSharedRef<FSlateFontMeasure,1> local_168;
  TVector2<double>_u_0 local_158;
  FName local_148;
  undefined1 local_140 [24];
  int local_128;
  TReferenceControllerBase<1> *local_100;
  FSlateFontInfo local_d8;
  
  FVar12 = StatPtr_Stat_SlateTextBlockCDS;
  if (StatPtr_Stat_SlateTextBlockCDS == (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockCDS>)0x0) {
    pFVar11 = ::FName::FName(&local_148,"Stat_SlateTextBlockCDS");
    FVar12 = (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockCDS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_SlateTextBlockCDS,*pFVar11,
                        L"STextBlock::ComputeDesiredSize","STATGROUP_SlateVerbose",
                        "STATCAT_Advanced",L"SlateVerbose",false,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_res20.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\STextBlock.cpp"
                   ,0x149);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_1429ceb98;
    }
  }
  bVar8 = false;
  FVar18 = local_1a8;
LAB_1429ceb98:
  uVar3 = (this->field91_0x60c).Union_Flags;
  if (this->bSimpleTextMode == false) {
    (this->field91_0x60c).Union_Flags = uVar3 | 0x800;
    UpdateTextBlockLayout(this,param_1);
    pFVar4 = (this->TextLayoutCache).Ptr;
    if (((pFVar4->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector2<double> *)(*pcVar5)();
      return pTVar14;
    }
    FTextLayout::GetSize
              ((FTextLayout *)(pFVar4->TextLayout).Object,(TVector2<double> *)&local_158._s_0);
    uVar22 = (double)(float)this->MinDesiredWidth;
    if ((double)(float)this->MinDesiredWidth <= local_158._s_0.X) {
      uVar22 = local_158._s_0.X;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar22;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_158._s_0.Y;
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar8) {
      return __return_storage_ptr__;
    }
    if (FVar18 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_178.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
    local_178.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_190);
    local_178.StatData.Pad[4] = '\0';
    local_178.StatData.Pad[5] = '\0';
    local_178.StatData.Pad[6] = '\0';
    local_178.StatData.Pad[7] = '\0';
    local_178.StatData.Pad[0] = local_190.s.LowPart._0_1_;
    local_178.StatData.Pad[1] = local_190.s.LowPart._1_1_;
    local_178.StatData.Pad[2] = local_190.s.LowPart._2_1_;
    local_178.StatData.Pad[3] = local_190.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_178);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    if ((uVar3 & 0x10) == 0) {
      FVar15 = (this->TextStyle).ShadowOffset;
    }
    else {
      FVar15._4_4_ = (float)*(double *)&(this->ShadowOffset).field_0x8;
      FVar15._0_4_ = (float)*(double *)&this->ShadowOffset;
    }
    local_1c8 = FVar15._0_4_;
    fStack_1c4 = FVar15._4_4_;
    lVar19 = 0x510;
    lVar17 = 0x510;
    if ((uVar3 & 2) == 0) {
      lVar17 = 0x238;
    }
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)(local_140 + 8),
               (FSlateFontInfo *)((longlong)&this->_padding_ + lVar17));
    fVar23 = (float)local_128;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    pFVar13 = FSlateApplication::Get();
    lVar17 = *(longlong *)&pFVar13->field_0x60;
    if ((*(longlong *)(lVar17 + 8) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector2<double> *)(*pcVar5)();
      return pTVar14;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar17 + 8),&local_168);
    if ((*(byte *)&this->field91_0x60c & 2) == 0) {
      lVar19 = 0x238;
    }
    FSlateFontInfo::FSlateFontInfo
              (&local_d8,(FSlateFontInfo *)((longlong)&this->_padding_ + lVar19));
    FVar15 = FSlateFontMeasure::Measure
                       (local_168.Object,(FText *)local_140,(FSlateFontInfo *)&this->BoundText,
                        in_XMM3_Da);
    TVar21 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
             (local_1c8 + fVar23 + fVar23 + *(float *)FVar15);
    fStack_1c4 = fStack_1c4 + fVar23 + *(float *)((longlong)FVar15 + 4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    pTVar20 = &this->CachedSimpleDesiredSize;
    local_1b0 = this->MinDesiredWidth;
    if ((float)this->MinDesiredWidth <= (float)TVar21) {
      local_1b0 = TVar21;
    }
    if ((TOptional<UE::Math::TVector2<float>_> *)&local_1b0 != pTVar20) {
      TVar6._s_0.Y = fStack_1c4;
      TVar6._s_0.X = (float)local_1b0;
      (pTVar20->TypedValue).field0_0x0 = TVar6;
      (this->CachedSimpleDesiredSize).bIsSet = true;
    }
    fStack_1ac = fStack_1c4;
    if (((this->CachedSimpleDesiredSize).bIsSet == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector2<double> *)(*pcVar5)();
      return pTVar14;
    }
    fVar23 = (this->CachedSimpleDesiredSize).TypedValue.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(pTVar20->TypedValue).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar23;
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar8) {
      return __return_storage_ptr__;
    }
    if (FVar18 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_188.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
    local_188.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_198);
    local_188.StatData.Pad[4] = '\0';
    local_188.StatData.Pad[5] = '\0';
    local_188.StatData.Pad[6] = '\0';
    local_188.StatData.Pad[7] = '\0';
    local_188.StatData.Pad[0] = local_198.s.LowPart._0_1_;
    local_188.StatData.Pad[1] = local_198.s.LowPart._1_1_;
    local_188.StatData.Pad[2] = local_198.s.LowPart._2_1_;
    local_188.StatData.Pad[3] = local_198.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_188);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// Construct @ 1429d79d0

void __thiscall STextBlock::Construct(STextBlock *this,FArguments *param_1)

{
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_00;
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined1 auVar17 [8];
  bool bVar18;
  ETextOverflowPolicy EVar19;
  TAttribute<FText> *pTVar20;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar21;
  FTextBlockStyle *pFVar22;
  FSlateTextBlockLayout *pFVar23;
  FSlateTextBlockLayout *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  undefined4 local_res8;
  ETextShapingMethod local_res10;
  char local_res11;
  undefined1 local_438 [8];
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [8];
  ForAnyElementType FStack_418;
  int local_410;
  undefined1 local_408 [16];
  ulonglong local_3f8;
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [8];
  FSharedReferencer<1> local_3d0;
  bool local_3c8;
  undefined1 local_3c0 [24];
  TSharedPtr<IBreakIterator,1> local_3a8;
  undefined1 local_398 [104];
  undefined1 local_330 [8];
  ForAnyElementType FStack_328;
  int local_320;
  TDefaultDelete<FSlateTextBlockLayout> local_318 [16];
  FTextBlockStyle local_308;
  
  FTextBlockStyle::operator=(&this->TextStyle,param_1->_TextStyle);
  local_438 = (undefined1  [8])(param_1->_HighlightText).Value.TextData.Reference;
  if (local_438 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_438 + 8))(local_438,&local_res8);
  }
  auStack_430._0_4_ = (param_1->_HighlightText).Value.Flags;
  pFVar24 = (FSlateTextBlockLayout *)0x0;
  auStack_428[0] = (param_1->_HighlightText).bIsSet;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  local_410 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_420,
             &(param_1->_HighlightText).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&this->HighlightText,(SWidget *)this,(TAttribute<FText> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_420,
             (FWriteAccessScope *)local_408);
  if ((local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = 0;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_420);
  if (local_438 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_438 + 0x10))();
  }
  auVar17 = local_438;
  uVar1 = (param_1->_WrapTextAt).Value;
  uVar2 = (param_1->_WrapTextAt).bIsSet;
  local_438[4] = uVar2;
  local_438._0_4_ = uVar1;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  local_438._5_3_ = auVar17._5_3_;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_430,
             &(param_1->_WrapTextAt).Getter);
  local_res8 = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->WrapTextAt,(SWidget *)this,(TAttribute<float> *)local_438,(float *)&local_res8,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar3 = (param_1->_AutoWrapText).Value;
  uVar4 = (param_1->_AutoWrapText).bIsSet;
  local_438[1] = uVar4;
  local_438[0] = uVar3;
  local_438._2_6_ = auVar17._2_6_;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_430,
             &(param_1->_AutoWrapText).Getter);
  local_res8 = (float)((uint)local_res8 & 0xffffff00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->AutoWrapText,(SWidget *)this,(TAttribute<bool> *)local_438,(bool *)&local_res8,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar5 = (param_1->_WrappingPolicy).Value;
  uVar6 = (param_1->_WrappingPolicy).bIsSet;
  local_438[1] = uVar6;
  local_438[0] = uVar5;
  local_438._2_6_ = auVar17._2_6_;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(auStack_430,&(param_1->_WrappingPolicy).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->WrappingPolicy,(SWidget *)this,(TAttribute<ETextWrappingPolicy> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar7 = (param_1->_TransformPolicy).Value;
  uVar8 = (param_1->_TransformPolicy).bIsSet;
  local_438[1] = uVar8;
  local_438[0] = uVar7;
  local_438._2_6_ = auVar17._2_6_;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(auStack_430,&(param_1->_TransformPolicy).Getter);
  (this->field91_0x60c).Union_Flags = (this->field91_0x60c).Union_Flags & 0xfdff;
  (this->field91_0x60c).Union_Flags =
       (this->field91_0x60c).Union_Flags | (ushort)(local_438[1] & 1) << 9;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->TransformPolicy,(SWidget *)this,(TAttribute<ETextTransformPolicy> *)local_438,None
          );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  local_438 = *(undefined1 (*) [8])&(param_1->_Margin).Value;
  auStack_430 = *(undefined1 (*) [8])&(param_1->_Margin).Value.Right;
  auStack_428[0] = (param_1->_Margin).bIsSet;
  local_410 = 0;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_420,
             &(param_1->_Margin).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Margin,(SWidget *)this,(TAttribute<FMargin> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_420,
             (FWriteAccessScope *)local_408);
  if ((local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = 0;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_420);
  auVar17 = local_438;
  uVar9 = (param_1->_LineHeightPercentage).Value;
  uVar10 = (param_1->_LineHeightPercentage).bIsSet;
  local_438[4] = uVar10;
  local_438._0_4_ = uVar9;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  local_438._5_3_ = auVar17._5_3_;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_430,
             &(param_1->_LineHeightPercentage).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->LineHeightPercentage,(SWidget *)this,(TAttribute<float> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar11 = (param_1->_ApplyLineHeightToBottomLine).Value;
  uVar12 = (param_1->_ApplyLineHeightToBottomLine).bIsSet;
  local_438[1] = uVar12;
  local_438[0] = uVar11;
  local_438._2_6_ = auVar17._2_6_;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_430,
             &(param_1->_ApplyLineHeightToBottomLine).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ApplyLineHeightToBottomLine,(SWidget *)this,(TAttribute<bool> *)local_438,None)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar13 = (param_1->_Justification).Value;
  uVar14 = (param_1->_Justification).bIsSet;
  local_438[4] = uVar14;
  local_438._0_4_ = uVar13;
  local_438._5_3_ = auVar17._5_3_;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(auStack_430,&(param_1->_Justification).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->Justification,(SWidget *)this,(TAttribute<ETextJustify::Type> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  auVar17 = local_438;
  uVar15 = (param_1->_MinDesiredWidth).Value;
  uVar16 = (param_1->_MinDesiredWidth).bIsSet;
  local_438[4] = uVar16;
  local_438._0_4_ = uVar15;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])0x0;
  local_438._5_3_ = auVar17._5_3_;
  auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_430,
             &(param_1->_MinDesiredWidth).Getter);
  local_res8 = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredWidth,(SWidget *)this,(TAttribute<float> *)local_438,
           (float *)&local_res8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_430,
             (FWriteAccessScope *)local_408);
  if ((auStack_420._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_428)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_428,0,0,0x10);
    auStack_420 = (undefined1  [8])((ulonglong)auStack_420 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_428 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_430);
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_398,&(param_1->_Font).Value);
  local_398[0x60] = (param_1->_Font).bIsSet;
  local_320 = 0;
  local_330 = (undefined1  [8])0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_330,
             &(param_1->_Font).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(local_398[0x60] & 1) * 2 | (this->field91_0x60c).Union_Flags & 0xfffd;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Font,(SWidget *)this,(TAttribute<FSlateFontInfo> *)local_398,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)local_408);
  if ((local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = 0;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_398._56_8_);
  local_438 = (undefined1  [8])(param_1->_StrikeBrush).Value;
  auStack_430[0] = (param_1->_StrikeBrush).bIsSet;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = FStack_418.Data & 0xffffffff00000000;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_428,
             &(param_1->_StrikeBrush).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(auStack_430[0] & 1) << 2 | (this->field91_0x60c).Union_Flags & 0xfffb;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->StrikeBrush,(SWidget *)this,(TAttribute<FSlateBrush_const_*> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_428,
             (FWriteAccessScope *)local_408);
  if (((int)FStack_418.Data != 0) &&
     ((atomic<unsigned___int64>)auStack_420 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_420)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_420,0,0,0x10);
    FStack_418.Data = FStack_418.Data & 0xffffffff00000000;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_420 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_420);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_428);
  local_438 = *(undefined1 (*) [8])&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  auStack_430 = *(undefined1 (*) [8])
                 ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  auStack_428._0_5_ = *(undefined5 *)&(param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_410 = 0;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_420,
             &(param_1->_ColorAndOpacity).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(auStack_428[4] & 1) << 3 | (this->field91_0x60c).Union_Flags & 0xfff7;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacity,(SWidget *)this,(TAttribute<FSlateColor> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_420,
             (FWriteAccessScope *)local_408);
  if ((local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = 0;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_420);
  local_438 = (undefined1  [8])(param_1->_ShadowOffset).Value.field0_0x0._s_0.X;
  auStack_430 = (undefined1  [8])(param_1->_ShadowOffset).Value.field0_0x0._s_0.Y;
  auStack_428[0] = (param_1->_ShadowOffset).bIsSet;
  local_410 = 0;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             auStack_420,&(param_1->_ShadowOffset).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(auStack_428[0] & 1) << 4 | (this->field91_0x60c).Union_Flags & 0xffef;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShadowOffset,(SWidget *)this,
           (TAttribute<UE::Math::TVector2<double>_> *)local_438,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_420,
             (FWriteAccessScope *)local_408);
  if ((local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = 0;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_420);
  local_408._0_8_ = *(undefined8 *)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0;
  local_408._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0 + 8);
  local_3f8 = CONCAT71(local_3f8._1_7_,(param_1->_ShadowColorAndOpacity).bIsSet);
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f0,
             &(param_1->_ShadowColorAndOpacity).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(local_3f8._0_1_ & 1) << 5 | (this->field91_0x60c).Union_Flags & 0xffdf;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShadowColorAndOpacity,(SWidget *)this,(TAttribute<FLinearColor> *)local_408,
           None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if ((void *)local_3f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  local_408._0_8_ = *(undefined8 *)&(param_1->_HighlightColor).Value.field0_0x0;
  local_408._8_8_ = *(undefined8 *)((longlong)&(param_1->_HighlightColor).Value.field0_0x0 + 8);
  local_3f8 = CONCAT71(local_3f8._1_7_,(param_1->_HighlightColor).bIsSet);
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f0,
             &(param_1->_HighlightColor).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(local_3f8._0_1_ & 1) << 6 | (this->field91_0x60c).Union_Flags & 0xffbf;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HighlightColor,(SWidget *)this,(TAttribute<FLinearColor> *)local_408,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if ((void *)local_3f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  local_438 = (undefined1  [8])(param_1->_HighlightShape).Value;
  auStack_430[0] = (param_1->_HighlightShape).bIsSet;
  auStack_428 = (undefined1  [8])0x0;
  auStack_420 = (undefined1  [8])0x0;
  FStack_418.Data = FStack_418.Data & 0xffffffff00000000;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_428,
             &(param_1->_HighlightShape).Getter);
  (this->field91_0x60c).Union_Flags =
       (ushort)(auStack_430[0] & 1) << 7 | (this->field91_0x60c).Union_Flags & 0xff7f;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HighlightShape,(SWidget *)this,(TAttribute<FSlateBrush_const_*> *)local_438,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_428,
             (FWriteAccessScope *)local_408);
  if (((int)FStack_418.Data != 0) &&
     ((atomic<unsigned___int64>)auStack_420 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_420)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_420,0,0,0x10);
    FStack_418.Data = FStack_418.Data & 0xffffffff00000000;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_420 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_420);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_428);
  this->bSimpleTextMode = param_1->_SimpleTextMode;
  bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDoubleClicked);
  if (bVar18) {
    local_408._0_8_ = 0;
    local_408._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
    local_3f8 = local_3f8 & 0xffffffff00000000;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_408,&param_1->_OnDoubleClicked);
    SWidget::SetOnMouseDoubleClick
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_408);
  }
  pTVar20 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_408,&param_1->_Text);
  SetText(this,pTVar20);
  pTVar21 = FPlainTextLayoutMarshaller::Create
                      ((TSharedRef<FPlainTextLayoutMarshaller,1> *)local_438);
  local_3f8 = 0;
  local_408._0_8_ = 0;
  local_408._8_8_ = (atomic<unsigned___int64> *)0x0;
  pFVar22 = FTextBlockStyle::GetDefault();
  pFVar23 = ::operator_new(0x70);
  if (pFVar23 != (FSlateTextBlockLayout *)0x0) {
    local_3a8.Object = (param_1->_LineBreakPolicy).Object;
    local_3a8.SharedReferenceCount.ReferenceController =
         (param_1->_LineBreakPolicy).SharedReferenceCount.ReferenceController;
    if (local_3a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3d8 = (undefined1  [8])pTVar21->Object;
    local_3d0.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
    if (local_3d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = (param_1->_TextFlowDirection).bIsSet;
    local_res8._0_2_ = CONCAT11(bVar18,local_res8._0_1_);
    if (bVar18 != false) {
      local_res8 = (float)CONCAT31(local_res8._1_3_,(param_1->_TextFlowDirection).TypedValue);
    }
    local_res11 = (param_1->_TextShapingMethod).bIsSet;
    if ((bool)local_res11 != false) {
      local_res10 = (param_1->_TextShapingMethod).TypedValue;
    }
    pFVar22 = FTextBlockStyle::FTextBlockStyle(&local_308,pFVar22);
    pFVar24 = FSlateTextBlockLayout::FSlateTextBlockLayout
                        (pFVar23,(SWidget *)this,pFVar22,SUB82(&local_res10,0),SUB82(&local_res8,0),
                         (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
                          *)local_408,(TSharedRef<ITextLayoutMarshaller,1> *)local_3d8,&local_3a8);
  }
  this_00 = &this->TextLayoutCache;
  if ((TDefaultDelete<FSlateTextBlockLayout> *)this_00 == local_318) {
    if (pFVar24 != (FSlateTextBlockLayout *)0x0) {
      FTextSnapshot::~FTextSnapshot(&pFVar24->HighlightTextLastUpdate);
      FTextSnapshot::~FTextSnapshot(&pFVar24->TextLastUpdate);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar24->TextHighlighter).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar24->Marshaller).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar24->TextLayout).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar24,0x70);
    }
  }
  else {
    pFVar23 = this_00->Ptr;
    this_00->Ptr = pFVar24;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_00,pFVar23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
             (FWriteAccessScope *)local_3d8);
  if (((int)local_3f8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_408._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_408._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_408 + 8),0,0,0x10);
    local_3f8 = local_3f8 & 0xffffffff00000000;
  }
  if (local_3c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3d0.ReferenceController,
               (FDestructionSentinel *)local_3d8);
  }
  if ((FMRSWRecursiveAccessDetector *)local_408._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_408._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_430);
  pFVar24 = this_00->Ptr;
  local_438 = (undefined1  [8])0x0;
  auStack_430 = (undefined1  [8])0x0;
  auStack_428 = (undefined1  [8])((ulonglong)auStack_428 & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)local_408);
  local_3f0._0_8_ = auStack_430;
  puVar25 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_430);
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar26;
    *puVar25 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::`6'::<lambda_1>_>
                ::_vftable_;
    puVar25[3] = this;
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  local_3d8 = (undefined1  [8])0x0;
  local_3d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3c8 = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  FSlateTextBlockLayout::SetDebugSourceInfo(pFVar24,(TAttribute<FString> *)local_3d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  if ((void *)local_3c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  if (local_3d8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_3d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)local_408);
  if ((auStack_428._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_430 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_430)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_430,0,0,0x10);
    auStack_428 = (undefined1  [8])((ulonglong)auStack_428 & 0xffffffff00000000);
  }
  if (local_3f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_408._8_8_,(FDestructionSentinel *)local_408);
  }
  if ((atomic<unsigned___int64>)auStack_430 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_430);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_438);
  bVar18 = (param_1->_OverflowPolicy).bIsSet;
  if (bVar18 == false) {
    EVar19 = (this->TextStyle).OverflowPolicy;
    local_res8 = (float)CONCAT22(local_res8._2_2_,0x100);
  }
  else {
    EVar19 = (param_1->_OverflowPolicy).TypedValue;
    local_res8 = (float)((uint)CONCAT21(local_res8._2_2_,bVar18) << 8);
  }
  local_res8 = (float)CONCAT31(local_res8._1_3_,EVar19);
  FSlateTextBlockLayout::SetTextOverflowPolicy(this_00->Ptr,SUB82(&local_res8,0));
  return;
}

// CreateAccessibleWidget @ 1429dea50

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STextBlock::CreateAccessibleWidget
          (STextBlock *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  TRawPtrProxy<FSlateAccessibleWidget> TVar7;
  bool bVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar8 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x68);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar7.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar7.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar7.Object;
    if (TVar7.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Text);
      this_00->_padding_ = (longlong)&___7FSlateAccessibleTextBlock__6B_;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar7.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar7.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar7.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar7.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar7.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar7.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Text);
      this_00->_padding_ = (longlong)&___7FSlateAccessibleTextBlock__6B_;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar7.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar7.Object)->_padding_ + 8))(TVar7.Object,1);
      }
    }
    bVar8 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar7.Object);
  }
  return __return_storage_ptr__;
}

// GetColorAndOpacity @ 1429ea890

FSlateColor * __thiscall
STextBlock::GetColorAndOpacity(STextBlock *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = 0x578;
  if ((*(byte *)&this->field91_0x60c & 8) == 0) {
    lVar4 = 0x298;
  }
  puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar4);
  uVar3 = puVar1[1];
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + lVar4);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
  __return_storage_ptr__->ColorUseRule = (char)uVar2;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar2 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar2 >> 0x10);
  return __return_storage_ptr__;
}

// GetColorAndOpacityRef @ 1429ea8c0

FSlateColor * __thiscall STextBlock::GetColorAndOpacityRef(STextBlock *this)

{
  longlong lVar1;
  
  lVar1 = 0x578;
  if ((*(byte *)&this->field91_0x60c & 8) == 0) {
    lVar1 = 0x298;
  }
  return (FSlateColor *)((longlong)&this->_padding_ + lVar1);
}

// GetComputedTextStyle @ 1429ea8f0

FTextBlockStyle * __thiscall
STextBlock::GetComputedTextStyle(STextBlock *this,FTextBlockStyle *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  FSlateFontInfo *pFVar5;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  uint local_18;
  
  FTextBlockStyle::FTextBlockStyle(__return_storage_ptr__,&this->TextStyle);
  pFVar5 = (FSlateFontInfo *)&this->Font;
  if ((*(byte *)&this->field91_0x60c & 2) == 0) {
    pFVar5 = &(this->TextStyle).Font;
  }
  FSlateFontInfo::operator=(&__return_storage_ptr__->Font,pFVar5);
  if ((*(byte *)&this->field91_0x60c & 4) == 0) {
    TVar6 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )&(this->TextStyle).StrikeBrush;
  }
  else {
    TVar6 = this->StrikeBrush;
  }
  if (TVar6 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x0) {
    FSlateBrush::operator=(&__return_storage_ptr__->StrikeBrush,(FSlateBrush *)TVar6);
  }
  lVar4 = 0x578;
  if ((*(byte *)&this->field91_0x60c & 8) == 0) {
    lVar4 = 0x298;
  }
  puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar4);
  uVar3 = puVar1[1];
  *(undefined8 *)&(__return_storage_ptr__->ColorAndOpacity).SpecifiedColor.field0_0x0 = *puVar1;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar3;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + lVar4);
  (__return_storage_ptr__->ColorAndOpacity).ColorUseRule = (char)uVar2;
  (__return_storage_ptr__->ColorAndOpacity).ColorTableId = (char)((uint)uVar2 >> 8);
  *(short *)&(__return_storage_ptr__->ColorAndOpacity).field_0x12 = (short)((uint)uVar2 >> 0x10);
  if ((*(byte *)&this->field91_0x60c & 0x10) == 0) {
    local_res8 = (this->TextStyle).ShadowOffset;
  }
  else {
    local_res8._4_4_ = (float)*(double *)&(this->ShadowOffset).field_0x8;
    local_res8._0_4_ = (float)*(double *)&this->ShadowOffset;
  }
  *(undefined4 *)&__return_storage_ptr__->ShadowOffset = (undefined4)local_res8;
  *(undefined4 *)&(__return_storage_ptr__->ShadowOffset).field_0x4 = local_res8._4_4_;
  lVar4 = 0x5a0;
  if ((*(byte *)&this->field91_0x60c & 0x20) == 0) {
    lVar4 = 0x2b4;
  }
  puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar4);
  uVar3 = puVar1[1];
  *(undefined8 *)&(__return_storage_ptr__->ShadowColorAndOpacity).field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ShadowColorAndOpacity).field0_0x0 + 8) = uVar3
  ;
  if ((*(byte *)&this->field91_0x60c & 0x40) == 0) {
    fVar7 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.R;
    fVar8 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.G;
    fVar9 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.B;
    fVar10 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.A;
    local_18._0_1_ = (this->TextStyle).HighlightColor.ColorUseRule;
    local_18._1_1_ = (this->TextStyle).HighlightColor.ColorTableId;
    local_18._2_2_ = *(undefined2 *)&(this->TextStyle).HighlightColor.field_0x12;
  }
  else {
    fVar7 = *(float *)&this->HighlightColor;
    fVar8 = *(float *)&(this->HighlightColor).field_0x4;
    fVar9 = *(float *)&(this->HighlightColor).field_0x8;
    fVar10 = *(float *)&(this->HighlightColor).field_0xc;
    local_18 = local_18 & 0xffffff00;
  }
  (__return_storage_ptr__->HighlightColor).SpecifiedColor.field0_0x0._s_0.R = fVar7;
  (__return_storage_ptr__->HighlightColor).SpecifiedColor.field0_0x0._s_0.G = fVar8;
  (__return_storage_ptr__->HighlightColor).SpecifiedColor.field0_0x0._s_0.B = fVar9;
  (__return_storage_ptr__->HighlightColor).SpecifiedColor.field0_0x0._s_0.A = fVar10;
  (__return_storage_ptr__->HighlightColor).ColorUseRule = (char)local_18;
  (__return_storage_ptr__->HighlightColor).ColorTableId = (char)(local_18 >> 8);
  *(short *)&(__return_storage_ptr__->HighlightColor).field_0x12 = (short)(local_18 >> 0x10);
  if ((*(byte *)&this->field91_0x60c & 0x80) == 0) {
    TVar6 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )&(this->TextStyle).HighlightShape;
  }
  else {
    TVar6 = this->HighlightShape;
  }
  if (TVar6 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x0) {
    FSlateBrush::operator=(&__return_storage_ptr__->HighlightShape,(FSlateBrush *)TVar6);
  }
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 1429eb100

TOptional<FText> * __thiscall
STextBlock::GetDefaultAccessibleText
          (STextBlock *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FText> *pTVar4;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  pIVar1 = *(ITextData **)&this->BoundText;
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8,CONCAT71(in_register_00000081,param_1));
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = *(uint *)&(this->BoundText).field_0x8;
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetFont @ 1429eb790

FSlateFontInfo * __thiscall
STextBlock::GetFont(STextBlock *this,FSlateFontInfo *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = 0x510;
  if ((*(byte *)&this->field91_0x60c & 2) == 0) {
    lVar1 = 0x238;
  }
  FSlateFontInfo::FSlateFontInfo
            (__return_storage_ptr__,(FSlateFontInfo *)((longlong)&this->_padding_ + lVar1));
  return __return_storage_ptr__;
}

// GetFontRef @ 1429eb7d0

FSlateFontInfo * __thiscall STextBlock::GetFontRef(STextBlock *this)

{
  longlong lVar1;
  
  lVar1 = 0x510;
  if ((*(byte *)&this->field91_0x60c & 2) == 0) {
    lVar1 = 0x238;
  }
  return (FSlateFontInfo *)((longlong)&this->_padding_ + lVar1);
}

// GetHighlightColor @ 1429eb9b0

FSlateColor * __thiscall
STextBlock::GetHighlightColor(STextBlock *this,FSlateColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint local_18;
  
  if ((*(byte *)&this->field91_0x60c & 0x40) == 0) {
    local_18._0_1_ = (this->TextStyle).HighlightColor.ColorUseRule;
    local_18._1_1_ = (this->TextStyle).HighlightColor.ColorTableId;
    local_18._2_2_ = *(undefined2 *)&(this->TextStyle).HighlightColor.field_0x12;
    fVar1 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.R;
    fVar2 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.G;
    fVar3 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.B;
    fVar4 = (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.A;
  }
  else {
    fVar1 = *(float *)&this->HighlightColor;
    fVar2 = *(float *)&(this->HighlightColor).field_0x4;
    fVar3 = *(float *)&(this->HighlightColor).field_0x8;
    fVar4 = *(float *)&(this->HighlightColor).field_0xc;
    local_18 = local_18 & 0xffffff00;
  }
  *(ulonglong *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = CONCAT44(fVar2,fVar1);
  *(ulonglong *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
       CONCAT44(fVar4,fVar3);
  __return_storage_ptr__->ColorUseRule = (undefined1)local_18;
  __return_storage_ptr__->ColorTableId = local_18._1_1_;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = local_18._2_2_;
  return __return_storage_ptr__;
}

// GetHighlightShape @ 1429eba00

FSlateBrush * __thiscall STextBlock::GetHighlightShape(STextBlock *this)

{
  if ((*(byte *)&this->field91_0x60c & 0x80) != 0) {
    return (FSlateBrush *)this->HighlightShape;
  }
  return &(this->TextStyle).HighlightShape;
}

// GetMargin @ 1429ebd40

FMargin * __thiscall STextBlock::GetMargin(STextBlock *this,FMargin *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)&(this->Margin).field_0x4;
  uVar2 = *(undefined4 *)&(this->Margin).field_0x8;
  uVar3 = *(undefined4 *)&(this->Margin).field_0xc;
  __return_storage_ptr__->Left = (float)*(undefined4 *)&(this->Margin).field_0x0;
  __return_storage_ptr__->Top = (float)uVar1;
  __return_storage_ptr__->Right = (float)uVar2;
  __return_storage_ptr__->Bottom = (float)uVar3;
  return __return_storage_ptr__;
}

// GetMinDesiredWidth @ 1429ebf50

float __thiscall STextBlock::GetMinDesiredWidth(STextBlock *this)

{
  return (float)this->MinDesiredWidth;
}

// GetPrivateWidgetClass @ 1429ed260

FSlateWidgetClassData * __cdecl STextBlock::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"STextBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`STextBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetShadowColorAndOpacity @ 1429ee790

FLinearColor * __thiscall
STextBlock::GetShadowColorAndOpacity(STextBlock *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0x5a0;
  if ((*(byte *)&this->field91_0x60c & 0x20) == 0) {
    lVar3 = 0x2b4;
  }
  puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar3);
  uVar2 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// GetShadowColorAndOpacityRef @ 1429ee7c0

FLinearColor * __thiscall STextBlock::GetShadowColorAndOpacityRef(STextBlock *this)

{
  longlong lVar1;
  
  lVar1 = 0x5a0;
  if ((*(byte *)&this->field91_0x60c & 0x20) == 0) {
    lVar1 = 0x2b4;
  }
  return (FLinearColor *)((longlong)&this->_padding_ + lVar1);
}

// GetShadowOffset @ 1429ee7e0

TVector2<float> __thiscall STextBlock::GetShadowOffset(STextBlock *this)

{
  TVector2<float>_u_0 in_RDX;
  
  if ((*(byte *)&this->field91_0x60c & 0x10) != 0) {
    *(ulonglong *)in_RDX =
         CONCAT44((float)*(double *)&(this->ShadowOffset).field_0x8,
                  (float)*(double *)&this->ShadowOffset);
    return (TVector2<float>)in_RDX;
  }
  *(FDeprecateSlateVector2D *)in_RDX = (this->TextStyle).ShadowOffset;
  return (TVector2<float>)in_RDX;
}

// GetStrikeBrush @ 1429eebd0

FSlateBrush * __thiscall STextBlock::GetStrikeBrush(STextBlock *this)

{
  if ((*(byte *)&this->field91_0x60c & 4) != 0) {
    return (FSlateBrush *)this->StrikeBrush;
  }
  return &(this->TextStyle).StrikeBrush;
}

// GetTransformPolicyImpl @ 1429ef720

ETextTransformPolicy __thiscall STextBlock::GetTransformPolicyImpl(STextBlock *this)

{
  if (((this->field91_0x60c).Union_Flags & 0x200) != 0) {
    return (ETextTransformPolicy)this->TransformPolicy;
  }
  return (this->TextStyle).TransformPolicy;
}

// GetWidgetClass @ 1429efeb0

FSlateWidgetClassData * __thiscall STextBlock::GetWidgetClass(STextBlock *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"STextBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`STextBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// InvalidateText @ 1429f4ed0

void __thiscall STextBlock::InvalidateText(STextBlock *this,EInvalidateWidgetReason param_1)

{
  if (((this->bSimpleTextMode != false) && ((param_1 & Layout) != None)) &&
     ((this->CachedSimpleDesiredSize).bIsSet != false)) {
    (this->CachedSimpleDesiredSize).bIsSet = false;
  }
  SWidget::Invalidate((SWidget *)this,param_1);
  return;
}

// OnPaint @ 1429ffd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STextBlock::OnPaint(STextBlock *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                   FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 uVar5;
  FSlateTextBlockLayout *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_Stat_SlateTextBlockOnPaint> FVar18;
  FString *pFVar19;
  FSlateColor *pFVar20;
  FLinearColor_u_0 *pFVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar22;
  FLinearColor *pFVar23;
  FSlateFontInfo *pFVar24;
  FName FVar25;
  undefined1 auStackY_2a8 [32];
  ESlateDrawEffect local_248;
  FName local_240;
  FColor_u_0 local_238;
  float fStack_234;
  FName local_230;
  LARGE_INTEGER local_228;
  FSlateWindowElementList *local_220;
  FSlateRect *local_218;
  FName local_210;
  FLinearColor_u_0 local_200;
  FLinearColor_u_0 local_1f0;
  undefined8 local_1dc;
  FStatMessage local_1d0;
  FLinearColor_u_0 local_1c0;
  uint local_1b0;
  TVector2<double>_u_0 local_1a8;
  TVector2<double>_u_0 local_198;
  FName local_188;
  TTransform2<float> local_180;
  TTransform2<float> local_168;
  FSlateFontInfo local_148;
  TVector2<float>_u_0 local_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  float local_cc [2];
  float afStack_c4 [2];
  TVector2<float>_u_0 local_bc;
  byte local_b4;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_220 = param_4;
  FVar18 = StatPtr_Stat_SlateTextBlockOnPaint;
  local_228 = (LARGE_INTEGER)param_2;
  local_218 = param_3;
  if (StatPtr_Stat_SlateTextBlockOnPaint ==
      (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockOnPaint>)0x0) {
    pFVar17 = ::FName::FName(&local_188,"Stat_SlateTextBlockOnPaint");
    FVar18 = (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockOnPaint>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_SlateTextBlockOnPaint,*pFVar17,
                        L"STextBlock::OnPaint Time","STATGROUP_SlateVerbose","STATCAT_Advanced",
                        L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar11 = false;
  bVar13 = false;
  FVar25 = *(FName *)FVar18;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230 = FVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\STextBlock.cpp"
                   ,0xff);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar12 = true;
      goto LAB_1429ffe99;
    }
  }
  bVar12 = false;
  FVar25 = local_210;
LAB_1429ffe99:
  if (this->bSimpleTextMode == false) {
    pFVar6 = (this->TextLayoutCache).Ptr;
    if (((pFVar6->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      iVar16 = (*pcVar7)();
      return iVar16;
    }
    FTextLayout::GetSize
              ((FTextLayout *)(pFVar6->TextLayout).Object,(TVector2<double> *)&local_198._s_0);
    pFVar6 = (this->TextLayoutCache).Ptr;
    if (((pFVar6->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      iVar16 = (*pcVar7)();
      return iVar16;
    }
    UpdateTextBlockLayout(this,*(float *)&((pFVar6->TextLayout).Object)->field_0x94);
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    param_5 = FSlateTextBlockLayout::OnPaint
                        ((this->TextLayoutCache).Ptr,param_1,param_2,local_218,local_220,param_5,
                         param_6,bVar14);
    if ((0.0 < (float)this->WrapTextAt) ||
       (this->AutoWrapText !=
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    pFVar6 = (this->TextLayoutCache).Ptr;
    if (((pFVar6->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      iVar16 = (*pcVar7)();
      return iVar16;
    }
    FTextLayout::GetSize
              ((FTextLayout *)(pFVar6->TextLayout).Object,(TVector2<double> *)&local_1a8._s_0);
    if ((bVar14) &&
       ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)(local_1a8._s_0.X - local_198._s_0.X) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_1a8._s_0.X - local_198._s_0.X,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)(local_1a8._s_0.Y - local_198._s_0.Y) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_1a8._s_0.Y - local_198._s_0.Y,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
      SWidget::Invalidate((SWidget *)this,Layout);
    }
  }
  else {
    uVar4 = (this->field91_0x60c).Union_Flags;
    pFVar23 = (FLinearColor *)&this->ShadowColorAndOpacity;
    if ((uVar4 & 0x20) == 0) {
      pFVar23 = &(this->TextStyle).ShadowColorAndOpacity;
    }
    fVar2 = (pFVar23->field0_0x0)._s_0.R;
    fVar8 = (pFVar23->field0_0x0)._s_0.G;
    fVar9 = (pFVar23->field0_0x0)._s_0.B;
    fVar10 = (pFVar23->field0_0x0)._s_0.A;
    if ((uVar4 & 0x10) == 0) {
      local_240 = *(FName *)&(this->TextStyle).ShadowOffset;
    }
    else {
      local_240.Number = (uint)(float)*(double *)&(this->ShadowOffset).field_0x8;
      local_240.ComparisonIndex.Value = (uint)(float)*(double *)&this->ShadowOffset;
    }
    if ((fVar10 <= 0.0) ||
       ((float)local_240.Number * (float)local_240.Number +
        (float)local_240.ComparisonIndex.Value * (float)local_240.ComparisonIndex.Value <= 0.0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((!param_7) || (local_248 = None, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
      local_248 = DisabledEffect;
    }
    local_218 = (FSlateRect *)&this->BoundText;
    pFVar24 = (FSlateFontInfo *)&this->Font;
    if ((uVar4 & 2) == 0) {
      pFVar24 = &(this->TextStyle).Font;
    }
    local_230 = local_240;
    FSlateFontInfo::FSlateFontInfo(&local_148,pFVar24);
    iVar16 = local_148.OutlineSettings.OutlineSize;
    if (bVar14) {
      local_200._s_0.A = fVar10 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_200._s_0.R = fVar2 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      bVar3 = *(byte *)(local_228.QuadPart + 0x34);
      if (local_148.OutlineSettings.bApplyOutlineToDropShadows == false) {
        local_148.OutlineSettings.OutlineSize = 0;
      }
      local_200._s_0.G = fVar8 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      uVar5 = *(undefined8 *)local_228;
      local_1dc = (TVector2<float>_u_0)
                  *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(local_228.QuadPart + 0xc))->_s_0
      ;
      fVar2 = *(float *)(local_228.QuadPart + 8);
      local_180.Trans.field0_0x0 = (TVector2<float>_u_0)local_230;
      local_238 = (FColor_u_0)(fVar2 * (float)local_240.ComparisonIndex.Value + (float)local_1dc);
      local_200._s_0.B = fVar9 * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      fStack_234 = fVar2 * (float)local_240.Number + local_1dc._4_4_;
      local_180.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_180.M.M[0][1] = _UNK_15076b184;
      local_180.M.M[1][0] = _UNK_15076b188;
      local_180.M.M[1][1] = _UNK_15076b18c;
      Concatenate<TTransform2<float>_>
                (&local_168,&local_180,(TTransform2<float> *)(local_228.QuadPart + 0x1c));
      local_e8._s_0.Y = fStack_234;
      local_e8._s_0.X = (float)local_238.Bits;
      local_b4 = (bVar3 & 1) * '\x02' | local_b4 & 0xfc;
      local_dc = 0;
      local_cc[0] = local_168.M.M[0][0];
      local_cc[1] = local_168.M.M[0][1];
      afStack_c4[0] = local_168.M.M[1][0];
      afStack_c4[1] = local_168.M.M[1][1];
      local_bc = local_168.Trans.field0_0x0;
      local_e0 = fVar2;
      local_d4 = uVar5;
      pFVar19 = FText::ToString((FText *)&this->BoundText);
      FSlateDrawElement::MakeText
                (local_220,param_5,(FPaintGeometry *)&local_e8._s_0,pFVar19,&local_148,local_248,
                 (FLinearColor *)&local_200._s_0);
      local_148.OutlineSettings.OutlineSize = iVar16;
      param_5 = param_5 + 1;
      param_2 = (FGeometry *)local_228;
    }
    pFVar20 = (FSlateColor *)&this->ColorAndOpacity;
    if ((*(byte *)&this->field91_0x60c & 8) == 0) {
      pFVar20 = &(this->TextStyle).ColorAndOpacity;
    }
    local_1b0._0_1_ = pFVar20->ColorUseRule;
    local_1b0._1_1_ = pFVar20->ColorTableId;
    local_1b0._2_2_ = *(undefined2 *)&pFVar20->field_0x12;
    uVar22 = local_1b0 & 0xff;
    local_1c0._0_8_ = *(undefined8 *)&(pFVar20->SpecifiedColor).field0_0x0;
    local_1c0._8_8_ = *(undefined8 *)((longlong)&(pFVar20->SpecifiedColor).field0_0x0 + 8);
    if ((undefined1)local_1b0 == '\0') {
      pFVar21 = &local_1c0;
    }
    else if (uVar22 == 1) {
      pFVar21 = &FSlateColor::GetColorFromTable((FSlateColor *)&local_1c0._s_0)->field0_0x0;
    }
    else if ((uVar22 == 2) || (uVar22 != 3)) {
      pFVar21 = &(param_6->ForegroundColor).field0_0x0;
    }
    else {
      pFVar21 = &(param_6->SubduedForeground).field0_0x0;
    }
    local_1f0._s_0.R =
         (((FLinearColor_u_0 *)&(pFVar21->_s_0).R)->_s_0).R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_1f0._s_0.G = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G * (pFVar21->_s_0).G;
    local_1f0._s_0.A = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A * (pFVar21->_s_0).A;
    local_1f0._s_0.B = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B * (pFVar21->_s_0).B;
    local_b0 = *(TVector2<float>_u_0 *)((longlong)param_2 + 0xc);
    local_9c = param_2->Size;
    local_a8 = *(float *)((longlong)param_2 + 8);
    local_7c = (*(byte *)((longlong)param_2 + 0x34) & 1) * '\x02' | local_7c & 0xfc;
    local_94 = (((TTransform2<float> *)((longlong)param_2 + 0x1c))->M).M[0];
    afStack_8c = *(float (*) [2])((longlong)param_2 + 0x24);
    local_84 = *(TVector2<float>_u_0 *)((longlong)param_2 + 0x2c);
    local_a4 = 0;
    pFVar19 = FText::ToString((FText *)local_218);
    FSlateDrawElement::MakeText
              (local_220,param_5,(FPaintGeometry *)&local_b0._s_0,pFVar19,&local_148,local_248,
               (FLinearColor *)&local_1f0._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1d0.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_1d0.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_228);
      local_1d0.StatData.Pad = (uchar  [8])(local_228.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_1d0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return param_5;
}

// PrivateRegisterAttributes @ 142a02e80

void __cdecl STextBlock::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar5;
  FName local_res10;
  FDelegateAllocation local_68;
  FAttributeEntry local_58;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong uStack_38;
  
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,9,L"BoundText",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a02f78:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a02f78;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,4,L"Font",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x510,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03047:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03047;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xb,L"StrikeBrush",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x570,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a0310f:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a0310f;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"ColorAndOpacity",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x578,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a031d7:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a031d7;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xc,L"ShadowOffset",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x590,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a0329f:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a0329f;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x15,L"ShadowColorAndOpacity",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5a0,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03367:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03367;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"HighlightColor",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5b0,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a0342f:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a0342f;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"HighlightShape",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5c0,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateTextStyle;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a034f7:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a034f7;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"HighlightText",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5c8,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a035cf:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a035cf;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,10,L"WrapTextAt",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5d8,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03697:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03697;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xc,L"AutoWrapText",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5dc,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a0375f:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a0375f;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"WrappingPolicy",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5dd,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03827:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03827;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"TransformPolicy",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5de,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a038ef:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a038ef;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,6,L"Margin",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5e0,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a039b7:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a039b7;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"Justification",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5f0,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03a7f:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03a7f;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x14,L"LineHeightPercentage",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5f4,(FInvalidateWidgetReasonAttribute *)local_48);
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::UpdateDesiredSize;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_68);
  if ((int)uStack_38 == 0) {
LAB_142a03b47:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142a03b47;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x1b,L"ApplyLineHeightToBottomLine",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_58,*pFVar1,0x5f8,(FInvalidateWidgetReasonAttribute *)local_48);
  pTVar5 = TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
           CreateStatic<>((TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                           *)&local_68,
                          `STextBlock::PrivateRegisterAttributes'::__l2::FInvalidation::
                          UpdateDesiredSize);
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged(pFVar2,pTVar5);
  if ((int)uStack_38 != 0) {
    if (local_40.Data == (FScriptContainerElement *)0x0) goto LAB_142a03bf3;
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
LAB_142a03bf3:
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"MinDesiredWidth",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_58,*pFVar1,0x5fc,(FInvalidateWidgetReasonAttribute *)local_48);
  if ((int)uStack_38 != 0) {
    if (local_40.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// SetApplyLineHeightToBottomLine @ 142a07450

void __thiscall
STextBlock::SetApplyLineHeightToBottomLine(STextBlock *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ApplyLineHeightToBottomLine,(SWidget *)this,param_1,None);
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

// SetAutoWrapText @ 142a07610

void __thiscall STextBlock::SetAutoWrapText(STextBlock *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  bool local_res8 [32];
  
  local_res8[0] = false;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->AutoWrapText,(SWidget *)this,param_1,local_res8,None);
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

// SetColorAndOpacity @ 142a07850

void __thiscall STextBlock::SetColorAndOpacity(STextBlock *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 3 | (this->field91_0x60c).Union_Flags & 0xfff7;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacity,(SWidget *)this,param_1,None);
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

// SetFont @ 142a09cf0

void __thiscall STextBlock::SetFont(STextBlock *this,TAttribute<FSlateFontInfo> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) * 2 | (this->field91_0x60c).Union_Flags & 0xfffd;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Font,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// SetHighlightColor @ 142a09db0

void __thiscall STextBlock::SetHighlightColor(STextBlock *this,TAttribute<FLinearColor> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 6 | (this->field91_0x60c).Union_Flags & 0xffbf;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HighlightColor,(SWidget *)this,param_1,None);
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

// SetHighlightShape @ 142a09e30

void __thiscall
STextBlock::SetHighlightShape(STextBlock *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 7 | (this->field91_0x60c).Union_Flags & 0xff7f;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->HighlightShape,(SWidget *)this,param_1,None);
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

// SetHighlightText @ 142a0a0d0

void __thiscall STextBlock::SetHighlightText(STextBlock *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&this->HighlightText,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// SetJustification @ 142a0a950

void __thiscall
STextBlock::SetJustification(STextBlock *this,TAttribute<ETextJustify::Type> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->Justification,(SWidget *)this,param_1,None);
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

// SetLineHeightPercentage @ 142a0aa80

void __thiscall STextBlock::SetLineHeightPercentage(STextBlock *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->LineHeightPercentage,(SWidget *)this,param_1,None);
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

// SetMargin @ 142a0ac50

void __thiscall STextBlock::SetMargin(STextBlock *this,TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Margin,(SWidget *)this,param_1,None);
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

// SetMinDesiredWidth @ 142a0aef0

void __thiscall STextBlock::SetMinDesiredWidth(STextBlock *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredWidth,(SWidget *)this,param_1,local_res8,None);
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

// SetOverflowPolicy @ 142a0b440

void __thiscall
STextBlock::SetOverflowPolicy(STextBlock *this,TOptional<ETextOverflowPolicy> param_1)

{
  char cVar1;
  FSlateTextBlockLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined6 in_register_00000012;
  undefined1 uVar5;
  undefined1 local_res8;
  char local_res9;
  
  cVar1 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  pFVar2 = (this->TextLayoutCache).Ptr;
  uVar5 = local_res8;
  if (cVar1 != '\0') {
    uVar5 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar1 != '\0') {
    local_res8 = uVar5;
  }
  local_res9 = cVar1;
  FTextLayout::SetTextOverflowPolicy
            ((FTextLayout *)(pFVar2->TextLayout).Object,SUB82(&local_res8,0));
  if ((this->bSimpleTextMode != false) && ((this->CachedSimpleDesiredSize).bIsSet != false)) {
    (this->CachedSimpleDesiredSize).bIsSet = false;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetShadowColorAndOpacity @ 142a0bc80

void __thiscall
STextBlock::SetShadowColorAndOpacity(STextBlock *this,TAttribute<FLinearColor> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 5 | (this->field91_0x60c).Union_Flags & 0xffdf;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShadowColorAndOpacity,(SWidget *)this,param_1,None);
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

// SetShadowOffset @ 142a0bd00

void __thiscall
STextBlock::SetShadowOffset(STextBlock *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 4 | (this->field91_0x60c).Union_Flags & 0xffef;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShadowOffset,(SWidget *)this,param_1,None);
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

// SetStrikeBrush @ 142a0be30

void __thiscall
STextBlock::SetStrikeBrush(STextBlock *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 2 | (this->field91_0x60c).Union_Flags & 0xfffb;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->StrikeBrush,(SWidget *)this,param_1,None);
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

// SetText @ 142a0cab0

void __thiscall STextBlock::SetText(STextBlock *this,TAttribute<FText> *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  ITextData *pIVar3;
  char cVar4;
  ushort uVar5;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  (this->field91_0x60c).Union_Flags = (this->field91_0x60c).Union_Flags & 0xfffe;
  (this->field91_0x60c).Union_Flags = (this->field91_0x60c).Union_Flags | uVar5;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)&this->BoundText,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar3 = (param_1->Value).TextData.Reference;
  if (pIVar3 == (ITextData *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0cb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x10))();
  return;
}

// SetTextFlowDirection @ 142a0ce70

void __thiscall
STextBlock::SetTextFlowDirection(STextBlock *this,TOptional<ETextFlowDirection> *param_1)

{
  if (this->bSimpleTextMode == false) {
    FSlateTextBlockLayout::SetTextFlowDirection((this->TextLayoutCache).Ptr,param_1);
    if ((this->bSimpleTextMode != false) && ((this->CachedSimpleDesiredSize).bIsSet != false)) {
      (this->CachedSimpleDesiredSize).bIsSet = false;
    }
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetTextShapingMethod @ 142a0d490

void __thiscall
STextBlock::SetTextShapingMethod(STextBlock *this,TOptional<ETextShapingMethod> *param_1)

{
  if (this->bSimpleTextMode == false) {
    FSlateTextBlockLayout::SetTextShapingMethod((this->TextLayoutCache).Ptr,param_1);
    if ((this->bSimpleTextMode != false) && ((this->CachedSimpleDesiredSize).bIsSet != false)) {
      (this->CachedSimpleDesiredSize).bIsSet = false;
    }
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetTextStyle @ 142a0d680

void __thiscall STextBlock::SetTextStyle(STextBlock *this,FTextBlockStyle *param_1)

{
  FArguments local_568;
  
  if (param_1 == (FTextBlockStyle *)0x0) {
    FArguments::FArguments(&local_568);
    FTextBlockStyle::operator=(&this->TextStyle,local_568._TextStyle);
    FArguments::~FArguments(&local_568);
  }
  else {
    FTextBlockStyle::operator=(&this->TextStyle,param_1);
  }
  if ((this->bSimpleTextMode != false) && ((this->CachedSimpleDesiredSize).bIsSet != false)) {
    (this->CachedSimpleDesiredSize).bIsSet = false;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetTransformPolicy @ 142a0d7f0

void __thiscall
STextBlock::SetTransformPolicy(STextBlock *this,TAttribute<ETextTransformPolicy> *param_1)

{
  void *pvVar1;
  
  (this->field91_0x60c).Union_Flags =
       (ushort)(param_1->bIsSet & 1) << 9 | (this->field91_0x60c).Union_Flags & 0xfdff;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->TransformPolicy,(SWidget *)this,param_1,None);
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

// SetWrapTextAt @ 142a0dd40

void __thiscall STextBlock::SetWrapTextAt(STextBlock *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->WrapTextAt,(SWidget *)this,param_1,local_res8,None);
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

// SetWrappingPolicy @ 142a0de90

void __thiscall
STextBlock::SetWrappingPolicy(STextBlock *this,TAttribute<ETextWrappingPolicy> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->WrappingPolicy,(SWidget *)this,param_1,None);
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

// UpdateTextBlockLayout @ 142a14120

void __thiscall STextBlock::UpdateTextBlockLayout(STextBlock *this,float param_1)

{
  undefined8 *puVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  TSlateAttribute<ETextWrappingPolicy,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  ETextTransformPolicy EVar6;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar7;
  ushort uVar8;
  TSlateAttribute<ETextJustify::Type,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar9;
  FSlateTextBlockLayout *this_00;
  longlong lVar10;
  FSlateFontInfo *pFVar11;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar12;
  STextBlock_u_1548 *pSVar13;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  FWidgetDesiredSizeArgs local_3b8;
  TVector2<double> local_368;
  uint local_358;
  FTextBlockStyle local_348;
  
  pSVar13 = &this->field91_0x60c;
  if ((pSVar13->Union_Flags & 0x400) != 0) {
    this_00 = (this->TextLayoutCache).Ptr;
    FTextBlockStyle::FTextBlockStyle(&local_348,&this->TextStyle);
    pFVar11 = (FSlateFontInfo *)&this->Font;
    if ((*(byte *)pSVar13 & 2) == 0) {
      pFVar11 = &(this->TextStyle).Font;
    }
    FSlateFontInfo::operator=(&local_348.Font,pFVar11);
    if ((*(byte *)pSVar13 & 4) == 0) {
      TVar12 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )&(this->TextStyle).StrikeBrush;
    }
    else {
      TVar12 = this->StrikeBrush;
    }
    if (TVar12 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) {
      FSlateBrush::operator=(&local_348.StrikeBrush,(FSlateBrush *)TVar12);
    }
    uVar8 = pSVar13->Union_Flags;
    lVar10 = 0x578;
    if ((uVar8 & 8) == 0) {
      lVar10 = 0x298;
    }
    puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar10);
    local_348.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ = *puVar1;
    local_348.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ = puVar1[1];
    local_348.ColorAndOpacity._16_4_ = *(undefined4 *)((longlong)&this->_padding_ + lVar10);
    if ((uVar8 & 0x10) == 0) {
      local_res8 = (this->TextStyle).ShadowOffset;
    }
    else {
      local_res8._4_4_ = (float)*(double *)&(this->ShadowOffset).field_0x8;
      local_res8._0_4_ = (float)*(double *)&this->ShadowOffset;
    }
    lVar10 = 0x5a0;
    if ((uVar8 & 0x20) == 0) {
      lVar10 = 0x2b4;
    }
    local_348.ShadowOffset._0_4_ = (undefined4)local_res8;
    local_348.ShadowOffset._4_4_ = local_res8._4_4_;
    puVar1 = (undefined8 *)((longlong)&this->_padding_ + lVar10);
    local_348.ShadowColorAndOpacity.field0_0x0._0_8_ = *puVar1;
    local_348.ShadowColorAndOpacity.field0_0x0._8_8_ = puVar1[1];
    if ((uVar8 & 0x40) == 0) {
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.R =
           (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.R;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.G =
           (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.G;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.B =
           (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.B;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.A =
           (this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0._s_0.A;
      local_348.HighlightColor.ColorUseRule = (this->TextStyle).HighlightColor.ColorUseRule;
      local_348.HighlightColor.ColorTableId = (this->TextStyle).HighlightColor.ColorTableId;
      local_348.HighlightColor._18_2_ = *(undefined2 *)&(this->TextStyle).HighlightColor.field_0x12;
    }
    else {
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.R =
           (float)*(undefined4 *)&this->HighlightColor;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.G =
           (float)*(undefined4 *)&(this->HighlightColor).field_0x4;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.B =
           (float)*(undefined4 *)&(this->HighlightColor).field_0x8;
      local_348.HighlightColor.SpecifiedColor.field0_0x0._s_0.A =
           (float)*(undefined4 *)&(this->HighlightColor).field_0xc;
      local_358 = local_358 & 0xffffff00;
      local_348.HighlightColor._16_4_ = local_358;
    }
    if ((char)uVar8 < '\0') {
      TVar12 = this->HighlightShape;
    }
    else {
      TVar12 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )&(this->TextStyle).HighlightShape;
    }
    if (TVar12 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x0) {
      FSlateBrush::operator=(&local_348.HighlightShape,(FSlateBrush *)TVar12);
    }
    FSlateTextBlockLayout::UpdateTextStyle(this_00,&local_348);
    FTextBlockStyle::~FTextBlockStyle(&local_348);
  }
  if ((pSVar13->Union_Flags & 0xc00) != 0) {
    TVar9 = this->Justification;
    TVar4 = this->ApplyLineHeightToBottomLine;
    lVar10 = 0x5de;
    if ((pSVar13->Union_Flags >> 9 & 1) == 0) {
      lVar10 = 0x500;
    }
    local_3b8.Text.TextData.Reference = *(ITextData **)&this->BoundText;
    TVar5 = this->WrappingPolicy;
    TVar2 = this->LineHeightPercentage;
    EVar6 = *(ETextTransformPolicy *)((longlong)&this->_padding_ + lVar10);
    TVar7 = this->AutoWrapText;
    TVar3 = this->WrapTextAt;
    if (local_3b8.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.Text.TextData.Reference + 8))
                (local_3b8.Text.TextData.Reference,local_res18);
    }
    pSVar13 = &this->field91_0x60c;
    local_3b8.HighlightText.TextData.Reference = *(ITextData **)&this->HighlightText;
    local_3b8.Text.Flags = *(uint *)&(this->BoundText).field_0x8;
    if (local_3b8.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.HighlightText.TextData.Reference + 8))
                (local_3b8.HighlightText.TextData.Reference,local_res18);
    }
    local_3b8.HighlightText.Flags = *(uint *)&(this->HighlightText).field_0x8;
    local_3b8.Margin.Left = *(float *)&(this->Margin).field_0x0;
    local_3b8.Margin.Top = *(float *)&(this->Margin).field_0x4;
    local_3b8.Margin.Right = *(float *)&(this->Margin).field_0x8;
    local_3b8.Margin.Bottom = *(float *)&(this->Margin).field_0xc;
    local_3b8.WrapTextAt = (float)TVar3;
    local_3b8.LineHeightPercentage = (float)TVar2;
    local_3b8.ApplyLineHeightToBottomLine = (bool)TVar4;
    local_3b8.WrappingPolicy = (ETextWrappingPolicy)TVar5;
    local_3b8.TransformPolicy = EVar6;
    local_3b8.Justification = (Type)TVar9;
    local_3b8.AutoWrapText = (bool)TVar7;
    FSlateTextBlockLayout::ComputeDesiredSize
              ((this->TextLayoutCache).Ptr,&local_368,&local_3b8,param_1);
    pSVar13->Union_Flags = pSVar13->Union_Flags & 0xf7ff;
    pSVar13->Union_Flags = pSVar13->Union_Flags & 0xfbff;
    if (local_3b8.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.HighlightText.TextData.Reference + 0x10))();
    }
    if (local_3b8.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3b8.Text.TextData.Reference + 0x10))();
    }
  }
  return;
}

