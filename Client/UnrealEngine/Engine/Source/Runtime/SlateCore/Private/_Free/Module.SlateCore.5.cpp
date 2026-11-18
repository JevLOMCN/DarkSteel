// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 286

// AccessibleIdMap'' @ 140f3fc60

void __cdecl `dynamic_initializer_for_'FSlateAccessibleWidgetCache::AccessibleIdMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSlateAccessibleWidgetCache::AccessibleIdMap__);
  return;
}

// AccessibleWidgetMap'' @ 140f3fc80

void __cdecl `dynamic_initializer_for_'FSlateAccessibleWidgetCache::AccessibleWidgetMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSlateAccessibleWidgetCache::AccessibleWidgetMap__);
  return;
}

// NoChildrenInstance'' @ 140f3fca0

void __cdecl `dynamic_initializer_for_'FNoChildren::NoChildrenInstance__(void)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedRef<SWidget,1> local_18;
  
  pTVar4 = NullWidgetPrivate::Construct(&local_18);
  pSVar1 = pTVar4->Object;
  FNoChildren::NoChildrenInstance._0_8_ = &___7FChildren__6B_;
  FNoChildren::NoChildrenInstance._8_8_ = pSVar1;
  ::FName::FName((FName *)&FNoChildren::NoChildrenInstance.field_0x10,"Children");
  FNoChildren::NoChildrenInstance._24_2_ = 0xdc00;
  if (pSVar1 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNoChildren::NoChildrenInstance._0_8_ = &___7FNoChildren__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  atexit(`dynamic_atexit_destructor_for_'FNoChildren::NoChildrenInstance__);
  return;
}

// NullWidget'' @ 140f3fd40

void __cdecl `dynamic_initializer_for_'SNullWidget::NullWidget__(void)

{
  NullWidgetPrivate::Construct(&SNullWidget::NullWidget);
  atexit(`dynamic_atexit_destructor_for_'SNullWidget::NullWidget__);
  return;
}

// `dynamic_initializer_for_'AccessibleSummaryText'' @ 140f3fd70

void __cdecl _dynamic_initializer_for__AccessibleSummaryText__(void)

{
  atexit(_dynamic_atexit_destructor_for__AccessibleSummaryText__);
  return;
}

// `dynamic_initializer_for_'AccessibleText'' @ 140f3fd90

void __cdecl _dynamic_initializer_for__AccessibleText__(void)

{
  atexit(_dynamic_atexit_destructor_for__AccessibleText__);
  return;
}

// `dynamic_initializer_for_'AccessibleWidgetsProcessedPerTickRef'' @ 140f3fdb0

void __cdecl _dynamic_initializer_for__AccessibleWidgetsProcessedPerTickRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&AccessibleWidgetsProcessedPerTickRef,L"Slate.AccessibleWidgetsProcessedPerTick",
             &GAccessibleWidgetsProcessedPerTick,
             L"To reduce performance spikes, generating the accessible widget tree is limited to this many widgets per tick to update."
             ,0);
  atexit(_dynamic_atexit_destructor_for__AccessibleWidgetsProcessedPerTickRef__);
  return;
}

// `dynamic_initializer_for_'CVarCaptureRootInvalidationCallstacks'' @ 140f3fe00

void __cdecl _dynamic_initializer_for__CVarCaptureRootInvalidationCallstacks__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCaptureRootInvalidationCallstacks,
             L"SlateDebugger.bCaptureRootInvalidationCallstacks",&bCaptureRootInvalidationCallstacks
             ,
             L"Whenever a widget is the root cause of an invalidation, capture the callstack for slate insights."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCaptureRootInvalidationCallstacks__);
  return;
}

// `dynamic_initializer_for_'CVarCullingSlackFillPercent'' @ 140f3fe50

void __cdecl _dynamic_initializer_for__CVarCullingSlackFillPercent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCullingSlackFillPercent,L"Slate.CullingSlackFillPercent",&GCullingSlackFillPercent
             ,
             L"Scales the culling rect by the amount to provide extra slack/wiggle room for widgets that have a true bounds larger than the root child widget in a container."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCullingSlackFillPercent__);
  return;
}

// `dynamic_initializer_for_'CVarEnableSlateWidgetTracker'' @ 140f3fea0

void __cdecl _dynamic_initializer_for__CVarEnableSlateWidgetTracker__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableSlateWidgetTracker,L"Slate.EnableSlateWidgetTracker",local_res8,
             L"Whether or not we enable the tracking of widgets via the Slate Widget Tracker.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSlateWidgetTracker__);
  return;
}

// `dynamic_initializer_for_'CVarSlateDebugCulling'' @ 140f3fef0

void __cdecl _dynamic_initializer_for__CVarSlateDebugCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateDebugCulling,L"Slate.DebugCulling",&GDebugCulling,
             L"Controls whether we should ignore clip rects, and just use culling.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateDebugCulling__);
  return;
}

// `dynamic_initializer_for_'CVarSlateEnsureAllVisibleWidgetsPaint'' @ 140f3ff40

void __cdecl _dynamic_initializer_for__CVarSlateEnsureAllVisibleWidgetsPaint__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateEnsureAllVisibleWidgetsPaint,L"Slate.EnsureAllVisibleWidgetsPaint",
             &GSlateEnsureAllVisibleWidgetsPaint,
             L"Ensures that if a child widget is visible before OnPaint, that it was painted this frame after OnPaint, if still marked as visible.  Only works if we\'re on the FastPaintPath."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateEnsureAllVisibleWidgetsPaint__);
  return;
}

// `dynamic_initializer_for_'CVarSlateEnsureOutgoingLayerId'' @ 140f3ff90

void __cdecl _dynamic_initializer_for__CVarSlateEnsureOutgoingLayerId__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateEnsureOutgoingLayerId,L"Slate.EnsureOutgoingLayerId",
             &GSlateEnsureOutgoingLayerId,
             L"Ensures that child widget returns the correct layer id with OnPaint.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateEnsureOutgoingLayerId__);
  return;
}

// `dynamic_initializer_for_'CVarSlateShowClipRects'' @ 140f3ffe0

void __cdecl _dynamic_initializer_for__CVarSlateShowClipRects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateShowClipRects,L"Slate.ShowClipping",&GShowClipping,
             L"Controls whether we should render a clipping zone outline.  Yellow = Axis Scissor Rect Clipping (cheap).  Red = Stencil Clipping (expensive)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateShowClipRects__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SBoxPanel'' @ 140f40030

void __cdecl _dynamic_initializer_for__ClassRegistration__SBoxPanel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_78;
  EInvalidateWidgetReason EStack_68;
  ForAnyElementType FStack_60;
  ulonglong uStack_58;
  undefined1 auStack_50 [24];
  FAttributeEntry FStack_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SBoxPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = FName::FName(aFStackX_18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_78,*pFVar1,0x218);
      EStack_68 = Layout;
      FStack_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = FName::FName(aFStackX_18,"Slot.Padding");
      auStack_50[0] = EStack_68;
      auStack_50._8_8_ = FStack_60.Data;
      auStack_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (FStack_78.Descriptor,&FStack_38,FStack_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)auStack_50);
      if (((int)uStack_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (FStack_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_60.Data);
      }
      TResizingWidgetSlotMixin<SBoxPanel::FSlot>::RegisterAttributesMixin(&FStack_78);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBoxPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SCompoundWidget'' @ 140f40040

void __cdecl _dynamic_initializer_for__ClassRegistration__SCompoundWidget__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SCompoundWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SCompoundWidget::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SCompoundWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SHorizontalBox'' @ 140f40050

void __cdecl _dynamic_initializer_for__ClassRegistration__SHorizontalBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SHorizontalBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SHorizontalBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SImage'' @ 140f40060

void __cdecl _dynamic_initializer_for__ClassRegistration__SImage__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SImage");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SImage::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SImage::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SOverlay'' @ 140f40070

void __cdecl _dynamic_initializer_for__ClassRegistration__SOverlay__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FContainerInitializer FStack_78;
  EInvalidateWidgetReason EStack_68;
  ForAnyElementType FStack_60;
  ulonglong uStack_58;
  undefined1 auStack_50 [24];
  FAttributeEntry FStack_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SOverlay");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = FName::FName(aFStackX_18,8,L"Children",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_78,*pFVar1,0x218);
      EStack_68 = Layout;
      FStack_60.Data = (FScriptContainerElement *)0x0;
      uStack_58 = 0;
      pFVar1 = FName::FName(aFStackX_18,"Slot.Padding");
      auStack_50[0] = EStack_68;
      auStack_50._8_8_ = FStack_60.Data;
      auStack_50._16_4_ = (int)uStack_58;
      FSlateAttributeDescriptor::AddContainedAttribute
                (FStack_78.Descriptor,&FStack_38,FStack_78.ContainerName,*pFVar1,8,
                 (FInvalidateWidgetReasonAttribute *)auStack_50);
      if (((int)uStack_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
        uStack_58 = uStack_58 & 0xffffffff00000000;
      }
      if (FStack_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_60.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SOverlay::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SStackBox'' @ 140f40080

void __cdecl _dynamic_initializer_for__ClassRegistration__SStackBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SStackBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SStackBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SVerticalBox'' @ 140f40090

void __cdecl _dynamic_initializer_for__ClassRegistration__SVerticalBox__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SVerticalBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBoxPanel::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SVerticalBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SWidget'' @ 140f400a0

void __cdecl _dynamic_initializer_for__ClassRegistration__SWidget__(void)

{
  FName *pFVar1;
  int *piVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(&FStackX_10,"SWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      if (*piVar2 < `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          pFVar1 = FName::FName(&FStackX_18,L"FSlateControlledConstruction");
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.WidgetType = *pFVar1;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.ArrayNum = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Attributes.ArrayMax = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.AllocatorInstance.SecondaryData =
               (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.ArrayNum = 0;
          `public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
          ::__l2::Instance.Descriptor.Containers.ArrayMax = 1;
          atexit(`FSlateControlledConstruction::StaticWidgetClass'::__l2::
                 _dynamic_atexit_destructor_for__Instance__);
          _Init_thread_footer(&`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,
                 &`public:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_FSlateControlledConstruction::StaticWidgetClass(void)'
                  ::__l2::Instance.Descriptor);
      SWidget::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'DumpAccessibilityStatsSlateCommand'' @ 140f400b0

void __cdecl _dynamic_initializer_for__DumpAccessibilityStatsSlateCommand__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = FSlateAccessibleWidgetCache::DumpAccessibilityStats;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpAccessibilityStatsSlateCommand,L"Accessibility.DumpStatsSlate",
             L"Writes memory stats for Slate\'s accessibility data stored to LogAccessibility.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__DumpAccessibilityStatsSlateCommand__);
  return;
}

// `dynamic_initializer_for_'FSlateChildrenForEachTestAutomationTestInstance'' @ 140f401f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FSlateChildrenForEachTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSlateChildrenForEachTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FSlateChildrenForEachTestAutomationTestInstance,&local_18,false
            );
  FSlateChildrenForEachTestAutomationTestInstance._0_8_ = &___7FSlateChildrenForEachTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSlateChildrenForEachTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FSlateInvalidationWidgetListTestAutomationTestInstance'' @ 140f40250

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FSlateInvalidationWidgetListTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSlateInvalidationWidgetListTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FSlateInvalidationWidgetListTestAutomationTestInstance,
             &local_18,false);
  FSlateInvalidationWidgetListTestAutomationTestInstance._0_8_ =
       &___7FSlateInvalidationWidgetListTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSlateInvalidationWidgetListTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FSlateInvalidationWidgetReasonLexTestAutomationTestInstance'' @ 140f402b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FSlateInvalidationWidgetReasonLexTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSlateInvalidationWidgetReasonLexTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FSlateInvalidationWidgetReasonLexTestAutomationTestInstance,
             &local_18,false);
  FSlateInvalidationWidgetReasonLexTestAutomationTestInstance._0_8_ =
       &___7FSlateInvalidationWidgetReasonLexTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FSlateInvalidationWidgetReasonLexTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UI_Slate'' @ 140f40310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UI_Slate__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_UISummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UI_SlateLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_UISummaryLLM;
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_UISummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar4,L"UI",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_UI_SlateLLM;
  if (StatPtr_STAT_UI_SlateLLM == (FThreadSafeStaticStat<FStat_STAT_UI_SlateLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_UI_SlateLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UI_SlateLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_SlateLLM,*pFVar4,L"UI_Slate",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"UI");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"UI Slate");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UI_Slate,L"UI_Slate",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UI_Style'' @ 140f40490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UI_Style__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_UISummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UI_StyleLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_UISummaryLLM;
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_UISummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar4,L"UI",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_UI_StyleLLM;
  if (StatPtr_STAT_UI_StyleLLM == (FThreadSafeStaticStat<FStat_STAT_UI_StyleLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_UI_StyleLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UI_StyleLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_StyleLLM,*pFVar4,L"UI_Style",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"UI");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"UI Style");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UI_Style,L"UI_Style",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UI_Text'' @ 140f40610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UI_Text__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_UISummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UI_TextLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_UISummaryLLM;
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_UISummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar4,L"UI",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_UI_TextLLM;
  if (StatPtr_STAT_UI_TextLLM == (FThreadSafeStaticStat<FStat_STAT_UI_TextLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_UI_TextLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UI_TextLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_TextLLM,*pFVar4,L"UI_Text",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"UI");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"UI Text");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UI_Text,L"UI_Text",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UI_Texture'' @ 140f40790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UI_Texture__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_UISummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UI_TextureLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_UISummaryLLM;
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_UISummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar4,L"UI",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_UI_TextureLLM;
  if (StatPtr_STAT_UI_TextureLLM == (FThreadSafeStaticStat<FStat_STAT_UI_TextureLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_UI_TextureLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UI_TextureLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_TextureLLM,*pFVar4,
                       L"UI_Texture","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"UI");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"UI Texture");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UI_Texture,L"UI_Texture",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UI_UMG'' @ 140f40910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UI_UMG__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_UISummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UI_UMGLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_UISummaryLLM;
  if (StatPtr_STAT_UISummaryLLM == (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_UISummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_UISummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UISummaryLLM,*pFVar4,L"UI",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_UI_UMGLLM;
  if (StatPtr_STAT_UI_UMGLLM == (FThreadSafeStaticStat<FStat_STAT_UI_UMGLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_UI_UMGLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UI_UMGLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_UMGLLM,*pFVar4,L"UI_UMG",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"UI");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,"UI UMG");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UI_UMG,L"UI_UMG",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'ModuleLoadLock'' @ 140f40a90

void __cdecl UE::Slate::Private::_dynamic_initializer_for__ModuleLoadLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&ModuleLoadLock,4000);
  atexit(_dynamic_atexit_destructor_for__ModuleLoadLock__);
  return;
}

// `dynamic_initializer_for_'SlateChannelReg'' @ 140f40ac0

void __cdecl _dynamic_initializer_for__SlateChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&SlateChannelObject,"SlateChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask'' @ 140f40af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEnqueueAccessibleTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateEnqueueAccessibleTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask,
               *pFVar1,L"Slate Accessibility: Enqueue Accessible Task","STATGROUP_Accessibility",
               "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateEventRaised'' @ 140f40b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateEventRaised__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateEventRaised ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEventRaised>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateEventRaised");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateEventRaised,*pFVar1,
               L"Slate Accessibility: Event Raised","STATGROUP_Accessibility","STATCAT_Advanced",
               L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateGetChildAtPosition'' @ 140f40c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateGetChildAtPosition__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateGetChildAtPosition ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateGetChildAtPosition>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateGetChildAtPosition");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateGetChildAtPosition,
               *pFVar1,L"Slate Accessibility: Get Widget At Point","STATGROUP_Accessibility",
               "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks'' @ 140f40ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateProcessAccessibleTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateProcessAccessibleTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks,
               *pFVar1,L"Slate Accessibility: Process Accessible Tasks","STATGROUP_Accessibility",
               "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateRunInThread'' @ 140f40d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateRunInThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateRunInThread ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateRunInThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateRunInThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateRunInThread,*pFVar1,
               L"Slate Accessibility: Run In Thread","STATGROUP_Accessibility","STATCAT_Advanced",
               L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AccessibilitySlateTick'' @ 140f40dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AccessibilitySlateTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AccessibilitySlateTick ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AccessibilitySlateTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateTick,*pFVar1,
               L"Slate Accessibility: Tick","STATGROUP_Accessibility","STATCAT_Advanced",
               L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateExecuteActiveTimers'' @ 140f40e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateExecuteActiveTimers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateExecuteActiveTimers ==
      (FThreadSafeStaticStat<FStat_STAT_SlateExecuteActiveTimers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateExecuteActiveTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateExecuteActiveTimers,*pFVar1,
               L"Execute Active Timers","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateGetMetaData'' @ 140f40ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateGetMetaData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateGetMetaData == (FThreadSafeStaticStat<FStat_STAT_SlateGetMetaData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateGetMetaData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetMetaData,*pFVar1,
               L"SWidget MetaData","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateNumPaintedWidgets'' @ 140f40f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateNumPaintedWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateNumPaintedWidgets ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumPaintedWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateNumPaintedWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumPaintedWidgets,*pFVar1,
               L"SWidget::Paint (Count)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateNumTickedWidgets'' @ 140f41000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateNumTickedWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateNumTickedWidgets ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumTickedWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateNumTickedWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumTickedWidgets,*pFVar1,
               L"SWidget::Tick (Count)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlatePrepass'' @ 140f41090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlatePrepass__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlatePrepass == (FThreadSafeStaticStat<FStat_STAT_SlatePrepass>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlatePrepass");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePrepass,*pFVar1,L"SlatePrepass",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateSWidgetAllocSize'' @ 140f41120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateSWidgetAllocSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateSWidgetAllocSize ==
      (FThreadSafeStaticStat<FStat_STAT_SlateSWidgetAllocSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateSWidgetAllocSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateSWidgetAllocSize,*pFVar1,
               L"SWidget Total Allocated Size","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTextureAtlasMemory'' @ 140f411b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTextureAtlasMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTextureAtlasMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTextureAtlasMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureAtlasMemory,*pFVar1,
               L"Texture Atlas Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTextureDataMemory'' @ 140f41240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTextureDataMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTextureDataMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTextureDataMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,*pFVar1,
               L"Texture Data Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTextureGPUMemory'' @ 140f412d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTextureGPUMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTextureGPUMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTextureGPUMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureGPUMemory,*pFVar1,
               L"Texture Data Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTickWidgets'' @ 140f41360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTickWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTickWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateTickWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTickWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTickWidgets,*pFVar1,L"Tick Widgets",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTotalWidgets'' @ 140f413f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTotalWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTotalWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTotalWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTotalWidgets,*pFVar1,L"Total Widgets"
               ,"STATGROUP_SlateMemory","STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false
               ,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateTotalWidgetsPerFrame'' @ 140f41480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateTotalWidgetsPerFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateTotalWidgetsPerFrame ==
      (FThreadSafeStaticStat<FStat_STAT_SlateTotalWidgetsPerFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateTotalWidgetsPerFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTotalWidgetsPerFrame,*pFVar1,
               L"Widgets Created (Per Frame)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate_CreateStatID'' @ 140f41510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Slate_CreateStatID__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate_CreateStatID == (FThreadSafeStaticStat<FStat_STAT_Slate_CreateStatID>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_Slate_CreateStatID");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_CreateStatID,*pFVar1,
               L"SWidget::CreateStatID","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate_UpdateAllAttributes'' @ 140f415a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Slate_UpdateAllAttributes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate_UpdateAllAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateAllAttributes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Slate_UpdateAllAttributes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_UpdateAllAttributes,*pFVar1,
               L"UpdateAllAttributes","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes'' @ 140f41630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Slate_UpdateChildrenOnlyVisibilityAttributes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_Slate_UpdateChildrenOnlyVisibilityAttributes,*pFVar1,
               L"UpdateChildrenOnlyVisibilityAttributes","STATGROUP_Slate","STATCAT_Advanced",
               L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes'' @ 140f416c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateExceptVisibilityAttributes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Slate_UpdateExceptVisibilityAttributes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_UpdateExceptVisibilityAttributes,
               *pFVar1,L"UpdateExceptVisibilityAttributes","STATGROUP_Slate","STATCAT_Advanced",
               L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate_UpdateVisibilityAttributes'' @ 140f41750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Slate_UpdateVisibilityAttributes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate_UpdateVisibilityAttributes ==
      (FThreadSafeStaticStat<FStat_STAT_Slate_UpdateVisibilityAttributes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Slate_UpdateVisibilityAttributes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate_UpdateVisibilityAttributes,*pFVar1,
               L"UpdateVisibilityAttributes","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UI_SlateLLM'' @ 140f417e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UI_SlateLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UI_SlateLLM == (FThreadSafeStaticStat<FStat_STAT_UI_SlateLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UI_SlateLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_SlateLLM,*pFVar1,L"UI_Slate",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UI_StyleLLM'' @ 140f41870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UI_StyleLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UI_StyleLLM == (FThreadSafeStaticStat<FStat_STAT_UI_StyleLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UI_StyleLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_StyleLLM,*pFVar1,L"UI_Style",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UI_TextLLM'' @ 140f41900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UI_TextLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UI_TextLLM == (FThreadSafeStaticStat<FStat_STAT_UI_TextLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UI_TextLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_TextLLM,*pFVar1,L"UI_Text",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UI_TextureLLM'' @ 140f41990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UI_TextureLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UI_TextureLLM == (FThreadSafeStaticStat<FStat_STAT_UI_TextureLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UI_TextureLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_TextureLLM,*pFVar1,L"UI_Texture",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UI_UMGLLM'' @ 140f41a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UI_UMGLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UI_UMGLLM == (FThreadSafeStaticStat<FStat_STAT_UI_UMGLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UI_UMGLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UI_UMGLLM,*pFVar1,L"UI_UMG",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'UpdateWidgetInfos'' @ 140f41ab0

void __cdecl SlateTraceDetail::_dynamic_initializer_for__UpdateWidgetInfos__(void)

{
  atexit(_dynamic_atexit_destructor_for__UpdateWidgetInfos__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h__Script_SlateCore_1498444229'' @ 140f41ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h__Script_SlateCore_1498444229__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h__Script_SlateCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `scalar_deleting_destructor' @ 1425ac820

void * __thiscall FNoChildren::_scalar_deleting_destructor_(FNoChildren *this,uint param_1)

{
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425acdf0

void * __thiscall
FSlateInvalidationWidgetReasonLexTest::_scalar_deleting_destructor_
          (FSlateInvalidationWidgetReasonLexTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425ad350

void * __thiscall
FSlateChildrenForEachTest::_scalar_deleting_destructor_
          (FSlateChildrenForEachTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 1425ad3d0

void * __cdecl Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDeprecateSlateVector2D,&UE::CoreUObject::Private::Construct<FDeprecateSlateVector2D>,&UE::CoreUObject::Private::ConstructForTests<FDeprecateSlateVector2D>,&UE::CoreUObject::Private::SerializeSlot<FDeprecateSlateVector2D>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FDeprecateSlateVector2D>,&UE::CoreUObject::Private::GetStructTypeHash<FDeprecateSlateVector2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1425b0280

void * __thiscall
FSlateInvalidationWidgetListTest::_scalar_deleting_destructor_
          (FSlateInvalidationWidgetListTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// ApplyAfter<`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_&,SWidget_&> @ 1425b10b0

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_&,SWidget_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_3> *param_1,SWidget *param_2)

{
  longlong *plVar1;
  
  if (((param_1->OverrideType == ExecuteBeforePrevious) &&
      (*(int *)&(param_1->Previous).field_0x8 != 0)) &&
     (plVar1 = *(longlong **)&param_1->Previous, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  if ((*(int *)&(param_1->Callback).field_0x8 != 0) &&
     (plVar1 = *(longlong **)&param_1->Callback, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  if (((param_1->OverrideType == ExecuteAfterPrevious) &&
      (*(int *)&(param_1->Previous).field_0x8 != 0)) &&
     (plVar1 = *(longlong **)&param_1->Previous, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  return;
}

// ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot> @ 1425b1130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>
          (EFlowDirection param_1,TPanelChildren<SBoxPanel::FSlot> *param_2,FGeometry *param_3,
          FArrangedChildren *param_4,float param_5,bool param_6,TVector2<double> *param_7)

{
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  *pFVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  FDeprecateSlateVector2D *pFVar5;
  float fVar6;
  TEnumAsByte<EVisibility::Private> TVar7;
  longlong lVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForElementType<FArrangedWidget> FVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  TPanelChildren<SBoxPanel::FSlot> *this;
  FArrangedChildren *pFVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  EVisibility EVar27;
  bool bVar28;
  int iVar29;
  longlong lVar30;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  FVar31;
  FSlot *pFVar32;
  ForElementType<FArrangedWidget> FVar33;
  ulonglong uVar34;
  uchar *puVar35;
  uint uVar36;
  int iVar37;
  FDeprecateVector2DParameter this_00;
  longlong lVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_428 [32];
  undefined1 local_3d7;
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  EFlowDirection local_3d3;
  undefined8 local_3d0;
  undefined8 local_3c8;
  TPanelChildren<SBoxPanel::FSlot> *local_3c0;
  FArrangedChildren *local_3b8;
  FSlateLayoutTransform local_3b0;
  undefined8 local_3a4;
  undefined8 uStack_39c;
  undefined8 local_394;
  uint uStack_38c;
  undefined4 uStack_388;
  FDeprecateVector2DParameter local_384;
  TVector2<double> *local_378;
  TSharedRef<SWidget,1> local_370;
  undefined4 local_360;
  float fStack_35c;
  undefined4 uStack_358;
  float fStack_354;
  undefined1 local_348 [32];
  float local_328 [3] [2];
  SWidget *local_310;
  FSharedReferencer<1> local_308;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  local_2f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  uVar36 = (param_2->Children).ArrayNum;
  uVar34 = (ulonglong)uVar36;
  local_378 = param_7;
  if (uVar36 != 0) {
    fVar46 = 0.0;
    fVar48 = 0.0;
    local_2f8.SecondaryData =
         (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          )0x0;
    fVar45 = 0.0;
    local_ec = 0x10;
    fVar47 = 0.0;
    local_394 = 0;
    uStack_38c = uStack_38c & 0xffffff00;
    uStack_388 = 0;
    local_3a4 = 0;
    uStack_39c = 0;
    local_3d3 = param_1;
    local_3c8 = (FDeprecateVector2DParameter)param_3;
    local_3c0 = param_2;
    local_3b8 = param_4;
    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar34);
    }
    local_f0 = 0;
    if ((uVar36 == 0x10) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
                  (0x20,4,uVar36,&local_2f8,0,&local_ec), 0 < (int)uVar36)) {
      do {
        FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar31 = local_2f8.SecondaryData;
        }
        if ((ulonglong)FVar31 <= &local_3a4) {
          FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar31 = local_2f8.SecondaryData;
          }
          if ((&local_3a4 < (undefined8 *)((longlong)local_ec * 0x20 + (longlong)FVar31)) &&
             (bVar26 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
                               (0x420,&local_2f8,&local_ec);
        }
        lVar30 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar31 = local_2f8.SecondaryData;
        }
        puVar4 = (undefined8 *)(lVar30 * 0x20 + (longlong)FVar31);
        *puVar4 = local_3a4;
        puVar4[1] = uStack_39c;
        puVar4 = (undefined8 *)(lVar30 * 0x20 + 0x10 + (longlong)FVar31);
        *puVar4 = local_394;
        puVar4[1] = CONCAT44(uStack_388,uStack_38c);
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    fVar43 = __real_7f7fffff;
    bVar26 = false;
    bVar21 = false;
    uVar36 = 0;
    bVar22 = false;
    if (0 < (param_2->Children).ArrayNum) {
      lVar30 = 0;
      lVar38 = 0;
      EVar27.Value.Value = EVisibility::Collapsed.Value.Value;
      do {
        uVar40 = 0;
        if ((int)uVar36 < (param_2->Children).ArrayNum) {
          uVar40 = ~uVar36 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar28 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), EVar27 = EVisibility::Collapsed, bVar28)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar8 = *(longlong *)((param_2->Children).AllocatorInstance.Data + lVar38);
        lVar9 = *(longlong *)(lVar8 + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar9 + 0x39) != EVar27.Value.Value) {
          bVar26 = true;
          local_360 = *(undefined4 *)(lVar8 + 0x28);
          fStack_35c = *(float *)(lVar8 + 0x2c);
          uStack_358 = *(undefined4 *)(lVar8 + 0x30);
          fStack_354 = *(float *)(lVar8 + 0x34);
          fVar45 = fVar45 + fStack_354 + fStack_35c;
          local_3d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if ((*(byte *)(lVar9 + 0x31) & 0x20) != 0) {
            local_3d0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar9 + 0x170))->_s_0;
          }
          fVar44 = *(float *)(lVar8 + 0x4c);
          fVar49 = *(float *)(lVar8 + 0x50);
          uVar40 = 0;
          if ((int)uVar36 < local_f0) {
            uVar40 = ~uVar36 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar28 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar31 = local_2f8.SecondaryData;
          }
          *(float *)(lVar30 + 8 + (longlong)FVar31) = fVar44;
          *(float *)(lVar30 + 0xc + (longlong)FVar31) = fVar49;
          iVar29 = *(int *)(lVar8 + 0x40);
          *(int *)(lVar30 + 0x1c + (longlong)FVar31) = iVar29;
          if (fVar49 <= 0.0) {
            fVar49 = fVar43;
          }
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          if (local_3d0._4_4_ <= fVar49) {
            fVar49 = local_3d0._4_4_;
          }
          if (fVar49 <= fVar44) {
            fVar49 = fVar44;
          }
          EVar27.Value.Value = EVisibility::Collapsed.Value.Value;
          if (iVar29 == 1) {
            fVar44 = *(float *)(lVar8 + 0x44);
            fVar47 = fVar47 + fVar49;
            *(float *)(lVar30 + 0x10 + (longlong)FVar31) = fVar44;
            fVar46 = fVar46 + fVar44;
            *(float *)(lVar30 + 0x14 + (longlong)FVar31) = fVar44;
            fVar48 = fVar48 + fVar44;
            *(undefined8 *)(lVar30 + (longlong)FVar31) = 0;
            bVar21 = true;
          }
          else {
            if (iVar29 == 2) {
              fVar44 = *(float *)(lVar8 + 0x44);
              fVar47 = fVar47 + fVar49;
              if (fVar44 <= 0.0) {
                fVar44 = 0.0;
              }
              bVar22 = true;
              *(float *)(lVar30 + 0x10 + (longlong)FVar31) = fVar44;
              fVar46 = fVar46 + fVar44;
              fVar44 = *(float *)(lVar8 + 0x48);
              if (fVar44 <= 0.0) {
                fVar44 = 0.0;
              }
              *(float *)(lVar30 + 0x14 + (longlong)FVar31) = fVar44;
              fVar48 = fVar48 + fVar44;
            }
            else {
              fVar45 = fVar45 + fVar49;
              *(undefined8 *)(lVar30 + 0x10 + (longlong)FVar31) = 0;
            }
            *(float *)(lVar30 + 4 + (longlong)FVar31) = fVar49;
            *(float *)(lVar30 + (longlong)FVar31) = fVar49;
          }
        }
        iVar29 = local_f0;
        this_00 = local_3c8;
        uVar36 = uVar36 + 1;
        lVar38 = lVar38 + 8;
        lVar30 = lVar30 + 0x20;
        param_2 = local_3c0;
      } while ((int)uVar36 < (local_3c0->Children).ArrayNum);
      if (bVar26) {
        fVar44 = fVar47;
        if (param_6) {
          fVar44 = 0.0;
        }
        local_3d0 = *(TVector2<float>_u_0_s_0 *)local_3c8;
        fVar49 = local_3d0._4_4_ - fVar45;
        if (local_3d0._4_4_ - fVar45 <= fVar44) {
          fVar49 = fVar44;
        }
        if ((bVar21) && (0.0 < fVar46)) {
          lVar30 = (longlong)local_f0;
          fVar45 = 0.0;
          FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar31 = local_2f8.SecondaryData;
          }
          puVar35 = (uchar *)((longlong)FVar31 + 0x10);
          while( true ) {
            if (local_f0 != iVar29) {
              local_3d7 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3d7);
            }
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar35 + -0x10) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar30 * 0x20 + (longlong)FVar31)) break;
            if (*(float *)(puVar35 + 0xc) == 1.4013e-45) {
              fVar44 = *(float *)(puVar35 + -8);
              fVar39 = (fVar49 * *(float *)puVar35) / fVar46;
              fVar42 = *(float *)(puVar35 + -4);
              if (*(float *)(puVar35 + -4) <= 0.0) {
                fVar42 = fVar43;
              }
              if (fVar42 <= fVar39) {
                fVar39 = fVar42;
              }
              if (fVar44 <= 0.0) {
                fVar44 = 0.0;
              }
              if (fVar39 <= fVar44) {
                fVar39 = fVar44;
              }
              *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar35 + -0x10))->InlineData = fVar39;
              fVar45 = fVar45 + fVar39;
            }
            puVar35 = puVar35 + 0x20;
          }
          fVar49 = fVar49 - fVar45;
        }
        iVar29 = local_f0;
        uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar45 = __real_322bcc77;
        bVar26 = fVar49 <= fVar47;
        if (!bVar26) {
          fVar48 = fVar46;
        }
        if ((bVar22) && (0.0 < fVar48)) {
          lVar30 = (longlong)local_f0;
          iVar37 = 0;
          FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar31 = local_2f8.SecondaryData;
          }
          puVar35 = (uchar *)((longlong)FVar31 + 0x18);
          while( true ) {
            if (local_f0 != iVar29) {
              local_3d6 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3d6);
            }
            fVar48 = __real_38d1b717;
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar35 + -0x18) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar30 * 0x20 + (longlong)FVar31)) break;
            if (*(int *)(puVar35 + 4) == 2) {
              fVar49 = fVar49 - *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                                            *)(puVar35 + -0x18))->InlineData;
              iVar37 = iVar37 + 1;
              if (bVar26) {
                uVar40 = *(uint *)(puVar35 + -4);
              }
              else {
                uVar40 = *(uint *)(puVar35 + -8);
              }
              *puVar35 = (float)(uVar40 & uVar36) <= fVar45 | *puVar35;
            }
            puVar35 = puVar35 + 0x20;
          }
          iVar29 = 5;
          if (iVar37 < 5) {
            iVar29 = iVar37;
          }
          iVar37 = 0;
          this_00 = local_3c8;
          if (0 < iVar29) {
            do {
              iVar24 = local_f0;
              this_00 = local_3c8;
              if ((float)((uint)fVar49 & uVar36) <= fVar45) break;
              lVar30 = (longlong)local_f0;
              fVar46 = 0.0;
              fVar47 = 0.0;
              FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar31 = local_2f8.SecondaryData;
              }
              puVar35 = (uchar *)((longlong)FVar31 + 0x18);
              while( true ) {
                if (local_f0 != iVar24) {
                  local_3d5 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_3d5);
                }
                iVar25 = local_f0;
                if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(puVar35 + -0x18) ==
                    (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(lVar30 * 0x20 + (longlong)FVar31)) break;
                if ((*(int *)(puVar35 + 4) == 2) && (*puVar35 == '\0')) {
                  fVar46 = fVar46 + *(float *)(puVar35 + -8);
                  fVar47 = fVar47 + *(float *)(puVar35 + -0x14) * *(float *)(puVar35 + -4);
                }
                puVar35 = puVar35 + 0x20;
              }
              fVar43 = fVar47;
              if (!bVar26) {
                fVar43 = fVar46;
              }
              this_00 = local_3c8;
              if (fVar43 < fVar48) break;
              lVar30 = (longlong)local_f0;
              fVar43 = 0.0;
              FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar31 = local_2f8.SecondaryData;
              }
              puVar35 = (uchar *)((longlong)FVar31 + 0x10);
              while( true ) {
                if (local_f0 != iVar25) {
                  local_3d4 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_3d4);
                }
                pFVar1 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar35 + -0x10);
                if (pFVar1 == (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                               *)(lVar30 * 0x20 + (longlong)FVar31)) break;
                if ((*(float *)(puVar35 + 0xc) == 2.8026e-45) && (puVar35[8] == '\0')) {
                  if (bVar26) {
                    fVar44 = (*(float *)(puVar35 + -0xc) * *(float *)(puVar35 + 4)) / fVar47;
                  }
                  else {
                    fVar44 = *(float *)puVar35 / fVar46;
                  }
                  fVar44 = fVar44 * fVar49;
                  if ((float)((uint)fVar44 & uVar36) <= fVar45) {
                    puVar35[8] = '\x01';
                    puVar35 = puVar35 + 0x20;
                  }
                  else {
                    fVar39 = *(float *)pFVar1->InlineData;
                    fVar42 = *(float *)(puVar35 + -8);
                    fVar41 = fVar44 + fVar39;
                    fVar6 = *(float *)(puVar35 + -4);
                    if (fVar41 <= fVar42) {
                      puVar35[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar42;
                      puVar35 = puVar35 + 0x20;
                      fVar43 = fVar43 + (fVar42 - fVar39);
                    }
                    else {
                      if ((fVar6 <= 0.0) || (fVar41 < fVar6)) {
                        *(float *)pFVar1->InlineData = fVar41;
                        fVar43 = fVar43 + fVar44;
                        goto LAB_1425b1907;
                      }
                      puVar35[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar6;
                      puVar35 = puVar35 + 0x20;
                      fVar43 = fVar43 + (fVar6 - fVar39);
                    }
                  }
                }
                else {
LAB_1425b1907:
                  puVar35 = puVar35 + 0x20;
                }
              }
              iVar37 = iVar37 + 1;
              fVar49 = fVar49 - fVar43;
              this_00 = local_3c8;
            } while (iVar37 < iVar29);
          }
        }
        pFVar23 = local_3b8;
        this = local_3c0;
        fVar48 = 0.0;
        iVar29 = (local_3b8->Array).ArrayNum;
        pTVar2 = &local_3b8->Array;
        uVar36 = (local_3c0->Children).ArrayNum + iVar29;
        if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
        }
        piVar3 = &(local_3b8->Array).ArrayMax;
        if (*piVar3 < (int)uVar36) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,uVar36,&pTVar2->AllocatorInstance,iVar29,piVar3);
        }
        fVar45 = __real_3f000000;
        dVar14 = __real_47efffffe0000000;
        dVar16 = __real_47efffffe0000000;
        dVar18 = __real_3810000000000000;
        dVar20 = __real_3810000000000000;
        for (uVar36 = 0; (-1 < (int)uVar36 && ((int)uVar36 < (this->Children).ArrayNum));
            uVar36 = uVar36 + 1) {
          pFVar32 = TPanelChildren<SBoxPanel::FSlot>::operator[](this,uVar36);
          TVar7.Value = *(byte *)(*(longlong *)&pFVar32->field_0x10 + 0x39);
          uVar40 = 0;
          if ((int)uVar36 < local_f0) {
            uVar40 = ~uVar36 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar26 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          fVar46 = *(float *)&pFVar32->field_0x2c;
          fVar47 = *(float *)&pFVar32->field_0x34;
          FVar31 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar31 = local_2f8.SecondaryData;
          }
          fVar43 = *(float *)((longlong)(int)uVar36 * 0x20 + (longlong)FVar31);
          local_3b0.Translation.field0_0x0._s_0.X = *(float *)&pFVar32->field_0x28;
          fVar44 = *(float *)&pFVar32->field_0x30;
          if (local_3d3 == RightToLeft) {
            local_3b0.Translation.field0_0x0._s_0.X = *(float *)&pFVar32->field_0x30;
            fVar44 = *(float *)&pFVar32->field_0x28;
          }
          local_3c0 = *(TPanelChildren<SBoxPanel::FSlot> **)this_00;
          iVar29 = *(int *)&pFVar32->field_0x38;
          fVar49 = fVar46 + fVar47 + fVar43;
          if ((local_3d3 == LeftToRight) || (local_3d3 != RightToLeft)) {
LAB_1425b1ac0:
            if (iVar29 != 0) goto LAB_1425b1ac4;
            local_370.Object = *(SWidget **)&pFVar32->field_0x10;
LAB_1425b1b4a:
            local_3c8._0_4_ = local_3c0._0_4_ - (fVar44 + local_3b0.Translation.field0_0x0._s_0.X);
            if ((float)local_3c8 <= 0.0) {
              local_3c8._0_4_ = 0.0;
            }
          }
          else {
            if (iVar29 == 1) {
              iVar29 = 3;
            }
            else {
              if (iVar29 != 3) goto LAB_1425b1ac0;
              iVar29 = 1;
            }
LAB_1425b1ac4:
            local_370.Object = *(SWidget **)&pFVar32->field_0x10;
            local_3d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            if ((local_370.Object)->bDesiredSizeSet != '\0') {
              local_3d0 = *(TVector2<float>_u_0 *)&((local_370.Object)->DesiredSize).field0_0x0._s_0
              ;
            }
            local_3c8._0_4_ = local_3c0._0_4_ - (fVar44 + local_3b0.Translation.field0_0x0._s_0.X);
            if ((float)local_3d0 <= (float)local_3c8) {
              local_3c8._0_4_ = (float)local_3d0;
            }
            if ((float)local_3c8 <= __real_00000000) {
              local_3c8._0_4_ = __real_00000000;
            }
            if (iVar29 != 1) {
              if (iVar29 == 2) {
                local_3b0.Translation.field0_0x0._s_0.X =
                     ((local_3c0._0_4_ - (float)local_3c8) * fVar45 +
                     local_3b0.Translation.field0_0x0._s_0.X) - fVar44;
              }
              else {
                if (iVar29 != 3) goto LAB_1425b1b4a;
                local_3b0.Translation.field0_0x0._s_0.X =
                     (local_3c0._0_4_ - (float)local_3c8) - fVar44;
              }
            }
          }
          iVar29 = *(int *)&pFVar32->field_0x3c;
          if (iVar29 == 0) {
LAB_1425b1bb8:
            local_3c8._4_4_ = fVar43;
            if (fVar43 <= 0.0) {
              local_3c8._4_4_ = 0.0;
            }
          }
          else {
            local_3d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            if ((local_370.Object)->bDesiredSizeSet != '\0') {
              local_3d0 = (TVector2<float>_u_0)
                          *(TVector2<float>_u_0 *)&((local_370.Object)->DesiredSize).field0_0x0._s_0
              ;
            }
            local_3c8._4_4_ = fVar43;
            if (local_3d0._4_4_ <= fVar43) {
              local_3c8._4_4_ = local_3d0._4_4_;
            }
            if (local_3c8._4_4_ <= 0.0) {
              local_3c8._4_4_ = 0.0;
            }
            if (iVar29 != 1) {
              if (iVar29 == 2) {
                fVar46 = ((fVar49 - local_3c8._4_4_) * fVar45 + fVar46) - fVar47;
              }
              else {
                if (iVar29 != 3) goto LAB_1425b1bb8;
                fVar46 = (fVar49 - local_3c8._4_4_) - fVar47;
              }
            }
          }
          pTVar10 = *(TReferenceControllerBase<1> **)&pFVar32->field_0x18;
          local_3b0.Translation.field0_0x0._s_0.Y = fVar48 + fVar46 + param_5;
          dVar13 = (double)local_3b0.Translation.field0_0x0._s_0.X;
          if (dVar14 <= (double)local_3b0.Translation.field0_0x0._s_0.X) {
            dVar13 = dVar14;
          }
          dVar15 = (double)local_3b0.Translation.field0_0x0._s_0.Y;
          if (dVar16 <= (double)local_3b0.Translation.field0_0x0._s_0.Y) {
            dVar15 = dVar16;
          }
          dVar17 = (double)(local_3b0.Translation.field0_0x0._s_0.X + (float)local_3c8);
          if ((double)(local_3b0.Translation.field0_0x0._s_0.X + (float)local_3c8) <= dVar18) {
            dVar17 = dVar18;
          }
          dVar19 = (double)(local_3b0.Translation.field0_0x0._s_0.Y + local_3c8._4_4_);
          if ((double)(local_3b0.Translation.field0_0x0._s_0.Y + local_3c8._4_4_) <= dVar20) {
            dVar19 = dVar20;
          }
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_384 = local_3c8;
          local_3b0.Scale = 1.0;
          local_370.SharedReferenceCount.ReferenceController = pTVar10;
          FGeometry::MakeChild
                    ((FGeometry *)this_00,(FArrangedWidget *)local_348,&local_370,&local_384,
                     &local_3b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          if (((local_3b8->VisibilityFilter).Value.Value & TVar7.Value) != 0) {
            FVar11 = (pFVar23->Array).AllocatorInstance.SecondaryData;
            FVar33 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
              FVar33 = FVar11;
            }
            if ((ulonglong)FVar33 <= local_348) {
              FVar33 = (ForElementType<FArrangedWidget>)pTVar2;
              if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
                FVar33 = FVar11;
              }
              if ((local_348 < (undefined1 *)((longlong)FVar33 + (longlong)*piVar3 * 0x48)) &&
                 (bVar26 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar26)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            iVar29 = (pFVar23->Array).ArrayNum;
            if (iVar29 == *piVar3) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,&pTVar2->AllocatorInstance,piVar3);
            }
            (pFVar23->Array).ArrayNum = iVar29 + 1;
            FVar11 = (pFVar23->Array).AllocatorInstance.SecondaryData;
            lVar30 = (longlong)iVar29;
            FVar33 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
              FVar33 = FVar11;
            }
            pFVar5 = (FDeprecateSlateVector2D *)((longlong)FVar33 + lVar30 * 0x48);
            *pFVar5 = (FDeprecateSlateVector2D)local_348._0_8_;
            pFVar5[1] = (FDeprecateSlateVector2D)local_348._8_8_;
            *(undefined8 *)((uchar *)((longlong)FVar33 + 0x10) + lVar30 * 0x48) = local_348._16_8_;
            *(undefined8 *)((uchar *)((longlong)FVar33 + 0x10) + lVar30 * 0x48 + 8) =
                 local_348._24_8_;
            *(float (*) [2])((uchar *)((longlong)FVar33 + 0x20) + lVar30 * 0x48) = local_328[0];
            *(float (*) [2])((uchar *)((longlong)FVar33 + 0x20) + lVar30 * 0x48 + 8) = local_328[1];
            *(float (*) [2])((uchar *)((longlong)FVar33 + 0x30) + lVar30 * 0x48) = local_328[2];
            *(SWidget **)((uchar *)((longlong)FVar33 + 0x38) + lVar30 * 0x48) = local_310;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar33 + 0x40) + lVar30 * 0x48) =
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
          if ((TEnumAsByte<EVisibility::Private>)TVar7.Value != EVisibility::Collapsed.Value.Value)
          {
            fVar48 = fVar48 + fVar49;
          }
          dVar14 = dVar13;
          dVar16 = dVar15;
          dVar18 = dVar17;
          dVar20 = dVar19;
        }
        (local_378->field0_0x0)._s_0.X = dVar18 - dVar14;
        (local_378->field0_0x0)._s_0.Y = dVar20 - dVar16;
      }
    }
    if (local_2f8.SecondaryData !=
        (ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
         )0x0) {
      FMemory::Free((void *)local_2f8.SecondaryData);
    }
  }
  return;
}

// ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot> @ 1425b1e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>
          (EFlowDirection param_1,TPanelChildren<SBoxPanel::FSlot> *param_2,FGeometry *param_3,
          FArrangedChildren *param_4,float param_5,bool param_6,TVector2<double> *param_7)

{
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  *pFVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int *piVar3;
  undefined8 *puVar4;
  FDeprecateSlateVector2D *pFVar5;
  float fVar6;
  TEnumAsByte<EVisibility::Private> TVar7;
  longlong lVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForElementType<FArrangedWidget> FVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  TVector2<float>_u_0_s_0 this;
  FArrangedChildren *pFVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  EVisibility EVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  FVar29;
  FSlot *pFVar30;
  TVector2<float>_u_0 TVar31;
  ForElementType<FArrangedWidget> FVar32;
  ulonglong uVar33;
  uchar *puVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_428 [32];
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  undefined1 local_3d3 [3];
  undefined8 local_3d0;
  TVector2<float>_u_0_s_0 local_3c8;
  undefined8 local_3c0;
  TVector2<float>_u_0 *local_3b8;
  FArrangedChildren *local_3b0;
  FSlateLayoutTransform local_3a8;
  undefined8 local_39c;
  undefined8 uStack_394;
  undefined8 local_38c;
  uint uStack_384;
  undefined4 uStack_380;
  TVector2<double> *local_378;
  TSharedRef<SWidget,1> local_370;
  float local_360;
  undefined4 uStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined1 local_348 [32];
  float local_328 [3] [2];
  SWidget *local_310;
  FSharedReferencer<1> local_308;
  ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
  local_2f8;
  int local_f0;
  int local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  uVar35 = (param_2->Children).ArrayNum;
  uVar33 = (ulonglong)uVar35;
  local_378 = param_7;
  if (uVar35 != 0) {
    fVar45 = 0.0;
    fVar48 = 0.0;
    local_2f8.SecondaryData =
         (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
          )0x0;
    fVar44 = 0.0;
    local_ec = 0x10;
    fVar47 = 0.0;
    local_38c = 0;
    uStack_384 = uStack_384 & 0xffffff00;
    uStack_380 = 0;
    local_39c = 0;
    uStack_394 = 0;
    local_3c8 = (TVector2<float>_u_0_s_0)param_2;
    local_3b8 = (TVector2<float>_u_0 *)param_3;
    local_3b0 = param_4;
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar33);
    }
    local_f0 = 0;
    if ((uVar35 == 0x10) ||
       (UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
                  (0x20,4,uVar35,&local_2f8,0,&local_ec), 0 < (int)uVar35)) {
      do {
        FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar29 = local_2f8.SecondaryData;
        }
        if ((ulonglong)FVar29 <= &local_39c) {
          FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar29 = local_2f8.SecondaryData;
          }
          if ((&local_39c < (undefined8 *)((longlong)local_ec * 0x20 + (longlong)FVar29)) &&
             (bVar24 = FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
                               (0x420,&local_2f8,&local_ec);
        }
        lVar28 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                  )&local_2f8;
        if (local_2f8.SecondaryData !=
            (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
             )0x0) {
          FVar29 = local_2f8.SecondaryData;
        }
        puVar4 = (undefined8 *)(lVar28 * 0x20 + (longlong)FVar29);
        *puVar4 = local_39c;
        puVar4[1] = uStack_394;
        puVar4 = (undefined8 *)(lVar28 * 0x20 + 0x10 + (longlong)FVar29);
        *puVar4 = local_38c;
        puVar4[1] = CONCAT44(uStack_380,uStack_384);
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
    fVar42 = __real_7f7fffff;
    bVar24 = false;
    bVar19 = false;
    uVar35 = 0;
    bVar20 = false;
    if (0 < (param_2->Children).ArrayNum) {
      lVar28 = 0;
      lVar37 = 0;
      EVar25.Value.Value = EVisibility::Collapsed.Value.Value;
      do {
        uVar39 = 0;
        if ((int)uVar35 < *(int *)((longlong)param_2 + 0x28)) {
          uVar39 = ~uVar35 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar26 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), EVar25 = EVisibility::Collapsed, bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar8 = *(longlong *)(lVar37 + *(longlong *)((longlong)param_2 + 0x20));
        lVar9 = *(longlong *)(lVar8 + 0x10);
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar9 + 0x39) != EVar25.Value.Value) {
          bVar24 = true;
          local_360 = *(float *)(lVar8 + 0x28);
          uStack_35c = *(undefined4 *)(lVar8 + 0x2c);
          fStack_358 = *(float *)(lVar8 + 0x30);
          uStack_354 = *(undefined4 *)(lVar8 + 0x34);
          fVar44 = fVar44 + fStack_358 + local_360;
          local_3d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if ((*(byte *)(lVar9 + 0x31) & 0x20) != 0) {
            local_3d0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar9 + 0x170))->_s_0;
          }
          fVar43 = *(float *)(lVar8 + 0x4c);
          fVar49 = *(float *)(lVar8 + 0x50);
          uVar39 = 0;
          if ((int)uVar35 < local_f0) {
            uVar39 = ~uVar35 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar26 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar29 = local_2f8.SecondaryData;
          }
          *(float *)(lVar28 + 8 + (longlong)FVar29) = fVar43;
          *(float *)(lVar28 + 0xc + (longlong)FVar29) = fVar49;
          iVar27 = *(int *)(lVar8 + 0x40);
          *(int *)(lVar28 + 0x1c + (longlong)FVar29) = iVar27;
          if (fVar49 <= 0.0) {
            fVar49 = fVar42;
          }
          if (fVar43 <= 0.0) {
            fVar43 = 0.0;
          }
          if ((float)(undefined4)local_3d0 <= fVar49) {
            fVar49 = (float)(undefined4)local_3d0;
          }
          if (fVar49 <= fVar43) {
            fVar49 = fVar43;
          }
          EVar25.Value.Value = EVisibility::Collapsed.Value.Value;
          if (iVar27 == 1) {
            fVar43 = *(float *)(lVar8 + 0x44);
            fVar47 = fVar47 + fVar49;
            *(float *)(lVar28 + 0x10 + (longlong)FVar29) = fVar43;
            fVar45 = fVar45 + fVar43;
            *(float *)(lVar28 + 0x14 + (longlong)FVar29) = fVar43;
            fVar48 = fVar48 + fVar43;
            *(undefined8 *)(lVar28 + (longlong)FVar29) = 0;
            bVar19 = true;
          }
          else {
            if (iVar27 == 2) {
              fVar43 = *(float *)(lVar8 + 0x44);
              fVar47 = fVar47 + fVar49;
              if (fVar43 <= 0.0) {
                fVar43 = 0.0;
              }
              bVar20 = true;
              *(float *)(lVar28 + 0x10 + (longlong)FVar29) = fVar43;
              fVar45 = fVar45 + fVar43;
              fVar43 = *(float *)(lVar8 + 0x48);
              if (fVar43 <= 0.0) {
                fVar43 = 0.0;
              }
              *(float *)(lVar28 + 0x14 + (longlong)FVar29) = fVar43;
              fVar48 = fVar48 + fVar43;
            }
            else {
              fVar44 = fVar44 + fVar49;
              *(undefined8 *)(lVar28 + 0x10 + (longlong)FVar29) = 0;
            }
            *(float *)(lVar28 + 4 + (longlong)FVar29) = fVar49;
            *(float *)(lVar28 + (longlong)FVar29) = fVar49;
          }
        }
        iVar27 = local_f0;
        uVar35 = uVar35 + 1;
        lVar37 = lVar37 + 8;
        lVar28 = lVar28 + 0x20;
        param_2 = (TPanelChildren<SBoxPanel::FSlot> *)local_3c8;
      } while ((int)uVar35 < *(int *)((longlong)local_3c8 + 0x28));
      if (bVar24) {
        fVar43 = fVar47;
        if (param_6) {
          fVar43 = 0.0;
        }
        local_3d0 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&local_3b8->_s_0;
        fVar49 = (float)(undefined4)local_3d0 - fVar44;
        if ((float)(undefined4)local_3d0 - fVar44 <= fVar43) {
          fVar49 = fVar43;
        }
        if ((bVar19) && (0.0 < fVar45)) {
          lVar28 = (longlong)local_f0;
          fVar44 = 0.0;
          FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar29 = local_2f8.SecondaryData;
          }
          puVar34 = (uchar *)((longlong)FVar29 + 0x10);
          while( true ) {
            if (local_f0 != iVar27) {
              local_3d6 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3d6);
            }
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar34 + -0x10) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar28 * 0x20 + (longlong)FVar29)) break;
            if (*(float *)(puVar34 + 0xc) == 1.4013e-45) {
              fVar43 = *(float *)(puVar34 + -8);
              fVar38 = (fVar49 * *(float *)puVar34) / fVar45;
              fVar41 = *(float *)(puVar34 + -4);
              if (*(float *)(puVar34 + -4) <= 0.0) {
                fVar41 = fVar42;
              }
              if (fVar41 <= fVar38) {
                fVar38 = fVar41;
              }
              if (fVar43 <= 0.0) {
                fVar43 = 0.0;
              }
              if (fVar38 <= fVar43) {
                fVar38 = fVar43;
              }
              *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar34 + -0x10))->InlineData = fVar38;
              fVar44 = fVar44 + fVar38;
            }
            puVar34 = puVar34 + 0x20;
          }
          fVar49 = fVar49 - fVar44;
        }
        iVar27 = local_f0;
        uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar44 = __real_322bcc77;
        bVar24 = fVar49 <= fVar47;
        if (!bVar24) {
          fVar48 = fVar45;
        }
        if ((bVar20) && (0.0 < fVar48)) {
          lVar28 = (longlong)local_f0;
          iVar36 = 0;
          FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar29 = local_2f8.SecondaryData;
          }
          puVar34 = (uchar *)((longlong)FVar29 + 0x18);
          while( true ) {
            if (local_f0 != iVar27) {
              local_3d5 = 0;
              `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_3d5);
            }
            fVar48 = __real_38d1b717;
            if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(puVar34 + -0x18) ==
                (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                 *)(lVar28 * 0x20 + (longlong)FVar29)) break;
            if (*(int *)(puVar34 + 4) == 2) {
              fVar49 = fVar49 - *(float *)((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                                            *)(puVar34 + -0x18))->InlineData;
              iVar36 = iVar36 + 1;
              if (bVar24) {
                uVar39 = *(uint *)(puVar34 + -4);
              }
              else {
                uVar39 = *(uint *)(puVar34 + -8);
              }
              *puVar34 = (float)(uVar39 & uVar35) <= fVar44 | *puVar34;
            }
            puVar34 = puVar34 + 0x20;
          }
          iVar27 = 5;
          if (iVar36 < 5) {
            iVar27 = iVar36;
          }
          iVar36 = 0;
          if (0 < iVar27) {
            do {
              iVar22 = local_f0;
              if ((float)((uint)fVar49 & uVar35) <= fVar44) break;
              lVar28 = (longlong)local_f0;
              fVar45 = 0.0;
              fVar47 = 0.0;
              FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar29 = local_2f8.SecondaryData;
              }
              puVar34 = (uchar *)((longlong)FVar29 + 0x18);
              while( true ) {
                if (local_f0 != iVar22) {
                  local_3d4 = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_3d4);
                }
                iVar23 = local_f0;
                if ((ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(puVar34 + -0x18) ==
                    (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                     *)(lVar28 * 0x20 + (longlong)FVar29)) break;
                if ((*(int *)(puVar34 + 4) == 2) && (*puVar34 == '\0')) {
                  fVar45 = fVar45 + *(float *)(puVar34 + -8);
                  fVar47 = fVar47 + *(float *)(puVar34 + -0x14) * *(float *)(puVar34 + -4);
                }
                puVar34 = puVar34 + 0x20;
              }
              fVar42 = fVar47;
              if (!bVar24) {
                fVar42 = fVar45;
              }
              if (fVar42 < fVar48) break;
              lVar28 = (longlong)local_f0;
              fVar42 = 0.0;
              FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                        )&local_2f8;
              if (local_2f8.SecondaryData !=
                  (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                   )0x0) {
                FVar29 = local_2f8.SecondaryData;
              }
              puVar34 = (uchar *)((longlong)FVar29 + 0x10);
              while( true ) {
                if (local_f0 != iVar23) {
                  local_3d3[0] = 0;
                  `TCheckedPointerIterator<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_3d3);
                }
                pFVar1 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                          *)(puVar34 + -0x10);
                if (pFVar1 == (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                               *)(lVar28 * 0x20 + (longlong)FVar29)) break;
                if ((*(float *)(puVar34 + 0xc) == 2.8026e-45) && (puVar34[8] == '\0')) {
                  if (bVar24) {
                    fVar43 = (*(float *)(puVar34 + -0xc) * *(float *)(puVar34 + 4)) / fVar47;
                  }
                  else {
                    fVar43 = *(float *)puVar34 / fVar45;
                  }
                  fVar43 = fVar43 * fVar49;
                  if ((float)((uint)fVar43 & uVar35) <= fVar44) {
                    puVar34[8] = '\x01';
                    puVar34 = puVar34 + 0x20;
                  }
                  else {
                    fVar38 = *(float *)pFVar1->InlineData;
                    fVar41 = *(float *)(puVar34 + -8);
                    fVar40 = fVar43 + fVar38;
                    fVar6 = *(float *)(puVar34 + -4);
                    if (fVar40 <= fVar41) {
                      puVar34[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar41;
                      puVar34 = puVar34 + 0x20;
                      fVar42 = fVar42 + (fVar41 - fVar38);
                    }
                    else {
                      if ((fVar6 <= 0.0) || (fVar40 < fVar6)) {
                        *(float *)pFVar1->InlineData = fVar40;
                        fVar42 = fVar42 + fVar43;
                        goto LAB_1425b2667;
                      }
                      puVar34[8] = '\x01';
                      *(float *)pFVar1->InlineData = fVar6;
                      puVar34 = puVar34 + 0x20;
                      fVar42 = fVar42 + (fVar6 - fVar38);
                    }
                  }
                }
                else {
LAB_1425b2667:
                  puVar34 = puVar34 + 0x20;
                }
              }
              iVar36 = iVar36 + 1;
              fVar49 = fVar49 - fVar42;
            } while (iVar36 < iVar27);
          }
        }
        pFVar21 = local_3b0;
        this = local_3c8;
        fVar48 = 0.0;
        iVar27 = (local_3b0->Array).ArrayNum;
        pTVar2 = &local_3b0->Array;
        uVar35 = *(int *)((longlong)local_3c8 + 0x28) + iVar27;
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        piVar3 = &(local_3b0->Array).ArrayMax;
        if (*piVar3 < (int)uVar35) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,uVar35,&pTVar2->AllocatorInstance,iVar27,piVar3);
        }
        fVar44 = __real_3f000000;
        dVar15 = __real_47efffffe0000000;
        dVar16 = __real_47efffffe0000000;
        dVar18 = __real_3810000000000000;
        dVar46 = __real_3810000000000000;
        if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
          uVar35 = 0;
        }
        else {
          uVar35 = *(int *)((longlong)this + 0x28) - 1;
        }
        while ((-1 < (int)uVar35 && ((int)uVar35 < *(int *)((longlong)this + 0x28)))) {
          pFVar30 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                              ((TPanelChildren<SBoxPanel::FSlot> *)this,uVar35);
          TVar7.Value = *(byte *)(*(longlong *)&pFVar30->field_0x10 + 0x39);
          uVar39 = 0;
          if ((int)uVar35 < local_f0) {
            uVar39 = ~uVar35 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar24 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_3a8.Translation.field0_0x0._s_0.Y = (float)*(undefined4 *)&pFVar30->field_0x2c;
          fVar45 = *(float *)&pFVar30->field_0x34;
          FVar29 = (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
                    )&local_2f8;
          if (local_2f8.SecondaryData !=
              (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
               )0x0) {
            FVar29 = local_2f8.SecondaryData;
          }
          fVar47 = *(float *)((longlong)(int)uVar35 * 0x20 + (longlong)FVar29);
          fVar42 = *(float *)&pFVar30->field_0x30;
          fVar43 = *(float *)&pFVar30->field_0x28;
          if (param_1 == RightToLeft) {
            fVar42 = *(float *)&pFVar30->field_0x28;
            fVar43 = *(float *)&pFVar30->field_0x30;
          }
          iVar27 = *(int *)&pFVar30->field_0x38;
          local_3c8 = local_3b8->_s_0;
          fVar49 = fVar43 + fVar42 + fVar47;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_1425b2816:
            if (iVar27 != 0) goto LAB_1425b281a;
            local_370.Object = *(SWidget **)&pFVar30->field_0x10;
LAB_1425b2884:
            local_3c0._0_4_ = fVar47;
            if (fVar47 <= 0.0) {
              local_3c0._0_4_ = 0.0;
            }
          }
          else {
            if (iVar27 == 1) {
              iVar27 = 3;
            }
            else {
              if (iVar27 != 3) goto LAB_1425b2816;
              iVar27 = 1;
            }
LAB_1425b281a:
            local_370.Object = *(SWidget **)&pFVar30->field_0x10;
            TVar31 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            if ((local_370.Object)->bDesiredSizeSet != '\0') {
              TVar31._s_0 = *(TVector2<float>_u_0 *)
                             &((local_370.Object)->DesiredSize).field0_0x0._s_0;
            }
            local_3c0._0_4_ = TVar31._s_0.X;
            if (fVar47 <= (float)local_3c0) {
              local_3c0._0_4_ = fVar47;
            }
            if ((float)local_3c0 <= 0.0) {
              local_3c0._0_4_ = 0.0;
            }
            if (iVar27 != 1) {
              if (iVar27 == 2) {
                fVar43 = ((fVar49 - (float)local_3c0) * fVar44 + fVar43) - fVar42;
              }
              else {
                if (iVar27 != 3) goto LAB_1425b2884;
                fVar43 = (fVar49 - (float)local_3c0) - fVar42;
              }
            }
          }
          iVar27 = *(int *)&pFVar30->field_0x3c;
          if (iVar27 == 0) {
LAB_1425b2913:
            local_3c0._4_4_ = local_3c8.Y - (local_3a8.Translation.field0_0x0._s_0.Y + fVar45);
            if (local_3c0._4_4_ <= 0.0) {
              local_3c0._4_4_ = 0.0;
            }
          }
          else {
            TVar31 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            if ((local_370.Object)->bDesiredSizeSet != '\0') {
              TVar31 = (TVector2<float>_u_0)
                       *(TVector2<float>_u_0 *)&((local_370.Object)->DesiredSize).field0_0x0._s_0;
            }
            fVar47 = local_3c8.Y - (local_3a8.Translation.field0_0x0._s_0.Y + fVar45);
            local_3c0._4_4_ = TVar31._s_0.Y;
            if (fVar47 <= local_3c0._4_4_) {
              local_3c0._4_4_ = fVar47;
            }
            if (local_3c0._4_4_ <= 0.0) {
              local_3c0._4_4_ = 0.0;
            }
            if (iVar27 != 1) {
              if (iVar27 == 2) {
                local_3a8.Translation.field0_0x0._s_0.Y =
                     ((local_3c8.Y - local_3c0._4_4_) * fVar44 +
                     local_3a8.Translation.field0_0x0._s_0.Y) - fVar45;
              }
              else {
                if (iVar27 != 3) goto LAB_1425b2913;
                local_3a8.Translation.field0_0x0._s_0.Y = (local_3c8.Y - local_3c0._4_4_) - fVar45;
              }
            }
          }
          pTVar10 = *(TReferenceControllerBase<1> **)&pFVar30->field_0x18;
          local_3d0._4_4_ = local_3c0._4_4_;
          local_3d0._0_4_ = (float)local_3c0;
          local_3a8.Translation.field0_0x0._s_0.X = fVar48 + fVar43 + param_5;
          dVar13 = (double)local_3a8.Translation.field0_0x0._s_0.Y;
          if (dVar15 <= (double)local_3a8.Translation.field0_0x0._s_0.Y) {
            dVar13 = dVar15;
          }
          dVar14 = (double)local_3a8.Translation.field0_0x0._s_0.X;
          if (dVar16 <= (double)local_3a8.Translation.field0_0x0._s_0.X) {
            dVar14 = dVar16;
          }
          dVar17 = (double)(local_3a8.Translation.field0_0x0._s_0.X + (float)local_3c0);
          if ((double)(local_3a8.Translation.field0_0x0._s_0.X + (float)local_3c0) <= dVar46) {
            dVar17 = dVar46;
          }
          dVar46 = (double)(local_3a8.Translation.field0_0x0._s_0.Y + local_3c0._4_4_);
          if ((double)(local_3a8.Translation.field0_0x0._s_0.Y + local_3c0._4_4_) <= dVar18) {
            dVar46 = dVar18;
          }
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3c0 = local_3d0;
          local_3a8.Scale = 1.0;
          local_370.SharedReferenceCount.ReferenceController = pTVar10;
          FGeometry::MakeChild
                    ((FGeometry *)&local_3b8->_s_0,(FArrangedWidget *)local_348,&local_370,
                     (FDeprecateVector2DParameter *)&local_3c0,&local_3a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          if (((local_3b0->VisibilityFilter).Value.Value & TVar7.Value) != 0) {
            FVar11 = (pFVar21->Array).AllocatorInstance.SecondaryData;
            FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
              FVar32 = FVar11;
            }
            if ((ulonglong)FVar32 <= local_348) {
              FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
              if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
                FVar32 = FVar11;
              }
              if ((local_348 < (undefined1 *)((longlong)FVar32 + (longlong)*piVar3 * 0x48)) &&
                 (bVar24 = FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar24)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            iVar27 = (pFVar21->Array).ArrayNum;
            if (iVar27 == *piVar3) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                 (0x848,&pTVar2->AllocatorInstance,piVar3);
            }
            (pFVar21->Array).ArrayNum = iVar27 + 1;
            FVar11 = (pFVar21->Array).AllocatorInstance.SecondaryData;
            lVar28 = (longlong)iVar27;
            FVar32 = (ForElementType<FArrangedWidget>)pTVar2;
            if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
              FVar32 = FVar11;
            }
            pFVar5 = (FDeprecateSlateVector2D *)((longlong)FVar32 + lVar28 * 0x48);
            *pFVar5 = (FDeprecateSlateVector2D)local_348._0_8_;
            pFVar5[1] = (FDeprecateSlateVector2D)local_348._8_8_;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x10) + lVar28 * 0x48) = local_348._16_8_;
            *(undefined8 *)((uchar *)((longlong)FVar32 + 0x10) + lVar28 * 0x48 + 8) =
                 local_348._24_8_;
            *(float (*) [2])((uchar *)((longlong)FVar32 + 0x20) + lVar28 * 0x48) = local_328[0];
            *(float (*) [2])((uchar *)((longlong)FVar32 + 0x20) + lVar28 * 0x48 + 8) = local_328[1];
            *(float (*) [2])((uchar *)((longlong)FVar32 + 0x30) + lVar28 * 0x48) = local_328[2];
            *(SWidget **)((uchar *)((longlong)FVar32 + 0x38) + lVar28 * 0x48) = local_310;
            *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar32 + 0x40) + lVar28 * 0x48) =
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
          if ((TEnumAsByte<EVisibility::Private>)TVar7.Value != EVisibility::Collapsed.Value.Value)
          {
            fVar48 = fVar48 + fVar49;
          }
          dVar15 = dVar13;
          dVar16 = dVar14;
          dVar18 = dVar46;
          dVar46 = dVar17;
          if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
            uVar35 = uVar35 + 1;
          }
          else {
            uVar35 = uVar35 - 1;
          }
        }
        (local_378->field0_0x0)._s_0.X = dVar46 - dVar16;
        (local_378->field0_0x0)._s_0.Y = dVar18 - dVar15;
      }
    }
    if (local_2f8.SecondaryData !=
        (ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
         )0x0) {
      FMemory::Free((void *)local_2f8.SecondaryData);
    }
  }
  return;
}

