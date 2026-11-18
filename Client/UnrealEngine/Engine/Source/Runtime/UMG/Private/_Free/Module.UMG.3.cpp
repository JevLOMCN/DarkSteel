// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 821

// ActiveWidgetIndex'' @ 1410a4180

void __cdecl
`dynamic_initializer_for_'UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"ActiveWidgetIndex");
  UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName = *pFVar1;
  UWidgetSwitcher::FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber = 3;
  return;
}

// OnRetainerModeChangedDelegate'' @ 1410a41c0

void __cdecl `dynamic_initializer_for_'SRetainerWidget::OnRetainerModeChangedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SRetainerWidget::OnRetainerModeChangedDelegate__);
  return;
}

// Shared_RetainerWorkThisFrame'' @ 1410a41e0

void __cdecl `dynamic_initializer_for_'SRetainerWidget::Shared_RetainerWorkThisFrame__(void)

{
  SRetainerWidget::Shared_RetainerWorkThisFrame.FrameSet = GFrameCounter;
  return;
}

// Shared_WaitingToRender'' @ 1410a4200

void __cdecl `dynamic_initializer_for_'SRetainerWidget::Shared_WaitingToRender__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SRetainerWidget::Shared_WaitingToRender__);
  return;
}

// UMGStyleInstance'' @ 1410a4220

void __cdecl `dynamic_initializer_for_'FUMGStyle::UMGStyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FUMGStyle::UMGStyleInstance__);
  return;
}

// `dynamic_initializer_for_'CVarForceWindowButtonsHidden'' @ 1410a4240

void __cdecl UE::UMG::Private::_dynamic_initializer_for__CVarForceWindowButtonsHidden__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceWindowButtonsHidden,L"WindowTitleBar.ForceWindowButtonsHidden",local_res8,
             L"If true, force the window title bar buttons to be hidden.",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceWindowButtonsHidden__);
  return;
}

// `dynamic_initializer_for_'CVarGlateEnableRenderWithLocalTransform'' @ 1410a4290

void __cdecl _dynamic_initializer_for__CVarGlateEnableRenderWithLocalTransform__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlateEnableRenderWithLocalTransform,
             L"Slate.EnableRetainedRenderingWithLocalTransform",
             &GSlateEnableRenderWithLocalTransform,
             L"This console variable is no longer useful, as the SRetainerWidget render bugs workedaround by it have been fixed. It will be removed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGlateEnableRenderWithLocalTransform__);
  return;
}

// `dynamic_initializer_for_'CVarMaximumRenderTargetHeight'' @ 1410a42e0

void __cdecl _dynamic_initializer_for__CVarMaximumRenderTargetHeight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaximumRenderTargetHeight,L"WidgetComponent.MaximumRenderTargetHeight",
             &MaximumRenderTargetHeight,
             L"Sets the maximum height of the render target used by a Widget Component.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaximumRenderTargetHeight__);
  return;
}

// `dynamic_initializer_for_'CVarMaximumRenderTargetWidth'' @ 1410a4330

void __cdecl _dynamic_initializer_for__CVarMaximumRenderTargetWidth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaximumRenderTargetWidth,L"WidgetComponent.MaximumRenderTargetWidth",
             &MaximumRenderTargetWidth,
             L"Sets the maximum width of the render target used by a Widget Component.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaximumRenderTargetWidth__);
  return;
}

// `dynamic_initializer_for_'CVarSlateWorldWidgetIgnoreNotVisibleWidgets'' @ 1410a4380

void __cdecl _dynamic_initializer_for__CVarSlateWorldWidgetIgnoreNotVisibleWidgets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateWorldWidgetIgnoreNotVisibleWidgets,
             L"Slate.WorldWidgetIgnoreNotVisibleWidgets",&GSlateWorldWidgetIgnoreNotVisibleWidgets,
             L"Whether to not update the position of world widgets if they are not visible - to prevent invalidating the whole layer unnecessarily"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateWorldWidgetIgnoreNotVisibleWidgets__);
  return;
}

// `dynamic_initializer_for_'CVarSlateWorldWidgetZOrder'' @ 1410a43d0

void __cdecl _dynamic_initializer_for__CVarSlateWorldWidgetZOrder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateWorldWidgetZOrder,L"Slate.WorldWidgetZOrder",&GSlateWorldWidgetZOrder,
             L"Whether to re-order world widgets projected to screen by their view point distance\n 0: Disable re-ordering\n 1: Re-order by distance (default, less batching, less artifacts when widgets overlap)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateWorldWidgetZOrder__);
  return;
}

// `dynamic_initializer_for_'CVarbUseAutomaticTickModeByDefault'' @ 1410a4420

void __cdecl _dynamic_initializer_for__CVarbUseAutomaticTickModeByDefault__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarbUseAutomaticTickModeByDefault,L"WidgetComponent.UseAutomaticTickModeByDefault",
             &bUseAutomaticTickModeByDefault,
             L"Sets to true to Disable Tick by default on Widget Components when set to false, the tick will enabled by default."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarbUseAutomaticTickModeByDefault__);
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SObjectWidget'' @ 1410a4470

void __cdecl _dynamic_initializer_for__ClassRegistration__SObjectWidget__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SObjectWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SObjectWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SObjectWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SPostBufferUpdate'' @ 1410a4480

void __cdecl _dynamic_initializer_for__ClassRegistration__SPostBufferUpdate__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FName::FName(aFStackX_10,"SPostBufferUpdate");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SPostBufferUpdate::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'DeferRetainedRenderingRT'' @ 1410a4490

void __cdecl _dynamic_initializer_for__DeferRetainedRenderingRT__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&DeferRetainedRenderingRT,L"Slate.DeferRetainedRenderingRenderThread",
             &GDeferRetainedRenderingRenderThread,
             L"Whether or not to defer retained rendering to happen at the same time as the rest of slate render thread work"
             ,0);
  atexit(_dynamic_atexit_destructor_for__DeferRetainedRenderingRT__);
  return;
}

// `dynamic_initializer_for_'EnableDesignerRetainedRendering'' @ 1410a44e0

void __cdecl _dynamic_initializer_for__EnableDesignerRetainedRendering__(void)

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
    puVar1[3] = HandleDesignerRetainedRenderingToggled;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&EnableDesignerRetainedRendering,L"Slate.EnableDesignerRetainedRendering",
             &GEnableDesignerRetainedRendering,
             L"Controls if retainer renders in designer; 0 - Never; 1 - Per Widget Properties",
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
  atexit(_dynamic_atexit_destructor_for__EnableDesignerRetainedRendering__);
  return;
}

// `dynamic_initializer_for_'EnableRetainedRendering'' @ 1410a4620

void __cdecl _dynamic_initializer_for__EnableRetainedRendering__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&EnableRetainedRendering,L"Slate.EnableRetainedRendering",&GEnableRetainedRendering,
             L"Whether to attempt to render things in SRetainerWidgets to render targets first.",0);
  atexit(_dynamic_atexit_destructor_for__EnableRetainedRendering__);
  return;
}

// `dynamic_initializer_for_'GDumpTemplateSizesCommand'' @ 1410a4670

void __cdecl _dynamic_initializer_for__GDumpTemplateSizesCommand__(void)

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
    puVar1[3] = <lambda_25>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GDumpTemplateSizesCommand,L"Widget.DumpTemplateSizes",
             L"Dump the sizes of all widget class templates in memory",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__GDumpTemplateSizesCommand__);
  return;
}

// `dynamic_initializer_for_'LogUMG'' @ 1410a47b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUMG__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogUMG,L"LogUMG",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUMG__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410a47f0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantUMG'' @ 1410a4810

void __cdecl _dynamic_initializer_for__ModuleRegistrantUMG__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "UMG";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"UMG",3);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FUMGModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UDragDropOperation_DragCancelled'' @ 1410a4860

void __cdecl _dynamic_initializer_for__NAME_UDragDropOperation_DragCancelled__(void)

{
  FName::FName(&NAME_UDragDropOperation_DragCancelled,L"DragCancelled");
  return;
}

// `dynamic_initializer_for_'NAME_UDragDropOperation_Dragged'' @ 1410a4880

void __cdecl _dynamic_initializer_for__NAME_UDragDropOperation_Dragged__(void)

{
  FName::FName(&NAME_UDragDropOperation_Dragged,L"Dragged");
  return;
}

// `dynamic_initializer_for_'NAME_UDragDropOperation_Drop'' @ 1410a48a0

void __cdecl _dynamic_initializer_for__NAME_UDragDropOperation_Drop__(void)

