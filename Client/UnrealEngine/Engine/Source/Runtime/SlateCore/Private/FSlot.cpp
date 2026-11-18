// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FSlot @ 1425472a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlot * __thiscall UE::Slate::Private::SContainerAttribute::FSlot::FSlot(FSlot *this)

{
  atomic<int> *paVar1;
  TSlateSlotAttribute<int,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FSlot *pFVar8;
  longlong *plVar9;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlotBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  this->_padding_ = (longlong)SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  lVar5 = _UNK_150925458;
  lVar4 = ___xmm_42c6000042c6000042c6000042c60000;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
        _vftable__for__TSlotBase<UE::Slate::Private::SContainerAttribute::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  plVar9 = &this->_padding_;
  pFVar8 = this;
  if (plVar9 == (longlong *)0x0) {
    pFVar8 = (FSlot *)0x0;
  }
  *plVar9 = lVar4;
  this->_padding_ = lVar5;
  if ((plVar9 < pFVar8) || (pFVar8 + 1 <= plVar9)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSlot *)(*pcVar3)();
      return pFVar8;
    }
  }
  this->_padding_ =
       (longlong)&_vftable__for__TSlotBase<UE::Slate::Private::SContainerAttribute::FSlot>__;
  pFVar8 = this + 1;
  this->SlotAttribute1 =
       (TSlateSlotAttribute<int,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x63;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  if ((&this->SlotAttribute1 < this) || (pFVar8 <= &this->SlotAttribute1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSlot *)(*pcVar3)();
      return pFVar8;
    }
  }
  pTVar2 = &this->SlotAttribute2;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pFVar8 <= pTVar2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSlot *)(*pcVar3)();
      return pFVar8;
    }
  }
  pTVar2 = &this->SlotAttribute3;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pFVar8 <= pTVar2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSlot *)(*pcVar3)();
      return pFVar8;
    }
  }
  this->SlotId = -1;
  return this;
}

// Construct @ 1425688a0

void __thiscall
UE::Slate::Private::SContainerAttribute::FSlot::Construct
          (FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FSlot *pFVar5;
  undefined1 local_res8 [8];
  
  lVar1 = param_2->_padding_;
  if (lVar1 != 0) {
    lVar2 = param_2->_padding_;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = lVar1;
    this->_padding_ = lVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if ((FChildren *)this->_padding_ != param_1) {
    if ((FChildren *)this->_padding_ != (FChildren *)0x0) {
      bVar4 = `FSlotBase::SetOwner'::__l6::<lambda_1>::operator()(local_res8);
      if (!bVar4) goto LAB_14256892b;
    }
    this->_padding_ = (longlong)param_1;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
  }
LAB_14256892b:
  if ((char)param_2->_padding_ != '\0') {
    pFVar5 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar5 = (FSlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar5->_padding_,
             (TAttribute<FMargin> *)&param_2->_padding_,None);
  }
  if ((param_2->_SlotAttribute1).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SlotAttribute1,(ISlateAttributeContainer *)&this->_padding_,
             &param_2->_SlotAttribute1,None);
  }
  if ((param_2->_SlotAttribute2).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SlotAttribute2,(ISlateAttributeContainer *)&this->_padding_,
             &param_2->_SlotAttribute2,None);
  }
  if ((param_2->_SlotAttribute3).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->SlotAttribute3,(ISlateAttributeContainer *)&this->_padding_,
             &param_2->_SlotAttribute3,None);
  }
  this->SlotId = param_2->_SlotId;
  return;
}

// RegisterAttributes @ 14258dbe0

void __cdecl
UE::Slate::Private::SContainerAttribute::FSlot::RegisterAttributes(FContainerInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Padding");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_14258dc67:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258dc67;
  }
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Attribute1");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x18,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_14258dce1:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258dce1;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Attribute2");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x1c,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14258dd65;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14258dd65:
  local_38[0] = Prepass;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Attribute3");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// FSlot @ 1425bde10

FSlot * __thiscall SVerticalBox::FSlot::FSlot(FSlot *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  puVar1 = &this->field_0x28;
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (puVar1 == (undefined1 *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  if ((puVar1 < pFVar4) || (pFVar4 + 1 <= puVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this =
       &TBasicLayoutWidgetSlot<SVerticalBox::FSlot>::_vftable__for__TSlotBase<SVerticalBox::FSlot>__
  ;
  *(undefined ***)&this->field_0x20 =
       &TBasicLayoutWidgetSlot<SVerticalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::TResizingWidgetSlotMixin<SVerticalBox::FSlot>
            ((TResizingWidgetSlotMixin<SVerticalBox::FSlot> *)&this->field_0x40);
  *(undefined ***)this = &_vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  return this;
}

