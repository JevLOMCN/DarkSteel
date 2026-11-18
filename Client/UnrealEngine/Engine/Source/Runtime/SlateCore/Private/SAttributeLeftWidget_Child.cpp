// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// SAttributeLeftWidget_Child @ 1425495c0

SAttributeLeftWidget_Child * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Child::SAttributeLeftWidget_Child
          (SAttributeLeftWidget_Child *this)

{
  TSlateAttribute<int,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  SAttributeLeftWidget_Child *pSVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  SAttributeLeftWidget_Parent::SAttributeLeftWidget_Parent((SAttributeLeftWidget_Parent *)this);
  this->_padding_ = (longlong)&___7SAttributeLeftWidget_Child_Private_Slate_UE__6B_;
  pSVar5 = this + 1;
  pTVar1 = &this->IntAttributeH;
  *(undefined4 *)&pTVar1->field_0x0 = 99;
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  pTVar2 = &this->IntAttributeI;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pSVar5 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar4) {
    local_res8[0] = bVar4;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Child,void>'::__l2::<lambda_1>
    ::operator()(local_res8);
  }
  pTVar2 = &this->IntAttributeJ;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pSVar5 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar4) {
    local_res10[0] = bVar4;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Child,void>'::__l2::<lambda_1>
    ::operator()(local_res10);
  }
  pTVar2 = &this->IntAttributeK;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pSVar5 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar4) {
    local_res18[0] = bVar4;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Child,void>'::__l2::<lambda_1>
    ::operator()(local_res18);
  }
  pTVar2 = &this->IntAttributeL;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pSVar5 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar4) {
    local_res20[0] = bVar4;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Child,void>'::__l2::<lambda_1>
    ::operator()(local_res20);
  }
  pTVar2 = &this->IntAttributeM;
  *(undefined4 *)&pTVar2->field_0x0 = 99;
  if ((pTVar2 < this) || (pSVar5 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SAttributeLeftWidget_Child *)(*pcVar3)();
      return pSVar5;
    }
  }
  bVar4 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar2,(SWidget *)this);
  if (!bVar4) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::Slate::Private::SAttributeLeftWidget_Child,void>'::__l2::<lambda_1>
    ::operator()(local_28);
  }
  return this;
}

// GetPrivateWidgetClass @ 142582740

FSlateWidgetClassData * __cdecl
UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SAttributeLeftWidget_Child");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SAttributeLeftWidget_Parent::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14258a1f0

FSlateWidgetClassData * __thiscall
UE::Slate::Private::SAttributeLeftWidget_Child::GetWidgetClass(SAttributeLeftWidget_Child *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SAttributeLeftWidget_Child");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SAttributeLeftWidget_Parent::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_Child::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// PrivateRegisterAttributes @ 14258cf70

void __cdecl
UE::Slate::Private::SAttributeLeftWidget_Child::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  FName local_res10;
  FName local_res18 [2];
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeJ",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x240,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(local_res18,"IntAttributeA");
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite(pFVar2,*pFVar1);
  if ((int)uStack_28 == 0) {
LAB_14258d01d:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258d01d;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeK",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_48,*pFVar1,0x244,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_14258d0a2:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258d0a2;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeI",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x23c,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(local_res18,"IntAttributeB");
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite(pFVar2,*pFVar1);
  if ((int)uStack_28 == 0) {
LAB_14258d145:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14258d145;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeL",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x248,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(local_res18,"IntAttributeC");
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite(pFVar2,*pFVar1);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14258d1f2;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14258d1f2:
  local_38[0] = Visibility;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"IntAttributeM",FNAME_Add);
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x24c,(FInvalidateWidgetReasonAttribute *)local_38);
  pFVar1 = ::FName::FName(local_res18,"Visibility");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite
                     (pFVar2,*pFVar1);
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::AffectVisibility(pFVar2);
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