{
  FName::FName(&NAME_UDragDropOperation_Drop,L"Drop");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_Construct'' @ 1410a48c0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_Construct__(void)

{
  FName::FName(&NAME_UUserWidget_Construct,L"Construct");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_Destruct'' @ 1410a48e0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_Destruct__(void)

{
  FName::FName(&NAME_UUserWidget_Destruct,L"Destruct");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_IsInteractable'' @ 1410a4900

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_IsInteractable__(void)

{
  FName::FName(&NAME_UUserWidget_IsInteractable,L"IsInteractable");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnAddedToFocusPath'' @ 1410a4920

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnAddedToFocusPath__(void)

{
  FName::FName(&NAME_UUserWidget_OnAddedToFocusPath,L"OnAddedToFocusPath");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnAnalogValueChanged'' @ 1410a4940

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnAnalogValueChanged__(void)

{
  FName::FName(&NAME_UUserWidget_OnAnalogValueChanged,L"OnAnalogValueChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnAnimationFinished'' @ 1410a4960

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnAnimationFinished__(void)

{
  FName::FName(&NAME_UUserWidget_OnAnimationFinished,L"OnAnimationFinished");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnAnimationStarted'' @ 1410a4980

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnAnimationStarted__(void)

{
  FName::FName(&NAME_UUserWidget_OnAnimationStarted,L"OnAnimationStarted");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDragCancelled'' @ 1410a49a0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDragCancelled__(void)

{
  FName::FName(&NAME_UUserWidget_OnDragCancelled,L"OnDragCancelled");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDragDetected'' @ 1410a49c0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDragDetected__(void)

{
  FName::FName(&NAME_UUserWidget_OnDragDetected,L"OnDragDetected");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDragEnter'' @ 1410a49e0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDragEnter__(void)

{
  FName::FName(&NAME_UUserWidget_OnDragEnter,L"OnDragEnter");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDragLeave'' @ 1410a4a00

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDragLeave__(void)

{
  FName::FName(&NAME_UUserWidget_OnDragLeave,L"OnDragLeave");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDragOver'' @ 1410a4a20

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDragOver__(void)

{
  FName::FName(&NAME_UUserWidget_OnDragOver,L"OnDragOver");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnDrop'' @ 1410a4a40

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnDrop__(void)

{
  FName::FName(&NAME_UUserWidget_OnDrop,L"OnDrop");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnFocusLost'' @ 1410a4a60

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnFocusLost__(void)

{
  FName::FName(&NAME_UUserWidget_OnFocusLost,L"OnFocusLost");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnFocusReceived'' @ 1410a4a80

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnFocusReceived__(void)

{
  FName::FName(&NAME_UUserWidget_OnFocusReceived,L"OnFocusReceived");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnInitialized'' @ 1410a4aa0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnInitialized__(void)

{
  FName::FName(&NAME_UUserWidget_OnInitialized,L"OnInitialized");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnKeyChar'' @ 1410a4ac0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnKeyChar__(void)

{
  FName::FName(&NAME_UUserWidget_OnKeyChar,L"OnKeyChar");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnKeyDown'' @ 1410a4ae0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnKeyDown__(void)

{
  FName::FName(&NAME_UUserWidget_OnKeyDown,L"OnKeyDown");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnKeyUp'' @ 1410a4b00

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnKeyUp__(void)

{
  FName::FName(&NAME_UUserWidget_OnKeyUp,L"OnKeyUp");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMotionDetected'' @ 1410a4b20

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMotionDetected__(void)

{
  FName::FName(&NAME_UUserWidget_OnMotionDetected,L"OnMotionDetected");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseButtonDoubleClick'' @ 1410a4b40

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseButtonDoubleClick__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseButtonDoubleClick,L"OnMouseButtonDoubleClick");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseButtonDown'' @ 1410a4b60

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseButtonDown__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseButtonDown,L"OnMouseButtonDown");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseButtonUp'' @ 1410a4b80

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseButtonUp__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseButtonUp,L"OnMouseButtonUp");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseCaptureLost'' @ 1410a4ba0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseCaptureLost__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseCaptureLost,L"OnMouseCaptureLost");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseEnter'' @ 1410a4bc0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseEnter__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseEnter,L"OnMouseEnter");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseLeave'' @ 1410a4be0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseLeave__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseLeave,L"OnMouseLeave");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseMove'' @ 1410a4c00

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseMove__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseMove,L"OnMouseMove");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnMouseWheel'' @ 1410a4c20

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnMouseWheel__(void)

{
  FName::FName(&NAME_UUserWidget_OnMouseWheel,L"OnMouseWheel");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnPaint'' @ 1410a4c40

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnPaint__(void)

{
  FName::FName(&NAME_UUserWidget_OnPaint,L"OnPaint");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnPreviewKeyDown'' @ 1410a4c60

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnPreviewKeyDown__(void)

{
  FName::FName(&NAME_UUserWidget_OnPreviewKeyDown,L"OnPreviewKeyDown");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnPreviewMouseButtonDown'' @ 1410a4c80

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnPreviewMouseButtonDown__(void)

{
  FName::FName(&NAME_UUserWidget_OnPreviewMouseButtonDown,L"OnPreviewMouseButtonDown");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnRemovedFromFocusPath'' @ 1410a4ca0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnRemovedFromFocusPath__(void)

{
  FName::FName(&NAME_UUserWidget_OnRemovedFromFocusPath,L"OnRemovedFromFocusPath");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchEnded'' @ 1410a4cc0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchEnded__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchEnded,L"OnTouchEnded");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchFirstMove'' @ 1410a4ce0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchFirstMove__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchFirstMove,L"OnTouchFirstMove");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchForceChanged'' @ 1410a4d00

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchForceChanged__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchForceChanged,L"OnTouchForceChanged");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchGesture'' @ 1410a4d20

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchGesture__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchGesture,L"OnTouchGesture");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchMoved'' @ 1410a4d40

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchMoved__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchMoved,L"OnTouchMoved");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_OnTouchStarted'' @ 1410a4d60

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_OnTouchStarted__(void)

{
  FName::FName(&NAME_UUserWidget_OnTouchStarted,L"OnTouchStarted");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_PreConstruct'' @ 1410a4d80

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_PreConstruct__(void)

{
  FName::FName(&NAME_UUserWidget_PreConstruct,L"PreConstruct");
  return;
}

// `dynamic_initializer_for_'NAME_UUserWidget_Tick'' @ 1410a4da0

void __cdecl _dynamic_initializer_for__NAME_UUserWidget_Tick__(void)

{
  FName::FName(&NAME_UUserWidget_Tick,L"Tick");
  return;
}

// `dynamic_initializer_for_'NullGeometry'' @ 1410a4dc0

void __cdecl _dynamic_initializer_for__NullGeometry__(void)

{
  FGeometry::FGeometry(&NullGeometry);
  return;
}

// `dynamic_initializer_for_'NullStyle'' @ 1410a4de0

void __cdecl _dynamic_initializer_for__NullStyle__(void)

{
  NullStyle.ColorAndOpacityTint.field0_0x0._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  NullStyle.ForegroundColor.field0_0x0._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  NullStyle.SubduedForeground.field0_0x0._s_0.R =
       FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
  NullStyle.SubduedForeground.field0_0x0._s_0.B =
       FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
  NullStyle.ColorAndOpacityTint.field0_0x0._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  NullStyle.ColorAndOpacityTint.field0_0x0._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  NullStyle.ColorAndOpacityTint.field0_0x0._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
  NullStyle.ForegroundColor.field0_0x0._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  NullStyle.ForegroundColor.field0_0x0._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  NullStyle.ForegroundColor.field0_0x0._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
  NullStyle.SubduedForeground.field0_0x0._s_0.G =
       FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
  NullStyle.SubduedForeground.field0_0x0._s_0.A =
       FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
  return;
}

// `dynamic_initializer_for_'OnGameWindowCloseButtonClicked'' @ 1410a4e90

void __cdecl _dynamic_initializer_for__OnGameWindowCloseButtonClicked__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnGameWindowCloseButtonClicked__);
  return;
}

// `dynamic_initializer_for_'SlateRHIModuleName'' @ 1410a4eb0

void __cdecl _dynamic_initializer_for__SlateRHIModuleName__(void)

{
  FName::FName(&SlateRHIModuleName,"SlateRHIRenderer");
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1410a4ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1410a4f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1410a4ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1410a5080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1410a5110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1410a51a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1410a5230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1410a52c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1410a5350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1410a53e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1410a5470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410a5500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Slate3DHitTesting'' @ 1410a5590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Slate3DHitTesting__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Slate3DHitTesting == (FThreadSafeStaticStat<FStat_STAT_Slate3DHitTesting>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Slate3DHitTesting");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate3DHitTesting,*pFVar1,L"3DHitTesting",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateRetainerWidgetPaint'' @ 1410a5620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateRetainerWidgetPaint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateRetainerWidgetPaint ==
      (FThreadSafeStaticStat<FStat_STAT_SlateRetainerWidgetPaint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateRetainerWidgetPaint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRetainerWidgetPaint,*pFVar1,
               L"Retainer Widget Paint","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateRetainerWidgetTick'' @ 1410a56b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateRetainerWidgetTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateRetainerWidgetTick ==
      (FThreadSafeStaticStat<FStat_STAT_SlateRetainerWidgetTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateRetainerWidgetTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRetainerWidgetTick,*pFVar1,
               L"Retainer Widget Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h__Script_UMG_338128554'' @ 1410a5740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h__Script_UMG_338128554__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h__Script_UMG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h__Script_UMG_3420266259'' @ 1410a5790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h__Script_UMG_3420266259__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h__Script_UMG_1738501094'' @ 1410a57d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h__Script_UMG_1738501094__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h__Script_UMG_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h__Script_UMG_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h__Script_UMG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h__Script_UMG_2657955203'' @ 1410a5820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h__Script_UMG_2657955203__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h__Script_UMG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h__Script_UMG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h__Script_UMG_3326329975'' @ 1410a5870

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h__Script_UMG_3326329975__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h__Script_UMG_3060952834'' @ 1410a58b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h__Script_UMG_3060952834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h__Script_UMG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h__Script_UMG_Statics
             ::EnumInfo,6);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h__Script_UMG_725461271'' @ 1410a5900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h__Script_UMG_725461271__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h__Script_UMG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h__Script_UMG_4191801410'' @ 1410a5950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h__Script_UMG_4191801410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h__Script_UMG_3907323601'' @ 1410a5990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h__Script_UMG_3907323601__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h__Script_UMG_4240485278'' @ 1410a59d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h__Script_UMG_4240485278__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h__Script_UMG_1183689447'' @ 1410a5a10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h__Script_UMG_1183689447__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h__Script_UMG_452961829'' @ 1410a5a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h__Script_UMG_452961829__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h__Script_UMG_2517417766'' @ 1410a5a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h__Script_UMG_2517417766__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h__Script_UMG_2458996699'' @ 1410a5ad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h__Script_UMG_2458996699__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h__Script_UMG_3504949599'' @ 1410a5b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h__Script_UMG_3504949599__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentWidgetBlueprintGeneratedClassExtension_h__Script_UMG_2222971011'' @ 1410a5b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentWidgetBlueprintGeneratedClassExtension_h__Script_UMG_2222971011__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentWidgetBlueprintGeneratedClassExtension_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h__Script_UMG_1879603239'' @ 1410a5ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h__Script_UMG_1879603239__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h__Script_UMG_2941356490'' @ 1410a5be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h__Script_UMG_2941356490__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponents_NavigationUIComponent_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h__Script_UMG_1931470533'' @ 1410a5c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h__Script_UMG_1931470533__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h__Script_UMG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding @ 146a44fd0

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcherSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass @ 146a45010

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnFocusLost @ 146a45050

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnFocusLost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment @ 146a45090

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcherSlot_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_TopLevelOnly_SetBit @ 146a450d0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::
NewProp_TopLevelOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_OnFocusReceived @ 146a450e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnFocusReceived(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface @ 146a45120

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnInitialized @ 146a45160

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnInitialized(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource @ 146a454a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnKeyChar @ 146a45530

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnKeyChar(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDragDropOperation @ 146a45570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDragDropOperation(void)

{
  if (Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton,
               &Z_Construct_UClass_UDragDropOperation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDragDropOperation.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial @ 146a455b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_UMG_EDragPivot @ 146a455f0

UEnum * __cdecl Z_Construct_UEnum_UMG_EDragPivot(void)

{
  if (Z_Registration_Info_UEnum_EDragPivot.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDragPivot.InnerSingleton,
               &Z_Construct_UEnum_UMG_EDragPivot_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDragPivot.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature @ 146a45630

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnDragDropMulticast__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EUMGItemDropZone_StaticEnum @ 146a45670

UEnum * __cdecl EUMGItemDropZone_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EUMGItemDropZone,(UObject *)pUVar1,L"EUMGItemDropZone")
    ;
  }
  return Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D @ 146a456b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnKeyDown @ 146a456f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnKeyDown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EDragPivot_StaticEnum @ 146a45730

UEnum * __cdecl EDragPivot_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDragPivot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EDragPivot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EDragPivot,(UObject *)pUVar1,L"EDragPivot");
  }
  return Z_Registration_Info_UEnum_EDragPivot.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent @ 146a45770

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnKeyUp @ 146a457b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnKeyUp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial @ 146a457f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent @ 146a45830

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMotionDetected @ 146a45870

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMotionDetected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDragDropOperation_DragCancelled @ 146a458b0

UFunction * __cdecl Z_Construct_UFunction_UDragDropOperation_DragCancelled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDragDropOperation_DragCancelled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent @ 146a458f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick @ 146a45930

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent @ 146a45970

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDragDropOperation_Dragged @ 146a459b0

UFunction * __cdecl Z_Construct_UFunction_UDragDropOperation_Dragged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDragDropOperation_Dragged_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseButtonDown @ 146a459f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseButtonDown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent @ 146a45a30

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UDragDropOperation_Drop @ 146a45a70

UFunction * __cdecl Z_Construct_UFunction_UDragDropOperation_Drop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UDragDropOperation_Drop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetInteractionComponent @ 146a45ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetInteractionComponent(void)

{
  if (Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton,
               &Z_Construct_UClass_UWidgetInteractionComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetInteractionSource @ 146a45af0

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetInteractionSource(void)

{
  if (Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature @ 146a45b30

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EWidgetInteractionSource_StaticEnum @ 146a45b70

UEnum * __cdecl EWidgetInteractionSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetInteractionSource,(UObject *)pUVar1,
                       L"EWidgetInteractionSource");
  }
  return Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton;
}

// Z_Construct_UFunction_UUserWidget_OnMouseButtonUp @ 146a45bb0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseButtonUp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent @ 146a45bf0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost @ 146a45c80

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146a45d80

void * __thiscall FUMGModule::_scalar_deleting_destructor_(FUMGModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CustomTransformPropertyIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomFloatPropertyIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding @ 146a45e70

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseEnter @ 146a45eb0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled @ 146a45ef0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation @ 146a45f30

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseLeave @ 146a45f70

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a45fc0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_USlateBlueprintLibrary @ 146a462a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent @ 146a462e0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping @ 146a46320

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNavigationUIComponent @ 146a463a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNavigationUIComponent(void)

{
  if (Z_Registration_Info_UClass_UNavigationUIComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNavigationUIComponent.OuterSingleton,
               &Z_Construct_UClass_UNavigationUIComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNavigationUIComponent.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnNavigationTransition__DelegateSignature @ 146a464c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_OnNavigationTransition__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnNavigationTransition__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseMove @ 146a46560

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseMove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal @ 146a465a0

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146a465e0

void * __thiscall
FWidgetComponentInstanceData::_scalar_deleting_destructor_
          (FWidgetComponentInstanceData *this,uint param_1)

{
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult @ 146a46620

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse @ 146a46660

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a466a0

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget @ 146a466b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnMouseWheel @ 146a466f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnMouseWheel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport @ 146a46730

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset @ 146a46770

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a467b0

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146a467c0

void __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget @ 146a467d0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnPaint @ 146a46810

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnPaint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnPaint_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a46850

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush @ 146a46860

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial @ 146a468a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget @ 146a468e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown @ 146a46920

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a46960

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize @ 146a46970

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture @ 146a469e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey @ 146a46a30

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize @ 146a46b20

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRepeat_SetBit @ 146a46b60

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown @ 146a46b70

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a46bb0

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush @ 146a46c60

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInAllJoysticks_SetBit @ 146a46ca0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::
NewProp_bInAllJoysticks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_PressKey @ 146a46cb0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_PressKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft @ 146a46cf0

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath @ 146a46d30

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture @ 146a46d70

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a46db0

void __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey @ 146a46dc0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation @ 146a46e00

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnTouchEnded @ 146a46e40

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchEnded(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a46e80

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture @ 146a46e90

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey @ 146a46ed0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState @ 146a46f10

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute @ 146a46f50

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnTouchFirstMove @ 146a46f90

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchFirstMove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnTouchFirstMove_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey @ 146a46fd0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial @ 146a47010

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport @ 146a47050

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel @ 146a47180

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnTouchForceChanged @ 146a471c0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchForceChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture @ 146a472c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRepeat_SetBit @ 146a47300

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146a47310

void __cdecl
Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_CorrectDeficiency_SetBit @ 146a47320

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::
NewProp_CorrectDeficiency_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_AbsoluteToLocal @ 146a47330

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_AbsoluteToLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_AbsoluteToLocal_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ShowCorrectionWithDeficiency_SetBit @ 146a47370

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::
NewProp_ShowCorrectionWithDeficiency_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_OnTouchGesture @ 146a47380

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchGesture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar @ 146a473c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType @ 146a47400

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_LocalToAbsolute @ 146a47440

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_LocalToAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_Scalar_LocalToAbsolute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWindowTitleBarArea @ 146a47480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWindowTitleBarArea(void)

{
  if (Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton,
               &Z_Construct_UClass_UWindowTitleBarArea_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult @ 146a474c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport @ 146a47500

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnTouchMoved @ 146a47590

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchMoved(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment @ 146a475d0

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a47610

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport @ 146a47620

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus @ 146a47710

UFunction * __cdecl Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindowTitleBarArea_SetPadding @ 146a47750

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarArea_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeWindowPosition_SetBit @ 146a47790

void __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::
NewProp_bIncludeWindowPosition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor @ 146a477a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnTouchStarted @ 146a477e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnTouchStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bEnableHitTesting_SetBit @ 146a47820

void __cdecl
Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x289) = 1;
  return;
}

// NewProp_bShowDebug_SetBit @ 146a47830

void __cdecl
Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28a) = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute @ 146a47840

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment @ 146a47880

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHideCursorDuringCapture_SetBit @ 146a478c0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::
NewProp_bHideCursorDuringCapture_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bFlushInput_SetBit @ 146a478d0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::
NewProp_bFlushInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bIsHoveredWidgetInteractable_SetBit @ 146a478e0

void __cdecl
Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x550) = 1;
  return;
}

// NewProp_bIsHoveredWidgetFocusable_SetBit @ 146a478f0

void __cdecl
Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x551) = 1;
  return;
}

// NewProp_bIsHoveredWidgetHitTestVisible_SetBit @ 146a47900

void __cdecl
Z_Construct_UClass_UWidgetInteractionComponent_Statics::
NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x552) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_PauseAnimation @ 146a47910

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PauseAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetComponent @ 146a47950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetComponent(void)

{
  if (Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton,
               &Z_Construct_UClass_UWidgetComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton;
}

// Z_Construct_UEnum_UMG_ETickMode @ 146a47990

UEnum * __cdecl Z_Construct_UEnum_UMG_ETickMode(void)

{
  if (Z_Registration_Info_UEnum_ETickMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETickMode.InnerSingleton,
               &Z_Construct_UEnum_UMG_ETickMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETickMode.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetBlendMode @ 146a479d0

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetBlendMode(void)

{
  if (Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetGeometryMode @ 146a47a10

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetGeometryMode(void)

{
  if (Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetSpace @ 146a47a50

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetSpace(void)

{
  if (Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetTimingPolicy @ 146a47a90

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetTimingPolicy(void)

{
  if (Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWindowVisibility @ 146a47ad0

UEnum * __cdecl Z_Construct_UEnum_UMG_EWindowVisibility(void)

{
  if (Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWindowVisibility_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton;
}

// NewProp_bIncludeWindowPosition_SetBit @ 146a47b10

void __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::
NewProp_bIncludeWindowPosition_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// EWidgetSpace_StaticEnum @ 146a47b20

UEnum * __cdecl EWidgetSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetSpace,(UObject *)pUVar1,L"EWidgetSpace");
  }
  return Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx @ 146a47b60

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWindowButtonsEnabled_SetBit @ 146a47ba0

void __cdecl
Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c8) = 1;
  return;
}

// NewProp_bDoubleClickTogglesFullscreen_SetBit @ 146a47bb0

void __cdecl
Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c9) = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal @ 146a47bc0

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a47c00

void __cdecl
Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_bRestoreState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// EWidgetTimingPolicy_StaticEnum @ 146a47c10

UEnum * __cdecl EWidgetTimingPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTimingPolicy,(UObject *)pUVar1,
                       L"EWidgetTimingPolicy");
  }
  return Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton;
}

// NewProp_bFlushInput_SetBit @ 146a47c50

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::
NewProp_bFlushInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// EWidgetBlendMode_StaticEnum @ 146a47c60

UEnum * __cdecl EWidgetBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetBlendMode,(UObject *)pUVar1,L"EWidgetBlendMode")
    ;
  }
  return Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly @ 146a47ca0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_PlayAnimation @ 146a47ce0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PlayAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal @ 146a47d20

UFunction * __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFlushInput_SetBit @ 146a47d60

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::
NewProp_bFlushInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// EWidgetGeometryMode_StaticEnum @ 146a47d70

UEnum * __cdecl EWidgetGeometryMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetGeometryMode,(UObject *)pUVar1,
                       L"EWidgetGeometryMode");
  }
  return Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton;
}

// NewProp_bRestoreState_SetBit @ 146a47db0

void __cdecl
Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx @ 146a47dc0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EWindowVisibility_StaticEnum @ 146a47e00

UEnum * __cdecl EWindowVisibility_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWindowVisibility,(UObject *)pUVar1,
                       L"EWindowVisibility");
  }
  return Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute @ 146a47f00

UFunction * __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_PlayAnimationForward @ 146a47f40

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PlayAnimationForward(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ETickMode_StaticEnum @ 146a47f80

UEnum * __cdecl ETickMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ETickMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ETickMode,(UObject *)pUVar1,L"ETickMode");
  }
  return Z_Registration_Info_UEnum_ETickMode.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition @ 146a47fc0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal @ 146a48000

UFunction * __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a48040

void __cdecl
Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bInAllUsers_SetBit @ 146a48050

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_bInAllUsers_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_PlayAnimationReverse @ 146a48060

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PlayAnimationReverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize @ 146a480a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute @ 146a48110

UFunction * __cdecl
Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus @ 146a48190

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a481d0

void __cdecl
Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle @ 146a481e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bActive_SetBit @ 146a483b0

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::
NewProp_bActive_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146a483c0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_Vector_AbsoluteToLocal @ 146a483d0

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_Vector_AbsoluteToLocal(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_Vector_AbsoluteToLocal_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponent_NoRegister @ 146a48410

UClass * __cdecl Z_Construct_UClass_UUIComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponent",&Z_Registration_Info_UClass_UUIComponent.InnerSingleton
               ,UUIComponent::StaticRegisterNativesUUIComponent,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIComponent>,InternalVTableHelperCtorCaller<UUIComponent>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponent.InnerSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive @ 146a484c0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponentUserWidgetExtension @ 146a48500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIComponentUserWidgetExtension(void)

{
  if (Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.OuterSingleton,
               &Z_Construct_UClass_UUIComponentUserWidgetExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.OuterSingleton;
}

// Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange @ 146a48540

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize @ 146a48580

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USlateBlueprintLibrary_Vector_LocalToAbsolute @ 146a48630

UFunction * __cdecl Z_Construct_UFunction_USlateBlueprintLibrary_Vector_LocalToAbsolute(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USlateBlueprintLibrary_Vector_LocalToAbsolute_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate @ 146a48670

UFunction * __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146a486b0

void * __thiscall
UUIComponent::FFieldNotificationClassDescriptor::_scalar_deleting_destructor_
          (FFieldNotificationClassDescriptor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UWidgetComponent_GetDrawSize @ 146a486e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetDrawSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_PlaySound @ 146a48720

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PlaySound(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_PlaySound_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTitleBarDragEnabled_SetBit @ 146a48760

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::
NewProp_bTitleBarDragEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bWindowButtonsVisible_SetBit @ 146a48770

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::
NewProp_bWindowButtonsVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bTitleBarVisible_SetBit @ 146a48780

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::
NewProp_bTitleBarVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// NewProp_IsDesignTime_SetBit @ 146a48790

void __cdecl
Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::NewProp_IsDesignTime_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_GetGeometryMode @ 146a487a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetGeometryMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUserWidget_NoRegister @ 146a487e0

UClass * __cdecl Z_Construct_UClass_UUserWidget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidget",&Z_Registration_Info_UClass_UUserWidget.InnerSingleton,
               UUserWidget::StaticRegisterNativesUUserWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserWidget>,
               InternalVTableHelperCtorCaller<UUserWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidget.InnerSingleton;
}

// Z_Construct_UFunction_UUserWidget_PreConstruct @ 146a488a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_PreConstruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a488e0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState @ 146a488f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponent @ 146a48930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIComponent(void)

{
  if (Z_Registration_Info_UClass_UUIComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIComponent.OuterSingleton,
               &Z_Construct_UClass_UUIComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIComponent.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw @ 146a48970

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_QueuePauseAnimation @ 146a489f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueuePauseAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueuePauseAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled @ 146a48a30

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a48a70

void __cdecl
Z_Construct_UFunction_UUserWidget_QueuePlayAnimation_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance @ 146a48a80

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_QueuePlayAnimation @ 146a48ac0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueuePlayAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueuePlayAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse @ 146a48b00

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer @ 146a48b40

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a48bc0

void __cdecl
Z_Construct_UFunction_UUserWidget_QueuePlayAnimationForward_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_GetPivot @ 146a48c10

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetPivot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_QueuePlayAnimationForward @ 146a48c50

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueuePlayAnimationForward(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueuePlayAnimationForward_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetRedrawTime @ 146a48cd0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetRedrawTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRestoreState_SetBit @ 146a48d10

void __cdecl
Z_Construct_UFunction_UUserWidget_QueuePlayAnimationReverse_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_QueuePlayAnimationReverse @ 146a48de0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueuePlayAnimationReverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueuePlayAnimationReverse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetRenderTarget @ 146a48e20

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetRenderTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a48e60

void __cdecl
Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bRestoreState_SetBit @ 146a48e70

void __cdecl
Z_Construct_UFunction_UUserWidget_QueuePlayAnimationTimeRange_Statics::NewProp_bRestoreState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen @ 146a48e80

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a48ec0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_QueuePlayAnimationTimeRange @ 146a48f10

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueuePlayAnimationTimeRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueuePlayAnimationTimeRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponentContainer_NoRegister @ 146a48fa0

UClass * __cdecl Z_Construct_UClass_UUIComponentContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentContainer",
               &Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton,
               UUIComponentContainer::StaticRegisterNativesUUIComponentContainer,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UUIComponentContainer>,
               InternalVTableHelperCtorCaller<UUIComponentContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentContainer.InnerSingleton;
}

// Z_Construct_UFunction_UWidgetComponent_GetTwoSided @ 146a49090

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetTwoSided(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_QueueStopAllAnimations @ 146a490d0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueueStopAllAnimations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueueStopAllAnimations_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject @ 146a49240

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_QueueStopAnimation @ 146a49280

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_QueueStopAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_QueueStopAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_RegisterInputComponent @ 146a49300

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_RegisterInputComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetWidget @ 146a49340

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_RemoveExtension @ 146a49430

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_RemoveExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace @ 146a49470

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a494b0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_RemoveExtensions @ 146a494c0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_RemoveExtensions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable @ 146a49500

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_RemoveFromViewport @ 146a49540

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_RemoveFromViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility @ 146a49580

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_ReverseAnimation @ 146a495c0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_ReverseAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a496b0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible @ 146a496c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport @ 146a49700

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_RequestRedraw @ 146a49740

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_RequestRedraw(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport @ 146a49840

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate @ 146a498b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor @ 146a499f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime @ 146a49a30

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWindowTitleBarAreaSlot @ 146a49a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWindowTitleBarAreaSlot(void)

{
  if (Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton,
               &Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle @ 146a49ab0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetColorAndOpacity @ 146a49af0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetColorAndOpacity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment @ 146a49b30

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInDrawAtDesiredSize_SetBit @ 146a49b70

void __cdecl
Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::
NewProp_bInDrawAtDesiredSize_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146a49b80

void __cdecl
Z_Construct_UFunction_UUserWidget_SetDesiredFocusWidget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding @ 146a49b90

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize @ 146a49bd0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetDesiredFocusWidget @ 146a49c10

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetDesiredFocusWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetDesiredFocusWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment @ 146a49c50

UFunction * __cdecl Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetDrawSize @ 146a49c90

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetDrawSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport @ 146a49cd0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetForegroundColor @ 146a49d10

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetForegroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetGeometryMode @ 146a49d50

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetGeometryMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldBlock_SetBit @ 146a49d90

void __cdecl
Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::NewProp_bShouldBlock_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bUseManualRedraw_SetBit @ 146a49da0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_SetInputActionBlocking @ 146a49db0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetInputActionBlocking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw @ 146a49df0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USlateVectorArtData @ 146a49e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USlateVectorArtData(void)

{
  if (Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton,
               &Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSlateMeshVertex @ 146a49e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlateMeshVertex(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlateMeshVertex.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlateMeshVertex.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlateMeshVertex.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSlateMeshVertex.InnerSingleton;
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

// Z_Construct_UFunction_UUserWidget_SetInputActionPriority @ 146a49ef0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetInputActionPriority(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer @ 146a49f30

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146a49f70

void * __cdecl Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlateMeshVertex,&UE::CoreUObject::Private::Construct<FSlateMeshVertex>,&UE::CoreUObject::Private::ConstructForTests<FSlateMeshVertex>,&UE::CoreUObject::Private::Destruct<FSlateMeshVertex>,&UE::CoreUObject::Private::Copy<FSlateMeshVertex>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay @ 146a49fb0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetPivot @ 146a49ff0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetPivot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetOwningPlayer @ 146a4a030

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetOwningPlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetRedrawTime @ 146a4a070

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetRedrawTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_SetPadding @ 146a4a0b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetTickMode @ 146a4a0f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetTickMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantTickWhenOffscreen_SetBit @ 146a4a1f0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::
NewProp_bWantTickWhenOffscreen_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UUserWidget @ 146a4a200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserWidget(void)

{
  if (Z_Registration_Info_UClass_UUserWidget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserWidget.OuterSingleton,
               &Z_Construct_UClass_UUserWidget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserWidget.OuterSingleton;
}

// Z_Construct_UClass_UUserWidgetFunctionLibrary @ 146a4a240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUserWidgetFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UUserWidgetFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed @ 146a4a280

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_UMG_EWidgetAnimationEvent @ 146a4a2c0

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetAnimationEvent(void)

{
  if (Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton;
}

// Z_Construct_UEnum_UMG_EWidgetTickFrequency @ 146a4a300

UEnum * __cdecl Z_Construct_UEnum_UMG_EWidgetTickFrequency(void)

{
  if (Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton,
               &Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature @ 146a4a340

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature @ 146a4a380

UFunction * __cdecl
Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAnimationEventBinding @ 146a4a3c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationEventBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationEventBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationEventBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationEventBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationEventBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNamedSlotBinding @ 146a4a440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNamedSlotBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNamedSlotBinding.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNamedSlotBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNamedSlotBinding.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNamedSlotBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPaintContext @ 146a4a4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPaintContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPaintContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPaintContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FPaintContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPaintContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPaintContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FQueuedWidgetAnimationTransition @ 146a4a540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQueuedWidgetAnimationTransition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.InnerSingleton,
               &Z_Construct_UScriptStruct_FQueuedWidgetAnimationTransition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.InnerSingleton;
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

// Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen @ 146a4a5c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146a4a600

void * __cdecl
Z_Construct_UScriptStruct_FQueuedWidgetAnimationTransition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FQueuedWidgetAnimationTransition,&UE::CoreUObject::Private::Construct<FQueuedWidgetAnimationTransition>,&UE::CoreUObject::Private::ConstructForTests<FQueuedWidgetAnimationTransition>,&UE::CoreUObject::Private::Destruct<FQueuedWidgetAnimationTransition>,&UE::CoreUObject::Private::Copy<FQueuedWidgetAnimationTransition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRemoveDPIScale_SetBit @ 146a4a640

void __cdecl
Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_bRemoveDPIScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_SetPositionInViewport @ 146a4a650

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_SetPositionInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity @ 146a4a690

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bWantTwoSided_SetBit @ 146a4a6d0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_StopAllAnimations @ 146a4a6e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_StopAllAnimations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetTwoSided @ 146a4a720

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetTwoSided(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EWidgetTickFrequency_StaticEnum @ 146a4a760

UEnum * __cdecl EWidgetTickFrequency_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTickFrequency,(UObject *)pUVar1,
                       L"EWidgetTickFrequency");
  }
  return Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton;
}

// Z_Construct_UFunction_UUserWidget_StopAnimation @ 146a4a7a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_StopAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EWidgetAnimationEvent_StaticEnum @ 146a4a7e0

UEnum * __cdecl EWidgetAnimationEvent_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetAnimationEvent,(UObject *)pUVar1,
                       L"EWidgetAnimationEvent");
  }
  return Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton;
}

// Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions @ 146a4a820

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetWidget @ 146a4a860

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions @ 146a4a8a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146a4a8e0

void * __cdecl Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationEventBinding,&UE::CoreUObject::Private::Construct<FAnimationEventBinding>,&UE::CoreUObject::Private::ConstructForTests<FAnimationEventBinding>,&UE::CoreUObject::Private::Destruct<FAnimationEventBinding>,&UE::CoreUObject::Private::Copy<FAnimationEventBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace @ 146a4a920

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_StopListeningForInputAction @ 146a4a960

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_StopListeningForInputAction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInWindowFocusable_SetBit @ 146a4a9a0

void __cdecl
Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable @ 146a4a9b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_Tick @ 146a4a9f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_Tick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_Tick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility @ 146a4aa30

UFunction * __cdecl Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146a4aa70

void * __cdecl Z_Construct_UScriptStruct_FPaintContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPaintContext,&UE::CoreUObject::Private::Construct<FPaintContext>,&UE::CoreUObject::Private::ConstructForTests<FPaintContext>,&UE::CoreUObject::Private::Destruct<FPaintContext>,&UE::CoreUObject::Private::Copy<FPaintContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished @ 146a4aab0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bManuallyRedraw_SetBit @ 146a4aaf0

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c8) = 1;
  return;
}

// NewProp_bRedrawRequested_SetBit @ 146a4ab00

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c9) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted @ 146a4ab10

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bUseInvalidationInWorldSpace_SetBit @ 146a4ab50

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bUseInvalidationInWorldSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5e0) = 1;
  return;
}

// NewProp_bDrawAtDesiredSize_SetBit @ 146a4ab60

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5e1) = 1;
  return;
}

// NewProp_bReceiveHardwareInput_SetBit @ 146a4ab70

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f8) = 1;
  return;
}

// NewProp_bWindowFocusable_SetBit @ 146a4ab80

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5f9) = 1;
  return;
}

// NewProp_bApplyGammaCorrection_SetBit @ 146a4ab90

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5fb) = 1;
  return;
}

// NewProp_bIsTwoSided_SetBit @ 146a4aba0

void __cdecl Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x62d) = 1;
  return;
}

// NewStructOps @ 146a4abb0

void * __cdecl Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNamedSlotBinding,&UE::CoreUObject::Private::Construct<FNamedSlotBinding>,&UE::CoreUObject::Private::ConstructForTests<FNamedSlotBinding>,&UE::CoreUObject::Private::Destruct<FNamedSlotBinding>,&UE::CoreUObject::Private::Copy<FNamedSlotBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_TickWhenOffscreen_SetBit @ 146a4abf0

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x62e) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished @ 146a4ac00

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetBlueprintGeneratedClass @ 146a4ac40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintGeneratedClass(void)

{
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton,
               &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton;
}

// NewProp_bAddedToScreen_SetBit @ 146a4ac80

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x678) = 1;
  return;
}

// Z_Construct_UEnum_UMG_EBindingKind @ 146a4ac90

UEnum * __cdecl Z_Construct_UEnum_UMG_EBindingKind(void)

{
  if (Z_Registration_Info_UEnum_EBindingKind.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBindingKind.InnerSingleton,
               &Z_Construct_UEnum_UMG_EBindingKind_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBindingKind.InnerSingleton;
}

// NewProp_bEditTimeUsable_SetBit @ 146a4acd0

void __cdecl
Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x679) = 1;
  return;
}

// Z_Construct_UScriptStruct_FDelegateRuntimeBinding @ 146a4ace0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDelegateRuntimeBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDelegateRuntimeBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDelegateRuntimeBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDelegateRuntimeBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDelegateRuntimeBinding.InnerSingleton;
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

// EBindingKind_StaticEnum @ 146a4ad60

UEnum * __cdecl EBindingKind_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBindingKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EBindingKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EBindingKind,(UObject *)pUVar1,L"EBindingKind");
  }
  return Z_Registration_Info_UEnum_EBindingKind.OuterSingleton;
}

// NewStructOps @ 146a4ada0

void * __cdecl Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDelegateRuntimeBinding,&UE::CoreUObject::Private::Construct<FDelegateRuntimeBinding>,&UE::CoreUObject::Private::ConstructForTests<FDelegateRuntimeBinding>,&UE::CoreUObject::Private::Destruct<FDelegateRuntimeBinding>,&UE::CoreUObject::Private::Copy<FDelegateRuntimeBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted @ 146a4ade0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_UnregisterInputComponent @ 146a4ae20

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_UnregisterInputComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidgetFunctionLibrary_Conv_UMGSequencePlayer @ 146a4af20

UFunction * __cdecl Z_Construct_UFunction_UUserWidgetFunctionLibrary_Conv_UMGSequencePlayer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidgetFunctionLibrary_Conv_UMGSequencePlayer_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidgetFunctionLibrary_GetOuterUserWidget @ 146a4af60

UFunction * __cdecl Z_Construct_UFunction_UUserWidgetFunctionLibrary_GetOuterUserWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidgetFunctionLibrary_GetOuterUserWidget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bClassRequiresNativeTick_SetBit @ 146a4afa0

void __cdecl
Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x388) = *(uint *)((longlong)param_1 + 0x388) | 1;
  return;
}

// NewProp_bCanCallInitializedWithoutPlayerContext_SetBit @ 146a4afb0

void __cdecl
Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::
NewProp_bCanCallInitializedWithoutPlayerContext_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x388) = *(uint *)((longlong)param_1 + 0x388) | 2;
  return;
}

// NewProp_bUseCullingDeltaTime_SetBit @ 146a4afc0

void __cdecl
Z_Construct_UClass_UUserWidget_Statics::NewProp_bUseCullingDeltaTime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f8) = 1;
  return;
}

// NewProp_bIsFocusable_SetBit @ 146a4afd0

void __cdecl Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cc) = *(byte *)((longlong)param_1 + 0x2cc) | 1;
  return;
}

