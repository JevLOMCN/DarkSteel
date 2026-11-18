// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// TResizingWidgetSlotMixin<SHorizontalBox::FSlot> @ 1426f6150

TResizingWidgetSlotMixin<SHorizontalBox::FSlot> * __thiscall
TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::TResizingWidgetSlotMixin<SHorizontalBox::FSlot>
          (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *this)

{
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *pTVar4;
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
  if (this == (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)(*pcVar1)();
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
      pTVar4 = (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MinSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  pTVar7 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MaxSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  if (this == (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> @ 1427aa720

TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> * __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>
          (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *this)

{
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *pTVar4;
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
  if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
    pTVar6 = pTVar8;
  }
  iVar3 = _finite(_X);
  if (iVar3 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((pTVar7 < pTVar6) || (pTVar6 + 0x1c <= pTVar7)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)(*pcVar1)();
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
  if ((pTVar7 < pTVar6) || (pTVar6 + 0x1c <= pTVar7)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MinSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  pTVar7 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
    pTVar7 = pTVar8;
  }
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
  if ((&this->MinSize < pTVar7) || (pTVar7 + 0x1c <= &this->MinSize)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MaxSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
    pTVar5 = pTVar8;
  }
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res20);
  }
  if ((&this->MaxSize < pTVar5) || (pTVar5 + 0x1c <= &this->MaxSize)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// ConstructMixin @ 1427f1a40

void __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::ConstructMixin
          (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *this,FChildren *param_1,
          FSlotArgumentsMixin *param_2)

{
  bool bVar1;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  ISlateAttributeContainer *pIVar3;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar4;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar5;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  ESizeRule local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  undefined1 local_38 [32];
  
  bVar1 = (param_2->_MinSize).bIsSet;
  pTVar4 = &this[-4].MaxSize;
  pTVar5 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            *)0x0;
  if (bVar1 != false) {
    local_88._0_4_ = (param_2->_MinSize).Value;
    local_88[4] = bVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_MinSize).Getter);
    pTVar2 = pTVar4;
    if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
      pTVar2 = pTVar5;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MinSize,(ISlateAttributeContainer *)(pTVar2 + 8),
             (TAttribute<float> *)local_88,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  bVar1 = (param_2->_MaxSize).bIsSet;
  if (bVar1 != false) {
    local_88._0_4_ = (param_2->_MaxSize).Value;
    local_88[4] = bVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_MaxSize).Getter);
    pTVar2 = pTVar4;
    if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
      pTVar2 = pTVar5;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MaxSize,(ISlateAttributeContainer *)(pTVar2 + 8),
             (TAttribute<float> *)local_88,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  if ((param_2->_SizeParam).bIsSet != false) {
    local_68 = (param_2->_SizeParam).TypedValue.SizeRule;
    local_60._0_4_ = (param_2->_SizeParam).TypedValue.Value.Value;
    local_60[4] = (param_2->_SizeParam).TypedValue.Value.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_2->_SizeParam).TypedValue.Value.Getter);
    local_40._0_4_ = (param_2->_SizeParam).TypedValue.ShrinkValue.Value;
    local_40[4] = (param_2->_SizeParam).TypedValue.ShrinkValue.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_2->_SizeParam).TypedValue.ShrinkValue.Getter);
    pTVar2 = &this->ShrinkSizeValue;
    this->SizeRule = local_68;
    if (local_68 == SizeRule_StretchContent) {
      if (local_40[4] == false) {
        if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
          pTVar4 = pTVar5;
        }
        pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)pTVar2,pIVar3,(TAttribute<float> *)local_60,None);
      }
      else {
        if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
          pTVar4 = pTVar5;
        }
        pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)pTVar2,pIVar3,(TAttribute<float> *)local_40,None);
      }
    }
    else {
      if (this == (TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)0x0) {
        pTVar4 = pTVar5;
      }
      pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)pTVar2,pIVar3,Contained);
      (**(code **)*pIVar3)(pIVar3);
      if (__real_3f800000 != (float)this->ShrinkSizeValue) {
        this->ShrinkSizeValue =
             (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x3f800000;
        (**(code **)*pIVar3)(pIVar3);
        SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)&this->ShrinkSizeValue,pIVar3,Contained,None);
      }
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SizeValue,pIVar3,(TAttribute<float> *)local_60,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// RegisterAttributesMixin @ 142830780

