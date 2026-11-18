// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 211

// CloseButtonStyle'' @ 140f44210

void __cdecl `dynamic_initializer_for_'SWindowTitleBarArea::CloseButtonStyle__(void)

{
  FButtonStyle::FButtonStyle(&SWindowTitleBarArea::CloseButtonStyle);
  atexit(`dynamic_atexit_destructor_for_'SWindowTitleBarArea::CloseButtonStyle__);
  return;
}

// MaximizeButtonStyle'' @ 140f44240

void __cdecl `dynamic_initializer_for_'SWindowTitleBarArea::MaximizeButtonStyle__(void)

{
  FButtonStyle::FButtonStyle(&SWindowTitleBarArea::MaximizeButtonStyle);
  atexit(`dynamic_atexit_destructor_for_'SWindowTitleBarArea::MaximizeButtonStyle__);
  return;
}

// MinimizeButtonStyle'' @ 140f44270

void __cdecl `dynamic_initializer_for_'SWindowTitleBarArea::MinimizeButtonStyle__(void)

{
  FButtonStyle::FButtonStyle(&SWindowTitleBarArea::MinimizeButtonStyle);
  atexit(`dynamic_atexit_destructor_for_'SWindowTitleBarArea::MinimizeButtonStyle__);
  return;
}

// OnCloseButtonClicked'' @ 140f442a0

void __cdecl `dynamic_initializer_for_'SWindowTitleBarArea::OnCloseButtonClicked__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SWindowTitleBarArea::OnCloseButtonClicked__);
  return;
}

// RestoreButtonStyle'' @ 140f442c0

void __cdecl `dynamic_initializer_for_'SWindowTitleBarArea::RestoreButtonStyle__(void)

{
  FButtonStyle::FButtonStyle(&SWindowTitleBarArea::RestoreButtonStyle);
  atexit(`dynamic_atexit_destructor_for_'SWindowTitleBarArea::RestoreButtonStyle__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysInvalidate'' @ 140f442f0

void __cdecl _dynamic_initializer_for__CVarAlwaysInvalidate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysInvalidate,L"Slate.AlwaysInvalidate",&bAlwaysInvalidate,
             L"Forces invalidation panels to cache, but to always invalidate.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysInvalidate__);
  return;
}

// `dynamic_initializer_for_'CVarEnableInvalidationPanels'' @ 140f44340

void __cdecl _dynamic_initializer_for__CVarEnableInvalidationPanels__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ConsoleVariableEnableInvalidationPanelsChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableInvalidationPanels,L"Slate.EnableInvalidationPanels",
             &bInvalidationPanelsEnabled,
             L"Whether to attempt to cache any widgets through invalidation panels.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarEnableInvalidationPanels__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SCanvas'' @ 140f44480

void __cdecl _dynamic_initializer_for__ClassRegistration__SCanvas__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FName FStackX_20;
  FContainerInitializer FStack_68;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  ulonglong uStack_48;
  FAttributeEntry FStack_40;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return;
  }
  pFVar1 = FName::FName(&FStackX_10,"SCanvas");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  pFVar1 = FName::FName(&FStackX_18,8,L"Children",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_68,*pFVar1,0x218);
  auStack_58[0] = Paint;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = FName::FName(&FStackX_18,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&FStack_68,&FStack_40,*pFVar1,0x20,(FInvalidateWidgetReasonAttribute *)auStack_58);
  if ((int)uStack_48 != 0) {
    if (FStack_50.Data == (FScriptContainerElement *)0x0) goto LAB_1429ed0cb;
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
LAB_1429ed0cb:
  auStack_58[0] = Paint;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  uStack_48 = 0;
  pFVar1 = FName::FName(&FStackX_18,"Slot.Position");
  this = FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                   (&FStack_68,&FStack_40,*pFVar1,0x10,
                    (FInvalidateWidgetReasonAttribute *)auStack_58);
  pFVar1 = FName::FName(&FStackX_20,"Slot.Size");
  FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
            (this,*pFVar1);
  if (((int)uStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    uStack_48 = uStack_48 & 0xffffffff00000000;
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SCanvas::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SInvalidationPanel'' @ 140f44490

void __cdecl _dynamic_initializer_for__ClassRegistration__SInvalidationPanel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SInvalidationPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SInvalidationPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__STextBlock'' @ 140f444a0

void __cdecl _dynamic_initializer_for__ClassRegistration__STextBlock__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"STextBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      STextBlock::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`STextBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SUniformWrapPanel'' @ 140f444b0

void __cdecl _dynamic_initializer_for__ClassRegistration__SUniformWrapPanel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SUniformWrapPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SUniformWrapPanel::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SUniformWrapPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SWrapBox'' @ 140f444c0

void __cdecl _dynamic_initializer_for__ClassRegistration__SWrapBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SWrapBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SWrapBox::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SWrapBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateInvalidationPaint'' @ 140f444d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateInvalidationPaint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateInvalidationPaint ==
      (FThreadSafeStaticStat<FStat_STAT_SlateInvalidationPaint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateInvalidationPaint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateInvalidationPaint,*pFVar1,
               L"SInvalidationPanel::Paint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ViewportPaintTime'' @ 140f44560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ViewportPaintTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ViewportPaintTime == (FThreadSafeStaticStat<FStat_STAT_ViewportPaintTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ViewportPaintTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewportPaintTime,*pFVar1,L"Game UI Paint"
               ,"STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ViewportTickTime'' @ 140f445f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ViewportTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ViewportTickTime == (FThreadSafeStaticStat<FStat_STAT_ViewportTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ViewportTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewportTickTime,*pFVar1,L"Game UI Tick",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_SlateTextBlockCDS'' @ 140f44680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_SlateTextBlockCDS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_SlateTextBlockCDS == (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockCDS>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_SlateTextBlockCDS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_SlateTextBlockCDS,*pFVar1,
               L"STextBlock::ComputeDesiredSize","STATGROUP_SlateVerbose","STATCAT_Advanced",
               L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_SlateTextBlockOnPaint'' @ 140f44710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_SlateTextBlockOnPaint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_SlateTextBlockOnPaint ==
      (FThreadSafeStaticStat<FStat_Stat_SlateTextBlockOnPaint>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_SlateTextBlockOnPaint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_SlateTextBlockOnPaint,*pFVar1,
               L"STextBlock::OnPaint Time","STATGROUP_SlateVerbose","STATCAT_Advanced",
               L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StaticToolTipWrapWidth'' @ 140f447a0

void __cdecl _dynamic_initializer_for__StaticToolTipWrapWidth__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1000.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&StaticToolTipWrapWidth,L"Slate.ToolTipWrapWidth",local_res8,
             L"Width of Slate tool-tips before we wrap the tool-tip text",0);
  atexit(_dynamic_atexit_destructor_for__StaticToolTipWrapWidth__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h__Script_Slate_943136221'' @ 140f447f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h__Script_Slate_943136221__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Notifications_SProgressBar_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h__Script_Slate_753602860'' @ 140f44840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h__Script_Slate_753602860__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Text_ISlateEditableTextWidget_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// EVirtualKeyboardTrigger_StaticEnum @ 1429b13f0

UEnum * __cdecl EVirtualKeyboardTrigger_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger,(UObject *)pUVar1,
                       L"EVirtualKeyboardTrigger");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton;
}

// EVirtualKeyboardDismissAction_StaticEnum @ 1429b1430

UEnum * __cdecl EVirtualKeyboardDismissAction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction,(UObject *)pUVar1,
                       L"EVirtualKeyboardDismissAction");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton;
}

// EProgressBarFillType_StaticEnum @ 1429b1470

UEnum * __cdecl EProgressBarFillType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType,(UObject *)pUVar1,
                       L"EProgressBarFillType");
  }
  return Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton;
}