// NewProp_bStopAction_SetBit @ 146a4afe0

void __cdecl Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cc) = *(byte *)((longlong)param_1 + 0x2cc) | 2;
  return;
}

// NewProp_bAutomaticallyRegisterInputOnConstruction_SetBit @ 146a4aff0

void __cdecl
Z_Construct_UClass_UUserWidget_Statics::NewProp_bAutomaticallyRegisterInputOnConstruction_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2cc) = *(byte *)((longlong)param_1 + 0x2cc) | 4;
  return;
}

// NewProp_bHasScriptImplementedTick_SetBit @ 146a4b000

void __cdecl
Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x348) = *(byte *)((longlong)param_1 + 0x348) | 1;
  return;
}

// NewProp_bHasScriptImplementedPaint_SetBit @ 146a4b010

void __cdecl
Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x348) = *(byte *)((longlong)param_1 + 0x348) | 2;
  return;
}

// Z_Construct_UFunction_UUserWidget_AddExtension @ 146a4b0e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_AddExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_AddExtension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4b120

void __cdecl
Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_AddToPlayerScreen @ 146a4b130

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_AddToPlayerScreen(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_AddToViewport @ 146a4b170

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_AddToViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 146a4b1b0

void * __cdecl Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetComponentInstanceData,&UE::CoreUObject::Private::Construct<FWidgetComponentInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FWidgetComponentInstanceData>,&UE::CoreUObject::Private::Destruct<FWidgetComponentInstanceData>,&UE::CoreUObject::Private::Copy<FWidgetComponentInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UUserWidget_BindToAnimationEvent @ 146a4b1f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_BindToAnimationEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_BindToAnimationFinished @ 146a4b230

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_BindToAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_BindToAnimationStarted @ 146a4b270

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_BindToAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_CancelLatentActions @ 146a4b2b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_CancelLatentActions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_Construct @ 146a4b2f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_Construct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_Construct_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_Destruct @ 146a4b370

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_Destruct(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_Destruct_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_FlushAnimations @ 146a4b470

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_FlushAnimations(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146a4b4b0

void * __thiscall IUMGModule::_scalar_deleting_destructor_(IUMGModule *this,uint param_1)

{
  *this = (IUMGModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport @ 146a4b4f0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport @ 146a4b530

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime @ 146a4b570

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetExtension @ 146a4b5b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetExtension(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_GetExtension_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetBlueprintLibrary @ 146a4b850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature @ 146a4b890

UFunction * __cdecl
Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop @ 146a4b8d0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInAllJoysticks_SetBit @ 146a4b910

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::
NewProp_bInAllJoysticks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick @ 146a4b920

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWrapBoxSlot_NoRegister @ 146a4b960

UClass * __cdecl Z_Construct_UClass_UWrapBoxSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBoxSlot",&Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton
               ,UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWrapBoxSlot>,
               InternalVTableHelperCtorCaller<UWrapBoxSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse @ 146a4bbf0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInAllUsers_SetBit @ 146a4bc30

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_bInAllUsers_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus @ 146a4bd60

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWrapBox @ 146a4bda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWrapBox(void)

{
  if (Z_Registration_Info_UClass_UWrapBox.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWrapBox.OuterSingleton,
               &Z_Construct_UClass_UWrapBox_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWrapBox.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146a4bea0

void * __thiscall
UWidgetSwitcher::FFieldNotificationClassDescriptor::_scalar_deleting_destructor_
          (FFieldNotificationClassDescriptor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UUserWidget_GetExtensions @ 146a4bed0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetExtensions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponentContainer @ 146a4bf10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIComponentContainer(void)

{
  if (Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton,
               &Z_Construct_UClass_UUIComponentContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUIComponentContainer.OuterSingleton;
}

// Z_Construct_UScriptStruct_FUIComponentTarget @ 146a4bf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUIComponentTarget(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUIComponentTarget.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUIComponentTarget.InnerSingleton,
               &Z_Construct_UScriptStruct_FUIComponentTarget_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUIComponentTarget.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUIComponentTarget.InnerSingleton;
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

// Z_Construct_UFunction_UWidgetBlueprintLibrary_Create @ 146a4bfd0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_Create(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146a4c010

void * __cdecl Z_Construct_UScriptStruct_FUIComponentTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUIComponentTarget,&UE::CoreUObject::Private::Construct<FUIComponentTarget>,&UE::CoreUObject::Private::ConstructForTests<FUIComponentTarget>,&UE::CoreUObject::Private::Destruct<FUIComponentTarget>,&UE::CoreUObject::Private::Copy<FUIComponentTarget>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UWrapBox_AddChildToWrapBox @ 146a4c050

UFunction * __cdecl Z_Construct_UFunction_UWrapBox_AddChildToWrapBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c090

void __cdecl
Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment @ 146a4c0a0

UFunction * __cdecl Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetIsVisible @ 146a4c0e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetIsVisible(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation @ 146a4c120

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding @ 146a4c160

UFunction * __cdecl Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager @ 146a4c1a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag @ 146a4c1e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn @ 146a4c220

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c300

void __cdecl
Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bExplicitWrapSize_SetBit @ 146a4c3d0

void __cdecl Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_IsAnimationPlaying @ 146a4c3e0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsAnimationPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed @ 146a4c420

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c460

void __cdecl
Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus @ 146a4c470

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward @ 146a4c4b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c4f0

void __cdecl
Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UWidgetSwitcher @ 146a4c500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetSwitcher(void)

{
  if (Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton,
               &Z_Construct_UClass_UWidgetSwitcher_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcher.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox @ 146a4c540

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying @ 146a4c580

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget @ 146a4c5c0

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAntiAlias_SetBit @ 146a4c600

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_bAntiAlias_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146a4c610

void __cdecl
Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex @ 146a4c620

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_GetActiveWidgetIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine @ 146a4c660

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_IsInteractable @ 146a4c6a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsInteractable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c6e0

void __cdecl
Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets @ 146a4c6f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_GetNumWidgets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAntiAlias_SetBit @ 146a4c730

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_bAntiAlias_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_IsListeningForInputAction @ 146a4c740

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsListeningForInputAction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4c780

void __cdecl
Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex @ 146a4c790

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_GetWidgetAtIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines @ 146a4c7d0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_IsPlayingAnimation @ 146a4c810

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_IsPlayingAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget @ 146a4c850

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bConsume_SetBit @ 146a4c890

void __cdecl
Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_bConsume_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_ListenForInputAction @ 146a4c8a0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_ListenForInputAction(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline @ 146a4c8e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex @ 146a4c920

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcher_SetActiveWidgetIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWrapBoxSlot @ 146a4c960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWrapBoxSlot(void)

{
  if (Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton,
               &Z_Construct_UClass_UWrapBoxSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton;
}

// NewProp_InbFillEmptySpace_SetBit @ 146a4c9a0

void __cdecl
Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace @ 146a4c9b0

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText @ 146a4c9f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath @ 146a4ca30

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan @ 146a4ca70

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted @ 146a4cab0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment @ 146a4caf0

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged @ 146a4cb30

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InForceNewLine_SetBit @ 146a4cb70

void __cdecl
Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::NewProp_InForceNewLine_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetNewLine @ 146a4cc40

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetNewLine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnAnimationFinished @ 146a4cc80

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnAnimationFinished(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop @ 146a4ccc0

UFunction * __cdecl Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension @ 146a4ced0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension(void)

{
  if (Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
                OuterSingleton,
               &Z_Construct_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
         OuterSingleton;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetPadding @ 146a4cf10

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetPadding(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnAnimationStarted @ 146a4cf50

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnAnimationStarted(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment @ 146a4cf90

UFunction * __cdecl Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnDragCancelled @ 146a4cfd0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDragCancelled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFillEmptySpace_SetBit @ 146a4d010

void __cdecl Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4e) = 1;
  return;
}

// NewProp_bForceNewLine_SetBit @ 146a4d020

void __cdecl Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4f) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_OnDragDetected @ 146a4d030

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDragDetected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnDragEnter @ 146a4d070

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDragEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUserWidget_OnDragLeave @ 146a4d0b0

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDragLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146a4d0f0

void __cdecl
Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UUserWidget_OnDragOver @ 146a4d100

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDragOver(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetComponent_NoRegister @ 146a4d140

UClass * __cdecl Z_Construct_UClass_UWidgetComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetComponent",
               &Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton,
               UWidgetComponent::StaticRegisterNativesUWidgetComponent,0x750,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetComponent>,
               InternalVTableHelperCtorCaller<UWidgetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetComponent.InnerSingleton;
}

// Z_Construct_UClass_UWidgetSwitcherSlot @ 146a4d200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetSwitcherSlot(void)

{
  if (Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton,
               &Z_Construct_UClass_UWidgetSwitcherSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcherSlot.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 146a4d240

void __cdecl
Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment @ 146a4d250

UFunction * __cdecl Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetSwitcherSlot_SetHorizontalAlignment_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDragDropOperation_NoRegister @ 146a4d290

UClass * __cdecl Z_Construct_UClass_UDragDropOperation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DragDropOperation",
               &Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton,
               UDragDropOperation::StaticRegisterNativesUDragDropOperation,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDragDropOperation>,
               InternalVTableHelperCtorCaller<UDragDropOperation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton;
}

// Z_Construct_UFunction_UUserWidget_OnDrop @ 146a4d340

UFunction * __cdecl Z_Construct_UFunction_UUserWidget_OnDrop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UUserWidget_OnDrop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_TopLevelOnly_SetBit @ 146a4d380

void __cdecl
Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::
NewProp_TopLevelOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// <lambda_invoker_cdecl> @ 146a4d390

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  <lambda_25> local_res8 [32];
  
  operator()(local_res8);
  return;
}

// CastChecked<UWidgetComponent,UActorComponent> @ 146a4ebe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetComponent * __cdecl CastChecked<UWidgetComponent,UActorComponent>(UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UWidgetComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWidgetComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWidgetComponent *)param_1;
  }
  pFVar3 = GetTypeName<UWidgetComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWidgetSwitcherSlot,UPanelSlot> @ 146a4eca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetSwitcherSlot * __cdecl CastChecked<UWidgetSwitcherSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UWidgetSwitcherSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWidgetSwitcherSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWidgetSwitcherSlot *)param_1;
  }
  pFVar3 = GetTypeName<UWidgetSwitcherSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWindowTitleBarArea,UPanelWidget> @ 146a4ed60

/* WARNING: Enum "Type": Some values do not have unique names */

UWindowTitleBarArea * __cdecl
CastChecked<UWindowTitleBarArea,UPanelWidget>(TObjectPtr<UPanelWidget> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UWindowTitleBarArea *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UPanelWidget *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UWindowTitleBarArea>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UWindowTitleBarArea *)0x0;
  }
  else {
    pUVar2 = UWindowTitleBarArea::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UWindowTitleBarArea *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (UWindowTitleBarArea *)0x0)) {
      pFVar3 = GetTypeName<UWindowTitleBarArea>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UPanelWidget>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UWindowTitleBarAreaSlot,UPanelSlot> @ 146a4ee20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWindowTitleBarAreaSlot * __cdecl
CastChecked<UWindowTitleBarAreaSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UWindowTitleBarAreaSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWindowTitleBarAreaSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWindowTitleBarAreaSlot *)param_1;
  }
  pFVar3 = GetTypeName<UWindowTitleBarAreaSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UWrapBoxSlot,UPanelSlot> @ 146a4eee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBoxSlot * __cdecl CastChecked<UWrapBoxSlot,UPanelSlot>(UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar3 = GetTypeName<UWrapBoxSlot>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWrapBoxSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UWrapBoxSlot *)param_1;
  }
  pFVar3 = GetTypeName<UWrapBoxSlot>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int> @ 146a4efa0

void __cdecl
ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
          (void *param_1,TObjectPtr<UUserWidgetExtension> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UWidgetAnimation_*,TObjectPtr<UWidgetAnimation>,int> @ 146a4efd0

void __cdecl
ConstructItems<UWidgetAnimation_*,TObjectPtr<UWidgetAnimation>,int>
          (void *param_1,TObjectPtr<UWidgetAnimation> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimationEventBinding,FAnimationEventBinding,int> @ 146a4f000

void __cdecl
ConstructItems<FAnimationEventBinding,FAnimationEventBinding,int>
          (void *param_1,FAnimationEventBinding *param_2,int param_3)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FReadAccessScope local_28;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)&(param_2->Delegate).field_0x10;
    lVar4 = (longlong)param_1 + 0x14;
    do {
      pUVar2 = (UObject *)puVar3[-3];
      *(UObject **)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar3) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(undefined8 *)(lVar4 + -0xc) = 0;
      *(undefined8 *)(lVar4 + -4) = 0;
      *(undefined8 *)(lVar4 + 4) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar3 + -2),&local_28);
      *(undefined8 *)(lVar4 + -4) = puVar3[-1];
      *(undefined8 *)(lVar4 + 4) = *puVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(puVar3 + 1);
      puVar1 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar3 = puVar3 + 6;
      *(undefined8 *)(lVar4 + 0x10) = *puVar1;
      lVar4 = lVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDelegateRuntimeBinding,FDelegateRuntimeBinding,int> @ 146a4f0d0

void __cdecl
ConstructItems<FDelegateRuntimeBinding,FDelegateRuntimeBinding,int>
          (void *param_1,FDelegateRuntimeBinding *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FPropertyPathSegment *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)&(param_2->SourcePath).field_0x10;
    puVar7 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)puVar6),
                       (FString *)(puVar6 + -6));
      pFVar1 = (ForAnyElementType *)(puVar7 + 2);
      *puVar7 = puVar6[-4];
      puVar7[1] = puVar6[-3];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *(int *)(puVar6 + -1);
      pFVar4 = (FPropertyPathSegment *)puVar6[-2];
      *(int *)(puVar7 + 3) = iVar3;
      if (iVar3 == 0) {
        *(int *)((longlong)puVar7 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,0,pFVar1,iVar3,(int *)((longlong)puVar7 + 0x1c));
        ConstructItems<FPropertyPathSegment,FPropertyPathSegment,int>(pFVar1->Data,pFVar4,iVar3);
      }
      puVar7[4] = *puVar6;
      pUVar5 = (UObject *)puVar6[1];
      puVar7[5] = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      puVar7[6] = puVar6[2];
      puVar7[7] = puVar6[3];
      *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar6 + 4);
      *(undefined1 *)((longlong)puVar7 + 0x44) = *(undefined1 *)((longlong)puVar6 + 0x24);
      puVar2 = puVar6 + 5;
      puVar6 = puVar6 + 0xc;
      *(undefined1 *)(puVar7 + 9) = *(undefined1 *)puVar2;
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FQueuedWidgetAnimationTransition,FQueuedWidgetAnimationTransition,int> @ 146a4f210

void __cdecl
ConstructItems<FQueuedWidgetAnimationTransition,FQueuedWidgetAnimationTransition,int>
          (void *param_1,FQueuedWidgetAnimationTransition *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  bool *pbVar5;
  
  if (param_3 != 0) {
    pcVar4 = (char *)((longlong)param_1 + 0x18);
    pbVar5 = &(param_2->EndAtTime).bIsSet;
    do {
      pUVar3 = *(UObject **)(pcVar4 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      *(UObject **)(pcVar4 + -0x18) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      cVar1 = pbVar5[-0x10];
      pcVar4[-8] = '\0';
      pcVar4[-0x10] = cVar1;
      cVar1 = pbVar5[-8];
      pcVar4[-8] = cVar1;
      if (cVar1 != '\0') {
        *(undefined4 *)(pcVar4 + -0xc) = *(undefined4 *)(pbVar5 + -0xc);
      }
      *pcVar4 = '\0';
      bVar2 = *pbVar5;
      *pcVar4 = bVar2;
      if (bVar2 != false) {
        *(float *)(pcVar4 + -4) = ((TOptional<float> *)(pbVar5 + -4))->TypedValue;
      }
      pcVar4[8] = '\0';
      cVar1 = pbVar5[8];
      pcVar4[8] = cVar1;
      if (cVar1 != '\0') {
        *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(pbVar5 + 4);
      }
      pcVar4[0x10] = '\0';
      cVar1 = pbVar5[0x10];
      pcVar4[0x10] = cVar1;
      if (cVar1 != '\0') {
        *(undefined4 *)(pcVar4 + 0xc) = *(undefined4 *)(pbVar5 + 0xc);
      }
      pcVar4[0x18] = '\0';
      cVar1 = pbVar5[0x18];
      pcVar4[0x18] = cVar1;
      if (cVar1 != '\0') {
        *(undefined4 *)(pcVar4 + 0x14) = *(undefined4 *)(pbVar5 + 0x14);
      }
      pcVar4[0x1d] = '\0';
      cVar1 = pbVar5[0x1d];
      pcVar4[0x1d] = cVar1;
      if (cVar1 != '\0') {
        pcVar4[0x1c] = pbVar5[0x1c];
      }
      pbVar5 = pbVar5 + 0x38;
      pcVar4 = pcVar4 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int> @ 146a4f310

void __cdecl
ConstructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
          (void *param_1,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDeferredPaint **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// CreateWidget<UUserWidget,UUserWidget_*> @ 146a4f3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl
CreateWidget<UUserWidget,UUserWidget_*>
          (UUserWidget *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_CreateWidget> FVar9;
  TStatId TVar10;
  UClass *pUVar11;
  UUserWidget *pUVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  UUserWidget *pUVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_68;
  byte local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  pUVar12 = (UUserWidget *)0x0;
  FVar9 = StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName(&local_res10,"STAT_CreateWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                       L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar9;
  bVar5 = false;
  bVar7 = false;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidget.h"
                   ,0x728);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar14;
      local_58 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar6 = true;
      goto LAB_146a4f542;
    }
  }
  bVar6 = false;
  LVar14 = local_58;
LAB_146a4f542:
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_CreateWidget;
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar8 = FName::FName((FName *)&local_res8.s,"STAT_CreateWidget");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar8,
                    L"UserWidget Create","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  pUVar13 = pUVar12;
  if ((lVar3 != 0) && (pUVar11 = UUserWidget::StaticClass(), pUVar11 != (UClass *)0x0)) {
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar13 = *(UUserWidget **)param_2.Class.field0_0x0;
    }
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,(UObjectBaseUtility *)pUVar13,TVar10);
  if (param_1 != (UUserWidget *)0x0) {
    local_res8 = *(LARGE_INTEGER *)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_res8.QuadPart != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar12 = UUserWidget::CreateWidgetInstance
                        ((UWidget *)param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3);
  }
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58._0_4_;
      local_48.NameAndInfo.Number = LVar14.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return pUVar12;
}

// DefaultConstructItems<FQueuedWidgetAnimationTransition,int> @ 146a4f790

void __cdecl DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0;
      puVar1[-8] = 6;
      *puVar1 = 0;
      puVar1[8] = 0;
      puVar1[0x10] = 0;
      puVar1[0x18] = 0;
      puVar1[0x20] = 0;
      puVar1[0x25] = 0;
      puVar1 = puVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimationEventBinding,int> @ 146a4f870

void __cdecl DestructItems<FAnimationEventBinding,int>(FAnimationEventBinding *param_1,int param_2)

{
  FWidgetAnimationDynamicEvent *this;
  
  if (param_2 != 0) {
    this = &param_1->Delegate;
    do {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`<lambda_25>::operator()'::__l2::FClassAndSize,int> @ 146a4f8b0

void __cdecl
DestructItems<_<lambda_25>::operator()_::__l2::FClassAndSize,int>
          (FClassAndSize *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ClassName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FDelegateRuntimeBinding,int> @ 146a4f8f0

void __cdecl
DestructItems<FDelegateRuntimeBinding,int>(FDelegateRuntimeBinding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&param_1->SourcePath);
    pFVar1 = (param_1->ObjectName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<FWidgetAnimationState,1>,int> @ 146a4f940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<FWidgetAnimationState,1>,int>
          (TSharedRef<FWidgetAnimationState,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`SPostBufferUpdate::OnPaint'::__l5::TSTR_FUpdateValuesRenderThreadFX_PaintGeometry312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146a50070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_SPostBufferUpdate::OnPaint_::__l5::TSTR_FUpdateValuesRenderThreadFX_PaintGeometry312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`SPostBufferUpdate::OnPaint'::__l5::TSTR_FUpdateValuesRenderThreadFX_PaintGeometry312>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146a501c1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146a503b5;
  }
LAB_146a501c1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146a5029f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a5029f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146a503b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::TSTR_FUpdateValuesRenderThreadFX_UsePaintGeometry236>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146a503f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_SPostBufferUpdate::SetUsePaintGeometry_::__l5::TSTR_FUpdateValuesRenderThreadFX_UsePaintGeometry236>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::TSTR_FUpdateValuesRenderThreadFX_UsePaintGeometry236>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146a50541;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146a50735;
  }
LAB_146a50541:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146a5061f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a5061f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146a50735:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::TSTR_ReleaseCommand291>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146a50770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_SPostBufferUpdate::ReleasePostBufferUpdater_::__l2::TSTR_ReleaseCommand291>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::TSTR_ReleaseCommand291>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_146a508c1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_146a50ab5;
  }
LAB_146a508c1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_146a5099f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146a5099f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_146a50ab5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFProperty<FDelegateProperty> @ 146a50af0

FDelegateProperty * __cdecl
FindFProperty<FDelegateProperty>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FDelegateProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FDelegateProperty> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FDelegateProperty *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_146a50b80;
  }
  local_28.bIncludeInterface = false;
LAB_146a50b80:
  TFieldIterator<FDelegateProperty>::IterateToNext(&local_28);
  pFVar2 = (FDelegateProperty *)local_28.Field;
  while( true ) {
    if (pFVar2 == (FDelegateProperty *)0x0) {
      return (FDelegateProperty *)0x0;
    }
    local_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == param_2) break;
    local_28.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FDelegateProperty>::IterateToNext(&local_28);
    pFVar2 = (FDelegateProperty *)local_28.Field;
  }
  return pFVar2;
}

// FindFProperty<FObjectPropertyBase> @ 146a50c20

FObjectPropertyBase * __cdecl
FindFProperty<FObjectPropertyBase>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FObjectPropertyBase *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FObjectPropertyBase> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FObjectPropertyBase *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_146a50cb0;
  }
  local_28.bIncludeInterface = false;
LAB_146a50cb0:
  TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_28);
  pFVar2 = (FObjectPropertyBase *)local_28.Field;
  while( true ) {
    if (pFVar2 == (FObjectPropertyBase *)0x0) {
      return (FObjectPropertyBase *)0x0;
    }
    local_28.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == param_2) break;
    local_28.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_28);
    pFVar2 = (FObjectPropertyBase *)local_28.Field;
  }
  return pFVar2;
}

