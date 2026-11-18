// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 526

// OpenApplicationMenus'' @ 140f43e10

void __cdecl `dynamic_initializer_for_'SMenuAnchor::OpenApplicationMenus__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SMenuAnchor::OpenApplicationMenus__);
  return;
}

// `dynamic_initializer_for_'CVar'' @ 140f43e30

void __cdecl SpinBoxPrivate::_dynamic_initializer_for__CVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar,L"Slate.Spinbox.MouseMoveOptimization",&bUseSpinBoxMouseMoveOptimization,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVar__);
  return;
}

// `dynamic_initializer_for_'CVarDownsampleForBlur'' @ 140f43e80

void __cdecl _dynamic_initializer_for__CVarDownsampleForBlur__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDownsampleForBlur,L"Slate.BackgroundBlurDownsample",&bDownsampleForBlur,L"",1);
  atexit(_dynamic_atexit_destructor_for__CVarDownsampleForBlur__);
  return;
}

// `dynamic_initializer_for_'CVarEnableSafeZoneScale'' @ 140f43ed0

void __cdecl _dynamic_initializer_for__CVarEnableSafeZoneScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableSafeZoneScale,L"SafeZone.EnableScale",&bEnableSafeZoneScale,
             L"IS the safe zone scale enabled?",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSafeZoneScale__);
  return;
}

// `dynamic_initializer_for_'CVarForceLowQualityBackgroundBlurOverride'' @ 140f43f20

void __cdecl _dynamic_initializer_for__CVarForceLowQualityBackgroundBlurOverride__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceLowQualityBackgroundBlurOverride,
             L"Slate.ForceBackgroundBlurLowQualityOverride",&bForceLowQualityBrushFallback,
             L"Whether or not to force a slate brush to be used instead of actually blurring the background"
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarForceLowQualityBackgroundBlurOverride__);
  return;
}

// `dynamic_initializer_for_'CVarSafeZoneScale'' @ 140f43f70

void __cdecl _dynamic_initializer_for__CVarSafeZoneScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSafeZoneScale,L"SafeZone.Scale",&GSafeZoneScale,L"The safezone scale.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSafeZoneScale__);
  return;
}

// `dynamic_initializer_for_'CVarSlateAllowBackgroundBlurWidgets'' @ 140f43fc0

void __cdecl _dynamic_initializer_for__CVarSlateAllowBackgroundBlurWidgets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateAllowBackgroundBlurWidgets,L"Slate.AllowBackgroundBlurWidgets",
             &bAllowBackgroundBlur,L"If 0, no background blur widgets will be rendered",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateAllowBackgroundBlurWidgets__);
  return;
}

// `dynamic_initializer_for_'CVarSlateMaxKernelSize'' @ 140f44010

void __cdecl _dynamic_initializer_for__CVarSlateMaxKernelSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateMaxKernelSize,L"Slate.BackgroundBlurMaxKernelSize",&MaxKernelSize,
             L"The maximum allowed kernel size.  Note: Very large numbers can cause a huge decrease in performance"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateMaxKernelSize__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SBackgroundBlur'' @ 140f44060

void __cdecl _dynamic_initializer_for__ClassRegistration__SBackgroundBlur__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SBackgroundBlur");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SBackgroundBlur::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBackgroundBlur::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SBorder'' @ 140f44070

void __cdecl _dynamic_initializer_for__ClassRegistration__SBorder__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SBorder");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SBorder::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBorder::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SBox'' @ 140f44080

void __cdecl _dynamic_initializer_for__ClassRegistration__SBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SBox::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SDPIScaler'' @ 140f44090

void __cdecl _dynamic_initializer_for__ClassRegistration__SDPIScaler__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return;
  }
  pFVar1 = FName::FName(&FStackX_10,"SDPIScaler");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = FName::FName(aFStackX_18,"SlotPadding");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if ((int)uStack_28 != 0) {
    if (FStack_30.Data == (FScriptContainerElement *)0x0) goto LAB_142946c57;
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
LAB_142946c57:
  auStack_38[0] = Prepass;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = FName::FName(aFStackX_18,"DPIScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SDPIScaler::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SExpandableButton'' @ 140f440a0

void __cdecl _dynamic_initializer_for__ClassRegistration__SExpandableButton__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FAttributeEntry *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FDelegateAllocation FStack_58;
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SExpandableButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_38[0] = Paint;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = FName::FName(&FStackX_18,10,L"IsExpanded",FNAME_Add);
      this = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                       (&FStackX_8,&FStack_48,*pFVar1,0x2e0,
                        (FInvalidateWidgetReasonAttribute *)auStack_38);
      FStack_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_58.DelegateSize = 0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&FStack_58);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
                (this,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                       *)&FStack_58);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SExpandableButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SGridPanel'' @ 140f440b0

void __cdecl _dynamic_initializer_for__ClassRegistration__SGridPanel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FContainerInitializer FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  FAttributeEntry FStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = FName::FName(&FStackX_18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_48,*pFVar1,0x218);
      auStack_38[0] = Layout;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = FName::FName(&FStackX_18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&FStack_48,&FStack_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)auStack_38);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SResponsiveGridPanel'' @ 140f440c0

void __cdecl _dynamic_initializer_for__ClassRegistration__SResponsiveGridPanel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FContainerInitializer FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  FAttributeEntry FStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SResponsiveGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = FName::FName(&FStackX_18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_48,*pFVar1,0x218);
      auStack_38[0] = Layout;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = FName::FName(&FStackX_18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&FStack_48,&FStack_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)auStack_38);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SResponsiveGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SScaleBox'' @ 140f440d0

void __cdecl _dynamic_initializer_for__ClassRegistration__SScaleBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SScaleBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SScaleBox::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SScaleBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SSlider'' @ 140f440e0

void __cdecl _dynamic_initializer_for__ClassRegistration__SSlider__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SSlider");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SSlider::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SSlider::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SSpacer'' @ 140f440f0

void __cdecl _dynamic_initializer_for__ClassRegistration__SSpacer__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FAttributeEntry FStack_38;
  undefined1 auStack_28 [8];
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SSpacer");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_28[0] = Layout;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = FName::FName(&FStackX_18,10,L"SpacerSize",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&FStackX_8,&FStack_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)auStack_28)
      ;
      if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        uStack_18 = uStack_18 & 0xffffffff00000000;
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SSpacer::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'OverrideScissorRect'' @ 140f44100

void __cdecl Slate::_dynamic_initializer_for__OverrideScissorRect__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&OverrideScissorRect,L"Slate.OverrideScissorRect",1,
             L"Whether to allow Slate to apply a scissor clip to UI elements to prevent certain artifacts.  You might need to disable this if you are drawing UI over a mirror backbuffer while in VR."
             ,0);
  atexit(_dynamic_atexit_destructor_for__OverrideScissorRect__);
  return;
}

// `dynamic_initializer_for_'SBorderTypeName'' @ 140f44150

void __cdecl _dynamic_initializer_for__SBorderTypeName__(void)

{
  FName::FName(&SBorderTypeName,"SBorder");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h__Script_Slate_557497736'' @ 140f44170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h__Script_Slate_557497736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h__Script_Slate_127819239'' @ 140f441c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h__Script_Slate_127819239__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Slate",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h__Script_Slate_Statics
             ::EnumInfo,2);
  return;
}

// EDescendantScrollDestination_StaticEnum @ 1428a0d30

UEnum * __cdecl EDescendantScrollDestination_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EDescendantScrollDestination,(UObject *)pUVar1,
                       L"EDescendantScrollDestination");
  }
  return Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton;
}

// EScrollWhenFocusChanges_StaticEnum @ 1428a0d70

UEnum * __cdecl EScrollWhenFocusChanges_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EScrollWhenFocusChanges,(UObject *)pUVar1,
                       L"EScrollWhenFocusChanges");
  }
  return Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton;
}

// EStretchDirection_StaticEnum @ 1428a0db0

UEnum * __cdecl EStretchDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EStretchDirection,(UObject *)pUVar1,
                       L"EStretchDirection");
  }
  return Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton;
}

// EStretch_StaticEnum @ 1428a0df0

UEnum * __cdecl EStretch_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EStretch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EStretch,(UObject *)pUVar1,L"EStretch");
  }
  return Z_Registration_Info_UEnum_EStretch.OuterSingleton;
}

// ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot> @ 1428a4630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>
          (EFlowDirection param_1,TPanelChildren<SScrollBox::FSlot> *param_2,FGeometry *param_3,
          FArrangedChildren *param_4,float param_5,bool param_6,TVector2<double> *param_7)

