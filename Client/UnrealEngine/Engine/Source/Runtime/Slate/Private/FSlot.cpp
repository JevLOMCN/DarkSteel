// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// FSlot @ 1426fcb00

FSlot * __thiscall SHorizontalBox::FSlot::FSlot(FSlot *this)

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
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
        _vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
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
       &TBasicLayoutWidgetSlot<SHorizontalBox::FSlot>::
        _vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TBasicLayoutWidgetSlot<SHorizontalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::TResizingWidgetSlotMixin<SHorizontalBox::FSlot>
            ((TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)&this->field_0x40);
  *(undefined ***)this = &_vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  return this;
}

// FSlot @ 1427b4580

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlot * __thiscall SPrioritizedWrapBox::FSlot::FSlot(FSlot *this)

{
  longlong *plVar1;
  TSlateContainedAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  TSlateContainedAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  FSlot *pFVar6;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar6 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar6 = (FSlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar6) || (pFVar6 + 1 <= plVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSlot *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &TBasicLayoutWidgetSlot<SPrioritizedWrapBox::FSlot>::
        _vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TBasicLayoutWidgetSlot<SPrioritizedWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>
            ((TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  pFVar6 = this + 1;
  this->bAllowWrapping =
       (TSlateContainedAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
        )0x1;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  if ((&this->bAllowWrapping < this) || (pFVar6 <= &this->bAllowWrapping)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSlot *)(*pcVar4)();
      return pFVar6;
    }
  }
  pTVar2 = &this->WrapPriority;
  *(undefined4 *)&pTVar2->field_0x0 = 0;
  if ((pTVar2 < this) || (pFVar6 <= pTVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSlot *)(*pcVar4)();
      return pFVar6;
    }
  }
  pTVar3 = &this->WrapMode;
  pTVar3->field_0x0 = 0;
  if ((pTVar3 < this) || (pFVar6 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSlot *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->VerticalOverflowBehavior = Clip;
  (this->VerticalExpansionThreshold).TypedValue = 0.0;
  this->bForceNewLine = false;
  this->bExcludeIfFirstOrLast = false;
  (this->VerticalExpansionThreshold).bIsSet = true;
  return this;
}

// Construct @ 1427ee660

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SPrioritizedWrapBox::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FSlot *pFVar3;
  
  TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if ((char)param_2->_padding_ != '\0') {
    pFVar3 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar3 = (FSlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar3->_padding_,
             (TAttribute<FMargin> *)&param_2->_padding_,None);
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar2;
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = plVar1;
  }
  *(int *)plVar1 = (int)*plVar2;
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::ConstructMixin
            ((TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot> *)&this->_padding_,param_1,
             (FSlotArgumentsMixin *)&param_2->_padding_);
  if ((param_2->_AllowWrapping).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->bAllowWrapping,(ISlateAttributeContainer *)&this->_padding_,
             &param_2->_AllowWrapping,None);
  }
  if ((param_2->_WrapPriority).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->WrapPriority,(ISlateAttributeContainer *)&this->_padding_,
             &param_2->_WrapPriority,None);
  }
  if ((param_2->_WrapMode).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign(&this->WrapMode,(ISlateAttributeContainer *)&this->_padding_,&param_2->_WrapMode,None);
  }
  this->VerticalOverflowBehavior = param_2->_VerticalOverflowBehavior;
  if (&param_2->_VerticalExpansionThreshold != &this->VerticalExpansionThreshold) {
    if ((param_2->_VerticalExpansionThreshold).bIsSet == false) {
      if ((this->VerticalExpansionThreshold).bIsSet != false) {
        (this->VerticalExpansionThreshold).bIsSet = false;
      }
    }
    else {
      (this->VerticalExpansionThreshold).TypedValue =
           (param_2->_VerticalExpansionThreshold).TypedValue;
      (this->VerticalExpansionThreshold).bIsSet = true;
    }
  }
  this->bForceNewLine = param_2->_ForceNewLine;
  this->bExcludeIfFirstOrLast = param_2->_ExcludeIfFirstOrLast;
  return;
}