// EProgressBarFillStyle_StaticEnum @ 1429b14b0

UEnum * __cdecl EProgressBarFillStyle_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillStyle,(UObject *)pUVar1,
                       L"EProgressBarFillStyle");
  }
  return Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton;
}

// TFunction<EVisibility___cdecl(void)><`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>_> @ 1429b14f0

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><_SNotificationItemImpl::ConstructInternals_::__l2::<lambda_1>_>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_1> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ConstructInternals_SNotificationItemImpl__QEAA_AV__TSharedRef_VSWidget___00__AEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(SNotificationItemImpl **)&this->field_0x18 = param_1->__this;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,EVisibility>
         ::Call;
  }
  return this;
}

// ArrangeSingleChild<FBasicLayoutWidgetSlot> @ 1429b2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
ArrangeSingleChild<FBasicLayoutWidgetSlot>
          (EFlowDirection param_1,FGeometry *param_2,FArrangedChildren *param_3,
          FBasicLayoutWidgetSlot *param_4,TAttribute<UE::Math::TVector2<double>_> *param_5)

{
  EVisibility EVar1;
  float fVar2;
  double dVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_168 [32];
  undefined8 local_138;
  FSlateLayoutTransform local_130 [2];
  FArrangedWidget local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_168;
  EVar1.Value.Value =
       (TEnumAsByte<EVisibility::Private>)
       ((TEnumAsByte<EVisibility::Private> *)(*(longlong *)&param_4->field_0x10 + 0x39))->Value;
  if (((param_3->VisibilityFilter).Value.Value & (byte)EVar1.Value.Value) == 0) {
    return;
  }
  pTVar4 = TAttribute<UE::Math::TVector2<double>_>::Get(param_5);
  fVar10 = *(float *)&param_4->field_0x2c;
  fVar2 = *(float *)&param_4->field_0x34;
  dVar3 = (pTVar4->field0_0x0)._s_0.Y;
  fVar11 = *(float *)&param_4->field_0x28;
  fVar13 = *(float *)&param_4->field_0x30;
  if (param_1 == RightToLeft) {
    fVar11 = *(float *)&param_4->field_0x30;
    fVar13 = *(float *)&param_4->field_0x28;
  }
  local_138 = param_2->Size;
  iVar6 = *(int *)&param_4->field_0x38;
  fVar9 = (float)local_138;
  fVar12 = (float)(pTVar4->field0_0x0)._s_0.X;
  if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_1429b2352:
    if (iVar6 != 0) goto LAB_1429b235d;
LAB_1429b23c7:
    fVar7 = fVar12 * (fVar9 - (fVar13 + fVar11));
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  else {
    if (iVar6 == 1) {
      iVar6 = 3;
    }
    else {
      if (iVar6 != 3) goto LAB_1429b2352;
      iVar6 = 1;
    }
LAB_1429b235d:
    fVar8 = (float)local_138 - (fVar13 + fVar11);
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)&param_4->field_0x10);
    fVar7 = fVar12 * *(float *)FVar5;
    if (fVar8 <= fVar7) {
      fVar7 = fVar8;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        fVar11 = ((fVar9 - fVar7) * __real_3f000000 + fVar11) - fVar13;
      }
      else {
        if (iVar6 != 3) goto LAB_1429b23c7;
        fVar11 = (fVar9 - fVar7) - fVar13;
      }
    }
  }
  local_138 = param_2->Size;
  iVar6 = *(int *)&param_4->field_0x3c;
  fVar13 = local_138._4_4_;
  fVar12 = (float)dVar3;
  fVar9 = local_138._4_4_ - (fVar10 + fVar2);
  if (iVar6 != 0) {
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)&param_4->field_0x10);
    local_138._4_4_ = fVar12 * *(float *)((longlong)FVar5 + 4);
    if (fVar9 <= local_138._4_4_) {
      local_138._4_4_ = fVar9;
    }
    if (local_138._4_4_ <= 0.0) {
      local_138._4_4_ = 0.0;
    }
    if (iVar6 == 1) goto LAB_1429b2478;
    if (iVar6 == 2) {
      fVar10 = ((fVar13 - local_138._4_4_) * __real_3f000000 + fVar10) - fVar2;
      goto LAB_1429b2478;
    }
    if (iVar6 == 3) {
      fVar10 = (fVar13 - local_138._4_4_) - fVar2;
      goto LAB_1429b2478;
    }
  }
  local_138._4_4_ = fVar9 * fVar12;
  if (local_138._4_4_ <= 0.0) {
    local_138._4_4_ = 0.0;
  }