{
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  *pFVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  FDeprecateSlateVector2D *pFVar5;
  TEnumAsByte<EVisibility::Private> TVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FArrangedWidget> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  FGeometry *pFVar12;
  FGeometry *pFVar13;
  bool bVar14;
  bool bVar15;
  FGeometry *this;
  FArrangedChildren *pFVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  EVisibility EVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  FVar24;
  FSlot *pFVar25;
  FDeprecateSlateVector2D FVar26;
  ForElementType<FArrangedWidget> FVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uchar *puVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_458 [32];
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  EFlowDirection local_403;
  undefined8 local_400;
  TPanelChildren<SScrollBox::FSlot> *local_3f8;
  FDeprecateSlateVector2D local_3f0;
  FGeometry *local_3e8;
  double local_3d8;
  double local_3d0;
  FGeometry *local_3c8;
  FArrangedChildren *local_3c0;
  FSlateLayoutTransform local_3b8;
  undefined8 local_3ac;
  undefined8 uStack_3a4;
  undefined8 local_39c;
  uint uStack_394;
  undefined4 uStack_390;
  TVector2<double> *local_388;
  TSharedRef<SWidget,1> local_380 [2];
  undefined4 local_360;
  float fStack_35c;
  undefined4 uStack_358;
  float fStack_354;
  undefined1 local_348 [32];
  float local_328 [3] [2];
  SWidget *local_310;
  FSharedReferencer<1> local_308;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  local_2f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  uVar33 = (param_2->Children).ArrayNum;
  uVar28 = (ulonglong)uVar33;
  local_388 = param_7;
  if (uVar33 != 0) {
    uVar29 = 0;
    fVar40 = 0.0;
    fVar44 = 0.0;
    local_2f8.SecondaryData =
         (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          )0x0;
    fVar42 = 0.0;
    local_ec = 0x10;
    fVar43 = 0.0;
    local_39c = 0;
    uStack_394 = uStack_394 & 0xffffff00;
    uStack_390 = 0;
    local_3ac = 0;
    uStack_3a4 = 0;
    local_403 = param_1;
    local_3f8 = param_2;
    local_3e8 = param_3;
    local_3c0 = param_4;
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar28);
    }
    local_f0 = 0;
    if ((uVar33 == 0x10) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
                  (0x20,4,uVar33,&local_2f8,0,&local_ec), 0 < (int)uVar33)) {
      do {
        FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar24 = local_2f8.SecondaryData;
        }
        if ((ulonglong)FVar24 <= &local_3ac) {
          FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar24 = local_2f8.SecondaryData;
          }
          if ((&local_3ac < (undefined8 *)((longlong)local_ec * 0x20 + (longlong)FVar24)) &&
             (bVar19 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
                               (0x420,&local_2f8,&local_ec);
        }
        lVar23 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar24 = local_2f8.SecondaryData;
        }
        puVar4 = (undefined8 *)(lVar23 * 0x20 + (longlong)FVar24);
        *puVar4 = local_3ac;
        puVar4[1] = uStack_3a4;
        puVar4 = (undefined8 *)(lVar23 * 0x20 + 0x10 + (longlong)FVar24);
        *puVar4 = local_39c;
        puVar4[1] = CONCAT44(uStack_390,uStack_394);
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    fVar38 = __real_7f7fffff;
    bVar19 = false;
    bVar14 = false;
    bVar15 = false;
    uVar28 = uVar29;
    uVar34 = uVar29;
    EVar20.Value.Value = EVisibility::Collapsed.Value.Value;
    if (0 < (param_2->Children).ArrayNum) {
      do {
        uVar31 = (uint)uVar28;
        uVar33 = 0;
        if ((int)uVar31 < (param_2->Children).ArrayNum) {
          uVar33 = ~uVar31 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar21 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), EVar20 = EVisibility::Collapsed, bVar21)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar23 = *(longlong *)((param_2->Children).AllocatorInstance.Data + uVar34);
        if ((TEnumAsByte<EVisibility::Private>)(*(SWidget **)(lVar23 + 0x10))->VisibilityAttribute
            != EVar20.Value.Value) {
          local_360 = *(undefined4 *)(lVar23 + 0x28);
          fStack_35c = *(float *)(lVar23 + 0x2c);
          uStack_358 = *(undefined4 *)(lVar23 + 0x30);
          fStack_354 = *(float *)(lVar23 + 0x34);
          bVar19 = true;
          fVar42 = fVar42 + fStack_354 + fStack_35c;
          local_400 = SWidget::GetDesiredSize(*(SWidget **)(lVar23 + 0x10));
          fVar39 = *(float *)(lVar23 + 0x4c);
          fVar45 = *(float *)(lVar23 + 0x50);
          local_400 = *(FDeprecateSlateVector2D *)local_400;
          uVar33 = 0;
          if ((int)uVar31 < local_f0) {
            uVar33 = ~uVar31 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar24 = local_2f8.SecondaryData;
          }
          *(float *)(uVar29 + 8 + (longlong)FVar24) = fVar39;
          *(float *)(uVar29 + 0xc + (longlong)FVar24) = fVar45;
          iVar22 = *(int *)(lVar23 + 0x40);
          *(int *)(uVar29 + 0x1c + (longlong)FVar24) = iVar22;
          if (fVar45 <= 0.0) {
            fVar45 = fVar38;
          }
          if (fVar39 <= 0.0) {
            fVar39 = 0.0;
          }
          if (local_400._4_4_ <= fVar45) {
            fVar45 = local_400._4_4_;
          }
          if (fVar45 <= fVar39) {
            fVar45 = fVar39;
          }
          EVar20.Value.Value = EVisibility::Collapsed.Value.Value;
          if (iVar22 == 1) {
            fVar39 = *(float *)(lVar23 + 0x44);
            fVar43 = fVar43 + fVar45;
            *(float *)(uVar29 + 0x10 + (longlong)FVar24) = fVar39;
            fVar40 = fVar40 + fVar39;
            *(float *)(uVar29 + 0x14 + (longlong)FVar24) = fVar39;
            fVar44 = fVar44 + fVar39;
            *(undefined8 *)(uVar29 + (longlong)FVar24) = 0;
            bVar14 = true;
          }
          else if (iVar22 == 2) {
            fVar39 = *(float *)(lVar23 + 0x44);
            fVar43 = fVar43 + fVar45;
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
            bVar15 = true;
            *(float *)(uVar29 + 0x10 + (longlong)FVar24) = fVar39;
            fVar40 = fVar40 + fVar39;
            fVar39 = *(float *)(lVar23 + 0x48);
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
            *(float *)(uVar29 + (longlong)FVar24) = fVar45;
            *(float *)(uVar29 + 4 + (longlong)FVar24) = fVar45;
            *(float *)(uVar29 + 0x14 + (longlong)FVar24) = fVar39;
            fVar44 = fVar44 + fVar39;
          }
          else {
            *(float *)(uVar29 + (longlong)FVar24) = fVar45;
            fVar42 = fVar42 + fVar45;
            *(float *)(uVar29 + 4 + (longlong)FVar24) = fVar45;
            *(undefined8 *)(uVar29 + 0x10 + (longlong)FVar24) = 0;
          }
        }
        iVar22 = local_f0;
        this = local_3e8;
        uVar28 = (ulonglong)(uVar31 + 1);
        uVar34 = uVar34 + 8;
        uVar29 = uVar29 + 0x20;
        param_2 = local_3f8;
      } while ((int)(uVar31 + 1) < (local_3f8->Children).ArrayNum);
      if (bVar19) {
        fVar39 = fVar43;
        if (param_6) {
          fVar39 = 0.0;
        }
        local_400 = local_3e8->Size;
        fVar45 = local_400._4_4_ - fVar42;
        if (local_400._4_4_ - fVar42 <= fVar39) {
          fVar45 = fVar39;
        }
        if ((bVar14) && (0.0 < fVar40)) {
          lVar23 = (longlong)local_f0;
          fVar42 = 0.0;
          FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar24 = local_2f8.SecondaryData;
          }
          puVar30 = (uchar *)((longlong)FVar24 + 0x10);
          while( true ) {
            if (local_f0 != iVar22) {
              local_407 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_407);
            }
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar30 + -0x10) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar23 * 0x20 + (longlong)FVar24)) break;
            if (*(float *)(puVar30 + 0xc) == 1.4013e-45) {
              fVar39 = *(float *)(puVar30 + -8);
              fVar35 = (fVar45 * *(float *)puVar30) / fVar40;
              fVar37 = *(float *)(puVar30 + -4);
              if (*(float *)(puVar30 + -4) <= 0.0) {
                fVar37 = fVar38;
              }
              if (fVar37 <= fVar35) {
                fVar35 = fVar37;
              }
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              if (fVar35 <= fVar39) {
                fVar35 = fVar39;
              }
              *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar30 + -0x10))->InlineData = fVar35;
              fVar42 = fVar42 + fVar35;
            }
            puVar30 = puVar30 + 0x20;
          }
          fVar45 = fVar45 - fVar42;
        }
        iVar22 = local_f0;
        uVar33 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar42 = __real_322bcc77;
        bVar19 = fVar45 <= fVar43;
        if (!bVar19) {
          fVar44 = fVar40;
        }
        if ((bVar15) && (0.0 < fVar44)) {
          lVar23 = (longlong)local_f0;
          iVar32 = 0;
          FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar24 = local_2f8.SecondaryData;
          }
          puVar30 = (uchar *)((longlong)FVar24 + 0x18);
          while( true ) {
            if (local_f0 != iVar22) {
              local_406 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_406);
            }
            fVar44 = __real_38d1b717;
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar30 + -0x18) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar23 * 0x20 + (longlong)FVar24)) break;
            if (*(int *)(puVar30 + 4) == 2) {
              fVar45 = fVar45 - *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                                            *)(puVar30 + -0x18))->InlineData;
              iVar32 = iVar32 + 1;
              if (bVar19) {
                uVar31 = *(uint *)(puVar30 + -4);
              }
              else {
                uVar31 = *(uint *)(puVar30 + -8);
              }
              *puVar30 = (float)(uVar31 & uVar33) <= fVar42 | *puVar30;
            }
            puVar30 = puVar30 + 0x20;
          }
          iVar22 = 5;
          if (iVar32 < 5) {
            iVar22 = iVar32;
          }
          iVar32 = 0;
          if (0 < iVar22) {
            do {
              iVar17 = local_f0;
              if ((float)((uint)fVar45 & uVar33) <= fVar42) break;
              lVar23 = (longlong)local_f0;
              fVar40 = 0.0;
              fVar43 = 0.0;
              FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar24 = local_2f8.SecondaryData;
              }
              puVar30 = (uchar *)((longlong)FVar24 + 0x18);
              while( true ) {
                if (local_f0 != iVar17) {
                  local_405 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_405);
                }
                iVar18 = local_f0;
                if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(puVar30 + -0x18) ==
                    (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(lVar23 * 0x20 + (longlong)FVar24)) break;
                if ((*(int *)(puVar30 + 4) == 2) && (*puVar30 == '\0')) {
                  fVar40 = fVar40 + *(float *)(puVar30 + -8);
                  fVar43 = fVar43 + *(float *)(puVar30 + -0x14) * *(float *)(puVar30 + -4);
                }
                puVar30 = puVar30 + 0x20;
              }
              fVar38 = fVar43;
              if (!bVar19) {
                fVar38 = fVar40;
              }
              if (fVar38 < fVar44) break;
              lVar23 = (longlong)local_f0;
              fVar38 = 0.0;
              FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar24 = local_2f8.SecondaryData;
              }
              puVar30 = (uchar *)((longlong)FVar24 + 0x10);
              while( true ) {
                if (local_f0 != iVar18) {
                  local_404 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_404);
                }
                pFVar1 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar30 + -0x10);
                if (pFVar1 == (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                               *)(lVar23 * 0x20 + (longlong)FVar24)) break;
                if ((*(float *)(puVar30 + 0xc) == 2.8026e-45) && (puVar30[8] == '\0')) {
                  if (bVar19) {
                    fVar39 = (*(float *)(puVar30 + -0xc) * *(float *)(puVar30 + 4)) / fVar43;
                  }
                  else {
                    fVar39 = *(float *)puVar30 / fVar40;
                  }
                  fVar39 = fVar39 * fVar45;
                  if ((float)((uint)fVar39 & uVar33) <= fVar42) {
                    puVar30[8] = '\x01';
                    puVar30 = puVar30 + 0x20;
                  }
                  else {
                    fVar35 = *(float *)pFVar1->InlineData;
                    fVar37 = *(float *)(puVar30 + -8);
                    fVar36 = fVar39 + fVar35;
                    fVar41 = *(float *)(puVar30 + -4);
                    if (fVar36 <= fVar37) {
                      puVar30[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar37;
                      puVar30 = puVar30 + 0x20;
                      fVar38 = fVar38 + (fVar37 - fVar35);
                    }
                    else {
                      if ((fVar41 <= 0.0) || (fVar36 < fVar41)) {
                        *(float *)pFVar1->InlineData = fVar36;
                        fVar38 = fVar38 + fVar39;
                        goto LAB_1428a4e27;
                      }
                      puVar30[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar41;
                      puVar30 = puVar30 + 0x20;
                      fVar38 = fVar38 + (fVar41 - fVar35);
                    }
                  }
                }
                else {
LAB_1428a4e27:
                  puVar30 = puVar30 + 0x20;
                }
              }
              iVar32 = iVar32 + 1;
              fVar45 = fVar45 - fVar38;
            } while (iVar32 < iVar22);
          }
        }
        pFVar16 = local_3c0;
        fVar44 = 0.0;
        iVar22 = (local_3c0->Array).ArrayNum;
        pTVar2 = &local_3c0->Array;
        uVar33 = (local_3f8->Children).ArrayNum + iVar22;
        if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
        }
        piVar3 = &(local_3c0->Array).ArrayMax;
        if (*piVar3 < (int)uVar33) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,uVar33,&pTVar2->AllocatorInstance,iVar22,piVar3);
        }
        local_3d8 = __real_47efffffe0000000;
        local_3d0 = __real_47efffffe0000000;
        local_3c8 = __real_3810000000000000;
        local_3e8 = __real_3810000000000000;
        dVar10 = __real_47efffffe0000000;
        dVar11 = __real_47efffffe0000000;
        pFVar12 = __real_3810000000000000;
        pFVar13 = __real_3810000000000000;
        for (uVar33 = 0; (-1 < (int)uVar33 && ((int)uVar33 < (local_3f8->Children).ArrayNum));
            uVar33 = uVar33 + 1) {
          pFVar25 = TPanelChildren<SScrollBox::FSlot>::operator[](local_3f8,uVar33);
          TVar6.Value = *(byte *)(pFVar25->_padding_ + 0x39);
          uVar31 = 0;
          if ((int)uVar33 < local_f0) {
            uVar31 = ~uVar33 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar19 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar40 = *(float *)((longlong)&pFVar25->_padding_ + 4);
          fVar42 = *(float *)((longlong)&pFVar25->_padding_ + 4);
          FVar24 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar24 = local_2f8.SecondaryData;
          }
          fVar43 = *(float *)((longlong)(int)uVar33 * 0x20 + (longlong)FVar24);
          fVar38 = *(float *)&pFVar25->_padding_;
          fVar39 = *(float *)&pFVar25->_padding_;
          if (local_403 == RightToLeft) {
            fVar38 = *(float *)&pFVar25->_padding_;
            fVar39 = *(float *)&pFVar25->_padding_;
          }
          local_3f0 = this->Size;
          iVar22 = (int)pFVar25->_padding_;
          fVar45 = fVar38 + fVar39;
          fVar35 = fVar40 + fVar42 + fVar43;
          if ((local_403 == LeftToRight) || (local_403 != RightToLeft)) {
LAB_1428a502a:
            fVar41 = (float)local_3f0._0_4_;
            fVar45 = (float)local_3f0._0_4_ - fVar45;
            if (iVar22 == 0) {
LAB_1428a50a4:
              fVar37 = fVar45;
              if (fVar45 <= 0.0) {
                fVar37 = 0.0;
              }
            }
            else {
              FVar26 = SWidget::GetDesiredSize((SWidget *)pFVar25->_padding_);
              fVar37 = fVar45;
              if (*(float *)FVar26 <= fVar45) {
                fVar37 = *(float *)FVar26;
              }
              if (fVar37 <= 0.0) {
                fVar37 = 0.0;
              }
              if (iVar22 != 1) {
                if (iVar22 != 2) {
                  if (iVar22 == 3) goto LAB_1428a5069;
                  goto LAB_1428a50a4;
                }
                fVar38 = ((fVar41 - fVar37) * __real_3f000000 + fVar38) - fVar39;
              }
            }
          }
          else if (iVar22 == 1) {
            FVar26 = SWidget::GetDesiredSize((SWidget *)pFVar25->_padding_);
            fVar37 = (float)local_3f0._0_4_ - fVar45;
            if (*(float *)FVar26 <= (float)local_3f0._0_4_ - fVar45) {
              fVar37 = *(float *)FVar26;
            }
            fVar41 = (float)local_3f0._0_4_;
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
LAB_1428a5069:
            fVar38 = (fVar41 - fVar37) - fVar39;
          }
          else {
            if (iVar22 != 3) goto LAB_1428a502a;
            FVar26 = SWidget::GetDesiredSize((SWidget *)pFVar25->_padding_);
            fVar37 = (float)local_3f0._0_4_ - fVar45;
            if (*(float *)FVar26 <= (float)local_3f0._0_4_ - fVar45) {
              fVar37 = *(float *)FVar26;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
          }
          fVar39 = __real_3f000000;
          iVar22 = *(int *)((longlong)&pFVar25->_padding_ + 4);
          if (iVar22 == 0) {
LAB_1428a511d:
            local_400._4_4_ = fVar43;
            if (fVar43 <= 0.0) {
              local_400._4_4_ = 0.0;
            }
          }
          else {
            FVar26 = SWidget::GetDesiredSize((SWidget *)pFVar25->_padding_);
            local_400._4_4_ = *(float *)((longlong)FVar26 + 4);
            if (fVar43 <= *(float *)((longlong)FVar26 + 4)) {
              local_400._4_4_ = fVar43;
            }
            if (local_400._4_4_ <= 0.0) {
              local_400._4_4_ = 0.0;
            }
            if (iVar22 != 1) {
              if (iVar22 == 2) {
                fVar40 = ((fVar35 - local_400._4_4_) * fVar39 + fVar40) - fVar42;
              }
              else {
                if (iVar22 != 3) goto LAB_1428a511d;
                fVar40 = (fVar35 - local_400._4_4_) - fVar42;
              }
            }
          }
          pTVar7 = (TReferenceControllerBase<1> *)pFVar25->_padding_;
          local_380[0].Object = (SWidget *)pFVar25->_padding_;
          local_400._0_4_ = fVar37;
          local_3b8.Translation.field0_0x0._s_0.Y = fVar40 + fVar44 + param_5;
          dVar10 = (double)fVar38;
          if (local_3d8 <= (double)fVar38) {
            dVar10 = local_3d8;
          }
          dVar11 = (double)local_3b8.Translation.field0_0x0._s_0.Y;
          if (local_3d0 <= (double)local_3b8.Translation.field0_0x0._s_0.Y) {
            dVar11 = local_3d0;
          }
          pFVar12 = (FGeometry *)(double)(fVar37 + fVar38);
          if ((double)(fVar37 + fVar38) <= (double)local_3c8) {
            pFVar12 = local_3c8;
          }
          pFVar13 = (FGeometry *)(double)(local_3b8.Translation.field0_0x0._s_0.Y + local_400._4_4_)
          ;
          if ((double)(local_3b8.Translation.field0_0x0._s_0.Y + local_400._4_4_) <=
              (double)local_3e8) {
            pFVar13 = local_3e8;
          }
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3f0 = local_400;
          local_3b8.Scale = 1.0;
          local_3e8 = pFVar13;
          local_3d8 = dVar10;
          local_3d0 = dVar11;
          local_3c8 = pFVar12;
          local_3b8.Translation.field0_0x0._s_0.X = fVar38;
          local_380[0].SharedReferenceCount.ReferenceController = pTVar7;
          FGeometry::MakeChild
                    (this,(FArrangedWidget *)local_348,local_380,
                     (FDeprecateVector2DParameter *)&local_3f0,&local_3b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          if (((local_3c0->VisibilityFilter).Value.Value & TVar6.Value) != 0) {
            FVar8 = (pFVar16->Array).AllocatorInstance.SecondaryData;
            FVar27 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
              FVar27 = FVar8;
            }
            if ((ulonglong)FVar27 <= local_348) {
              FVar27 = (ForElementType<FArrangedWidget>)pTVar2;
              if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
                FVar27 = FVar8;
              }
              if ((local_348 < (undefined1 *)((longlong)FVar27 + (longlong)*piVar3 * 0x48)) &&
                 (bVar19 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar22 = (pFVar16->Array).ArrayNum;
            if (iVar22 == *piVar3) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,&pTVar2->AllocatorInstance,piVar3);
            }
            (pFVar16->Array).ArrayNum = iVar22 + 1;
            FVar8 = (pFVar16->Array).AllocatorInstance.SecondaryData;
            lVar23 = (longlong)iVar22;
            FVar27 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
              FVar27 = FVar8;
            }
            pFVar5 = (FDeprecateSlateVector2D *)((longlong)FVar27 + lVar23 * 0x48);
            *pFVar5 = (FDeprecateSlateVector2D)local_348._0_8_;
            pFVar5[1] = (FDeprecateSlateVector2D)local_348._8_8_;
            *(undefined8 *)((uchar *)((longlong)FVar27 + 0x10) + lVar23 * 0x48) = local_348._16_8_;
            *(undefined8 *)((uchar *)((longlong)FVar27 + 0x10) + lVar23 * 0x48 + 8) =
                 local_348._24_8_;
            *(float (*) [2])((uchar *)((longlong)FVar27 + 0x20) + lVar23 * 0x48) = local_328[0];
            *(float (*) [2])((uchar *)((longlong)FVar27 + 0x20) + lVar23 * 0x48 + 8) = local_328[1];
            *(float (*) [2])((uchar *)((longlong)FVar27 + 0x30) + lVar23 * 0x48) = local_328[2];
            *(SWidget **)((uchar *)((longlong)FVar27 + 0x38) + lVar23 * 0x48) = local_310;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar27 + 0x40) + lVar23 * 0x48) =
                 local_308.ReferenceController;
            if (local_308.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_308.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_308.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_308.ReferenceController);
          if ((TEnumAsByte<EVisibility::Private>)TVar6.Value != EVisibility::Collapsed.Value.Value)
          {
            fVar44 = fVar44 + fVar35;
          }
        }
        (local_388->field0_0x0)._s_0.X = (double)pFVar12 - dVar10;
        (local_388->field0_0x0)._s_0.Y = (double)pFVar13 - dVar11;
      }
    }
    if (local_2f8.SecondaryData !=
        (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
         )0x0) {
      FMemory::Free((void *)local_2f8.SecondaryData);
    }
  }
  return;
}

// ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot> @ 1428a5420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>
          (EFlowDirection param_1,TPanelChildren<SScrollBox::FSlot> *param_2,FGeometry *param_3,
          FArrangedChildren *param_4,float param_5,bool param_6,TVector2<double> *param_7)