// Construct @ 1427ee7a0

void __thiscall
SUniformToolbarPanel::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 *puVar4;
  
  lVar1 = *(longlong *)&param_2->field_0x8;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)&param_2->field_0x10;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(longlong *)&this->field_0x10 = lVar1;
    *(longlong *)&this->field_0x18 = lVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  puVar4 = (undefined4 *)&param_2->field_0x18;
  if (param_2->field_0x1c == '\0') {
    puVar4 = (undefined4 *)&this->field_0x20;
  }
  *(undefined4 *)&this->field_0x20 = *puVar4;
  puVar4 = (undefined4 *)&param_2->field_0x20;
  if (param_2->field_0x24 == '\0') {
    puVar4 = (undefined4 *)&this->field_0x24;
  }
  *(undefined4 *)&this->field_0x24 = *puVar4;
  return;
}

// Construct @ 1427ee860

void __thiscall
SUniformWrapPanel::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 *puVar4;
  
  lVar1 = *(longlong *)&param_2->field_0x8;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)&param_2->field_0x10;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(longlong *)&this->field_0x10 = lVar1;
    *(longlong *)&this->field_0x18 = lVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  puVar4 = (undefined4 *)&param_2->field_0x18;
  if (param_2->field_0x1c == '\0') {
    puVar4 = (undefined4 *)&this->field_0x20;
  }
  *(undefined4 *)&this->field_0x20 = *puVar4;
  puVar4 = (undefined4 *)&param_2->field_0x20;
  if (param_2->field_0x24 == '\0') {
    puVar4 = (undefined4 *)&this->field_0x24;
  }
  *(undefined4 *)&this->field_0x24 = *puVar4;
  return;
}

// RegisterAttributes @ 142830560

void __cdecl SPrioritizedWrapBox::FSlot::RegisterAttributes(FContainerInitializer *param_1)

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
LAB_1428305e7:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_1428305e7;
  }
  TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::RegisterAttributesMixin(param_1);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.AllowWrapping");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x34,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_142830669:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142830669;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.WrapPriority");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x38,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_1428306ed;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_1428306ed:
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.WrapMode");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x3c,(FInvalidateWidgetReasonAttribute *)local_38);
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

// FSlot @ 1428b8c80

FSlot * __thiscall SConstraintCanvas::FSlot::FSlot(FSlot *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  this->_padding_ = (longlong)&___7FSlot_SConstraintCanvas__6B_;
  (this->OffsetAttr).Value.Left = 0.0;
  (this->OffsetAttr).Value.Top = 0.0;
  (this->OffsetAttr).Value.Right = 1.0;
  (this->OffsetAttr).Value.Bottom = 1.0;
  (this->OffsetAttr).bIsSet = true;
  *(undefined8 *)&(this->OffsetAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->OffsetAttr).Getter = 0;
  *(undefined8 *)&(this->OffsetAttr).Getter.field_0x8 = 0;
  (this->AnchorsAttr).Value.Minimum.field0_0x0._s_0.X = 0.0;
  (this->AnchorsAttr).Value.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.X = 0.0;
  (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->AnchorsAttr).bIsSet = true;
  *(undefined8 *)&(this->AnchorsAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AnchorsAttr).Getter = 0;
  *(undefined8 *)&(this->AnchorsAttr).Getter.field_0x8 = 0;
  (this->AlignmentAttr).Value.field0_0x0._s_0.X = 0.5;
  (this->AlignmentAttr).Value.field0_0x0._s_0.Y = 0.5;
  (this->AlignmentAttr).bIsSet = true;
  *(undefined8 *)&(this->AlignmentAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AlignmentAttr).Getter = 0;
  *(undefined8 *)&(this->AlignmentAttr).Getter.field_0x8 = 0;
  (this->AutoSizeAttr).Value = false;
  (this->AutoSizeAttr).bIsSet = true;
  *(undefined8 *)&(this->AutoSizeAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AutoSizeAttr).Getter = 0;
  *(undefined8 *)&(this->AutoSizeAttr).Getter.field_0x8 = 0;
  this->ZOrder = 0.0;
  return this;
}