LAB_1429b2478:
  local_138._0_4_ = fVar7;
  local_130[0].Scale = 1.0;
  local_130[0].Translation.field0_0x0._0_4_ = fVar11;
  local_130[0].Translation.field0_0x0._4_4_ = fVar10;
  FGeometry::MakeChild
            (param_2,&local_118,(TSharedRef<SWidget,1> *)&param_4->field_0x10,
             (FDeprecateVector2DParameter *)&local_138,local_130);
  FArrangedChildren::AddWidget(param_3,EVar1,&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructItems<FNotificationButtonInfo,FNotificationButtonInfo,int> @ 1429b2d90

void __cdecl
ConstructItems<FNotificationButtonInfo,FNotificationButtonInfo,int>
          (void *param_1,FNotificationButtonInfo *param_2,int param_3)

{
  undefined1 *puVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool *pbVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (param_3 != 0) {
    puVar4 = (undefined1 *)((longlong)param_1 + 0x10);
    pbVar5 = &(param_2->Text).bIsSet;
    do {
      *(undefined8 *)(pbVar5 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0;
      pIVar2 = (((TAttribute<FText> *)(pbVar5 + -0x10))->Value).TextData.Reference;
      *(ITextData **)(pbVar5 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(puVar4 + -8) = *(uint *)(pbVar5 + -8);
      *puVar4 = *pbVar5;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined4 *)(puVar4 + 0x18) = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar4 + 8),
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(pbVar5 + 8));
      *(undefined8 *)(puVar4 + 0x20) = 0;
      plVar3 = *(longlong **)(pbVar5 + 0x20);
      *(longlong **)(puVar4 + 0x20) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,local_res20);
      }
      *(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(pbVar5 + 0x28);
      puVar4[0x30] = pbVar5[0x30];
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(undefined8 *)(puVar4 + 0x40) = 0;
      *(undefined4 *)(puVar4 + 0x48) = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar4 + 0x38),
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(pbVar5 + 0x38));
      *(undefined8 *)(puVar4 + 0x58) = 0;
      *(undefined8 *)(puVar4 + 0x50) = 0;
      *(undefined4 *)(puVar4 + 0x60) = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar4 + 0x50),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pbVar5 + 0x50));
      TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
      ::
      TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                (puVar4 + 0x68,
                 (TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                  *)(pbVar5 + 0x68));
      TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>::
      TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                (puVar4 + 0x80,
                 (TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                  *)(pbVar5 + 0x80));
      puVar4[0x98] = pbVar5[0x98];
      puVar4[0x99] = pbVar5[0x99];
      puVar4[0x9a] = pbVar5[0x9a];
      puVar1 = pbVar5 + 0x9b;
      pbVar5 = pbVar5 + 0xb0;
      puVar4[0x9b] = *puVar1;
      puVar4 = puVar4 + 0xb0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int> @ 1429b2ef0

void __cdecl
ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
          (void *param_1,TSharedRef<ITextDecorator,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ITextDecorator **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int> @ 1429b4050

void __cdecl
DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
          (FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-2].field_0x10);
      puVar1 = *(undefined8 **)(this + -2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[3].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SCanvas::FSlot::FSlotArguments,int> @ 1429b40c0

void __cdecl DestructItems<SCanvas::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Size).Getter;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -2);
      if (*(void **)&this[-2].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-2].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -2));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(this + -4));
      puVar1 = *(undefined8 **)&this[-5].field_0x8;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[5].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int> @ 1429b4160

void __cdecl
DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<SWrapBox::FSlot::FSlotArguments,int> @ 1429b41b0

void __cdecl DestructItems<SWrapBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-2].field_0x10);
      puVar1 = *(undefined8 **)(this + -2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[4].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SlateEditableTextTypes::FUndoState,int> @ 1429b4220

void __cdecl DestructItems<SlateEditableTextTypes::FUndoState,int>(FUndoState *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Text).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int> @ 1429b4260

void __cdecl
DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
          (TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *param_1,
          int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int> @ 1429b42a0

void __cdecl
DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
          (TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *param_1,
          int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int> @ 1429b42e0

void __cdecl
DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
          (TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int> @ 1429b4320

void __cdecl
DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
          (TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *param_1,int param_2)

{
  FSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// MakeShareable<FUICommandList> @ 1429b4a10

TRawPtrProxy<FUICommandList> __cdecl MakeShareable<FUICommandList>(FUICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FUICommandList> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FUICommandList *)(*pcVar1)();
      return (TRawPtrProxy<FUICommandList>)TVar3.Object;
    }
  }
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<FUICommandList>)param_1;
}

// MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs> @ 1429b4a80

TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> @ 1429b4b30

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableTextBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> @ 1429b4be0

TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs> @ 1429b4c90

TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs> @ 1429b4d40

TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs> @ 1429b4df0

TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STooltipPresenter,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// RemoveAll<`FSlateEditableTextLayout::InsertTextAtCursorImpl'::__l6::<lambda_1>_> @ 1429b5230

int __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::
RemoveAll<_FSlateEditableTextLayout::InsertTextAtCursorImpl_::__l6::<lambda_1>_>
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == 0) {
    return 0;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  iVar8 = 0;
  uVar1 = *(ushort *)pFVar3;
  if ((((uVar1 == 0) || ((uVar1 & 0xffe0) != 0)) || (uVar1 == 9)) ||
     ((*param_1->bIsMultiLine != false &&
      ((uVar1 == 0x2028 || (uVar1 - 10 < 4 || uVar1 == 0x2029)) || uVar1 == 0x85)))) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  lVar5 = 0;
  iVar6 = 0;
  do {
    iVar7 = iVar6;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar7 + 1;
      if (iVar2 <= lVar5) break;
      uVar1 = *(ushort *)(pFVar3 + lVar5 * 2);
      if (((uVar1 == 0) || ((uVar1 & 0xffe0) != 0)) ||
         ((uVar1 == 9 || ((*param_1->bIsMultiLine != false && (uVar1 - 10 < 4)))))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
    } while (bVar9 == bVar4);
    if (bVar9 != 0) {
      if (iVar8 != iVar6) {
        memmove(pFVar3 + (longlong)iVar8 * 2,pFVar3 + (longlong)iVar6 * 2,
                (longlong)(iVar7 - iVar6) * 2);
      }
      iVar8 = iVar8 + (iVar7 - iVar6);
    }
    bVar9 = bVar9 ^ 1;
    iVar6 = iVar7;
    if (iVar2 <= lVar5) {
      this->ArrayNum = iVar8;
      return iVar2 - iVar8;
    }
  } while( true );
}