{
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  *pFVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  float fVar5;
  TEnumAsByte<EVisibility::Private> TVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FArrangedWidget> FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  FArrangedChildren *pFVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  EVisibility EVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  FVar26;
  FSlot *pFVar27;
  FDeprecateSlateVector2D FVar28;
  ForElementType<FArrangedWidget> FVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uchar *puVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_448 [32];
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined1 local_3f4;
  undefined1 local_3f3 [3];
  TPanelChildren<SScrollBox::FSlot> *local_3f0;
  undefined8 local_3e8;
  FGeometry *local_3e0;
  undefined8 local_3d8;
  double local_3c8;
  double local_3c0;
  FArrangedChildren *local_3b8;
  FSlateLayoutTransform local_3b0;
  undefined8 local_3a4;
  undefined8 uStack_39c;
  undefined8 local_394;
  uint uStack_38c;
  undefined4 uStack_388;
  TVector2<double> *local_380;
  TSharedRef<SWidget,1> local_378 [2];
  float local_358;
  undefined4 uStack_354;
  float fStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  TReferenceControllerBase<1> *local_308;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  local_2f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  uVar35 = (param_2->Children).ArrayNum;
  uVar30 = (ulonglong)uVar35;
  local_380 = param_7;
  if (uVar35 != 0) {
    uVar31 = 0;
    fVar41 = 0.0;
    fVar44 = 0.0;
    local_2f8.SecondaryData =
         (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          )0x0;
    fVar42 = 0.0;
    local_ec = 0x10;
    fVar43 = 0.0;
    local_394 = 0;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = 0;
    local_3a4 = 0;
    uStack_39c = 0;
    local_3f0 = param_2;
    local_3e0 = param_3;
    local_3b8 = param_4;
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar30);
    }
    local_f0 = 0;
    if ((uVar35 == 0x10) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
                  (0x20,4,uVar35,&local_2f8,0,&local_ec), 0 < (int)uVar35)) {
      do {
        FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar26 = local_2f8.SecondaryData;
        }
        if ((ulonglong)FVar26 <= &local_3a4) {
          FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar26 = local_2f8.SecondaryData;
          }
          if ((&local_3a4 < (undefined8 *)((longlong)local_ec * 0x20 + (longlong)FVar26)) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
                               (0x420,&local_2f8,&local_ec);
        }
        lVar25 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar26 = local_2f8.SecondaryData;
        }
        puVar4 = (undefined8 *)(lVar25 * 0x20 + (longlong)FVar26);
        *puVar4 = local_3a4;
        puVar4[1] = uStack_39c;
        puVar4 = (undefined8 *)(lVar25 * 0x20 + 0x10 + (longlong)FVar26);
        *puVar4 = local_394;
        puVar4[1] = CONCAT44(uStack_388,uStack_38c);
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    fVar39 = __real_7f7fffff;
    bVar21 = false;
    bVar16 = false;
    bVar17 = false;
    uVar30 = uVar31;
    uVar36 = uVar31;
    EVar22.Value.Value = EVisibility::Collapsed.Value.Value;
    if (0 < (param_2->Children).ArrayNum) {
      do {
        uVar33 = (uint)uVar30;
        uVar35 = 0;
        if ((int)uVar33 < (param_2->Children).ArrayNum) {
          uVar35 = ~uVar33 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar23 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), EVar22 = EVisibility::Collapsed, bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar25 = *(longlong *)((param_2->Children).AllocatorInstance.Data + uVar36);
        if ((TEnumAsByte<EVisibility::Private>)(*(SWidget **)(lVar25 + 0x10))->VisibilityAttribute
            != EVar22.Value.Value) {
          local_358 = *(float *)(lVar25 + 0x28);
          uStack_354 = *(undefined4 *)(lVar25 + 0x2c);
          fStack_350 = *(float *)(lVar25 + 0x30);
          uStack_34c = *(undefined4 *)(lVar25 + 0x34);
          bVar21 = true;
          fVar42 = fVar42 + fStack_350 + local_358;
          local_3e8 = SWidget::GetDesiredSize(*(SWidget **)(lVar25 + 0x10));
          fVar40 = *(float *)(lVar25 + 0x4c);
          fVar46 = *(float *)(lVar25 + 0x50);
          local_3e8 = *(FDeprecateSlateVector2D *)local_3e8;
          uVar35 = 0;
          if ((int)uVar33 < local_f0) {
            uVar35 = ~uVar33 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar23 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar26 = local_2f8.SecondaryData;
          }
          *(float *)(uVar31 + 8 + (longlong)FVar26) = fVar40;
          *(float *)(uVar31 + 0xc + (longlong)FVar26) = fVar46;
          iVar24 = *(int *)(lVar25 + 0x40);
          *(int *)(uVar31 + 0x1c + (longlong)FVar26) = iVar24;
          if (fVar46 <= 0.0) {
            fVar46 = fVar39;
          }
          if (fVar40 <= 0.0) {
            fVar40 = 0.0;
          }
          if ((float)local_3e8 <= fVar46) {
            fVar46 = (float)local_3e8;
          }
          if (fVar46 <= fVar40) {
            fVar46 = fVar40;
          }
          EVar22.Value.Value = EVisibility::Collapsed.Value.Value;
          if (iVar24 == 1) {
            fVar40 = *(float *)(lVar25 + 0x44);
            fVar43 = fVar43 + fVar46;
            *(float *)(uVar31 + 0x10 + (longlong)FVar26) = fVar40;
            fVar41 = fVar41 + fVar40;
            *(float *)(uVar31 + 0x14 + (longlong)FVar26) = fVar40;
            fVar44 = fVar44 + fVar40;
            *(undefined8 *)(uVar31 + (longlong)FVar26) = 0;
            bVar16 = true;
          }
          else if (iVar24 == 2) {
            fVar40 = *(float *)(lVar25 + 0x44);
            fVar43 = fVar43 + fVar46;
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            bVar17 = true;
            *(float *)(uVar31 + 0x10 + (longlong)FVar26) = fVar40;
            fVar41 = fVar41 + fVar40;
            fVar40 = *(float *)(lVar25 + 0x48);
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            *(float *)(uVar31 + (longlong)FVar26) = fVar46;
            *(float *)(uVar31 + 4 + (longlong)FVar26) = fVar46;
            *(float *)(uVar31 + 0x14 + (longlong)FVar26) = fVar40;
            fVar44 = fVar44 + fVar40;
          }
          else {
            *(float *)(uVar31 + (longlong)FVar26) = fVar46;
            fVar42 = fVar42 + fVar46;
            *(float *)(uVar31 + 4 + (longlong)FVar26) = fVar46;
            *(undefined8 *)(uVar31 + 0x10 + (longlong)FVar26) = 0;
          }
        }
        iVar24 = local_f0;
        uVar30 = (ulonglong)(uVar33 + 1);
        uVar36 = uVar36 + 8;
        uVar31 = uVar31 + 0x20;
        param_2 = local_3f0;
      } while ((int)(uVar33 + 1) < (local_3f0->Children).ArrayNum);
      if (bVar21) {
        fVar40 = fVar43;
        if (param_6) {
          fVar40 = 0.0;
        }
        local_3e8 = local_3e0->Size;
        fVar46 = (float)local_3e8 - fVar42;
        if ((float)local_3e8 - fVar42 <= fVar40) {
          fVar46 = fVar40;
        }
        if ((bVar16) && (0.0 < fVar41)) {
          lVar25 = (longlong)local_f0;
          fVar42 = 0.0;
          FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar26 = local_2f8.SecondaryData;
          }
          puVar32 = (uchar *)((longlong)FVar26 + 0x10);
          while( true ) {
            if (local_f0 != iVar24) {
              local_3f6 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3f6);
            }
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar32 + -0x10) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar25 * 0x20 + (longlong)FVar26)) break;
            if (*(float *)(puVar32 + 0xc) == 1.4013e-45) {
              fVar40 = *(float *)(puVar32 + -8);
              fVar37 = (fVar46 * *(float *)puVar32) / fVar41;
              fVar45 = *(float *)(puVar32 + -4);
              if (*(float *)(puVar32 + -4) <= 0.0) {
                fVar45 = fVar39;
              }
              if (fVar45 <= fVar37) {
                fVar37 = fVar45;
              }
              if (fVar40 <= 0.0) {
                fVar40 = 0.0;
              }
              if (fVar37 <= fVar40) {
                fVar37 = fVar40;
              }
              *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar32 + -0x10))->InlineData = fVar37;
              fVar42 = fVar42 + fVar37;
            }
            puVar32 = puVar32 + 0x20;
          }
          fVar46 = fVar46 - fVar42;
        }
        iVar24 = local_f0;
        uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar42 = __real_322bcc77;
        bVar21 = fVar46 <= fVar43;
        if (!bVar21) {
          fVar44 = fVar41;
        }
        if ((bVar17) && (0.0 < fVar44)) {
          lVar25 = (longlong)local_f0;
          iVar34 = 0;
          FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar26 = local_2f8.SecondaryData;
          }
          puVar32 = (uchar *)((longlong)FVar26 + 0x18);
          while( true ) {
            if (local_f0 != iVar24) {
              local_3f5 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3f5);
            }
            fVar44 = __real_38d1b717;
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar32 + -0x18) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar25 * 0x20 + (longlong)FVar26)) break;
            if (*(int *)(puVar32 + 4) == 2) {
              fVar46 = fVar46 - *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                                            *)(puVar32 + -0x18))->InlineData;
              iVar34 = iVar34 + 1;
              if (bVar21) {
                uVar33 = *(uint *)(puVar32 + -4);
              }
              else {
                uVar33 = *(uint *)(puVar32 + -8);
              }
              *puVar32 = (float)(uVar33 & uVar35) <= fVar42 | *puVar32;
            }
            puVar32 = puVar32 + 0x20;
          }
          iVar24 = 5;
          if (iVar34 < 5) {
            iVar24 = iVar34;
          }
          iVar34 = 0;
          if (0 < iVar24) {
            do {
              iVar19 = local_f0;
              if ((float)((uint)fVar46 & uVar35) <= fVar42) break;
              lVar25 = (longlong)local_f0;
              fVar41 = 0.0;
              fVar43 = 0.0;
              FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar26 = local_2f8.SecondaryData;
              }
              puVar32 = (uchar *)((longlong)FVar26 + 0x18);
              while( true ) {
                if (local_f0 != iVar19) {
                  local_3f4 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_3f4);
                }
                iVar20 = local_f0;
                if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(puVar32 + -0x18) ==
                    (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(lVar25 * 0x20 + (longlong)FVar26)) break;
                if ((*(int *)(puVar32 + 4) == 2) && (*puVar32 == '\0')) {
                  fVar41 = fVar41 + *(float *)(puVar32 + -8);
                  fVar43 = fVar43 + *(float *)(puVar32 + -0x14) * *(float *)(puVar32 + -4);
                }
                puVar32 = puVar32 + 0x20;
              }
              fVar39 = fVar43;
              if (!bVar21) {
                fVar39 = fVar41;
              }
              if (fVar39 < fVar44) break;
              lVar25 = (longlong)local_f0;
              fVar39 = 0.0;
              FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar26 = local_2f8.SecondaryData;
              }
              puVar32 = (uchar *)((longlong)FVar26 + 0x10);
              while( true ) {
                if (local_f0 != iVar20) {
                  local_3f3[0] = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_3f3);
                }
                pFVar1 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar32 + -0x10);
                if (pFVar1 == (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                               *)(lVar25 * 0x20 + (longlong)FVar26)) break;
                if ((*(float *)(puVar32 + 0xc) == 2.8026e-45) && (puVar32[8] == '\0')) {
                  if (bVar21) {
                    fVar40 = (*(float *)(puVar32 + -0xc) * *(float *)(puVar32 + 4)) / fVar43;
                  }
                  else {
                    fVar40 = *(float *)puVar32 / fVar41;
                  }
                  fVar40 = fVar40 * fVar46;
                  if ((float)((uint)fVar40 & uVar35) <= fVar42) {
                    puVar32[8] = '\x01';
                    puVar32 = puVar32 + 0x20;
                  }
                  else {
                    fVar37 = *(float *)pFVar1->InlineData;
                    fVar45 = *(float *)(puVar32 + -8);
                    fVar38 = fVar40 + fVar37;
                    fVar5 = *(float *)(puVar32 + -4);
                    if (fVar38 <= fVar45) {
                      puVar32[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar45;
                      puVar32 = puVar32 + 0x20;
                      fVar39 = fVar39 + (fVar45 - fVar37);
                    }
                    else {
                      if ((fVar5 <= 0.0) || (fVar38 < fVar5)) {
                        *(float *)pFVar1->InlineData = fVar38;
                        fVar39 = fVar39 + fVar40;
                        goto LAB_1428a5c07;
                      }
                      puVar32[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar5;
                      puVar32 = puVar32 + 0x20;
                      fVar39 = fVar39 + (fVar5 - fVar37);
                    }
                  }
                }
                else {
LAB_1428a5c07:
                  puVar32 = puVar32 + 0x20;
                }
              }
              iVar34 = iVar34 + 1;
              fVar46 = fVar46 - fVar39;
            } while (iVar34 < iVar24);
          }
        }
        pFVar18 = local_3b8;
        fVar44 = 0.0;
        iVar24 = (local_3b8->Array).ArrayNum;
        pTVar2 = &local_3b8->Array;
        uVar35 = (local_3f0->Children).ArrayNum + iVar24;
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        piVar3 = &(local_3b8->Array).ArrayMax;
        if (*piVar3 < (int)uVar35) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,uVar35,&pTVar2->AllocatorInstance,iVar24,piVar3);
        }
        local_3c8 = __real_47efffffe0000000;
        local_3c0 = __real_47efffffe0000000;
        dVar10 = __real_47efffffe0000000;
        dVar11 = __real_47efffffe0000000;
        dVar13 = __real_3810000000000000;
        dVar15 = __real_3810000000000000;
        if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
          uVar35 = 0;
        }
        else {
          uVar35 = (local_3f0->Children).ArrayNum - 1;
        }
        while ((fVar41 = __real_3f000000, -1 < (int)uVar35 &&
               ((int)uVar35 < (local_3f0->Children).ArrayNum))) {
          pFVar27 = TPanelChildren<SScrollBox::FSlot>::operator[](local_3f0,uVar35);
          TVar6.Value = *(byte *)(pFVar27->_padding_ + 0x39);
          uVar33 = 0;
          if ((int)uVar35 < local_f0) {
            uVar33 = ~uVar35 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar21 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar42 = *(float *)((longlong)&pFVar27->_padding_ + 4);
          fVar43 = *(float *)((longlong)&pFVar27->_padding_ + 4);
          FVar26 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar26 = local_2f8.SecondaryData;
          }
          fVar39 = *(float *)((longlong)(int)uVar35 * 0x20 + (longlong)FVar26);
          fVar40 = *(float *)&pFVar27->_padding_;
          fVar46 = *(float *)&pFVar27->_padding_;
          if (param_1 == RightToLeft) {
            fVar40 = *(float *)&pFVar27->_padding_;
            fVar46 = *(float *)&pFVar27->_padding_;
          }
          iVar24 = (int)pFVar27->_padding_;
          local_3d8 = local_3e0->Size;
          fVar45 = fVar46 + fVar40 + fVar39;
          fVar37 = fVar39;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_1428a5df3:
            if (iVar24 == 0) {
LAB_1428a5e56:
              fVar37 = fVar39;
              if (fVar39 <= 0.0) {
                fVar37 = 0.0;
              }
            }
            else {
              FVar28 = SWidget::GetDesiredSize((SWidget *)pFVar27->_padding_);
              if (*(float *)FVar28 <= fVar39) {
                fVar37 = *(float *)FVar28;
              }
              if (fVar37 <= 0.0) {
                fVar37 = 0.0;
              }
              if (iVar24 != 1) {
                if (iVar24 != 2) {
                  if (iVar24 == 3) goto LAB_1428a5e23;
                  goto LAB_1428a5e56;
                }
                fVar46 = ((fVar45 - fVar37) * fVar41 + fVar46) - fVar40;
              }
            }
          }
          else if (iVar24 == 1) {
            FVar28 = SWidget::GetDesiredSize((SWidget *)pFVar27->_padding_);
            if (*(float *)FVar28 <= fVar39) {
              fVar37 = *(float *)FVar28;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
LAB_1428a5e23:
            fVar46 = (fVar45 - fVar37) - fVar40;
          }
          else {
            if (iVar24 != 3) goto LAB_1428a5df3;
            FVar28 = SWidget::GetDesiredSize((SWidget *)pFVar27->_padding_);
            fVar37 = *(float *)FVar28;
            if (fVar39 <= *(float *)FVar28) {
              fVar37 = fVar39;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
          }
          fVar41 = local_3d8._4_4_;
          iVar24 = *(int *)((longlong)&pFVar27->_padding_ + 4);
          fVar39 = local_3d8._4_4_ - (fVar42 + fVar43);
          if (iVar24 == 0) {
LAB_1428a5ee9:
            local_3e8._4_4_ = fVar39;
            if (fVar39 <= 0.0) {
              local_3e8._4_4_ = 0.0;
            }
          }
          else {
            FVar28 = SWidget::GetDesiredSize((SWidget *)pFVar27->_padding_);
            local_3e8._4_4_ = *(float *)((longlong)FVar28 + 4);
            if (fVar39 <= *(float *)((longlong)FVar28 + 4)) {
              local_3e8._4_4_ = fVar39;
            }
            if (local_3e8._4_4_ <= 0.0) {
              local_3e8._4_4_ = 0.0;
            }
            if (iVar24 != 1) {
              if (iVar24 == 2) {
                fVar42 = ((fVar41 - local_3e8._4_4_) * __real_3f000000 + fVar42) - fVar43;
              }
              else {
                if (iVar24 != 3) goto LAB_1428a5ee9;
                fVar42 = (fVar41 - local_3e8._4_4_) - fVar43;
              }
            }
          }
          pTVar7 = (TReferenceControllerBase<1> *)pFVar27->_padding_;
          local_378[0].Object = (SWidget *)pFVar27->_padding_;
          local_3e8._0_4_ = fVar37;
          local_3b0.Translation.field0_0x0._s_0.X = fVar46 + fVar44 + param_5;
          dVar10 = (double)fVar42;
          if (local_3c0 <= (double)fVar42) {
            dVar10 = local_3c0;
          }
          dVar11 = (double)local_3b0.Translation.field0_0x0._s_0.X;
          if (local_3c8 <= (double)local_3b0.Translation.field0_0x0._s_0.X) {
            dVar11 = local_3c8;
          }
          dVar12 = (double)(local_3b0.Translation.field0_0x0._s_0.X + fVar37);
          if ((double)(local_3b0.Translation.field0_0x0._s_0.X + fVar37) <= dVar13) {
            dVar12 = dVar13;
          }
          dVar14 = (double)(fVar42 + local_3e8._4_4_);
          if ((double)(fVar42 + local_3e8._4_4_) <= dVar15) {
            dVar14 = dVar15;
          }
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3d8 = local_3e8;
          local_3b0.Scale = 1.0;
          local_3c8 = dVar11;
          local_3c0 = dVar10;
          local_3b0.Translation.field0_0x0._s_0.Y = fVar42;
          local_378[0].SharedReferenceCount.ReferenceController = pTVar7;
          FGeometry::MakeChild
                    (local_3e0,(FArrangedWidget *)&local_348,local_378,
                     (FDeprecateVector2DParameter *)&local_3d8,&local_3b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          if (((local_3b8->VisibilityFilter).Value.Value & TVar6.Value) != 0) {
            FVar8 = (pFVar18->Array).AllocatorInstance.SecondaryData;
            FVar29 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
              FVar29 = FVar8;
            }
            if ((ulonglong)FVar29 <= &local_348) {
              FVar29 = (ForElementType<FArrangedWidget>)pTVar2;
              if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
                FVar29 = FVar8;
              }
              if ((&local_348 < (ulonglong)((longlong)FVar29 + (longlong)*piVar3 * 0x48)) &&
                 (bVar21 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar24 = (pFVar18->Array).ArrayNum;
            if (iVar24 == *piVar3) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,&pTVar2->AllocatorInstance,piVar3);
            }
            (pFVar18->Array).ArrayNum = iVar24 + 1;
            FVar8 = (pFVar18->Array).AllocatorInstance.SecondaryData;
            lVar25 = (longlong)iVar24;
            FVar29 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
              FVar29 = FVar8;
            }
            puVar4 = (undefined8 *)((longlong)FVar29 + lVar25 * 0x48);
            *puVar4 = local_348;
            puVar4[1] = uStack_340;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x10) + lVar25 * 0x48) = local_338;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x10) + lVar25 * 0x48 + 8) = uStack_330;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x20) + lVar25 * 0x48) = local_328;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x20) + lVar25 * 0x48 + 8) = uStack_320;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x30) + lVar25 * 0x48) = local_318;
            *(undefined8 *)((uchar *)((longlong)FVar29 + 0x38) + lVar25 * 0x48) = local_310;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar29 + 0x40) + lVar25 * 0x48) =
                 local_308;
            if (local_308 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_308->SharedReferenceCount =
                   (atomic<int>)((int)local_308->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_308);
          if ((TEnumAsByte<EVisibility::Private>)TVar6.Value != EVisibility::Collapsed.Value.Value)
          {
            fVar44 = fVar44 + fVar45;
          }
          dVar13 = dVar12;
          dVar15 = dVar14;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
            uVar35 = uVar35 + 1;
          }
          else {
            uVar35 = uVar35 - 1;
          }
        }
        (local_380->field0_0x0)._s_0.X = dVar13 - dVar11;
        (local_380->field0_0x0)._s_0.Y = dVar15 - dVar10;
      }
    }
    if (local_2f8.SecondaryData !=
        (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
         )0x0) {
      FMemory::Free((void *)local_2f8.SecondaryData);
    }
  }
  return;
}

// ArrangeSingleChild<FBasicLayoutWidgetSlot> @ 1428a6200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ArrangeSingleChild<FBasicLayoutWidgetSlot>
          (EFlowDirection param_1,FGeometry *param_2,FArrangedChildren *param_3,
          FBasicLayoutWidgetSlot *param_4,TVector2<double> *param_5)

{
  EVisibility EVar1;
  int iVar2;
  SWidget *this;
  float fVar3;
  double dVar4;
  FDeprecateSlateVector2D FVar5;
  FArrangedWidget *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_158 [32];
  undefined8 local_128;
  FSlateLayoutTransform local_120 [2];
  FArrangedWidget local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = *(SWidget **)&param_4->field_0x10;
  EVar1.Value.Value = *(TEnumAsByte<EVisibility::Private> *)&this->VisibilityAttribute;
  if (((param_3->VisibilityFilter).Value.Value & (byte)EVar1.Value.Value) == 0) {
    return;
  }
  fVar10 = *(float *)&param_4->field_0x2c;
  fVar3 = *(float *)&param_4->field_0x34;
  dVar4 = (param_5->field0_0x0)._s_0.Y;
  fVar9 = *(float *)&param_4->field_0x30;
  fVar12 = *(float *)&param_4->field_0x28;
  if (param_1 == RightToLeft) {
    fVar9 = *(float *)&param_4->field_0x28;
    fVar12 = *(float *)&param_4->field_0x30;
  }
  local_128 = param_2->Size;
  iVar2 = *(int *)&param_4->field_0x38;
  fVar13 = fVar9 + fVar12;
  fVar8 = (float)local_128;
  fVar11 = (float)(param_5->field0_0x0)._s_0.X;
  if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_1428a6335:
    fVar13 = (float)local_128 - fVar13;
    if (iVar2 == 0) {
LAB_1428a63ac:
      fVar7 = fVar11 * fVar13;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
    else {
      FVar5 = SWidget::GetDesiredSize(this);
      fVar7 = fVar11 * *(float *)FVar5;
      if (fVar13 <= fVar11 * *(float *)FVar5) {
        fVar7 = fVar13;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (iVar2 != 1) {
        if (iVar2 != 2) {
          if (iVar2 == 3) goto LAB_1428a6374;
          goto LAB_1428a63ac;
        }
        fVar12 = ((fVar8 - fVar7) * __real_3f000000 + fVar12) - fVar9;
      }
    }
  }
  else if (iVar2 == 1) {
    FVar5 = SWidget::GetDesiredSize(this);
    fVar7 = fVar8 - fVar13;
    if (fVar11 * *(float *)FVar5 <= fVar8 - fVar13) {
      fVar7 = fVar11 * *(float *)FVar5;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
LAB_1428a6374:
    fVar12 = (fVar8 - fVar7) - fVar9;
  }
  else {
    if (iVar2 != 3) goto LAB_1428a6335;
    FVar5 = SWidget::GetDesiredSize(this);
    fVar7 = fVar8 - fVar13;
    if (fVar11 * *(float *)FVar5 <= fVar8 - fVar13) {
      fVar7 = fVar11 * *(float *)FVar5;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  local_128 = param_2->Size;
  iVar2 = *(int *)&param_4->field_0x3c;
  fVar9 = local_128._4_4_;
  fVar11 = (float)dVar4;
  fVar8 = local_128._4_4_ - (fVar10 + fVar3);
  if (iVar2 != 0) {
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)&param_4->field_0x10);
    local_128._4_4_ = fVar11 * *(float *)((longlong)FVar5 + 4);
    if (fVar8 <= local_128._4_4_) {
      local_128._4_4_ = fVar8;
    }
    if (local_128._4_4_ <= 0.0) {
      local_128._4_4_ = 0.0;
    }
    if (iVar2 == 1) goto LAB_1428a645d;
    if (iVar2 == 2) {
      fVar10 = ((fVar9 - local_128._4_4_) * __real_3f000000 + fVar10) - fVar3;
      goto LAB_1428a645d;
    }
    if (iVar2 == 3) {
      fVar10 = (fVar9 - local_128._4_4_) - fVar3;
      goto LAB_1428a645d;
    }
  }
  local_128._4_4_ = fVar8 * fVar11;
  if (local_128._4_4_ <= 0.0) {
    local_128._4_4_ = 0.0;
  }
LAB_1428a645d:
  local_128._0_4_ = fVar7;
  local_120[0].Scale = 1.0;
  local_120[0].Translation.field0_0x0._0_4_ = fVar12;
  local_120[0].Translation.field0_0x0._4_4_ = fVar10;
  pFVar6 = FGeometry::MakeChild
                     (param_2,&local_108,(TSharedRef<SWidget,1> *)&param_4->field_0x10,
                      (FDeprecateVector2DParameter *)&local_128,local_120);
  FArrangedChildren::AddWidget(param_3,EVar1,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructItems<FKey,FKey,int> @ 1428a9440

void __cdecl ConstructItems<FKey,FKey,int>(void *param_1,FKey *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FSharedReferencer<1> *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &(param_2->KeyDetails).SharedReferenceCount;
    plVar2 = (longlong *)((longlong)param_1 + 0x10);
    do {
      plVar2[-2] = *(longlong *)((longlong)plVar2 + (longlong)param_2 + (-0x10 - (longlong)param_1))
      ;
      plVar2[-1] = (longlong)((TSharedPtr<FKeyDetails,1> *)(pFVar3 + -1))->Object;
      pTVar1 = pFVar3->ReferenceController;
      *plVar2 = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pFVar3 + 3;
      plVar2 = plVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TAttribute<float>,TAttribute<float>,int> @ 1428a9490

void __cdecl
ConstructItems<TAttribute<float>,TAttribute<float>,int>
          (void *param_1,TAttribute<float> *param_2,int param_3)

{
  TAttribute<float> *pTVar1;
  undefined8 *puVar2;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    pTVar1 = param_2;
    do {
      pTVar3 = &pTVar1->Getter;
      *(undefined4 *)((longlong)pTVar3 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined4 *)((longlong)(pTVar3 + -1) + 0x10);
      *(undefined1 *)((longlong)puVar2 + -0xc) = *(undefined1 *)((longlong)(pTVar3 + -1) + 0x14);
      puVar2[-1] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar2 + -1),pTVar3);
      pTVar1 = (TAttribute<float> *)(pTVar3 + 1);
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int> @ 1428a9520

void __cdecl
ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
          (void *param_1,TSharedPtr<FString,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FString **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DefaultConstructItems<SVirtualJoystick::FControlData,int> @ 1428aa2a0

void __cdecl DefaultConstructItems<SVirtualJoystick::FControlData,int>(void *param_1,int param_2)

{
  TVector2<double> TVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + -2) = 0;
      ((TVector2<double>_u_0 *)(puVar2 + 3))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 5))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 7))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 9))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      puVar2[0xb] = 0x3ff0000000000000;
      puVar2[0xc] = 0x3ff0000000000000;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x13))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x15))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x17))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x19))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x1b))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x1d))->_s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      TVar1 = UE::Math::TVector2<double>::ZeroVector;
      *(undefined4 *)(puVar2 + 0x21) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x10c) = 0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x1f))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
      TVar1 = UE::Math::TVector2<double>::ZeroVector;
      *(undefined2 *)(puVar2 + 0x24) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x122) = 0;
      ((TVector2<double>_u_0 *)(puVar2 + 0x22))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x27;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SVirtualJoystick::FControlData,int> @ 1428aa7d0

