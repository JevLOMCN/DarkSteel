// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// ComputeDesiredSize @ 142568770

TVector2<double> * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::ComputeDesiredSize
          (SAttributeLeftWidget_OnInvalidationChild *this,TVector2<double> *__return_storage_ptr__,
          float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 142582830

FSlateWidgetClassData * __cdecl
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FDelegateAllocation local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SAttributeLeftWidget_OnInvalidationChild");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&local_res18,"IntAttributeA");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&local_res8,*pFVar1,ReplacePrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_28);
      local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&local_res18,"IntAttributeB");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&local_res8,*pFVar1,ExecuteAfterPrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_28);
      local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&local_res18,"IntAttributeC");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&local_res8,*pFVar1,ExecuteBeforePrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_28);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass'::
             __l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14258a200

FSlateWidgetClassData * __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetWidgetClass
          (SAttributeLeftWidget_OnInvalidationChild *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FDelegateAllocation FStack_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SAttributeLeftWidget_OnInvalidationChild");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SAttributeLeftWidget_OnInvalidationParent::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FStack_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&FStack_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&FStackX_18,"IntAttributeA");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&FStackX_8,*pFVar1,ReplacePrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_28);
      FStack_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&FStack_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&FStackX_18,"IntAttributeB");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&FStackX_8,*pFVar1,ExecuteAfterPrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_28);
      FStack_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_28.DelegateSize = 0;
      puVar3 = Core::Private::DelegateAllocate(0x20,&FStack_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
                   ::_vftable_;
      }
      pFVar1 = ::FName::FName(&FStackX_18,"IntAttributeC");
      FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
                (&FStackX_8,*pFVar1,ExecuteBeforePrevious,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &FStack_28);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass'::
             __l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 14258cf00

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::OnPaint
          (SAttributeLeftWidget_OnInvalidationChild *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  return param_5;
}

// PrivateRegisterAttributes @ 14258d2c0

void __cdecl
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes
          (FInitializer *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FName *pFVar3;
  FName local_res10;
  FDelegateAllocation local_18;
  
  local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_18.DelegateSize = 0;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  pFVar3 = ::FName::FName(&local_res10,"IntAttributeA");
  FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
            (param_1,*pFVar3,ReplacePrevious,
             (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             &local_18);
  local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_18.DelegateSize = 0;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  pFVar3 = ::FName::FName(&local_res10,"IntAttributeB");
  FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
            (param_1,*pFVar3,ExecuteAfterPrevious,
             (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             &local_18);
  local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_18.DelegateSize = 0;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  pFVar3 = ::FName::FName(&local_res10,"IntAttributeC");
  FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
            (param_1,*pFVar3,ExecuteBeforePrevious,
             (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             &local_18);
  return;
}

// SetCallbackValue @ 142590a50

void __thiscall
UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::SetCallbackValue
          (SAttributeLeftWidget_OnInvalidationChild *this,int param_1)

{
  *(int *)((longlong)&this->_padding_ + 4) = param_1;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_1;
  this->OverrideCallbackValueA = param_1;
  this->OverrideCallbackValueB = param_1;
  this->OverrideCallbackValueC = param_1;
  return;
}