// FSlot @ 1428b8d60

FSlot * __thiscall SGridPanel::FSlot::FSlot(FSlot *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
        _vftable__for__TSlotBase<SGridPanel::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar4) || (pFVar4 + 1 <= plVar1)) {
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
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SGridPanel::FSlot>__;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  (this->Panel).Object = (SGridPanel *)0x0;
  (this->Panel).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ColumnParam = param_1;
  this->RowParam = param_2;
  this->LayerParam = param_3;
  this->ColumnSpanParam = 1;
  this->RowSpanParam = 1;
  (this->NudgeParam).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// FSlot @ 1428b8e70

FSlot * __thiscall SResponsiveGridPanel::FSlot::FSlot(FSlot *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
        _vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar4) || (pFVar4 + 1 <= plVar1)) {
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
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
  (this->Panel).Object = (SResponsiveGridPanel *)0x0;
  if (param_1 < 0) {
    param_1 = 0;
  }
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  (this->Panel).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ColumnLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnLayouts).ArrayNum = 0;
  (this->ColumnLayouts).ArrayMax = 0;
  this->RowParam = param_1;
  return this;
}

// FSlot @ 1428b8f50

FSlot * __thiscall SScrollBox::FSlot::FSlot(FSlot *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
        _vftable__for__TSlotBase<SScrollBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar4) || (pFVar4 + 1 <= plVar1)) {
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
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &TBasicLayoutWidgetSlot<SScrollBox::FSlot>::_vftable__for__TSlotBase<SScrollBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TBasicLayoutWidgetSlot<SScrollBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  TResizingWidgetSlotMixin<SScrollBox::FSlot>::TResizingWidgetSlotMixin<SScrollBox::FSlot>
            ((TResizingWidgetSlotMixin<SScrollBox::FSlot> *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SScrollBox::FSlot>__;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  *(undefined4 *)&this->_padding_ = 0;
  return this;
}

// FSlot @ 1428b9030

FSlot * __thiscall SSplitter2x2::FSlot::FSlot(FSlot *this,TSharedRef<SWidget,1> *param_1)

{
  FSlotBase::FSlotBase((FSlotBase *)this,param_1);
  this->_padding_ = (longlong)&___7FSlot_SSplitter2x2__6B_;
  (this->PercentageAttribute).Value.field0_0x0._s_0.X = 0.5;
  (this->PercentageAttribute).Value.field0_0x0._s_0.Y = 0.5;
  (this->PercentageAttribute).bIsSet = true;
  *(undefined8 *)&(this->PercentageAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->PercentageAttribute).Getter = 0;
  *(undefined8 *)&(this->PercentageAttribute).Getter.field_0x8 = 0;
  return this;
}

// FSlot @ 1428b9080

FSlot * __thiscall SSplitter::FSlot::FSlot(FSlot *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  this->_padding_ = (longlong)&___7FSlot_SSplitter__6B_;
  (this->SizingRule).Value = FractionOfParent;
  (this->SizingRule).bIsSet = true;
  *(undefined8 *)&(this->SizingRule).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SizingRule).Getter = 0;
  *(undefined8 *)&(this->SizingRule).Getter.field_0x8 = 0;
  (this->SizeValue).Value = 1.0;
  (this->SizeValue).bIsSet = true;
  *(undefined8 *)&(this->SizeValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SizeValue).Getter = 0;
  *(undefined8 *)&(this->SizeValue).Getter.field_0x8 = 0;
  (this->MinSizeValue).Value = 0.0;
  (this->MinSizeValue).bIsSet = true;
  *(undefined8 *)&(this->MinSizeValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinSizeValue).Getter = 0;
  *(undefined8 *)&(this->MinSizeValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnSlotResized_Handler = 0;
  *(undefined8 *)&(this->OnSlotResized_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlotResized_Handler).field_0x10 = 0;
  (this->bIsResizable).bIsSet = false;
  return this;
}

// CanBeResized @ 1428da830

bool __thiscall SSplitter::FSlot::CanBeResized(FSlot *this)

{
  bool bVar1;
  ESizeRule *pEVar2;
  
  pEVar2 = TAttribute<enum_SSplitter::ESizeRule>::Get(&this->SizingRule);
  bVar1 = (this->bIsResizable).bIsSet;
  if (*pEVar2 == FractionOfParent) {
    if ((bVar1 == false) || ((this->bIsResizable).TypedValue != false)) {
      return true;
    }
  }
  else if (((bVar1 != false) && ((this->bIsResizable).TypedValue != false)) &&
          (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                             ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                              &this->OnSlotResized_Handler), bVar1)) {
    return true;
  }
  return false;
}

// Construct @ 1428f8150

void __thiscall
SConstraintCanvas::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TOptional<float> *pTVar8;
  
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
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  if ((param_2->_Offset).bIsSet != false) {
    fVar5 = (param_2->_Offset).Value.Top;
    fVar6 = (param_2->_Offset).Value.Right;
    fVar7 = (param_2->_Offset).Value.Bottom;
    (this->OffsetAttr).Value.Left = (param_2->_Offset).Value.Left;
    (this->OffsetAttr).Value.Top = fVar5;
    (this->OffsetAttr).Value.Right = fVar6;
    (this->OffsetAttr).Value.Bottom = fVar7;
    (this->OffsetAttr).bIsSet = (param_2->_Offset).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OffsetAttr).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Offset).Getter);
  }
  if ((param_2->_Anchors).bIsSet != false) {
    dVar4 = (param_2->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
    (this->AnchorsAttr).Value.Minimum.field0_0x0._s_0.X =
         (param_2->_Anchors).Value.Minimum.field0_0x0._s_0.X;
    (this->AnchorsAttr).Value.Minimum.field0_0x0._s_0.Y = dVar4;
    dVar4 = (param_2->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
    (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.X =
         (param_2->_Anchors).Value.Maximum.field0_0x0._s_0.X;
    (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.Y = dVar4;
    (this->AnchorsAttr).bIsSet = (param_2->_Anchors).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnchorsAttr).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Anchors).Getter);
  }
  if ((param_2->_Alignment).bIsSet != false) {
    dVar4 = (param_2->_Alignment).Value.field0_0x0._s_0.Y;
    (this->AlignmentAttr).Value.field0_0x0._s_0.X = (param_2->_Alignment).Value.field0_0x0._s_0.X;
    (this->AlignmentAttr).Value.field0_0x0._s_0.Y = dVar4;
    (this->AlignmentAttr).bIsSet = (param_2->_Alignment).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AlignmentAttr).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Alignment).Getter);
  }
  if ((param_2->_AutoSize).bIsSet != false) {
    (this->AutoSizeAttr).Value = (param_2->_AutoSize).Value;
    (this->AutoSizeAttr).bIsSet = (param_2->_AutoSize).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AutoSizeAttr).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_AutoSize).Getter);
  }
  pTVar8 = &param_2->_ZOrder;
  if ((param_2->_ZOrder).bIsSet == false) {
    pTVar8 = (TOptional<float> *)&this->ZOrder;
  }
  this->ZOrder = pTVar8->TypedValue;
  return;
}