// FindOrLoadObject<UMaterialInterface> @ 146a50e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMaterialInterface * __cdecl
ConstructorHelpersInternal::FindOrLoadObject<UMaterialInterface>(FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  size_t sVar3;
  UMaterialInterface *pUVar4;
  FUObjectItem *this;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  pFVar7 = pFVar1;
  if (pFVar6 != pFVar1) {
    do {
      if (*(short *)pFVar7 == 0x2e) {
        if ((int)((longlong)pFVar7 - (longlong)pFVar1 >> 1) != -1) goto LAB_146a50f26;
        break;
      }
      pFVar7 = pFVar7 + 2;
    } while (pFVar7 != pFVar6);
    do {
      if (pFVar6 == pFVar1) goto LAB_146a50f26;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x2f);
    iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 1);
    if (iVar5 != -1) {
      ::FString::RightChop(param_1,(FString *)&local_28,iVar5 + 1);
      ::FString::AppendChar(param_1,L'.');
      iVar5 = local_28.Size + -1;
      if (local_28.Size == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(param_1,local_28.DataPtr,iVar5);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
LAB_146a50f26:
  pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  local_18.DataPtr = (wchar_t *)0x0;
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  if ((param_1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146a50f6c;
  }
  sVar3 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar3;
LAB_146a50f6c:
  pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar2,(UObject *)0x0,&local_28,&local_18,param_2,(UPackageMap *)0x0,
                            true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UMaterialInterface *)0x0) {
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  return pUVar4;
}

// ForEachExtension<`UUserWidget::NativeConstruct'::__l5::<lambda_1>_> @ 146a50ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::ForEachExtension<_UUserWidget::NativeConstruct_::__l5::<lambda_1>_>
          (UWidgetBlueprintGeneratedClass *this,<lambda_1> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  
  while( true ) {
    pFVar7 = (this->Extensions).AllocatorInstance.Data;
    iVar2 = (this->Extensions).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      plVar3 = *(longlong **)pFVar7;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\WidgetBlueprintGeneratedClass.h"
                             ,0xdb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x2c8))(plVar3,param_1.__this);
      pFVar7 = pFVar7 + 8;
    }
    if ((param_2 == false) ||
       (this = (UWidgetBlueprintGeneratedClass *)this->_padding_,
       this == (UWidgetBlueprintGeneratedClass *)0x0)) {
      return;
    }
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_) break;
    param_2 = true;
  }
  return;
}

// ForEachExtension<`UUserWidget::NativeOnInitialized'::__l5::<lambda_1>_> @ 146a510e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::
ForEachExtension<_UUserWidget::NativeOnInitialized_::__l5::<lambda_1>_>
          (UWidgetBlueprintGeneratedClass *this,<lambda_1> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  
  while( true ) {
    pFVar7 = (this->Extensions).AllocatorInstance.Data;
    iVar2 = (this->Extensions).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      plVar3 = *(longlong **)pFVar7;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\WidgetBlueprintGeneratedClass.h"
                             ,0xdb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1.__this);
      pFVar7 = pFVar7 + 8;
    }
    if ((param_2 == false) ||
       (this = (UWidgetBlueprintGeneratedClass *)this->_padding_,
       this == (UWidgetBlueprintGeneratedClass *)0x0)) {
      return;
    }
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_) break;
    param_2 = true;
  }
  return;
}

// ForEachExtension<`UUserWidget::NativePreConstruct'::__l5::<lambda_1>_> @ 146a511d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::
ForEachExtension<_UUserWidget::NativePreConstruct_::__l5::<lambda_1>_>
          (UWidgetBlueprintGeneratedClass *this,<lambda_1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UWidgetBlueprintGeneratedClass *this_00;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  <lambda_1> local_38;
  
  pFVar7 = (this->Extensions).AllocatorInstance.Data;
  iVar2 = (this->Extensions).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Extensions).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar1) break;
    plVar3 = *(longlong **)pFVar7;
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Extension",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\WidgetBlueprintGeneratedClass.h"
                         ,0xdb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x2c0))(plVar3,param_1->__this,param_1->bIsDesignTime);
    pFVar7 = pFVar7 + 8;
  }
  if ((param_2) &&
     (this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_,
     this_00 != (UWidgetBlueprintGeneratedClass *)0x0)) {
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      local_38.__this = param_1->__this;
      local_38.bIsDesignTime = param_1->bIsDesignTime;
      local_38._9_7_ = *(undefined7 *)&param_1->field_0x9;
      ForEachExtension<_UUserWidget::NativePreConstruct_::__l5::<lambda_1>_>(this_00,&local_38,true)
      ;
    }
  }
  return;
}

// ForEachExtension<`UUserWidget::NativeDestruct'::__l19::<lambda_1>_> @ 146a512f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::ForEachExtension<_UUserWidget::NativeDestruct_::__l19::<lambda_1>_>
          (UWidgetBlueprintGeneratedClass *this,<lambda_1> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  
  while( true ) {
    pFVar7 = (this->Extensions).AllocatorInstance.Data;
    iVar2 = (this->Extensions).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      plVar3 = *(longlong **)pFVar7;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\WidgetBlueprintGeneratedClass.h"
                             ,0xdb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x2d0))(plVar3,param_1.__this);
      pFVar7 = pFVar7 + 8;
    }
    if ((param_2 == false) ||
       (this = (UWidgetBlueprintGeneratedClass *)this->_padding_,
       this == (UWidgetBlueprintGeneratedClass *)0x0)) {
      return;
    }
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_) break;
    param_2 = true;
  }
  return;
}