void __cdecl
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::RegisterAttributesMixin
          (FContainerInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong uStack_38;
  FAttributeEntry local_30;
  
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.MinSize");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_30,*pFVar1,0x2c,(FInvalidateWidgetReasonAttribute *)local_48);
  if ((int)uStack_38 == 0) {
LAB_142830804:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142830804;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_30,*pFVar1,0x30,(FInvalidateWidgetReasonAttribute *)local_48);
  if ((int)uStack_38 == 0) {
LAB_14283087e:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_14283087e;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.SizeValue");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                     (param_1,&local_30,*pFVar1,0x24,(FInvalidateWidgetReasonAttribute *)local_48);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (pFVar2,*pFVar1);
  pFVar1 = ::FName::FName(&local_res20,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
  if ((int)uStack_38 != 0) {
    if (local_40.Data == (FScriptContainerElement *)0x0) goto LAB_14283093e;
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
LAB_14283093e:
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.ShrinkSizeValue");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                     (param_1,&local_30,*pFVar1,0x28,(FInvalidateWidgetReasonAttribute *)local_48);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (pFVar2,*pFVar1);
  pFVar1 = ::FName::FName(&local_res20,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
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

// SetSizeParam @ 142898e40

void __thiscall
TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::SetSizeParam
          (TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *this,FSizeParam *param_1)

{
  ESizeRule EVar1;
  void *pvVar2;
  
  EVar1 = param_1->SizeRule;
  this->SizeRule = EVar1;
  if (EVar1 == SizeRule_StretchContent) {
    if ((param_1->ShrinkValue).bIsSet == false) {
      SlateAttributePrivate::
      TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
      ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                *)&this->ShrinkSizeValue,(ISlateAttributeContainer *)&this[-2].ShrinkSizeValue,
               &param_1->Value,None);
    }
    else {
      SlateAttributePrivate::
      TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
      ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                *)&this->ShrinkSizeValue,(ISlateAttributeContainer *)&this[-2].ShrinkSizeValue,
               &param_1->ShrinkValue,None);
    }
  }
  else {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&this->ShrinkSizeValue,
               (ISlateAttributeContainer *)&this[-2].ShrinkSizeValue,Contained);
    (*(code *)**(undefined8 **)&this[-2].ShrinkSizeValue)(&this[-2].ShrinkSizeValue);
    if (__real_3f800000 != (float)this->ShrinkSizeValue) {
      this->ShrinkSizeValue =
           (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            )0x3f800000;
      (*(code *)**(undefined8 **)&this[-2].ShrinkSizeValue)(&this[-2].ShrinkSizeValue);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)&this->ShrinkSizeValue,
                 (ISlateAttributeContainer *)&this[-2].ShrinkSizeValue,Contained,None);
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
            *)&this->SizeValue,(ISlateAttributeContainer *)&this[-2].ShrinkSizeValue,&param_1->Value
           ,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShrinkValue).Getter);
  pvVar2 = *(void **)&(param_1->ShrinkValue).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(param_1->ShrinkValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Value).Getter);
  pvVar2 = *(void **)&(param_1->Value).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(param_1->Value).Getter);
  return;
}

// TResizingWidgetSlotMixin<SScrollBox::FSlot> @ 1428b1d70

TResizingWidgetSlotMixin<SScrollBox::FSlot> * __thiscall
TResizingWidgetSlotMixin<SScrollBox::FSlot>::TResizingWidgetSlotMixin<SScrollBox::FSlot>
          (TResizingWidgetSlotMixin<SScrollBox::FSlot> *this)