// Construct @ 1428f82c0

void __thiscall SGridPanel::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  FSlot *pFVar5;
  
  TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
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
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  plVar4 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar4 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar4;
  plVar4 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar4 = plVar1;
  }
  *(int *)plVar1 = (int)*plVar4;
  if ((param_2->_Column).bIsSet != false) {
    iVar3 = (param_2->_Column).TypedValue;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    this->ColumnParam = iVar3;
  }
  if ((param_2->_ColumnSpan).bIsSet != false) {
    iVar3 = (param_2->_ColumnSpan).TypedValue;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    this->ColumnSpanParam = iVar3;
  }
  if ((param_2->_Row).bIsSet != false) {
    iVar3 = (param_2->_Row).TypedValue;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    this->RowParam = iVar3;
  }
  if ((param_2->_RowSpan).bIsSet != false) {
    iVar3 = (param_2->_RowSpan).TypedValue;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    this->RowSpanParam = iVar3;
  }
  if ((param_2->_Layer).bIsSet != false) {
    this->LayerParam = (param_2->_Layer).TypedValue;
  }
  if ((param_2->_Nudge).bIsSet != false) {
    dVar2 = (param_2->_Nudge).TypedValue.field0_0x0._s_0.Y;
    (this->NudgeParam).field0_0x0._s_0.X = (param_2->_Nudge).TypedValue.field0_0x0._s_0.X;
    (this->NudgeParam).field0_0x0._s_0.Y = dVar2;
  }
  return;
}