// ArrangeSingleChild<SCompoundWidget::FCompoundWidgetOneChildSlot> @ 1425b2c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
ArrangeSingleChild<SCompoundWidget::FCompoundWidgetOneChildSlot>
          (EFlowDirection param_1,FGeometry *param_2,FArrangedChildren *param_3,
          FCompoundWidgetOneChildSlot *param_4,TVector2<double> *param_5)

{
  EVisibility EVar1;
  longlong lVar2;
  float fVar3;
  TVector2<float>_u_0 TVar4;
  FArrangedWidget *pFVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_f8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  FSlateLayoutTransform local_b8;
  FArrangedWidget local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar2 = *(longlong *)&param_4->field_0x30;
  EVar1.Value.Value =
       (TEnumAsByte<EVisibility::Private>)
       ((TEnumAsByte<EVisibility::Private> *)(lVar2 + 0x39))->Value;
  if (((param_3->VisibilityFilter).Value.Value & (byte)EVar1.Value.Value) == 0) {
    return;
  }
  local_b8.Translation.field0_0x0._s_0.Y = (float)*(undefined4 *)&param_4->field_0x44;
  fVar3 = *(float *)&param_4->field_0x4c;
  fVar9 = *(float *)&param_4->field_0x48;
  local_b8.Translation.field0_0x0._s_0.X = *(float *)&param_4->field_0x40;
  if (param_1 == RightToLeft) {
    fVar9 = *(float *)&param_4->field_0x40;
    local_b8.Translation.field0_0x0._s_0.X = *(float *)&param_4->field_0x48;
  }
  iVar6 = *(int *)&param_4->field_0x50;
  fVar7 = (float)(param_5->field0_0x0)._s_0.X;
  local_c8._0_4_ = SUB84(param_2->Size,0);
  if ((param_1 == LeftToRight) || (param_1 != RightToLeft)) {
LAB_1425b2cd0:
    if (iVar6 != 0) goto LAB_1425b2cd9;
LAB_1425b2d87:
    local_c0._0_4_ = ((float)local_c8 - (fVar9 + local_b8.Translation.field0_0x0._s_0.X)) * fVar7;
    if ((float)local_c0 <= 0.0) {
      local_c0._0_4_ = 0.0;
    }
  }
  else {
    if (iVar6 == 1) {
      iVar6 = 3;
    }
    else {
      if (iVar6 != 3) goto LAB_1425b2cd0;
      iVar6 = 1;
    }
LAB_1425b2cd9:
    TVar4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
      TVar4._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar2 + 0x170))->_s_0;
    }
    fVar8 = (float)local_c8 - (fVar9 + local_b8.Translation.field0_0x0._s_0.X);
    local_c0._0_4_ = TVar4._s_0.X;
    local_c0._0_4_ = fVar7 * (float)local_c0;
    if (fVar8 <= (float)local_c0) {
      local_c0._0_4_ = fVar8;
    }
    if ((float)local_c0 <= 0.0) {
      local_c0._0_4_ = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        local_b8.Translation.field0_0x0._s_0.X =
             (((float)local_c8 - (float)local_c0) * __real_3f000000 +
             local_b8.Translation.field0_0x0._s_0.X) - fVar9;
      }
      else {
        if (iVar6 != 3) goto LAB_1425b2d87;
        local_b8.Translation.field0_0x0._s_0.X = ((float)local_c8 - (float)local_c0) - fVar9;
      }
    }
  }
  iVar6 = *(int *)&param_4->field_0x54;
  fVar9 = (float)(param_5->field0_0x0)._s_0.Y;
  local_c8._4_4_ = SUB84(param_2->Size,4);
  if (iVar6 != 0) {
    TVar4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
      TVar4 = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar2 + 0x170))->_s_0;
    }
    fVar7 = local_c8._4_4_ - (local_b8.Translation.field0_0x0._s_0.Y + fVar3);
    local_c0._4_4_ = TVar4._s_0.Y;
    local_c0._4_4_ = fVar9 * local_c0._4_4_;
    if (fVar7 <= local_c0._4_4_) {
      local_c0._4_4_ = fVar7;
    }
    if (local_c0._4_4_ <= 0.0) {
      local_c0._4_4_ = 0.0;
    }
    if (iVar6 == 1) goto LAB_1425b2e37;
    if (iVar6 == 2) {
      local_b8.Translation.field0_0x0._s_0.Y =
           ((local_c8._4_4_ - local_c0._4_4_) * __real_3f000000 +
           local_b8.Translation.field0_0x0._s_0.Y) - fVar3;
      goto LAB_1425b2e37;
    }
    if (iVar6 == 3) {
      local_b8.Translation.field0_0x0._s_0.Y = (local_c8._4_4_ - local_c0._4_4_) - fVar3;
      goto LAB_1425b2e37;
    }
  }
  local_c0._4_4_ = (local_c8._4_4_ - (local_b8.Translation.field0_0x0._s_0.Y + fVar3)) * fVar9;
  if (local_c0._4_4_ <= 0.0) {
    local_c0._4_4_ = 0.0;
  }
