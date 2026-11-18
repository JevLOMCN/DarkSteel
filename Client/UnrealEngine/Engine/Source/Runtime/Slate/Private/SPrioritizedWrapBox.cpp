// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// SPrioritizedWrapBox @ 1427b5db0

SPrioritizedWrapBox * __thiscall SPrioritizedWrapBox::SPrioritizedWrapBox(SPrioritizedWrapBox *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<TOptional<float>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  FName FVar1;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SPrioritizedWrapBox *pSVar5;
  FName *pFVar6;
  FChildArranger *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  
  SPanel::SPanel((SPanel *)this);
  _X = __real_4059000000000000;
  this->_padding_ = (longlong)&___7SPrioritizedWrapBox__6B_;
  this_00 = &this->PreferredSize;
  *(undefined4 *)&this_00->field_0x0 = 0x42c80000;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SPrioritizedWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SPrioritizedWrapBox,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_01 = &this->MinLineHeight;
  (this->MinLineHeight).field_0x4 = 0;
  if ((this_01 < this) || (this + 1 <= this_01)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SPrioritizedWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    local_res18[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SPrioritizedWrapBox,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  this->LinePadding = 0.0;
  this->bGroupedWrapping = false;
  pFVar6 = ::FName::FName(&local_res20,5,L"Slots",FNAME_Add);
  FVar1 = *pFVar6;
  (this->Slots)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Slots)._padding_ = (longlong)this;
  (this->Slots)._padding_ = (longlong)FVar1;
  *(undefined2 *)&(this->Slots)._padding_ = 0xdc00;
  if (FVar1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SPrioritizedWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  (this->Slots)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SPrioritizedWrapBox____6B_;
  (this->Slots).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).Children.ArrayNum = 0;
  (this->Slots).Children.ArrayMax = 0;
  pFVar7 = ::operator_new(0x78);
  if (pFVar7 != (FChildArranger *)0x0) {
    (pFVar7->LastDesiredSize).field0_0x0 = (TVector2<float>_u_0)0x0;
    *(undefined8 *)&pFVar7->LastLinePadding = 0;
    *(undefined4 *)&(pFVar7->WrappableSortedBlockView).field_0xc = 0;
    (pFVar7->ChildProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->ChildProxies).ArrayNum = 0;
    (pFVar7->ChildProxies).ArrayMax = 0;
    pFVar7->NumPreferredWrappingChildren = 0;
    pFVar7->NumParentWrappingChildren = 0;
    pFVar7->LastPreferredLineLength = -1;
    pFVar7->LastParentLineLength = -1;
    (pFVar7->LastParentSize).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    (pFVar7->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Blocks).ArrayNum = 0;
    (pFVar7->Blocks).ArrayMax = 0;
    (pFVar7->SortedBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->SortedBlocks).ArrayNum = 0;
    (pFVar7->SortedBlocks).ArrayMax = 0;
    (pFVar7->WrappableSortedBlockView).DataPtr = (FBlock *)0x0;
    (pFVar7->WrappableSortedBlockView).ArrayNum = 0;
    (pFVar7->BlockLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->BlockLines).ArrayNum = 0;
    (pFVar7->BlockLines).ArrayMax = 0;
    (this->ChildArranger).Ptr = pFVar7;
    return this;
  }
  (this->ChildArranger).Ptr = (FChildArranger *)0x0;
  return this;
}

// ~SPrioritizedWrapBox @ 1427ba990

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SPrioritizedWrapBox::~SPrioritizedWrapBox(SPrioritizedWrapBox *this)

{
  FChildArranger *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7SPrioritizedWrapBox__6B_;
  pFVar1 = (this->ChildArranger).Ptr;
  if (pFVar1 != (FChildArranger *)0x0) {
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlockLine,int>
              ((FBlockLine *)(pFVar1->BlockLines).AllocatorInstance.Data,
               (pFVar1->BlockLines).ArrayNum);
    pFVar2 = (pFVar1->BlockLines).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)(pFVar1->SortedBlocks).AllocatorInstance.Data,
               (pFVar1->SortedBlocks).ArrayNum);
    pFVar2 = (pFVar1->SortedBlocks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock,int>
              ((FBlock *)(pFVar1->Blocks).AllocatorInstance.Data,(pFVar1->Blocks).ArrayNum);
    pFVar2 = (pFVar1->Blocks).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::Slate::PrioritizedWrapBox::FChildArranger::FSlotProxy,int>
              ((FSlotProxy *)(pFVar1->ChildProxies).AllocatorInstance.Data,
               (pFVar1->ChildProxies).ArrayNum);
    pFVar2 = (pFVar1->ChildProxies).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x78);
  }
  DestructItems<TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_>,int>
            ((TUniquePtr<SPrioritizedWrapBox::FSlot,TDefaultDelete<SPrioritizedWrapBox::FSlot>_> *)
             (this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
  pFVar2 = (this->Slots).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Slots);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 1427ca000

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FScopedWidgetSlotArguments * __thiscall
SPrioritizedWrapBox::AddSlot
          (SPrioritizedWrapBox *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FScopedWidgetSlotArguments *pFVar4;
  
  pFVar3 = ::operator_new(0x70);
  if (pFVar3 == (FSlot *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  else {
    pFVar3 = FSlot::FSlot(pFVar3);
    __return_storage_ptr__->_padding_ = (longlong)pFVar3;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    if (pFVar3 != (FSlot *)0x0) goto LAB_1427ca073;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar1)();
    return pFVar4;
  }
LAB_1427ca073:
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->Children = &this->Slots;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1427ed030

TVector2<double> * __thiscall
SPrioritizedWrapBox::ComputeDesiredSize
          (SPrioritizedWrapBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FChildArranger *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  bool bVar5;
  TVector2<double> local_28;
  TVector2<double> local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId966,"SPrioritizedWrapBox::ComputeDesiredSize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
               ,0x3c6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId966);
  }
  if (((this->ChildArranger).Ptr == (FChildArranger *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildArranger.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
                         ,0x3c8,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar1)();
    return pTVar4;
  }
  this_00 = (this->ChildArranger).Ptr;
  if (this->bGroupedWrapping == false) {
    pTVar4 = UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<0>
                       (this_00,&local_18,this,&this->Slots);
  }
  else {
    pTVar4 = UE::Slate::PrioritizedWrapBox::FChildArranger::GetDesiredSize<1>
                       (this_00,&local_28,this,&this->Slots);
  }
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Construct @ 1427ef500

void __thiscall SPrioritizedWrapBox::Construct(SPrioritizedWrapBox *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  TArray<SPrioritizedWrapBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->PreferredSize,(SWidget *)this,&param_1->_PreferredSize,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinLineHeight,(SWidget *)this,&param_1->_MinLineHeight,None);
  this->LinePadding = param_1->_LinePadding;
  this->bGroupedWrapping = param_1->_GroupedWrapping;
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SPrioritizedWrapBox::FSlot>::AddSlots(&this->Slots,&local_18);
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  SWidget::SetClipping((SWidget *)this,ClipToBounds);
  return;
}

// GetChildren @ 14280ed30

FChildren * __thiscall SPrioritizedWrapBox::GetChildren(SPrioritizedWrapBox *this)

{
  return (FChildren *)&this->Slots;
}

// GetPrivateWidgetClass @ 142813d90

FSlateWidgetClassData * __cdecl SPrioritizedWrapBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18 [2];
  FContainerInitializer local_58;
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&local_res10,"SPrioritizedWrapBox");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&local_res8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = ::FName::FName(local_res18,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_58,*pFVar1,0x230);
  FSlot::RegisterAttributes(&local_58);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,0xd,L"PreferredSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142813f2c;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142813f2c:
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,0xd,L"MinLineHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)local_38);
  if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
  atexit(`SPrioritizedWrapBox::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1428171c0

FSlateWidgetClassData * __thiscall SPrioritizedWrapBox::GetWidgetClass(SPrioritizedWrapBox *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_58;
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&FStackX_10,"SPrioritizedWrapBox");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = ::FName::FName(aFStackX_18,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_58,*pFVar1,0x230);
  FSlot::RegisterAttributes(&FStack_58);
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,0xd,L"PreferredSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if ((int)uStack_28 != 0) {
    if (FStack_30.Data == (FScriptContainerElement *)0x0) goto LAB_142813f2c;
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
LAB_142813f2c:
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,0xd,L"MinLineHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SPrioritizedWrapBox::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPrioritizedWrapBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 142823840

void __thiscall
SPrioritizedWrapBox::OnArrangeChildren
          (SPrioritizedWrapBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId975,"SPrioritizedWrapBox::OnArrangeChildren",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
               ,0x3cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId975);
  }
  if (((this->ChildArranger).Ptr == (FChildArranger *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildArranger.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SPrioritizedWrapBox.cpp"
                         ,0x3d1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Slate::PrioritizedWrapBox::FChildArranger::Arrange((this->ChildArranger).Ptr,param_1,param_2);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrivateRegisterAttributes @ 14282dc60

void __cdecl SPrioritizedWrapBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FContainerInitializer local_48;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  pFVar1 = ::FName::FName(&local_res10,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_48,*pFVar1,0x230);
  FSlot::RegisterAttributes(&local_48);
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"PreferredSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14282dd35;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14282dd35:
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"MinLineHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)local_28);
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

// RemoveSlot @ 142832990

int __thiscall
SPrioritizedWrapBox::RemoveSlot(SPrioritizedWrapBox *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SPrioritizedWrapBox::FSlot>::Remove(&this->Slots,param_1);
  return iVar1;
}