// Construct @ 1428f83b0

void __thiscall
SResponsiveGridPanel::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FSlot *pFVar4;
  TArray<SResponsiveGridPanel::FSlot::FColumnLayout,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<SResponsiveGridPanel::FSlot::FColumnLayout,TSizedDefaultAllocator<32>_> *pTVar6;
  
  TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if ((char)param_2->_padding_ != '\0') {
    pFVar4 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar4 = (FSlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar4->_padding_,
             (TAttribute<FMargin> *)&param_2->_padding_,None);
  }
  plVar3 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar3 = &this->_padding_;
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  *(int *)&this->_padding_ = (int)*plVar3;
  plVar3 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar3 = plVar1;
  }
  pTVar5 = &param_2->ColumnLayouts;
  pTVar6 = &this->ColumnLayouts;
  *(int *)plVar1 = (int)*plVar3;
  if (pTVar6 != pTVar5) {
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ColumnLayouts).ArrayNum = (param_2->ColumnLayouts).ArrayNum;
    (this->ColumnLayouts).ArrayMax = (param_2->ColumnLayouts).ArrayMax;
    (param_2->ColumnLayouts).ArrayNum = 0;
    (param_2->ColumnLayouts).ArrayMax = 0;
  }
  return;
}

// Construct @ 1428f8470

void __thiscall SScrollBox::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  FSlot *pFVar4;
  
  TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if (param_2->field_0x28 != '\0') {
    pFVar4 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar4 = (FSlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar4->_padding_,
             (TAttribute<FMargin> *)&param_2->field_0x18,None);
  }
  puVar1 = (undefined4 *)((longlong)&this->_padding_ + 4);
  plVar2 = (longlong *)&param_2->field_0x48;
  if (param_2->field_0x4c == '\0') {
    plVar2 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar2;
  puVar3 = (undefined4 *)&param_2->field_0x50;
  if (param_2->field_0x54 == '\0') {
    puVar3 = puVar1;
  }
  *puVar1 = *puVar3;
  TResizingWidgetSlotMixin<SScrollBox::FSlot>::ConstructMixin
            ((TResizingWidgetSlotMixin<SScrollBox::FSlot> *)&this->_padding_,param_1,
             (FSlotArgumentsMixin *)&param_2->field_0x58);
  return;
}

// Construct @ 1428f8500

void __thiscall
SSplitter2x2::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  
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
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  if ((param_2->_Percentage).bIsSet != false) {
    dVar4 = (param_2->_Percentage).Value.field0_0x0._s_0.Y;
    (this->PercentageAttribute).Value.field0_0x0._s_0.X =
         (param_2->_Percentage).Value.field0_0x0._s_0.X;
    (this->PercentageAttribute).Value.field0_0x0._s_0.Y = dVar4;
    (this->PercentageAttribute).bIsSet = (param_2->_Percentage).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PercentageAttribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Percentage).Getter);
  }
  return;
}