LAB_1425b2e37:
  local_c8._4_4_ = local_c0._4_4_;
  local_c8._0_4_ = (float)local_c0;
  local_c0 = local_c8;
  local_b8.Scale = 1.0;
  pFVar5 = FGeometry::MakeChild
                     (param_2,&local_a8,(TSharedRef<SWidget,1> *)&param_4->field_0x30,
                      (FDeprecateVector2DParameter *)&local_c0,&local_b8);
  FArrangedChildren::AddWidget(param_3,EVar1,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// CompareItems<TSharedPtr<SWidget,1>,int> @ 1425b2ee0

bool __cdecl
CompareItems<TSharedPtr<SWidget,1>,int>
          (TSharedPtr<SWidget,1> *param_1,TSharedPtr<SWidget,1> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(SWidget **)(lVar1 + (longlong)param_2) != param_2->Object) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FSlateAttributeDescriptor::FAttribute,FSlateAttributeDescriptor::FAttribute,int> @ 1425b2f10

void __cdecl
ConstructItems<FSlateAttributeDescriptor::FAttribute,FSlateAttributeDescriptor::FAttribute,int>
          (void *param_1,FAttribute *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar1 = (FName *)((longlong)param_1 + 0xc);
    pFVar2 = &param_2->Prerequisite;
    do {
      *(undefined8 *)&pFVar1[-2].Number =
           *(undefined8 *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)pFVar1);
      pFVar1[-1].Number = pFVar2[-1].Number;
      *pFVar1 = *pFVar2;
      pFVar1[1] = pFVar2[1];
      pFVar1[2].ComparisonIndex.Value = pFVar2[2].ComparisonIndex.Value;
      *(char *)&pFVar1[2].Number = (char)pFVar2[2].Number;
      FSlateAttributeDescriptor::FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute
                ((FInvalidateWidgetReasonAttribute *)&pFVar1[3].Number,
                 (FInvalidateWidgetReasonAttribute *)&pFVar2[3].Number);
      TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
      TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                ((TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &pFVar1[6].Number,
                 (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &pFVar2[6].Number);
      *(char *)&pFVar1[8].Number = (char)pFVar2[8].Number;
      *(undefined1 *)((longlong)&pFVar1[8].Number + 1) =
           *(undefined1 *)((longlong)&pFVar2[8].Number + 1);
      param_3 = param_3 + -1;
      pFVar1 = pFVar1 + 0xb;
      pFVar2 = pFVar2 + 0xb;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<ISlateMetaData,1>,TSharedRef<ISlateMetaData,1>,int> @ 1425b2fc0

void __cdecl
ConstructItems<TSharedRef<ISlateMetaData,1>,TSharedRef<ISlateMetaData,1>,int>
          (void *param_1,TSharedRef<ISlateMetaData,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ISlateMetaData **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int> @ 1425b3260

void __cdecl
DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
          (TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SlateAttributePrivate::
    TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::
    ~TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              ((TSlateManagedAttribute<FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)&param_1->field_0x18);
    SlateAttributePrivate::
    TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::
    ~TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              ((TSlateManagedAttribute<FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int> @ 1425b32a0

void __cdecl
DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int>
          (TTuple<FString,FSlateInvalidationWidgetSortOrder,bool> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSlateAttributeMetaData::FGetterItem,int> @ 1425b32e0

void __cdecl
DestructItems<FSlateAttributeMetaData::FGetterItem,int>(FGetterItem *param_1,int param_2)

{
  ISlateAttributeGetter *pIVar1;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Getter;
    do {
      pIVar1 = pTVar2->Ptr;
      if (pIVar1 != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int> @ 1425b3330

void __cdecl
DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

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
      this = this + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPopupLayerSlot::FSlotArguments,int> @ 1425b33a0

void __cdecl DestructItems<FPopupLayerSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ClampBuffer).Getter;
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
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[-4].field_0x10);
      if (*(void **)(this + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -3));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[-4].field_0x10);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[-5].field_0x8);
      if (*(void **)&this[-5].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-5].field_0x10);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[-5].field_0x8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -6);
      if (*(void **)&this[-6].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-6].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -6));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this[-8].field_0x10);
      if (*(void **)(this + -7) != (void *)0x0) {
        FMemory::Free(*(void **)(this + -7));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&this[-8].field_0x10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-9].field_0x8);
      puVar1 = *(undefined8 **)&this[-10].field_0x10;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[10].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<SVerticalBox::FSlot::FSlotArguments,int> @ 1425b34e0

void __cdecl
DestructItems<SVerticalBox::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x30;
    do {
      TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                ((FSlotArgumentsMixin *)&this[1].field_0x10);
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
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[9].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateAccessibleMessageHandler::FWidgetAndParent,int> @ 1425b3560

void __cdecl
DestructItems<FSlateAccessibleMessageHandler::FWidgetAndParent,int>
          (FWidgetAndParent *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Widget).WeakReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar4[2].ReferenceController);
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
      pFVar4 = pFVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FActiveTimerHandle,1>,int> @ 1425b35c0

void __cdecl
DestructItems<TSharedRef<FActiveTimerHandle,1>,int>
          (TSharedRef<FActiveTimerHandle,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_>,int> @ 1425b3600

void __cdecl
DestructItems<TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_>,int>
          (TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_> *param_1,int param_2)

{
  FPopupLayerSlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FPopupLayerSlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int> @ 1425b3640

void __cdecl
DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
          (TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *param_1,
          int param_2)

{
  FOverlaySlot *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FOverlaySlot *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int> @ 1425b3680

void __cdecl
DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
          (TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *param_1,int param_2)

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

// DestructItems<TWeakPtr<SWidget_const_,1>,int> @ 1425b36c0

void __cdecl
DestructItems<TWeakPtr<SWidget_const_,1>,int>(TWeakPtr<SWidget_const_,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<FSlateAccessibleWidget,1>,int> @ 1425b3710

void __cdecl
DestructItems<TWeakPtr<FSlateAccessibleWidget,1>,int>
          (TWeakPtr<FSlateAccessibleWidget,1> *param_1,int param_2)

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

// DestructItems<FSlateAccessibleMessageHandler::FSlateAccessibleTask,int> @ 1425b3760

void __cdecl
DestructItems<FSlateAccessibleMessageHandler::FSlateAccessibleTask,int>
          (FSlateAccessibleTask *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Task).field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachWidget<`SWidget::Prepass_ChildLoop'::__l2::<lambda_1>_&> @ 1425b5000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::ForEachWidget<_SWidget::Prepass_ChildLoop_::__l2::<lambda_1>_&>
          (FChildren *this,<lambda_1> *param_1)

{
  bool bVar1;
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  SWidget *pSVar3;
  bool bVar4;
  SWidget *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  <lambda_1> *local_res8;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  SWidget *local_48;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar5 = (**(code **)this->_padding_)(this);
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,&local_58,iVar9);
      this_00 = local_48;
      if ((local_48->bHasRegisteredSlateAttribute == '\x01' &&
           local_48->bEnabledAttributesUpdate == '\x01') &&
         (GSlateIsOnFastProcessInvalidation == false)) {
        bVar4 = true;
        FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes
                  (local_48,AllowInvalidationIfConstructed);
      }
      else {
        bVar4 = false;
      }
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute ==
          EVisibility::Collapsed.Value.Value) {
        this_00->bNeedsPrepass = '\x01';
        pSVar3 = param_1->Self;
        if (pSVar3->bHasRelativeLayoutScale == 0) {
          fVar11 = param_1->InLayoutScaleMultiplier;
        }
        else {
          fVar10 = param_1->InLayoutScaleMultiplier;
          fVar11 = (float)(**(code **)(pSVar3->_padding_ + 0x178))
                                    (pSVar3,*param_1->ChildIndex,fVar10);
          fVar11 = fVar11 * fVar10;
        }
        this_00->bPrepassLayoutScaleMultiplierSet = '\x01';
        this_00->PrepassLayoutScaleMultiplierValue = fVar11;
      }
      else {
        if (bVar4) {
          TVar2 = param_1->Self->VisibilityAttribute;
          puVar8 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x188))(this_00);
          iVar6 = (**(code **)*puVar8)(puVar8);
          FSlateAttributeMetaData::UpdateExceptVisibilityAttributes
                    (this_00,AllowInvalidationIfConstructed);
          if (TVar2 != param_1->Self->VisibilityAttribute) {
            local_res8 = param_1;
            ``SWidget::Prepass_ChildLoop'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>::
            operator()(&local_res8);
          }
          puVar8 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x188))(this_00);
          iVar7 = (**(code **)*puVar8)(puVar8);
          if (iVar6 != iVar7) {
            local_res8 = param_1;
            ``SWidget::Prepass_ChildLoop'::__l2::<lambda_1>::operator()'::__l11::<lambda_2>::
            operator()(&local_res8);
          }
        }
        pSVar3 = param_1->Self;
        if (pSVar3->bHasRelativeLayoutScale == 0) {
          SWidget::Prepass_Internal(this_00,param_1->InLayoutScaleMultiplier);
        }
        else {
          fVar11 = param_1->InLayoutScaleMultiplier;
          fVar10 = (float)(**(code **)(pSVar3->_padding_ + 0x178))
                                    (pSVar3,*param_1->ChildIndex,fVar11);
          SWidget::Prepass_Internal(this_00,fVar10 * fVar11);
        }
      }
      *param_1->ChildIndex = *param_1->ChildIndex + 1;
      if (local_58 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  this->Debug_bIsIteratingChildren = bVar1;
  return;
}

// ForEachWidget<`UE::Slate::Test::Private::Recursive<`FSlateChildrenForEachTest::RunTest'::__l5::<lambda_2>_>'::__l2::<lambda_1>_> @ 1425b5210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::
ForEachWidget<_UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l5::<lambda_2>_>_::__l2::<lambda_1>_>
          (FChildren *this,<lambda_1> *param_1)

{
  bool bVar1;
  int *piVar2;
  <lambda_2> *p<Var3;
  int iVar4;
  FChildren *this_00;
  int iVar5;
  <lambda_1> local_res8;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  longlong *local_28;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar4 = (**(code **)this->_padding_)(this);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,&local_38,iVar5);
      piVar2 = param_1->InPred->Count;
      *piVar2 = *piVar2 + 1;
      p<Var3 = param_1->InPred;
      this_00 = (FChildren *)(**(code **)(*local_28 + 0x188))();
      local_res8.InPred = p<Var3;
      ForEachWidget<_UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l5::<lambda_2>_>_::__l2::<lambda_1>_>
                (this_00,&local_res8);
      if (local_38 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  this->Debug_bIsIteratingChildren = bVar1;
  return;
}

// ForEachWidget<`UE::Slate::Test::Private::Recursive<`FSlateChildrenForEachTest::RunTest'::__l8::<lambda_4>_>'::__l2::<lambda_1>_> @ 1425b52e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::
ForEachWidget<_UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l8::<lambda_4>_>_::__l2::<lambda_1>_>
          (FChildren *this,<lambda_1> *param_1)

{
  bool bVar1;
  int *piVar2;
  <lambda_4> *p<Var3;
  int iVar4;
  FChildren *this_00;
  int iVar5;
  <lambda_1> local_res8;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  longlong *local_28;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar4 = (**(code **)this->_padding_)(this);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,&local_38,iVar5);
      piVar2 = param_1->InPred->Count;
      *piVar2 = *piVar2 + 1;
      p<Var3 = param_1->InPred;
      this_00 = (FChildren *)(**(code **)(*local_28 + 0x188))();
      local_res8.InPred = p<Var3;
      ForEachWidget<_UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l8::<lambda_4>_>_::__l2::<lambda_1>_>
                (this_00,&local_res8);
      if (local_38 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  this->Debug_bIsIteratingChildren = bVar1;
  return;
}

// ForEachWidget<`SWidget::Paint'::__l43::<lambda_2>_> @ 1425b53b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChildren::ForEachWidget<_SWidget::Paint_::__l43::<lambda_2>_>(FChildren *this,<lambda_2> *param_1)

{
  bool bVar1;
  ForElementType<TWeakPtr<SWidget_const_,1>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TSharedRef<SWidget_const_,1> *pTVar7;
  ForElementType<TWeakPtr<SWidget_const_,1>_> FVar8;
  ForElementType<TWeakPtr<SWidget_const_,1>_> FVar9;
  int iVar10;
  SWidget *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<SWidget_const_,1> local_48;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  longlong local_28;
  
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar1 = this->Debug_bIsIteratingChildren;
  this->Debug_bIsIteratingChildren = true;
  iVar5 = (**(code **)this->_padding_)(this);
  iVar10 = 0;
  if (0 < iVar5) {
    do {
      (**(code **)(this->_padding_ + 0x38))(this,&local_38,iVar10);
      if ((*(byte *)(local_28 + 0x39) & 0x19) != 0) {
        FVar9 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)param_1->DebugChildWidgetsToPaint;
        pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)(local_28 + 8),&local_48);
        local_58 = pTVar7->Object;
        local_50 = (pTVar7->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->WeakReferenceCount = (atomic<int>)((int)local_50->WeakReferenceCount + 1);
          UNLOCK();
        }
        FVar2 = *(ForElementType<TWeakPtr<SWidget_const_,1>_> *)((longlong)FVar9 + 0x100);
        FVar8 = FVar9;
        if (FVar2 != (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
          FVar8 = FVar2;
        }
        if ((ulonglong)FVar8 <= &local_58) {
          FVar8 = FVar9;
          if (FVar2 != (ForElementType<TWeakPtr<SWidget_const_,1>_>)0x0) {
            FVar8 = FVar2;
          }
          if ((&local_58 <
               (SWidget **)((longlong)*(int *)((longlong)FVar9 + 0x10c) * 0x10 + (longlong)FVar8))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = *(int *)((longlong)FVar9 + 0x108);
        if (iVar6 == *(int *)((longlong)FVar9 + 0x10c)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<SWidget_const_,1>_>_>
                            (0x810,(ForElementType<TWeakPtr<SWidget_const_,1>_> *)FVar9,
                             (int *)((longlong)FVar9 + 0x10c));
        }
        *(int *)((longlong)FVar9 + 0x108) = iVar6 + 1;
        if (*(ForElementType<TWeakPtr<SWidget_const_,1>_> **)((longlong)FVar9 + 0x100) !=
            (ForElementType<TWeakPtr<SWidget_const_,1>_> *)0x0) {
          FVar9 = (ForElementType<TWeakPtr<SWidget_const_,1>_>)
                  *(ForElementType<TWeakPtr<SWidget_const_,1>_> **)((longlong)FVar9 + 0x100);
        }
        *(SWidget **)
         (((ForElementType<TWeakPtr<SWidget_const_,1>_> *)FVar9)->InlineData +
         (longlong)iVar6 * 0x10) = local_58;
        *(TReferenceControllerBase<1> **)
         (((ForElementType<TWeakPtr<SWidget_const_,1>_> *)FVar9)->InlineData +
         (longlong)iVar6 * 0x10 + 8) = local_50;
        local_50 = (TReferenceControllerBase<1> *)0x0;
        local_58 = (SWidget *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      if (local_38 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar5);
  }
  this->Debug_bIsIteratingChildren = bVar1;
  return;
}

// GetTypeHash<SWidget_const_,1> @ 1425b6630

uint __cdecl GetTypeHash<SWidget_const_,1>(TSharedRef<SWidget_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l67::<lambda_5>_>_> @ 1425b6660

void __cdecl
AlgoImpl::
HeapSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l67::<lambda_5>_>_>
          (FAttribute *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_67_::<lambda_5>_>
          param_4)

{
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FInvalidateWidgetReasonAttribute *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FAttribute *pFVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined7 uVar14;
  EInvalidateWidgetReason EVar15;
  undefined3 uVar16;
  int iVar17;
  undefined6 uVar18;
  uint uVar19;
  FNameEntryId FVar20;
  uchar uVar21;
  undefined7 uVar22;
  EInvalidateWidgetReason EVar23;
  undefined3 uVar24;
  int iVar25;
  ESlateAttributeType EVar26;
  bool bVar27;
  undefined6 uVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  FAttribute *pFVar35;
  FAttribute *pFVar36;
  int iVar37;
  
  if (param_2 < 0) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar29) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar29) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar30 = (param_2 + -2) / 2;
  iVar31 = iVar30 * 2 + 1;
  iVar37 = iVar31;
  iVar32 = iVar30;
  do {
    while (param_2 <= iVar31) {
LAB_1425b67d7:
      if (iVar32 == 0) {
        iVar31 = param_2 + -1;
        lVar34 = (longlong)iVar31;
        if (0 < iVar31) {
          pFVar35 = param_1 + lVar34;
          do {
            uVar12 = pFVar35->Offset;
            FVar13.Value = (pFVar35->Prerequisite).ComparisonIndex.Value;
            EVar26 = param_1->AttributeType;
            bVar27 = param_1->bAffectVisibility;
            uVar28 = *(undefined6 *)&param_1->field_0x52;
            FVar2 = param_1->Name;
            uVar19 = param_1->Offset;
            FVar20.Value = (param_1->Prerequisite).ComparisonIndex.Value;
            uVar3 = *(undefined8 *)&(param_1->Prerequisite).Number;
            uVar4 = *(undefined8 *)&(param_1->ContainerName).Number;
            uVar21 = param_1->ContainerIndex;
            uVar22 = *(undefined7 *)&param_1->field_0x21;
            EVar23 = (param_1->InvalidationReason).Reason;
            uVar24 = *(undefined3 *)&(param_1->InvalidationReason).field_0x1;
            iVar30 = (param_1->InvalidationReason)._padding_;
            uVar6 = *(undefined8 *)&(param_1->InvalidationReason).Getter;
            uVar7 = *(undefined8 *)&(param_1->InvalidationReason).Getter.field_0x8;
            uVar8 = *(undefined8 *)&param_1->OnValueChanged;
            uVar9 = *(undefined8 *)&(param_1->OnValueChanged).field_0x8;
            param_1->Name = pFVar35->Name;
            param_1->Offset = uVar12;
            (param_1->Prerequisite).ComparisonIndex = (FNameEntryId)FVar13.Value;
            uVar10 = *(undefined8 *)&(pFVar35->ContainerName).Number;
            *(undefined8 *)&(param_1->Prerequisite).Number =
                 *(undefined8 *)&(pFVar35->Prerequisite).Number;
            *(undefined8 *)&(param_1->ContainerName).Number = uVar10;
            uVar14 = *(undefined7 *)&pFVar35->field_0x21;
            EVar15 = (pFVar35->InvalidationReason).Reason;
            uVar16 = *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1;
            iVar37 = (pFVar35->InvalidationReason)._padding_;
            param_1->ContainerIndex = pFVar35->ContainerIndex;
            *(undefined7 *)&param_1->field_0x21 = uVar14;
            (param_1->InvalidationReason).Reason = EVar15;
            *(undefined3 *)&(param_1->InvalidationReason).field_0x1 = uVar16;
            (param_1->InvalidationReason)._padding_ = iVar37;
            uVar10 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8;
            *(undefined8 *)&(param_1->InvalidationReason).Getter =
                 *(undefined8 *)&(pFVar35->InvalidationReason).Getter;
            *(undefined8 *)&(param_1->InvalidationReason).Getter.field_0x8 = uVar10;
            uVar10 = *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8;
            *(undefined8 *)&param_1->OnValueChanged = *(undefined8 *)&pFVar35->OnValueChanged;
            *(undefined8 *)&(param_1->OnValueChanged).field_0x8 = uVar10;
            bVar29 = pFVar35->bAffectVisibility;
            uVar18 = *(undefined6 *)&pFVar35->field_0x52;
            param_1->AttributeType = pFVar35->AttributeType;
            param_1->bAffectVisibility = bVar29;
            *(undefined6 *)&param_1->field_0x52 = uVar18;
            pFVar35->Name = FVar2;
            pFVar35->Offset = uVar19;
            (pFVar35->Prerequisite).ComparisonIndex = (FNameEntryId)FVar20.Value;
            *(undefined8 *)&(pFVar35->Prerequisite).Number = uVar3;
            *(undefined8 *)&(pFVar35->ContainerName).Number = uVar4;
            pFVar35->ContainerIndex = uVar21;
            *(undefined7 *)&pFVar35->field_0x21 = uVar22;
            (pFVar35->InvalidationReason).Reason = EVar23;
            *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1 = uVar24;
            (pFVar35->InvalidationReason)._padding_ = iVar30;
            *(undefined8 *)&(pFVar35->InvalidationReason).Getter = uVar6;
            *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8 = uVar7;
            *(undefined8 *)&pFVar35->OnValueChanged = uVar8;
            *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8 = uVar9;
            pFVar35->AttributeType = EVar26;
            pFVar35->bAffectVisibility = bVar27;
            *(undefined6 *)&pFVar35->field_0x52 = uVar28;
            iVar37 = 0;
            if (1 < iVar31) {
              do {
                iVar30 = iVar37 * 2;
                iVar32 = iVar30 + 1;
                if (iVar30 + 2 < iVar31) {
                  if (param_1[(longlong)iVar30 + 2].SortOrder < param_1[iVar32].SortOrder) {
                    iVar32 = iVar30;
                  }
                  iVar32 = iVar32 + 1;
                }
                pFVar36 = param_1 + iVar32;
                if (pFVar36->SortOrder <= param_1[iVar37].SortOrder) break;
                uVar12 = pFVar36->Offset;
                FVar13.Value = (pFVar36->Prerequisite).ComparisonIndex.Value;
                pFVar11 = param_1 + iVar37;
                EVar26 = pFVar11->AttributeType;
                bVar27 = pFVar11->bAffectVisibility;
                uVar28 = *(undefined6 *)&pFVar11->field_0x52;
                pFVar11 = param_1 + iVar37;
                FVar2 = pFVar11->Name;
                uVar19 = pFVar11->Offset;
                FVar20.Value = (pFVar11->Prerequisite).ComparisonIndex.Value;
                uVar3 = *(undefined8 *)&param_1[iVar37].Prerequisite.Number;
                uVar4 = *(undefined8 *)&(&param_1[iVar37].Prerequisite)[1].Number;
                pFVar11 = param_1 + iVar37;
                uVar21 = pFVar11->ContainerIndex;
                uVar22 = *(undefined7 *)&pFVar11->field_0x21;
                pFVar5 = (FInvalidateWidgetReasonAttribute *)(&pFVar11->ContainerIndex + 8);
                EVar23 = pFVar5->Reason;
                uVar24 = *(undefined3 *)&pFVar5->field_0x1;
                iVar33 = pFVar5->_padding_;
                uVar6 = *(undefined8 *)&param_1[iVar37].InvalidationReason.Getter;
                uVar7 = *(undefined8 *)&param_1[iVar37].InvalidationReason.Getter.field_0x8;
                uVar8 = *(undefined8 *)&param_1[iVar37].OnValueChanged;
                uVar9 = *(undefined8 *)&param_1[iVar37].OnValueChanged.field_0x8;
                pFVar11 = param_1 + iVar37;
                pFVar11->Name = pFVar36->Name;
                pFVar11->Offset = uVar12;
                (pFVar11->Prerequisite).ComparisonIndex = (FNameEntryId)FVar13.Value;
                uVar10 = *(undefined8 *)&(pFVar36->ContainerName).Number;
                *(undefined8 *)&param_1[iVar37].Prerequisite.Number =
                     *(undefined8 *)&(pFVar36->Prerequisite).Number;
                *(undefined8 *)&(&param_1[iVar37].Prerequisite)[1].Number = uVar10;
                uVar14 = *(undefined7 *)&pFVar36->field_0x21;
                EVar15 = (pFVar36->InvalidationReason).Reason;
                uVar16 = *(undefined3 *)&(pFVar36->InvalidationReason).field_0x1;
                iVar30 = (pFVar36->InvalidationReason)._padding_;
                pFVar11 = param_1 + iVar37;
                pFVar11->ContainerIndex = pFVar36->ContainerIndex;
                *(undefined7 *)&pFVar11->field_0x21 = uVar14;
                pFVar5 = (FInvalidateWidgetReasonAttribute *)(&pFVar11->ContainerIndex + 8);
                pFVar5->Reason = EVar15;
                *(undefined3 *)&pFVar5->field_0x1 = uVar16;
                pFVar5->_padding_ = iVar30;
                uVar10 = *(undefined8 *)&(pFVar36->InvalidationReason).Getter.field_0x8;
                *(undefined8 *)&param_1[iVar37].InvalidationReason.Getter =
                     *(undefined8 *)&(pFVar36->InvalidationReason).Getter;
                *(undefined8 *)&param_1[iVar37].InvalidationReason.Getter.field_0x8 = uVar10;
                uVar10 = *(undefined8 *)&(pFVar36->OnValueChanged).field_0x8;
                *(undefined8 *)&param_1[iVar37].OnValueChanged =
                     *(undefined8 *)&pFVar36->OnValueChanged;
                *(undefined8 *)&param_1[iVar37].OnValueChanged.field_0x8 = uVar10;
                bVar29 = pFVar36->bAffectVisibility;
                uVar18 = *(undefined6 *)&pFVar36->field_0x52;
                pFVar11 = param_1 + iVar37;
                pFVar11->AttributeType = pFVar36->AttributeType;
                pFVar11->bAffectVisibility = bVar29;
                *(undefined6 *)&pFVar11->field_0x52 = uVar18;
                pFVar36->Name = FVar2;
                pFVar36->Offset = uVar19;
                (pFVar36->Prerequisite).ComparisonIndex = (FNameEntryId)FVar20.Value;
                *(undefined8 *)&(pFVar36->Prerequisite).Number = uVar3;
                *(undefined8 *)&(pFVar36->ContainerName).Number = uVar4;
                pFVar36->ContainerIndex = uVar21;
                *(undefined7 *)&pFVar36->field_0x21 = uVar22;
                (pFVar36->InvalidationReason).Reason = EVar23;
                *(undefined3 *)&(pFVar36->InvalidationReason).field_0x1 = uVar24;
                (pFVar36->InvalidationReason)._padding_ = iVar33;
                *(undefined8 *)&(pFVar36->InvalidationReason).Getter = uVar6;
                *(undefined8 *)&(pFVar36->InvalidationReason).Getter.field_0x8 = uVar7;
                *(undefined8 *)&pFVar36->OnValueChanged = uVar8;
                *(undefined8 *)&(pFVar36->OnValueChanged).field_0x8 = uVar9;
                pFVar36->AttributeType = EVar26;
                pFVar36->bAffectVisibility = bVar27;
                *(undefined6 *)&pFVar36->field_0x52 = uVar28;
                iVar37 = iVar32;
              } while (iVar32 * 2 + 1 < iVar31);
            }
            iVar31 = iVar31 + -1;
            lVar34 = lVar34 + -1;
            pFVar35 = pFVar35 + -1;
          } while (0 < lVar34);
        }
        return;
      }
      iVar30 = iVar32 + -1;
      iVar31 = iVar37 + -2;
      iVar37 = iVar31;
      iVar32 = iVar30;
    }
    iVar31 = iVar30 * 2;
    iVar33 = iVar31 + 1;
    if (iVar31 + 2 < param_2) {
      if (param_1[(longlong)iVar31 + 2].SortOrder < param_1[iVar33].SortOrder) {
        iVar33 = iVar31;
      }
      iVar33 = iVar33 + 1;
    }
    pFVar35 = param_1 + iVar33;
    if (pFVar35->SortOrder <= param_1[iVar30].SortOrder) goto LAB_1425b67d7;
    uVar12 = pFVar35->Offset;
    FVar13.Value = (pFVar35->Prerequisite).ComparisonIndex.Value;
    iVar31 = iVar33 * 2 + 1;
    pFVar36 = param_1 + iVar30;
    EVar26 = pFVar36->AttributeType;
    bVar27 = pFVar36->bAffectVisibility;
    uVar28 = *(undefined6 *)&pFVar36->field_0x52;
    pFVar36 = param_1 + iVar30;
    FVar2 = pFVar36->Name;
    uVar19 = pFVar36->Offset;
    FVar20.Value = (pFVar36->Prerequisite).ComparisonIndex.Value;
    uVar3 = *(undefined8 *)&param_1[iVar30].Prerequisite.Number;
    uVar4 = *(undefined8 *)&(&param_1[iVar30].Prerequisite)[1].Number;
    pFVar36 = param_1 + iVar30;
    uVar21 = pFVar36->ContainerIndex;
    uVar22 = *(undefined7 *)&pFVar36->field_0x21;
    pFVar5 = (FInvalidateWidgetReasonAttribute *)(&pFVar36->ContainerIndex + 8);
    EVar23 = pFVar5->Reason;
    uVar24 = *(undefined3 *)&pFVar5->field_0x1;
    iVar25 = pFVar5->_padding_;
    uVar6 = *(undefined8 *)&param_1[iVar30].InvalidationReason.Getter;
    uVar7 = *(undefined8 *)&param_1[iVar30].InvalidationReason.Getter.field_0x8;
    uVar8 = *(undefined8 *)&param_1[iVar30].OnValueChanged;
    uVar9 = *(undefined8 *)&param_1[iVar30].OnValueChanged.field_0x8;
    pFVar36 = param_1 + iVar30;
    pFVar36->Name = pFVar35->Name;
    pFVar36->Offset = uVar12;
    (pFVar36->Prerequisite).ComparisonIndex = (FNameEntryId)FVar13.Value;
    uVar10 = *(undefined8 *)&(pFVar35->ContainerName).Number;
    *(undefined8 *)&param_1[iVar30].Prerequisite.Number =
         *(undefined8 *)&(pFVar35->Prerequisite).Number;
    *(undefined8 *)&(&param_1[iVar30].Prerequisite)[1].Number = uVar10;
    uVar14 = *(undefined7 *)&pFVar35->field_0x21;
    EVar15 = (pFVar35->InvalidationReason).Reason;
    uVar16 = *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1;
    iVar17 = (pFVar35->InvalidationReason)._padding_;
    pFVar36 = param_1 + iVar30;
    pFVar36->ContainerIndex = pFVar35->ContainerIndex;
    *(undefined7 *)&pFVar36->field_0x21 = uVar14;
    pFVar5 = (FInvalidateWidgetReasonAttribute *)(&pFVar36->ContainerIndex + 8);
    pFVar5->Reason = EVar15;
    *(undefined3 *)&pFVar5->field_0x1 = uVar16;
    pFVar5->_padding_ = iVar17;
    uVar10 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8;
    *(undefined8 *)&param_1[iVar30].InvalidationReason.Getter =
         *(undefined8 *)&(pFVar35->InvalidationReason).Getter;
    *(undefined8 *)&param_1[iVar30].InvalidationReason.Getter.field_0x8 = uVar10;
    uVar10 = *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8;
    *(undefined8 *)&param_1[iVar30].OnValueChanged = *(undefined8 *)&pFVar35->OnValueChanged;
    *(undefined8 *)&param_1[iVar30].OnValueChanged.field_0x8 = uVar10;
    bVar29 = pFVar35->bAffectVisibility;
    uVar18 = *(undefined6 *)&pFVar35->field_0x52;
    pFVar36 = param_1 + iVar30;
    pFVar36->AttributeType = pFVar35->AttributeType;
    pFVar36->bAffectVisibility = bVar29;
    *(undefined6 *)&pFVar36->field_0x52 = uVar18;
    pFVar35->Name = FVar2;
    pFVar35->Offset = uVar19;
    (pFVar35->Prerequisite).ComparisonIndex = (FNameEntryId)FVar20.Value;
    *(undefined8 *)&(pFVar35->Prerequisite).Number = uVar3;
    *(undefined8 *)&(pFVar35->ContainerName).Number = uVar4;
    pFVar35->ContainerIndex = uVar21;
    *(undefined7 *)&pFVar35->field_0x21 = uVar22;
    (pFVar35->InvalidationReason).Reason = EVar23;
    *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1 = uVar24;
    (pFVar35->InvalidationReason)._padding_ = iVar25;
    *(undefined8 *)&(pFVar35->InvalidationReason).Getter = uVar6;
    *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8 = uVar7;
    *(undefined8 *)&pFVar35->OnValueChanged = uVar8;
    *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8 = uVar9;
    pFVar35->AttributeType = EVar26;
    pFVar35->bAffectVisibility = bVar27;
    *(undefined6 *)&pFVar35->field_0x52 = uVar28;
    iVar30 = iVar33;
  } while( true );
}

// HeapSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l33::<lambda_1>_>_> @ 1425b6980

void __cdecl
AlgoImpl::
HeapSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l33::<lambda_1>_>_>
          (FContainer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_33_::<lambda_1>_>
          param_4)

{
  FContainer *pFVar1;
  FContainer *pFVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FContainer *pFVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_1425b6a70:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar13;
          do {
            uVar5 = pFVar16->Offset;
            uVar6 = pFVar16->SortOrder;
            iVar14 = 0;
            FVar4 = param_1->Name;
            uVar7 = param_1->Offset;
            uVar8 = param_1->SortOrder;
            param_1->Name = pFVar16->Name;
            param_1->Offset = uVar5;
            param_1->SortOrder = uVar6;
            pFVar16->Name = FVar4;
            pFVar16->Offset = uVar7;
            pFVar16->SortOrder = uVar8;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].SortOrder < param_1[iVar10].SortOrder) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].SortOrder <= param_1[iVar14].SortOrder) break;
                pFVar1 = param_1 + iVar10;
                uVar5 = pFVar1->Offset;
                uVar6 = pFVar1->SortOrder;
                pFVar2 = param_1 + iVar14;
                FVar4 = pFVar2->Name;
                uVar7 = pFVar2->Offset;
                uVar8 = pFVar2->SortOrder;
                pFVar2 = param_1 + iVar14;
                pFVar2->Name = pFVar1->Name;
                pFVar2->Offset = uVar5;
                pFVar2->SortOrder = uVar6;
                pFVar1 = param_1 + iVar10;
                pFVar1->Name = FVar4;
                pFVar1->Offset = uVar7;
                pFVar1->SortOrder = uVar8;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].SortOrder < param_1[iVar12].SortOrder) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].SortOrder <= param_1[iVar10].SortOrder) goto LAB_1425b6a70;
    pFVar16 = param_1 + iVar12;
    uVar5 = pFVar16->Offset;
    uVar6 = pFVar16->SortOrder;
    iVar11 = iVar12 * 2 + 1;
    pFVar1 = param_1 + iVar10;
    FVar4 = pFVar1->Name;
    uVar7 = pFVar1->Offset;
    uVar8 = pFVar1->SortOrder;
    pFVar1 = param_1 + iVar10;
    pFVar1->Name = pFVar16->Name;
    pFVar1->Offset = uVar5;
    pFVar1->SortOrder = uVar6;
    pFVar16 = param_1 + iVar12;
    pFVar16->Name = FVar4;
    pFVar16->Offset = uVar7;
    pFVar16->SortOrder = uVar8;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_> @ 1425b6b50

void __cdecl
AlgoImpl::
HeapSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
          (FGetterItem *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_> param_4)

{
  code *pcVar1;
  ISlateAttributeGetter *pIVar2;
  FSlateAttributeBase *pFVar3;
  ISlateAttributeGetter *pIVar4;
  FAttribute *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FGetterItem *pFVar14;
  FGetterItem *pFVar15;
  longlong lVar16;
  FGetterItem *pFVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar18 = iVar11;
  iVar13 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_1425b6c7f:
      if (iVar13 == 0) {
        iVar11 = param_2 + -1;
        lVar16 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar17 = param_1 + lVar16;
          do {
            pIVar2 = (pFVar17->Getter).Ptr;
            pFVar3 = param_1->Attribute;
            pIVar4 = (param_1->Getter).Ptr;
            pFVar5 = param_1->CachedAttributeDescriptor;
            uVar7 = param_1->SortOrder;
            iVar10 = param_1->AttributeContainerOffset;
            param_1->Attribute = pFVar17->Attribute;
            (param_1->Getter).Ptr = pIVar2;
            uVar6 = pFVar17->SortOrder;
            iVar18 = pFVar17->AttributeContainerOffset;
            param_1->CachedAttributeDescriptor = pFVar17->CachedAttributeDescriptor;
            param_1->SortOrder = uVar6;
            param_1->AttributeContainerOffset = iVar18;
            pFVar17->Attribute = pFVar3;
            (pFVar17->Getter).Ptr = pIVar4;
            pFVar17->CachedAttributeDescriptor = pFVar5;
            pFVar17->SortOrder = uVar7;
            pFVar17->AttributeContainerOffset = iVar10;
            iVar18 = 0;
            if (1 < iVar11) {
              do {
                iVar10 = iVar18 * 2;
                iVar13 = iVar10 + 1;
                if (iVar10 + 2 < iVar11) {
                  bVar9 = FSlateAttributeMetaData::FGetterItem::operator<
                                    (param_1 + (iVar10 + 2),param_1 + iVar13);
                  if (bVar9) {
                    iVar13 = iVar10;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar15 = param_1 + iVar13;
                pFVar14 = param_1 + iVar18;
                bVar9 = FSlateAttributeMetaData::FGetterItem::operator<(pFVar14,pFVar15);
                if (!bVar9) break;
                pIVar2 = (pFVar15->Getter).Ptr;
                pFVar3 = pFVar14->Attribute;
                pIVar4 = (pFVar14->Getter).Ptr;
                pFVar5 = pFVar14->CachedAttributeDescriptor;
                uVar7 = pFVar14->SortOrder;
                iVar10 = pFVar14->AttributeContainerOffset;
                pFVar14->Attribute = pFVar15->Attribute;
                (pFVar14->Getter).Ptr = pIVar2;
                uVar6 = pFVar15->SortOrder;
                iVar18 = pFVar15->AttributeContainerOffset;
                pFVar14->CachedAttributeDescriptor = pFVar15->CachedAttributeDescriptor;
                pFVar14->SortOrder = uVar6;
                pFVar14->AttributeContainerOffset = iVar18;
                pFVar15->Attribute = pFVar3;
                (pFVar15->Getter).Ptr = pIVar4;
                pFVar15->CachedAttributeDescriptor = pFVar5;
                pFVar15->SortOrder = uVar7;
                pFVar15->AttributeContainerOffset = iVar10;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar16 = lVar16 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar10 = iVar13 + -1;
      iVar11 = iVar18 + -2;
      iVar18 = iVar11;
      iVar13 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      bVar9 = FSlateAttributeMetaData::FGetterItem::operator<
                        (param_1 + (iVar11 + 2),param_1 + iVar12);
      if (bVar9) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar14 = param_1 + iVar12;
    pFVar17 = param_1 + iVar10;
    bVar9 = FSlateAttributeMetaData::FGetterItem::operator<(pFVar17,pFVar14);
    if (!bVar9) goto LAB_1425b6c7f;
    pIVar2 = (pFVar14->Getter).Ptr;
    iVar11 = iVar12 * 2 + 1;
    pFVar3 = pFVar17->Attribute;
    pIVar4 = (pFVar17->Getter).Ptr;
    pFVar5 = pFVar17->CachedAttributeDescriptor;
    uVar7 = pFVar17->SortOrder;
    iVar8 = pFVar17->AttributeContainerOffset;
    pFVar17->Attribute = pFVar14->Attribute;
    (pFVar17->Getter).Ptr = pIVar2;
    uVar6 = pFVar14->SortOrder;
    iVar10 = pFVar14->AttributeContainerOffset;
    pFVar17->CachedAttributeDescriptor = pFVar14->CachedAttributeDescriptor;
    pFVar17->SortOrder = uVar6;
    pFVar17->AttributeContainerOffset = iVar10;
    pFVar14->Attribute = pFVar3;
    (pFVar14->Getter).Ptr = pIVar4;
    pFVar14->CachedAttributeDescriptor = pFVar5;
    pFVar14->SortOrder = uVar7;
    pFVar14->AttributeContainerOffset = iVar8;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSortPredicate>_> @ 1425b6da0

void __cdecl
AlgoImpl::
HeapSortInternal<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSortPredicate>_>
          (FPrerequisiteSort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSortPredicate>
          param_4)

{
  FPrerequisiteSort *pFVar1;
  FPrerequisiteSort *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FPrerequisiteSort *pFVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar8 = iVar7 * 2 + 1;
  iVar13 = iVar8;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar8) {
LAB_1425b6ee1:
      if (iVar10 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar12 = param_1 + lVar11;
          do {
            iVar7 = pFVar12->PrerequisitesIndex;
            iVar10 = param_1->AttributeIndex;
            iVar9 = param_1->PrerequisitesIndex;
            iVar13 = param_1->Depth;
            param_1->AttributeIndex = pFVar12->AttributeIndex;
            param_1->PrerequisitesIndex = iVar7;
            param_1->Depth = pFVar12->Depth;
            pFVar12->AttributeIndex = iVar10;
            pFVar12->PrerequisitesIndex = iVar9;
            pFVar12->Depth = iVar13;
            iVar13 = 0;
            if (1 < iVar8) {
              do {
                iVar10 = iVar13 * 2;
                iVar7 = iVar10 + 1;
                if (iVar10 + 2 < iVar8) {
                  bVar6 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
                          FPrerequisiteSortPredicate::operator()
                                    (param_4.Predicate,param_1 + (iVar10 + 2),param_1 + iVar7);
                  if (bVar6) {
                    iVar7 = iVar10;
                  }
                  iVar7 = iVar7 + 1;
                }
                pFVar1 = param_1 + iVar7;
                pFVar2 = param_1 + iVar13;
                bVar6 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
                        FPrerequisiteSortPredicate::operator()(param_4.Predicate,pFVar2,pFVar1);
                if (!bVar6) break;
                iVar9 = pFVar2->AttributeIndex;
                iVar4 = pFVar2->PrerequisitesIndex;
                iVar13 = pFVar2->Depth;
                iVar10 = pFVar1->PrerequisitesIndex;
                pFVar2->AttributeIndex = pFVar1->AttributeIndex;
                pFVar2->PrerequisitesIndex = iVar10;
                pFVar2->Depth = pFVar1->Depth;
                pFVar1->AttributeIndex = iVar9;
                pFVar1->PrerequisitesIndex = iVar4;
                pFVar1->Depth = iVar13;
                iVar13 = iVar7;
              } while (iVar7 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar8 = iVar13 + -2;
      iVar13 = iVar8;
      iVar10 = iVar7;
    }
    iVar8 = iVar7 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      bVar6 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
              FPrerequisiteSortPredicate::operator()
                        (param_4.Predicate,param_1 + (iVar8 + 2),param_1 + iVar9);
      if (bVar6) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar12 = param_1 + iVar9;
    pFVar1 = param_1 + iVar7;
    bVar6 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
            FPrerequisiteSortPredicate::operator()(param_4.Predicate,pFVar1,pFVar12);
    if (!bVar6) goto LAB_1425b6ee1;
    iVar4 = pFVar1->AttributeIndex;
    iVar5 = pFVar1->PrerequisitesIndex;
    iVar7 = pFVar1->Depth;
    iVar8 = pFVar12->PrerequisitesIndex;
    pFVar1->AttributeIndex = pFVar12->AttributeIndex;
    pFVar1->PrerequisitesIndex = iVar8;
    pFVar1->Depth = pFVar12->Depth;
    iVar8 = iVar9 * 2 + 1;
    pFVar12->AttributeIndex = iVar4;
    pFVar12->PrerequisitesIndex = iVar5;
    pFVar12->Depth = iVar7;
    iVar7 = iVar9;
  } while( true );
}

// IntroSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l67::<lambda_5>_>_> @ 1425b7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l67::<lambda_5>_>_>
          (FAttribute *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_67_::<lambda_5>_>
          param_4)

{
  FAttribute *pFVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined7 uVar14;
  EInvalidateWidgetReason EVar15;
  undefined3 uVar16;
  bool bVar17;
  undefined6 uVar18;
  uint uVar19;
  FNameEntryId FVar20;
  uchar uVar21;
  undefined7 uVar22;
  EInvalidateWidgetReason EVar23;
  undefined3 uVar24;
  int iVar25;
  ESlateAttributeType EVar26;
  bool bVar27;
  undefined6 uVar28;
  int iVar29;
  FAttribute *pFVar30;
  FAttribute *pFVar31;
  FAttribute *pFVar32;
  FAttribute *pFVar33;
  FAttribute *pFVar34;
  FAttribute *pFVar35;
  FAttribute **ppFVar36;
  float fVar37;
  undefined1 auStack_398 [48];
  FAttribute *local_368;
  FAttribute *local_358;
  FAttribute *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar37 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar37;
    memset(local_340,0,0x2e8);
    ppFVar36 = &local_358;
    do {
      pFVar30 = ppFVar36[1];
      pFVar35 = *ppFVar36;
      pFVar1 = ppFVar36[2];
      local_368._0_4_ = (int)pFVar1;
      iVar29 = (int)(((longlong)pFVar30 - (longlong)pFVar35) / 0x58) + 1;
      pFVar34 = pFVar35;
      if ((int)local_368 != 0) {
LAB_1425b70f0:
        if (8 < iVar29) {
          uVar12 = pFVar34->Offset;
          FVar13.Value = (pFVar34->Prerequisite).ComparisonIndex.Value;
          pFVar32 = pFVar30 + 1;
          pFVar35 = pFVar34 + iVar29 / 2;
          FVar2 = pFVar35->Name;
          uVar19 = pFVar35->Offset;
          FVar20.Value = (pFVar35->Prerequisite).ComparisonIndex.Value;
          uVar3 = *(undefined8 *)&(pFVar35->Prerequisite).Number;
          uVar4 = *(undefined8 *)&(pFVar35->ContainerName).Number;
          uVar21 = pFVar35->ContainerIndex;
          uVar22 = *(undefined7 *)&pFVar35->field_0x21;
          EVar23 = (pFVar35->InvalidationReason).Reason;
          uVar24 = *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1;
          iVar25 = (pFVar35->InvalidationReason)._padding_;
          uVar5 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter;
          uVar6 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8;
          uVar7 = *(undefined8 *)&pFVar35->OnValueChanged;
          uVar8 = *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8;
          EVar26 = pFVar35->AttributeType;
          bVar27 = pFVar35->bAffectVisibility;
          uVar28 = *(undefined6 *)&pFVar35->field_0x52;
          pFVar35->Name = pFVar34->Name;
          pFVar35->Offset = uVar12;
          (pFVar35->Prerequisite).ComparisonIndex = (FNameEntryId)FVar13.Value;
          uVar9 = *(undefined8 *)&(pFVar34->ContainerName).Number;
          *(undefined8 *)&(pFVar35->Prerequisite).Number =
               *(undefined8 *)&(pFVar34->Prerequisite).Number;
          *(undefined8 *)&(pFVar35->ContainerName).Number = uVar9;
          uVar14 = *(undefined7 *)&pFVar34->field_0x21;
          EVar15 = (pFVar34->InvalidationReason).Reason;
          uVar16 = *(undefined3 *)&(pFVar34->InvalidationReason).field_0x1;
          iVar29 = (pFVar34->InvalidationReason)._padding_;
          pFVar35->ContainerIndex = pFVar34->ContainerIndex;
          *(undefined7 *)&pFVar35->field_0x21 = uVar14;
          (pFVar35->InvalidationReason).Reason = EVar15;
          *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1 = uVar16;
          (pFVar35->InvalidationReason)._padding_ = iVar29;
          uVar9 = *(undefined8 *)&(pFVar34->InvalidationReason).Getter.field_0x8;
          *(undefined8 *)&(pFVar35->InvalidationReason).Getter =
               *(undefined8 *)&(pFVar34->InvalidationReason).Getter;
          *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8 = uVar9;
          uVar9 = *(undefined8 *)&(pFVar34->OnValueChanged).field_0x8;
          *(undefined8 *)&pFVar35->OnValueChanged = *(undefined8 *)&pFVar34->OnValueChanged;
          *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8 = uVar9;
          bVar17 = pFVar34->bAffectVisibility;
          uVar18 = *(undefined6 *)&pFVar34->field_0x52;
          pFVar35->AttributeType = pFVar34->AttributeType;
          pFVar35->bAffectVisibility = bVar17;
          *(undefined6 *)&pFVar35->field_0x52 = uVar18;
          pFVar34->Name = FVar2;
          pFVar34->Offset = uVar19;
          (pFVar34->Prerequisite).ComparisonIndex = (FNameEntryId)FVar20.Value;
          *(undefined8 *)&(pFVar34->Prerequisite).Number = uVar3;
          *(undefined8 *)&(pFVar34->ContainerName).Number = uVar4;
          pFVar34->ContainerIndex = uVar21;
          *(undefined7 *)&pFVar34->field_0x21 = uVar22;
          (pFVar34->InvalidationReason).Reason = EVar23;
          *(undefined3 *)&(pFVar34->InvalidationReason).field_0x1 = uVar24;
          (pFVar34->InvalidationReason)._padding_ = iVar25;
          *(undefined8 *)&(pFVar34->InvalidationReason).Getter = uVar5;
          *(undefined8 *)&(pFVar34->InvalidationReason).Getter.field_0x8 = uVar6;
          *(undefined8 *)&pFVar34->OnValueChanged = uVar7;
          *(undefined8 *)&(pFVar34->OnValueChanged).field_0x8 = uVar8;
          pFVar34->AttributeType = EVar26;
          pFVar34->bAffectVisibility = bVar27;
          *(undefined6 *)&pFVar34->field_0x52 = uVar28;
          pFVar35 = pFVar34;
LAB_1425b7180:
          pFVar31 = pFVar35;
          pFVar35 = pFVar31 + 1;
          if (pFVar35 <= pFVar30) goto code_r0x0001425b7189;
          goto LAB_1425b7193;
        }
        for (; pFVar35 = pFVar34, pFVar1 = pFVar34, pFVar34 < pFVar30; pFVar30 = pFVar30 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar30) {
            if (pFVar35->SortOrder < pFVar1->SortOrder) {
              pFVar35 = pFVar1;
            }
          }
          FVar2 = pFVar35->Name;
          uVar19 = pFVar35->Offset;
          FVar20.Value = (pFVar35->Prerequisite).ComparisonIndex.Value;
          EVar26 = pFVar35->AttributeType;
          bVar27 = pFVar35->bAffectVisibility;
          uVar28 = *(undefined6 *)&pFVar35->field_0x52;
          uVar3 = *(undefined8 *)&(pFVar35->Prerequisite).Number;
          uVar4 = *(undefined8 *)&(pFVar35->ContainerName).Number;
          uVar12 = pFVar30->Offset;
          FVar13.Value = (pFVar30->Prerequisite).ComparisonIndex.Value;
          uVar21 = pFVar35->ContainerIndex;
          uVar22 = *(undefined7 *)&pFVar35->field_0x21;
          EVar23 = (pFVar35->InvalidationReason).Reason;
          uVar24 = *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1;
          iVar25 = (pFVar35->InvalidationReason)._padding_;
          uVar5 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter;
          uVar6 = *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8;
          uVar7 = *(undefined8 *)&pFVar35->OnValueChanged;
          uVar8 = *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8;
          pFVar35->Name = pFVar30->Name;
          pFVar35->Offset = uVar12;
          (pFVar35->Prerequisite).ComparisonIndex = (FNameEntryId)FVar13.Value;
          uVar9 = *(undefined8 *)&(pFVar30->ContainerName).Number;
          *(undefined8 *)&(pFVar35->Prerequisite).Number =
               *(undefined8 *)&(pFVar30->Prerequisite).Number;
          *(undefined8 *)&(pFVar35->ContainerName).Number = uVar9;
          uVar14 = *(undefined7 *)&pFVar30->field_0x21;
          EVar15 = (pFVar30->InvalidationReason).Reason;
          uVar16 = *(undefined3 *)&(pFVar30->InvalidationReason).field_0x1;
          iVar29 = (pFVar30->InvalidationReason)._padding_;
          pFVar35->ContainerIndex = pFVar30->ContainerIndex;
          *(undefined7 *)&pFVar35->field_0x21 = uVar14;
          (pFVar35->InvalidationReason).Reason = EVar15;
          *(undefined3 *)&(pFVar35->InvalidationReason).field_0x1 = uVar16;
          (pFVar35->InvalidationReason)._padding_ = iVar29;
          uVar9 = *(undefined8 *)&(pFVar30->InvalidationReason).Getter.field_0x8;
          *(undefined8 *)&(pFVar35->InvalidationReason).Getter =
               *(undefined8 *)&(pFVar30->InvalidationReason).Getter;
          *(undefined8 *)&(pFVar35->InvalidationReason).Getter.field_0x8 = uVar9;
          uVar9 = *(undefined8 *)&(pFVar30->OnValueChanged).field_0x8;
          *(undefined8 *)&pFVar35->OnValueChanged = *(undefined8 *)&pFVar30->OnValueChanged;
          *(undefined8 *)&(pFVar35->OnValueChanged).field_0x8 = uVar9;
          bVar17 = pFVar30->bAffectVisibility;
          uVar18 = *(undefined6 *)&pFVar30->field_0x52;
          pFVar35->AttributeType = pFVar30->AttributeType;
          pFVar35->bAffectVisibility = bVar17;
          *(undefined6 *)&pFVar35->field_0x52 = uVar18;
          pFVar30->Name = FVar2;
          pFVar30->Offset = uVar19;
          (pFVar30->Prerequisite).ComparisonIndex = (FNameEntryId)FVar20.Value;
          *(undefined8 *)&(pFVar30->Prerequisite).Number = uVar3;
          *(undefined8 *)&(pFVar30->ContainerName).Number = uVar4;
          pFVar30->ContainerIndex = uVar21;
          *(undefined7 *)&pFVar30->field_0x21 = uVar22;
          (pFVar30->InvalidationReason).Reason = EVar23;
          *(undefined3 *)&(pFVar30->InvalidationReason).field_0x1 = uVar24;
          (pFVar30->InvalidationReason)._padding_ = iVar25;
          *(undefined8 *)&(pFVar30->InvalidationReason).Getter = uVar5;
          *(undefined8 *)&(pFVar30->InvalidationReason).Getter.field_0x8 = uVar6;
          *(undefined8 *)&pFVar30->OnValueChanged = uVar7;
          *(undefined8 *)&(pFVar30->OnValueChanged).field_0x8 = uVar8;
          pFVar30->AttributeType = EVar26;
          pFVar30->bAffectVisibility = bVar27;
          *(undefined6 *)&pFVar30->field_0x52 = uVar28;
        }
        goto LAB_1425b7358;
      }
LAB_1425b7349:
      local_368 = pFVar1;
      HeapSortInternal<FSlateAttributeDescriptor::FAttribute,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FAttribute,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l67::<lambda_5>_>_>
                (pFVar35,iVar29,param_3,param_4);
LAB_1425b7358:
      ppFVar36 = ppFVar36 + -3;
    } while (&local_358 <= ppFVar36);
  }
  return;
code_r0x0001425b7189:
  if (pFVar31[1].SortOrder <= pFVar34->SortOrder) goto LAB_1425b7180;
LAB_1425b7193:
  do {
    pFVar33 = pFVar32;
    pFVar32 = pFVar33 + -1;
    if (pFVar32 <= pFVar34) break;
  } while (pFVar34->SortOrder <= pFVar33[-1].SortOrder);
  uVar10 = pFVar33[-1].Offset;
  uVar11 = pFVar33[-1].Prerequisite.ComparisonIndex;
  if (pFVar35 <= pFVar32) {
    FVar2 = pFVar35->Name;
    uVar12 = pFVar31[1].Offset;
    FVar13.Value = pFVar31[1].Prerequisite.ComparisonIndex.Value;
    uVar4 = *(undefined8 *)&pFVar31[1].Prerequisite.Number;
    uVar5 = *(undefined8 *)&pFVar31[1].ContainerName.Number;
    uVar21 = pFVar31[1].ContainerIndex;
    uVar22 = *(undefined7 *)&pFVar31[1].field_0x21;
    EVar23 = pFVar31[1].InvalidationReason.Reason;
    uVar24 = *(undefined3 *)&pFVar31[1].InvalidationReason.field_0x1;
    iVar25 = pFVar31[1].InvalidationReason._padding_;
    uVar6 = *(undefined8 *)&pFVar31[1].InvalidationReason.Getter;
    uVar7 = *(undefined8 *)&pFVar31[1].InvalidationReason.Getter.field_0x8;
    uVar8 = *(undefined8 *)&pFVar31[1].OnValueChanged;
    uVar9 = *(undefined8 *)&pFVar31[1].OnValueChanged.field_0x8;
    EVar26 = pFVar31[1].AttributeType;
    bVar27 = pFVar31[1].bAffectVisibility;
    uVar28 = *(undefined6 *)&pFVar31[1].field_0x52;
    pFVar35->Name = pFVar32->Name;
    pFVar31[1].Offset = uVar10;
    pFVar31[1].Prerequisite.ComparisonIndex = (FNameEntryId)uVar11;
    uVar3 = *(undefined8 *)&pFVar33[-1].ContainerName.Number;
    *(undefined8 *)&pFVar31[1].Prerequisite.Number = *(undefined8 *)&pFVar33[-1].Prerequisite.Number
    ;
    *(undefined8 *)&pFVar31[1].ContainerName.Number = uVar3;
    uVar14 = *(undefined7 *)&pFVar33[-1].field_0x21;
    EVar15 = pFVar33[-1].InvalidationReason.Reason;
    uVar16 = *(undefined3 *)&pFVar33[-1].InvalidationReason.field_0x1;
    iVar29 = pFVar33[-1].InvalidationReason._padding_;
    pFVar31[1].ContainerIndex = pFVar33[-1].ContainerIndex;
    *(undefined7 *)&pFVar31[1].field_0x21 = uVar14;
    pFVar31[1].InvalidationReason.Reason = EVar15;
    *(undefined3 *)&pFVar31[1].InvalidationReason.field_0x1 = uVar16;
    pFVar31[1].InvalidationReason._padding_ = iVar29;
    uVar3 = *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter.field_0x8;
    *(undefined8 *)&pFVar31[1].InvalidationReason.Getter =
         *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter;
    *(undefined8 *)&pFVar31[1].InvalidationReason.Getter.field_0x8 = uVar3;
    uVar3 = *(undefined8 *)&pFVar33[-1].OnValueChanged.field_0x8;
    *(undefined8 *)&pFVar31[1].OnValueChanged = *(undefined8 *)&pFVar33[-1].OnValueChanged;
    *(undefined8 *)&pFVar31[1].OnValueChanged.field_0x8 = uVar3;
    bVar17 = pFVar33[-1].bAffectVisibility;
    uVar18 = *(undefined6 *)&pFVar33[-1].field_0x52;
    pFVar31[1].AttributeType = pFVar33[-1].AttributeType;
    pFVar31[1].bAffectVisibility = bVar17;
    *(undefined6 *)&pFVar31[1].field_0x52 = uVar18;
    pFVar32->Name = FVar2;
    pFVar33[-1].Offset = uVar12;
    pFVar33[-1].Prerequisite.ComparisonIndex = (FNameEntryId)FVar13.Value;
    *(undefined8 *)&pFVar33[-1].Prerequisite.Number = uVar4;
    *(undefined8 *)&pFVar33[-1].ContainerName.Number = uVar5;
    pFVar33[-1].ContainerIndex = uVar21;
    *(undefined7 *)&pFVar33[-1].field_0x21 = uVar22;
    pFVar33[-1].InvalidationReason.Reason = EVar23;
    *(undefined3 *)&pFVar33[-1].InvalidationReason.field_0x1 = uVar24;
    pFVar33[-1].InvalidationReason._padding_ = iVar25;
    *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter = uVar6;
    *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter.field_0x8 = uVar7;
    *(undefined8 *)&pFVar33[-1].OnValueChanged = uVar8;
    *(undefined8 *)&pFVar33[-1].OnValueChanged.field_0x8 = uVar9;
    pFVar33[-1].AttributeType = EVar26;
    pFVar33[-1].bAffectVisibility = bVar27;
    *(undefined6 *)&pFVar33[-1].field_0x52 = uVar28;
    goto LAB_1425b7180;
  }
  FVar2 = pFVar34->Name;
  uVar12 = pFVar34->Offset;
  FVar13.Value = (pFVar34->Prerequisite).ComparisonIndex.Value;
  uVar3 = *(undefined8 *)&(pFVar34->Prerequisite).Number;
  uVar4 = *(undefined8 *)&(pFVar34->ContainerName).Number;
  local_368._0_4_ = (int)local_368 + -1;
  uVar21 = pFVar34->ContainerIndex;
  uVar22 = *(undefined7 *)&pFVar34->field_0x21;
  EVar23 = (pFVar34->InvalidationReason).Reason;
  uVar24 = *(undefined3 *)&(pFVar34->InvalidationReason).field_0x1;
  iVar25 = (pFVar34->InvalidationReason)._padding_;
  uVar5 = *(undefined8 *)&(pFVar34->InvalidationReason).Getter;
  uVar6 = *(undefined8 *)&(pFVar34->InvalidationReason).Getter.field_0x8;
  uVar7 = *(undefined8 *)&pFVar34->OnValueChanged;
  uVar8 = *(undefined8 *)&(pFVar34->OnValueChanged).field_0x8;
  EVar26 = pFVar34->AttributeType;
  bVar27 = pFVar34->bAffectVisibility;
  uVar28 = *(undefined6 *)&pFVar34->field_0x52;
  pFVar34->Name = pFVar32->Name;
  pFVar34->Offset = uVar10;
  (pFVar34->Prerequisite).ComparisonIndex = (FNameEntryId)uVar11;
  uVar9 = *(undefined8 *)&pFVar33[-1].ContainerName.Number;
  *(undefined8 *)&(pFVar34->Prerequisite).Number = *(undefined8 *)&pFVar33[-1].Prerequisite.Number;
  *(undefined8 *)&(pFVar34->ContainerName).Number = uVar9;
  uVar14 = *(undefined7 *)&pFVar33[-1].field_0x21;
  EVar15 = pFVar33[-1].InvalidationReason.Reason;
  uVar16 = *(undefined3 *)&pFVar33[-1].InvalidationReason.field_0x1;
  iVar29 = pFVar33[-1].InvalidationReason._padding_;
  pFVar34->ContainerIndex = pFVar33[-1].ContainerIndex;
  *(undefined7 *)&pFVar34->field_0x21 = uVar14;
  (pFVar34->InvalidationReason).Reason = EVar15;
  *(undefined3 *)&(pFVar34->InvalidationReason).field_0x1 = uVar16;
  (pFVar34->InvalidationReason)._padding_ = iVar29;
  uVar9 = *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter.field_0x8;
  *(undefined8 *)&(pFVar34->InvalidationReason).Getter =
       *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter;
  *(undefined8 *)&(pFVar34->InvalidationReason).Getter.field_0x8 = uVar9;
  uVar9 = *(undefined8 *)&pFVar33[-1].OnValueChanged.field_0x8;
  *(undefined8 *)&pFVar34->OnValueChanged = *(undefined8 *)&pFVar33[-1].OnValueChanged;
  *(undefined8 *)&(pFVar34->OnValueChanged).field_0x8 = uVar9;
  bVar17 = pFVar33[-1].bAffectVisibility;
  uVar18 = *(undefined6 *)&pFVar33[-1].field_0x52;
  pFVar34->AttributeType = pFVar33[-1].AttributeType;
  pFVar34->bAffectVisibility = bVar17;
  *(undefined6 *)&pFVar34->field_0x52 = uVar18;
  pFVar32->Name = FVar2;
  pFVar33[-1].Offset = uVar12;
  pFVar33[-1].Prerequisite.ComparisonIndex = (FNameEntryId)FVar13.Value;
  *(undefined8 *)&pFVar33[-1].Prerequisite.Number = uVar3;
  *(undefined8 *)&pFVar33[-1].ContainerName.Number = uVar4;
  pFVar33[-1].ContainerIndex = uVar21;
  *(undefined7 *)&pFVar33[-1].field_0x21 = uVar22;
  pFVar33[-1].InvalidationReason.Reason = EVar23;
  *(undefined3 *)&pFVar33[-1].InvalidationReason.field_0x1 = uVar24;
  pFVar33[-1].InvalidationReason._padding_ = iVar25;
  *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter = uVar5;
  *(undefined8 *)&pFVar33[-1].InvalidationReason.Getter.field_0x8 = uVar6;
  *(undefined8 *)&pFVar33[-1].OnValueChanged = uVar7;
  *(undefined8 *)&pFVar33[-1].OnValueChanged.field_0x8 = uVar8;
  pFVar33[-1].AttributeType = EVar26;
  pFVar33[-1].bAffectVisibility = bVar27;
  *(undefined6 *)&pFVar33[-1].field_0x52 = uVar28;
  if (((longlong)pFVar32 + (-0x58 - (longlong)pFVar34)) / 0x58 <
      ((longlong)pFVar30 - (longlong)pFVar35) / 0x58) {
    if (pFVar35 < pFVar30) {
      *ppFVar36 = pFVar35;
      ppFVar36[1] = pFVar30;
      *(int *)(ppFVar36 + 2) = (int)local_368;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar32 <= pFVar34 + 1) goto LAB_1425b7358;
    pFVar30 = pFVar33 + -2;
    pFVar35 = pFVar34;
  }
  else {
    if (pFVar34 + 1 < pFVar32) {
      *ppFVar36 = pFVar34;
      ppFVar36[1] = pFVar33 + -2;
      *(int *)(ppFVar36 + 2) = (int)local_368;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar30 <= pFVar35) goto LAB_1425b7358;
  }
  iVar29 = (int)(((longlong)pFVar30 - (longlong)pFVar35) / 0x58) + 1;
  pFVar34 = pFVar35;
  if ((int)local_368 == 0) goto LAB_1425b7349;
  goto LAB_1425b70f0;
}

// IntroSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l33::<lambda_1>_>_> @ 1425b7460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l33::<lambda_1>_>_>
          (FContainer *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_33_::<lambda_1>_>
          param_4)

{
  FContainer *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FContainer *pFVar10;
  FContainer **ppFVar11;
  FContainer *pFVar12;
  FContainer *pFVar13;
  FContainer *pFVar14;
  FContainer *pFVar15;
  FContainer *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FContainer *local_338;
  FContainer *local_328;
  FContainer *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_1425b7510:
        if (8 < iVar9) {
          uVar5 = pFVar15->Offset;
          uVar6 = pFVar15->SortOrder;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          FVar4 = pFVar16->Name;
          uVar7 = pFVar16->Offset;
          uVar8 = pFVar16->SortOrder;
          pFVar16 = pFVar15 + iVar9 / 2;
          pFVar16->Name = pFVar15->Name;
          pFVar16->Offset = uVar5;
          pFVar16->SortOrder = uVar6;
          pFVar15->Name = FVar4;
          pFVar15->Offset = uVar7;
          pFVar15->SortOrder = uVar8;
          pFVar16 = pFVar15;
LAB_1425b7540:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x0001425b7549;
          goto LAB_1425b7552;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->SortOrder < pFVar1->SortOrder) {
              pFVar16 = pFVar1;
            }
          }
          FVar4 = pFVar16->Name;
          uVar7 = pFVar16->Offset;
          uVar8 = pFVar16->SortOrder;
          uVar5 = pFVar14->Offset;
          uVar6 = pFVar14->SortOrder;
          pFVar16->Name = pFVar14->Name;
          pFVar16->Offset = uVar5;
          pFVar16->SortOrder = uVar6;
          pFVar14->Name = FVar4;
          pFVar14->Offset = uVar7;
          pFVar14->SortOrder = uVar8;
        }
        goto LAB_1425b7613;
      }
LAB_1425b7602:
      local_338 = pFVar1;
      HeapSortInternal<FSlateAttributeDescriptor::FContainer,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeDescriptor::FContainer,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l33::<lambda_1>_>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_1425b7613:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x0001425b7549:
  if (pFVar10[1].SortOrder <= pFVar15->SortOrder) goto LAB_1425b7540;
LAB_1425b7552:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->SortOrder <= pFVar13[-1].SortOrder);
  uVar2 = pFVar13[-1].Offset;
  uVar3 = pFVar13[-1].SortOrder;
  if (pFVar16 <= pFVar12) {
    FVar4 = pFVar16->Name;
    uVar5 = pFVar10[1].Offset;
    uVar6 = pFVar10[1].SortOrder;
    pFVar16->Name = pFVar12->Name;
    pFVar10[1].Offset = uVar2;
    pFVar10[1].SortOrder = uVar3;
    pFVar12->Name = FVar4;
    pFVar13[-1].Offset = uVar5;
    pFVar13[-1].SortOrder = uVar6;
    goto LAB_1425b7540;
  }
  FVar4 = pFVar15->Name;
  uVar5 = pFVar15->Offset;
  uVar6 = pFVar15->SortOrder;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar15->Name = pFVar12->Name;
  pFVar15->Offset = uVar2;
  pFVar15->SortOrder = uVar3;
  pFVar12->Name = FVar4;
  pFVar13[-1].Offset = uVar5;
  pFVar13[-1].SortOrder = uVar6;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_1425b7613;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_1425b7613;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_1425b7602;
  goto LAB_1425b7510;
}

// IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_> @ 1425b76a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
          (FGetterItem *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_> param_4)

{
  ISlateAttributeGetter *pIVar1;
  FSlateAttributeBase *pFVar2;
  ISlateAttributeGetter *pIVar3;
  FAttribute *pFVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FGetterItem *pFVar10;
  FGetterItem *pFVar11;
  FGetterItem *pFVar12;
  FGetterItem **ppFVar13;
  int iVar14;
  FGetterItem *this;
  FGetterItem *pFVar15;
  FGetterItem *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FGetterItem *local_358;
  FGetterItem *local_348;
  FGetterItem *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar16 = ppFVar13[1];
      pFVar15 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
      this = pFVar15;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1425b7760:
        if (8 < iVar9) {
          pIVar1 = (this->Getter).Ptr;
          pFVar10 = pFVar16 + 1;
          pFVar15 = this + iVar9 / 2;
          pFVar2 = pFVar15->Attribute;
          pIVar3 = (pFVar15->Getter).Ptr;
          pFVar4 = pFVar15->CachedAttributeDescriptor;
          uVar6 = pFVar15->SortOrder;
          iVar7 = pFVar15->AttributeContainerOffset;
          pFVar15->Attribute = this->Attribute;
          (pFVar15->Getter).Ptr = pIVar1;
          uVar5 = this->SortOrder;
          iVar9 = this->AttributeContainerOffset;
          pFVar15->CachedAttributeDescriptor = this->CachedAttributeDescriptor;
          pFVar15->SortOrder = uVar5;
          pFVar15->AttributeContainerOffset = iVar9;
          this->Attribute = pFVar2;
          (this->Getter).Ptr = pIVar3;
          this->CachedAttributeDescriptor = pFVar4;
          this->SortOrder = uVar6;
          this->AttributeContainerOffset = iVar7;
          pFVar15 = this;
LAB_1425b77a0:
          pFVar12 = pFVar15;
          pFVar15 = pFVar12 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x0001425b77a9;
          goto LAB_1425b77c0;
        }
        for (; pFVar10 = this, pFVar15 = this, this < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar12 = pFVar10, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            bVar8 = FSlateAttributeMetaData::FGetterItem::operator<(pFVar12,pFVar15);
            pFVar10 = pFVar15;
            if (!bVar8) {
              pFVar10 = pFVar12;
            }
          }
          pFVar2 = pFVar12->Attribute;
          pIVar1 = (pFVar12->Getter).Ptr;
          pFVar4 = pFVar12->CachedAttributeDescriptor;
          uVar6 = pFVar12->SortOrder;
          iVar9 = pFVar12->AttributeContainerOffset;
          pIVar3 = (pFVar16->Getter).Ptr;
          pFVar12->Attribute = pFVar16->Attribute;
          (pFVar12->Getter).Ptr = pIVar3;
          uVar5 = pFVar16->SortOrder;
          iVar14 = pFVar16->AttributeContainerOffset;
          pFVar12->CachedAttributeDescriptor = pFVar16->CachedAttributeDescriptor;
          pFVar12->SortOrder = uVar5;
          pFVar12->AttributeContainerOffset = iVar14;
          pFVar16->Attribute = pFVar2;
          (pFVar16->Getter).Ptr = pIVar1;
          pFVar16->CachedAttributeDescriptor = pFVar4;
          pFVar16->SortOrder = uVar6;
          pFVar16->AttributeContainerOffset = iVar9;
        }
        goto LAB_1425b78ae;
      }
LAB_1425b789d:
      HeapSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_1425b78ae:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x0001425b77a9:
  bVar8 = FSlateAttributeMetaData::FGetterItem::operator<(this,pFVar15);
  if (!bVar8) goto LAB_1425b77a0;
LAB_1425b77c0:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= this) break;
    bVar8 = FSlateAttributeMetaData::FGetterItem::operator<(pFVar10,this);
  } while (!bVar8);
  pIVar1 = pFVar11[-1].Getter.Ptr;
  if (pFVar15 <= pFVar10) {
    pFVar2 = pFVar15->Attribute;
    pIVar3 = pFVar12[1].Getter.Ptr;
    pFVar4 = pFVar12[1].CachedAttributeDescriptor;
    uVar6 = pFVar12[1].SortOrder;
    iVar7 = pFVar12[1].AttributeContainerOffset;
    pFVar15->Attribute = pFVar10->Attribute;
    pFVar12[1].Getter.Ptr = pIVar1;
    uVar5 = pFVar11[-1].SortOrder;
    iVar9 = pFVar11[-1].AttributeContainerOffset;
    pFVar12[1].CachedAttributeDescriptor = pFVar11[-1].CachedAttributeDescriptor;
    pFVar12[1].SortOrder = uVar5;
    pFVar12[1].AttributeContainerOffset = iVar9;
    pFVar10->Attribute = pFVar2;
    pFVar11[-1].Getter.Ptr = pIVar3;
    pFVar11[-1].CachedAttributeDescriptor = pFVar4;
    pFVar11[-1].SortOrder = uVar6;
    pFVar11[-1].AttributeContainerOffset = iVar7;
    goto LAB_1425b77a0;
  }
  pFVar2 = this->Attribute;
  pIVar3 = (this->Getter).Ptr;
  pFVar4 = this->CachedAttributeDescriptor;
  uVar6 = this->SortOrder;
  iVar7 = this->AttributeContainerOffset;
  this->Attribute = pFVar10->Attribute;
  (this->Getter).Ptr = pIVar1;
  iVar14 = iVar14 + -1;
  uVar5 = pFVar11[-1].SortOrder;
  iVar9 = pFVar11[-1].AttributeContainerOffset;
  this->CachedAttributeDescriptor = pFVar11[-1].CachedAttributeDescriptor;
  this->SortOrder = uVar5;
  this->AttributeContainerOffset = iVar9;
  pFVar10->Attribute = pFVar2;
  pFVar11[-1].Getter.Ptr = pIVar3;
  pFVar11[-1].CachedAttributeDescriptor = pFVar4;
  pFVar11[-1].SortOrder = uVar6;
  pFVar11[-1].AttributeContainerOffset = iVar7;
  if ((longlong)((longlong)pFVar10 + (-0x20 - (longlong)this) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xffffffffffffffe0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar16;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= this + 1) goto LAB_1425b78ae;
    pFVar16 = pFVar11 + -2;
    pFVar15 = this;
  }
  else {
    if (this + 1 < pFVar10) {
      *ppFVar13 = this;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_1425b78ae;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
  this = pFVar15;
  if (iVar14 == 0) goto LAB_1425b789d;
  goto LAB_1425b7760;
}

// IntroSortInternal<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSortPredicate>_> @ 1425b7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSortPredicate>_>
          (FPrerequisiteSort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort,_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSortPredicate>
          param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FPrerequisiteSort *pFVar10;
  FPrerequisiteSort *pFVar11;
  FPrerequisiteSort *pFVar12;
  FPrerequisiteSort **ppFVar13;
  int iVar14;
  FPrerequisiteSort *pFVar15;
  FPrerequisiteSort *pFVar16;
  FPrerequisiteSort *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FPrerequisiteSort *local_358;
  FPrerequisiteSort *local_348;
  FPrerequisiteSort *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xc) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1425b7a60:
        if (8 < iVar9) {
          iVar4 = pFVar15->PrerequisitesIndex;
          pFVar10 = pFVar17 + 1;
          iVar9 = iVar9 / 2;
          iVar5 = pFVar15[iVar9].AttributeIndex;
          iVar6 = pFVar15[iVar9].PrerequisitesIndex;
          iVar3 = pFVar15[iVar9].Depth;
          pFVar15[iVar9].AttributeIndex = pFVar15->AttributeIndex;
          pFVar15[iVar9].PrerequisitesIndex = iVar4;
          pFVar15[iVar9].Depth = pFVar15->Depth;
          pFVar15->AttributeIndex = iVar5;
          pFVar15->PrerequisitesIndex = iVar6;
          pFVar15->Depth = iVar3;
          pFVar16 = pFVar15;
LAB_1425b7aa6:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x0001425b7aaf;
          goto LAB_1425b7ac1;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            bVar7 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
                    FPrerequisiteSortPredicate::operator()(param_4.Predicate,pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (!bVar7) {
              pFVar10 = pFVar12;
            }
          }
          iVar3 = pFVar12->AttributeIndex;
          iVar4 = pFVar12->PrerequisitesIndex;
          iVar14 = pFVar12->Depth;
          iVar9 = pFVar17->PrerequisitesIndex;
          pFVar12->AttributeIndex = pFVar17->AttributeIndex;
          pFVar12->PrerequisitesIndex = iVar9;
          pFVar12->Depth = pFVar17->Depth;
          pFVar17->AttributeIndex = iVar3;
          pFVar17->PrerequisitesIndex = iVar4;
          pFVar17->Depth = iVar14;
        }
        goto LAB_1425b7bf3;
      }
LAB_1425b7bda:
      HeapSortInternal<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,int,FIdentityFunctor,TDereferenceWrapper<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort,_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSortPredicate>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_1425b7bf3:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x0001425b7aaf:
  bVar7 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSortPredicate
          ::operator()(param_4.Predicate,pFVar15,pFVar16);
  if (!bVar7) goto LAB_1425b7aa6;
LAB_1425b7ac1:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    bVar7 = `FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::
            FPrerequisiteSortPredicate::operator()(param_4.Predicate,pFVar10,pFVar15);
  } while (!bVar7);
  uVar1 = pFVar10->AttributeIndex;
  uVar2 = pFVar10->PrerequisitesIndex;
  if (pFVar16 <= pFVar10) {
    iVar3 = pFVar16->AttributeIndex;
    iVar4 = pFVar16->PrerequisitesIndex;
    iVar9 = pFVar12[1].Depth;
    pFVar16->AttributeIndex = uVar1;
    pFVar16->PrerequisitesIndex = uVar2;
    pFVar12[1].Depth = pFVar11[-1].Depth;
    pFVar10->AttributeIndex = iVar3;
    pFVar10->PrerequisitesIndex = iVar4;
    pFVar11[-1].Depth = iVar9;
    goto LAB_1425b7aa6;
  }
  iVar9 = pFVar15->Depth;
  iVar3 = pFVar15->AttributeIndex;
  iVar4 = pFVar15->PrerequisitesIndex;
  iVar14 = iVar14 + -1;
  pFVar15->AttributeIndex = uVar1;
  pFVar15->PrerequisitesIndex = uVar2;
  pFVar15->Depth = pFVar11[-1].Depth;
  pFVar10->AttributeIndex = iVar3;
  pFVar10->PrerequisitesIndex = iVar4;
  pFVar11[-1].Depth = iVar9;
  lVar8 = (longlong)pFVar10 + (-0xc - (longlong)pFVar15);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  if ((lVar8 >> 1) - (lVar8 >> 0x3f) < ((longlong)pFVar17 - (longlong)pFVar16) / 0xc) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_1425b7bf3;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_1425b7bf3;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0xc) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_1425b7bda;
  goto LAB_1425b7a60;
}

// Inverse<TTransform2<float>_> @ 1425b7cd0

TTransform2<float> * __cdecl
Inverse<TTransform2<float>_>(TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar7 = (param_1->M).M[0][1];
  fVar1 = (param_1->M).M[0][0];
  fVar4 = (float)((uint)(param_1->Trans).field0_0x0._s_0.Y ^ __xmm_80000000800000008000000080000000)
  ;
  fVar9 = __real_3f800000 / (fVar1 * (param_1->M).M[1][1] - fVar7 * (param_1->M).M[1][0]);
  fVar8 = fVar9 * (param_1->M).M[1][1];
  fVar6 = (float)((uint)(fVar9 * (param_1->M).M[1][0]) ^ __xmm_80000000800000008000000080000000);
  fVar5 = (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][0] = fVar8;
  fVar5 = (float)((uint)fVar5 ^ uVar3);
  fVar7 = (float)((uint)(fVar9 * fVar7) ^ uVar3);
  fVar9 = fVar9 * fVar1;
  (__return_storage_ptr__->M).M[0][1] = fVar7;
  (__return_storage_ptr__->M).M[1][0] = fVar6;
  (__return_storage_ptr__->M).M[1][1] = fVar9;
  TVar2._s_0.Y = fVar4 * fVar9 + fVar5 * fVar7;
  TVar2._s_0.X = fVar4 * fVar6 + fVar5 * fVar8;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// LowerBoundInternal<FSlateAttributeMetaData::FGetterItem_const_,int,FSlateAttributeMetaData::FGetterItem,FIdentityFunctor,TLess<void>_> @ 1425b7dc0

int __cdecl
AlgoImpl::
LowerBoundInternal<FSlateAttributeMetaData::FGetterItem_const_,int,FSlateAttributeMetaData::FGetterItem,FIdentityFunctor,TLess<void>_>
          (FGetterItem *param_1,int param_2,FGetterItem *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = FSlateAttributeMetaData::FGetterItem::operator<(param_1 + iVar1,param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// MakeRequiredArgs<TSharedRef<SWindow,1>_> @ 1425b7e40

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<TSharedRef<SWindow,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SWindow,1>_>(TSharedRef<SWindow,1> *param_1)

{
  SWindow *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SWindow,1>_&&>)param_1;
}

// MakeShared<FSlateAttributeMetaData,1> @ 1425b7e50

TSharedRef<FSlateAttributeMetaData,1> * __cdecl
MakeShared<FSlateAttributeMetaData,1>(TSharedRef<FSlateAttributeMetaData,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FSlateAttributeMetaData,1> *pTVar4;
  
  pTVar3 = operator_new(0xb0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSlateAttributeMetaData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSlateAttributeMetaData___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0xa0);
    pTVar3[1]._padding_ = (longlong)&___7FSlateAttributeMetaData__6B_;
    *(undefined4 *)((longlong)&pTVar3[10]._padding_ + 4) = 4;
    __return_storage_ptr__->Object = (FSlateAttributeMetaData *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FSlateAttributeMetaData *)(pTVar3 + 1) == (FSlateAttributeMetaData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FSlateAttributeMetaData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> @ 1425b7f30

TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> @ 1425b7fe0

TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> @ 1425b8090

TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs> @ 1425b8140

TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> @ 1425b81f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> * __cdecl
MakeTDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
          (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SWindow,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> @ 1425b82a0

TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> @ 1425b8350

TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> @ 1425b8400

TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs> @ 1425b84b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Merge<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,`SOverlay::Construct'::__l2::<lambda_1>_>_> @ 1425b8560

void __cdecl
AlgoImpl::
Merge<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_SOverlay::Construct_::__l2::<lambda_1>_>_>
          (FSlotArguments *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_public:_void___cdecl_SOverlay::Construct(SOverlay::FArguments_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  TOptional<int> TVar11;
  TOptional<int> TVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FSlotArguments *pFVar19;
  FSlotArguments *pFVar20;
  FSlotArguments *pFVar21;
  int iVar22;
  int iVar23;
  FSlotArguments *pFVar24;
  FSlotArguments *pFVar26;
  longlong lVar27;
  FSlotArguments *pFVar25;
  
  if (0 < param_2) {
    iVar22 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      lVar27 = (longlong)param_2;
      iVar18 = 0;
      if (0 < param_2 - iVar22) {
        uVar16 = param_2 - iVar22;
        do {
          iVar14 = (uVar16 >> 1) + iVar18;
          lVar15 = (longlong)iVar14 + (longlong)iVar22;
          if (param_1[lVar27]._ZOrder.bIsSet == false) {
            iVar17 = 0;
          }
          else {
            iVar17 = param_1[lVar27]._ZOrder.TypedValue;
          }
          if (param_1[lVar15]._ZOrder.bIsSet == false) {
            iVar23 = 0;
          }
          else {
            iVar23 = param_1[lVar15]._ZOrder.TypedValue;
          }
          if (iVar23 <= iVar17) {
            iVar18 = iVar14 + (uVar16 & 1);
          }
          uVar13 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar13 != 0);
      }
      iVar22 = iVar22 + iVar18;
      if (param_2 <= iVar22) {
        return;
      }
      iVar18 = 0;
      pFVar19 = param_1 + iVar22;
      if (0 < param_3 - param_2) {
        uVar16 = param_3 - param_2;
        iVar18 = 0;
        do {
          uVar13 = uVar16 >> 1;
          lVar15 = (int)(uVar13 + iVar18) + lVar27;
          if (param_1[lVar15]._ZOrder.bIsSet == false) {
            iVar14 = 0;
          }
          else {
            iVar14 = param_1[lVar15]._ZOrder.TypedValue;
          }
          if ((pFVar19->_ZOrder).bIsSet == false) {
            iVar17 = 0;
          }
          else {
            iVar17 = (pFVar19->_ZOrder).TypedValue;
          }
          if (iVar14 < iVar17) {
            iVar18 = uVar13 + iVar18 + (uVar16 & 1);
          }
          uVar16 = uVar13;
        } while (uVar13 != 0);
      }
      iVar17 = (iVar18 - iVar22) + param_2;
      iVar14 = param_2 - iVar22;
      if ((iVar14 != 0) && (iVar14 < iVar17)) {
        pFVar20 = pFVar19;
        pFVar24 = pFVar19 + iVar14;
        pFVar25 = pFVar19 + iVar14;
        do {
          while( true ) {
            pFVar26 = pFVar24 + 1;
            pFVar21 = pFVar20 + 1;
            lVar27 = pFVar24->_padding_;
            lVar15 = pFVar20->_padding_;
            lVar1 = pFVar20->_padding_;
            lVar2 = pFVar20->_padding_;
            lVar3 = pFVar20->_padding_;
            lVar4 = pFVar20->_padding_;
            lVar5 = pFVar20->_padding_;
            lVar6 = pFVar20->_padding_;
            lVar7 = pFVar20->_padding_;
            lVar8 = pFVar20->_padding_;
            lVar9 = pFVar20->_padding_;
            lVar10 = pFVar20->_padding_;
            TVar11 = pFVar20->_ZOrder;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_padding_ = lVar27;
            lVar27 = pFVar24->_padding_;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_padding_ = lVar27;
            lVar27 = pFVar24->_padding_;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_padding_ = lVar27;
            lVar27 = pFVar24->_padding_;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_padding_ = lVar27;
            lVar27 = pFVar24->_padding_;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_padding_ = lVar27;
            TVar12 = pFVar24->_ZOrder;
            pFVar20->_padding_ = pFVar24->_padding_;
            pFVar20->_ZOrder = TVar12;
            pFVar24->_padding_ = lVar15;
            pFVar24->_padding_ = lVar1;
            pFVar24->_padding_ = lVar2;
            pFVar24->_padding_ = lVar3;
            pFVar24->_padding_ = lVar4;
            pFVar24->_padding_ = lVar5;
            pFVar24->_padding_ = lVar6;
            pFVar24->_padding_ = lVar7;
            pFVar24->_padding_ = lVar8;
            pFVar24->_padding_ = lVar9;
            pFVar24->_padding_ = lVar10;
            pFVar24->_ZOrder = TVar11;
            pFVar20 = pFVar21;
            if (pFVar26 == pFVar19 + iVar17) break;
            pFVar24 = pFVar26;
            if (pFVar21 == pFVar25) {
              pFVar25 = pFVar26;
            }
          }
          pFVar24 = pFVar25;
        } while (pFVar21 != pFVar25);
      }
      param_2 = param_2 + iVar18;
      iVar22 = iVar22 + 1 + iVar18;
    } while (iVar22 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort>_> @ 1425b8ae0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
          (ushort param_1,
          ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
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
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>_> @ 1425b8bb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
          (ushort param_1,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
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
    ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>_> @ 1425b8c80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
          (ushort param_1,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
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
    ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort>_> @ 1425b8ff0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FSlateAttributeDescriptor::FInitializer::~FInitializer_::__l2::FPrerequisiteSort>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_public:___cdecl_FSlateAttributeDescriptor::FInitializer::~FInitializer(void)_::_2_::FPrerequisiteSort>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>_> @ 1425b9070

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
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
    ForElementType<`ArrangeChildrenInStack<1,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>_> @ 1425b90f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>_::__l2::FStretchItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>(EFlowDirection,TPanelChildren<SBoxPanel::FSlot>_const_&,FGeometry_const_&,FArrangedChildren_&,float,bool,UE::Math::TVector2<double>_&)_::_2_::FStretchItem>
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
    ForElementType<`ArrangeChildrenInStack<0,TPanelChildren<SBoxPanel::FSlot>,SBoxPanel::FSlot>'::__l2::FStretchItem>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Recursive<`FSlateChildrenForEachTest::RunTest'::__l5::<lambda_2>_> @ 1425b9220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l5::<lambda_2>_>
          (SWidget *param_1,<lambda_2> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  SWidget *local_18;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x188))();
  if (*(char *)((longlong)plVar3 + 0x19) != -0x24) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar1 = plVar3[3];
  *(undefined1 *)(plVar3 + 3) = 1;
  iVar2 = (**(code **)*plVar3)(plVar3);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_28,iVar4);
      *param_2->Count = *param_2->Count + 1;
      Recursive<_FSlateChildrenForEachTest::RunTest_::__l5::<lambda_2>_>(local_18,param_2);
      if (local_28 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *(char *)(plVar3 + 3) = (char)lVar1;
  return;
}

// Recursive<`FSlateChildrenForEachTest::RunTest'::__l8::<lambda_4>_> @ 1425b92f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l8::<lambda_4>_>
          (SWidget *param_1,<lambda_4> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  SWidget *local_18;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x188))();
  if (*(char *)((longlong)plVar3 + 0x19) != -0x24) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar1 = plVar3[3];
  *(undefined1 *)(plVar3 + 3) = 1;
  iVar2 = (**(code **)*plVar3)(plVar3);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_28,iVar4);
      *param_2->Count = *param_2->Count + 1;
      Recursive<_FSlateChildrenForEachTest::RunTest_::__l8::<lambda_4>_>(local_18,param_2);
      if (local_28 != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *(char *)(plVar3 + 3) = (char)lVar1;
  return;
}

// RotateInternal<SOverlay::FOverlaySlot::FSlotArguments> @ 1425b9d10

int __cdecl
AlgoImpl::RotateInternal<SOverlay::FOverlaySlot::FSlotArguments>
          (FSlotArguments *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  TOptional<int> TVar13;
  TOptional<int> TVar14;
  FSlotArguments *pFVar15;
  FSlotArguments *pFVar17;
  FSlotArguments *pFVar18;
  FSlotArguments *pFVar19;
  FSlotArguments *pFVar16;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar15 = param_1 + param_3;
    pFVar18 = param_1;
    pFVar16 = param_1 + param_3;
    do {
      while( true ) {
        pFVar17 = pFVar15 + 1;
        pFVar19 = pFVar18 + 1;
        lVar1 = pFVar15->_padding_;
        lVar2 = pFVar18->_padding_;
        lVar3 = pFVar18->_padding_;
        lVar4 = pFVar18->_padding_;
        lVar5 = pFVar18->_padding_;
        lVar6 = pFVar18->_padding_;
        lVar7 = pFVar18->_padding_;
        lVar8 = pFVar18->_padding_;
        lVar9 = pFVar18->_padding_;
        lVar10 = pFVar18->_padding_;
        lVar11 = pFVar18->_padding_;
        lVar12 = pFVar18->_padding_;
        TVar13 = pFVar18->_ZOrder;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_padding_ = lVar1;
        lVar1 = pFVar15->_padding_;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_padding_ = lVar1;
        lVar1 = pFVar15->_padding_;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_padding_ = lVar1;
        lVar1 = pFVar15->_padding_;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_padding_ = lVar1;
        lVar1 = pFVar15->_padding_;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_padding_ = lVar1;
        TVar14 = pFVar15->_ZOrder;
        pFVar18->_padding_ = pFVar15->_padding_;
        pFVar18->_ZOrder = TVar14;
        pFVar15->_padding_ = lVar2;
        pFVar15->_padding_ = lVar3;
        pFVar15->_padding_ = lVar4;
        pFVar15->_padding_ = lVar5;
        pFVar15->_padding_ = lVar6;
        pFVar15->_padding_ = lVar7;
        pFVar15->_padding_ = lVar8;
        pFVar15->_padding_ = lVar9;
        pFVar15->_padding_ = lVar10;
        pFVar15->_padding_ = lVar11;
        pFVar15->_padding_ = lVar12;
        pFVar15->_ZOrder = TVar13;
        pFVar18 = pFVar19;
        if (pFVar17 == param_1 + param_2) break;
        pFVar15 = pFVar17;
        if (pFVar19 == pFVar16) {
          pFVar16 = pFVar17;
        }
      }
      pFVar15 = pFVar16;
    } while (pFVar19 != pFVar16);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,`SOverlay::Construct'::__l2::<lambda_1>_>_> @ 1425b9e00

void __cdecl
AlgoImpl::
StableSortInternal<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_SOverlay::Construct_::__l2::<lambda_1>_>_>
          (FSlotArguments *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_public:_void___cdecl_SOverlay::Construct(SOverlay::FArguments_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TOptional<int> TVar12;
  bool *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  if (0 < param_2) {
    pbVar13 = &(param_1->_ZOrder).bIsSet;
    lVar19 = ((longlong)param_2 - 1U >> 1) + 1;
    iVar14 = 1;
    do {
      if (iVar14 < param_2) {
        if (pbVar13[0x60] == false) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)(pbVar13 + 0x5c);
        }
        if (*pbVar13 == false) {
          iVar16 = 0;
        }
        else {
          iVar16 = ((TOptional<int> *)(pbVar13 + -4))->TypedValue;
        }
        if (iVar17 < iVar16) {
          uVar1 = *(undefined8 *)(pbVar13 + -0x5c);
          uVar2 = *(undefined8 *)(pbVar13 + -0x54);
          uVar3 = *(undefined8 *)(pbVar13 + -0x4c);
          uVar4 = *(undefined8 *)(pbVar13 + -0x44);
          uVar5 = *(undefined8 *)(pbVar13 + -0x3c);
          uVar6 = *(undefined8 *)(pbVar13 + -0x34);
          uVar7 = *(undefined8 *)(pbVar13 + -0x2c);
          uVar8 = *(undefined8 *)(pbVar13 + -0x24);
          uVar9 = *(undefined8 *)(pbVar13 + -0x1c);
          uVar10 = *(undefined8 *)(pbVar13 + -0x14);
          uVar11 = *(undefined8 *)(pbVar13 + -0xc);
          TVar12 = *(TOptional<int> *)(pbVar13 + -4);
          *(undefined8 *)(pbVar13 + -0x5c) = *(undefined8 *)(pbVar13 + 4);
          *(undefined8 *)(pbVar13 + -0x54) = *(undefined8 *)(pbVar13 + 0xc);
          *(undefined8 *)(pbVar13 + -0x4c) = *(undefined8 *)(pbVar13 + 0x14);
          *(undefined8 *)(pbVar13 + -0x44) = *(undefined8 *)(pbVar13 + 0x1c);
          *(undefined8 *)(pbVar13 + -0x3c) = *(undefined8 *)(pbVar13 + 0x24);
          *(undefined8 *)(pbVar13 + -0x34) = *(undefined8 *)(pbVar13 + 0x2c);
          *(undefined8 *)(pbVar13 + -0x2c) = *(undefined8 *)(pbVar13 + 0x34);
          *(undefined8 *)(pbVar13 + -0x24) = *(undefined8 *)(pbVar13 + 0x3c);
          *(undefined8 *)(pbVar13 + -0x1c) = *(undefined8 *)(pbVar13 + 0x44);
          *(undefined8 *)(pbVar13 + -0x14) = *(undefined8 *)(pbVar13 + 0x4c);
          *(undefined8 *)(pbVar13 + -0xc) = *(undefined8 *)(pbVar13 + 0x54);
          *(TOptional<int> *)(pbVar13 + -4) = *(TOptional<int> *)(pbVar13 + 0x5c);
          *(undefined8 *)(pbVar13 + 4) = uVar1;
          *(undefined8 *)(pbVar13 + 0xc) = uVar2;
          *(undefined8 *)(pbVar13 + 0x14) = uVar3;
          *(undefined8 *)(pbVar13 + 0x1c) = uVar4;
          *(undefined8 *)(pbVar13 + 0x24) = uVar5;
          *(undefined8 *)(pbVar13 + 0x2c) = uVar6;
          *(undefined8 *)(pbVar13 + 0x34) = uVar7;
          *(undefined8 *)(pbVar13 + 0x3c) = uVar8;
          *(undefined8 *)(pbVar13 + 0x44) = uVar9;
          *(undefined8 *)(pbVar13 + 0x4c) = uVar10;
          *(undefined8 *)(pbVar13 + 0x54) = uVar11;
          *(TOptional<int> *)(pbVar13 + 0x5c) = TVar12;
        }
      }
      iVar14 = iVar14 + 2;
      pbVar13 = pbVar13 + 0xc0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  iVar14 = 2;
  if (2 < param_2) {
    do {
      iVar17 = iVar14 * 2;
      iVar15 = 0;
      iVar16 = param_2;
      do {
        iVar18 = iVar16;
        if (iVar17 <= iVar16) {
          iVar18 = iVar17;
        }
        Merge<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_SOverlay::Construct_::__l2::<lambda_1>_>_>
                  (param_1 + iVar15,iVar14,iVar18,param_3,param_4);
        iVar15 = iVar15 + iVar17;
        iVar16 = iVar16 + iVar14 * -2;
      } while (iVar15 < param_2);
      iVar14 = iVar17;
    } while (iVar17 < param_2);
  }
  return;
}

// TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_> @ 1425ba050

TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_private:_void___cdecl_FSlateAttributeDescriptor::OverrideOnValueChanged(FName,FName,FSlateAttributeDescriptor::ECallbackOverrideType,TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>)_::_20_::<lambda_3>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_private:_void___cdecl_FSlateAttributeDescriptor::OverrideOnValueChanged(FName,FName,FSlateAttributeDescriptor::ECallbackOverrideType,TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>)_::_20_::<lambda_3>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::`20'::<lambda_3>_>
        ::_vftable_;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ((TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             ((longlong)this + 0x18),&(param_1->Functor).Previous);
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
            ((TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             ((longlong)this + 0x28),&(param_1->Functor).Callback);
  *(ECallbackOverrideType *)((longlong)this + 0x38) = (param_1->Functor).OverrideType;
  return this;
}

// operator== @ 1425c2f40

bool __cdecl
operator==(TOptional<TTransform2<float>_> *param_1,TOptional<TTransform2<float>_> *param_2)

{
  if (param_1->bIsSet != param_2->bIsSet) {
    return false;
  }
  if (param_1->bIsSet != false) {
    if (__real_38d1b717 <
        (float)((uint)((param_1->TypedValue).M.M[0][0] - (param_2->TypedValue).M.M[0][0]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    if (__real_38d1b717 <
        (float)((uint)((param_1->TypedValue).M.M[0][1] - (param_2->TypedValue).M.M[0][1]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    if (__real_38d1b717 <
        (float)((uint)((param_1->TypedValue).M.M[1][0] - (param_2->TypedValue).M.M[1][0]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    if (__real_38d1b717 <
        (float)((uint)((param_1->TypedValue).M.M[1][1] - (param_2->TypedValue).M.M[1][1]) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    if ((param_2->TypedValue).Trans.field0_0x0._s_0.X !=
        (param_1->TypedValue).Trans.field0_0x0._s_0.X) {
      return false;
    }
    if ((param_2->TypedValue).Trans.field0_0x0._s_0.Y !=
        (param_1->TypedValue).Trans.field0_0x0._s_0.Y) {
      return false;
    }
  }
  return true;
}

// TVector2<float>_* @ 1425c3390

TVector2<float> * __thiscall
UE::Slate::FDeprecateSlateVectorPtrVariant::operator_UE::Math::TVector2<float>__(void *this)

{
  return *(TVector2<float> **)this;
}

// TVector2<float>_const_* @ 1425c33a0

TVector2<float> * __thiscall
UE::Slate::FDeprecateSlateVectorPtrVariant::operator_UE::Math::TVector2<float>_const__(void *this)

{
  return *(TVector2<float> **)this;
}

// TVector2<double>_const_* @ 1425c33b0

TVector2<double> * __thiscall
UE::Slate::FDeprecateSlateVectorPtrVariant::operator_UE::Math::TVector2<double>_const__(void *this)

{
  float fVar1;
  
  fVar1 = (*(float **)this)[1];
  (((TVector2<double> *)((longlong)this + 8))->field0_0x0)._s_0.X = (double)**(float **)this;
  *(double *)((longlong)this + 0x10) = (double)fVar1;
  return (TVector2<double> *)((longlong)this + 8);
}

// operator() @ 1425c3680

void __thiscall
`LexTryParseString'::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined4 uStack_c;
  
  pwVar6 = param_1->DataPtr;
  iVar4 = 0;
  pwVar1 = pwVar6 + param_1->Size;
  while ((pwVar6 != pwVar1 && (iVar2 = iswspace(*pwVar6), iVar2 != 0))) {
    iVar4 = iVar4 + 1;
    pwVar6 = pwVar6 + 1;
  }
  pwVar1 = param_1->DataPtr;
  iVar2 = param_1->Size - iVar4;
  if (iVar2 != 0) {
    lVar5 = (longlong)iVar2;
    do {
      iVar3 = iswspace((pwVar1 + iVar4)[lVar5 + -1]);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  param_1->DataPtr = pwVar1 + iVar4;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_c,iVar2);
  if ((((param_1->Size == 0) ||
       (iVar4 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"All",(longlong)param_1->Size),
       iVar4 != 0)) || (L"All"[param_1->Size] != L'\0')) &&
     (((param_1->Size == 0 ||
       (iVar4 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"Any",(longlong)param_1->Size),
       iVar4 != 0)) || (L"Any"[param_1->Size] != L'\0')))) {
    if (((param_1->Size == 0) ||
        (iVar4 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"None",(longlong)param_1->Size)
        , iVar4 != 0)) || (*(short *)(&u_None + (longlong)param_1->Size * 2) != 0)) {
      if (((param_1->Size == 0) ||
          (iVar4 = FGenericPlatformStricmp::Strnicmp
                             (param_1->DataPtr,L"Layout",(longlong)param_1->Size), iVar4 != 0)) ||
         (L"Layout"[param_1->Size] != L'\0')) {
        if (((param_1->Size == 0) ||
            (iVar4 = FGenericPlatformStricmp::Strnicmp
                               (param_1->DataPtr,L"Paint",(longlong)param_1->Size), iVar4 != 0)) ||
           (L"Paint"[param_1->Size] != L'\0')) {
          if (((param_1->Size == 0) ||
              (iVar4 = FGenericPlatformStricmp::Strnicmp
                                 (param_1->DataPtr,L"Volatility",(longlong)param_1->Size),
              iVar4 != 0)) || (L"Volatility"[param_1->Size] != L'\0')) {
            if (((param_1->Size == 0) ||
                (iVar4 = FGenericPlatformStricmp::Strnicmp
                                   (param_1->DataPtr,L"ChildOrder",(longlong)param_1->Size),
                iVar4 != 0)) || (L"ChildOrder"[param_1->Size] != L'\0')) {
              if (((param_1->Size == 0) ||
                  (iVar4 = FGenericPlatformStricmp::Strnicmp
                                     (param_1->DataPtr,L"RenderTransform",(longlong)param_1->Size),
                  iVar4 != 0)) || (L"RenderTransform"[param_1->Size] != L'\0')) {
                if (((param_1->Size == 0) ||
                    (iVar4 = FGenericPlatformStricmp::Strnicmp
                                       (param_1->DataPtr,L"Visibility",(longlong)param_1->Size),
                    iVar4 != 0)) || (L"Visibility"[param_1->Size] != L'\0')) {
                  if (((param_1->Size == 0) ||
                      (iVar4 = FGenericPlatformStricmp::Strnicmp
                                         (param_1->DataPtr,L"AttributeRegistration",
                                          (longlong)param_1->Size), iVar4 != 0)) ||
                     (L"AttributeRegistration"[param_1->Size] != L'\0')) {
                    if (((param_1->Size == 0) ||
                        (iVar4 = FGenericPlatformStricmp::Strnicmp
                                           (param_1->DataPtr,L"Prepass",(longlong)param_1->Size),
                        iVar4 != 0)) || (L"Prepass"[param_1->Size] != L'\0')) {
                      **(undefined1 **)this = 0;
                    }
                    else {
                      **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 0x80;
                    }
                  }
                  else {
                    **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 0x40;
                  }
                }
                else {
                  **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 0x20;
                }
              }
              else {
                **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 0x10;
              }
            }
            else {
              **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 8;
            }
          }
          else {
            **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 4;
          }
        }
        else {
          **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 2;
        }
      }
      else {
        **(byte **)((longlong)this + 8) = **(byte **)((longlong)this + 8) | 1;
      }
    }
  }
  else {
    **(undefined1 **)((longlong)this + 8) = 0xff;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1425c50b4

/* [thunk]:public: virtual void * __ptr64 __cdecl
   TSingleWidgetChildrenWithBasicLayoutSlot<0>::`vector deleting destructor'`adjustor{32}' (unsigned
   int) __ptr64 */

void * __thiscall
TSingleWidgetChildrenWithBasicLayoutSlot<0>::_vector_deleting_destructor__adjustor_32__
          (TSingleWidgetChildrenWithBasicLayoutSlot<0> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSingleWidgetChildrenWithBasicLayoutSlot<0> *)&this[-1].field_0x38,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1425c50c4

/* [thunk]:public: virtual void * __ptr64 __cdecl TSingleWidgetChildrenWithSlot<class
   TSingleWidgetChildrenWithBasicLayoutSlot<0> >::`vector deleting destructor'`adjustor{32}'
   (unsigned int) __ptr64 */

void * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
_vector_deleting_destructor__adjustor_32__
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *
                      )&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1425c50d4

/* [thunk]:public: virtual void * __ptr64 __cdecl TSingleWidgetChildrenWithSlot<class
   FSingleWidgetChildrenWithSlot>::`vector deleting destructor'`adjustor{32}' (unsigned int) __ptr64
    */

void * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::
_vector_deleting_destructor__adjustor_32__
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *)
                      &this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1425c50e4

/* [thunk]:public: virtual void * __ptr64 __cdecl
   SCompoundWidget::FCompoundWidgetOneChildSlot::`vector deleting destructor'`adjustor{32}'
   (unsigned int) __ptr64 */

void * __thiscall
SCompoundWidget::FCompoundWidgetOneChildSlot::_vector_deleting_destructor__adjustor_32__
          (FCompoundWidgetOneChildSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FCompoundWidgetOneChildSlot *)&this[-1].field_0x38,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 1425c50f4

/* [thunk]:public: virtual void * __ptr64 __cdecl FSingleWidgetChildrenWithSlot::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FSingleWidgetChildrenWithSlot::_vector_deleting_destructor__adjustor_32__
          (FSingleWidgetChildrenWithSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSingleWidgetChildrenWithSlot *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 1425c5104

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SWindow::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall SWindow::_vector_deleting_destructor__adjustor_680__(SWindow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SWindow *)&this[-1].Morpher.Sequence.TickerHandle.WeakReferenceCount,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1425c5120

void * __thiscall
SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::_scalar_deleting_destructor_
          (FScopedWidgetSlotArguments<SVerticalBox::FSlot> *this,uint param_1)

{
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5160

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>_>
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

// `scalar_deleting_destructor' @ 1425c51c0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// `scalar_deleting_destructor' @ 1425c5220

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c5280

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c52e0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c5340

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c53a0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c5400

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>_>
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

// `scalar_deleting_destructor' @ 1425c5460

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c54c0

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_
          (FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
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

// `scalar_deleting_destructor' @ 1425c5520

void * __thiscall
IBaseDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5550

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>::~<lambda_3>
            ((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c55c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWindow_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWindow_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy,bool>
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

// `scalar_deleting_destructor' @ 1425c5620

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWindow,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1425c5680

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWindow,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWindow,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 1425c56e0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5710

void * __thiscall
TBasicLayoutWidgetSlot<SOverlay::FOverlaySlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SOverlay::FOverlaySlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5790

void * __thiscall
TBasicLayoutWidgetSlot<SVerticalBox::FSlot>::_scalar_deleting_destructor_
          (TBasicLayoutWidgetSlot<SVerticalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5810

void * __thiscall
TCommonDelegateInstanceState<FMargin___cdecl(void),FDefaultDelegateUserPolicy,bool>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FMargin___cdecl(void),FDefaultDelegateUserPolicy,bool> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5840

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5870

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FSlateTrace::WidgetInvalidated'::__l20::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c58d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSlateTrace::WidgetInvalidated'::__l20::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActiveTimerHandle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FActiveTimerHandle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::FActiveTimersMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::FActiveTimersMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateAttributeMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateAttributeMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c59d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateCursorMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateCursorMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5a10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateMouseEventsMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateMouseEventsMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5a50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateToolTipMetaData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateToolTipMetaData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5a90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::SEmptyLeftWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Private::SEmptyLeftWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5ad0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SEmptyLeftWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Test::Private::SEmptyLeftWidget,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5b10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNullWidgetContent,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SNullWidgetContent,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5b50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SOverlay,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SOverlay,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5b90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopupLayer,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SPopupLayer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5bd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SSingleChild,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Test::Private::SSingleChild,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5c10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVerticalBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SVerticalBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5c50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Test::Private::SWeakChild,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Test::Private::SWeakChild,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5c90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindow,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWindow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x750);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5cd0

void * __thiscall
TPanelChildren<FPopupLayerSlot>::_scalar_deleting_destructor_
          (TPanelChildren<FPopupLayerSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_>,int>
            ((TUniquePtr<FPopupLayerSlot,TDefaultDelete<FPopupLayerSlot>_> *)
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

// `scalar_deleting_destructor' @ 1425c5d30

void * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::_scalar_deleting_destructor_
          (TPanelChildren<SOverlay::FOverlaySlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,int>
            ((TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *)
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

// `scalar_deleting_destructor' @ 1425c5d90

void * __thiscall
TPanelChildren<SBoxPanel::FSlot>::_scalar_deleting_destructor_
          (TPanelChildren<SBoxPanel::FSlot> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,int>
            ((TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *)
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

// `scalar_deleting_destructor' @ 1425c5df0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOverlayPopupLayer,SharedPointerInternals::DefaultDeleter<FOverlayPopupLayer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOverlayPopupLayer,SharedPointerInternals::DefaultDeleter<FOverlayPopupLayer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5e30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateAccessibleWidget,SharedPointerInternals::DefaultDeleter<FSlateAccessibleWidget>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateAccessibleWidget,SharedPointerInternals::DefaultDeleter<FSlateAccessibleWidget>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5e70

void * __thiscall
TSingleWidgetChildrenWithBasicLayoutSlot<0>::_scalar_deleting_destructor_
          (TSingleWidgetChildrenWithBasicLayoutSlot<0> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5ec0

void * __thiscall
TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
_scalar_deleting_destructor_
          (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,
          uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5f10

void * __thiscall
TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot>::_scalar_deleting_destructor_
          (TSingleWidgetChildrenWithSlot<FSingleWidgetChildrenWithSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5f60

void * __thiscall
SBoxPanel::TSlot<SVerticalBox::FSlot>::_scalar_deleting_destructor_
          (TSlot<SVerticalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c5fe0

void * __thiscall
TSlotBase<FPopupLayerSlot>::_scalar_deleting_destructor_
          (TSlotBase<FPopupLayerSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6020

void * __thiscall
TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::_scalar_deleting_destructor_
          (TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6060

void * __thiscall
TSlotBase<SOverlay::FOverlaySlot>::_scalar_deleting_destructor_
          (TSlotBase<SOverlay::FOverlaySlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c60a0

void * __thiscall
TSlotBase<FSingleWidgetChildrenWithSlot>::_scalar_deleting_destructor_
          (TSlotBase<FSingleWidgetChildrenWithSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c60e0

void * __thiscall
TSlotBase<SVerticalBox::FSlot>::_scalar_deleting_destructor_
          (TSlotBase<SVerticalBox::FSlot> *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6120

void * __thiscall
TWeakChild<SWidget>::_scalar_deleting_destructor_(TWeakChild<SWidget> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->WidgetPtr).WeakReferenceCount.ReferenceController;
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
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6190

void * __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6210

void * __thiscall
TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::_scalar_deleting_destructor_
          (TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6290

void * __thiscall
UE::Slate::FActiveTimersMetaData::_scalar_deleting_destructor_
          (FActiveTimersMetaData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<FActiveTimerHandle,1>,int>
            ((TSharedRef<FActiveTimerHandle,1> *)(this->ActiveTimers).AllocatorInstance.Data,
             (this->ActiveTimers).ArrayNum);
  pFVar1 = (this->ActiveTimers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c62f0

void * __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~FChildOrderInvalidationCallback_RemoveG(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6330

void * __thiscall
SCompoundWidget::FCompoundWidgetOneChildSlot::_scalar_deleting_destructor_
          (FCompoundWidgetOneChildSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6380

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FOverlayPopupLayer::_scalar_deleting_destructor_(FOverlayPopupLayer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Overlay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostWindow).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FPopupLayer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6410

void * __thiscall
SOverlay::FOverlaySlot::_scalar_deleting_destructor_(FOverlaySlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  this->_padding_ =
       (longlong)
       &TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->_padding_);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6490

void * __thiscall FPopupLayer::_scalar_deleting_destructor_(FPopupLayer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FPopupLayer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PopupContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostWidget).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
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

// `scalar_deleting_destructor' @ 1425c6510

void * __thiscall FPopupLayerSlot::_scalar_deleting_destructor_(FPopupLayerSlot *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClampBuffer_Attribute).Getter);
  pvVar1 = *(void **)&(this->ClampBuffer_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClampBuffer_Attribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Clamp_Attribute).Getter);
  pvVar1 = *(void **)&(this->Clamp_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Clamp_Attribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Scale_Attribute).Getter);
  pvVar1 = *(void **)&(this->Scale_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Scale_Attribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HeightOverride_Attribute).Getter);
  pvVar1 = *(void **)&(this->HeightOverride_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HeightOverride_Attribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidthOverride_Attribute).Getter);
  pvVar1 = *(void **)&(this->WidthOverride_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidthOverride_Attribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DesktopPosition_Attribute).Getter)
  ;
  pvVar1 = *(void **)&(this->DesktopPosition_Attribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DesktopPosition_Attribute).Getter);
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6640

void * __thiscall
FSingleWidgetChildrenWithSlot::_scalar_deleting_destructor_
          (FSingleWidgetChildrenWithSlot *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&this->field_0x20);
  FChildren::~FChildren((FChildren *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6690

void * __thiscall
FSlateAccessibleImage::_scalar_deleting_destructor_(FSlateAccessibleImage *this,uint param_1)

{
  *(undefined ***)this = &___7FSlateAccessibleImage__6B_;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c66e0

void * __thiscall
FSlateAccessibleMessageHandler::_scalar_deleting_destructor_
          (FSlateAccessibleMessageHandler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueCriticalSection);
  DestructItems<FSlateAccessibleMessageHandler::FSlateAccessibleTask,int>
            ((FSlateAccessibleTask *)(this->AccessibleTaskProcessingQueue).AllocatorInstance.Data,
             (this->AccessibleTaskProcessingQueue).ArrayNum);
  pFVar1 = (this->AccessibleTaskProcessingQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSlateAccessibleMessageHandler::FSlateAccessibleTask,int>
            ((FSlateAccessibleTask *)(this->AccessibleTaskStorageQueue).AllocatorInstance.Data,
             (this->AccessibleTaskStorageQueue).ArrayNum);
  pFVar1 = (this->AccessibleTaskStorageQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSlateAccessibleMessageHandler::FWidgetAndParent,int>
            ((FWidgetAndParent *)(this->ToProcess).AllocatorInstance.Data,(this->ToProcess).ArrayNum
            );
  pFVar1 = (this->ToProcess).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGenericAccessibleMessageHandler__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c67c0

void * __thiscall
FSlateAccessibleWidget::_scalar_deleting_destructor_(FSlateAccessibleWidget *this,uint param_1)

{
  ~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6800

void * __thiscall
FSlateAccessibleWindow::_scalar_deleting_destructor_(FSlateAccessibleWindow *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleWindow__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6850

void * __thiscall
FSlateAttributeMetaData::_scalar_deleting_destructor_(FSlateAttributeMetaData *this,uint param_1)

{
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar1;
  
  FVar1 = (this->Attributes).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar1 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&this->Attributes;
  }
  DestructItems<FSlateAttributeMetaData::FGetterItem,int>
            ((FGetterItem *)FVar1,(this->Attributes).ArrayNum);
  FVar1 = (this->Attributes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c68d0

void * __thiscall
FSlateControlledConstruction::_scalar_deleting_destructor_
          (FSlateControlledConstruction *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6910

void * __thiscall
FSlateCursorMetaData::_scalar_deleting_destructor_(FSlateCursorMetaData *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Cursor).Getter);
  pvVar1 = *(void **)&(this->Cursor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Cursor).Getter);
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6980

void * __thiscall
FSlateMouseEventsMetaData::_scalar_deleting_destructor_
          (FSlateMouseEventsMetaData *this,uint param_1)

{
  ~FSlateMouseEventsMetaData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c69c0

void * __thiscall
FSlateTextureAtlas::_scalar_deleting_destructor_(FSlateTextureAtlas *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSlateTextureAtlas__6B_;
  EmptyAtlasData(this);
  pFVar1 = (this->AtlasEmptySlotsMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtlasData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6a30

void * __thiscall
FSlateToolTipMetaData::_scalar_deleting_destructor_(FSlateToolTipMetaData *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter);
  pvVar1 = *(void **)&(this->ToolTip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTip).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToolTip).Value.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6ab0

void * __thiscall SVerticalBox::FSlot::_scalar_deleting_destructor_(FSlot *this,uint param_1)

{
  SWidget *pSVar1;
  
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6b30

void * __thiscall
FTrackedMetaData::_scalar_deleting_destructor_(FTrackedMetaData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSlateWidgetTracker *this_00;
  
  this->_padding_ = (longlong)&___7FTrackedMetaData__6B_;
  FSlateWidgetTracker::Get();
  iVar2 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if (iVar2 == 1) {
    this_00 = FSlateWidgetTracker::Get();
    FSlateWidgetTracker::RemoveTrackedWidget(this_00,this->TrackedWidget);
  }
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6bc0

void * __thiscall
IAccessibleWidget::_scalar_deleting_destructor_(IAccessibleWidget *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAccessibleWidget__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
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

// `scalar_deleting_destructor' @ 1425c6c30

void * __thiscall ISlateMetaData::_scalar_deleting_destructor_(ISlateMetaData *this,uint param_1)

{
  *this = (ISlateMetaData)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6c70

void * __thiscall SBoxPanel::_scalar_deleting_destructor_(SBoxPanel *this,uint param_1)

{
  ~SBoxPanel(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6cd0

void * __thiscall SCompoundWidget::_scalar_deleting_destructor_(SCompoundWidget *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SCompoundWidget__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6d60

void * __thiscall
UE::Slate::Private::SEmptyLeftWidget::_scalar_deleting_destructor_
          (SEmptyLeftWidget *this,uint param_1)

{
  *(undefined ***)this = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6dc0

void * __thiscall
UE::Slate::Test::Private::SEmptyLeftWidget::_scalar_deleting_destructor_
          (SEmptyLeftWidget *this,uint param_1)

{
  *(undefined ***)this = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6e20

void * __thiscall SImage::_scalar_deleting_destructor_(SImage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6e80

void * __thiscall SLeafWidget::_scalar_deleting_destructor_(SLeafWidget *this,uint param_1)

{
  *(undefined ***)this = &___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6ee0

void * __thiscall
SNullWidgetContent::_scalar_deleting_destructor_(SNullWidgetContent *this,uint param_1)

{
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6f40

void * __thiscall SOverlay::_scalar_deleting_destructor_(SOverlay *this,uint param_1)

{
  ~SOverlay(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c6fa0

void * __thiscall SPanel::_scalar_deleting_destructor_(SPanel *this,uint param_1)

{
  *(undefined ***)this = &___7SPanel__6B_;
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c7000

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SPopupLayer::_scalar_deleting_destructor_(SPopupLayer *this,uint param_1)

{
  ~SPopupLayer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c7060

void * __thiscall
UE::Slate::Test::Private::SSingleChild::_scalar_deleting_destructor_
          (SSingleChild *this,uint param_1)

{
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SWidget::~SWidget((SWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c70e0

void * __thiscall SVerticalBox::_scalar_deleting_destructor_(SVerticalBox *this,uint param_1)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c7140

void * __thiscall
UE::Slate::Test::Private::SWeakChild::_scalar_deleting_destructor_(SWeakChild *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
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

// `scalar_deleting_destructor' @ 1425c71e0

void * __thiscall SWidget::_scalar_deleting_destructor_(SWidget *this,uint param_1)

{
  ~SWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1425c7240

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SWindow::_scalar_deleting_destructor_(SWindow *this,uint param_1)

{
  ~SWindow(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x740);
  }
  return this;
}

// AddEndWidgetPaintPass @ 1425c8180

void __cdecl SlateTraceDetail::AddEndWidgetPaintPass(SWidget *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)WidgetUpdateStepsIndex;
  if (0x3fff < uVar1 + 9) {
    FlushWidgetUpdateStepsBuffer();
    uVar1 = (ulonglong)WidgetUpdateStepsIndex;
  }
  WidgetUpdateStepsBuffer[uVar1] = kWidgetUpdateStepsCommand_EndPaint;
  *(ulong64 *)(WidgetUpdateStepsBuffer + ((int)uVar1 + 1)) = param_2;
  WidgetUpdateStepsIndex = (int)uVar1 + 9;
  return;
}

// AddStartWidgetPaintSteps @ 1425c9e90

void __cdecl SlateTraceDetail::AddStartWidgetPaintSteps(SWidget *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)WidgetUpdateStepsIndex;
  if (0x3fff < uVar3 + 0x12) {
    FlushWidgetUpdateStepsBuffer();
    uVar3 = (ulonglong)WidgetUpdateStepsIndex;
  }
  uVar4 = uVar3;
  if (GScopedPaintCount == 0) {
    uVar4 = (ulonglong)((int)uVar3 + 1);
    WidgetUpdateStepsBuffer[uVar3] = kWidgetUpdateStepsCommand_NewRootPaint;
  }
  WidgetUpdateStepsBuffer[uVar4] = kWidgetUpdateStepsCommand_StartPaint;
  *(ulong64 *)(WidgetUpdateStepsBuffer + ((int)uVar4 + 1)) = param_2;
  WidgetUpdateStepsIndex = (int)uVar4 + 9;
  if ((param_1 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                         ,0x8b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = (ulonglong)WidgetUpdateStepsIndex;
  WidgetUpdateStepsIndex = WidgetUpdateStepsIndex + 8;
  *(ulong64 *)(WidgetUpdateStepsBuffer + uVar3) = param_1->UniqueIdentifier;
  return;
}

// Construct @ 1425d2fb0

TSharedRef<SWidget,1> * __cdecl
NullWidgetPrivate::Construct(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  SNullWidgetContent *pSVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FSlateBaseNamedArgs *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_270 [8];
  ForAnyElementType FStack_268;
  ulonglong local_260;
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> local_258;
  FDestructionSentinel local_240;
  FSlateBaseNamedArgs local_228;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_1425d2fe8;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_1425d2fe8;
  pFVar10 = (FSlateBaseNamedArgs *)
            SNullWidgetContent::FArguments::FArguments((FArguments *)&local_228);
  local_270 = (undefined1  [8])0x0;
  FStack_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  (pFVar10->_Visibility).Value.Value.Value = (uchar)EVisibility::Hidden.Value.Value;
  (pFVar10->_Visibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Visibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_270,
             (FWriteAccessScope *)&local_240);
  if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_268.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
    local_260 = local_260 & 0xffffffff00000000;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  if (FStack_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_268.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>
            (&local_258,"SNullWidgetContent",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SNullWidget.cpp"
             ,0x50,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar6 = local_258._Widget.Object;
  pSVar2 = (SWidget *)local_258._Widget.Object;
  if ((SWidget *)local_258._Widget.Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_258._Widget.Object,pFVar10);
  if ((SWidget *)local_258._Widget.Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  if ((local_258._Widget.Object)->bForceVolatile == '\0') {
    cVar8 = (**(code **)(*(longlong *)&(local_258._Widget.Object)->field_0x0 + 0x228))
                      (local_258._Widget.Object);
    bVar9 = 0;
    if (cVar8 != '\0') goto LAB_1425d3261;
  }
  else {
LAB_1425d3261:
    bVar9 = 0x20;
  }
  (local_258._Widget.Object)->bCachedVolatile = '\0';
  (local_258._Widget.Object)->field_0x30 = (local_258._Widget.Object)->field_0x30 | bVar9;
  if ((SWidget *)local_258._Widget.Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  (local_258._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if ((SWidget *)local_258._Widget.Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  FVar5.ReferenceController = local_258._Widget.SharedReferenceCount.ReferenceController;
  pTVar3 = local_258._Widget.SharedReferenceCount.ReferenceController;
  local_258._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_258._Widget.Object = (SNullWidgetContent *)0x0;
  if ((SWidget *)pSVar6 == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  ::Result.Object = (SWidget *)pSVar6;
  ::Result.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  atexit(`NullWidgetPrivate::Construct'::__l2::_dynamic_atexit_destructor_for__Result__);
  _Init_thread_footer(&::_TSS0);
LAB_1425d2fe8:
  __return_storage_ptr__->Object = ::Result.Object;
  FVar5 = ::Result.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       ::Result.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// DebugSlateAttribute @ 1425d9b50

wchar_t * __cdecl DebugSlateAttribute(SWidget *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FSlateAttributeMetaData *pFVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar6;
  undefined8 uVar7;
  FString local_18;
  
  if (param_1 != (SWidget *)0x0) {
    pFVar3 = FSlateAttributeMetaData::FindMetaData(param_1);
    if (((pFVar3 != (FSlateAttributeMetaData *)0x0) && (-1 < param_2)) &&
       (param_2 < (pFVar3->Attributes).ArrayNum)) {
      if (param_2 < 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pwVar4 = (wchar_t *)(*pcVar1)();
          return pwVar4;
        }
      }
      FVar6 = (pFVar3->Attributes).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar6 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar3->Attributes;
      }
      uVar7 = 0;
      if (*(undefined8 **)((uchar *)((longlong)FVar6 + 0x10) + (longlong)param_2 * 0x20) !=
          (undefined8 *)0x0) {
        uVar7 = **(undefined8 **)((uchar *)((longlong)FVar6 + 0x10) + (longlong)param_2 * 0x20);
      }
      pFVar5 = FName::SafeString(&local_18,(FNameEntryId)(uint)uVar7,(int)((ulonglong)uVar7 >> 0x20)
                                );
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      wcscpy(TempName,pwVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return TempName;
    }
  }
  return (wchar_t *)0x0;
}

// EmptyLinkFunctionForGeneratedCodeSlateVector2 @ 1425dac10

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateVector2(void)

{
  return;
}

// FindOrAddMouseEventsMetaData @ 1425dc790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FSlateMouseEventsMetaData,1> * __cdecl
Private::FindOrAddMouseEventsMetaData
          (TSharedPtr<FSlateMouseEventsMetaData,1> *__return_storage_ptr__,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateMouseEventsMetaData *pFVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_38;
  TSharedRef<ISlateMetaData,1> local_28;
  
  SWidget::GetMetaData<FSlateMouseEventsMetaData>(param_1,__return_storage_ptr__);
  if (__return_storage_ptr__->Object == (FSlateMouseEventsMetaData *)0x0) {
    local_38.SharedReferenceCount.ReferenceController = ::operator_new(0xa8);
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38.Object = ___xmm_00000000000000000000000000000010;
      pFVar5 = (FSlateMouseEventsMetaData *)&DAT_00000010;
      local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar5 = (FSlateMouseEventsMetaData *)(local_38.SharedReferenceCount.ReferenceController + 1);
      (local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSlateMouseEventsMetaData___00_SharedPointerInternals__6B_
      ;
      local_38.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[7]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[10]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[1]._padding_ =
           (longlong)&___7FSlateMouseEventsMetaData__6B_;
      local_38.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[6]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[8]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[9]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[9].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[9].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar5 == (FSlateMouseEventsMetaData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TSharedPtr<FSlateMouseEventsMetaData,1> *)(*pcVar1)();
          return pTVar3;
        }
      }
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar4 = local_38.SharedReferenceCount.ReferenceController;
      local_38.Object = pFVar5;
    }
    if (__return_storage_ptr__ != &local_38) {
      __return_storage_ptr__->Object = pFVar5;
      local_38.Object = (FSlateMouseEventsMetaData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (__return_storage_ptr__->Object == (FSlateMouseEventsMetaData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FSlateMouseEventsMetaData,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pFVar5 = __return_storage_ptr__->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 == (FSlateMouseEventsMetaData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FSlateMouseEventsMetaData,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (ISlateMetaData *)pFVar5;
    local_28.SharedReferenceCount.ReferenceController = pTVar4;
    SWidget::AddMetadataInternal(param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return __return_storage_ptr__;
}

// FindOrAddToolTipMetaData @ 1425dc9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FSlateToolTipMetaData,1> * __cdecl
Private::FindOrAddToolTipMetaData
          (TSharedPtr<FSlateToolTipMetaData,1> *__return_storage_ptr__,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateToolTipMetaData,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateToolTipMetaData *pFVar5;
  TSharedPtr<FSlateToolTipMetaData,1> local_38;
  TSharedRef<ISlateMetaData,1> local_28;
  
  SWidget::GetMetaData<FSlateToolTipMetaData>(param_1,__return_storage_ptr__);
  if (__return_storage_ptr__->Object == (FSlateToolTipMetaData *)0x0) {
    local_38.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    if (local_38.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38.Object = ___xmm_00000000000000000000000000000010;
      pFVar5 = (FSlateToolTipMetaData *)&DAT_00000010;
      local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar5 = (FSlateToolTipMetaData *)(local_38.SharedReferenceCount.ReferenceController + 1);
      (local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSlateToolTipMetaData___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)
       &local_38.SharedReferenceCount.ReferenceController[2].SharedReferenceCount.field_0x1 = 0;
      *(undefined2 *)
       &local_38.SharedReferenceCount.ReferenceController[2].WeakReferenceCount.field_0x1 = 0;
      local_38.SharedReferenceCount.ReferenceController[2].WeakReferenceCount.field_0x3 = 0;
      local_38.SharedReferenceCount.ReferenceController[1]._padding_ =
           (longlong)&___7FSlateToolTipMetaData__6B_;
      local_38.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      *(undefined1 *)&local_38.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = 0;
      local_38.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
      local_38.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      local_38.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar5 == (FSlateToolTipMetaData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TSharedPtr<FSlateToolTipMetaData,1> *)(*pcVar1)();
          return pTVar3;
        }
      }
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar4 = local_38.SharedReferenceCount.ReferenceController;
      local_38.Object = pFVar5;
    }
    if (__return_storage_ptr__ != &local_38) {
      __return_storage_ptr__->Object = pFVar5;
      local_38.Object = (FSlateToolTipMetaData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (__return_storage_ptr__->Object == (FSlateToolTipMetaData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FSlateToolTipMetaData,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pFVar5 = __return_storage_ptr__->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar5 == (FSlateToolTipMetaData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FSlateToolTipMetaData,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (ISlateMetaData *)pFVar5;
    local_28.SharedReferenceCount.ReferenceController = pTVar4;
    SWidget::AddMetadataInternal(param_1,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return __return_storage_ptr__;
}

// FlushWidgetUpdateStepsBuffer @ 1425dcdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SlateTraceDetail::FlushWidgetUpdateStepsBuffer(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  TLogScope<1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (WidgetUpdateStepsIndex != 0) {
    if (-1 < SlateChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetUpdateStepsFields>(&local_28);
      UE::Trace::Private::Field_WriteAuxData
                (0,WidgetUpdateStepsBuffer,WidgetUpdateStepsIndex & 0x7ffff);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar2;
      if (lVar1 != local_28._8_8_) {
        *(longlong *)(lVar1 + 0x28) = lVar2;
      }
      *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
    }
    WidgetUpdateStepsBuffer[0] = kWidgetUpdateStepsCommand_NewBuffer;
    WidgetUpdateStepsBuffer._1_4_ = WidgetUpdateStepsBufferNumber + 1;
    WidgetUpdateStepsIndex = 5;
    WidgetUpdateStepsBufferNumber = WidgetUpdateStepsBuffer._1_4_;
  }
  return;
}

// GetCurrentSlateTextureAtlasThreadId @ 1425e0370

ESlateTextureAtlasThreadId __cdecl GetCurrentSlateTextureAtlasThreadId(void)

{
  bool bVar1;
  ESlateTextureAtlasThreadId EVar2;
  
  bVar1 = IsInActualRenderingThread();
  if (!bVar1) {
    return Game;
  }
  bVar1 = IsInRenderingThread();
  EVar2 = Unknown;
  if (bVar1) {
    EVar2 = Render;
  }
  return EVar2;
}

// GetSlateFontAtlasContentBytesPerPixel @ 1425e30e0

uint __cdecl GetSlateFontAtlasContentBytesPerPixel(ESlateFontAtlasContentType param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == Alpha) {
    return 1;
  }
  if ((param_1 != Color) && (param_1 != Msdf)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  return 4;
}

// GetWidgetId @ 1425e48d0

ulong64 __cdecl SlateTraceDetail::GetWidgetId(SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1 != (SWidget *)0x0) {
    return param_1->UniqueIdentifier;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InWidget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Trace\\SlateTrace.cpp"
                     ,0x8b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uRam0000000000000200;
}

// GetWidgetIdIfValid @ 1425e4930

ulong64 __cdecl SlateTraceDetail::GetWidgetIdIfValid(SWidget *param_1)

{
  if (param_1 != (SWidget *)0x0) {
    return param_1->UniqueIdentifier;
  }
  return 0;
}

// LexFromString @ 1425e9d20

void __cdecl LexFromString(EInvalidateWidgetReason *param_1,wchar_t *param_2)

{
  *param_1 = None;
  LexTryParseString(param_1,param_2);
  return;
}

// LexToString @ 1425e9d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EInvalidateWidgetReason param_1)

{
  void *pvVar1;
  undefined1 auStack_458 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_458;
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
  }
  else if (param_1 ==
           (Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|
           Layout)) {
    FString::FString(__return_storage_ptr__,L"All");
  }
  else {
    local_438.Base = local_418;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    if ((param_1 & Layout) != None) {
      pvVar1 = FGenericPlatformString::Memcpy(local_418,L"Layout",0xc);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0xc);
    }
    if ((param_1 & Paint) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 5) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,5);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"Paint",10);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 10);
    }
    if ((param_1 & Volatility) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 10) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,10);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"Volatility",0x14);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x14);
    }
    if ((param_1 & ChildOrder) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 10) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,10);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"ChildOrder",0x14);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x14);
    }
    if ((param_1 & RenderTransform) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 0xf) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,0xf);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"RenderTransform",0x1e);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x1e);
    }
    if ((param_1 & Visibility) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 10) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,10);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"Visibility",0x14);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x14);
    }
    if ((param_1 & AttributeRegistration) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 0x15) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,0x15);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"AttributeRegistration",0x2a);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x2a);
    }
    if ((char)param_1 < '\0') {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        if (local_438.End < local_438.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_438,1);
        }
        *local_438.CurPos = L'|';
        local_438.CurPos = local_438.CurPos + 1;
      }
      if (local_438.End < local_438.CurPos + 7) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,7);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"Prepass",0xe);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0xe);
    }
    if (local_438.End < local_438.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\0';
    FString::FString(__return_storage_ptr__,local_438.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  return __return_storage_ptr__;
}

// LexTryParseString @ 1425ea230

bool __cdecl LexTryParseString(EInvalidateWidgetReason *param_1,wchar_t *param_2)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  size_t sVar2;
  char local_res10 [8];
  EInvalidateWidgetReason local_res18 [8];
  char *local_28;
  EInvalidateWidgetReason *local_20;
  TStringView<wchar_t> local_18;
  
  local_res18[0] = None;
  local_28 = local_res10;
  local_20 = local_res18;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    local_res10[0] = '\x01';
    pwVar1 = wcschr(param_2,L'|');
    local_18.DataPtr = param_2;
    while (pwVar1 != (wchar_t *)0x0) {
      local_18.Size = (int)((longlong)pwVar1 - (longlong)local_18.DataPtr >> 1);
      `LexTryParseString'::__l2::<lambda_1>::operator()(&local_28,&local_18);
      _Str = pwVar1 + 1;
      pwVar1 = wcschr(_Str,L'|');
      local_18.DataPtr = _Str;
    }
    if (*local_18.DataPtr != L'\0') {
      sVar2 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar2;
      `LexTryParseString'::__l2::<lambda_1>::operator()(&local_28,&local_18);
    }
    if (local_res10[0] != '\0') {
      *param_1 = local_res18[0];
    }
    return (bool)local_res10[0];
  }
  return false;
}

// PointWithinSlateRect @ 1425f41d0

bool __cdecl PointWithinSlateRect(TVector2<float> *param_1,FSlateRect *param_2)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((param_2->Left <= fVar1) && (fVar1 < param_2->Right)) &&
      (fVar1 = (param_1->field0_0x0)._s_0.Y, param_2->Top <= fVar1)) && (fVar1 < param_2->Bottom)) {
    return true;
  }
  return false;
}

// SerializeToWidgetUpdateSteps @ 1425fae20

void __cdecl SlateTraceDetail::SerializeToWidgetUpdateSteps(uchar param_1)

{
  WidgetUpdateStepsBuffer[WidgetUpdateStepsIndex] = param_1;
  WidgetUpdateStepsIndex = WidgetUpdateStepsIndex + 1;
  return;
}

// SerializeToWidgetUpdateSteps @ 1425fae40

void __cdecl SlateTraceDetail::SerializeToWidgetUpdateSteps(uint param_1)

{
  *(uint *)(WidgetUpdateStepsBuffer + WidgetUpdateStepsIndex) = param_1;
  WidgetUpdateStepsIndex = WidgetUpdateStepsIndex + 4;
  return;
}

// SerializeToWidgetUpdateSteps @ 1425fae70

void __cdecl SlateTraceDetail::SerializeToWidgetUpdateSteps(ulong64 param_1)

{
  *(ulong64 *)(WidgetUpdateStepsBuffer + WidgetUpdateStepsIndex) = param_1;
  WidgetUpdateStepsIndex = WidgetUpdateStepsIndex + 8;
  return;
}

// TestAttributeAddress @ 142600d70

void __cdecl
SlateAttributePrivate::TestAttributeAddress
          (SWidget *param_1,FSlateAttributeImpl *param_2,ESlateAttributeType param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (((param_3 == Member) && (param_1->AllocSize != 0)) &&
     ((param_2 < param_1 ||
      ((FSlateAttributeImpl *)((longlong)&param_1->_padding_ + param_1->AllocSize) < param_2)))) {
    FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Z_Construct_UScriptStruct_FDeprecateSlateVector2D @ 1426060e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDeprecateSlateVector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// AccessibleIdMap'' @ 15035b990

void __cdecl `dynamic_atexit_destructor_for_'FSlateAccessibleWidgetCache::AccessibleIdMap__(void)

{
  FSlateAccessibleWidgetCache::AccessibleIdMap._72_4_ = 0;
  if (FSlateAccessibleWidgetCache::AccessibleIdMap._64_8_ != 0) {
    FMemory::Free((void *)FSlateAccessibleWidgetCache::AccessibleIdMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSlateAccessibleWidgetCache::AccessibleIdMap);
  return;
}

// AccessibleWidgetMap'' @ 15035b9d0

void __cdecl
`dynamic_atexit_destructor_for_'FSlateAccessibleWidgetCache::AccessibleWidgetMap__(void)

{
  FSlateAccessibleWidgetCache::AccessibleWidgetMap._72_4_ = 0;
  if (FSlateAccessibleWidgetCache::AccessibleWidgetMap._64_8_ != 0) {
    FMemory::Free((void *)FSlateAccessibleWidgetCache::AccessibleWidgetMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap);
  return;
}

// NoChildrenInstance'' @ 15035ba10

void __cdecl `dynamic_atexit_destructor_for_'FNoChildren::NoChildrenInstance__(void)

{
  FChildren::~FChildren((FChildren *)&FNoChildren::NoChildrenInstance);
  return;
}

// NullWidget'' @ 15035ba30

void __cdecl `dynamic_atexit_destructor_for_'SNullWidget::NullWidget__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'AccessibleSummaryText'' @ 15035ba50

void __cdecl _dynamic_atexit_destructor_for__AccessibleSummaryText__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
  if (BVar2 == '\0') {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&AccessibleSummaryText.RWLock);
  }
  AccessibleSummaryText.AnnotationMap._72_4_ = 0;
  if (AccessibleSummaryText.AnnotationMap._64_8_ != 0) {
    FMemory::Free((void *)AccessibleSummaryText.AnnotationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&AccessibleSummaryText);
  return;
}

// `dynamic_atexit_destructor_for_'AccessibleText'' @ 15035bad0

void __cdecl _dynamic_atexit_destructor_for__AccessibleText__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&AccessibleText.RWLock);
  if (BVar2 == '\0') {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&AccessibleText.RWLock);
  }
  AccessibleText.AnnotationMap._72_4_ = 0;
  if (AccessibleText.AnnotationMap._64_8_ != 0) {
    FMemory::Free((void *)AccessibleText.AnnotationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,TAttribute<FText>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&AccessibleText);
  return;
}

// `dynamic_atexit_destructor_for_'AccessibleWidgetsProcessedPerTickRef'' @ 15035bb50

void __cdecl _dynamic_atexit_destructor_for__AccessibleWidgetsProcessedPerTickRef__(void)

{
  AccessibleWidgetsProcessedPerTickRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&AccessibleWidgetsProcessedPerTickRef);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCaptureRootInvalidationCallstacks'' @ 15035bb70

void __cdecl _dynamic_atexit_destructor_for__CVarCaptureRootInvalidationCallstacks__(void)

{
  CVarCaptureRootInvalidationCallstacks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCaptureRootInvalidationCallstacks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCullingSlackFillPercent'' @ 15035bb90

void __cdecl _dynamic_atexit_destructor_for__CVarCullingSlackFillPercent__(void)

{
  CVarCullingSlackFillPercent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCullingSlackFillPercent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSlateWidgetTracker'' @ 15035bbb0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableSlateWidgetTracker__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableSlateWidgetTracker);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateDebugCulling'' @ 15035bbd0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateDebugCulling__(void)

{
  CVarSlateDebugCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateDebugCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateEnsureAllVisibleWidgetsPaint'' @ 15035bbf0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateEnsureAllVisibleWidgetsPaint__(void)

{
  CVarSlateEnsureAllVisibleWidgetsPaint._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateEnsureAllVisibleWidgetsPaint);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateEnsureOutgoingLayerId'' @ 15035bc10

void __cdecl _dynamic_atexit_destructor_for__CVarSlateEnsureOutgoingLayerId__(void)

{
  CVarSlateEnsureOutgoingLayerId._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateEnsureOutgoingLayerId);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateShowClipRects'' @ 15035bc30

void __cdecl _dynamic_atexit_destructor_for__CVarSlateShowClipRects__(void)

{
  CVarSlateShowClipRects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateShowClipRects);
  return;
}

// `dynamic_atexit_destructor_for_'DumpAccessibilityStatsSlateCommand'' @ 15035bc50

void __cdecl _dynamic_atexit_destructor_for__DumpAccessibilityStatsSlateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpAccessibilityStatsSlateCommand)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FSlateChildrenForEachTestAutomationTestInstance'' @ 15035bc70

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FSlateChildrenForEachTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSlateChildrenForEachTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSlateInvalidationWidgetListTestAutomationTestInstance'' @ 15035bc90

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FSlateInvalidationWidgetListTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSlateInvalidationWidgetListTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSlateInvalidationWidgetReasonLexTestAutomationTestInstance'' @ 15035bcb0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FSlateInvalidationWidgetReasonLexTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSlateInvalidationWidgetReasonLexTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'ModuleLoadLock'' @ 15035bcd0

void __cdecl UE::Slate::Private::_dynamic_atexit_destructor_for__ModuleLoadLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035bcd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&ModuleLoadLock);
  return;
}

// `dynamic_atexit_destructor_for_'NullSlot'' @ 15035bcf0

void __cdecl
`TWeakChild<SWidget>::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__(void)

{
  FSlotBase::~FSlotBase
            ((FSlotBase *)
             &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TWeakChild<SWidget>::GetSlotAt(int)const___ptr64'
              ::__l2::NullSlot);
  return;
}

// `dynamic_atexit_destructor_for_'NullSlot'' @ 15035bd10

void __cdecl `FNoChildren::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__(void)

{
  FSlotBase::~FSlotBase
            ((FSlotBase *)
             &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
              ::__l2::NullSlot);
  return;
}

// `dynamic_atexit_destructor_for_'Result'' @ 15035bd30

void __cdecl `NullWidgetPrivate::Construct'::__l2::_dynamic_atexit_destructor_for__Result__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Result.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15035bd50

void __cdecl `FSlateWidgetTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.TrackedWidgetsChangedEvents._72_4_ = 0;
  if (::Singleton.TrackedWidgetsChangedEvents._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.TrackedWidgetsChangedEvents._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTrackedWidgetsChangedEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTrackedWidgetsChangedEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTrackedWidgetsChangedEvent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton.TrackedWidgetsChangedEvents);
  ::Singleton.TrackedWidgets._72_4_ = 0;
  if (::Singleton.TrackedWidgets._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.TrackedWidgets._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Type'' @ 15035bdb0

void __cdecl
`FDragAndDropVerticalBoxOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
      ::__l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
      ::__l2::Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UpdateWidgetInfos'' @ 15035bdd0

void __cdecl SlateTraceDetail::_dynamic_atexit_destructor_for__UpdateWidgetInfos__(void)

{
  DestructItems<TWeakPtr<SWidget_const_,1>,int>
            ((TWeakPtr<SWidget_const_,1> *)UpdateWidgetInfos.AllocatorInstance.Data,
             UpdateWidgetInfos.ArrayNum);
  if (UpdateWidgetInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UpdateWidgetInfos.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035be10

void __cdecl
`SBoxPanel::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBoxPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035be60

void __cdecl
`SCompoundWidget::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035beb0

void __cdecl
`SHorizontalBox::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SHorizontalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035bf00

void __cdecl
`SImage::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035bf50

void __cdecl
`SOverlay::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SOverlay::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035bfa0

void __cdecl
`SStackBox::GetPrivateWidgetClass'::__l2::_dynamic_atexit_destructor_for__WidgetClassDataInstance__
          (void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SStackBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15035bff0

void __cdecl
`SVerticalBox::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SVerticalBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 150491000

bool __thiscall
``SWidget::Prepass_ChildLoop'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653379328>);
  if (bVar2) {
    if ((SWidget *)**(undefined8 **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetDebugInfo(&local_18,(SWidget *)**(undefined8 **)this);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379328>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049107d;
    }
  }
  bVar2 = false;
LAB_15049107d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504915b0

bool __thiscall
``SWidget::Prepass_ChildLoop'::__l2::<lambda_1>::operator()'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1812382117653379327>);
  if (bVar2) {
    if ((SWidget *)**(undefined8 **)this == (SWidget *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      FReflectionMetaData::GetWidgetDebugInfo(&local_18,(SWidget *)**(undefined8 **)this);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1812382117653379327>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049162d;
    }
  }
  bVar2 = false;
LAB_15049162d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

