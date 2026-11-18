// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// SAttributeLeftWidget_Parent @ 142549960

SAttributeLeftWidget_Parent * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Parent::SAttributeLeftWidget_Parent
          (SAttributeLeftWidget_Parent *this)

{
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  SAttributeLeftWidget_Parent *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  pTVar1 = &this->IntAttributeA;
  this->_padding_ = (longlong)&___7SAttributeLeftWidget_Parent_Private_Slate_UE__6B_;
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
      pSVar4 = (SAttributeLeftWidget_Parent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Parent,void>'::__l2::
    <lambda_1>::operator()(local_res8);
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
      pSVar4 = (SAttributeLeftWidget_Parent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Parent,void>'::__l2::
    <lambda_1>::operator()(local_res10);
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
      pSVar4 = (SAttributeLeftWidget_Parent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res18[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Parent,void>'::__l2::
    <lambda_1>::operator()(local_res18);
  }
  pTVar1 = &this->IntAttributeD;
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
      pSVar4 = (SAttributeLeftWidget_Parent *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Parent,void>'::__l2::
    <lambda_1>::operator()(local_res20);
  }
  (this->IntManagedAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntManagedAttributes).ArrayNum = 0;
  (this->IntManagedAttributes).ArrayMax = 0;
  return this;
}

// ComputeDesiredSize @ 1425687b0

TVector2<double> * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Parent::ComputeDesiredSize
          (SAttributeLeftWidget_Parent *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 142582b50

FSlateWidgetClassData * __cdecl
UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SAttributeLeftWidget_Parent");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14258a220

FSlateWidgetClassData * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Parent::GetWidgetClass(SAttributeLeftWidget_Parent *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SAttributeLeftWidget_Parent");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Parent::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 14258cf20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Private::SAttributeLeftWidget_Parent::OnPaint
          (SAttributeLeftWidget_Parent *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  return param_5;
}

// PrivateRegisterAttributes @ 14258d6c0

void __cdecl
UE::Slate::Private::SAttributeLeftWidget_Parent::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeD",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x224,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_14258d757:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14258d757;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeC",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_38,*pFVar1,0x220,(FInvalidateWidgetReasonAttribute *)local_28);
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeD",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite(pFVar2,*pFVar1);
  if ((int)uStack_18 == 0) {
LAB_14258d805:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14258d805;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeB",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x21c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_14258d88a:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14258d88a;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeA",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_28);
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeB",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite(pFVar2,*pFVar1);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14258d942;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14258d942:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeD",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
            (param_1,*pFVar1,(FInvalidateWidgetReasonAttribute *)local_28);
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