// SetWidgetAttribute<float,float> @ 1429b53d0

bool __cdecl
SetWidgetAttribute<float,float>
          (SWidget *param_1,TAttribute<float> *param_2,TAttribute<float> *param_3,
          EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_3->Value == param_2->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<float>::IsBound(param_2);
  bVar4 = TAttribute<float>::IsBound(param_3);
  param_2->Value = param_3->Value;
  param_2->bIsSet = param_3->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&param_2->Getter,&param_3->Getter);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// SetWidgetAttribute<FMargin,FMargin> @ 1429b5590

bool __cdecl
SetWidgetAttribute<FMargin,FMargin>
          (SWidget *param_1,TAttribute<FMargin> *param_2,TAttribute<FMargin> *param_3,
          EInvalidateWidgetReason param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  EInvalidateWidgetReason EVar6;
  
  bVar4 = TAttribute<FMargin>::IdenticalTo(param_2,param_3);
  if (!bVar4) {
    bVar4 = TAttribute<FMargin>::IsBound(param_2);
    bVar5 = TAttribute<FMargin>::IsBound(param_3);
    fVar1 = (param_3->Value).Top;
    fVar2 = (param_3->Value).Right;
    fVar3 = (param_3->Value).Bottom;
    (param_2->Value).Left = (param_3->Value).Left;
    (param_2->Value).Top = fVar1;
    (param_2->Value).Right = fVar2;
    (param_2->Value).Bottom = fVar3;
    param_2->bIsSet = param_3->bIsSet;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
    EVar6 = param_4 | PaintAndVolatility;
    if (bVar4 == bVar5) {
      EVar6 = param_4;
    }
    SWidget::Invalidate(param_1,EVar6);
    return true;
  }
  return false;
}

// SetWidgetAttribute<enum_ETextTransformPolicy,enum_ETextTransformPolicy> @ 1429b5640

bool __cdecl
SetWidgetAttribute<enum_ETextTransformPolicy,enum_ETextTransformPolicy>
          (SWidget *param_1,TAttribute<ETextTransformPolicy> *param_2,
          TAttribute<ETextTransformPolicy> *param_3,EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_2->Value == param_3->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<enum_ETextTransformPolicy>::IsBound(param_2);
  bVar4 = TAttribute<enum_ETextTransformPolicy>::IsBound(param_3);
  param_2->Value = param_3->Value;
  param_2->bIsSet = param_3->bIsSet;
  TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// SetWidgetAttribute<enum_ETextWrappingPolicy,enum_ETextWrappingPolicy> @ 1429b5800

bool __cdecl
SetWidgetAttribute<enum_ETextWrappingPolicy,enum_ETextWrappingPolicy>
          (SWidget *param_1,TAttribute<ETextWrappingPolicy> *param_2,
          TAttribute<ETextWrappingPolicy> *param_3,EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_2->Value == param_3->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<enum_ETextWrappingPolicy>::IsBound(param_2);
  bVar4 = TAttribute<enum_ETextWrappingPolicy>::IsBound(param_3);
  param_2->Value = param_3->Value;
  param_2->bIsSet = param_3->bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// SetWidgetAttribute<enum_ETextJustify::Type,enum_ETextJustify::Type> @ 1429b59c0

bool __cdecl
SetWidgetAttribute<enum_ETextJustify::Type,enum_ETextJustify::Type>
          (SWidget *param_1,TAttribute<ETextJustify::Type> *param_2,
          TAttribute<ETextJustify::Type> *param_3,EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<enum_ETextJustify::Type>::IdenticalTo(param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<enum_ETextJustify::Type>::IsBound(param_2);
    bVar2 = TAttribute<enum_ETextJustify::Type>::IsBound(param_3);
    param_2->Value = param_3->Value;
    param_2->bIsSet = param_3->bIsSet;
    TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// SetWidgetAttribute<bool,bool> @ 1429b5a70

bool __cdecl
SetWidgetAttribute<bool,bool>
          (SWidget *param_1,TAttribute<bool> *param_2,TAttribute<bool> *param_3,
          EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_2->Value == param_3->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<bool>::IsBound(param_2);
  bVar4 = TAttribute<bool>::IsBound(param_3);
  param_2->Value = param_3->Value;
  param_2->bIsSet = param_3->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&param_2->Getter,&param_3->Getter);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// StaticEnum<enum_EVirtualKeyboardDismissAction> @ 1429b5c30

UEnum * __cdecl StaticEnum<enum_EVirtualKeyboardDismissAction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction,(UObject *)pUVar1,
                       L"EVirtualKeyboardDismissAction");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.OuterSingleton;
}

// StaticEnum<enum_EVirtualKeyboardTrigger> @ 1429b5c70

UEnum * __cdecl StaticEnum<enum_EVirtualKeyboardTrigger>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger,(UObject *)pUVar1,
                       L"EVirtualKeyboardTrigger");
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.OuterSingleton;
}

// StaticEnum<enum_EProgressBarFillStyle::Type> @ 1429b5cb0

UEnum * __cdecl StaticEnum<enum_EProgressBarFillStyle::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillStyle,(UObject *)pUVar1,
                       L"EProgressBarFillStyle");
  }
  return Z_Registration_Info_UEnum_EProgressBarFillStyle.OuterSingleton;
}