void __cdecl DestructItems<SVirtualJoystick::FControlData,int>(FControlData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Info).MainInputKey.KeyDetails.SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[3].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-0xd].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[-0xf].ReferenceController);
      pFVar1 = pFVar1 + 0x27;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SRadialBox::FSlot::FSlotArguments,int> @ 1428aa830

void __cdecl
DestructItems<SRadialBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

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

// DestructItems<TAttribute<float>,int> @ 1428aa880

void __cdecl DestructItems<TAttribute<float>,int>(TAttribute<float> *param_1,int param_2)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Getter;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    param_1 = (TAttribute<float> *)(this + 1);
  }
  return;
}

// DestructItems<TSharedPtr<FString,1>,int> @ 1428aa8d0

void __cdecl DestructItems<TSharedPtr<FString,1>,int>(TSharedPtr<FString,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int> @ 1428aa910

void __cdecl
DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int>
          (TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> *param_1,
          int param_2)

{
  FBasicLayoutWidgetSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FBasicLayoutWidgetSlot *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int> @ 1428aa950

void __cdecl
DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
          (TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *param_1,
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

// DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int> @ 1428aa990

void __cdecl
DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
          (TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *param_1,int param_2)

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

// DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int> @ 1428aa9d0

void __cdecl
DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
          (TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *param_1,int param_2)

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

// DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int> @ 1428aaa10

void __cdecl
DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
          (TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>
           *param_1,int param_2)

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

// DestructItems<TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_>,int> @ 1428aaa50

void __cdecl
DestructItems<TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_>,int>
          (TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_> *param_1,
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

// DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int> @ 1428aaa90

void __cdecl
DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
          (TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *param_1,int param_2)

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

// DestructItems<TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_>,int> @ 1428aaad0

void __cdecl
DestructItems<TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_>,int>
          (TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_> *param_1,int param_2
          )

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

// DestructItems<TWeakPtr<IMenu,1>,int> @ 1428aab10

void __cdecl DestructItems<TWeakPtr<IMenu,1>,int>(TWeakPtr<IMenu,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FString_const_,1> @ 1428abb50

uint __cdecl GetTypeHash<FString_const_,1>(TSharedPtr<FString_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,`TPanelChildren<SGridPanel::FSlot>::Sort<`SGridPanel::NotifySlotChanged'::__l11::<lambda_1>_>'::__l5::<lambda_1>_>_> @ 1428abb80

void __cdecl
AlgoImpl::
HeapSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_TPanelChildren<SGridPanel::FSlot>::Sort<_SGridPanel::NotifySlotChanged_::__l11::<lambda_1>_>_::__l5::<lambda_1>_>_>
          (TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_public:_void___cdecl_TPanelChildren<SGridPanel::FSlot>::Sort<_private:_void___cdecl_SGridPanel::NotifySlotChanged(SGridPanel::FSlot_const_*,bool)_::_11_::<lambda_1>_>(_private:_void___cdecl_SGridPanel::NotifySlotChanged(SGridPanel::FSlot_const_*,bool)_::_11_::<lambda_1>_const_&)_::_5_::<lambda_1>_>
          param_4)

{
  FSlot *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1428abc6e:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = param_1->Ptr;
            param_1->Ptr = param_1[lVar7].Ptr;
            param_1[lVar7].Ptr = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if ((param_1[(longlong)iVar9 + 2].Ptr)->LayerParam <
                      (param_1[iVar4].Ptr)->LayerParam) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8].Ptr;
                if ((param_1[iVar4].Ptr)->LayerParam <= pFVar1->LayerParam) break;
                param_1[iVar8].Ptr = param_1[iVar4].Ptr;
                param_1[iVar4].Ptr = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((param_1[(longlong)iVar5 + 2].Ptr)->LayerParam < (param_1[iVar6].Ptr)->LayerParam) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4].Ptr;
    if ((param_1[iVar6].Ptr)->LayerParam <= pFVar1->LayerParam) goto LAB_1428abc6e;
    param_1[iVar4].Ptr = param_1[iVar6].Ptr;
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6].Ptr = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// IntCastChecked<int,short> @ 1428abd30

int __cdecl IntCastChecked<int,short>(short param_1)

{
  return (int)param_1;
}

// IntroSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,`TPanelChildren<SGridPanel::FSlot>::Sort<`SGridPanel::NotifySlotChanged'::__l11::<lambda_1>_>'::__l5::<lambda_1>_>_> @ 1428abd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_TPanelChildren<SGridPanel::FSlot>::Sort<_SGridPanel::NotifySlotChanged_::__l11::<lambda_1>_>_::__l5::<lambda_1>_>_>
          (TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_public:_void___cdecl_TPanelChildren<SGridPanel::FSlot>::Sort<_private:_void___cdecl_SGridPanel::NotifySlotChanged(SGridPanel::FSlot_const_*,bool)_::_11_::<lambda_1>_>(_private:_void___cdecl_SGridPanel::NotifySlotChanged(SGridPanel::FSlot_const_*,bool)_::_11_::<lambda_1>_const_&)_::_5_::<lambda_1>_>
          param_4)

{
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar1;
  FSlot *pFVar2;
  int iVar3;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> **ppTVar4;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar5;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar6;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar7;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar8;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *pTVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *local_338;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *local_328;
  TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar4 = &local_328;
    do {
      pTVar9 = ppTVar4[1];
      pTVar5 = *ppTVar4;
      pTVar1 = ppTVar4[2];
      iVar3 = (int)((longlong)pTVar9 - (longlong)pTVar5 >> 3) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar8 = pTVar5;
      if ((int)local_338 != 0) {
LAB_1428abdf0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pTVar6 = pTVar9 + 1;
          pFVar2 = pTVar8[iVar3 >> 1].Ptr;
          pTVar8[iVar3 >> 1].Ptr = pTVar8->Ptr;
          pTVar8->Ptr = pFVar2;
          pTVar5 = pTVar8;
LAB_1428abe20:
          pTVar5 = pTVar5 + 1;
          if (pTVar5 <= pTVar9) goto code_r0x0001428abe29;
          goto LAB_1428abe37;
        }
        for (; pTVar5 = pTVar8, pTVar1 = pTVar8, pTVar8 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar6 = pTVar5, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar9) {
            pTVar5 = pTVar1;
            if (pTVar1->Ptr->LayerParam <= pTVar6->Ptr->LayerParam) {
              pTVar5 = pTVar6;
            }
          }
          pFVar2 = pTVar6->Ptr;
          pTVar6->Ptr = pTVar9->Ptr;
          pTVar9->Ptr = pFVar2;
        }
        goto LAB_1428abef3;
      }
LAB_1428abee2:
      local_338 = pTVar1;
      HeapSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_TPanelChildren<SGridPanel::FSlot>::Sort<_SGridPanel::NotifySlotChanged_::__l11::<lambda_1>_>_::__l5::<lambda_1>_>_>
                (pTVar5,iVar3,param_3,param_4);
LAB_1428abef3:
      ppTVar4 = ppTVar4 + -3;
    } while (&local_328 <= ppTVar4);
  }
  return;
code_r0x0001428abe29:
  if (pTVar5->Ptr->LayerParam <= pTVar8->Ptr->LayerParam) goto LAB_1428abe20;
LAB_1428abe37:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar8) break;
  } while (pTVar8->Ptr->LayerParam <= pTVar6->Ptr->LayerParam);
  if (pTVar5 <= pTVar6) {
    pFVar2 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar6->Ptr;
    pTVar6->Ptr = pFVar2;
    goto LAB_1428abe20;
  }
  pFVar2 = pTVar8->Ptr;
  local_338._0_4_ = (int)local_338 + -1;
  pTVar8->Ptr = pTVar6->Ptr;
  pTVar6->Ptr = pFVar2;
  if ((longlong)((longlong)pTVar6 + (-8 - (longlong)pTVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar5 & 0xfffffffffffffff8U)) {
    if (pTVar5 < pTVar9) {
      *ppTVar4 = pTVar5;
      ppTVar4[1] = pTVar9;
      *(int *)(ppTVar4 + 2) = (int)local_338;
      ppTVar4 = ppTVar4 + 3;
    }
    if (pTVar6 <= pTVar8 + 1) goto LAB_1428abef3;
    pTVar9 = pTVar7 + -2;
    pTVar5 = pTVar8;
  }
  else {
    if (pTVar8 + 1 < pTVar6) {
      *ppTVar4 = pTVar8;
      ppTVar4[1] = pTVar7 + -2;
      *(int *)(ppTVar4 + 2) = (int)local_338;
      ppTVar4 = ppTVar4 + 3;
    }
    if (pTVar9 <= pTVar5) goto LAB_1428abef3;
  }
  iVar3 = (int)((longlong)pTVar9 - (longlong)pTVar5 >> 3) + 1;
  pTVar8 = pTVar5;
  if ((int)local_338 == 0) goto LAB_1428abee2;
  goto LAB_1428abdf0;
}

// MakeRequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_> @ 1428abfa0

T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_>
          (TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *in_RDX;
  
  (param_1->AllocatorInstance).Data = in_RDX;
  return (T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_> @ 1428abfb0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FString,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FString,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_> @ 1428abfc0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FString,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>)param_1;
}

// MakeShareable<FMenuInWindow> @ 1428abfd0

/* WARNING: Enum "Type": Some values do not have unique names */

TRawPtrProxy<FMenuInWindow> __cdecl MakeShareable<FMenuInWindow>(FMenuInWindow *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FMenuInWindow> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FMenuInWindow *)(*pcVar1)();
      return (TRawPtrProxy<FMenuInWindow>)TVar3.Object;
    }
  }
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<FMenuInWindow>)param_1;
}

// MakeTDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> @ 1428ac040

TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 1428ac0f0

TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SComboRow<TSharedPtr<FString,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
              ((STableRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ = (longlong)&SComboRow<TSharedPtr<FString,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<FString,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1>::TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1>
            ((TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *)(local_48 + 0x10),
             (SComboRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object = (SComboRow<TSharedPtr<FString,1>_> *)local_48._16_8_;
    local_48._0_8_ = (SComboRow<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object == (SComboRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> @ 1428ac2c0

TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_> @ 1428ac370

TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FString,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
              ((STableRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FString,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 1428ac520

TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FString,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
              ((STableRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>::TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FString,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FString,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FString,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> @ 1428ac6d0

TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCircularThrobber,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SErrorText,RequiredArgs::T0RequiredArgs> @ 1428ac780

TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SErrorText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_> @ 1428ac830

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> @ 1428ac8e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditableText,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs> @ 1428ac990

TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs> @ 1428aca40

TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_> @ 1428acaf0

TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
* __cdecl MakeTDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
                    (TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
  ::
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSlider,RequiredArgs::T0RequiredArgs> @ 1428acba0

TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Merge<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,`SConstraintCanvas::Construct'::__l2::<lambda_1>_>_> @ 1428acc50

void __cdecl
AlgoImpl::
Merge<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_SConstraintCanvas::Construct_::__l2::<lambda_1>_>_>
          (FSlotArguments *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_public:_void___cdecl_SConstraintCanvas::Construct(SConstraintCanvas::FArguments_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  TOptional<float> TVar23;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  TOptional<float> TVar27;
  undefined3 uVar28;
  bool bVar29;
  undefined2 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  bool bVar35;
  undefined3 uVar36;
  int iVar37;
  bool bVar38;
  undefined3 uVar39;
  int iVar40;
  bool bVar41;
  undefined3 uVar42;
  int iVar43;
  bool bVar44;
  bool bVar45;
  undefined2 uVar46;
  int iVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  FSlotArguments *pFVar51;
  FSlotArguments *pFVar53;
  int iVar54;
  FSlotArguments *pFVar55;
  FSlotArguments *pFVar56;
  FSlotArguments *pFVar57;
  int iVar58;
  bool bVar59;
  float fVar60;
  float fVar61;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  FSlotArguments *pFVar52;
  
  if (0 < param_2) {
    iVar54 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar58 = 0;
      pFVar55 = param_1 + param_2;
      if (0 < param_2 - iVar54) {
        uVar49 = param_2 - iVar54;
        do {
          iVar48 = (uVar49 >> 1) + iVar58;
          pFVar51 = param_1 + (longlong)iVar48 + (longlong)iVar54;
          if ((pFVar55->_ZOrder).bIsSet == false) {
            fVar61 = 0.0;
          }
          else {
            fVar61 = (pFVar55->_ZOrder).TypedValue;
          }
          if ((pFVar51->_ZOrder).bIsSet == false) {
            fVar60 = 0.0;
          }
          else {
            fVar60 = (pFVar51->_ZOrder).TypedValue;
          }
          if ((int)fVar61 == (int)fVar60) {
            bVar59 = pFVar55 < pFVar51;
          }
          else {
            bVar59 = (int)fVar61 < (int)fVar60;
          }
          if (!bVar59) {
            iVar58 = iVar48 + (uVar49 & 1);
          }
          uVar1 = uVar49 >> 1;
          uVar49 = uVar49 >> 1;
        } while (uVar1 != 0);
      }
      iVar54 = iVar54 + iVar58;
      if (param_2 <= iVar54) {
        return;
      }
      iVar58 = 0;
      pFVar55 = param_1 + iVar54;
      if (0 < param_3 - param_2) {
        uVar49 = param_3 - param_2;
        do {
          iVar48 = (uVar49 >> 1) + iVar58;
          pFVar51 = param_1 + (longlong)iVar48 + (longlong)param_2;
          if ((pFVar51->_ZOrder).bIsSet == false) {
            fVar61 = 0.0;
          }
          else {
            fVar61 = (pFVar51->_ZOrder).TypedValue;
          }
          if ((pFVar55->_ZOrder).bIsSet == false) {
            fVar60 = 0.0;
          }
          else {
            fVar60 = (pFVar55->_ZOrder).TypedValue;
          }
          if ((int)fVar61 == (int)fVar60) {
            bVar59 = pFVar51 < pFVar55;
          }
          else {
            bVar59 = (int)fVar61 < (int)fVar60;
          }
          if (bVar59) {
            iVar58 = iVar48 + (uVar49 & 1);
          }
          uVar1 = uVar49 >> 1;
          uVar49 = uVar49 >> 1;
        } while (uVar1 != 0);
      }
      iVar50 = (iVar58 - iVar54) + param_2;
      iVar48 = param_2 - iVar54;
      if ((iVar48 != 0) && (iVar48 < iVar50)) {
        pFVar51 = pFVar55 + iVar48;
        pFVar56 = pFVar55;
        pFVar52 = pFVar55 + iVar48;
        do {
          while( true ) {
            pFVar53 = pFVar51 + 1;
            pFVar57 = pFVar56 + 1;
            lVar2 = pFVar56->_padding_;
            lVar3 = pFVar56->_padding_;
            lVar4 = pFVar56->_padding_;
            fVar31 = (pFVar56->_Offset).Value.Left;
            fVar32 = (pFVar56->_Offset).Value.Top;
            fVar33 = (pFVar56->_Offset).Value.Right;
            fVar34 = (pFVar56->_Offset).Value.Bottom;
            bVar35 = (pFVar56->_Offset).bIsSet;
            uVar36 = *(undefined3 *)&(pFVar56->_Offset).field_0x11;
            iVar37 = (pFVar56->_Offset)._padding_;
            uVar5 = *(undefined8 *)&(pFVar56->_Offset).Getter;
            uVar6 = *(undefined8 *)&(pFVar56->_Offset).Getter.field_0x8;
            uVar7 = *(undefined8 *)&(pFVar56->_Offset).Getter.field_0x10;
            dVar8 = (pFVar56->_Anchors).Value.Minimum.field0_0x0._s_0.X;
            dVar9 = (pFVar56->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
            dVar10 = (pFVar56->_Anchors).Value.Maximum.field0_0x0._s_0.X;
            dVar11 = (pFVar56->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
            bVar38 = (pFVar56->_Anchors).bIsSet;
            uVar39 = *(undefined3 *)&(pFVar56->_Anchors).field_0x21;
            iVar40 = (pFVar56->_Anchors)._padding_;
            uVar12 = *(undefined8 *)&(pFVar56->_Anchors).Getter;
            uVar13 = *(undefined8 *)&(pFVar56->_Anchors).Getter.field_0x8;
            uVar14 = *(undefined8 *)&(pFVar56->_Anchors).Getter.field_0x10;
            dVar15 = (pFVar56->_Alignment).Value.field0_0x0._s_0.X;
            dVar16 = (pFVar56->_Alignment).Value.field0_0x0._s_0.Y;
            bVar41 = (pFVar56->_Alignment).bIsSet;
            uVar42 = *(undefined3 *)&(pFVar56->_Alignment).field_0x11;
            iVar43 = (pFVar56->_Alignment)._padding_;
            uVar17 = *(undefined8 *)&(pFVar56->_Alignment).Getter;
            uVar18 = *(undefined8 *)&(pFVar56->_Alignment).Getter.field_0x8;
            uVar19 = *(undefined8 *)&(pFVar56->_Alignment).Getter.field_0x10;
            bVar44 = (pFVar56->_AutoSize).Value;
            bVar45 = (pFVar56->_AutoSize).bIsSet;
            uVar46 = *(undefined2 *)&(pFVar56->_AutoSize).field_0x2;
            iVar47 = (pFVar56->_AutoSize)._padding_;
            uVar20 = *(undefined8 *)&(pFVar56->_AutoSize).Getter;
            uVar21 = *(undefined8 *)&(pFVar56->_AutoSize).Getter.field_0x8;
            uVar22 = *(undefined8 *)&(pFVar56->_AutoSize).Getter.field_0x10;
            TVar23 = pFVar56->_ZOrder;
            lVar24 = pFVar51->_padding_;
            pFVar56->_padding_ = pFVar51->_padding_;
            pFVar56->_padding_ = lVar24;
            fVar61 = (pFVar51->_Offset).Value.Left;
            fVar60 = (pFVar51->_Offset).Value.Top;
            pFVar56->_padding_ = pFVar51->_padding_;
            (pFVar56->_Offset).Value.Left = fVar61;
            (pFVar56->_Offset).Value.Top = fVar60;
            fVar61 = (pFVar51->_Offset).Value.Bottom;
            bVar59 = (pFVar51->_Offset).bIsSet;
            uVar28 = *(undefined3 *)&(pFVar51->_Offset).field_0x11;
            iVar48 = (pFVar51->_Offset)._padding_;
            (pFVar56->_Offset).Value.Right = (pFVar51->_Offset).Value.Right;
            (pFVar56->_Offset).Value.Bottom = fVar61;
            (pFVar56->_Offset).bIsSet = bVar59;
            *(undefined3 *)&(pFVar56->_Offset).field_0x11 = uVar28;
            (pFVar56->_Offset)._padding_ = iVar48;
            uVar25 = *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x8;
            *(undefined8 *)&(pFVar56->_Offset).Getter = *(undefined8 *)&(pFVar51->_Offset).Getter;
            *(undefined8 *)&(pFVar56->_Offset).Getter.field_0x8 = uVar25;
            dVar26 = (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.X;
            *(undefined8 *)&(pFVar56->_Offset).Getter.field_0x10 =
                 *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x10;
            (pFVar56->_Anchors).Value.Minimum.field0_0x0._s_0.X = dVar26;
            dVar26 = (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.X;
            (pFVar56->_Anchors).Value.Minimum.field0_0x0._s_0.Y =
                 (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
            (pFVar56->_Anchors).Value.Maximum.field0_0x0._s_0.X = dVar26;
            bVar59 = (pFVar51->_Anchors).bIsSet;
            uVar28 = *(undefined3 *)&(pFVar51->_Anchors).field_0x21;
            iVar48 = (pFVar51->_Anchors)._padding_;
            (pFVar56->_Anchors).Value.Maximum.field0_0x0._s_0.Y =
                 (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
            (pFVar56->_Anchors).bIsSet = bVar59;
            *(undefined3 *)&(pFVar56->_Anchors).field_0x21 = uVar28;
            (pFVar56->_Anchors)._padding_ = iVar48;
            uVar25 = *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x8;
            *(undefined8 *)&(pFVar56->_Anchors).Getter = *(undefined8 *)&(pFVar51->_Anchors).Getter;
            *(undefined8 *)&(pFVar56->_Anchors).Getter.field_0x8 = uVar25;
            dVar26 = (pFVar51->_Alignment).Value.field0_0x0._s_0.X;
            *(undefined8 *)&(pFVar56->_Anchors).Getter.field_0x10 =
                 *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x10;
            (pFVar56->_Alignment).Value.field0_0x0._s_0.X = dVar26;
            bVar59 = (pFVar51->_Alignment).bIsSet;
            uVar28 = *(undefined3 *)&(pFVar51->_Alignment).field_0x11;
            iVar48 = (pFVar51->_Alignment)._padding_;
            (pFVar56->_Alignment).Value.field0_0x0._s_0.Y =
                 (pFVar51->_Alignment).Value.field0_0x0._s_0.Y;
            (pFVar56->_Alignment).bIsSet = bVar59;
            *(undefined3 *)&(pFVar56->_Alignment).field_0x11 = uVar28;
            (pFVar56->_Alignment)._padding_ = iVar48;
            uVar25 = *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x8;
            *(undefined8 *)&(pFVar56->_Alignment).Getter =
                 *(undefined8 *)&(pFVar51->_Alignment).Getter;
            *(undefined8 *)&(pFVar56->_Alignment).Getter.field_0x8 = uVar25;
            bVar59 = (pFVar51->_AutoSize).Value;
            bVar29 = (pFVar51->_AutoSize).bIsSet;
            uVar30 = *(undefined2 *)&(pFVar51->_AutoSize).field_0x2;
            iVar48 = (pFVar51->_AutoSize)._padding_;
            *(undefined8 *)&(pFVar56->_Alignment).Getter.field_0x10 =
                 *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x10;
            (pFVar56->_AutoSize).Value = bVar59;
            (pFVar56->_AutoSize).bIsSet = bVar29;
            *(undefined2 *)&(pFVar56->_AutoSize).field_0x2 = uVar30;
            (pFVar56->_AutoSize)._padding_ = iVar48;
            uVar25 = *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x8;
            *(undefined8 *)&(pFVar56->_AutoSize).Getter =
                 *(undefined8 *)&(pFVar51->_AutoSize).Getter;
            *(undefined8 *)&(pFVar56->_AutoSize).Getter.field_0x8 = uVar25;
            TVar27 = pFVar51->_ZOrder;
            *(undefined8 *)&(pFVar56->_AutoSize).Getter.field_0x10 =
                 *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x10;
            pFVar56->_ZOrder = TVar27;
            pFVar51->_padding_ = lVar2;
            pFVar51->_padding_ = lVar3;
            pFVar51->_padding_ = lVar4;
            (pFVar51->_Offset).Value.Left = fVar31;
            (pFVar51->_Offset).Value.Top = fVar32;
            (pFVar51->_Offset).Value.Right = fVar33;
            (pFVar51->_Offset).Value.Bottom = fVar34;
            (pFVar51->_Offset).bIsSet = bVar35;
            *(undefined3 *)&(pFVar51->_Offset).field_0x11 = uVar36;
            (pFVar51->_Offset)._padding_ = iVar37;
            *(undefined8 *)&(pFVar51->_Offset).Getter = uVar5;
            *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x8 = uVar6;
            *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x10 = uVar7;
            (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.X = dVar8;
            (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.Y = dVar9;
            (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.X = dVar10;
            (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.Y = dVar11;
            (pFVar51->_Anchors).bIsSet = bVar38;
            *(undefined3 *)&(pFVar51->_Anchors).field_0x21 = uVar39;
            (pFVar51->_Anchors)._padding_ = iVar40;
            *(undefined8 *)&(pFVar51->_Anchors).Getter = uVar12;
            *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x8 = uVar13;
            *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x10 = uVar14;
            (pFVar51->_Alignment).Value.field0_0x0._s_0.X = dVar15;
            (pFVar51->_Alignment).Value.field0_0x0._s_0.Y = dVar16;
            (pFVar51->_Alignment).bIsSet = bVar41;
            *(undefined3 *)&(pFVar51->_Alignment).field_0x11 = uVar42;
            (pFVar51->_Alignment)._padding_ = iVar43;
            *(undefined8 *)&(pFVar51->_Alignment).Getter = uVar17;
            *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x8 = uVar18;
            local_48 = (undefined4)uVar20;
            uStack_44 = (undefined4)((ulonglong)uVar20 >> 0x20);
            uStack_40 = (undefined4)uVar21;
            uStack_3c = (undefined4)((ulonglong)uVar21 >> 0x20);
            *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x10 = uVar19;
            (pFVar51->_AutoSize).Value = bVar44;
            (pFVar51->_AutoSize).bIsSet = bVar45;
            *(undefined2 *)&(pFVar51->_AutoSize).field_0x2 = uVar46;
            (pFVar51->_AutoSize)._padding_ = iVar47;
            local_38 = (undefined4)uVar22;
            uStack_34 = (undefined4)((ulonglong)uVar22 >> 0x20);
            fStack_30 = TVar23.TypedValue;
            uStack_2c = TVar23._4_4_;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter = local_48;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter.field_0x4 = uStack_44;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter.field_0x8 = uStack_40;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter.field_0xc = uStack_3c;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter.field_0x10 = local_38;
            *(undefined4 *)&(pFVar51->_AutoSize).Getter.field_0x14 = uStack_34;
            (pFVar51->_ZOrder).TypedValue = fStack_30;
            *(undefined4 *)&(pFVar51->_ZOrder).bIsSet = uStack_2c;
            pFVar56 = pFVar57;
            if (pFVar53 == pFVar55 + iVar50) break;
            pFVar51 = pFVar53;
            if (pFVar57 == pFVar52) {
              pFVar52 = pFVar53;
            }
          }
          pFVar51 = pFVar52;
        } while (pFVar57 != pFVar52);
      }
      iVar54 = iVar54 + 1 + iVar58;
      param_2 = param_2 + iVar58;
    } while (iVar54 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>_> @ 1428ad240

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
          (ushort param_1,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>_> @ 1428ad310

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
          (ushort param_1,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<`SSplitter::HandleResizingDelta'::__l15::FSlotInfo>_> @ 1428ad5d0

/* WARNING: Removing unreachable block (ram,0x0001428ad617) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_SSplitter::HandleResizingDelta_::__l15::FSlotInfo>_>
          (ushort param_1,
          ForElementType<_protected:_void___cdecl_SSplitter::HandleResizingDelta(EOrientation,float,ESplitterResizeMode::Type,int,float,TPanelChildren<SSplitter::FSlot>_&,TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_>_const_&)_::_15_::FSlotInfo>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<`SSplitter::HandleResizingDelta'::__l15::FSlotInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>_> @ 1428ad6e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>_> @ 1428ad760

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>_::__l2::FStretchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>(EFlowDirection,TPanelChildren<SScrollBox::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SScrollBox::FSlot>,SScrollBox::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<`SSplitter::HandleResizingDelta'::__l15::FSlotInfo>_> @ 1428ad840

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_SSplitter::HandleResizingDelta_::__l15::FSlotInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_protected:_void___cdecl_SSplitter::HandleResizingDelta(EOrientation,float,ESplitterResizeMode::Type,int,float,TPanelChildren<SSplitter::FSlot>_&,TArray<FLayoutGeometry,TSizedDefaultAllocator<32>_>_const_&)_::_15_::FSlotInfo>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<`SSplitter::HandleResizingDelta'::__l15::FSlotInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// RotateInternal<SConstraintCanvas::FSlot::FSlotArguments> @ 1428adbe0

int __cdecl
AlgoImpl::RotateInternal<SConstraintCanvas::FSlot::FSlotArguments>
          (FSlotArguments *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  TOptional<float> TVar22;
  longlong lVar23;
  undefined8 uVar24;
  double dVar25;
  TOptional<float> TVar26;
  float fVar27;
  float fVar28;
  bool bVar29;
  undefined3 uVar30;
  int iVar31;
  bool bVar32;
  undefined2 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  bool bVar38;
  undefined3 uVar39;
  int iVar40;
  bool bVar41;
  undefined3 uVar42;
  int iVar43;
  bool bVar44;
  undefined3 uVar45;
  int iVar46;
  bool bVar47;
  bool bVar48;
  undefined2 uVar49;
  int iVar50;
  FSlotArguments *pFVar51;
  FSlotArguments *pFVar53;
  FSlotArguments *pFVar54;
  FSlotArguments *pFVar55;
  FSlotArguments *pFVar52;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar51 = param_1 + param_3;
    pFVar54 = param_1;
    pFVar52 = param_1 + param_3;
    do {
      while( true ) {
        pFVar53 = pFVar51 + 1;
        pFVar55 = pFVar54 + 1;
        lVar1 = pFVar54->_padding_;
        lVar2 = pFVar54->_padding_;
        lVar3 = pFVar54->_padding_;
        fVar34 = (pFVar54->_Offset).Value.Left;
        fVar35 = (pFVar54->_Offset).Value.Top;
        fVar36 = (pFVar54->_Offset).Value.Right;
        fVar37 = (pFVar54->_Offset).Value.Bottom;
        bVar38 = (pFVar54->_Offset).bIsSet;
        uVar39 = *(undefined3 *)&(pFVar54->_Offset).field_0x11;
        iVar40 = (pFVar54->_Offset)._padding_;
        uVar4 = *(undefined8 *)&(pFVar54->_Offset).Getter;
        uVar5 = *(undefined8 *)&(pFVar54->_Offset).Getter.field_0x8;
        uVar6 = *(undefined8 *)&(pFVar54->_Offset).Getter.field_0x10;
        dVar7 = (pFVar54->_Anchors).Value.Minimum.field0_0x0._s_0.X;
        dVar8 = (pFVar54->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
        dVar9 = (pFVar54->_Anchors).Value.Maximum.field0_0x0._s_0.X;
        dVar10 = (pFVar54->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
        bVar41 = (pFVar54->_Anchors).bIsSet;
        uVar42 = *(undefined3 *)&(pFVar54->_Anchors).field_0x21;
        iVar43 = (pFVar54->_Anchors)._padding_;
        uVar11 = *(undefined8 *)&(pFVar54->_Anchors).Getter;
        uVar12 = *(undefined8 *)&(pFVar54->_Anchors).Getter.field_0x8;
        uVar13 = *(undefined8 *)&(pFVar54->_Anchors).Getter.field_0x10;
        dVar14 = (pFVar54->_Alignment).Value.field0_0x0._s_0.X;
        dVar15 = (pFVar54->_Alignment).Value.field0_0x0._s_0.Y;
        bVar44 = (pFVar54->_Alignment).bIsSet;
        uVar45 = *(undefined3 *)&(pFVar54->_Alignment).field_0x11;
        iVar46 = (pFVar54->_Alignment)._padding_;
        uVar16 = *(undefined8 *)&(pFVar54->_Alignment).Getter;
        uVar17 = *(undefined8 *)&(pFVar54->_Alignment).Getter.field_0x8;
        uVar18 = *(undefined8 *)&(pFVar54->_Alignment).Getter.field_0x10;
        bVar47 = (pFVar54->_AutoSize).Value;
        bVar48 = (pFVar54->_AutoSize).bIsSet;
        uVar49 = *(undefined2 *)&(pFVar54->_AutoSize).field_0x2;
        iVar50 = (pFVar54->_AutoSize)._padding_;
        uVar19 = *(undefined8 *)&(pFVar54->_AutoSize).Getter;
        uVar20 = *(undefined8 *)&(pFVar54->_AutoSize).Getter.field_0x8;
        uVar21 = *(undefined8 *)&(pFVar54->_AutoSize).Getter.field_0x10;
        TVar22 = pFVar54->_ZOrder;
        lVar23 = pFVar51->_padding_;
        pFVar54->_padding_ = pFVar51->_padding_;
        pFVar54->_padding_ = lVar23;
        fVar27 = (pFVar51->_Offset).Value.Left;
        fVar28 = (pFVar51->_Offset).Value.Top;
        pFVar54->_padding_ = pFVar51->_padding_;
        (pFVar54->_Offset).Value.Left = fVar27;
        (pFVar54->_Offset).Value.Top = fVar28;
        fVar27 = (pFVar51->_Offset).Value.Bottom;
        bVar29 = (pFVar51->_Offset).bIsSet;
        uVar30 = *(undefined3 *)&(pFVar51->_Offset).field_0x11;
        iVar31 = (pFVar51->_Offset)._padding_;
        (pFVar54->_Offset).Value.Right = (pFVar51->_Offset).Value.Right;
        (pFVar54->_Offset).Value.Bottom = fVar27;
        (pFVar54->_Offset).bIsSet = bVar29;
        *(undefined3 *)&(pFVar54->_Offset).field_0x11 = uVar30;
        (pFVar54->_Offset)._padding_ = iVar31;
        uVar24 = *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x8;
        *(undefined8 *)&(pFVar54->_Offset).Getter = *(undefined8 *)&(pFVar51->_Offset).Getter;
        *(undefined8 *)&(pFVar54->_Offset).Getter.field_0x8 = uVar24;
        dVar25 = (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.X;
        *(undefined8 *)&(pFVar54->_Offset).Getter.field_0x10 =
             *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x10;
        (pFVar54->_Anchors).Value.Minimum.field0_0x0._s_0.X = dVar25;
        dVar25 = (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.X;
        (pFVar54->_Anchors).Value.Minimum.field0_0x0._s_0.Y =
             (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.Y;
        (pFVar54->_Anchors).Value.Maximum.field0_0x0._s_0.X = dVar25;
        bVar29 = (pFVar51->_Anchors).bIsSet;
        uVar30 = *(undefined3 *)&(pFVar51->_Anchors).field_0x21;
        iVar31 = (pFVar51->_Anchors)._padding_;
        (pFVar54->_Anchors).Value.Maximum.field0_0x0._s_0.Y =
             (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.Y;
        (pFVar54->_Anchors).bIsSet = bVar29;
        *(undefined3 *)&(pFVar54->_Anchors).field_0x21 = uVar30;
        (pFVar54->_Anchors)._padding_ = iVar31;
        uVar24 = *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x8;
        *(undefined8 *)&(pFVar54->_Anchors).Getter = *(undefined8 *)&(pFVar51->_Anchors).Getter;
        *(undefined8 *)&(pFVar54->_Anchors).Getter.field_0x8 = uVar24;
        dVar25 = (pFVar51->_Alignment).Value.field0_0x0._s_0.X;
        *(undefined8 *)&(pFVar54->_Anchors).Getter.field_0x10 =
             *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x10;
        (pFVar54->_Alignment).Value.field0_0x0._s_0.X = dVar25;
        bVar29 = (pFVar51->_Alignment).bIsSet;
        uVar30 = *(undefined3 *)&(pFVar51->_Alignment).field_0x11;
        iVar31 = (pFVar51->_Alignment)._padding_;
        (pFVar54->_Alignment).Value.field0_0x0._s_0.Y =
             (pFVar51->_Alignment).Value.field0_0x0._s_0.Y;
        (pFVar54->_Alignment).bIsSet = bVar29;
        *(undefined3 *)&(pFVar54->_Alignment).field_0x11 = uVar30;
        (pFVar54->_Alignment)._padding_ = iVar31;
        uVar24 = *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x8;
        *(undefined8 *)&(pFVar54->_Alignment).Getter = *(undefined8 *)&(pFVar51->_Alignment).Getter;
        *(undefined8 *)&(pFVar54->_Alignment).Getter.field_0x8 = uVar24;
        bVar29 = (pFVar51->_AutoSize).Value;
        bVar32 = (pFVar51->_AutoSize).bIsSet;
        uVar33 = *(undefined2 *)&(pFVar51->_AutoSize).field_0x2;
        iVar31 = (pFVar51->_AutoSize)._padding_;
        *(undefined8 *)&(pFVar54->_Alignment).Getter.field_0x10 =
             *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x10;
        (pFVar54->_AutoSize).Value = bVar29;
        (pFVar54->_AutoSize).bIsSet = bVar32;
        *(undefined2 *)&(pFVar54->_AutoSize).field_0x2 = uVar33;
        (pFVar54->_AutoSize)._padding_ = iVar31;
        uVar24 = *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x8;
        *(undefined8 *)&(pFVar54->_AutoSize).Getter = *(undefined8 *)&(pFVar51->_AutoSize).Getter;
        *(undefined8 *)&(pFVar54->_AutoSize).Getter.field_0x8 = uVar24;
        TVar26 = pFVar51->_ZOrder;
        *(undefined8 *)&(pFVar54->_AutoSize).Getter.field_0x10 =
             *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x10;
        pFVar54->_ZOrder = TVar26;
        pFVar51->_padding_ = lVar1;
        pFVar51->_padding_ = lVar2;
        pFVar51->_padding_ = lVar3;
        (pFVar51->_Offset).Value.Left = fVar34;
        (pFVar51->_Offset).Value.Top = fVar35;
        (pFVar51->_Offset).Value.Right = fVar36;
        (pFVar51->_Offset).Value.Bottom = fVar37;
        (pFVar51->_Offset).bIsSet = bVar38;
        *(undefined3 *)&(pFVar51->_Offset).field_0x11 = uVar39;
        (pFVar51->_Offset)._padding_ = iVar40;
        *(undefined8 *)&(pFVar51->_Offset).Getter = uVar4;
        *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x8 = uVar5;
        *(undefined8 *)&(pFVar51->_Offset).Getter.field_0x10 = uVar6;
        (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.X = dVar7;
        (pFVar51->_Anchors).Value.Minimum.field0_0x0._s_0.Y = dVar8;
        (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.X = dVar9;
        (pFVar51->_Anchors).Value.Maximum.field0_0x0._s_0.Y = dVar10;
        (pFVar51->_Anchors).bIsSet = bVar41;
        *(undefined3 *)&(pFVar51->_Anchors).field_0x21 = uVar42;
        (pFVar51->_Anchors)._padding_ = iVar43;
        *(undefined8 *)&(pFVar51->_Anchors).Getter = uVar11;
        *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x8 = uVar12;
        *(undefined8 *)&(pFVar51->_Anchors).Getter.field_0x10 = uVar13;
        (pFVar51->_Alignment).Value.field0_0x0._s_0.X = dVar14;
        (pFVar51->_Alignment).Value.field0_0x0._s_0.Y = dVar15;
        (pFVar51->_Alignment).bIsSet = bVar44;
        *(undefined3 *)&(pFVar51->_Alignment).field_0x11 = uVar45;
        (pFVar51->_Alignment)._padding_ = iVar46;
        *(undefined8 *)&(pFVar51->_Alignment).Getter = uVar16;
        *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x8 = uVar17;
        *(undefined8 *)&(pFVar51->_Alignment).Getter.field_0x10 = uVar18;
        (pFVar51->_AutoSize).Value = bVar47;
        (pFVar51->_AutoSize).bIsSet = bVar48;
        *(undefined2 *)&(pFVar51->_AutoSize).field_0x2 = uVar49;
        (pFVar51->_AutoSize)._padding_ = iVar50;
        *(undefined8 *)&(pFVar51->_AutoSize).Getter = uVar19;
        *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x8 = uVar20;
        *(undefined8 *)&(pFVar51->_AutoSize).Getter.field_0x10 = uVar21;
        pFVar51->_ZOrder = TVar22;
        pFVar54 = pFVar55;
        if (pFVar53 == param_1 + param_2) break;
        pFVar51 = pFVar53;
        if (pFVar55 == pFVar52) {
          pFVar52 = pFVar53;
        }
      }
      pFVar51 = pFVar52;
    } while (pFVar55 != pFVar52);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,`SConstraintCanvas::Construct'::__l2::<lambda_1>_>_> @ 1428adea0

void __cdecl
AlgoImpl::
StableSortInternal<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_SConstraintCanvas::Construct_::__l2::<lambda_1>_>_>
          (FSlotArguments *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_public:_void___cdecl_SConstraintCanvas::Construct(SConstraintCanvas::FArguments_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  TOptional<float> *pTVar1;
  TOptional<float> *pTVar2;
  int iVar3;
  undefined8 uVar4;
  TOptional<float> TVar5;
  TOptional<float> TVar6;
  TOptional<float> TVar7;
  TOptional<float> TVar8;
  TOptional<float> TVar9;
  TOptional<float> TVar10;
  TOptional<float> TVar11;
  TOptional<float> TVar12;
  TOptional<float> TVar13;
  TOptional<float> TVar14;
  TOptional<float> TVar15;
  TOptional<float> TVar16;
  TOptional<float> TVar17;
  TOptional<float> TVar18;
  TOptional<float> TVar19;
  TOptional<float> TVar20;
  TOptional<float> TVar21;
  TOptional<float> TVar22;
  TOptional<float> TVar23;
  TOptional<float> TVar24;
  TOptional<float> TVar25;
  TOptional<float> TVar26;
  TOptional<float> TVar27;
  TOptional<float> TVar28;
  TOptional<float> TVar29;
  TOptional<float> TVar30;
  TOptional<float> TVar31;
  undefined8 uVar32;
  TOptional<float> TVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  TOptional<float> *pTVar37;
  int iVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float local_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  if (0 < param_2) {
    pTVar37 = &param_1[1]._ZOrder;
    iVar38 = 1;
    lVar39 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar38 < param_2) {
        if (pTVar37->bIsSet == false) {
          fVar42 = 0.0;
        }
        else {
          fVar42 = pTVar37->TypedValue;
        }
        if (pTVar37[-0x1c].bIsSet == false) {
          fVar41 = 0.0;
        }
        else {
          fVar41 = pTVar37[-0x1c].TypedValue;
        }
        pTVar1 = pTVar37 + -0x1b;
        pTVar2 = pTVar37 + -0x37;
        if ((int)fVar42 == (int)fVar41) {
          bVar40 = pTVar1 < pTVar2;
        }
        else {
          bVar40 = (int)fVar42 < (int)fVar41;
        }
        if (bVar40) {
          uVar4._0_4_ = pTVar2->TypedValue;
          uVar4._4_1_ = pTVar2->bIsSet;
          uVar4._5_3_ = *(undefined3 *)&pTVar2->field_0x5;
          TVar5 = pTVar37[-0x36];
          TVar6 = pTVar37[-0x35];
          TVar7 = pTVar37[-0x34];
          TVar8 = pTVar37[-0x33];
          TVar9 = pTVar37[-0x32];
          TVar10 = pTVar37[-0x31];
          TVar11 = pTVar37[-0x30];
          TVar12 = pTVar37[-0x2f];
          TVar13 = pTVar37[-0x2e];
          TVar14 = pTVar37[-0x2d];
          TVar15 = pTVar37[-0x2c];
          TVar16 = pTVar37[-0x2b];
          TVar17 = pTVar37[-0x2a];
          TVar18 = pTVar37[-0x29];
          TVar19 = pTVar37[-0x28];
          TVar20 = pTVar37[-0x27];
          TVar21 = pTVar37[-0x26];
          TVar22 = pTVar37[-0x25];
          TVar23 = pTVar37[-0x24];
          TVar24 = pTVar37[-0x23];
          TVar25 = pTVar37[-0x22];
          TVar26 = pTVar37[-0x21];
          TVar27 = pTVar37[-0x20];
          TVar28 = pTVar37[-0x1f];
          TVar29 = pTVar37[-0x1e];
          TVar30 = pTVar37[-0x1d];
          TVar31 = pTVar37[-0x1c];
          uVar32._0_4_ = pTVar1->TypedValue;
          uVar32._4_1_ = pTVar1->bIsSet;
          uVar32._5_3_ = *(undefined3 *)&pTVar1->field_0x5;
          TVar33 = pTVar37[-0x1a];
          pTVar2->TypedValue = (float)(undefined4)uVar32;
          pTVar2->bIsSet = (bool)(char)((ulonglong)uVar32 >> 0x20);
          *(int3 *)&pTVar2->field_0x5 = (int3)((ulonglong)uVar32 >> 0x28);
          pTVar37[-0x36] = TVar33;
          pTVar37[-0x35] = pTVar37[-0x19];
          pTVar37[-0x34] = pTVar37[-0x18];
          pTVar37[-0x33] = pTVar37[-0x17];
          pTVar37[-0x32] = pTVar37[-0x16];
          pTVar37[-0x31] = pTVar37[-0x15];
          pTVar37[-0x30] = pTVar37[-0x14];
          pTVar37[-0x2f] = pTVar37[-0x13];
          pTVar37[-0x2e] = pTVar37[-0x12];
          pTVar37[-0x2d] = pTVar37[-0x11];
          pTVar37[-0x2c] = pTVar37[-0x10];
          pTVar37[-0x2b] = pTVar37[-0xf];
          pTVar37[-0x2a] = pTVar37[-0xe];
          pTVar37[-0x29] = pTVar37[-0xd];
          pTVar37[-0x28] = pTVar37[-0xc];
          pTVar37[-0x27] = pTVar37[-0xb];
          pTVar37[-0x26] = pTVar37[-10];
          pTVar37[-0x25] = pTVar37[-9];
          pTVar37[-0x24] = pTVar37[-8];
          pTVar37[-0x23] = pTVar37[-7];
          pTVar37[-0x22] = pTVar37[-6];
          pTVar37[-0x21] = pTVar37[-5];
          pTVar37[-0x20] = pTVar37[-4];
          pTVar37[-0x1f] = pTVar37[-3];
          pTVar37[-0x1e] = pTVar37[-2];
          pTVar37[-0x1d] = pTVar37[-1];
          pTVar37[-0x1c] = *pTVar37;
          pTVar1->TypedValue = (float)(undefined4)uVar4;
          pTVar1->bIsSet = (bool)(char)((ulonglong)uVar4 >> 0x20);
          *(int3 *)&pTVar1->field_0x5 = (int3)((ulonglong)uVar4 >> 0x28);
          pTVar37[-0x1a] = TVar5;
          pTVar37[-0x19] = TVar6;
          pTVar37[-0x18] = TVar7;
          pTVar37[-0x17] = TVar8;
          pTVar37[-0x16] = TVar9;
          pTVar37[-0x15] = TVar10;
          pTVar37[-0x14] = TVar11;
          pTVar37[-0x13] = TVar12;
          pTVar37[-0x12] = TVar13;
          pTVar37[-0x11] = TVar14;
          pTVar37[-0x10] = TVar15;
          pTVar37[-0xf] = TVar16;
          pTVar37[-0xe] = TVar17;
          pTVar37[-0xd] = TVar18;
          pTVar37[-0xc] = TVar19;
          pTVar37[-0xb] = TVar20;
          pTVar37[-10] = TVar21;
          pTVar37[-9] = TVar22;
          pTVar37[-8] = TVar23;
          pTVar37[-7] = TVar24;
          pTVar37[-6] = TVar25;
          local_48 = TVar28.TypedValue;
          uStack_44 = TVar28._4_4_;
          fStack_40 = TVar29.TypedValue;
          uStack_3c = TVar29._4_4_;
          pTVar37[-5] = TVar26;
          pTVar37[-4] = TVar27;
          local_38 = TVar30.TypedValue;
          uStack_34 = TVar30._4_4_;
          fStack_30 = TVar31.TypedValue;
          uStack_2c = TVar31._4_4_;
          pTVar37[-3].TypedValue = local_48;
          *(undefined4 *)&pTVar37[-3].bIsSet = uStack_44;
          pTVar37[-2].TypedValue = fStack_40;
          *(undefined4 *)&pTVar37[-2].bIsSet = uStack_3c;
          pTVar37[-1].TypedValue = local_38;
          *(undefined4 *)&pTVar37[-1].bIsSet = uStack_34;
          pTVar37->TypedValue = fStack_30;
          *(undefined4 *)&pTVar37->bIsSet = uStack_2c;
        }
      }
      iVar38 = iVar38 + 2;
      pTVar37 = pTVar37 + 0x38;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  iVar38 = 2;
  if (2 < param_2) {
    do {
      iVar3 = iVar38 * 2;
      iVar35 = 0;
      iVar34 = param_2;
      do {
        iVar36 = iVar34;
        if (iVar3 <= iVar34) {
          iVar36 = iVar3;
        }
        Merge<SConstraintCanvas::FSlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SConstraintCanvas::FSlot::FSlotArguments,_SConstraintCanvas::Construct_::__l2::<lambda_1>_>_>
                  (param_1 + iVar35,iVar38,iVar36,param_3,param_4);
        iVar35 = iVar35 + iVar3;
        iVar34 = iVar34 + iVar38 * -2;
      } while (iVar35 < param_2);
      iVar38 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

// StaticEnum<enum_EDescendantScrollDestination> @ 1428ae1b0

UEnum * __cdecl StaticEnum<enum_EDescendantScrollDestination>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EDescendantScrollDestination,(UObject *)pUVar1,
                       L"EDescendantScrollDestination");
  }
  return Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton;
}

// StaticEnum<enum_EScrollWhenFocusChanges> @ 1428ae1f0

UEnum * __cdecl StaticEnum<enum_EScrollWhenFocusChanges>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EScrollWhenFocusChanges,(UObject *)pUVar1,
                       L"EScrollWhenFocusChanges");
  }
  return Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton;
}

// StaticEnum<enum_EStretch::Type> @ 1428ae230

UEnum * __cdecl StaticEnum<enum_EStretch::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretch.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EStretch.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EStretch,(UObject *)pUVar1,L"EStretch");
  }
  return Z_Registration_Info_UEnum_EStretch.OuterSingleton;
}

// StaticEnum<enum_EStretchDirection::Type> @ 1428ae270

UEnum * __cdecl StaticEnum<enum_EStretchDirection::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Slate_EStretchDirection,(UObject *)pUVar1,
                       L"EStretchDirection");
  }
  return Z_Registration_Info_UEnum_EStretchDirection.OuterSingleton;
}

// TransformRect<FSlateLayoutTransform> @ 1428ae420

FSlateRect * __cdecl
TransformRect<FSlateLayoutTransform>
          (FSlateRect *__return_storage_ptr__,FSlateLayoutTransform *param_1,FSlateRect *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_1->Scale;
  fVar3 = fVar1 * param_2->Top + (param_1->Translation).field0_0x0._s_0.Y;
  fVar2 = fVar1 * param_2->Right + (param_1->Translation).field0_0x0._s_0.X;
  fVar4 = fVar1 * param_2->Left + (param_1->Translation).field0_0x0._s_0.X;
  fVar5 = fVar1 * param_2->Bottom + (param_1->Translation).field0_0x0._s_0.Y;
  fVar1 = fVar2;
  if (fVar4 <= fVar2) {
    fVar1 = fVar4;
  }
  if (fVar2 <= fVar4) {
    fVar2 = fVar4;
  }
  fVar4 = fVar3;
  if (fVar5 <= fVar3) {
    fVar4 = fVar5;
  }
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  __return_storage_ptr__->Left = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Top = fVar4;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0> @ 1428bf310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_SConstraintCanvas::AddSlot_::__l2::<lambda_1>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001428bf33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0> @ 1428bf350

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_SGridPanel::AddSlot_::__l2::<lambda_1>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SGridPanel::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001428bf37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1> @ 1428bf390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_SScrollBox::ScrollDescendantIntoView_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// operator[] @ 1428c6180

FArguments * __thiscall
NamedSlotProperty<SComboButton::FArguments>::operator[]
          (NamedSlotProperty<SComboButton::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// `vcall'{152,{flat}}'_}' @ 1428c8838

/* [thunk]: __cdecl STableRow<class TSharedPtr<class FString,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FString,1>_>::_vcall__152__flat______(STableRow<TSharedPtr<FString,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c883b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{624,{flat}}'_}' @ 1428c8848

/* [thunk]: __cdecl SExpandableArea::`vcall'{624,{flat}}' }' */

void __thiscall SExpandableArea::_vcall__624__flat______(SExpandableArea *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c884b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x270))();
  return;
}

// `vcall'{640,{flat}}'_}' @ 1428c8858

/* [thunk]: __cdecl SExpandableArea::`vcall'{640,{flat}}' }' */

void __thiscall SExpandableArea::_vcall__640__flat______(SExpandableArea *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c885b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x280))();
  return;
}

// `vcall'{648,{flat}}'_}' @ 1428c8868

/* [thunk]: __cdecl SExpandableArea::`vcall'{648,{flat}}' }' */

void __thiscall SExpandableArea::_vcall__648__flat______(SExpandableArea *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c886b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x288))();
  return;
}

// `vcall'{64,{flat}}'_}' @ 1428c8878

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl SSuggestionTextBox::`vcall'{64,{flat}}' }' */

void __thiscall SSuggestionTextBox::_vcall__64__flat______(SSuggestionTextBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c887b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// `vcall'{584,{flat}}'_}' @ 1428c8884

/* [thunk]: __cdecl SVirtualJoystick::`vcall'{584,{flat}}' }' */

void __thiscall SVirtualJoystick::_vcall__584__flat______(SVirtualJoystick *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001428c8887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1428c8894

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<class FString,1>
   >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SComboRow<TSharedPtr<FString,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<FString,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SComboRow<TSharedPtr<FString,1>_> *)&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1428c88a4

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<class FString,1>
   >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<FString,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FString,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FString,1>_> *)&this[-1].OnGenerateRow.field_0x10,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1428c88b8

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<class FString,1>
   >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FString,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FString,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FString,1>_> *)&this[-1].bChangedSelectionOnMouseDown,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1428c88c8

/* [thunk]:public: virtual void * __ptr64 __cdecl SBox::FBoxOneChildSlot::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
SBox::FBoxOneChildSlot::_vector_deleting_destructor__adjustor_32__
          (FBoxOneChildSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FBoxOneChildSlot *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1428c88d8

/* [thunk]:public: virtual void * __ptr64 __cdecl SDPIScaler::FDPIScalerOneChildSlot::`vector
   deleting destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
SDPIScaler::FDPIScalerOneChildSlot::_vector_deleting_destructor__adjustor_32__
          (FDPIScalerOneChildSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDPIScalerOneChildSlot *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 1428c88e8

/* [thunk]:public: virtual void * __ptr64 __cdecl SVirtualKeyboardEntry::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
SVirtualKeyboardEntry::_vector_deleting_destructor__adjustor_536__
          (SVirtualKeyboardEntry *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SVirtualKeyboardEntry *)&this[-1].Text.Value.Flags,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1428c8900

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FString,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8930

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>::
_scalar_deleting_destructor_(FObservableArrayPointer<TSharedPtr<FString,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &___7__FObservableArrayPointer_V__TSharedPtr_VFString___00___ItemsSource_Slate_UE__6B_;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c89f0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FString,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &___7__FSharedObservableArray_V__TSharedPtr_VFString___00___ItemsSource_Slate_UE__6B_;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8a80

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8ae0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8b40

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8ba0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8c00

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8c60

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8cc0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8d20

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8d80

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1428c8de0

void * __thiscall
IBaseDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8e10

void * __thiscall
IBaseDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8e40

void * __thiscall
IBaseDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8e70

void * __thiscall
IBaseDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8ea0

void * __thiscall
IBaseDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8ed0

void * __thiscall
IBaseDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8f00

void * __thiscall
IBaseDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8f30

void * __thiscall
IBaseDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8f60

void * __thiscall
IBaseDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8f90

void * __thiscall
IBaseDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8fc0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c8ff0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9020

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9050

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9080

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c90b0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c90e0

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9110

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9140

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9170

void * __thiscall
IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c91a0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c91d0

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9200

void * __thiscall
IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9230

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9260

void * __thiscall
IBaseDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9290

void * __thiscall
IBaseDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c92c0

void * __thiscall
IBaseDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c92f0

void * __thiscall
IBaseDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9320

void * __thiscall
IBaseDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9350

void * __thiscall
IBaseDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9380

void * __thiscall
IBaseDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c93b0

void * __thiscall
IBaseDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c93e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9410

void * __thiscall
IBaseDelegateInstance<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9440

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9470

void * __thiscall
IBaseDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c94a0

void * __thiscall
IBaseDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c94d0

void * __thiscall
IBaseDelegateInstance<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9500

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FString,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9530

void * __thiscall
INumericTypeInterface<signed_char>::_scalar_deleting_destructor_
          (INumericTypeInterface<signed_char> *this,uint param_1)

{
  *this = (INumericTypeInterface<signed_char>)&___7__INumericTypeInterface_C__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9570

void * __thiscall
INumericTypeInterface<unsigned_char>::_scalar_deleting_destructor_
          (INumericTypeInterface<unsigned_char> *this,uint param_1)

{
  *this = (INumericTypeInterface<unsigned_char>)&___7__INumericTypeInterface_E__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c95b0

void * __thiscall
INumericTypeInterface<short>::_scalar_deleting_destructor_
          (INumericTypeInterface<short> *this,uint param_1)

{
  *this = (INumericTypeInterface<short>)&___7__INumericTypeInterface_F__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c95f0

void * __thiscall
INumericTypeInterface<unsigned_short>::_scalar_deleting_destructor_
          (INumericTypeInterface<unsigned_short> *this,uint param_1)

{
  *this = (INumericTypeInterface<unsigned_short>)&___7__INumericTypeInterface_G__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9630

void * __thiscall
INumericTypeInterface<int>::_scalar_deleting_destructor_
          (INumericTypeInterface<int> *this,uint param_1)

{
  *this = (INumericTypeInterface<int>)&___7__INumericTypeInterface_H__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9670

void * __thiscall
INumericTypeInterface<unsigned_int>::_scalar_deleting_destructor_
          (INumericTypeInterface<unsigned_int> *this,uint param_1)

{
  *this = (INumericTypeInterface<unsigned_int>)&___7__INumericTypeInterface_I__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c96b0

void * __thiscall
INumericTypeInterface<float>::_scalar_deleting_destructor_
          (INumericTypeInterface<float> *this,uint param_1)

{
  *this = (INumericTypeInterface<float>)&___7__INumericTypeInterface_M__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c96f0

void * __thiscall
INumericTypeInterface<double>::_scalar_deleting_destructor_
          (INumericTypeInterface<double> *this,uint param_1)

{
  *this = (INumericTypeInterface<double>)&___7__INumericTypeInterface_N__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9730

void * __thiscall
INumericTypeInterface<__int64>::_scalar_deleting_destructor_
          (INumericTypeInterface<__int64> *this,uint param_1)

{
  *this = (INumericTypeInterface<__int64>)&___7__INumericTypeInterface__J__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9770

void * __thiscall
INumericTypeInterface<unsigned___int64>::_scalar_deleting_destructor_
          (INumericTypeInterface<unsigned___int64> *this,uint param_1)

{
  *this = (INumericTypeInterface<unsigned___int64>)&___7__INumericTypeInterface__K__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c97b0

void * __thiscall
SComboBox<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (SComboBox<TSharedPtr<FString,1>_> *this,uint param_1)

{
  ~SComboBox<TSharedPtr<FString,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9810

void * __thiscall
SComboRow<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (SComboRow<TSharedPtr<FString,1>_> *this,uint param_1)

{
  STableRow<TSharedPtr<FString,1>_>::~STableRow<TSharedPtr<FString,1>_>
            ((STableRow<TSharedPtr<FString,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9870

void * __thiscall
SListView<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FString,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FString,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c98d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<signed_char>::_scalar_deleting_destructor_(SSpinBox<signed_char> *this,uint param_1)

{
  ~SSpinBox<signed_char>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9930

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<unsigned_char>::_scalar_deleting_destructor_(SSpinBox<unsigned_char> *this,uint param_1)

{
  ~SSpinBox<unsigned_char>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9990

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SSpinBox<short>::_scalar_deleting_destructor_(SSpinBox<short> *this,uint param_1)

{
  ~SSpinBox<short>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c99f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<unsigned_short>::_scalar_deleting_destructor_(SSpinBox<unsigned_short> *this,uint param_1)

{
  ~SSpinBox<unsigned_short>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9a50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SSpinBox<int>::_scalar_deleting_destructor_(SSpinBox<int> *this,uint param_1)

{
  ~SSpinBox<int>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x700);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<unsigned_int>::_scalar_deleting_destructor_(SSpinBox<unsigned_int> *this,uint param_1)

{
  ~SSpinBox<unsigned_int>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x700);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9b10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SSpinBox<float>::_scalar_deleting_destructor_(SSpinBox<float> *this,uint param_1)

{
  ~SSpinBox<float>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x700);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9b70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<double>::_scalar_deleting_destructor_(SSpinBox<double> *this,uint param_1)

{
  ~SSpinBox<double>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x748);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<__int64>::_scalar_deleting_destructor_(SSpinBox<__int64> *this,uint param_1)

{
  ~SSpinBox<__int64>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x748);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9c30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSpinBox<unsigned___int64>::_scalar_deleting_destructor_
          (SSpinBox<unsigned___int64> *this,uint param_1)

{
  ~SSpinBox<unsigned___int64>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x748);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9c90

void * __thiscall
STableRow<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FString,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FString,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9cf0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<signed_char>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9d50

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_char>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9db0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<short>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9e10

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_short>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9e70

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<int>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9ed0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned_int>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9f30

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<float>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9f90

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<double>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428c9ff0

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<__int64>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca050

void * __thiscall
TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TOptional<unsigned___int64>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca0b0

void * __thiscall
TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FMargin___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca110

void * __thiscall
TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy,TFunction<FSlateFontInfo___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca170

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca1d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca230

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca290

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca2f0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca350

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca3b0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca410

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca470

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca4d0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca530

void * __thiscall
TBaseFunctorDelegateInstance<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_EKeyboardType___cdecl(void)>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca590

void * __thiscall
TBaseFunctorDelegateInstance<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ETextJustify::Type___cdecl(void)>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca5f0

void * __thiscall
TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<signed_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<signed_char___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca650

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_char___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca6b0

void * __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<short___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca710

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_short___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca770

void * __thiscall
TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned_int___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca7d0

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,TFunction<float___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca830

void * __thiscall
TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<double___cdecl(void),FDefaultDelegateUserPolicy,TFunction<double___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SExpandableButton::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca8c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SScaleBox::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca8f0

void * __thiscall
TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<__int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<__int64___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca950

void * __thiscall
TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy,TFunction<unsigned___int64___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca9b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ca9e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428caa10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428caa70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428caad0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<signed_char>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cab30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cab90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cabf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_char>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cac50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cacb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cad10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<short>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cad70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cadd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cae30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_short>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cae90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428caef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428caf50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<int>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cafb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb010

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned_int>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb190

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<float>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb250

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<double>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb310

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb370

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<__int64>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb430

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb490

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSpinBox<unsigned___int64>_const_,1,bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb550

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FString,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FString,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb5b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FString,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FString,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb610

void * __thiscall
TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb670

void * __thiscall
TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb6d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SExpandableArea_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb730

void * __thiscall
TBaseSPMethodDelegateInstance<1,SInputKeySelector_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SInputKeySelector_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb790

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb850

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditableTextBox_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb910

void * __thiscall
TBaseSPMethodDelegateInstance<1,SScrollBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SScrollBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb970

void * __thiscall
TBaseSPMethodDelegateInstance<1,SScrollBarTrack_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SScrollBarTrack_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cb9d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SScrollBorder_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SScrollBorder_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cba30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SScrollBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SScrollBox_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cba90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbaf0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbb50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSearchBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSuggestionTextBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSuggestionTextBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbc10

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextComboBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STextComboBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbc70

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextComboBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FString,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STextComboBox_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FString,1>_>
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cbce0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextComboPopup_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STextComboPopup_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbd40

void * __thiscall
TBaseSPMethodDelegateInstance<1,SVolumeControl_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SVolumeControl_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbda0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SVolumeControl_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SVolumeControl_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbe00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbe60

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbec0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbf20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FString,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbf80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<signed_char>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<signed_char>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cbfe0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<signed_char>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc040

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<signed_char>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<signed_char>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_char>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_char>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc100

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_char>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc160

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_char>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_char>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc220

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<short>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc280

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc340

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_short>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc400

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc460

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<int>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc520

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_int>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc580

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_int>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned_int>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc640

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<float>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<float>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc6a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<float>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc700

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<float>,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<float>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc760

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<double>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<double>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc7c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<double>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc820

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<double>,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<double>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc880

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<__int64>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<__int64>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc8e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<__int64>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc940

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<__int64>,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<__int64>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cc9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned___int64>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned___int64>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cca00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned___int64>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cca60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned___int64>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSpinBox<unsigned___int64>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccac0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SExpandableArea,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SExpandableArea,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccb20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInputKeySelector,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInputKeySelector,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccb80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMenuAnchor,1,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMenuAnchor,1,void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiLineEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiLineEditableTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccc40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiLineEditableTextBox,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccca0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSafeZone,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSafeZone,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccd00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SScaleBox,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SScaleBox,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccd60

void * __thiscall
TBaseSPMethodDelegateInstance<0,SScrollBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccdc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SScrollBox,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SScrollBox,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cce20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SScrollBox,1,void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SScrollBox,1,void___cdecl(EVisibility),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cce80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSearchBox,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSearchBox,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428ccee0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSearchBox,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,enum_SSearchBox::SearchDirection>
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

// `scalar_deleting_destructor' @ 1428ccf40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x28);
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
  if (*(longlong **)((longlong)this + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ccfb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSearchBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSearchBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd010

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSearchBox,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd070

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSubMenuHandler,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1428cd0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd190

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd250

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd2b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSuggestionTextBox,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd310

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboBox,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextComboBox,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd370

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboBox,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd3d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboPopup,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextComboPopup,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd430

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboPopup,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextComboPopup,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd490

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboPopup,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd4f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextComboPopup,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd550

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEntryPopup,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd5b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SVirtualJoystick,1,void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SVirtualJoystick,1,void___cdecl(FDisplayMetrics_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd610

void * __thiscall
TBaseSPMethodDelegateInstance<0,SVolumeControl,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SVolumeControl,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd670

void * __thiscall
TBaseSPMethodDelegateInstance<0,SVolumeControl,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SVolumeControl,1,void___cdecl(float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1428cd6d0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd700

void * __thiscall
TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
        _vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
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

// `scalar_deleting_destructor' @ 1428cd780

void * __thiscall
TBasicLayoutWidgetSlot<SGridPanel::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SGridPanel::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
        _vftable__for__TSlotBase<SGridPanel::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
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

// `scalar_deleting_destructor' @ 1428cd800

void * __thiscall
TBasicLayoutWidgetSlot<SResponsiveGridPanel::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SResponsiveGridPanel::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
        _vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
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

// `scalar_deleting_destructor' @ 1428cd880

void * __thiscall
TBasicLayoutWidgetSlot<SScrollBox::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SScrollBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
        _vftable__for__TSlotBase<SScrollBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
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

// `scalar_deleting_destructor' @ 1428cd900

void * __thiscall
TCommonDelegateInstanceState<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<signed_char>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd930

void * __thiscall
TCommonDelegateInstanceState<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<unsigned_char>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd960

void * __thiscall
TCommonDelegateInstanceState<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<short>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd990

void * __thiscall
TCommonDelegateInstanceState<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd9c0

void * __thiscall
TCommonDelegateInstanceState<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cd9f0

void * __thiscall
TCommonDelegateInstanceState<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<unsigned_int>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cda20

void * __thiscall
TCommonDelegateInstanceState<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cda50

void * __thiscall
TCommonDelegateInstanceState<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cda80

void * __thiscall
TCommonDelegateInstanceState<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<__int64>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdab0

void * __thiscall
TCommonDelegateInstanceState<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<unsigned___int64>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdae0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<signed_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdb10

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_char>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdb40

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdb70

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_short>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdba0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdbd0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned_int>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdc00

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdc30

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<double>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdc60

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<__int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdc90

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<INumericTypeInterface<unsigned___int64>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdcc0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdcf0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdd20

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdd50

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,enum_SSearchBox::SearchDirection>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdd80

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cddb0

void * __thiscall
TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FString,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FText___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FString,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cddf0

void * __thiscall
TCommonDelegateInstanceState<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(longlong **)((longlong)this + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cde40

void * __thiscall
TCommonDelegateInstanceState<enum_EKeyboardType___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cde70

void * __thiscall
TCommonDelegateInstanceState<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdea0

void * __thiscall
TCommonDelegateInstanceState<signed_char___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<signed_char___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cded0

void * __thiscall
TCommonDelegateInstanceState<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<unsigned_char___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdf00

void * __thiscall
TCommonDelegateInstanceState<short___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<short___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdf30

void * __thiscall
TCommonDelegateInstanceState<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdf60

void * __thiscall
TCommonDelegateInstanceState<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<unsigned_int___cdecl(void),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdf90

void * __thiscall
TCommonDelegateInstanceState<double___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<double___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdfc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FString,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cdff0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce020

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce050

void * __thiscall
TCommonDelegateInstanceState<__int64___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<__int64___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce080

void * __thiscall
TCommonDelegateInstanceState<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce0b0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce0e0

void * __thiscall
TDefaultNumericTypeInterface<signed_char>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<signed_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_C__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce120

void * __thiscall
TDefaultNumericTypeInterface<unsigned_char>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<unsigned_char> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_E__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce160

void * __thiscall
TDefaultNumericTypeInterface<short>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_F__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce1a0

void * __thiscall
TDefaultNumericTypeInterface<unsigned_short>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<unsigned_short> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_G__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce1e0

void * __thiscall
TDefaultNumericTypeInterface<int>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_H__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce220

void * __thiscall
TDefaultNumericTypeInterface<unsigned_int>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<unsigned_int> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_I__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce260

void * __thiscall
TDefaultNumericTypeInterface<float>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<float> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_M__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce2a0

void * __thiscall
TDefaultNumericTypeInterface<double>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface_N__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce2e0

void * __thiscall
TDefaultNumericTypeInterface<__int64>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<__int64> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface__J__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce320

void * __thiscall
TDefaultNumericTypeInterface<unsigned___int64>::_scalar_deleting_destructor_
          (TDefaultNumericTypeInterface<unsigned___int64> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__INumericTypeInterface__K__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SConstraintCanvas::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
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

// `scalar_deleting_destructor' @ 1428ce3d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SGridPanel::AddSlot'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SGridPanel::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
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

// `scalar_deleting_destructor' @ 1428ce440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce490

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<signed_char>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<signed_char>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce4d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_char>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_char>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce510

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<short>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<short>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce550

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_short>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_short>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce590

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<int>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce5d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_int>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_int>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<float>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<float>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<double>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<double>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<__int64>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<__int64>,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce6d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned___int64>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned___int64>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<TSharedPtr<FString,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<FString,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce750

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<TSharedPtr<FString,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<FString,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce790

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FString,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FString,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce7d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FString,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FString,1>_>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce810

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FString,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FString,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce850

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCircularThrobber,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SCircularThrobber,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce890

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SErrorText,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SErrorText,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x418);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce8d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditableText,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMultiLineEditableText,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBar,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScrollBar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBarTrack,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SScrollBarTrack,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollPanel,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScrollPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ce9d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSlider,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cea10

void * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::_scalar_deleting_destructor_
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int>
            ((TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428cea70

void * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SConstraintCanvas::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428cead0

void * __thiscall
TPanelChildren<SGridPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SGridPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428ceb30

void * __thiscall
TPanelChildren<SRadialBox::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SRadialBox::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428ceb90

void * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )(this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
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

// `scalar_deleting_destructor' @ 1428cebf0

void * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SScrollBarTrack::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_>,int>
            ((TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428cec50

void * __thiscall
TPanelChildren<SScrollBox::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SScrollBox::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428cecb0

void * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SSplitter2x2::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_>,int>
            ((TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428ced10

void * __thiscall
TPanelChildren<SSplitter::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SSplitter::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428ced70

void * __thiscall
TSlotBase<FBasicLayoutWidgetSlot>::_scalar_deleting_destructor_
          (TSlotBase<FBasicLayoutWidgetSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cedb0

void * __thiscall
TSlotBase<SConstraintCanvas::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SConstraintCanvas::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cedf0

void * __thiscall
TSlotBase<SGridPanel::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SGridPanel::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cee30

void * __thiscall
TSlotBase<SRadialBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SRadialBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cee70

void * __thiscall
TSlotBase<SResponsiveGridPanel::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SResponsiveGridPanel::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ceeb0

void * __thiscall
TSlotBase<SScrollBarTrack::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SScrollBarTrack::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428ceef0

void * __thiscall
TSlotBase<SScrollBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SScrollBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cef30

void * __thiscall
TSlotBase<SSplitter2x2::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SSplitter2x2::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cef70

void * __thiscall
TSlotBase<SSplitter::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SSplitter::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cefb0

void * __thiscall
TTableViewMetadata<TSharedPtr<FString,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FString,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf020

void * __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
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

// `scalar_deleting_destructor' @ 1428cf0a0

void * __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SGridPanel::FSlot>__;
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

// `scalar_deleting_destructor' @ 1428cf120

void * __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
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

// `scalar_deleting_destructor' @ 1428cf1a0

void * __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SScrollBox::FSlot>__;
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

// `scalar_deleting_destructor' @ 1428cf220

void * __thiscall
FBasicLayoutWidgetSlot::_scalar_deleting_destructor_(FBasicLayoutWidgetSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
        _vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
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

// `scalar_deleting_destructor' @ 1428cf2a0

void * __thiscall
SBox::FBoxOneChildSlot::_scalar_deleting_destructor_(FBoxOneChildSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf2f0

void * __thiscall
SDPIScaler::FDPIScalerOneChildSlot::_scalar_deleting_destructor_
          (FDPIScalerOneChildSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf340

void * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FSlateAccessibleComboBox::_scalar_deleting_destructor_
          (FSlateAccessibleComboBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf380

void * __thiscall
SListView<TSharedPtr<FString,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf3c0

void * __thiscall
FSlateAccessibleSlider::_scalar_deleting_destructor_(FSlateAccessibleSlider *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf400

void * __thiscall
STableRow<TSharedPtr<FString,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf440

void * __thiscall SConstraintCanvas::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AutoSizeAttr).Getter);
  pvVar1 = *(void **)&(this->AutoSizeAttr).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AutoSizeAttr).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AlignmentAttr).Getter);
  pvVar1 = *(void **)&(this->AlignmentAttr).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AlignmentAttr).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnchorsAttr).Getter);
  pvVar1 = *(void **)&(this->AnchorsAttr).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnchorsAttr).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OffsetAttr).Getter);
  pvVar1 = *(void **)&(this->OffsetAttr).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OffsetAttr).Getter);
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf520

void * __thiscall SGridPanel::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  
  pTVar3 = (this->Panel).WeakReferenceCount.ReferenceController;
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
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
        _vftable__for__TSlotBase<SGridPanel::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar4 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar4 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar4);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf5c0

void * __thiscall SRadialBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf600

void * __thiscall
SResponsiveGridPanel::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  
  pFVar3 = (this->ColumnLayouts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->Panel).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
        _vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar5 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar5 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar5);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf6b0

void * __thiscall SScrollBarTrack::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf6f0

void * __thiscall SScrollBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
        _vftable__for__TSlotBase<SScrollBox::FSlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->_padding_,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf770

void * __thiscall SSplitter2x2::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PercentageAttribute).Getter);
  pvVar1 = *(void **)&(this->PercentageAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PercentageAttribute).Getter);
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf7e0

void * __thiscall SSplitter::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlotResized_Handler);
  pvVar1 = *(void **)&(this->OnSlotResized_Handler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlotResized_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinSizeValue).Getter);
  pvVar1 = *(void **)&(this->MinSizeValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinSizeValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeValue).Getter);
  pvVar1 = *(void **)&(this->SizeValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SizeValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizingRule).Getter);
  pvVar1 = *(void **)&(this->SizingRule).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SizingRule).Getter);
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf8b0

void * __thiscall
IVirtualKeyboardEntry::_scalar_deleting_destructor_(IVirtualKeyboardEntry *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IVirtualKeyboardEntry__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf920

void * __thiscall SBackgroundBlur::_scalar_deleting_destructor_(SBackgroundBlur *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SBackgroundBlur__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf980

void * __thiscall SBorder::_scalar_deleting_destructor_(SBorder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cf9e0

void * __thiscall SBox::_scalar_deleting_destructor_(SBox *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SBox__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfa70

void * __thiscall
SConstraintCanvas::_scalar_deleting_destructor_(SConstraintCanvas *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SConstraintCanvas__6B_;
  DestructItems<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,int>
            ((TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1428cfb10

void * __thiscall SDPIScaler::_scalar_deleting_destructor_(SDPIScaler *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SDPIScaler__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfba0

void * __thiscall SErrorText::_scalar_deleting_destructor_(SErrorText *this,uint param_1)

{
  ~SErrorText(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfc00

void * __thiscall
SExpandableButton::_scalar_deleting_destructor_(SExpandableButton *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseExpansionButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleButtonExpanded).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToggleButtonClosed).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExpandedChildContent).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfca0

void * __thiscall SFxWidget::_scalar_deleting_destructor_(SFxWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfd00

void * __thiscall SGridPanel::_scalar_deleting_destructor_(SGridPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SGridPanel__6B_;
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)(this->RowFillCoefficients).AllocatorInstance.Data,
             (this->RowFillCoefficients).ArrayNum);
  pFVar1 = (this->RowFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)(this->ColFillCoefficients).AllocatorInstance.Data,
             (this->ColFillCoefficients).ArrayNum);
  pFVar1 = (this->ColFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
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
    __empty_global_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfe10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SMenuAnchor::_scalar_deleting_destructor_(SMenuAnchor *this,uint param_1)

{
  ~SMenuAnchor(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cfe70

void * __thiscall SRadialBox::_scalar_deleting_destructor_(SRadialBox *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)
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
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cff10

void * __thiscall
SResponsiveGridPanel::_scalar_deleting_destructor_(SResponsiveGridPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SResponsiveGridPanel__6B_;
  pFVar1 = (this->RowFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )(this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
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
    __empty_global_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428cffc0

void * __thiscall SSafeZone::_scalar_deleting_destructor_(SSafeZone *this,uint param_1)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->OnSafeFrameChangedHandle).ID;
  this->_padding_ = (longlong)&___7SSafeZone__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,FVar1);
  }
  this->_padding_ = (longlong)&___7SBox__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&this->_padding_);
  FChildren::~FChildren((FChildren *)&this->_padding_);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0070

void * __thiscall SScaleBox::_scalar_deleting_destructor_(SScaleBox *this,uint param_1)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->OnSafeFrameChangedHandle).ID;
  this->_padding_ = (longlong)&___7SScaleBox__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d00f0

void * __thiscall SScissorRectBox::_scalar_deleting_destructor_(SScissorRectBox *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0170

void * __thiscall SScrollBar::_scalar_deleting_destructor_(SScrollBar *this,uint param_1)

{
  ~SScrollBar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d01d0

void * __thiscall SScrollBarTrack::_scalar_deleting_destructor_(SScrollBarTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_>,int>
            ((TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_> *)
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
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0270

void * __thiscall SScrollBorder::_scalar_deleting_destructor_(SScrollBorder *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&___7SScrollBorder__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollableWidget).Getter);
  pvVar3 = *(void **)&(this->ScrollableWidget).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ScrollableWidget).Getter);
  pTVar4 = (this->ScrollableWidget).Value.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BorderFadeDistance).Getter);
  pvVar3 = *(void **)&(this->BorderFadeDistance).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderFadeDistance).Getter);
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

// `scalar_deleting_destructor' @ 1428d0360

void * __thiscall SScrollBox::_scalar_deleting_destructor_(SScrollBox *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7SScrollBox__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->ScrollIntoViewRequest != 0) {
    plVar1 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
    plVar4 = (longlong *)&(this->ScrollIntoViewRequest).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBoxFocusLost);
  pvVar2 = *(void **)&(this->OnScrollBoxFocusLost).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBoxFocusLost);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBoxFocusReceived);
  pvVar2 = *(void **)&(this->OnScrollBoxFocusReceived).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBoxFocusReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBarVisibilityChanged);
  pvVar2 = *(void **)&(this->OnScrollBarVisibilityChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBarVisibilityChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled);
  pvVar2 = *(void **)&(this->OnUserScrolled).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrolled);
  pFVar3 = (this->InertialScrollManager).ScrollSamples.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollPanel).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x470);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d04e0

void * __thiscall SScrollPanel::_scalar_deleting_destructor_(SScrollPanel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)
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
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0580

void * __thiscall SSlider::_scalar_deleting_destructor_(SSlider *this,uint param_1)

{
  ~SSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d05e0

void * __thiscall SSpacer::_scalar_deleting_destructor_(SSpacer *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0640

void * __thiscall SSplitter2x2::_scalar_deleting_destructor_(SSplitter2x2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_>,int>
            ((TUniquePtr<SSplitter2x2::FSlot,TDefaultDelete<SSplitter2x2::FSlot>_> *)
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
    __empty_global_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d06e0

void * __thiscall SSplitter::_scalar_deleting_destructor_(SSplitter *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHandleHovered);
  pvVar1 = *(void **)&(this->OnHandleHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHandleHovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxSlotSize);
  pvVar1 = *(void **)&(this->OnGetMaxSlotSize).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMaxSlotSize);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSplitterFinishedResizing);
  pvVar1 = *(void **)&(this->OnSplitterFinishedResizing).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplitterFinishedResizing);
  DestructItems<TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_>,int>
            ((TUniquePtr<SSplitter::FSlot,TDefaultDelete<SSplitter::FSlot>_> *)
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
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d07f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSuggestionTextBox::_scalar_deleting_destructor_(SSuggestionTextBox *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingSuggestions);
  pvVar1 = *(void **)&(this->OnShowingSuggestions).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnShowingSuggestions);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShowingHistory);
  pvVar1 = *(void **)&(this->OnShowingHistory).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnShowingHistory);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VerticalBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SuggestionListView).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Suggestions).AllocatorInstance.Data,
             (this->Suggestions).ArrayNum);
  pFVar2 = (this->Suggestions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuAnchor).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x378);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1428d0950

void * __thiscall
SVirtualKeyboardEntry::_scalar_deleting_destructor_(SVirtualKeyboardEntry *this,uint param_1)

{
  ~SVirtualKeyboardEntry(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// AsWidgetRef @ 1428d7a60

TSharedRef<SWidget,1> * __cdecl
`anonymous_namespace'::AsWidgetRef
          (TSharedRef<SWidget,1> *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  if (param_1->Object == (SWidget *)0x0) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  else {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__->Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// CalculateStretchedCellSizes @ 1428da450

void __cdecl
CalculateStretchedCellSizes
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  TAttribute<float> *pTVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  iVar7 = param_3->ArrayNum;
  uVar10 = 0;
  iVar1 = param_4->ArrayNum;
  fVar13 = 0.0;
  if (0 < iVar7) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      if (lVar9 < iVar1) {
        uVar8 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar6 = (TAttribute<float> *)((param_4->AllocatorInstance).Data + lVar11);
        if (pTVar6->bIsSet == false) {
          fVar12 = 0.0;
        }
        else {
          pfVar5 = TAttribute<float>::Get(pTVar6);
          fVar12 = *pfVar5;
        }
        iVar7 = param_3->ArrayNum;
        if (fVar12 == 0.0) goto LAB_1428da51f;
        fVar13 = fVar13 + fVar12;
      }
      else {
LAB_1428da51f:
        uVar8 = 0;
        if ((int)uVar10 < iVar7) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        param_2 = param_2 - *(float *)((param_3->AllocatorInstance).Data + lVar9 * 4);
      }
      iVar7 = param_3->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((int)uVar10 < iVar7);
  }
  uVar10 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      uVar8 = ~uVar10 >> 0x1f;
      if (lVar9 < iVar1) {
        uVar4 = 0;
        if ((int)uVar10 < param_4->ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar6 = (TAttribute<float> *)((param_4->AllocatorInstance).Data + lVar11);
        if (pTVar6->bIsSet == false) {
          fVar12 = 0.0;
        }
        else {
          pfVar5 = TAttribute<float>::Get(pTVar6);
          fVar12 = *pfVar5;
        }
        iVar7 = param_3->ArrayNum;
        if (fVar12 == 0.0) goto LAB_1428da63d;
        fVar12 = (fVar12 / fVar13) * param_2;
      }
      else {
LAB_1428da63d:
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar12 = *(float *)((param_3->AllocatorInstance).Data + lVar9 * 4);
      }
      uVar4 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x20;
      *(float *)((param_1->AllocatorInstance).Data + lVar9 * 4) = fVar12;
      lVar9 = lVar9 + 1;
      iVar7 = param_3->ArrayNum;
    } while ((int)uVar10 < iVar7);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeSScaleBox @ 1429263a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSScaleBox(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSScrollBox @ 1429263b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSScrollBox(void)

{
  return;
}

// GetMenuOffsetForPlacement @ 142942420

TVector2<double> * __cdecl
GetMenuOffsetForPlacement
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,EMenuPlacement param_2,
          TVector2<double> *param_3)

{
  undefined8 uVar1;
  FDeprecateSlateVector2D FVar2;
  double dVar3;
  EMenuPlacement local_res18 [4];
  float local_18;
  float fStack_14;
  undefined8 local_10;
  
  switch(param_2) {
  case MenuPlacement_BelowAnchor:
    fStack_14 = SUB84(param_1->Size,4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStack_14;
    return __return_storage_ptr__;
  case MenuPlacement_CenteredBelowAnchor:
    dVar3 = (param_3->field0_0x0)._s_0.X * __real_3fe0000000000000;
    local_18 = SUB84(param_1->Size,0);
    local_18 = local_18 * __real_3f000000;
    local_10._4_4_ = SUB84(param_1->Size,4);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_10._4_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18 - dVar3;
    return __return_storage_ptr__;
  case MenuPlacement_BelowRightAnchor:
  case MenuPlacement_ComboBoxRight:
    FVar2 = param_1->Size;
    local_10._0_4_ = FVar2._0_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)(float)local_10 - (param_3->field0_0x0)._s_0.X;
    fStack_14 = FVar2._4_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStack_14;
    return __return_storage_ptr__;
  case MenuPlacement_ComboBox:
    local_10._4_4_ = SUB84(param_1->Size,4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_10._4_4_;
    return __return_storage_ptr__;
  case MenuPlacement_MenuRight:
    local_10._0_4_ = SUB84(param_1->Size,0);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_10;
    return __return_storage_ptr__;
  case MenuPlacement_AboveAnchor:
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    break;
  case MenuPlacement_CenteredAboveAnchor:
    local_10._0_4_ = SUB84(param_1->Size,0);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((float)local_10 * __real_3f000000) -
         (param_3->field0_0x0)._s_0.X * __real_3fe0000000000000;
    break;
  case MenuPlacement_AboveRightAnchor:
    local_10._0_4_ = SUB84(param_1->Size,0);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)*(undefined8 *)&param_3->field0_0x0 ^
                          (uint)__xmm_80000000000000008000000000000000) - (double)(float)local_10;
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    return __return_storage_ptr__;
  case MenuPlacement_MenuLeft:
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)*(undefined8 *)&param_3->field0_0x0 ^
                          (uint)__xmm_80000000000000008000000000000000);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    return __return_storage_ptr__;
  case MenuPlacement_Center:
    local_10._0_4_ = SUB84(param_1->Size,0);
    fStack_14 = SUB84(param_1->Size,4);
    fStack_14 = fStack_14 * __real_3f000000;
    dVar3 = (param_3->field0_0x0)._s_0.Y * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((float)local_10 * __real_3f000000) -
         (param_3->field0_0x0)._s_0.X * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStack_14 - dVar3;
    return __return_storage_ptr__;
  case MenuPlacement_RightLeftCenter:
    local_10._0_4_ = SUB84(param_1->Size,0);
    fStack_14 = SUB84(param_1->Size,4);
    fStack_14 = fStack_14 * __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)fStack_14 - (param_3->field0_0x0)._s_0.Y * __real_3fe0000000000000;
    return __return_storage_ptr__;
  case MenuPlacement_MatchBottomLeft:
    local_10._4_4_ = SUB84(param_1->Size,4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)local_10._4_4_ - (param_3->field0_0x0)._s_0.Y;
    return __return_storage_ptr__;
  default:
    local_10 = local_res18;
    local_res18[0] = param_2;
    `GetMenuOffsetForPlacement'::__l4::<lambda_1>::operator()(&local_10);
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  return __return_storage_ptr__;
}

// QueryPopupMethod @ 142987b30

/* WARNING: Enum "Type": Some values do not have unique names */

FPopupMethodReply * __cdecl
QueryPopupMethod(FPopupMethodReply *__return_storage_ptr__,FWidgetPath *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPopupMethodReply *pFVar6;
  ForElementType<FArrangedWidget> FVar7;
  uint uVar8;
  longlong lVar9;
  char local_28 [8];
  longlong local_20;
  TReferenceControllerBase<1> *local_18;
  EPopupMethod local_10;
  EShouldThrottle local_f;
  
  uVar8 = (param_1->Widgets).Array.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x48;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (param_1->Widgets).Array.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPopupMethodReply *)(*pcVar3)();
        return pFVar6;
      }
      FVar1 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar7 = FVar1;
      }
      plVar2 = *(longlong **)(lVar9 + 0x38 + (longlong)FVar7);
      (**(code **)(*plVar2 + 0x120))(plVar2,local_28);
      if (local_28[0] != '\0') {
        *(char *)&__return_storage_ptr__->_padding_ = local_28[0];
        __return_storage_ptr__->_padding_ = local_20;
        __return_storage_ptr__->_padding_ = (longlong)local_18;
        __return_storage_ptr__->PopupMethod = local_10;
        __return_storage_ptr__->ShouldThrottle = local_f;
        local_18 = (TReferenceControllerBase<1> *)0x0;
        local_20 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
      lVar9 = lVar9 + -0x48;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->PopupMethod = CreateNewWindow;
  __return_storage_ptr__->ShouldThrottle = Yes;
  return __return_storage_ptr__;
}