{
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  TResizingWidgetSlotMixin<SScrollBox::FSlot> *pTVar4;
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
  if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)(*pcVar1)();
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
      pTVar4 = (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MinSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  pTVar7 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MaxSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// ConstructMixin @ 14290f9a0

void __thiscall
TResizingWidgetSlotMixin<SScrollBox::FSlot>::ConstructMixin
          (TResizingWidgetSlotMixin<SScrollBox::FSlot> *this,FChildren *param_1,
          FSlotArgumentsMixin *param_2)

{
  bool bVar1;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  ISlateAttributeContainer *pIVar3;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar4;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar5;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  ESizeRule local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  undefined1 local_38 [32];
  
  bVar1 = (param_2->_MinSize).bIsSet;
  pTVar4 = &this[-4].MaxSize;
  pTVar5 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            *)0x0;
  if (bVar1 != false) {
    local_88._0_4_ = (param_2->_MinSize).Value;
    local_88[4] = bVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_MinSize).Getter);
    pTVar2 = pTVar4;
    if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
      pTVar2 = pTVar5;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MinSize,(ISlateAttributeContainer *)(pTVar2 + 8),
             (TAttribute<float> *)local_88,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  bVar1 = (param_2->_MaxSize).bIsSet;
  if (bVar1 != false) {
    local_88._0_4_ = (param_2->_MaxSize).Value;
    local_88[4] = bVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_MaxSize).Getter);
    pTVar2 = pTVar4;
    if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
      pTVar2 = pTVar5;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MaxSize,(ISlateAttributeContainer *)(pTVar2 + 8),
             (TAttribute<float> *)local_88,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
  }
  if ((param_2->_SizeParam).bIsSet != false) {
    local_68 = (param_2->_SizeParam).TypedValue.SizeRule;
    local_60._0_4_ = (param_2->_SizeParam).TypedValue.Value.Value;
    local_60[4] = (param_2->_SizeParam).TypedValue.Value.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_2->_SizeParam).TypedValue.Value.Getter);
    local_40._0_4_ = (param_2->_SizeParam).TypedValue.ShrinkValue.Value;
    local_40[4] = (param_2->_SizeParam).TypedValue.ShrinkValue.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_2->_SizeParam).TypedValue.ShrinkValue.Getter);
    pTVar2 = &this->ShrinkSizeValue;
    this->SizeRule = local_68;
    if (local_68 == SizeRule_StretchContent) {
      if (local_40[4] == false) {
        if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
          pTVar4 = pTVar5;
        }
        pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)pTVar2,pIVar3,(TAttribute<float> *)local_60,None);
      }
      else {
        if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
          pTVar4 = pTVar5;
        }
        pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)pTVar2,pIVar3,(TAttribute<float> *)local_40,None);
      }
    }
    else {
      if (this == (TResizingWidgetSlotMixin<SScrollBox::FSlot> *)0x0) {
        pTVar4 = pTVar5;
      }
      pIVar3 = (ISlateAttributeContainer *)(pTVar4 + 8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)pTVar2,pIVar3,Contained);
      (**(code **)*pIVar3)(pIVar3);
      if (__real_3f800000 != (float)this->ShrinkSizeValue) {
        this->ShrinkSizeValue =
             (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x3f800000;
        (**(code **)*pIVar3)(pIVar3);
        SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)&this->ShrinkSizeValue,pIVar3,Contained,None);
      }
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SizeValue,pIVar3,(TAttribute<float> *)local_60,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// RegisterAttributesMixin @ 1429886c0

void __cdecl
TResizingWidgetSlotMixin<SScrollBox::FSlot>::RegisterAttributesMixin(FContainerInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong uStack_38;
  FAttributeEntry local_30;
  
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.MinSize");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_30,*pFVar1,0x2c,(FInvalidateWidgetReasonAttribute *)local_48);
  if ((int)uStack_38 == 0) {
LAB_142988744:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_142988744;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_30,*pFVar1,0x30,(FInvalidateWidgetReasonAttribute *)local_48);
  if ((int)uStack_38 == 0) {
LAB_1429887be:
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else if (local_40.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
    goto LAB_1429887be;
  }
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.SizeValue");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                     (param_1,&local_30,*pFVar1,0x24,(FInvalidateWidgetReasonAttribute *)local_48);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (pFVar2,*pFVar1);
  pFVar1 = ::FName::FName(&local_res20,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
  if ((int)uStack_38 != 0) {
    if (local_40.Data == (FScriptContainerElement *)0x0) goto LAB_14298887e;
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
LAB_14298887e:
  local_48[0] = Layout;
  local_40.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.ShrinkSizeValue");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                     (param_1,&local_30,*pFVar1,0x28,(FInvalidateWidgetReasonAttribute *)local_48);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (pFVar2,*pFVar1);
  pFVar1 = ::FName::FName(&local_res20,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
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

