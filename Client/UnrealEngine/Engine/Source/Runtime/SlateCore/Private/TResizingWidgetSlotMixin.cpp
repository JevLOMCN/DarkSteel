// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// TResizingWidgetSlotMixin<SVerticalBox::FSlot> @ 1425bab90

TResizingWidgetSlotMixin<SVerticalBox::FSlot> * __thiscall
TResizingWidgetSlotMixin<SVerticalBox::FSlot>::TResizingWidgetSlotMixin<SVerticalBox::FSlot>
          (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *this)

{
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  TResizingWidgetSlotMixin<SVerticalBox::FSlot> *pTVar4;
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
  if (this == (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)(*pcVar1)();
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
      pTVar4 = (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MinSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  pTVar7 = pTVar5;
  if (this == (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->MaxSize =
       (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x0;
  if (this == (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)0x0) {
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
      pTVar4 = (TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

// ConstructMixin @ 1425d5710

void __thiscall
TResizingWidgetSlotMixin<SBoxPanel::FSlot>::ConstructMixin
          (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *this,FChildren *param_1,
          FSlotArgumentsMixin *param_2)

{
  bool bVar1;
  SWidget *pSVar2;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar3;
  ISlateAttributeContainer *pIVar4;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar5;
  TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar6;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  ESizeRule local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  undefined1 local_38 [32];
  
  bVar1 = (param_2->_MinSize).bIsSet;
  pTVar5 = &this[-4].MaxSize;
  pTVar6 = (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
            *)0x0;
  if (bVar1 != false) {
    local_88._0_4_ = (param_2->_MinSize).Value;
    local_88[4] = bVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_MinSize).Getter);
    pTVar3 = pTVar5;
    if (this == (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)0x0) {
      pTVar3 = pTVar6;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MinSize,(ISlateAttributeContainer *)(pTVar3 + 8),
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
    pTVar3 = pTVar5;
    if (this == (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)0x0) {
      pTVar3 = pTVar6;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->MaxSize,(ISlateAttributeContainer *)(pTVar3 + 8),
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
    this->SizeRule = local_68;
    if (local_68 == SizeRule_StretchContent) {
      if (local_40[4] == false) {
        if (this == (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)0x0) {
          pTVar5 = pTVar6;
        }
        pIVar4 = (ISlateAttributeContainer *)(pTVar5 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)&this->ShrinkSizeValue,pIVar4,(TAttribute<float> *)local_60,None);
      }
      else {
        if (this == (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)0x0) {
          pTVar5 = pTVar6;
        }
        pIVar4 = (ISlateAttributeContainer *)(pTVar5 + 8);
        SlateAttributePrivate::
        TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
        ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                  *)&this->ShrinkSizeValue,pIVar4,(TAttribute<float> *)local_40,None);
      }
    }
    else {
      if (this == (TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)0x0) {
        pTVar5 = pTVar6;
      }
      pIVar4 = (ISlateAttributeContainer *)(pTVar5 + 8);
      pSVar2 = (SWidget *)(*(code *)**(undefined8 **)(pTVar5 + 8))(pIVar4);
      FSlateAttributeMetaData::UnregisterAttribute
                (pSVar2,(FSlateAttributeBase *)&this->ShrinkSizeValue);
      (**(code **)*pIVar4)(pIVar4);
      if (__real_3f800000 != (float)this->ShrinkSizeValue) {
        this->ShrinkSizeValue =
             (TSlateContainedAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x3f800000;
        (**(code **)*pIVar4)(pIVar4);
        FSlateAttributeMetaData::InvalidateWidget
                  (pIVar4,(FSlateAttributeBase *)&this->ShrinkSizeValue,Contained,None);
      }
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SizeValue,pIVar4,(TAttribute<float> *)local_60,None);
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

// RegisterAttributesMixin @ 1425f6810

void __cdecl
TResizingWidgetSlotMixin<SBoxPanel::FSlot>::RegisterAttributesMixin(FContainerInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  ForAnyElementType local_60;
  ulonglong uStack_58;
  undefined1 local_50 [24];
  FAttributeEntry local_38;
  
  local_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 0;
  pFVar1 = ::FName::FName(&local_res8,"Slot.MinSize");
  local_50[0] = Layout;
  local_50._8_8_ = local_60.Data;
  local_50._16_4_ = (int)uStack_58;
  FSlateAttributeDescriptor::AddContainedAttribute
            (param_1->Descriptor,&local_38,param_1->ContainerName,*pFVar1,0x2c,
             (FInvalidateWidgetReasonAttribute *)local_50);
  if ((int)uStack_58 == 0) {
LAB_1425f68b2:
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  else if (local_60.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    uStack_58 = uStack_58 & 0xffffffff00000000;
    goto LAB_1425f68b2;
  }
  local_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 0;
  pFVar1 = ::FName::FName(&local_res8,"Slot.MaxSize");
  local_50[0] = Layout;
  local_50._8_8_ = local_60.Data;
  local_50._16_4_ = (int)uStack_58;
  FSlateAttributeDescriptor::AddContainedAttribute
            (param_1->Descriptor,&local_38,param_1->ContainerName,*pFVar1,0x30,
             (FInvalidateWidgetReasonAttribute *)local_50);
  if ((int)uStack_58 == 0) {
LAB_1425f6947:
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  else if (local_60.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    uStack_58 = uStack_58 & 0xffffffff00000000;
    goto LAB_1425f6947;
  }
  local_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 0;
  pFVar1 = ::FName::FName(&local_res8,"Slot.SizeValue");
  local_50[0] = Layout;
  local_50._8_8_ = local_60.Data;
  local_50._16_4_ = (int)uStack_58;
  FSlateAttributeDescriptor::AddContainedAttribute
            (param_1->Descriptor,&local_38,param_1->ContainerName,*pFVar1,0x24,
             (FInvalidateWidgetReasonAttribute *)local_50);
  pFVar1 = ::FName::FName(&local_res10,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (&local_38,*pFVar1);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
  if ((int)uStack_58 != 0) {
    if (local_60.Data == (FScriptContainerElement *)0x0) goto LAB_1425f6a20;
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    uStack_58 = uStack_58 & 0xffffffff00000000;
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
LAB_1425f6a20:
  local_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 0;
  pFVar1 = ::FName::FName(&local_res8,"Slot.ShrinkSizeValue");
  local_50[0] = Layout;
  local_50._8_8_ = local_60.Data;
  local_50._16_4_ = (int)uStack_58;
  FSlateAttributeDescriptor::AddContainedAttribute
            (param_1->Descriptor,&local_38,param_1->ContainerName,*pFVar1,0x28,
             (FInvalidateWidgetReasonAttribute *)local_50);
  pFVar1 = ::FName::FName(&local_res10,"Slot.MinSize");
  pFVar2 = FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
                     (&local_38,*pFVar1);
  pFVar1 = ::FName::FName(&local_res18,"Slot.MaxSize");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (pFVar2,*pFVar1);
  if ((int)uStack_58 != 0) {
    if (local_60.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    uStack_58 = uStack_58 & 0xffffffff00000000;
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