// StaticEnum<enum_EProgressBarFillType::Type> @ 1429b5cf0

UEnum * __cdecl StaticEnum<enum_EProgressBarFillType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType,(UObject *)pUVar1,
                       L"EProgressBarFillType");
  }
  return Z_Registration_Info_UEnum_EProgressBarFillType.OuterSingleton;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_> @ 1429b5ee0

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_void___cdecl_FNotificationInfo::ShowCopyToClipboadHyperlink(void)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FNotificationInfo::ShowCopyToClipboadHyperlink_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_void___cdecl_FNotificationInfo::ShowCopyToClipboadHyperlink(void)_::_2_::<lambda_1>_>
          *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::`2'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  pIVar1 = (param_1->Functor).Text.Value.TextData.Reference;
  *(ITextData **)((longlong)this + 0x18) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 0x20) = (param_1->Functor).Text.Value.Flags;
  *(bool *)((longlong)this + 0x28) = (param_1->Functor).Text.bIsSet;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x30),
             &(param_1->Functor).Text.Getter);
  *(undefined8 *)((longlong)this + 0x48) = 0;
  pIVar1 = (param_1->Functor).SubText.Value.TextData.Reference;
  *(ITextData **)((longlong)this + 0x48) = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)((longlong)this + 0x50) = (param_1->Functor).SubText.Value.Flags;
  *(bool *)((longlong)this + 0x58) = (param_1->Functor).SubText.bIsSet;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x70) = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x60),
             &(param_1->Functor).SubText.Getter);
  return this;
}

// ~TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0> @ 1429be050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_SNotificationItemImpl::ConstructInternals_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ConstructInternals_SNotificationItemImpl__QEAA_AV__TSharedRef_VSWidget___00__AEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0> @ 1429be070

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0>
::~TFunction_OwnedObject<_SWidgetSwitcher::AddSlot_::__l5::<lambda_1>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`5'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001429be09a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0> @ 1429be0b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0>
::~TFunction_OwnedObject<_SWidgetSwitcher::AddSlot_::__l7::<lambda_2>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`7'::<lambda_2>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001429be0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1429c1cc4

/* [thunk]:public: virtual void * __ptr64 __cdecl
   TSingleWidgetChildrenWithBasicLayoutSlot<1>::`vector deleting destructor'`adjustor{32}' (unsigned
   int) __ptr64 */

void * __thiscall
TSingleWidgetChildrenWithBasicLayoutSlot<1>::_vector_deleting_destructor__adjustor_32__
          (TSingleWidgetChildrenWithBasicLayoutSlot<1> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSingleWidgetChildrenWithBasicLayoutSlot<1> *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1429c1cd4

/* [thunk]:public: virtual void * __ptr64 __cdecl TSingleWidgetChildrenWithSlot<class
   TSingleWidgetChildrenWithBasicLayoutSlot<1> >::`vector deleting destructor'`adjustor{32}'
   (unsigned int) __ptr64 */

void * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::
_vector_deleting_destructor__adjustor_32__
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *
                      )&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1429c1ce4

