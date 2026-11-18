// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// SAttributeLeftWidget_OnInvalidationParent @ 1425497f0

SAttributeLeftWidget_OnInvalidationParent * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::
SAttributeLeftWidget_OnInvalidationParent(SAttributeLeftWidget_OnInvalidationParent *this)

{
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  SAttributeLeftWidget_OnInvalidationParent *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  pTVar1 = &this->IntAttributeA;
  this->_padding_ = (longlong)&___7SAttributeLeftWidget_OnInvalidationParent_Private_Slate_UE__6B_;
  pSVar4 = this + 1;
  *(undefined4 *)&pTVar1->field_0x0 = 99;
  if ((pTVar1 < this) || (pSVar4 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar4 = (SAttributeLeftWidget_OnInvalidationParent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,void>'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pTVar1 = &this->IntAttributeB;
  *(undefined4 *)&pTVar1->field_0x0 = 99;
  if ((pTVar1 < this) || (pSVar4 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar4 = (SAttributeLeftWidget_OnInvalidationParent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,void>'::
    __l2::<lambda_1>::operator()(local_res10);
  }
  pTVar1 = &this->IntAttributeC;
  *(undefined4 *)&pTVar1->field_0x0 = 99;
  if ((pTVar1 < this) || (pSVar4 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar4 = (SAttributeLeftWidget_OnInvalidationParent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,void>'::
    __l2::<lambda_1>::operator()(local_res18);
  }
  this->CallbackValueA = 0x22b;
  this->CallbackIsConstructedValueB = 0;
  this->CallbackIsConstructedValueC = 0;
  this->CallbackValueB = 0x22b;
  this->CallbackValueC = 0x22b;
  this->CallbackIsConstructedValueA = 0;
  return this;
}

// ComputeDesiredSize @ 142568790

TVector2<double> * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::ComputeDesiredSize
          (SAttributeLeftWidget_OnInvalidationParent *this,TVector2<double> *__return_storage_ptr__,
          float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// Construct @ 1425689d0

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::Construct
          (SAttributeLeftWidget_OnInvalidationParent *this,FArguments *param_1)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_4_ = 0x58;
  local_30[4] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeA,(SWidget *)this,(TAttribute<int> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  local_30._0_4_ = 0x58;
  local_18 = 0;
  local_30[4] = true;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeB,(SWidget *)this,(TAttribute<int> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  local_30._0_4_ = 0x58;
  local_18 = 0;
  local_30[4] = true;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeC,(SWidget *)this,(TAttribute<int> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// GetPrivateWidgetClass @ 142582a60

FSlateWidgetClassData * __cdecl
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SAttributeLeftWidget_OnInvalidationParent");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass'
             ::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14258a210

FSlateWidgetClassData * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetWidgetClass
          (SAttributeLeftWidget_OnInvalidationParent *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SAttributeLeftWidget_OnInvalidationParent");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass'
             ::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 14258cf10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::OnPaint
          (SAttributeLeftWidget_OnInvalidationParent *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  return param_5;
}

// PrivateRegisterAttributes @ 14258d410

void __cdecl
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes
          (FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FName local_res10;
  FDelegateAllocation local_58;
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeA",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_14258d4f9:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258d4f9;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeB",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14258d5ce;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14258d5ce:
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeC",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x220,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
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

// SetAttributeA @ 1425907e0

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::SetAttributeA
          (SAttributeLeftWidget_OnInvalidationParent *this,TAttribute<int> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeA,(SWidget *)this,param_1,None);
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

// SetAttributeB @ 142590830

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::SetAttributeB
          (SAttributeLeftWidget_OnInvalidationParent *this,TAttribute<int> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeB,(SWidget *)this,param_1,None);
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

// SetAttributeC @ 142590880

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::SetAttributeC
          (SAttributeLeftWidget_OnInvalidationParent *this,TAttribute<int> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IntAttributeC,(SWidget *)this,param_1,None);
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

// SetCallbackValue @ 142590a80

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::SetCallbackValue
          (SAttributeLeftWidget_OnInvalidationParent *this,int param_1)

{
  this->CallbackValueA = param_1;
  this->CallbackValueB = param_1;
  this->CallbackValueC = param_1;
  return;
}

