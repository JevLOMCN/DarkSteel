// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SButton,void> @ 14283db70

TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> * __thiscall
SWidget::TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SButton,void>
          (TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this,
          SButton *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  undefined1 local_res8 [8];
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if ((this < param_1) || (param_1 + 1 <= this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this,(SWidget *)param_1);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SButton,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void> @ 1428a10a0

TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> * __thiscall
SWidget::TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SBox,void>
          (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this,
          SBox *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  undefined1 local_res8 [8];
  
  *this = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
          FOptionalSize::Unspecified;
  if ((this < param_1) || (param_1 + 1 <= this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlateAttribute<FOptionalSize,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *
               )(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this,(SWidget *)param_1);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBox,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void> @ 1429b1980

TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *
__thiscall
SWidget::TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
          (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
           *this,STextBlock *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  undefined1 local_res8 [8];
  
  *this = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
          0x0;
  if ((this < param_1) || (param_1 + 1 <= this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this,(SWidget *)param_1);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void> @ 1429b1a00

TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> * __thiscall
SWidget::TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
          (TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this,
          STextBlock *param_1,FLinearColor *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  fVar2 = (param_2->field0_0x0)._s_0.R;
  fVar3 = (param_2->field0_0x0)._s_0.G;
  fVar4 = (param_2->field0_0x0)._s_0.B;
  fVar5 = (param_2->field0_0x0)._s_0.A;
  *(float *)this = fVar2;
  *(float *)&this->field_0x4 = fVar3;
  *(float *)&this->field_0x8 = fVar4;
  *(float *)&this->field_0xc = fVar5;
  iVar7 = _finite((double)fVar2);
  if (iVar7 != 0) {
    iVar7 = _finite((double)fVar3);
    if (iVar7 != 0) {
      iVar7 = _finite((double)fVar4);
      if (iVar7 != 0) {
        iVar7 = _finite((double)fVar5);
        if (iVar7 != 0) goto LAB_1429b1a9b;
      }
    }
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l37::<lambda_1>::operator()(local_res8);
LAB_1429b1a9b:
  if ((this < param_1) || (param_1 + 1 <= this)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
               (*pcVar1)();
      return pTVar8;
    }
  }
  bVar6 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this,(SWidget *)param_1);
  if (!bVar6) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  return this;
}

// TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void> @ 1429b1b10

TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> * __thiscall
SWidget::TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><STextBlock,void>
          (TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this,
          STextBlock *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  undefined1 local_res8 [8];
  
  FText::FText((FText *)this);
  if ((this < param_1) || (param_1 + 1 <= this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlateAttribute<FText,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this,(SWidget *)param_1);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate>
    ::VerifyAttributeAddress<STextBlock,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