// Construct @ 1428f85c0

void __thiscall SSplitter::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  char cVar5;
  FReadAccessScope local_28;
  
  lVar1 = param_2->_padding_;
  if (lVar1 != 0) {
    lVar2 = param_2->_padding_;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = lVar1;
    this->_padding_ = lVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  if ((param_2->_Value).bIsSet != false) {
    (this->SizeValue).Value = (param_2->_Value).Value;
    (this->SizeValue).bIsSet = (param_2->_Value).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Value).Getter);
  }
  if ((param_2->_Resizable).bIsSet != false) {
    if (&param_2->_Resizable != &this->bIsResizable) {
      (this->bIsResizable).TypedValue = (param_2->_Resizable).TypedValue;
      (this->bIsResizable).bIsSet = true;
    }
  }
  (this->MinSizeValue).Value = (param_2->_MinSize).Value;
  (this->MinSizeValue).bIsSet = (param_2->_MinSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinSizeValue).Getter,&(param_2->_MinSize).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->_OnSlotResized,
             &local_28);
  if ((*(int *)&(param_2->_OnSlotResized).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(param_2->_OnSlotResized).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    if (cVar5 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlotResized_Handler,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->_OnSlotResized);
      goto LAB_1428f86e8;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1428f86e8:
  if ((param_2->_SizeRule).bIsSet != false) {
    (this->SizingRule).Value = (param_2->_SizeRule).Value;
    (this->SizingRule).bIsSet = (param_2->_SizeRule).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizingRule).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_SizeRule).Getter);
  }
  return;
}

// RegisterAttributes @ 142988610

void __cdecl SScrollBox::FSlot::RegisterAttributes(FContainerInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res10,"Slot.Padding");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_1429886ac;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_1429886ac:
  TResizingWidgetSlotMixin<SScrollBox::FSlot>::RegisterAttributesMixin(param_1);
  return;
}

// SetAutoWidth @ 14298e640

void __thiscall SHorizontalBox::FSlot::SetAutoWidth(FSlot *this)