/* [thunk]:public: virtual void * __ptr64 __cdecl FSingleWidgetChildrenWithBasicLayoutSlot::`vector
   deleting destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FSingleWidgetChildrenWithBasicLayoutSlot::_vector_deleting_destructor__adjustor_32__
          (FSingleWidgetChildrenWithBasicLayoutSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSingleWidgetChildrenWithBasicLayoutSlot *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1429c1cf4

/* [thunk]:public: virtual void * __ptr64 __cdecl SInvalidationPanel::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SInvalidationPanel::_vector_deleting_destructor__adjustor_680__
          (SInvalidationPanel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SInvalidationPanel *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1429c1d10

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1d70

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1dd0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1e30

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1e90

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1ef0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1f50

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c1fb0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2010

void * __thiscall
IBaseDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2040

void * __thiscall
IBaseDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2070

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c20a0

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SMultiLineEditableText::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c20d0

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::__l3::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2100

void * __thiscall
TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`STextBlock::Construct'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2130

void * __thiscall
TBaseFunctorDelegateInstance<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`SMultiLineEditableText::EnsureActiveTick'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FNotificationInfo::ShowCopyToClipboadHyperlink'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c21a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c21d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<1,FSlateEditableTextLayout_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,FSlateEditableTextLayout_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2200

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateEditableTextLayout,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateEditableTextLayout,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2230

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateEditableTextLayout,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateEditableTextLayout,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2260

void * __thiscall
TBaseRawMethodDelegateInstance<0,SInvalidationPanel,void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SInvalidationPanel,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2290

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,SNotificationExtendable,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SNotificationExtendable,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c22c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2320

void * __thiscall
TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2380

void * __thiscall
TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SErrorHint_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c23e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SErrorText_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SErrorText_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2440

void * __thiscall
TBaseSPMethodDelegateInstance<1,SErrorText_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SErrorText_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c24a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2500

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2560

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemExternalImpl_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c25c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2620

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2680

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c26e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>,EVisibility,EVisibility,EVisibility,EVisibility>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2770

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c27d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2830

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2890

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c28f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2950

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c29b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2a10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationItemImpl_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindowTitleBarArea_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindowTitleBarArea_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2b00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInlineEditableTextBlock,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2b60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInlineEditableTextBlock,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInlineEditableTextBlock,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2bc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInlineEditableTextBlock,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2c20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiLineEditableText,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiLineEditableText,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2c80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNotificationItemImpl,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNotificationItemImpl,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2d10

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProgressBar,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2d70

void * __thiscall
TBaseSPMethodDelegateInstance<0,SViewport,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWindowTitleBarArea,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWindowTitleBarArea,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2e30

void * __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2e60

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2e90

void * __thiscall
TBasicLayoutWidgetSlot<SWrapBox::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SWrapBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__TSlotBase<SWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2f10

void * __thiscall
TCommonDelegateInstanceState<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2f40

void * __thiscall
TCommonDelegateInstanceState<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>,EVisibility,EVisibility,EVisibility,EVisibility>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2fa0

void * __thiscall
TCommonDelegateInstanceState<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c2fd0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3000

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3060

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c30c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ConstructInternals_SNotificationItemImpl__QEAA_AV__TSharedRef_VSWidget___00__AEBUFArguments_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3100

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`5'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3170

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`7'::<lambda_2>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c31e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHittestGrid,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHittestGrid,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSimulatedNavigationMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSimulatedNavigationMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3260

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FString,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FString,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c32a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHyperlink,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SHyperlink,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c32e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditableTextBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMultiLineEditableTextBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x610);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3320

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationBackground,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNotificationBackground,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3360

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationItemExternalImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNotificationItemExternalImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x678);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c33a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationItemImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNotificationItemImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x668);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c33e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STooltipPresenter,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STooltipPresenter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3420

void * __thiscall
TOneDynamicChild<FBasicLayoutWidgetSlot>::_scalar_deleting_destructor_
          (TOneDynamicChild<FBasicLayoutWidgetSlot> *this,uint param_1)

{
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3460

void * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SUniformGridPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c34c0

void * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3520

void * __thiscall
TPanelChildren<SCanvas::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SCanvas::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3580

void * __thiscall
TPanelChildren<SWrapBox::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SWrapBox::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c35e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FCursorLineHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FCursorLineHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SlateEditableTextTypes::FCursorLineHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FCursorLineHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3620

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextCompositionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextCompositionHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextCompositionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextCompositionHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3660

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateEditableTextLayout::FTextInputMethodContext,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FTextInputMethodContext>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateEditableTextLayout::FTextInputMethodContext,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FTextInputMethodContext>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c36a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSearchHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSearchHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSearchHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSearchHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c36e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSelectionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSelectionHighlighter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSelectionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSelectionHighlighter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3720

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3760

void * __thiscall
TSingleWidgetChildrenWithBasicLayoutSlot<1>::_scalar_deleting_destructor_
          (TSingleWidgetChildrenWithBasicLayoutSlot<1> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c37b0

void * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::
_scalar_deleting_destructor_
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,
          uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3800

void * __thiscall
TSlotBase<SUniformGridPanel::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SUniformGridPanel::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3840

void * __thiscall
TSlotBase<SUniformWrapPanel::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SUniformWrapPanel::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3880

void * __thiscall
TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::_scalar_deleting_destructor_
          (TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c38c0

void * __thiscall
TSlotBase<SCanvas::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SCanvas::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3900

void * __thiscall
TSlotBase<SWrapBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SWrapBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3940

void * __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SCanvas::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c39c0

void * __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3a40

void * __thiscall
SlateEditableTextTypes::FCursorLineHighlighter::_scalar_deleting_destructor_
          (FCursorLineHighlighter *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CursorBrush).Getter);
  pvVar1 = *(void **)&(this->CursorBrush).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CursorBrush).Getter);
  this->_padding_ = (longlong)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3ab0

void * __thiscall
FSimulatedNavigationMetaData::_scalar_deleting_destructor_
          (FSimulatedNavigationMetaData *this,uint param_1)

{
  ~FSimulatedNavigationMetaData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3af0

void * __thiscall
FSingleWidgetChildrenWithBasicLayoutSlot::_scalar_deleting_destructor_
          (FSingleWidgetChildrenWithBasicLayoutSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3b40

void * __thiscall
FSlateAccessibleTextBlock::_scalar_deleting_destructor_
          (FSlateAccessibleTextBlock *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3b80

void * __thiscall SCanvas::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::_vftable__for__TSlotBase<SCanvas::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3c00

void * __thiscall SUniformGridPanel::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3c40

void * __thiscall SUniformWrapPanel::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3c80

void * __thiscall SWrapBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__TSlotBase<SWrapBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3d00

void * __thiscall
SlateEditableTextTypes::FTextCompositionHighlighter::_scalar_deleting_destructor_
          (FTextCompositionHighlighter *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CompositionBrush).Getter);
  pvVar1 = *(void **)&(this->CompositionBrush).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CompositionBrush).Getter);
  this->_padding_ = (longlong)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::_scalar_deleting_destructor_
          (FTextInputMethodContext *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ITextInputMethodContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3de0

void * __thiscall
SlateEditableTextTypes::FTextSearchHighlighter::_scalar_deleting_destructor_
          (FTextSearchHighlighter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3e20

void * __thiscall
SlateEditableTextTypes::FTextSelectionHighlighter::_scalar_deleting_destructor_
          (FTextSelectionHighlighter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ILineHighlighter__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3e60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateEditableTextLayout::FVirtualKeyboardEntry::_scalar_deleting_destructor_
          (FVirtualKeyboardEntry *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IVirtualKeyboardEntry__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3ed0

void * __thiscall
ITextInputMethodContext::_scalar_deleting_destructor_(ITextInputMethodContext *this,uint param_1)

{
  *this = (ITextInputMethodContext)&___7ITextInputMethodContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3f10

void * __thiscall SCanvas::_scalar_deleting_destructor_(SCanvas *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SCanvas__6B_;
  DestructItems<TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_>,int>
            ((TUniquePtr<SCanvas::FSlot,TDefaultDelete<SCanvas::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c3fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SInlineEditableTextBlock::_scalar_deleting_destructor_(SInlineEditableTextBlock *this,uint param_1)

{
  ~SInlineEditableTextBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4010

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
SInvalidationPanel::_scalar_deleting_destructor_(SInvalidationPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FSlateInvalidationRoot__;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &(FSlateApplicationBase::CurrentBaseApplication.Object)->
                OnGlobalInvalidationToggledEvent,this);
  }
  pFVar1 = (this->DebugPaintName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((this->LastClippingState).bIsSet != false) &&
     (pFVar1 = (this->LastClippingState).TypedValue.StencilQuads.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HittestGrid).SharedReferenceCount.ReferenceController);
  FSlateInvalidationRoot::~FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4190

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SMultiLineEditableText::_scalar_deleting_destructor_(SMultiLineEditableText *this,uint param_1)

{
  ~SMultiLineEditableText(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c41f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SMultiLineEditableTextBox::_scalar_deleting_destructor_
          (SMultiLineEditableTextBox *this,uint param_1)

{
  ~SMultiLineEditableTextBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4250

void * __thiscall
SNotificationBackground::_scalar_deleting_destructor_(SNotificationBackground *this,uint param_1)

{
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c42b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SNotificationExtendable::_scalar_deleting_destructor_(SNotificationExtendable *this,uint param_1)

{
  ~SNotificationExtendable(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x5f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4310

void * __thiscall
SNotificationItem::_scalar_deleting_destructor_(SNotificationItem *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4370

void * __thiscall
SNotificationItemExternalImpl::_scalar_deleting_destructor_
          (SNotificationItemExternalImpl *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotificationWidget).SharedReferenceCount.ReferenceController);
  SNotificationItemImpl::~SNotificationItemImpl((SNotificationItemImpl *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x668);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c43e0

void * __thiscall
SNotificationItemImpl::_scalar_deleting_destructor_(SNotificationItemImpl *this,uint param_1)

{
  ~SNotificationItemImpl(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x658);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4440

void * __thiscall SRichTextBlock::_scalar_deleting_destructor_(SRichTextBlock *this,uint param_1)

{
  ~SRichTextBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c44a0

void * __thiscall STextBlock::_scalar_deleting_destructor_(STextBlock *this,uint param_1)

{
  ~STextBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x610);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4500

void * __thiscall
STooltipPresenter::_scalar_deleting_destructor_(STooltipPresenter *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c45a0

void * __thiscall
SUniformGridPanel::_scalar_deleting_destructor_(SUniformGridPanel *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7SUniformGridPanel__6B_;
  (this->CollapsedRows).HashSize = 0;
  FVar1 = (this->CollapsedRows).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollapsedRows).Elements);
  (this->CollapsedColumns).HashSize = 0;
  FVar1 = (this->CollapsedColumns).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollapsedColumns).Elements);
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4690

void * __thiscall
SUniformWrapPanel::_scalar_deleting_destructor_(SUniformWrapPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SUniformWrapPanel__6B_;
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SViewport::_scalar_deleting_destructor_(SViewport *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SViewport__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomHitTestPath).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->ViewportInterface).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4820

void * __thiscall SWeakWidget::_scalar_deleting_destructor_(SWeakWidget *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SWeakWidget__6B_;
  pTVar3 = (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FChildren::~FChildren((FChildren *)&this->WeakChild);
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c48d0

void * __thiscall SWidgetSwitcher::_scalar_deleting_destructor_(SWidgetSwitcher *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7SWidgetSwitcher__6B_;
  pTVar3 = (this->LastActiveWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FChildren::~FChildren((FChildren *)&this->OneDynamicChild);
  DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int>
            ((TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> *)
             (this->AllChildren).Children.AllocatorInstance.Data,
             (this->AllChildren).Children.ArrayNum);
  pFVar4 = (this->AllChildren).Children.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FChildren::~FChildren((FChildren *)&this->AllChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetIndex).Getter);
  pvVar5 = *(void **)&(this->WidgetIndex).Getter.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidgetIndex).Getter);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c49d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SWindowTitleBarArea::_scalar_deleting_destructor_(SWindowTitleBarArea *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SWindowTitleBarArea__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowButtonsBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaximizeRestoreButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MinimizeButton).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestToggleFullscreen);
  pvVar1 = *(void **)&(this->RequestToggleFullscreen).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestToggleFullscreen);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameWindow).SharedReferenceCount.ReferenceController);
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1429c4ac0

void * __thiscall SWrapBox::_scalar_deleting_destructor_(SWrapBox *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SWrapBox__6B_;
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)
             (this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
  pFVar1 = (this->Slots).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Slots);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// ConsoleVariableEnableInvalidationPanelsChanged @ 1429d01d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl ConsoleVariableEnableInvalidationPanelsChanged(IConsoleVariable *param_1)

{
  FSlateApplicationBase *pFVar1;
  
  if (!GSlateEnableGlobalInvalidation) {
    pFVar1 = FSlateApplicationBase::Get();
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pFVar1->OnGlobalInvalidationToggledEvent,GSlateEnableGlobalInvalidation);
    return;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget @ 1429e4180

void __cdecl EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSProgressBar @ 1429e4190

void __cdecl EmptyLinkFunctionForGeneratedCodeSProgressBar(void)

{
  return;
}

// PushTransformedClip @ 142a043b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
PushTransformedClip(FSlateWindowElementList *param_1,FGeometry *param_2,TVector2<double> *param_3,
                   TVector2<double> *param_4,FSlateRect *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  TVector2<float>_u_0 local_d8 [3];
  float local_c0;
  float local_bc;
  byte local_b8;
  
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  fVar10 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  dVar5 = (param_4->field0_0x0)._s_0.X;
  fVar11 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  fVar1 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  fVar2 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  local_res10 = SUB84(param_2->Size,0);
  fVar3 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.X;
  fStackX_14 = SUB84(param_2->Size,4);
  dVar12 = (double)(local_res10 - (float)(dVar6 + dVar6));
  dVar7 = (double)(fStackX_14 - (float)(dVar4 + dVar4));
  fVar15 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  fVar9 = (float)(((double)param_5->Right + dVar5) * dVar12 + dVar6);
  fVar8 = (float)(((double)param_5->Bottom + (param_4->field0_0x0)._s_0.Y) * dVar7 + dVar4);
  fVar16 = fVar10 * fVar9;
  fVar13 = fVar1 * fVar8;
  fVar9 = fVar15 * fVar9;
  fVar8 = fVar11 * fVar8;
  fVar14 = (float)((dVar5 - (double)param_5->Left) * dVar12 + dVar6);
  fVar15 = fVar14 * fVar15;
  fVar14 = fVar14 * fVar10;
  fStackX_14 = fVar15 + fVar8 + fVar3;
  local_res10 = fVar14 + fVar13 + fVar2;
  fVar10 = (float)(((param_4->field0_0x0)._s_0.Y - (double)param_5->Top) * dVar7 + dVar4);
  fVar11 = fVar10 * fVar11;
  fVar10 = fVar10 * fVar1;
  fStackX_1c = fVar11 + fVar9 + fVar3;
  local_res18 = fVar10 + fVar16 + fVar2;
  fStackX_24 = fVar11 + fVar15 + fVar3;
  local_res20 = fVar10 + fVar14 + fVar2;
  param_5._0_4_ = fVar16 + fVar13 + fVar2;
  param_5._4_4_ = fVar8 + fVar9 + fVar3;
  FSlateClippingZone::FSlateClippingZone
            ((FSlateClippingZone *)&local_d8[0]._s_0,(FDeprecateVector2DParameter *)&local_res20,
             (FDeprecateVector2DParameter *)&local_res18,(FDeprecateVector2DParameter *)&local_res10
             ,(FDeprecateVector2DParameter *)&param_5);
  if (((local_b8 & 1) != 0) &&
     (((float)((uint)((float)local_d8[0]._0_4_ - local_c0) & __xmm_7fffffff7fffffff7fffffff7fffffff)
       <= __real_322bcc77 ||
      ((float)((uint)((float)local_d8[0]._4_4_ - local_bc) & __xmm_7fffffff7fffffff7fffffff7fffffff)
       <= __real_322bcc77)))) {
    return false;
  }
  FSlateWindowElementList::PushClip(param_1,(FSlateClippingZone *)&local_d8[0]._s_0);
  return true;
}

// Z_Construct_UEnum_Slate_EProgressBarFillStyle @ 142a15170

UEnum * __cdecl Z_Construct_UEnum_Slate_EProgressBarFillStyle(void)

{
  if (Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton,
               &Z_Construct_UEnum_Slate_EProgressBarFillStyle_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProgressBarFillStyle.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EProgressBarFillType @ 142a151b0

UEnum * __cdecl Z_Construct_UEnum_Slate_EProgressBarFillType(void)

{
  if (Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton,
               &Z_Construct_UEnum_Slate_EProgressBarFillType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EProgressBarFillType.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction @ 142a151f0

UEnum * __cdecl Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction(void)

{
  if (Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton,
               &Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardDismissAction.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger @ 142a15230

UEnum * __cdecl Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger(void)

{
  if (Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton,
               &Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVirtualKeyboardTrigger.InnerSingleton;
}

// CloseButtonStyle'' @ 15035d710

void __cdecl `dynamic_atexit_destructor_for_'SWindowTitleBarArea::CloseButtonStyle__(void)

{
  FButtonStyle::~FButtonStyle(&SWindowTitleBarArea::CloseButtonStyle);
  return;
}

// MaximizeButtonStyle'' @ 15035d730

void __cdecl `dynamic_atexit_destructor_for_'SWindowTitleBarArea::MaximizeButtonStyle__(void)

{
  FButtonStyle::~FButtonStyle(&SWindowTitleBarArea::MaximizeButtonStyle);
  return;
}

// MinimizeButtonStyle'' @ 15035d750

void __cdecl `dynamic_atexit_destructor_for_'SWindowTitleBarArea::MinimizeButtonStyle__(void)

{
  FButtonStyle::~FButtonStyle(&SWindowTitleBarArea::MinimizeButtonStyle);
  return;
}

// OnCloseButtonClicked'' @ 15035d770

void __cdecl `dynamic_atexit_destructor_for_'SWindowTitleBarArea::OnCloseButtonClicked__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &SWindowTitleBarArea::OnCloseButtonClicked,(FWriteAccessScope *)&local_28);
  if ((SWindowTitleBarArea::OnCloseButtonClicked._16_4_ != 0) &&
     (SWindowTitleBarArea::OnCloseButtonClicked._8_8_ != 0)) {
    (*(code *)**(undefined8 **)SWindowTitleBarArea::OnCloseButtonClicked._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&SWindowTitleBarArea::OnCloseButtonClicked.field_0x8,0,0,0x10);
    SWindowTitleBarArea::OnCloseButtonClicked._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (SWindowTitleBarArea::OnCloseButtonClicked._8_8_ != 0) {
    FMemory::Free((void *)SWindowTitleBarArea::OnCloseButtonClicked._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SWindowTitleBarArea::OnCloseButtonClicked);
  return;
}

// RestoreButtonStyle'' @ 15035d810

void __cdecl `dynamic_atexit_destructor_for_'SWindowTitleBarArea::RestoreButtonStyle__(void)

{
  FButtonStyle::~FButtonStyle(&SWindowTitleBarArea::RestoreButtonStyle);
  return;
}

// `dynamic_atexit_destructor_for_'BlackBrush'' @ 15035d830

void __cdecl `SViewport::OnPaint'::__l29::_dynamic_atexit_destructor_for__BlackBrush__(void)

{
  BlackBrush._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)BlackBrush._160_8_);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysInvalidate'' @ 15035d850

void __cdecl _dynamic_atexit_destructor_for__CVarAlwaysInvalidate__(void)

{
  CVarAlwaysInvalidate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysInvalidate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableInvalidationPanels'' @ 15035d870

void __cdecl _dynamic_atexit_destructor_for__CVarEnableInvalidationPanels__(void)

{
  CVarEnableInvalidationPanels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableInvalidationPanels);
  return;
}

// `dynamic_atexit_destructor_for_'StaticToolTipWrapWidth'' @ 15035d890

void __cdecl _dynamic_atexit_destructor_for__StaticToolTipWrapWidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&StaticToolTipWrapWidth);
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d8b0

void __cdecl
`SCanvas::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCanvas::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d900

void __cdecl
`SInvalidationPanel::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SInvalidationPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d950

void __cdecl
`STextBlock::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_STextBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d9a0

void __cdecl
`SUniformWrapPanel::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d9f0

void __cdecl
`SWrapBox::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