// GetFullNameForCastLogError<UActorComponent> @ 146a51700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UActorComponent>
          (FString *__return_storage_ptr__,UActorComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UPlayer> @ 146a51730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UPlayer>(FString *__return_storage_ptr__,UPlayer *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ULocalPlayer> @ 146a51760

FString * __cdecl GetTypeName<ULocalPlayer>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULocalPlayer_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWidgetComponent> @ 146a517a0

FString * __cdecl GetTypeName<UWidgetComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWidgetComponent::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWidgetSwitcherSlot> @ 146a517e0

FString * __cdecl GetTypeName<UWidgetSwitcherSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWidgetSwitcherSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWindowTitleBarArea> @ 146a51820

FString * __cdecl GetTypeName<UWindowTitleBarArea>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWindowTitleBarArea::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWindowTitleBarAreaSlot> @ 146a51860

FString * __cdecl GetTypeName<UWindowTitleBarAreaSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWindowTitleBarAreaSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UWrapBoxSlot> @ 146a518a0

FString * __cdecl GetTypeName<UWrapBoxSlot>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UWrapBoxSlot::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UDragDropOperation> @ 146a518e0

void __cdecl InternalConstructor<UDragDropOperation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x20 = 5;
    *(undefined ***)this = &___7UDragDropOperation__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UNavigationUIComponent> @ 146a51960

void __cdecl InternalConstructor<UNavigationUIComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[1].field_0x24 = 0xffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UNavigationUIComponent::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UNavigationUIComponent::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<USlateBlueprintLibrary> @ 146a519f0

void __cdecl InternalConstructor<USlateBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USlateBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<USlateVectorArtData> @ 146a51a20

void __cdecl InternalConstructor<USlateVectorArtData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USlateVectorArtData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UUIComponent> @ 146a51a70

void __cdecl InternalConstructor<UUIComponent>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[1].field_0x24 = 0xffff;
    *(undefined ***)this = &UUIComponent::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UUIComponent::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UUIComponentContainer> @ 146a51ad0

void __cdecl InternalConstructor<UUIComponentContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UUIComponentContainer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UUIComponentUserWidgetExtension> @ 146a51b10

void __cdecl InternalConstructor<UUIComponentUserWidgetExtension>(FObjectInitializer *param_1)

{
  UUserWidgetExtension *this;
  
  this = (UUserWidgetExtension *)param_1->Obj;
  if (this != (UUserWidgetExtension *)0x0) {
    UUserWidgetExtension::UUserWidgetExtension(this,param_1);
    this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UUIComponentUserWidgetExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UUIComponentWidgetBlueprintGeneratedClassExtension> @ 146a51b50

void __cdecl
InternalConstructor<UUIComponentWidgetBlueprintGeneratedClassExtension>(FObjectInitializer *param_1)

{
  UWidgetBlueprintGeneratedClassExtension *this;
  
  this = (UWidgetBlueprintGeneratedClassExtension *)param_1->Obj;
  if (this != (UWidgetBlueprintGeneratedClassExtension *)0x0) {
    UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension(this,param_1);
    *(undefined ***)this = &___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UUserWidget> @ 146a51b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UUserWidget>(FObjectInitializer *param_1)

{
  if ((UUserWidget *)param_1->Obj != (UUserWidget *)0x0) {
    UUserWidget::UUserWidget((UUserWidget *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UUserWidgetFunctionLibrary> @ 146a51bb0

void __cdecl InternalConstructor<UUserWidgetFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UUserWidgetFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWidgetBlueprintGeneratedClass> @ 146a51be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetBlueprintGeneratedClass>(FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass *this;
  FObjectInitializer *pFVar1;
  
  this = (UBlueprintGeneratedClass *)param_1->Obj;
  if (this != (UBlueprintGeneratedClass *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,pFVar1);
    this->_padding_ = (longlong)&UWidgetBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)&UWidgetBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffd;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWidgetBlueprintLibrary> @ 146a51c90

void __cdecl InternalConstructor<UWidgetBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWidgetBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWidgetComponent> @ 146a51cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetComponent>(FObjectInitializer *param_1)

{
  if ((UWidgetComponent *)param_1->Obj != (UWidgetComponent *)0x0) {
    UWidgetComponent::UWidgetComponent((UWidgetComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWidgetInteractionComponent> @ 146a51ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetInteractionComponent>(FObjectInitializer *param_1)

{
  if ((UWidgetInteractionComponent *)param_1->Obj != (UWidgetInteractionComponent *)0x0) {
    UWidgetInteractionComponent::UWidgetInteractionComponent
              ((UWidgetInteractionComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWidgetSwitcher> @ 146a51d00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetSwitcher>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UPanelWidget *this;
  
  this = (UPanelWidget *)param_1->Obj;
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 1;
    this->_padding_ = (longlong)&UWidgetSwitcher::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UWidgetSwitcher::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
    return;
  }
  return;
}

// InternalConstructor<UWidgetSwitcherSlot> @ 146a51d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWidgetSwitcherSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWindowTitleBarArea> @ 146a51db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWindowTitleBarArea>(FObjectInitializer *param_1)

{
  UContentWidget *this;
  
  this = (UContentWidget *)param_1->Obj;
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    this->field_0xf9 = this->field_0xf9 & 0xfe;
    *(undefined ***)this = &UWindowTitleBarArea::_vftable__for__UVisual__;
    *(undefined ***)&this->field_0x28 =
         &UWindowTitleBarArea::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    UWidget::SetVisibilityInternal((UWidget *)this,Visible);
    this[1].field_0x1 = 0;
  }
  return;
}

// InternalConstructor<UWindowTitleBarAreaSlot> @ 146a51e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWindowTitleBarAreaSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWrapBox> @ 146a51e70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWrapBox>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UPanelWidget *this;
  
  this = (UPanelWidget *)param_1->Obj;
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfe;
    this->_padding_ = (longlong)&UWrapBox::_vftable__for__UVisual__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    this->_padding_ = (longlong)&UWrapBox::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
    *(undefined4 *)&this[1]._padding_ = 0x43fa0000;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
  }
  return;
}

// InternalConstructor<UWrapBoxSlot> @ 146a51ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UWrapBoxSlot>(FObjectInitializer *param_1)

{
  UPanelSlot *this;
  
  this = (UPanelSlot *)param_1->Obj;
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDragDropOperation> @ 146a51f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDragDropOperation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDragDropOperation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UDragDropOperation__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNavigationUIComponent> @ 146a52030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNavigationUIComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNavigationUIComponent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNavigationUIComponent::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UNavigationUIComponent::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[1].field_0x24 = 0xffff;
    *(undefined1 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USlateBlueprintLibrary> @ 146a52140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USlateVectorArtData> @ 146a521f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USlateVectorArtData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USlateVectorArtData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USlateVectorArtData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIComponent> @ 146a522b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIComponent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UUIComponent::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UUIComponent::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[1].field_0x24 = 0xffff;
    *(undefined1 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIComponentContainer> @ 146a52380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUIComponentContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIComponentContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUIComponentContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIComponentUserWidgetExtension> @ 146a52440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUIComponentUserWidgetExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIComponentUserWidgetExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)pUVar1,param_1);
    pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UUIComponentUserWidgetExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUIComponentWidgetBlueprintGeneratedClassExtension> @ 146a52500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUIComponentWidgetBlueprintGeneratedClassExtension>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUIComponentWidgetBlueprintGeneratedClassExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
              ((UWidgetBlueprintGeneratedClassExtension *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserWidget> @ 146a525b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserWidget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UUserWidget *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserWidget::GetPrivateStaticClass();
  pUVar3 = (UUserWidget *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UUserWidget *)0x0) {
    pUVar3 = UUserWidget::UUserWidget(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUserWidgetFunctionLibrary> @ 146a52650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUserWidgetFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUserWidgetFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUserWidgetFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClass> @ 146a52700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintGeneratedClass *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
  this = (UBlueprintGeneratedClass *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintGeneratedClass *)0x0) {
    UBlueprintGeneratedClass::UBlueprintGeneratedClass(this,param_1);
    this->_padding_ = (longlong)&UWidgetBlueprintGeneratedClass::_vftable__for__UClass__;
    this->_padding_ =
         (longlong)&UWidgetBlueprintGeneratedClass::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetBlueprintLibrary> @ 146a52820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetComponent> @ 146a528d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWidgetComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetInteractionComponent> @ 146a52ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWidgetInteractionComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidgetInteractionComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetInteractionComponent::GetPrivateStaticClass();
  pUVar3 = (UWidgetInteractionComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWidgetInteractionComponent *)0x0) {
    pUVar3 = UWidgetInteractionComponent::UWidgetInteractionComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetSwitcher> @ 146a52b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetSwitcher>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetSwitcher::GetPrivateStaticClass();
  this = (UPanelWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    this->_padding_ = (longlong)&UWidgetSwitcher::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UWidgetSwitcher::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetSwitcherSlot> @ 146a52c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetSwitcherSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetSwitcherSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWindowTitleBarArea> @ 146a52ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWindowTitleBarArea>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UContentWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWindowTitleBarArea::GetPrivateStaticClass();
  this = (UContentWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UContentWidget *)0x0) {
    UContentWidget::UContentWidget(this,param_1);
    *(undefined ***)this = &UWindowTitleBarArea::_vftable__for__UVisual__;
    *(undefined ***)&this->field_0x28 =
         &UWindowTitleBarArea::_vftable__for__INotifyFieldValueChanged__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot> @ 146a52db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWindowTitleBarAreaSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWrapBox> @ 146a52e70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWrapBox>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWrapBox::GetPrivateStaticClass();
  this = (UPanelWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelWidget *)0x0) {
    UPanelWidget::UPanelWidget(this,param_1);
    this->_padding_ = (longlong)&UWrapBox::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UWrapBox::_vftable__for__INotifyFieldValueChanged__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWrapBoxSlot> @ 146a52f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWrapBoxSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPanelSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWrapBoxSlot::GetPrivateStaticClass();
  this = (UPanelSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPanelSlot *)0x0) {
    UPanelSlot::UPanelSlot(this,param_1);
    this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<ULocalPlayer,ULocalPlayer_*,0> @ 146a53050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULocalPlayer,ULocalPlayer_*,0>
          (TObjectPtr<ULocalPlayer> *param_1,ULocalPlayer **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULocalPlayer *)0x0) {
    return *param_2 == (ULocalPlayer *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UWidgetAnimation,UWidgetAnimation_*,0> @ 146a53070

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UWidgetAnimation,UWidgetAnimation_*,0>
          (TObjectPtr<UWidgetAnimation> *param_1,UWidgetAnimation **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UWidgetAnimation *)0x0) {
    return *param_2 == (UWidgetAnimation *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UWidgetAnimation,UWidgetAnimation_const_*,0> @ 146a53090

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UWidgetAnimation,UWidgetAnimation_const_*,0>
          (TObjectPtr<UWidgetAnimation> *param_1,UWidgetAnimation **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UWidgetAnimation *)0x0) {
    return *param_2 == (UWidgetAnimation *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeRequiredArgs<FLocalPlayerContext_&> @ 146a530b0

T1RequiredArgs<FLocalPlayerContext_&> __cdecl
RequiredArgs::MakeRequiredArgs<FLocalPlayerContext_&>(FLocalPlayerContext *param_1)

{
  FWeakObjectPtr in_RDX;
  
  (param_1->LocalPlayer).WeakPtr = in_RDX;
  return (T1RequiredArgs<FLocalPlayerContext_&>)param_1;
}

// MakeTDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> @ 146a530c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_> @ 146a53170

TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_> * __cdecl
MakeTDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>
          (TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<FLocalPlayerContext_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>::
  TSlateDecl<SWorldWidgetScreenLayer,RequiredArgs::T1RequiredArgs<FLocalPlayerContext_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Merge<`<lambda_25>::operator()'::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<`<lambda_25>::operator()'::__l2::FClassAndSize,`<lambda_25>::operator()'::__l2::<lambda_2>_>_> @ 146a53220

void __cdecl
AlgoImpl::
Merge<_<lambda_25>::operator()_::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<_<lambda_25>::operator()_::__l2::FClassAndSize,_<lambda_25>::operator()_::__l2::<lambda_2>_>_>
          (FClassAndSize *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<_public:___cdecl_<lambda_25>::operator()(void)const_::_2_::FClassAndSize,_public:___cdecl_<lambda_25>::operator()(void)const_::_2_::<lambda_2>_>
          param_5)

{
  FClassAndSize *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FClassAndSize *pFVar12;
  FClassAndSize *pFVar14;
  int iVar15;
  FClassAndSize *pFVar16;
  FClassAndSize *pFVar17;
  uint uVar18;
  int iVar19;
  FClassAndSize *pFVar13;
  
  if (0 < param_2) {
    iVar19 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar15 = 0;
      if (0 < param_2 - iVar19) {
        uVar11 = param_2 - iVar19;
        do {
          iVar9 = (uVar11 >> 1) + iVar15;
          if (param_1[param_2].TemplateSize <=
              param_1[(longlong)iVar9 + (longlong)iVar19].TemplateSize) {
            iVar15 = iVar9 + (uVar11 & 1);
          }
          uVar18 = uVar11 >> 1;
          uVar11 = uVar11 >> 1;
        } while (uVar18 != 0);
      }
      iVar19 = iVar19 + iVar15;
      if (param_2 <= iVar19) {
        return;
      }
      iVar15 = 0;
      pFVar1 = param_1 + iVar19;
      if (0 < param_3 - param_2) {
        uVar11 = param_3 - param_2;
        iVar15 = 0;
        do {
          uVar18 = uVar11 >> 1;
          if (pFVar1->TemplateSize <
              param_1[(longlong)(int)(uVar18 + iVar15) + (longlong)param_2].TemplateSize) {
            iVar15 = uVar18 + iVar15 + (uVar11 & 1);
          }
          uVar11 = uVar18;
        } while (uVar18 != 0);
      }
      iVar10 = (iVar15 - iVar19) + param_2;
      iVar9 = param_2 - iVar19;
      if ((iVar9 != 0) && (iVar9 < iVar10)) {
        pFVar12 = pFVar1 + iVar9;
        pFVar16 = pFVar1;
        pFVar13 = pFVar1 + iVar9;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar17 = pFVar16 + 1;
            iVar7 = pFVar16->TemplateSize;
            uVar8 = *(undefined4 *)&pFVar16->field_0x14;
            iVar9 = (pFVar12->ClassName).Data.ArrayNum;
            iVar3 = (pFVar12->ClassName).Data.ArrayMax;
            pFVar2 = (pFVar16->ClassName).Data.AllocatorInstance.Data;
            iVar5 = (pFVar16->ClassName).Data.ArrayNum;
            iVar6 = (pFVar16->ClassName).Data.ArrayMax;
            (pFVar16->ClassName).Data.AllocatorInstance.Data =
                 (pFVar12->ClassName).Data.AllocatorInstance.Data;
            (pFVar16->ClassName).Data.ArrayNum = iVar9;
            (pFVar16->ClassName).Data.ArrayMax = iVar3;
            uVar4 = *(undefined4 *)&pFVar12->field_0x14;
            pFVar16->TemplateSize = pFVar12->TemplateSize;
            *(undefined4 *)&pFVar16->field_0x14 = uVar4;
            (pFVar12->ClassName).Data.AllocatorInstance.Data = pFVar2;
            (pFVar12->ClassName).Data.ArrayNum = iVar5;
            (pFVar12->ClassName).Data.ArrayMax = iVar6;
            pFVar12->TemplateSize = iVar7;
            *(undefined4 *)&pFVar12->field_0x14 = uVar8;
            pFVar16 = pFVar17;
            if (pFVar14 == pFVar1 + iVar10) break;
            pFVar12 = pFVar14;
            if (pFVar17 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar17 != pFVar13);
      }
      param_2 = param_2 + iVar15;
      iVar19 = iVar19 + 1 + iVar15;
    } while (iVar19 < param_2);
  }
  return;
}

// NewObject<UBodySetup> @ 146a533b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBodySetup * __cdecl NewObject<UBodySetup>(UObject *param_1)

{
  UClass *pUVar1;
  UBodySetup *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UBodySetup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDragDropOperation> @ 146a53450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDragDropOperation * __cdecl NewObject<UDragDropOperation>(UObject *param_1)

{
  UClass *pUVar1;
  UDragDropOperation *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDragDropOperation::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDragDropOperation *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDragDropOperation> @ 146a534f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDragDropOperation * __cdecl
NewObject<UDragDropOperation>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UDragDropOperation *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UDragDropOperation::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UDragDropOperation *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UInputComponent> @ 146a535f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputComponent * __cdecl
NewObject<UInputComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UInputComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UInputComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UInputComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTextureRenderTarget2D> @ 146a536f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTarget2D * __cdecl NewObject<UTextureRenderTarget2D>(UObject *param_1)

{
  UClass *pUVar1;
  UTextureRenderTarget2D *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTextureRenderTarget2D *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UUIComponentContainer> @ 146a53790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUIComponentContainer * __cdecl
NewObject<UUIComponentContainer>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UUIComponentContainer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UUIComponentContainer::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UUIComponentContainer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UUserWidget> @ 146a53890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUserWidget * __cdecl
NewObject<UUserWidget>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UUserWidget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UUserWidget::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UUserWidget *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UUserWidgetExtension> @ 146a53990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUserWidgetExtension * __cdecl
NewObject<UUserWidgetExtension>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UUserWidgetExtension_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UUserWidgetExtension *)pUVar2;
}

// NewObject<UWidget> @ 146a53a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidget * __cdecl
NewObject<UWidget>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                  UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWidget *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UWidget_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UWidget *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWidgetTree> @ 146a53b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidgetTree * __cdecl
NewObject<UWidgetTree>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UWidgetTree *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UWidgetTree_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UWidgetTree *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWidgetTree> @ 146a53c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWidgetTree * __cdecl
NewObject<UWidgetTree>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWidgetTree *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UWidgetTree_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWidgetTree *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWindowTitleBarAreaSlot> @ 146a53d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWindowTitleBarAreaSlot * __cdecl NewObject<UWindowTitleBarAreaSlot>(UObject *param_1)

{
  UClass *pUVar1;
  UWindowTitleBarAreaSlot *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWindowTitleBarAreaSlot::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWindowTitleBarAreaSlot *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveAll<`UUserWidget::UnbindAllFromAnimationFinished'::__l2::<lambda_1>_> @ 146a54480

int __thiscall
TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UUserWidget::UnbindAllFromAnimationFinished_::__l2::<lambda_1>_>
          (TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  if (*(UWidgetAnimation **)pFVar2 == (UWidgetAnimation *)0x0) {
    bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
  }
  else {
    bVar12 = *(UWidgetAnimation **)pFVar2 == param_1->InAnimation;
  }
  if ((bVar12) && (pFVar2[0x20] == (FScriptContainerElement)0x1)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar5 = 0;
  iVar7 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar8 = iVar7 + 1;
    if (lVar5 < lVar9) {
      pFVar3 = pFVar2 + lVar5 * 0x30;
      do {
        if (*(UWidgetAnimation **)pFVar3 == (UWidgetAnimation *)0x0) {
          bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
        }
        else {
          bVar12 = *(UWidgetAnimation **)pFVar3 == param_1->InAnimation;
        }
        if ((bVar12) && (pFVar3[0x20] == (FScriptContainerElement)0x1)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar10 != bVar4) break;
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pFVar3 = pFVar3 + 0x30;
      } while (lVar5 < lVar9);
    }
    iVar6 = iVar8 - iVar7;
    if (bVar10 == 0) {
      DestructItems<FAnimationEventBinding,int>
                ((FAnimationEventBinding *)(pFVar2 + (longlong)iVar7 * 0x30),iVar6);
    }
    else {
      if (iVar11 != iVar7) {
        memmove(pFVar2 + (longlong)iVar11 * 0x30,pFVar2 + (longlong)iVar7 * 0x30,
                (longlong)iVar6 * 0x30);
      }
      iVar11 = iVar11 + iVar6;
    }
    bVar10 = bVar10 ^ 1;
    iVar7 = iVar8;
    if (lVar9 <= lVar5) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// RemoveAll<`UUserWidget::UnbindAllFromAnimationStarted'::__l2::<lambda_1>_> @ 146a54610

int __thiscall
TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UUserWidget::UnbindAllFromAnimationStarted_::__l2::<lambda_1>_>
          (TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  if (*(UWidgetAnimation **)pFVar2 == (UWidgetAnimation *)0x0) {
    bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
  }
  else {
    bVar12 = *(UWidgetAnimation **)pFVar2 == param_1->InAnimation;
  }
  if ((bVar12) && (pFVar2[0x20] == (FScriptContainerElement)0x0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar5 = 0;
  iVar7 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar8 = iVar7 + 1;
    if (lVar5 < lVar9) {
      pFVar3 = pFVar2 + lVar5 * 0x30;
      do {
        if (*(UWidgetAnimation **)pFVar3 == (UWidgetAnimation *)0x0) {
          bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
        }
        else {
          bVar12 = *(UWidgetAnimation **)pFVar3 == param_1->InAnimation;
        }
        if ((bVar12) && (pFVar3[0x20] == (FScriptContainerElement)0x0)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar10 != bVar4) break;
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pFVar3 = pFVar3 + 0x30;
      } while (lVar5 < lVar9);
    }
    iVar6 = iVar8 - iVar7;
    if (bVar10 == 0) {
      DestructItems<FAnimationEventBinding,int>
                ((FAnimationEventBinding *)(pFVar2 + (longlong)iVar7 * 0x30),iVar6);
    }
    else {
      if (iVar11 != iVar7) {
        memmove(pFVar2 + (longlong)iVar11 * 0x30,pFVar2 + (longlong)iVar7 * 0x30,
                (longlong)iVar6 * 0x30);
      }
      iVar11 = iVar11 + iVar6;
    }
    bVar10 = bVar10 ^ 1;
    iVar7 = iVar8;
    if (lVar9 <= lVar5) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// RemoveAll<`UUserWidget::UnbindFromAnimationFinished'::__l2::<lambda_1>_> @ 146a547a0

int __thiscall
TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UUserWidget::UnbindFromAnimationFinished_::__l2::<lambda_1>_>
          (TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  local_res18 = 0;
  if (*(UWidgetAnimation **)pFVar2 == (UWidgetAnimation *)0x0) {
    bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
  }
  else {
    bVar12 = *(UWidgetAnimation **)pFVar2 == param_1->InAnimation;
  }
  if (((bVar12) &&
      (bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::operator==
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar2 + 8),
                           (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1->InDelegate),
      bVar12)) && (pFVar2[0x20] == (FScriptContainerElement)0x1)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar9 = 0;
  iVar6 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar7 = iVar6 + 1;
    if (lVar9 < lVar8) {
      pFVar5 = pFVar2 + (lVar9 * 6 + 4) * 8;
      do {
        if (*(UWidgetAnimation **)(pFVar5 + -0x20) == (UWidgetAnimation *)0x0) {
          bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
        }
        else {
          bVar12 = *(UWidgetAnimation **)(pFVar5 + -0x20) == param_1->InAnimation;
        }
        if (((bVar12) &&
            (bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::operator==
                                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar5 + -0x18),
                                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1->InDelegate)
            , bVar12)) && (*pFVar5 == (FScriptContainerElement)0x1)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        iVar11 = local_res18;
        if (bVar10 != bVar3) break;
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 1;
        pFVar5 = pFVar5 + 0x30;
      } while (lVar9 < lVar8);
    }
    iVar4 = iVar7 - iVar6;
    if (bVar10 == 0) {
      DestructItems<FAnimationEventBinding,int>
                ((FAnimationEventBinding *)(pFVar2 + (longlong)iVar6 * 0x30),iVar4);
    }
    else {
      if (iVar11 != iVar6) {
        memmove(pFVar2 + (longlong)iVar11 * 0x30,pFVar2 + (longlong)iVar6 * 0x30,
                (longlong)iVar4 * 0x30);
      }
      iVar11 = iVar11 + iVar4;
      local_res18 = iVar11;
    }
    bVar10 = bVar10 ^ 1;
    iVar6 = iVar7;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// RemoveAll<`UUserWidget::UnbindFromAnimationStarted'::__l2::<lambda_1>_> @ 146a54980

int __thiscall
TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
RemoveAll<_UUserWidget::UnbindFromAnimationStarted_::__l2::<lambda_1>_>
          (TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  local_res18 = 0;
  if (*(UWidgetAnimation **)pFVar2 == (UWidgetAnimation *)0x0) {
    bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
  }
  else {
    bVar12 = *(UWidgetAnimation **)pFVar2 == param_1->InAnimation;
  }
  if (((bVar12) &&
      (bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::operator==
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar2 + 8),
                           (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1->InDelegate),
      bVar12)) && (pFVar2[0x20] == (FScriptContainerElement)0x0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  lVar9 = 0;
  iVar6 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar7 = iVar6 + 1;
    if (lVar9 < lVar8) {
      pFVar5 = pFVar2 + (lVar9 * 6 + 4) * 8;
      do {
        if (*(UWidgetAnimation **)(pFVar5 + -0x20) == (UWidgetAnimation *)0x0) {
          bVar12 = param_1->InAnimation == (UWidgetAnimation *)0x0;
        }
        else {
          bVar12 = *(UWidgetAnimation **)(pFVar5 + -0x20) == param_1->InAnimation;
        }
        if (((bVar12) &&
            (bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::operator==
                                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar5 + -0x18),
                                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1->InDelegate)
            , bVar12)) && (*pFVar5 == (FScriptContainerElement)0x0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        iVar11 = local_res18;
        if (bVar10 != bVar3) break;
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 1;
        pFVar5 = pFVar5 + 0x30;
      } while (lVar9 < lVar8);
    }
    iVar4 = iVar7 - iVar6;
    if (bVar10 == 0) {
      DestructItems<FAnimationEventBinding,int>
                ((FAnimationEventBinding *)(pFVar2 + (longlong)iVar6 * 0x30),iVar4);
    }
    else {
      if (iVar11 != iVar6) {
        memmove(pFVar2 + (longlong)iVar11 * 0x30,pFVar2 + (longlong)iVar6 * 0x30,
                (longlong)iVar4 * 0x30);
      }
      iVar11 = iVar11 + iVar4;
      local_res18 = iVar11;
    }
    bVar10 = bVar10 ^ 1;
    iVar6 = iVar7;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// StableSortInternal<`<lambda_25>::operator()'::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<`<lambda_25>::operator()'::__l2::FClassAndSize,`<lambda_25>::operator()'::__l2::<lambda_2>_>_> @ 146a54b60

void __cdecl
AlgoImpl::
StableSortInternal<_<lambda_25>::operator()_::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<_<lambda_25>::operator()_::__l2::FClassAndSize,_<lambda_25>::operator()_::__l2::<lambda_2>_>_>
          (FClassAndSize *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:___cdecl_<lambda_25>::operator()(void)const_::_2_::FClassAndSize,_public:___cdecl_<lambda_25>::operator()(void)const_::_2_::<lambda_2>_>
          param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  FClassAndSize *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (0 < param_2) {
    pFVar6 = param_1 + 1;
    iVar7 = 1;
    lVar11 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar7 < param_2) && (pFVar6[-1].TemplateSize < pFVar6->TemplateSize)) {
        iVar1 = (pFVar6->ClassName).Data.ArrayNum;
        iVar8 = (pFVar6->ClassName).Data.ArrayMax;
        pFVar2 = pFVar6[-1].ClassName.Data.AllocatorInstance.Data;
        iVar9 = pFVar6[-1].ClassName.Data.ArrayNum;
        iVar10 = pFVar6[-1].ClassName.Data.ArrayMax;
        iVar4 = pFVar6[-1].TemplateSize;
        uVar5 = *(undefined4 *)&pFVar6[-1].field_0x14;
        pFVar6[-1].ClassName.Data.AllocatorInstance.Data =
             (pFVar6->ClassName).Data.AllocatorInstance.Data;
        pFVar6[-1].ClassName.Data.ArrayNum = iVar1;
        pFVar6[-1].ClassName.Data.ArrayMax = iVar8;
        uVar3 = *(undefined4 *)&pFVar6->field_0x14;
        pFVar6[-1].TemplateSize = pFVar6->TemplateSize;
        *(undefined4 *)&pFVar6[-1].field_0x14 = uVar3;
        (pFVar6->ClassName).Data.AllocatorInstance.Data = pFVar2;
        (pFVar6->ClassName).Data.ArrayNum = iVar9;
        (pFVar6->ClassName).Data.ArrayMax = iVar10;
        pFVar6->TemplateSize = iVar4;
        *(undefined4 *)&pFVar6->field_0x14 = uVar5;
      }
      iVar7 = iVar7 + 2;
      pFVar6 = pFVar6 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar7 * 2;
      iVar9 = 0;
      iVar8 = param_2;
      do {
        iVar10 = iVar8;
        if (iVar1 <= iVar8) {
          iVar10 = iVar1;
        }
        Merge<_<lambda_25>::operator()_::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<_<lambda_25>::operator()_::__l2::FClassAndSize,_<lambda_25>::operator()_::__l2::<lambda_2>_>_>
                  (param_1 + iVar9,iVar7,iVar10,param_3,param_4);
        iVar9 = iVar9 + iVar1;
        iVar8 = iVar8 + iVar7 * -2;
      } while (iVar9 < param_2);
      iVar7 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EBindingKind> @ 146a54c70

UEnum * __cdecl StaticEnum<enum_EBindingKind>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBindingKind.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EBindingKind.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EBindingKind,(UObject *)pUVar1,L"EBindingKind");
  }
  return Z_Registration_Info_UEnum_EBindingKind.OuterSingleton;
}

// StaticEnum<enum_EDragPivot> @ 146a54cb0

UEnum * __cdecl StaticEnum<enum_EDragPivot>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDragPivot.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EDragPivot.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EDragPivot,(UObject *)pUVar1,L"EDragPivot");
  }
  return Z_Registration_Info_UEnum_EDragPivot.OuterSingleton;
}

// StaticEnum<enum_ETickMode> @ 146a54cf0

UEnum * __cdecl StaticEnum<enum_ETickMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETickMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_ETickMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_ETickMode,(UObject *)pUVar1,L"ETickMode");
  }
  return Z_Registration_Info_UEnum_ETickMode.OuterSingleton;
}

// StaticEnum<enum_EUMGItemDropZone> @ 146a54d30

UEnum * __cdecl StaticEnum<enum_EUMGItemDropZone>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EUMGItemDropZone,(UObject *)pUVar1,L"EUMGItemDropZone")
    ;
  }
  return Z_Registration_Info_UEnum_EUMGItemDropZone.OuterSingleton;
}

// StaticEnum<enum_EWidgetAnimationEvent> @ 146a54d70

UEnum * __cdecl StaticEnum<enum_EWidgetAnimationEvent>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetAnimationEvent,(UObject *)pUVar1,
                       L"EWidgetAnimationEvent");
  }
  return Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton;
}

// StaticEnum<enum_EWidgetBlendMode> @ 146a54db0

UEnum * __cdecl StaticEnum<enum_EWidgetBlendMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetBlendMode,(UObject *)pUVar1,L"EWidgetBlendMode")
    ;
  }
  return Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton;
}

// StaticEnum<enum_EWidgetGeometryMode> @ 146a54df0

UEnum * __cdecl StaticEnum<enum_EWidgetGeometryMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetGeometryMode,(UObject *)pUVar1,
                       L"EWidgetGeometryMode");
  }
  return Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton;
}

// StaticEnum<enum_EWidgetInteractionSource> @ 146a54e30

UEnum * __cdecl StaticEnum<enum_EWidgetInteractionSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetInteractionSource,(UObject *)pUVar1,
                       L"EWidgetInteractionSource");
  }
  return Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton;
}

// StaticEnum<enum_EWidgetSpace> @ 146a54e70

UEnum * __cdecl StaticEnum<enum_EWidgetSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetSpace,(UObject *)pUVar1,L"EWidgetSpace");
  }
  return Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton;
}

// StaticEnum<enum_EWidgetTickFrequency> @ 146a54eb0

UEnum * __cdecl StaticEnum<enum_EWidgetTickFrequency>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTickFrequency,(UObject *)pUVar1,
                       L"EWidgetTickFrequency");
  }
  return Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton;
}