// SpinBoxComputeExponentSliderFraction @ 1429a1ae0

float __cdecl SpinBoxComputeExponentSliderFraction(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  if (param_1 <= param_2) {
    fVar2 = powf(__real_3f800000 - (param_2 - param_1) / param_2,param_3);
    return param_2 - (fVar1 - fVar2) * param_2;
  }
  fVar3 = __real_3f800000 - param_2;
  fVar2 = powf(__real_3f800000 - (param_1 - param_2) / fVar3,param_3);
  return (fVar1 - fVar2) * fVar3 + param_2;
}

// Z_Construct_UEnum_Slate_EDescendantScrollDestination @ 1429b1290

UEnum * __cdecl Z_Construct_UEnum_Slate_EDescendantScrollDestination(void)

{
  if (Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton,
               &Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EScrollWhenFocusChanges @ 1429b12d0

UEnum * __cdecl Z_Construct_UEnum_Slate_EScrollWhenFocusChanges(void)

{
  if (Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton,
               &Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EStretch @ 1429b1310

UEnum * __cdecl Z_Construct_UEnum_Slate_EStretch(void)

{
  if (Z_Registration_Info_UEnum_EStretch.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStretch.InnerSingleton,
               &Z_Construct_UEnum_Slate_EStretch_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStretch.InnerSingleton;
}

// Z_Construct_UEnum_Slate_EStretchDirection @ 1429b1350

UEnum * __cdecl Z_Construct_UEnum_Slate_EStretchDirection(void)

{
  if (Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton,
               &Z_Construct_UEnum_Slate_EStretchDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStretchDirection.InnerSingleton;
}

// OpenApplicationMenus'' @ 15035d040

void __cdecl `dynamic_atexit_destructor_for_'SMenuAnchor::OpenApplicationMenus__(void)

{
  DestructItems<TWeakPtr<IMenu,1>,int>
            ((TWeakPtr<IMenu,1> *)SMenuAnchor::OpenApplicationMenus.AllocatorInstance.Data,
             SMenuAnchor::OpenApplicationMenus.ArrayNum);
  if (SMenuAnchor::OpenApplicationMenus.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(SMenuAnchor::OpenApplicationMenus.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVar'' @ 15035d080

void __cdecl SpinBoxPrivate::_dynamic_atexit_destructor_for__CVar__(void)

{
  CVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDownsampleForBlur'' @ 15035d0a0

void __cdecl _dynamic_atexit_destructor_for__CVarDownsampleForBlur__(void)

{
  CVarDownsampleForBlur._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDownsampleForBlur);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSafeZoneScale'' @ 15035d0c0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableSafeZoneScale__(void)

{
  CVarEnableSafeZoneScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableSafeZoneScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceLowQualityBackgroundBlurOverride'' @ 15035d0e0

void __cdecl _dynamic_atexit_destructor_for__CVarForceLowQualityBackgroundBlurOverride__(void)

{
  CVarForceLowQualityBackgroundBlurOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceLowQualityBackgroundBlurOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSafeZoneScale'' @ 15035d100

void __cdecl _dynamic_atexit_destructor_for__CVarSafeZoneScale__(void)

{
  CVarSafeZoneScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSafeZoneScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateAllowBackgroundBlurWidgets'' @ 15035d120

void __cdecl _dynamic_atexit_destructor_for__CVarSlateAllowBackgroundBlurWidgets__(void)

{
  CVarSlateAllowBackgroundBlurWidgets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateAllowBackgroundBlurWidgets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateMaxKernelSize'' @ 15035d140

void __cdecl _dynamic_atexit_destructor_for__CVarSlateMaxKernelSize__(void)

{
  CVarSlateMaxKernelSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateMaxKernelSize);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035d160

void __cdecl
`SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035d180

void __cdecl
`SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OverrideScissorRect'' @ 15035d1a0

void __cdecl Slate::_dynamic_atexit_destructor_for__OverrideScissorRect__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&OverrideScissorRect);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d1c0

void __cdecl
`TDefaultNumericTypeInterface<signed_char>::FromString'::__l2::
_dynamic_atexit_destructor_for__Parser__(void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<signed_char>___cdecl_TDefaultNumericTypeInterface<signed_char>::FromString(FString_const&___ptr64,signed_char_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d1e0

void __cdecl
`TDefaultNumericTypeInterface<unsigned_char>::FromString'::__l2::
_dynamic_atexit_destructor_for__Parser__(void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<unsigned_char>___cdecl_TDefaultNumericTypeInterface<unsigned_char>::FromString(FString_const&___ptr64,unsigned_char_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d200

void __cdecl
`TDefaultNumericTypeInterface<short>::FromString'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<short>___cdecl_TDefaultNumericTypeInterface<short>::FromString(FString_const&___ptr64,short_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d220

void __cdecl
`TDefaultNumericTypeInterface<unsigned_short>::FromString'::__l2::
_dynamic_atexit_destructor_for__Parser__(void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<unsigned_short>___cdecl_TDefaultNumericTypeInterface<unsigned_short>::FromString(FString_const&___ptr64,unsigned_short_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d240

void __cdecl
`TDefaultNumericTypeInterface<int>::FromString'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<int>___cdecl_TDefaultNumericTypeInterface<int>::FromString(FString_const&___ptr64,int_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d260

void __cdecl
`TDefaultNumericTypeInterface<unsigned_int>::FromString'::__l2::
_dynamic_atexit_destructor_for__Parser__(void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<unsigned_int>___cdecl_TDefaultNumericTypeInterface<unsigned_int>::FromString(FString_const&___ptr64,unsigned_int_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d280

void __cdecl
`TDefaultNumericTypeInterface<float>::FromString'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<float>___cdecl_TDefaultNumericTypeInterface<float>::FromString(FString_const&___ptr64,float_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d2a0

void __cdecl
`TDefaultNumericTypeInterface<double>::FromString'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<double>___cdecl_TDefaultNumericTypeInterface<double>::FromString(FString_const&___ptr64,double_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d2c0

void __cdecl
`TDefaultNumericTypeInterface<__int64>::FromString'::__l2::_dynamic_atexit_destructor_for__Parser__
          (void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<__int64>___cdecl_TDefaultNumericTypeInterface<__int64>::FromString(FString_const&___ptr64,__int64_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'Parser'' @ 15035d2e0

void __cdecl
`TDefaultNumericTypeInterface<unsigned___int64>::FromString'::__l2::
_dynamic_atexit_destructor_for__Parser__(void)

{
  FBasicMathExpressionEvaluator::~FBasicMathExpressionEvaluator
            (&`public:_virtual_struct_TOptional<unsigned___int64>___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::FromString(FString_const&___ptr64,unsigned___int64_const&___ptr64)___ptr64'
              ::__l2::Parser);
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d300

void __cdecl
`TDefaultNumericTypeInterface<signed_char>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<signed_char>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d320

void __cdecl
`TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_char>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d340

void __cdecl
`TDefaultNumericTypeInterface<short>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<short>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d360

void __cdecl
`TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_short>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d380

void __cdecl
`TDefaultNumericTypeInterface<int>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<int>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d3a0

void __cdecl
`TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned_int>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d3c0

void __cdecl
`TDefaultNumericTypeInterface<float>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<float>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d3e0

void __cdecl
`TDefaultNumericTypeInterface<double>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<double>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d400

void __cdecl
`TDefaultNumericTypeInterface<__int64>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<__int64>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ValidChars'' @ 15035d420

void __cdecl
`TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid'::__l2::
_dynamic_atexit_destructor_for__ValidChars__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
               ::__l2::ValidChars.Data.AllocatorInstance.Data;
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_bool___cdecl_TDefaultNumericTypeInterface<unsigned___int64>::IsCharacterValid(wchar_t)const___ptr64'
      ::__l2::ValidChars.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d440

void __cdecl
`SBackgroundBlur::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d490

void __cdecl
`SBox::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d4e0

void __cdecl
`SDPIScaler::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d530

void __cdecl
`SExpandableButton::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpandableButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d580

void __cdecl
`SGridPanel::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d5d0

void __cdecl
`SResponsiveGridPanel::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d620

void __cdecl
`SScaleBox::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SScaleBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d670

void __cdecl
`SSlider::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSlider::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035d6c0

void __cdecl
`SSpacer::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 150494940

bool __thiscall `GetMenuOffsetForPlacement'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8126881042398183375>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8126881042398183375>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