{
  FAuto *pFVar1;
  FSizeParam local_98;
  undefined1 local_50 [16];
  undefined1 local_40 [32];
  undefined1 local_20 [24];
  
  pFVar1 = FAuto::FAuto((FAuto *)local_50);
  local_98.SizeRule = *(ESizeRule *)pFVar1;
  local_98.Value.Value = *(float *)&pFVar1->field_0x8;
  local_98.Value.bIsSet = (bool)pFVar1->field_0xc;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98.Value.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->field_0x10);
  local_98.ShrinkValue.Value = *(float *)&pFVar1->field_0x28;
  local_98.ShrinkValue.bIsSet = (bool)pFVar1->field_0x2c;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98.ShrinkValue.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar1->field_0x30);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::SetSizeParam
            ((TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)&this->field_0x40,&local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  if ((void *)local_40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return;
}

// SetZOrder @ 14299f9b0

void __thiscall SConstraintCanvas::FSlot::SetZOrder(FSlot *this,float param_1)

{
  FSlateInvalidationWidgetIndex FVar1;
  FSlot *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  SWidget *pSVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  ulonglong uVar9;
  
  pSVar6 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar6 == (SWidget *)0x0) {
    this->ZOrder = param_1;
    `SConstraintCanvas::FSlot::SetZOrder'::__l41::<lambda_1>::operator()(local_res18);
    return;
  }
  if (param_1 == this->ZOrder) {
    return;
  }
  lVar11 = (longlong)(int)pSVar6[1].FastPathProxyHandle.WidgetIndex;
  bVar4 = false;
  uVar9 = 0;
  uVar12 = 0;
  uVar7 = 0;
  uVar8 = uVar9;
  uVar13 = uVar9;
  if (lVar11 < 1) {
LAB_14299fa87:
    if (((int)uVar12 < (int)pSVar6[1].FastPathProxyHandle.WidgetIndex) && (bVar4))
    goto LAB_14299fab7;
  }
  else {
    do {
      uVar12 = (uint)uVar13;
      uVar5 = uVar7;
      if ((int)uVar12 < (int)pSVar6[1].FastPathProxyHandle.WidgetIndex) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FSlot **)
           (*(longlong *)&pSVar6[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId + uVar8 * 8)
          == this) {
        bVar4 = true;
        break;
      }
      uVar12 = uVar12 + 1;
      uVar8 = uVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      bVar4 = false;
    } while ((longlong)uVar8 < lVar11);
    if (-1 < (int)uVar12) goto LAB_14299fa87;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("OwnerChildren.IsValidIndex(ChildIndexToMove) && bFound",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SConstraintCanvas.cpp"
                     ,0x35,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14299fab7:
  FVar1 = pSVar6[1].FastPathProxyHandle.WidgetIndex;
  uVar8 = uVar9;
  if (0 < (int)FVar1) {
    do {
      uVar7 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar7 < (int)pSVar6[1].FastPathProxyHandle.WidgetIndex) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FSlot **)
                (*(longlong *)&pSVar6[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId +
                uVar8 * 8);
      if ((param_1 < pFVar2->ZOrder) && (pFVar2 != this)) break;
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)uVar7;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)(int)FVar1);
  }
  if ((int)FVar1 <= (int)uVar7) {
    uVar10 = (int)FVar1 - 1;
    uVar5 = 0;
    if ((int)uVar10 < (int)pSVar6[1].FastPathProxyHandle.WidgetIndex) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(FSlot **)
         (*(longlong *)&pSVar6[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId +
         (longlong)(int)uVar10 * 8) == this) {
      this->ZOrder = param_1;
      return;
    }
  }
  this->ZOrder = param_1;
  if (uVar12 != uVar7) {
    if ((int)uVar12 < (int)uVar7) {
      uVar7 = uVar7 - 1;
    }
    TPanelChildren<SConstraintCanvas::FSlot>::Move
              ((TPanelChildren<SConstraintCanvas::FSlot> *)(pSVar6 + 1),uVar12,uVar7);
  }
  return;
}

// FSlot @ 1429b9980

FSlot * __thiscall SCanvas::FSlot::FSlot(FSlot *this)

{
  TSlateSlotAttribute<UE::Math::TVector2<double>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlot *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SCanvas::FSlot>__;
  pTVar1 = &this->Position;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  *pTVar1 = (TSlateSlotAttribute<UE::Math::TVector2<double>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
             )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar4 = _finite(*(double *)&pTVar1->field_0x0);
  if (iVar4 == 0) {
LAB_1429b99f0:
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::VerifyNan'::__l17::<lambda_1>::operator()(local_res8);
  }
  else {
    iVar4 = _finite(*(double *)&(this->Position).field_0x8);
    if (iVar4 == 0) goto LAB_1429b99f0;
  }
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlot *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar1 = &this->Size;
  *(undefined8 *)&pTVar1->field_0x0 = 0x3ff0000000000000;
  *(undefined8 *)&(this->Size).field_0x8 = 0x3ff0000000000000;
  iVar4 = _finite(*(double *)&pTVar1->field_0x0);
  if (iVar4 != 0) {
    iVar4 = _finite(*(double *)&(this->Size).field_0x8);
    if (iVar4 != 0) goto LAB_1429b9a74;
  }
  local_res10[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res10);
LAB_1429b9a74:
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlot *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// FSlot @ 1429b9ac0

FSlot * __thiscall SWrapBox::FSlot::FSlot(FSlot *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__TSlotBase<SWrapBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *plVar1 = 0;
  this->_padding_ = 0;
  if ((plVar1 < pFVar4) || (pFVar4 + 1 <= plVar1)) {
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
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TSlotBase<SWrapBox::FSlot>__;
  this->_padding_ = (longlong)&_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  (this->SlotFillLineWhenSizeLessThan).bIsSet = false;
  this->bSlotFillEmptySpace = false;
  this->bSlotForceNewLine = false;
  return this;
}

// Construct @ 1429d06f0

void __thiscall SCanvas::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if ((param_2->_Size).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->Size,(ISlateAttributeContainer *)&this->_padding_,&param_2->_Size,None);
  }
  if ((param_2->_Position).bIsSet != false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->Position,(ISlateAttributeContainer *)&this->_padding_,&param_2->_Position,
             None);
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar2;
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = plVar1;
  }
  *(int *)plVar1 = (int)*plVar2;
  return;
}

// Construct @ 1429d0780

void __thiscall
SUniformGridPanel::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  
  lVar2 = *(longlong *)&param_2->field_0x8;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)&param_2->field_0x10;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = lVar2;
    this->_padding_ = lVar3;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  puVar1 = (undefined4 *)((longlong)&this->_padding_ + 4);
  plVar5 = (longlong *)&param_2->field_0x18;
  if (param_2->field_0x1c == '\0') {
    plVar5 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar5;
  puVar6 = (undefined4 *)&param_2->field_0x20;
  if (param_2->field_0x24 == '\0') {
    puVar6 = puVar1;
  }
  *puVar1 = *puVar6;
  return;
}

// Construct @ 1429d0840

void __thiscall SWrapBox::FSlot::Construct(FSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  TOptional<bool> *pTVar3;
  FSlot *pFVar4;
  
  TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if ((char)param_2->_padding_ != '\0') {
    pFVar4 = this;
    if (&this->_padding_ == (longlong *)0x0) {
      pFVar4 = (FSlot *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->_padding_,(ISlateAttributeContainer *)&pFVar4->_padding_,
             (TAttribute<FMargin> *)&param_2->_padding_,None);
  }
  plVar1 = (longlong *)((longlong)&this->_padding_ + 4);
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = &this->_padding_;
  }
  *(int *)&this->_padding_ = (int)*plVar2;
  plVar2 = &param_2->_padding_;
  if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
    plVar2 = plVar1;
  }
  *(int *)plVar1 = (int)*plVar2;
  if ((param_2->_FillLineWhenSizeLessThan).bIsSet != false) {
    if (&param_2->_FillLineWhenSizeLessThan != &this->SlotFillLineWhenSizeLessThan) {
      (this->SlotFillLineWhenSizeLessThan).TypedValue =
           (param_2->_FillLineWhenSizeLessThan).TypedValue;
      (this->SlotFillLineWhenSizeLessThan).bIsSet = true;
    }
  }
  pTVar3 = &param_2->_FillEmptySpace;
  if ((param_2->_FillEmptySpace).bIsSet == false) {
    pTVar3 = (TOptional<bool> *)&this->bSlotFillEmptySpace;
  }
  this->bSlotFillEmptySpace = pTVar3->TypedValue;
  pTVar3 = &param_2->_ForceNewLine;
  if ((param_2->_ForceNewLine).bIsSet == false) {
    pTVar3 = (TOptional<bool> *)&this->bSlotForceNewLine;
  }
  this->bSlotForceNewLine = pTVar3->TypedValue;
  return;
}

// RegisterAttributes @ 142a04e80

void __cdecl SCanvas::FSlot::RegisterAttributes(FContainerInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *this;
  FName local_res10;
  FName local_res18;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (param_1,&local_20,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142a04f11;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142a04f11:
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Position");
  this = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                   (param_1,&local_20,*pFVar1,0x10,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(&local_res18,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (this,*pFVar1);
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

// operator() @ 150494a90

bool __thiscall `SConstraintCanvas::FSlot::SetZOrder'::__l41::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5074335080894169183>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5074335080894169183>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