// StaticEnum<enum_EWidgetTimingPolicy> @ 146a54ef0

UEnum * __cdecl StaticEnum<enum_EWidgetTimingPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTimingPolicy,(UObject *)pUVar1,
                       L"EWidgetTimingPolicy");
  }
  return Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton;
}

// StaticEnum<enum_EWindowVisibility> @ 146a54f30

UEnum * __cdecl StaticEnum<enum_EWindowVisibility>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_UMG_EWindowVisibility,(UObject *)pUVar1,
                       L"EWindowVisibility");
  }
  return Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton;
}

// TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_> @ 146a55140

TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy,_private:_void___cdecl_UWidgetNavigation::UpdateMetaDataEntry(TSharedRef<FNavigationMetaData,1>,FWidgetNavigationData_const_&,EUINavigation)_::_10_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,_UWidgetNavigation::UpdateMetaDataEntry_::__l10::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy,_private:_void___cdecl_UWidgetNavigation::UpdateMetaDataEntry(TSharedRef<FNavigationMetaData,1>,FWidgetNavigationData_const_&,EUINavigation)_::_10_::<lambda_1>_>
          *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::`10'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Functor,&local_28);
  *(undefined8 *)((longlong)this + 0x20) =
       *(undefined8 *)&(param_1->Functor).CustomDelegate.field_0x8;
  *(undefined8 *)((longlong)this + 0x28) =
       *(undefined8 *)&(param_1->Functor).CustomDelegate.field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// ~TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0> @ 146a57f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_SPostBufferUpdate::ReleasePostBufferUpdater_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1> @ 146a57f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_SPostBufferUpdate::OnPaint_::__l5::<lambda_1>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::`5'::<lambda_1>,1,1>::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146a57f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1> @ 146a57f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_SPostBufferUpdate::SetUsePaintGeometry_::__l5::<lambda_1>,1,1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::`5'::<lambda_1>,1,1>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146a57fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 146a59c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall <lambda_25>::operator()(<lambda_25> *this)

