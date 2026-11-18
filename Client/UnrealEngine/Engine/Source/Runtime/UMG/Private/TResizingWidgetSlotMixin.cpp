// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// TResizingWidgetSlotMixin<SStackBox::FSlot> @ 146982970

TResizingWidgetSlotMixin<SStackBox::FSlot> * __thiscall
TResizingWidgetSlotMixin<SStackBox::FSlot>::TResizingWidgetSlotMixin<SStackBox::FSlot>
          (TResizingWidgetSlotMixin<SStackBox::FSlot> *this)

{
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  TResizingWidgetSlotMixin<SStackBox::FSlot> *pTVar4;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar5;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar6;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar7;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  _X = __real_3ff0000000000000;
  pTVar8 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            *)0x0;
  pTVar5 = &this[-4].MaxSize;
  this->SizeRule = SizeRule_Stretch;
  pTVar7 = &this->SizeValue;
  *pTVar7 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )0x3f800000;
  pTVar6 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SStackBox::FSlot> *)0x0) {
    pTVar6 = pTVar8;
  }
  iVar3 = _finite(_X);
  if (iVar3 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((pTVar7 < pTVar6) || (pTVar6 + 0x16 <= pTVar7)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SStackBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pTVar7 = &this->ShrinkSizeValue;
  *pTVar7 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )0x3f800000;
  iVar3 = _finite(_X);
  if (iVar3 == 0) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res10);
  }
  if ((pTVar7 < pTVar6) || (pTVar6 + 0x16 <= pTVar7)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SStackBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MinSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  pTVar7 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SStackBox::FSlot> *)0x0) {
    pTVar7 = pTVar8;
  }
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
  if ((&this->MinSize < pTVar7) || (pTVar7 + 0x16 <= &this->MinSize)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SStackBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MaxSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  if (this == (TResizingWidgetSlotMixin<SStackBox::FSlot> *)0x0) {
    pTVar5 = pTVar8;
  }
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res20);
  }
  if ((&this->MaxSize < pTVar5) || (pTVar5 + 0x16 <= &this->MaxSize)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SStackBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