{
  FClassAndSize *pFVar1;
  UObject *pUVar2;
  UWidgetTree *this_00;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  ForAnyElementType local_98;
  undefined8 local_90;
  FClassAndSize local_88;
  TObjectIterator<UWidgetBlueprintGeneratedClass> local_70;
  FString local_58;
  FName local_48;
  uint *local_40;
  code *local_38;
  uint **local_30;
  
  local_70.Index = 0xffffffff;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_70.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ObjectArray.ArrayNum = 0;
  local_70.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UWidgetBlueprintGeneratedClass::StaticClass();
  GetObjectsOfClass(pUVar7,&local_70.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UWidgetBlueprintGeneratedClass>::Advance(&local_70);
  while ((lVar10 = (longlong)local_70.Index, -1 < local_70.Index &&
         (local_70.Index < local_70.ObjectArray.ArrayNum))) {
    uVar6 = 0;
    if (local_70.Index < local_70.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_70.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = *(UClass **)(local_70.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    if ((pUVar7->ClassFlags & (CLASS_NewerVersionExists|CLASS_Deprecated|CLASS_Abstract)) ==
        CLASS_None) {
      local_88.ClassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ClassName.Data.ArrayNum = 0;
      local_88.ClassName.Data.ArrayMax = 0;
      local_88.TemplateSize = 0;
      local_48 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_48,&local_58);
      if (local_88.ClassName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.ClassName.Data.AllocatorInstance.Data);
      }
      local_88.ClassName.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_88.ClassName.Data.ArrayNum = local_58.Data.ArrayNum;
      local_88.ClassName.Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar2 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar8 = UUserWidget::StaticClass();
      lVar10 = *(longlong *)&pUVar2->field_0x10;
      iVar9 = (int)pUVar8->_padding_;
      if (((*(int *)(lVar10 + 0x38) < iVar9) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) !=
           &pUVar8->_padding_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (int)*(short *)((longlong)&pUVar7->_padding_ + 4);
      this_00 = *(UWidgetTree **)&pUVar7[1].FuncMap.field_0x38;
      local_res20[0] = (int)pUVar7->_padding_ + -1 + iVar9 & ~(iVar9 - 1U);
      if (this_00 != (UWidgetTree *)0x0) {
        local_40 = local_res20;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`<lambda_25>::operator()'::__l14::<lambda_1>,void,UWidget_*>::
                   Call;
        local_30 = &local_40;
        UWidgetTree::ForEachWidget(this_00,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_38);
      }
      local_88.TemplateSize = local_res20[0];
      if (((local_98.Data <= &local_88) &&
          (&local_88 < (FClassAndSize *)(local_98.Data + (longlong)local_90._4_4_ * 0x18))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_98,(int *)((longlong)&local_90 + 4));
      }
      local_90 = CONCAT44(local_90._4_4_,iVar9 + 1);
      pFVar11 = local_98.Data + (longlong)iVar9 * 0x18;
      ::FString::FString((FString *)pFVar11,&local_88.ClassName);
      *(int *)(pFVar11 + 0x10) = local_88.TemplateSize;
      if (local_88.ClassName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.ClassName.Data.AllocatorInstance.Data);
      }
    }
    TObjectIterator<UWidgetBlueprintGeneratedClass>::Advance(&local_70);
  }
  if (local_70.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ObjectArray.AllocatorInstance.Data);
  }
  AlgoImpl::
  StableSortInternal<_<lambda_25>::operator()_::__l2::FClassAndSize,FIdentityFunctor,TDereferenceWrapper<_<lambda_25>::operator()_::__l2::FClassAndSize,_<lambda_25>::operator()_::__l2::<lambda_2>_>_>
            ((FClassAndSize *)local_98.Data,(int)local_90,local_res10[0],(<lambda_2> *)local_res10);
  if (3 < (byte)LogUMG._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
  }
  iVar9 = (int)local_90;
  pFVar11 = local_98.Data + 0x10;
  pFVar1 = (FClassAndSize *)(local_98.Data + (longlong)(int)local_90 * 0x18);
LAB_146a59f40:
  do {
    if ((int)local_90 != iVar9) {
      `TCheckedPointerIterator<`<lambda_25>::operator()'::__l2::FClassAndSize,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((FClassAndSize *)(pFVar11 + -0x10) == pFVar1) {
      if (3 < (byte)LogUMG._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      }
      DestructItems<_<lambda_25>::operator()_::__l2::FClassAndSize,int>
                ((FClassAndSize *)local_98.Data,(int)local_90);
      if ((FClassAndSize *)local_98.Data != (FClassAndSize *)0x0) {
        FMemory::Free(local_98.Data);
      }
      return;
    }
    if (*(int *)pFVar11 < 1) {
      if (3 < (byte)LogUMG._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      }
    }
    else if (3 < (byte)LogUMG._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      pFVar11 = pFVar11 + 0x18;
      goto LAB_146a59f40;
    }
    pFVar11 = pFVar11 + 0x18;
  } while( true );
}

// `vector_deleting_destructor'`adjustor{8}' @ 146a5a4e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FRetainerWidgetRenderingResources::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FRetainerWidgetRenderingResources::_vector_deleting_destructor__adjustor_8__
          (FRetainerWidgetRenderingResources *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FRetainerWidgetRenderingResources *)&this[-1].DynamicEffect,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 146a5a4f4

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FUMGDragDropOp::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
FUMGDragDropOp::_vector_deleting_destructor__adjustor_80__(FUMGDragDropOp *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FUMGDragDropOp *)&this[-1].SourceUserWidget.WeakReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 146a5a504

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SObjectWidget::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SObjectWidget::_vector_deleting_destructor__adjustor_680__(SObjectWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SObjectWidget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 146a5a518

/* [thunk]:public: virtual void * __ptr64 __cdecl SRetainerWidget::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SRetainerWidget::_vector_deleting_destructor__adjustor_680__(SRetainerWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SRetainerWidget *)&this[-1].field_0x338,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a52c

/* [thunk]:public: virtual void * __ptr64 __cdecl UNavigationUIComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNavigationUIComponent::_vector_deleting_destructor__adjustor_40__
          (UNavigationUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNavigationUIComponent *)&this[-1].OnNavigationExitedDelegate,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a53c

/* [thunk]:public: virtual void * __ptr64 __cdecl UUIComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUIComponent::_vector_deleting_destructor__adjustor_40__(UUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUIComponent *)&this[-1].Owner,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{432}' @ 146a5a54c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUserWidget::`vector deleting
   destructor'`adjustor{432}' (unsigned int) __ptr64 */

void * __thiscall
UUserWidget::_vector_deleting_destructor__adjustor_432__(UUserWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUserWidget *)&this[-1].bUseCullingDeltaTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UUserWidget::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUserWidget::_vector_deleting_destructor__adjustor_40__(UUserWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UUserWidget *)&this[-1].AnimationCallbacks,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 146a5a570

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetBlueprintGeneratedClass::`vector deleting
   destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetBlueprintGeneratedClass::_vector_deleting_destructor__adjustor_520__
          (UWidgetBlueprintGeneratedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWidgetBlueprintGeneratedClass *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 146a5a584

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetComponent::_vector_deleting_destructor__adjustor_592__(UWidgetComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWidgetComponent *)&this[-1].field_0x500,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 146a5a598

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetComponent::_vector_deleting_destructor__adjustor_600__(UWidgetComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWidgetComponent *)&this[-1].field_0x4f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 146a5a5ac

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetComponent::_vector_deleting_destructor__adjustor_608__(UWidgetComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWidgetComponent *)&this[-1].field_0x4f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetComponent::_vector_deleting_destructor__adjustor_40__(UWidgetComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWidgetComponent *)&this[-1].UsersEnteredWorldWidget.HashSize,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetInteractionComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetInteractionComponent::_vector_deleting_destructor__adjustor_40__
          (UWidgetInteractionComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWidgetInteractionComponent *)&this[-1].LastHitResult.PhysicsObject,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a5e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetSwitcher::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetSwitcher::_vector_deleting_destructor__adjustor_40__(UWidgetSwitcher *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWidgetSwitcher *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWindowTitleBarArea::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWindowTitleBarArea::_vector_deleting_destructor__adjustor_40__
          (UWindowTitleBarArea *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWindowTitleBarArea *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146a5a600

/* [thunk]:public: virtual void * __ptr64 __cdecl UWrapBox::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall UWrapBox::_vector_deleting_destructor__adjustor_40__(UWrapBox *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWrapBox *)&this[-1].InnerSlotPadding,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146a5a610

void * __thiscall
ConstructorHelpers::FObjectFinder<UMaterialInterface>::_scalar_deleting_destructor_
          (FObjectFinder<UMaterialInterface> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a660

void * __thiscall
IBaseDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a690

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a6c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a6f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a720

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ESlateVisibility),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a750

void * __thiscall
IBaseDelegateInstance<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a780

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a7c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a7f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a820

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a850

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationUIComponent,void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNavigationUIComponent,void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a880

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a8b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(void),FDefaultDelegateUserPolicy,FOnInputAction>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(void),FDefaultDelegateUserPolicy,FOnInputAction>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a8f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UUserWidget,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a920

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWidgetComponent,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWidgetComponent,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a950

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWidgetComponent,void___cdecl(enum_ESlateVisibility),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a980

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWindowTitleBarArea,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWindowTitleBarArea,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a9b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWindowTitleBarArea,bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5a9e0

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aa10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNavigationTransition_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aa40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aa70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aaa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ESlateVisibility),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aad0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FOnInputAction>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FOnInputAction>
           *this,uint param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ab10

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,enum_EWindowAction::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ab40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::`2'::<lambda_1>,1,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ab90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::`5'::<lambda_1>,1,1>::_vftable_;
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
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ac00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::`5'::<lambda_1>,1,1>::
        _vftable_;
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
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ac70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationTransitionMetadata,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNavigationTransitionMetadata,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5acb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetAnimationState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWidgetAnimationState,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5acf0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ad30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPostBufferUpdater,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPostBufferUpdater,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ad70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindowTitleBarArea,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWindowTitleBarArea,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5adb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWorldWidgetScreenLayer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SWorldWidgetScreenLayer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5adf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateMaterialBrush,SharedPointerInternals::DefaultDeleter<FSlateMaterialBrush>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateMaterialBrush,SharedPointerInternals::DefaultDeleter<FSlateMaterialBrush>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ae30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUMGDragDropOp,SharedPointerInternals::DefaultDeleter<FUMGDragDropOp>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUMGDragDropOp,SharedPointerInternals::DefaultDeleter<FUMGDragDropOp>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ae70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidget3DHitTester,SharedPointerInternals::DefaultDeleter<FWidget3DHitTester>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWidget3DHitTester,SharedPointerInternals::DefaultDeleter<FWidget3DHitTester>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aeb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWorldWidgetScreenLayer,SharedPointerInternals::DefaultDeleter<FWorldWidgetScreenLayer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWorldWidgetScreenLayer,SharedPointerInternals::DefaultDeleter<FWorldWidgetScreenLayer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5aef0

void * __thiscall
TStructOnScope<FActorComponentInstanceData>::_scalar_deleting_destructor_
          (TStructOnScope<FActorComponentInstanceData> *this,uint param_1)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5af30

void * __thiscall
FNavigationTransitionMetadata::_scalar_deleting_destructor_
          (FNavigationTransitionMetadata *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigationTransition);
  pvVar1 = *(void **)&(this->OnNavigationTransition).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationTransition);
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5afa0

void * __thiscall
FPostBufferUpdater::_scalar_deleting_destructor_(FPostBufferUpdater *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ProcessorUpdaters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProcessorUpdaters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ProcessorUpdaters);
  this->_padding_ = (longlong)&___7ICustomSlateElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b010

void * __thiscall
FRetainerWidgetRenderingResources::_scalar_deleting_destructor_
          (FRetainerWidgetRenderingResources *this,uint param_1)

{
  FWidgetRenderer *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pFVar1 = this->WidgetRenderer;
  if (pFVar1 != (FWidgetRenderer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b0a0

void * __thiscall
FSlateMaterialBrush::_scalar_deleting_destructor_(FSlateMaterialBrush *this,uint param_1)

{
  *(undefined ***)this = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xa0);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FUMGDragDropOp::_scalar_deleting_destructor_(FUMGDragDropOp *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DecoratorWidget).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->SourceUserWidget).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b170

void * __thiscall
FWidget3DHitTester::_scalar_deleting_destructor_(FWidget3DHitTester *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RegisteredComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomHitTestPath__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FWidget3DSceneProxy::_scalar_deleting_destructor_(FWidget3DSceneProxy *this,uint param_1)

{
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b200

void * __thiscall FWidgetRenderer::_scalar_deleting_destructor_(FWidgetRenderer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWidgetRenderer__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
            ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
             (this->DeferredPaints).AllocatorInstance.Data,(this->DeferredPaints).ArrayNum);
  pFVar1 = (this->DeferredPaints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b270

void * __thiscall
FWorldWidgetScreenLayer::_scalar_deleting_destructor_(FWorldWidgetScreenLayer *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FWorldWidgetScreenLayer__6B_;
  pFVar5 = (this->Components).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->ScreenLayerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IGameLayer__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b320

void * __thiscall
ICustomHitTestPath::_scalar_deleting_destructor_(ICustomHitTestPath *this,uint param_1)

{
  *this = (ICustomHitTestPath)&___7ICustomHitTestPath__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b360

void * __thiscall
ICustomSlateElement::_scalar_deleting_destructor_(ICustomSlateElement *this,uint param_1)

{
  *this = (ICustomSlateElement)&___7ICustomSlateElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b3a0

void * __thiscall IGameLayer::_scalar_deleting_destructor_(IGameLayer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IGameLayer__6B_;
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

// `scalar_deleting_destructor' @ 146a5b410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall SObjectWidget::_scalar_deleting_destructor_(SObjectWidget *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  SObjectWidget *local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  if ((GExitPurge == false) && (GIsGarbageCollecting != false)) {
    local_res8 = this;
    `SObjectWidget::~SObjectWidget'::__l5::<lambda_1>::operator()(&local_res8);
  }
  ResetWidget(this);
  pFVar1 = (this->DebugPaintEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTickEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
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

// `scalar_deleting_destructor' @ 146a5b510

void * __thiscall
SPostBufferUpdate::_scalar_deleting_destructor_(SPostBufferUpdate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PostBufferUpdater).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->BuffersToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall SRetainerWidget::_scalar_deleting_destructor_(SRetainerWidget *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  FSlateApplicationBase *pFVar3;
  SRetainerWidget *local_res8;
  
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__FSlateInvalidationRoot__;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar3 = FSlateApplicationBase::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar3->OnGlobalInvalidationToggledEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRetainerModeChangedDelegate,
               this);
  }
  BeginCleanup((FDeferredCleanupInterface *)this->RenderingResources);
  local_res8 = this;
  TArray<SRetainerWidget_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::Remove
            (&Shared_WaitingToRender,&local_res8);
  pTVar1 = (this->DynamicBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->DynamicBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HittestGrid).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWidget).SharedReferenceCount.ReferenceController);
  if (((this->PreviousClippingState).bIsSet != false) &&
     (pFVar2 = (this->PreviousClippingState).TypedValue.StencilQuads.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  pTVar1 = (this->SurfaceBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->SurfaceBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateInvalidationRoot::~FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->field_0x2a8);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
    }
    else {
      __empty_global_delete(this,0x5e0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b6d0

void * __thiscall
SWorldWidgetScreenLayer::_scalar_deleting_destructor_(SWorldWidgetScreenLayer *this,uint param_1)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Canvas).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ComponentMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComponentMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,SWorldWidgetScreenLayer::FComponentEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentMap);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UDragDropOperation::_scalar_deleting_destructor_(UDragDropOperation *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDragDropOperation__6B_;
  pvVar1 = *(void **)&(this->OnDragged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragged);
  pvVar1 = *(void **)&(this->OnDragCancelled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragCancelled);
  pvVar1 = *(void **)&(this->OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrop);
  pFVar2 = (this->Tag).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b840

void * __thiscall
UNavigationUIComponent::_scalar_deleting_destructor_(UNavigationUIComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationTransitionMetadata).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnNavigationExitedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationExitedDelegate);
  pvVar1 = *(void **)&(this->OnNavigationEnteredDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationEnteredDelegate);
  this->_padding_ = (longlong)&UUIComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UUIComponent::_vftable__for__INotifyFieldValueChanged__;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b940

void * __thiscall
USlateBlueprintLibrary::_scalar_deleting_destructor_(USlateBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7USlateBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5b9a0

void * __thiscall
USlateVectorArtData::_scalar_deleting_destructor_(USlateVectorArtData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USlateVectorArtData__6B_;
  pFVar1 = (this->IndexData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5ba20

void * __thiscall UUIComponent::_scalar_deleting_destructor_(UUIComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<UE::FieldNotification::FFieldMulticastDelegate::FInvocationElement,int>
            ((FInvocationElement *)(this->Delegates).Delegates.AllocatorInstance.Data,
             (this->Delegates).Delegates.ArrayNum);
  pFVar1 = (this->Delegates).Delegates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bac0

void * __thiscall
UUIComponentContainer::_scalar_deleting_destructor_(UUIComponentContainer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUIComponentContainer__6B_;
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bb30

void * __thiscall
UUIComponentUserWidgetExtension::_scalar_deleting_destructor_
          (UUIComponentUserWidgetExtension *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUIComponentUserWidgetExtension__6B_;
  UUserWidgetExtension::~UUserWidgetExtension((UUserWidgetExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bb90

void * __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::_scalar_deleting_destructor_
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
  UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall UUserWidget::_scalar_deleting_destructor_(UUserWidget *this,uint param_1)

{
  ~UUserWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bc50

void * __thiscall
UUserWidgetFunctionLibrary::_scalar_deleting_destructor_
          (UUserWidgetFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UUserWidgetFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bcb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UWidgetBlueprintGeneratedClass::_scalar_deleting_destructor_
          (UWidgetBlueprintGeneratedClass *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  pFVar1 = (this->InstanceNamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvailableNamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Animations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDelegateRuntimeBinding,int>
            ((FDelegateRuntimeBinding *)(this->Bindings).AllocatorInstance.Data,
             (this->Bindings).ArrayNum);
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bda0

void * __thiscall
UWidgetBlueprintLibrary::_scalar_deleting_destructor_(UWidgetBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5be00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UWidgetComponent::_scalar_deleting_destructor_(UWidgetComponent *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pTVar3 = (this->CurrentSlateWidget).WeakReferenceCount.ReferenceController;
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
  (this->UsersEnteredWorldWidget).HashSize = 0;
  FVar4 = (this->UsersEnteredWorldWidget).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UsersEnteredWorldWidget).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateWindow).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMaterialInstanceUpdated).field_0x8,
             *(int *)&(this->OnMaterialInstanceUpdated).field_0x10);
  pvVar5 = *(void **)&(this->OnMaterialInstanceUpdated).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMaterialInstanceUpdated);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x750);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5bf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UWidgetInteractionComponent::_scalar_deleting_destructor_
          (UWidgetInteractionComponent *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<FSetElementId> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PressedKeys).HashSize = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FVar3 = (this->PressedKeys).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PressedKeys).Elements);
  pTVar4 = (this->LastWidgetPath).Window.WeakReferenceCount.ReferenceController;
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
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->LastWidgetPath).Widgets.AllocatorInstance.Data,
             (this->LastWidgetPath).Widgets.ArrayNum);
  pFVar5 = (this->LastWidgetPath).Widgets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualUser).SharedReferenceCount.ReferenceController);
  pvVar6 = *(void **)&(this->OnHoveredWidgetChanged).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoveredWidgetChanged);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c070

void * __thiscall UWidgetSwitcher::_scalar_deleting_destructor_(UWidgetSwitcher *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UWidgetSwitcherSlot::_scalar_deleting_destructor_(UWidgetSwitcherSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWidgetSwitcherSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c150

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UWindowTitleBarArea::_scalar_deleting_destructor_(UWindowTitleBarArea *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWindowTitleBarArea).SharedReferenceCount.ReferenceController);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UWindowTitleBarAreaSlot::_scalar_deleting_destructor_(UWindowTitleBarAreaSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowTitleBarArea).SharedReferenceCount.ReferenceController);
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c240

void * __thiscall UWrapBox::_scalar_deleting_destructor_(UWrapBox *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWrapBox).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146a5c2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UWrapBoxSlot::_scalar_deleting_destructor_(UWrapBoxSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UWrapBoxSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeDragDropOperation @ 146a700b0

void __cdecl EmptyLinkFunctionForGeneratedCodeDragDropOperation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationUIComponent @ 146a700c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationUIComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary @ 146a700d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSlateVectorArtData @ 146a700e0

void __cdecl EmptyLinkFunctionForGeneratedCodeSlateVectorArtData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIComponent @ 146a700f0

void __cdecl EmptyLinkFunctionForGeneratedCodeUIComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIComponentContainer @ 146a70100

void __cdecl EmptyLinkFunctionForGeneratedCodeUIComponentContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIComponentUserWidgetExtension @ 146a70110

void __cdecl EmptyLinkFunctionForGeneratedCodeUIComponentUserWidgetExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUIComponentWidgetBlueprintGeneratedClassExtension @ 146a70120

void __cdecl
EmptyLinkFunctionForGeneratedCodeUIComponentWidgetBlueprintGeneratedClassExtension(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUserWidget @ 146a70130

void __cdecl EmptyLinkFunctionForGeneratedCodeUserWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClass @ 146a70140

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetBlueprintLibrary @ 146a70150

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetComponent @ 146a70160

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetInteractionComponent @ 146a70170

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetInteractionComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetSwitcher @ 146a70180

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetSwitcher(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetSwitcherSlot @ 146a70190

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetSwitcherSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWindowTitleBarArea @ 146a701a0

void __cdecl EmptyLinkFunctionForGeneratedCodeWindowTitleBarArea(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWindowTitleBarAreaSlot @ 146a701b0

void __cdecl EmptyLinkFunctionForGeneratedCodeWindowTitleBarAreaSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWrapBox @ 146a701c0

void __cdecl EmptyLinkFunctionForGeneratedCodeWrapBox(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWrapBoxSlot @ 146a701d0

void __cdecl EmptyLinkFunctionForGeneratedCodeWrapBoxSlot(void)

{
  return;
}

// FOnConstructEvent_DelegateWrapper @ 146a71960

void __cdecl
FOnConstructEvent_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnDragDropMulticast_DelegateWrapper @ 146a71970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOnDragDropMulticast_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UDragDropOperation *param_2
          )

{
  UDragDropOperation *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnHoveredWidgetChanged_DelegateWrapper @ 146a719a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
FOnHoveredWidgetChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UWidgetComponent *param_2,
          UWidgetComponent *param_3)

{
  UWidgetComponent *local_18;
  UWidgetComponent *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnInputAction_DelegateWrapper @ 146a719d0

void __cdecl FOnInputAction_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,(void *)0x0);
  return;
}

// FOnNavigationTransition_DelegateWrapper @ 146a719e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOnNavigationTransition_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,EUINavigation param_2,
          UWidget *param_3,UWidget *param_4)

{
  EUINavigation local_28 [8];
  UWidget *local_20;
  UWidget *local_18;
  
  local_28[0] = param_2;
  local_20 = param_3;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  return;
}

// FOnVisibilityChangedEvent_DelegateWrapper @ 146a71a10

void __cdecl
FOnVisibilityChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,ESlateVisibility param_2)

{
  ESlateVisibility local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FindLineSphereIntersection @ 146a71c30

TOptional<double> * __cdecl
FindLineSphereIntersection
          (TOptional<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = dVar7 * dVar7 + dVar1 * dVar1 + dVar5 * dVar5;
  dVar7 = dVar3 * dVar7 + dVar4 * dVar1;
  dVar7 = (dVar5 + dVar5) * dVar2 + dVar7 + dVar7;
  dVar1 = ((dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2) - (double)(param_3 * param_3)) * dVar6 *
          __real_4010000000000000;
  __return_storage_ptr__->bIsSet = false;
  dVar2 = __real_3fe0000000000000;
  auVar8._0_8_ = dVar7 * dVar7 - dVar1;
  auVar8._8_8_ = 0;
  if (0.0 <= auVar8._0_8_) {
    auVar8 = sqrtpd(auVar8,auVar8);
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue = (auVar8._0_8_ - dVar7) * (dVar2 / dVar6);
  }
  return __return_storage_ptr__;
}

// GetNullElementList @ 146a77360

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateWindowElementList * __cdecl GetNullElementList(void)

{
  TSharedPtr<SWindow,1> local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      local_18.Object = (SWindow *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FSlateWindowElementList::FSlateWindowElementList(&NullElementList,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      atexit(`GetNullElementList'::__l2::_dynamic_atexit_destructor_for__NullElementList__);
      _Init_thread_footer(&_TSS0);
      return &NullElementList;
    }
  }
  return &NullElementList;
}

// HandleDesignerRetainedRenderingToggled @ 146a79c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl HandleDesignerRetainedRenderingToggled(IConsoleVariable *param_1)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplicationBase::InvalidateAllWidgets((FSlateApplicationBase *)this,false);
  return;
}

// OnGameWindowCloseButtonClickedSimpleDelegate @ 146a834f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl OnGameWindowCloseButtonClickedSimpleDelegate(void)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UObject *this;
  UFunction *pUVar4;
  UClass *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  UEngine *pUVar7;
  bool bVar8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnGameWindowCloseButtonClicked,&local_28);
  if ((OnGameWindowCloseButtonClicked._16_8_ == 0) ||
     (this = FWeakObjectPtr::Get((FWeakObjectPtr *)&OnGameWindowCloseButtonClicked.field_0x8),
     this == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    pUVar4 = UObject::FindFunction(this,(FName)OnGameWindowCloseButtonClicked._16_8_);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (pUVar4 != (UFunction *)0x0) {
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&OnGameWindowCloseButtonClicked,
                 (void *)0x0);
      return;
    }
  }
  pUVar7 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar5 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_146a835a3;
  }
  pUVar7 = (UEngine *)0x0;
LAB_146a835a3:
  pTVar6 = (TReferenceControllerBase<1> *)pUVar7[1]._padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a835c6;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    if ((SWindow *)pUVar7[1]._padding_ != (SWindow *)0x0) {
      SWindow::RequestDestroyWindow((SWindow *)pUVar7[1]._padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return;
    }
  }
LAB_146a835c6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// SlateMeshToSlateRenderData @ 146a962b0

void __cdecl
SlateMeshToSlateRenderData
          (USlateVectorArtData *param_1,TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType local_38;
  uint local_30;
  int local_2c;
  
  uVar10 = (param_1->IndexData).ArrayNum;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (param_1->IndexData).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      pFVar8 = (param_1->IndexData).AllocatorInstance.Data + lVar11 * 4;
      if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           *(undefined4 *)pFVar8;
    } while (lVar11 < (int)uVar10);
  }
  local_30 = (param_1->VertexData).ArrayNum;
  lVar11 = (longlong)(int)local_30;
  uVar10 = 0;
  pFVar8 = (param_1->VertexData).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
    uVar9 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar8,lVar11 * 0x3c);
    uVar9 = local_30;
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  uVar7 = uVar9;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0,&param_2->AllocatorInstance,0,piVar1);
    uVar7 = local_30;
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    uVar7 = local_30;
  }
  if (uVar9 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar10 < (int)uVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = param_2->ArrayNum;
      pFVar8 = local_38.Data + (longlong)(int)uVar10 * 0x3c;
      if (uVar7 == *piVar1) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x42c,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = uVar7 + 1;
      uVar6 = 0;
      if ((int)uVar7 < (int)(uVar7 + 1)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar10 = uVar10 + 1;
      lVar11 = (longlong)(int)uVar7 * 0x2c;
      *(undefined4 *)(pFVar2 + lVar11 + 0x18) = *(undefined4 *)pFVar8;
      *(undefined4 *)(pFVar2 + lVar11 + 0x1c) = *(undefined4 *)(pFVar8 + 4);
      *(undefined4 *)(pFVar2 + lVar11 + 0x20) = *(undefined4 *)(pFVar8 + 8);
      *(undefined4 *)(pFVar2 + lVar11) = *(undefined4 *)(pFVar8 + 0xc);
      *(undefined4 *)(pFVar2 + lVar11 + 4) = *(undefined4 *)(pFVar8 + 0x10);
      *(undefined4 *)(pFVar2 + lVar11 + 8) = *(undefined4 *)(pFVar8 + 0x14);
      *(undefined4 *)(pFVar2 + lVar11 + 0xc) = *(undefined4 *)(pFVar8 + 0x18);
      *(undefined4 *)(pFVar2 + lVar11 + 0x10) = *(undefined4 *)(pFVar8 + 0x1c);
      *(undefined4 *)(pFVar2 + lVar11 + 0x14) = *(undefined4 *)(pFVar8 + 0x20);
      uVar7 = local_30;
    } while (uVar10 < uVar9);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// ValidateUserWidgetClass @ 146a9c150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl CreateWidgetHelpers::ValidateUserWidgetClass(UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMessageLog *pFVar5;
  FText *pFVar6;
  UClass *pUVar7;
  FTextFormat *pFVar8;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1e8
  ;
  FName local_1d8;
  FString local_1d0;
  FText local_1c0;
  FString local_1b0;
  FText local_1a0;
  FFormatArgumentValue local_190;
  FFormatArgumentValue local_170;
  TSharedRef<FTokenizedMessage,1> local_150;
  FText local_140;
  FText local_130;
  TSharedRef<FTokenizedMessage,1> local_120;
  FText local_110;
  FText local_100;
  TSharedRef<FTokenizedMessage,1> local_f0;
  FText local_e0;
  FTextFormat local_d0;
  FTextFormat local_c0;
  FMessageLog local_b0;
  FMessageLog local_80;
  FMessageLog local_50;
  
  if (param_1 == (UClass *)0x0) {
    ::FName::FName(&local_res8,"PIE");
    pFVar5 = FMessageLog::FMessageLog(&local_b0,&local_res8);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_140,L"UMG",L"WidgetClassNull",
                        L"CreateWidget called with a null class.");
    FMessageLog::Error(pFVar5,&local_150,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_b0);
    return false;
  }
  pUVar7 = UUserWidget::StaticClass();
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((param_1->ClassFlags & (CLASS_NewerVersionExists|CLASS_Deprecated|CLASS_Abstract)) ==
          CLASS_None) {
        return true;
      }
      FText::AsLocalizable_Advanced_LocText
                (&local_1c0,L"UMG",L"NotValidClass",
                 L"Abstract, Deprecated or Replaced classes are not allowed to be used to construct a user widget. {UserWidgetClass} is one of these."
                );
      local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Pairs.ArrayNum = 0;
      local_1f8.Pairs.ArrayMax = 0;
      local_res10 = (FName)param_1->_padding_;
      pFVar6 = FText::FromName(&local_130,&local_res10);
      local_190.Type = Text;
      FText::FText((FText *)&local_190.TextValue,pFVar6);
      if ((local_190.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_1d0,L"UserWidgetClass");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1d0,&local_190);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_190.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_190.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_res18,"PIE");
      pFVar5 = FMessageLog::FMessageLog(&local_80,&local_res18);
      pFVar8 = FTextFormat::FTextFormat(&local_d0,&local_1c0,Default);
      pFVar6 = FText::Format(&local_110,pFVar8,&local_1f8);
      FMessageLog::Error(pFVar5,&local_120,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_80);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data,
                 local_1f8.Pairs.ArrayNum);
      local_1a0.TextData.Reference = local_1c0.TextData.Reference;
      if ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1f8.Pairs.AllocatorInstance.Data);
        local_1a0.TextData.Reference = local_1c0.TextData.Reference;
      }
      goto LAB_146a9c52f;
    }
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_1a0,L"UMG",L"NotUserWidget",
             L"CreateWidget can only be used on UUserWidget children. {UserWidgetClass} is not a UUserWidget."
            );
  local_1e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Pairs.ArrayNum = 0;
  local_1e8.Pairs.ArrayMax = 0;
  local_res20 = (FName)param_1->_padding_;
  pFVar6 = FText::FromName(&local_100,&local_res20);
  local_170.Type = Text;
  FText::FText((FText *)&local_170.TextValue,pFVar6);
  if ((local_170.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  ::FString::FString(&local_1b0,L"UserWidgetClass");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_1e8,&local_1b0,&local_170);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_170.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_170.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_1d8,"PIE");
  pFVar5 = FMessageLog::FMessageLog(&local_50,&local_1d8);
  pFVar8 = FTextFormat::FTextFormat(&local_c0,&local_1a0,Default);
  pFVar6 = FText::Format(&local_e0,pFVar8,&local_1e8);
  FMessageLog::Error(pFVar5,&local_f0,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_50);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data,
             local_1e8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1e8.Pairs.AllocatorInstance.Data);
  }
LAB_146a9c52f:
  if (local_1a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
  }
  return false;
}

// Z_Construct_UClass_UNavigationUIComponent_NoRegister @ 146a9c830

UClass * __cdecl Z_Construct_UClass_UNavigationUIComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NavigationUIComponent",
               &Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton,
               UNavigationUIComponent::StaticRegisterNativesUNavigationUIComponent,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNavigationUIComponent>,
               InternalVTableHelperCtorCaller<UNavigationUIComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationUIComponent.InnerSingleton;
}

// Z_Construct_UClass_USlateBlueprintLibrary_NoRegister @ 146a9c8f0

UClass * __cdecl Z_Construct_UClass_USlateBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateBlueprintLibrary",
               &Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton,
               USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USlateBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USlateBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_USlateVectorArtData_NoRegister @ 146a9c9b0

UClass * __cdecl Z_Construct_UClass_USlateVectorArtData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateVectorArtData",
               &Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton,
               USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USlateVectorArtData>,
               InternalVTableHelperCtorCaller<USlateVectorArtData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton;
}

// Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister @ 146a9ca60

UClass * __cdecl Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentUserWidgetExtension",
               &Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton,
               UUIComponentUserWidgetExtension::StaticRegisterNativesUUIComponentUserWidgetExtension
               ,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIComponentUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUIComponentUserWidgetExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton;
}

// Z_Construct_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension_NoRegister @ 146a9cb20

UClass * __cdecl
Z_Construct_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentWidgetBlueprintGeneratedClassExtension",
               &Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
                InnerSingleton,
               UUIComponentWidgetBlueprintGeneratedClassExtension::
               StaticRegisterNativesUUIComponentWidgetBlueprintGeneratedClassExtension,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               InternalVTableHelperCtorCaller<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               local_res8,UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
         InnerSingleton;
}

// Z_Construct_UClass_UUserWidgetFunctionLibrary_NoRegister @ 146a9cbe0

UClass * __cdecl Z_Construct_UClass_UUserWidgetFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetFunctionLibrary",
               &Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton,
               UUserWidgetFunctionLibrary::StaticRegisterNativesUUserWidgetFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserWidgetFunctionLibrary>,
               InternalVTableHelperCtorCaller<UUserWidgetFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister @ 146a9cca0

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton,
               UWidgetBlueprintGeneratedClass::StaticRegisterNativesUWidgetBlueprintGeneratedClass,
               0x3e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton;
}

// Z_Construct_UClass_UWidgetBlueprintLibrary_NoRegister @ 146a9cd60

UClass * __cdecl Z_Construct_UClass_UWidgetBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton,
               UWidgetBlueprintLibrary::StaticRegisterNativesUWidgetBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWidgetBlueprintLibrary>
               ,InternalVTableHelperCtorCaller<UWidgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWidgetInteractionComponent_NoRegister @ 146a9ce20

UClass * __cdecl Z_Construct_UClass_UWidgetInteractionComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetInteractionComponent",
               &Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton,
               UWidgetInteractionComponent::StaticRegisterNativesUWidgetInteractionComponent,0x560,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetInteractionComponent>,
               InternalVTableHelperCtorCaller<UWidgetInteractionComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton;
}

// Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister @ 146a9cee0

UClass * __cdecl Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcherSlot",
               &Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton,
               UWidgetSwitcherSlot::StaticRegisterNativesUWidgetSwitcherSlot,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetSwitcherSlot>,
               InternalVTableHelperCtorCaller<UWidgetSwitcherSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton;
}

// Z_Construct_UClass_UWidgetSwitcher_NoRegister @ 146a9cfa0

UClass * __cdecl Z_Construct_UClass_UWidgetSwitcher_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcher",
               &Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton,
               UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetSwitcher>,
               InternalVTableHelperCtorCaller<UWidgetSwitcher>,local_res8,UPanelWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton;
}

// Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister @ 146a9d060

UClass * __cdecl Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarAreaSlot",
               &Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton,
               UWindowTitleBarAreaSlot::StaticRegisterNativesUWindowTitleBarAreaSlot,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWindowTitleBarAreaSlot>
               ,InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton;
}

// Z_Construct_UClass_UWindowTitleBarArea_NoRegister @ 146a9d120

UClass * __cdecl Z_Construct_UClass_UWindowTitleBarArea_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarArea",
               &Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton,
               UWindowTitleBarArea::StaticRegisterNativesUWindowTitleBarArea,0x1e8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWindowTitleBarArea>,
               InternalVTableHelperCtorCaller<UWindowTitleBarArea>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton;
}

// Z_Construct_UClass_UWrapBox_NoRegister @ 146a9d1e0

UClass * __cdecl Z_Construct_UClass_UWrapBox_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBox",&Z_Registration_Info_UClass_UWrapBox.InnerSingleton,
               UWrapBox::StaticRegisterNativesUWrapBox,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWrapBox>,InternalVTableHelperCtorCaller<UWrapBox>,
               local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBox.InnerSingleton;
}

// Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature @ 146a9d2a0

UFunction * __cdecl Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_UMG_EUMGItemDropZone @ 146a9d2e0

UEnum * __cdecl Z_Construct_UEnum_UMG_EUMGItemDropZone(void)

{
  if (Z_Registration_Info_UEnum_EUMGItemDropZone.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUMGItemDropZone.InnerSingleton,
               &Z_Construct_UEnum_UMG_EUMGItemDropZone_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUMGItemDropZone.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWidgetComponentInstanceData @ 146a9d320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetComponentInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.InnerSingleton;
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

// IMPLEMENT_MODULE_UMG @ 146aabf90

void __cdecl IMPLEMENT_MODULE_UMG(void)

{
  return;
}

// OnRetainerModeChangedDelegate'' @ 1503dd7b0

void __cdecl `dynamic_atexit_destructor_for_'SRetainerWidget::OnRetainerModeChangedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             SRetainerWidget::OnRetainerModeChangedDelegate._8_8_,
             SRetainerWidget::OnRetainerModeChangedDelegate._16_4_);
  if (SRetainerWidget::OnRetainerModeChangedDelegate._8_8_ != 0) {
    FMemory::Free((void *)SRetainerWidget::OnRetainerModeChangedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SRetainerWidget::OnRetainerModeChangedDelegate);
  return;
}

// Shared_WaitingToRender'' @ 1503dd7f0

void __cdecl `dynamic_atexit_destructor_for_'SRetainerWidget::Shared_WaitingToRender__(void)

{
  ForElementType<SRetainerWidget_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = SRetainerWidget::Shared_WaitingToRender.AllocatorInstance.SecondaryData;
  if (SRetainerWidget::Shared_WaitingToRender.AllocatorInstance.SecondaryData ==
      (ForElementType<SRetainerWidget_*>)0x0) {
    return;
  }
  if (SRetainerWidget::Shared_WaitingToRender.AllocatorInstance.SecondaryData !=
      (ForElementType<SRetainerWidget_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// UMGStyleInstance'' @ 1503dd810

void __cdecl `dynamic_atexit_destructor_for_'FUMGStyle::UMGStyleInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FUMGStyle::UMGStyleInstance.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceWindowButtonsHidden'' @ 1503dd830

void __cdecl UE::UMG::Private::_dynamic_atexit_destructor_for__CVarForceWindowButtonsHidden__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceWindowButtonsHidden);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlateEnableRenderWithLocalTransform'' @ 1503dd850

void __cdecl _dynamic_atexit_destructor_for__CVarGlateEnableRenderWithLocalTransform__(void)

{
  CVarGlateEnableRenderWithLocalTransform._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGlateEnableRenderWithLocalTransform);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaximumRenderTargetHeight'' @ 1503dd870

void __cdecl _dynamic_atexit_destructor_for__CVarMaximumRenderTargetHeight__(void)

{
  CVarMaximumRenderTargetHeight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaximumRenderTargetHeight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaximumRenderTargetWidth'' @ 1503dd890

void __cdecl _dynamic_atexit_destructor_for__CVarMaximumRenderTargetWidth__(void)

{
  CVarMaximumRenderTargetWidth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaximumRenderTargetWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateWorldWidgetIgnoreNotVisibleWidgets'' @ 1503dd8b0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateWorldWidgetIgnoreNotVisibleWidgets__(void)

{
  CVarSlateWorldWidgetIgnoreNotVisibleWidgets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateWorldWidgetIgnoreNotVisibleWidgets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateWorldWidgetZOrder'' @ 1503dd8d0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateWorldWidgetZOrder__(void)

{
  CVarSlateWorldWidgetZOrder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateWorldWidgetZOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarbUseAutomaticTickModeByDefault'' @ 1503dd8f0

void __cdecl _dynamic_atexit_destructor_for__CVarbUseAutomaticTickModeByDefault__(void)

{
  CVarbUseAutomaticTickModeByDefault._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarbUseAutomaticTickModeByDefault)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'DeferRetainedRenderingRT'' @ 1503dd910

void __cdecl _dynamic_atexit_destructor_for__DeferRetainedRenderingRT__(void)

{
  DeferRetainedRenderingRT._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DeferRetainedRenderingRT);
  return;
}

// `dynamic_atexit_destructor_for_'EnableDesignerRetainedRendering'' @ 1503dd930

void __cdecl _dynamic_atexit_destructor_for__EnableDesignerRetainedRendering__(void)

{
  EnableDesignerRetainedRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&EnableDesignerRetainedRendering);
  return;
}

// `dynamic_atexit_destructor_for_'EnableRetainedRendering'' @ 1503dd950

void __cdecl _dynamic_atexit_destructor_for__EnableRetainedRendering__(void)

{
  EnableRetainedRendering._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&EnableRetainedRendering);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpTemplateSizesCommand'' @ 1503dd970

void __cdecl _dynamic_atexit_destructor_for__GDumpTemplateSizesCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpTemplateSizesCommand);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1503dd990

void __cdecl
`UWidgetSwitcher::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
_dynamic_atexit_destructor_for__Instance__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Local'' @ 1503dd9a0

void __cdecl
`UUIComponent::GetFieldNotificationDescriptor'::__l2::_dynamic_atexit_destructor_for__Local__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogUMG'' @ 1503dd9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUMG__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUMG);
  return;
}

// `dynamic_atexit_destructor_for_'MaskedMaterial_Finder'' @ 1503dd9d0

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::_dynamic_atexit_destructor_for__MaskedMaterial_Finder__
          (void)

{
  MaskedMaterial_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&MaskedMaterial_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'MaskedMaterial_OneSided_Finder'' @ 1503dd9f0

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::
_dynamic_atexit_destructor_for__MaskedMaterial_OneSided_Finder__(void)

{
  MaskedMaterial_OneSided_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&MaskedMaterial_OneSided_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'NullElementList'' @ 1503dda10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `GetNullElementList'::__l2::_dynamic_atexit_destructor_for__NullElementList__(void)

{
  FSlateWindowElementList::~FSlateWindowElementList(&NullElementList);
  return;
}

// `dynamic_atexit_destructor_for_'OnGameWindowCloseButtonClicked'' @ 1503dda30

void __cdecl _dynamic_atexit_destructor_for__OnGameWindowCloseButtonClicked__(void)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnGameWindowCloseButtonClicked);
  return;
}

// `dynamic_atexit_destructor_for_'OpaqueMaterial_Finder'' @ 1503dda50

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::_dynamic_atexit_destructor_for__OpaqueMaterial_Finder__
          (void)

{
  OpaqueMaterial_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&OpaqueMaterial_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'OpaqueMaterial_OneSided_Finder'' @ 1503dda70

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::
_dynamic_atexit_destructor_for__OpaqueMaterial_OneSided_Finder__(void)

{
  OpaqueMaterial_OneSided_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&OpaqueMaterial_OneSided_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'TranslucentMaterial_Finder'' @ 1503dda90

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::
_dynamic_atexit_destructor_for__TranslucentMaterial_Finder__(void)

{
  TranslucentMaterial_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&TranslucentMaterial_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'TranslucentMaterial_OneSided_Finder'' @ 1503ddab0

void __cdecl
`UWidgetComponent::UWidgetComponent'::__l2::
_dynamic_atexit_destructor_for__TranslucentMaterial_OneSided_Finder__(void)

{
  TranslucentMaterial_OneSided_Finder._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&TranslucentMaterial_OneSided_Finder);
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 1503ddad0

void __cdecl
`SPostBufferUpdate::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 1504f7670

bool __thiscall
``UUIComponentWidgetBlueprintGeneratedClassExtension::PreConstruct'::__l13::<lambda_1>::operator()'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6249991217493311626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6249991217493311626>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

