// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 299

// Disabled'' @ 140f3d130

void __cdecl `dynamic_initializer_for_'FNavigationMethod::FDebuggingText::Disabled__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::Disabled,L"NavigationMethod",L"StateNotEnabled",
             L"Disabled");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::Disabled__);
  return;
}

// DoesNotIntersect'' @ 140f3d170

void __cdecl `dynamic_initializer_for_'FNavigationMethod::FDebuggingText::DoesNotIntersect__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::DoesNotIntersect,L"NavigationMethod",
             L"StateDoesNotIntersect",L"Does not intersect");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::DoesNotIntersect__);
  return;
}

// DoesNotSuportKeyboardFocus'' @ 140f3d1b0

void __cdecl
`dynamic_initializer_for_'FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus,L"NavigationMethod",
             L"StateDoesNotSuportKeyboardFocus",L"Keyboard focus unsupported");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::
         DoesNotSuportKeyboardFocus__);
  return;
}

// EmptySet'' @ 140f3d1f0

void __cdecl `dynamic_initializer_for_'FTouchKeySet::EmptySet__(void)

{
  FKey local_res8;
  FName local_28;
  FKeyDetails *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_28 = EKeys::Invalid.KeyName;
  local_20 = EKeys::Invalid.KeyDetails.Object;
  local_18 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FTouchKeySet::EmptySet._44_4_ = 0x80;
  FTouchKeySet::EmptySet._0_8_ = 0;
  FTouchKeySet::EmptySet._8_8_ = 0;
  FTouchKeySet::EmptySet._32_8_ = 0;
  FTouchKeySet::EmptySet._40_4_ = 0;
  FTouchKeySet::EmptySet._52_4_ = 0;
  FTouchKeySet::EmptySet._64_8_ = 0;
  FTouchKeySet::EmptySet._72_4_ = 0;
  FTouchKeySet::EmptySet._48_4_ = 0xffffffff;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey_const_&>
            ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet,
             &local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  atexit(`dynamic_atexit_destructor_for_'FTouchKeySet::EmptySet__);
  return;
}

// Invalid'' @ 140f3d2a0

void __cdecl `dynamic_initializer_for_'FSlateCachedElementsHandle::Invalid__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSlateCachedElementsHandle::Invalid__);
  return;
}

// NotADescendant'' @ 140f3d2c0

void __cdecl `dynamic_initializer_for_'FNavigationMethod::FDebuggingText::NotADescendant__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::NotADescendant,L"NavigationMethod",
             L"StateNotADescendant",L"Not a descendant");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::NotADescendant__);
  return;
}

// NotCompatibleWithUserIndex'' @ 140f3d300

void __cdecl
`dynamic_initializer_for_'FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex,L"NavigationMethod",
             L"StateNotCompatibleWithUserIndex",L"User Index not compatible");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::
         NotCompatibleWithUserIndex__);
  return;
}

// OnFindNextFocusableWidgetExecuted'' @ 140f3d340

void __cdecl `dynamic_initializer_for_'FHittestGrid::OnFindNextFocusableWidgetExecuted__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FHittestGrid::OnFindNextFocusableWidgetExecuted__);
  return;
}

// ParentDisabled'' @ 140f3d360

void __cdecl `dynamic_initializer_for_'FNavigationMethod::FDebuggingText::ParentDisabled__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::ParentDisabled,L"NavigationMethod",
             L"StateParentNotEnabled",L"ParentDisabled");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::ParentDisabled__);
  return;
}

// PreviousWidgetIsBetter'' @ 140f3d3a0

void __cdecl
`dynamic_initializer_for_'FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter,L"NavigationMethod",
             L"StatePreviousWidgetIsBetter",L"Previous Widget was better");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter__
        );
  return;
}

// StandardSet'' @ 140f3d3e0

void __cdecl `dynamic_initializer_for_'FTouchKeySet::StandardSet__(void)

{
  FKey local_res8;
  FName local_28;
  FKeyDetails *local_20;
  TReferenceControllerBase<1> *local_18;
  
  local_28 = EKeys::LeftMouseButton.KeyName;
  local_20 = EKeys::LeftMouseButton.KeyDetails.Object;
  local_18 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FTouchKeySet::StandardSet._44_4_ = 0x80;
  FTouchKeySet::StandardSet._0_8_ = 0;
  FTouchKeySet::StandardSet._8_8_ = 0;
  FTouchKeySet::StandardSet._32_8_ = 0;
  FTouchKeySet::StandardSet._40_4_ = 0;
  FTouchKeySet::StandardSet._52_4_ = 0;
  FTouchKeySet::StandardSet._64_8_ = 0;
  FTouchKeySet::StandardSet._72_4_ = 0;
  FTouchKeySet::StandardSet._48_4_ = 0xffffffff;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey_const_&>
            ((TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::StandardSet,
             &local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  atexit(`dynamic_atexit_destructor_for_'FTouchKeySet::StandardSet__);
  return;
}

// Valid'' @ 140f3d490

void __cdecl `dynamic_initializer_for_'FNavigationMethod::FDebuggingText::Valid__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&FNavigationMethod::FDebuggingText::Valid,L"NavigationMethod",L"StateValid",L"Valid");
  atexit(`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::Valid__);
  return;
}

// `dynamic_initializer_for_'CVarApplyDisabledEffectOnWidgets'' @ 140f3d4d0

void __cdecl _dynamic_initializer_for__CVarApplyDisabledEffectOnWidgets__(void)

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
    puVar1[3] = HandleApplyDisabledEffectOnWidgetsToggled;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarApplyDisabledEffectOnWidgets,L"Slate.ApplyDisabledEffectOnWidgets",
             &bApplyDisabledEffectOnWidgets,
             L"If true, disabled game-layer widgets will have alpha multiplied by 0.45.",
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
  atexit(_dynamic_atexit_destructor_for__CVarApplyDisabledEffectOnWidgets__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNavigationExperimental'' @ 140f3d610

void __cdecl _dynamic_initializer_for__CVarEnableNavigationExperimental__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNavigationExperimental,L"Slate.Navigation.Experimental",
             &GEnableNavigationExperimental,L"If true, will use experimental navigation system",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNavigationExperimental__);
  return;
}

// `dynamic_initializer_for_'CVarGrowSVGAtlasFrameWindow'' @ 140f3d660

void __cdecl _dynamic_initializer_for__CVarGrowSVGAtlasFrameWindow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrowSVGAtlasFrameWindow,L"Slate.GrowSVGAtlasFrameWindow",
             &SVGAtlasFlushParams.GrowAtlasFrameWindow,
             L"The number of frames within the atlas will resize rather than flush.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGrowSVGAtlasFrameWindow__);
  return;
}

// `dynamic_initializer_for_'CVarGrowSVGNonAtlasFrameWindow'' @ 140f3d6b0

void __cdecl _dynamic_initializer_for__CVarGrowSVGNonAtlasFrameWindow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGrowSVGNonAtlasFrameWindow,L"Slate.GrowSVGNonAtlasFrameWindow",
             &SVGAtlasFlushParams.GrowNonAtlasFrameWindow,
             L"The number of frames within the large pool will resize rather than flush.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGrowSVGNonAtlasFrameWindow__);
  return;
}

// `dynamic_initializer_for_'CVarHitTestGridDebugging'' @ 140f3d700

void __cdecl _dynamic_initializer_for__CVarHitTestGridDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHitTestGridDebugging,L"Slate.HitTestGridDebugging",&GSlateHitTestGridDebugging,
             L"Whether to show a visualization of everything in the hit teest grid",0);
  atexit(_dynamic_atexit_destructor_for__CVarHitTestGridDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarInvalidationDebugging'' @ 140f3d750

void __cdecl _dynamic_initializer_for__CVarInvalidationDebugging__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarInvalidationDebugging,L"Slate.InvalidationDebugging",false,
             L"Deprecated - Use SlateDebugger.Invalidate.Enable",
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
  atexit(_dynamic_atexit_destructor_for__CVarInvalidationDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSVGAtlasPagesBeforeFlush'' @ 140f3d880

void __cdecl _dynamic_initializer_for__CVarMaxSVGAtlasPagesBeforeFlush__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSVGAtlasPagesBeforeFlush,L"Slate.MaxSVGAtlasPagesBeforeFlush",
             &SVGAtlasFlushParams.InitialMaxAtlasPagesBeforeFlushRequest,
             L"The number of atlas textures created and used before we flush the cache if a texture atlas is full"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSVGAtlasPagesBeforeFlush__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSVGNonAtlasPagesBeforeFlush'' @ 140f3d8d0

void __cdecl _dynamic_initializer_for__CVarMaxSVGNonAtlasPagesBeforeFlush__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSVGNonAtlasPagesBeforeFlush,L"Slate.MaxSVGNonAtlasTexturesBeforeFlush",
             &SVGAtlasFlushParams.InitialMaxNonAtlasPagesBeforeFlushRequest,
             L"The number of large textures initially.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSVGNonAtlasPagesBeforeFlush__);
  return;
}

// `dynamic_initializer_for_'CVarNavigationDebugging'' @ 140f3d920

void __cdecl _dynamic_initializer_for__CVarNavigationDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNavigationDebugging,L"Slate.NavigationDebugging",&GSlateNavigationDebugging,
             L"Whether to show a visualization of navigation from current widget",0);
  atexit(_dynamic_atexit_destructor_for__CVarNavigationDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarNavigationIgnoreCustomRules'' @ 140f3d970

void __cdecl _dynamic_initializer_for__CVarNavigationIgnoreCustomRules__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNavigationIgnoreCustomRules,L"Slate.Navigation.IgnoreCustomRules",
             &GNavigationIgnoreCustomRules,
             L"Will disable custom navigation rules. Used for testing purposes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNavigationIgnoreCustomRules__);
  return;
}

// `dynamic_initializer_for_'CVarNavigationSearchFromCorners'' @ 140f3d9c0

void __cdecl _dynamic_initializer_for__CVarNavigationSearchFromCorners__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNavigationSearchFromCorners,L"Slate.Navigation.SearchFromCorners",
             &GNavigationSearchFromCorners,
             L"If true, will scan for candidate widget from the corners the source widget. This will increase with width of widgets that can be navigated to"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNavigationSearchFromCorners__);
  return;
}

// `dynamic_initializer_for_'CVarSlateCheckUObjectRenderResources'' @ 140f3da10

void __cdecl _dynamic_initializer_for__CVarSlateCheckUObjectRenderResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateCheckUObjectRenderResources,L"Slate.CheckUObjectRenderResources",
             &GSlateCheckUObjectRenderResources,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateCheckUObjectRenderResources__);
  return;
}

// `dynamic_initializer_for_'CVarSlateCheckUObjectShapedGlyphSequence'' @ 140f3da60

void __cdecl _dynamic_initializer_for__CVarSlateCheckUObjectShapedGlyphSequence__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateCheckUObjectShapedGlyphSequence,L"Slate.CheckUObjectShapedGlyphSequence",
             &GSlateCheckUObjectShapedGlyphSequence,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateCheckUObjectShapedGlyphSequence__);
  return;
}

// `dynamic_initializer_for_'CVarSlateContrast'' @ 140f3dab0

void __cdecl _dynamic_initializer_for__CVarSlateContrast__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateContrast,L"Slate.Contrast",&GSlateContrast,
             L"The amount of contrast to apply to the UI (default 1).",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateContrast__);
  return;
}

// `dynamic_initializer_for_'CVarSlateEnableLayoutLocalization'' @ 140f3db00

void __cdecl _dynamic_initializer_for__CVarSlateEnableLayoutLocalization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateEnableLayoutLocalization,L"Slate.EnableLayoutLocalization",
             &GSlateEnableLayoutLocalization,
             L"Controls if we enable or disable localized layout, which affects left to right or right to left detection for cultures."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateEnableLayoutLocalization__);
  return;
}

// `dynamic_initializer_for_'CVarSlateFastWidgetPath'' @ 140f3db50

void __cdecl _dynamic_initializer_for__CVarSlateFastWidgetPath__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateFastWidgetPath,L"Slate.EnableFastWidgetPath",&GSlateFastWidgetPath,
             L"Whether or not we enable fast widget pathing.  This mode relies on parent pointers to work correctly."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateFastWidgetPath__);
  return;
}

// `dynamic_initializer_for_'CVarSlateFlowDirectionShouldFollowCultureByDefault'' @ 140f3dba0

void __cdecl _dynamic_initializer_for__CVarSlateFlowDirectionShouldFollowCultureByDefault__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateFlowDirectionShouldFollowCultureByDefault,
             L"Slate.ShouldFollowCultureByDefault",&GSlateFlowDirectionShouldFollowCultureByDefault,
             L"Should we initially follow the culture\'s flow direction at the window level.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateFlowDirectionShouldFollowCultureByDefault__);
  return;
}

// `dynamic_initializer_for_'CVarSlateNewUpdateMethod'' @ 140f3dbf0

void __cdecl _dynamic_initializer_for__CVarSlateNewUpdateMethod__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateNewUpdateMethod,L"Slate.EnableGlobalInvalidation",
             &GSlateEnableGlobalInvalidation,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateNewUpdateMethod__);
  return;
}

// `dynamic_initializer_for_'CVarSlateSdfTextDebugVisual'' @ 140f3dc40

void __cdecl _dynamic_initializer_for__CVarSlateSdfTextDebugVisual__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSlateSdfTextDebugVisual,L"UI.SlateSDFText.DebugVisual",&SdfTextDebugVisual,
             L"Slate SDF text debug visuals - 0: Disabled, 1: Raw SDF, 2: Text color, 3: Colored boxes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSlateSdfTextDebugVisual__);
  return;
}

// `dynamic_initializer_for_'CVarUseSharedBreakIterator'' @ 140f3dc90

void __cdecl _dynamic_initializer_for__CVarUseSharedBreakIterator__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseSharedBreakIterator,L"Slate.UseSharedBreakIterator",
             &GSlateUseSharedBreakIterator,
             L"If true, reuse cached break iterators to reduce memory overhead",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseSharedBreakIterator__);
  return;
}

// `dynamic_initializer_for_'Disabled'' @ 140f3dce0

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__Disabled__(void)

{
  FText::AsLocalizable_Advanced_LocText(&Disabled,L"HittestGrid",L"StateNotEnabled",L"Disabled");
  atexit(_dynamic_atexit_destructor_for__Disabled__);
  return;
}

// `dynamic_initializer_for_'DoesNotIntersect'' @ 140f3dd20

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__DoesNotIntersect__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DoesNotIntersect,L"HittestGrid",L"StateDoesNotIntersect",L"Does not intersect");
  atexit(_dynamic_atexit_destructor_for__DoesNotIntersect__);
  return;
}

// `dynamic_initializer_for_'DoesNotSuportKeyboardFocus'' @ 140f3dd60

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__DoesNotSuportKeyboardFocus__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DoesNotSuportKeyboardFocus,L"HittestGrid",L"StateDoesNotSuportKeyboardFocus",
             L"Keyboard focus unsupported");
  atexit(_dynamic_atexit_destructor_for__DoesNotSuportKeyboardFocus__);
  return;
}

// `dynamic_initializer_for_'GlobalGamepadScrollMultiplier'' @ 140f3dda0

void __cdecl _dynamic_initializer_for__GlobalGamepadScrollMultiplier__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GlobalGamepadScrollMultiplier,L"Slate.GlobalGamepadScrollMultiplier",local_res8,
             L"How much to multiply scroll amount when using gamepad.",0);
  atexit(_dynamic_atexit_destructor_for__GlobalGamepadScrollMultiplier__);
  return;
}

// `dynamic_initializer_for_'GlobalScrollAmount'' @ 140f3ddf0

void __cdecl _dynamic_initializer_for__GlobalScrollAmount__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 32.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&GlobalScrollAmount,L"Slate.GlobalScrollAmount",local_res8,
             L"How much to scroll for each click of the mouse wheel (in Slate Screen Units).",0);
  atexit(_dynamic_atexit_destructor_for__GlobalScrollAmount__);
  return;
}

// `dynamic_initializer_for_'LogHittestDebug'' @ 140f3de40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHittestDebug__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogHittestDebug,L"LogHittestDebug",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogHittestDebug__);
  return;
}

// `dynamic_initializer_for_'LogPaintedTextRef'' @ 140f3de80

void __cdecl UE::Slate::Private::_dynamic_initializer_for__LogPaintedTextRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&LogPaintedTextRef,L"Slate.LogPaintedText",&GLogPaintedText,
             L"If true, all text that is visible to the user will be logged when it is painted. This will log the full text to be painted, not the truncated or clipped version based on UI constraints."
             ,0);
  atexit(_dynamic_atexit_destructor_for__LogPaintedTextRef__);
  return;
}

// `dynamic_initializer_for_'MaterialInterfaceClassName'' @ 140f3ded0

void __cdecl SlateDrawElement::_dynamic_initializer_for__MaterialInterfaceClassName__(void)

{
  ::FName::FName(&MaterialInterfaceClassName,"MaterialInterface");
  return;
}

// `dynamic_initializer_for_'MaterialInterfaceClassName'' @ 140f3def0

void __cdecl SlateElementBatcher::_dynamic_initializer_for__MaterialInterfaceClassName__(void)

{
  ::FName::FName(&MaterialInterfaceClassName,"MaterialInterface");
  return;
}

// `dynamic_initializer_for_'NotADescendant'' @ 140f3df10

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__NotADescendant__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NotADescendant,L"HittestGrid",L"StateNotADescendant",L"Not a descendant");
  atexit(_dynamic_atexit_destructor_for__NotADescendant__);
  return;
}

// `dynamic_initializer_for_'NotCompatibleWithUserIndex'' @ 140f3df50

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__NotCompatibleWithUserIndex__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&NotCompatibleWithUserIndex,L"HittestGrid",L"StateNotCompatibleWithUserIndex",
             L"User Index not compatible");
  atexit(_dynamic_atexit_destructor_for__NotCompatibleWithUserIndex__);
  return;
}

// `dynamic_initializer_for_'ParentDisabled'' @ 140f3df90

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__ParentDisabled__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&ParentDisabled,L"HittestGrid",L"StateParentNotEnabled",L"ParentDisabled");
  atexit(_dynamic_atexit_destructor_for__ParentDisabled__);
  return;
}

// `dynamic_initializer_for_'PreviousWidgetIsBetter'' @ 140f3dfd0

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__PreviousWidgetIsBetter__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&PreviousWidgetIsBetter,L"HittestGrid",L"StatePreviousWidgetIsBetter",
             L"Previous Widget was better");
  atexit(_dynamic_atexit_destructor_for__PreviousWidgetIsBetter__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FSlateWindowElementListMemManager'' @ 140f3e010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FSlateWindowElementListMemManager__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FSlateWindowElementListMemManager ==
      (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManager>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FSlateWindowElementListMemManager");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSlateWindowElementListMemManager,*pFVar1,
               L"FSlateWindowElementList MemManager","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FSlateWindowElementListMemManagerCount'' @ 140f3e0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FSlateWindowElementListMemManagerCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FSlateWindowElementListMemManagerCount ==
      (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManagerCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FSlateWindowElementListMemManagerCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSlateWindowElementListMemManagerCount,
               *pFVar1,L"FSlateWindowElementList MemManager Count","STATGROUP_SlateMemory",
               "STATCAT_Advanced",L"Slate Memory",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateAddElements'' @ 140f3e130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateAddElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateAddElements == (FThreadSafeStaticStat<FStat_STAT_SlateAddElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateAddElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateAddElements,*pFVar1,
               L"Add Elements Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateBufferPoolMemory'' @ 140f3e1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateBufferPoolMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateBufferPoolMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SlateBufferPoolMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateBufferPoolMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateBufferPoolMemory,*pFVar1,
               L"Vertex/Index Buffer Pool Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateCachedDrawElementMemory'' @ 140f3e250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateCachedDrawElementMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateCachedDrawElementMemory ==
      (FThreadSafeStaticStat<FStat_STAT_SlateCachedDrawElementMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateCachedDrawElementMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateCachedDrawElementMemory,*pFVar1,
               L"Cached Draw Element Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateDrawElementMakeCustomVertsTime'' @ 140f3e2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateDrawElementMakeCustomVertsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateDrawElementMakeCustomVertsTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeCustomVertsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateDrawElementMakeCustomVertsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementMakeCustomVertsTime,
               *pFVar1,L"FSlateDrawElement::MakeCustomVerts Time","STATGROUP_Slate",
               "STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateDrawElementMakeTime'' @ 140f3e370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateDrawElementMakeTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateDrawElementMakeTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateDrawElementMakeTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementMakeTime,*pFVar1,
               L"FSlateDrawElement::Make Time","STATGROUP_SlateVerbose","STATCAT_Advanced",
               L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateDrawElementPrebatchTime'' @ 140f3e400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateDrawElementPrebatchTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateDrawElementPrebatchTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementPrebatchTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateDrawElementPrebatchTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementPrebatchTime,*pFVar1,
               L"FSlateDrawElement::Prebatch Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements'' @ 140f3e490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements == (FThreadSafeStaticStat<FStat_STAT_SlateElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements,*pFVar1,L"Elements",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_Border'' @ 140f3e520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_Border__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_Border ==
      (FThreadSafeStaticStat<FStat_STAT_SlateElements_Border>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_Border");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Border,*pFVar1,
               L"Elements (Border)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_Box'' @ 140f3e5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_Box__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_Box == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Box>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_Box");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Box,*pFVar1,
               L"Elements (Box)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_Line'' @ 140f3e640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_Line__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_Line == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Line>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_Line");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Line,*pFVar1,
               L"Elements (Line)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_Other'' @ 140f3e6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_Other__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_Other == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Other>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_Other");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Other,*pFVar1,
               L"Elements (Other)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_ShapedText'' @ 140f3e760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_ShapedText__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_ShapedText ==
      (FThreadSafeStaticStat<FStat_STAT_SlateElements_ShapedText>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_ShapedText");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_ShapedText,*pFVar1,
               L"Elements (ShapedText)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateElements_Text'' @ 140f3e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateElements_Text__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateElements_Text == (FThreadSafeStaticStat<FStat_STAT_SlateElements_Text>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SlateElements_Text");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateElements_Text,*pFVar1,
               L"Elements (Text)","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateGetResourceHandle'' @ 140f3e880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateGetResourceHandle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateGetResourceHandle ==
      (FThreadSafeStaticStat<FStat_STAT_SlateGetResourceHandle>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateGetResourceHandle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetResourceHandle,*pFVar1,
               L"GetResourceHandle Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateHTG_AddWidget'' @ 140f3e910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateHTG_AddWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateHTG_AddWidget == (FThreadSafeStaticStat<FStat_STAT_SlateHTG_AddWidget>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SlateHTG_AddWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_AddWidget,*pFVar1,
               L"HitTestGrid AddWidget","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateHTG_Clear'' @ 140f3e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateHTG_Clear__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateHTG_Clear == (FThreadSafeStaticStat<FStat_STAT_SlateHTG_Clear>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateHTG_Clear");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_Clear,*pFVar1,
               L"HitTestGrid Clear","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateHTG_GetCollapsedWidgets'' @ 140f3ea30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateHTG_GetCollapsedWidgets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateHTG_GetCollapsedWidgets ==
      (FThreadSafeStaticStat<FStat_STAT_SlateHTG_GetCollapsedWidgets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateHTG_GetCollapsedWidgets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_GetCollapsedWidgets,*pFVar1,
               L"HitTestGrid GetCollapsedWidgets","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateHTG_RemoveWidget'' @ 140f3eac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateHTG_RemoveWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateHTG_RemoveWidget ==
      (FThreadSafeStaticStat<FStat_STAT_SlateHTG_RemoveWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateHTG_RemoveWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_RemoveWidget,*pFVar1,
               L"HitTestGrid RemoveWidget","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateInvalidation_RecachedElements'' @ 140f3eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateInvalidation_RecachedElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateInvalidation_RecachedElements ==
      (FThreadSafeStaticStat<FStat_STAT_SlateInvalidation_RecachedElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateInvalidation_RecachedElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateInvalidation_RecachedElements,*pFVar1
               ,L"Invalidation: Recached Elements","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlatePreFullBufferTime'' @ 140f3ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlatePreFullBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlatePreFullBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlatePreFullBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlatePreFullBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePreFullBufferTime,*pFVar1,
               L"PreFill Buffers","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlateRTCreateBatches'' @ 140f3ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlateRTCreateBatches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlateRTCreateBatches ==
      (FThreadSafeStaticStat<FStat_STAT_SlateRTCreateBatches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlateRTCreateBatches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateRTCreateBatches,*pFVar1,
               L"Slate RT: Create Batches","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WeakToStrong_WidgetPath'' @ 140f3ed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WeakToStrong_WidgetPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WeakToStrong_WidgetPath ==
      (FThreadSafeStaticStat<FStat_STAT_WeakToStrong_WidgetPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WeakToStrong_WidgetPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WeakToStrong_WidgetPath,*pFVar1,
               L"Weak-To-Strong WidgetPath","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Valid'' @ 140f3ed90

void __cdecl HittestGridDebuggingText::_dynamic_initializer_for__Valid__(void)

{
  FText::AsLocalizable_Advanced_LocText(&Valid,L"HittestGrid",L"StateValid",L"Valid");
  atexit(_dynamic_atexit_destructor_for__Valid__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodOrthogonal_h__Script_SlateCore_831053743'' @ 140f3edd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodOrthogonal_h__Script_SlateCore_831053743__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodOrthogonal_h__Script_SlateCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodProximity_h__Script_SlateCore_406690441'' @ 140f3ee10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodProximity_h__Script_SlateCore_406690441__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Private_Input_NavigationMethodProximity_h__Script_SlateCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h__Script_SlateCore_1766835365'' @ 140f3ee50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h__Script_SlateCore_1766835365__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h__Script_SlateCore_Statics
             ::ScriptStructInfo,9,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h__Script_SlateCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationMethod_h__Script_SlateCore_3426212698'' @ 140f3eea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationMethod_h__Script_SlateCore_3426212698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationMethod_h__Script_SlateCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationRouting_h__Script_SlateCore_1243497073'' @ 140f3eee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationRouting_h__Script_SlateCore_1243497073__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_NavigationRouting_h__Script_SlateCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h__Script_SlateCore_421246439'' @ 140f3ef30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h__Script_SlateCore_421246439__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h__Script_SlateCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h__Script_SlateCore_3815944631'' @ 140f3ef80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h__Script_SlateCore_3815944631__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_FlowDirection_h__Script_SlateCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h__Script_SlateCore_3019394788'' @ 140f3efd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h__Script_SlateCore_3019394788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SlateCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Geometry_h__Script_SlateCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `scalar_deleting_destructor' @ 1424c4730

void * __thiscall
FNavigationMethod::_scalar_deleting_destructor_(FNavigationMethod *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->DisabledDestinations).HashSize = 0;
  FVar1 = (this->DisabledDestinations).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledDestinations).Elements);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c4b70

void * __thiscall
FNavigationMethodOrthogonal::_scalar_deleting_destructor_
          (FNavigationMethodOrthogonal *this,uint param_1)

{
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// Z_Construct_UScriptStruct_FInputEvent @ 1424c4f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInputEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInputEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FInputEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInputEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInputEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FKeyEvent @ 1424c4fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKeyEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKeyEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKeyEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FKeyEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKeyEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKeyEvent.InnerSingleton;
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

// EFocusCause_StaticEnum @ 1424c5060

UEnum * __cdecl EFocusCause_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFocusCause.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EFocusCause.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EFocusCause,(UObject *)pUVar1,L"EFocusCause");
  }
  return Z_Registration_Info_UEnum_EFocusCause.OuterSingleton;
}

// NewStructOps @ 1424c50e0

void * __cdecl Z_Construct_UScriptStruct_FFocusEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFocusEvent,&UE::CoreUObject::Private::Construct<FFocusEvent>,&UE::CoreUObject::Private::ConstructForTests<FFocusEvent>,&UE::CoreUObject::Private::Destruct<FFocusEvent>,&UE::CoreUObject::Private::Copy<FFocusEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNavigationMethod @ 1424c5190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationMethod(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationMethod.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationMethod_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationMethod.InnerSingleton;
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

// NewStructOps @ 1424c5210

void * __cdecl Z_Construct_UScriptStruct_FNavigationMethod_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationMethod,&UE::CoreUObject::Private::Construct<FNavigationMethod>,&UE::CoreUObject::Private::ConstructForTests<FNavigationMethod>,&UE::CoreUObject::Private::Destruct<FNavigationMethod>,&UE::CoreUObject::Private::Copy<FNavigationMethod>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5250

void * __cdecl Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCaptureLostEvent,&UE::CoreUObject::Private::Construct<FCaptureLostEvent>,&UE::CoreUObject::Private::ConstructForTests<FCaptureLostEvent>,&UE::CoreUObject::Private::Destruct<FCaptureLostEvent>,&UE::CoreUObject::Private::Copy<FCaptureLostEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5290

void * __cdecl Z_Construct_UScriptStruct_FInputEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInputEvent,&UE::CoreUObject::Private::Construct<FInputEvent>,&UE::CoreUObject::Private::ConstructForTests<FInputEvent>,&UE::CoreUObject::Private::Destruct<FInputEvent>,&UE::CoreUObject::Private::Copy<FInputEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c52d0

void * __cdecl Z_Construct_UScriptStruct_FKeyEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKeyEvent,&UE::CoreUObject::Private::Construct<FKeyEvent>,&UE::CoreUObject::Private::ConstructForTests<FKeyEvent>,&UE::CoreUObject::Private::Destruct<FKeyEvent>,&UE::CoreUObject::Private::Copy<FKeyEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5310

void * __cdecl Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnalogInputEvent,&UE::CoreUObject::Private::Construct<FAnalogInputEvent>,&UE::CoreUObject::Private::ConstructForTests<FAnalogInputEvent>,&UE::CoreUObject::Private::Destruct<FAnalogInputEvent>,&UE::CoreUObject::Private::Copy<FAnalogInputEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5430

void * __cdecl Z_Construct_UScriptStruct_FCharacterEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCharacterEvent,&UE::CoreUObject::Private::Construct<FCharacterEvent>,&UE::CoreUObject::Private::ConstructForTests<FCharacterEvent>,&UE::CoreUObject::Private::Destruct<FCharacterEvent>,&UE::CoreUObject::Private::Copy<FCharacterEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5470

void * __cdecl Z_Construct_UScriptStruct_FNavigationMethodOrthogonal_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationMethodOrthogonal,&UE::CoreUObject::Private::Construct<FNavigationMethodOrthogonal>,&UE::CoreUObject::Private::ConstructForTests<FNavigationMethodOrthogonal>,&UE::CoreUObject::Private::Destruct<FNavigationMethodOrthogonal>,&UE::CoreUObject::Private::Copy<FNavigationMethodOrthogonal>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c54b0

void * __cdecl Z_Construct_UScriptStruct_FPointerEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPointerEvent,&UE::CoreUObject::Private::Construct<FPointerEvent>,&UE::CoreUObject::Private::ConstructForTests<FPointerEvent>,&UE::CoreUObject::Private::Destruct<FPointerEvent>,&UE::CoreUObject::Private::Copy<FPointerEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c54f0

void * __cdecl Z_Construct_UScriptStruct_FMotionEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMotionEvent,&UE::CoreUObject::Private::Construct<FMotionEvent>,&UE::CoreUObject::Private::ConstructForTests<FMotionEvent>,&UE::CoreUObject::Private::Destruct<FMotionEvent>,&UE::CoreUObject::Private::Copy<FMotionEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c5530

void * __cdecl Z_Construct_UScriptStruct_FNavigationEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationEvent,&UE::CoreUObject::Private::Construct<FNavigationEvent>,&UE::CoreUObject::Private::ConstructForTests<FNavigationEvent>,&UE::CoreUObject::Private::Destruct<FNavigationEvent>,&UE::CoreUObject::Private::Copy<FNavigationEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1424c56a0

void * __cdecl Z_Construct_UScriptStruct_FNavigationMethodProximity_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNavigationMethodProximity,&UE::CoreUObject::Private::Construct<FNavigationMethodProximity>,&UE::CoreUObject::Private::ConstructForTests<FNavigationMethodProximity>,&UE::CoreUObject::Private::Destruct<FNavigationMethodProximity>,&UE::CoreUObject::Private::Copy<FNavigationMethodProximity>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1424c5fb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c5fe0

void * __thiscall
FNavigationMethodProximity::_scalar_deleting_destructor_
          (FNavigationMethodProximity *this,uint param_1)

{
  ~FNavigationMethodProximity(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c6220

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FInputEvent::_scalar_deleting_destructor_(FInputEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// EWidgetNavigationRoutingPolicy_StaticEnum @ 1424c6260

UEnum * __cdecl EWidgetNavigationRoutingPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetNavigationRoutingPolicy,(UObject *)pUVar1,
                       L"EWidgetNavigationRoutingPolicy");
  }
  return Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1424c65c0

void * __thiscall
FAnalogInputEvent::_scalar_deleting_destructor_(FAnalogInputEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c6710

void * __thiscall FCharacterEvent::_scalar_deleting_destructor_(FCharacterEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c6b30

void * __thiscall FPointerEvent::_scalar_deleting_destructor_(FPointerEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// EWidgetClipping_StaticEnum @ 1424c6b90

UEnum * __cdecl EWidgetClipping_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetClipping,(UObject *)pUVar1,
                       L"EWidgetClipping");
  }
  return Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1424c6c10

void * __thiscall FMotionEvent::_scalar_deleting_destructor_(FMotionEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424c6d50

void * __thiscall
FNavigationEvent::_scalar_deleting_destructor_(FNavigationEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// EFlowDirectionPreference_StaticEnum @ 1424c6e00

UEnum * __cdecl EFlowDirectionPreference_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference,(UObject *)pUVar1,
                       L"EFlowDirectionPreference");
  }
  return Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton;
}

// NewStructOps @ 1424c6f70

void * __cdecl Z_Construct_UScriptStruct_FGeometry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometry,&UE::CoreUObject::Private::Construct<FGeometry>,&UE::CoreUObject::Private::ConstructForTests<FGeometry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// CompareItems<FSlateClippingZone,int> @ 1424d9550

bool __cdecl
CompareItems<FSlateClippingZone,int>
          (FSlateClippingZone *param_1,FSlateClippingZone *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  
  if (param_3 != 0) {
    pfVar4 = &(param_2->TopLeft).field0_0x0._s_0.Y;
    pfVar3 = &(param_1->TopLeft).field0_0x0._s_0.Y;
    do {
      bVar1 = *(byte *)(pfVar4 + 7);
      bVar2 = *(byte *)(pfVar3 + 7);
      if ((((((((bVar1 ^ bVar2) & 1) != 0) || (((bVar2 ^ bVar1) & 2) != 0)) ||
            (((bVar2 ^ bVar1) & 4) != 0)) ||
           ((*(float *)((longlong)pfVar3 + (longlong)param_2 + (-4 - (longlong)param_1)) !=
             ((TVector2<float>_u_0_s_0 *)(pfVar3 + -1))->X || (*pfVar4 != *pfVar3)))) ||
          ((pfVar4[1] != pfVar3[1] || ((pfVar4[2] != pfVar3[2] || (pfVar4[3] != pfVar3[3])))))) ||
         ((pfVar4[4] != pfVar3[4] || ((pfVar4[5] != pfVar3[5] || (pfVar4[6] != pfVar3[6])))))) {
        return false;
      }
      pfVar4 = pfVar4 + 9;
      pfVar3 = pfVar3 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DefaultConstructItems<FSlateBoxElement,int> @ 1424d9720

void __cdecl DefaultConstructItems<FSlateBoxElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1 = puVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateCustomDrawerElement,int> @ 1424d9780

void __cdecl DefaultConstructItems<FSlateCustomDrawerElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateCustomVertsElement,int> @ 1424d97e0

void __cdecl DefaultConstructItems<FSlateCustomVertsElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateGradientElement,int> @ 1424d9850

void __cdecl DefaultConstructItems<FSlateGradientElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0x3f800000;
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateLineElement,int> @ 1424d98c0

void __cdecl DefaultConstructItems<FSlateLineElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x1a) = 0;
      *(undefined8 *)(puVar1 + 0x1d) = 0;
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlatePostProcessElement,int> @ 1424d9930

void __cdecl DefaultConstructItems<FSlatePostProcessElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1[0x14] = 0;
      *(undefined8 *)(puVar1 + 0x15) = 0x3f800000;
      *(undefined8 *)(puVar1 + 0x17) = 0;
      puVar1[0x19] = 0x3f800000;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateRoundedBoxElement,int> @ 1424d99b0

void __cdecl DefaultConstructItems<FSlateRoundedBoxElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x2a) = 0;
      puVar1[0x2c] = 0;
      puVar1[0x2d] = 0x3f800000;
      puVar1 = puVar1 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateShapedTextElement,int> @ 1424d9a30

void __cdecl DefaultConstructItems<FSlateShapedTextElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      *(undefined8 *)(puVar1 + 0x1c) = 0;
      *(undefined8 *)(puVar1 + 0x1e) = 0;
      puVar1[0x20] = 0;
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateSplineElement,int> @ 1424d9aa0

void __cdecl DefaultConstructItems<FSlateSplineElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateTextElement,int> @ 1424d9b00

void __cdecl DefaultConstructItems<FSlateTextElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(puVar1 + 0x14));
      *(undefined8 *)(puVar1 + 0x2c) = 0;
      *(undefined8 *)(puVar1 + 0x2e) = 0;
      puVar1 = puVar1 + 0x32;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateViewportElement,int> @ 1424d9ba0

void __cdecl DefaultConstructItems<FSlateViewportElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlateDrawElement,int> @ 1424d9c00

void __cdecl DefaultConstructItems<FSlateDrawElement,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0x3f800000;
      *puVar1 = 0;
      puVar1[1] = 0x3f800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(byte *)((longlong)puVar1 + 0x3d) = *(byte *)((longlong)puVar1 + 0x3d) & 0xfe;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHittestGrid::FAppendedGridData,int> @ 1424d9ca0

void __cdecl
DestructItems<FHittestGrid::FAppendedGridData,int>(FAppendedGridData *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Grid).WeakReferenceCount;
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
      pFVar4 = pFVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHittestGrid::FCell,int> @ 1424d9cf0

void __cdecl DestructItems<FHittestGrid::FCell,int>(FCell *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->WidgetIndexes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSlateVectorGraphicsCache::FRasterRequest,int> @ 1424d9d30

void __cdecl
DestructItems<FSlateVectorGraphicsCache::FRasterRequest,int>(FRasterRequest *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PixelData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateCustomDrawerElement,int> @ 1424d9d70

void __cdecl
DestructItems<FSlateCustomDrawerElement,int>(FSlateCustomDrawerElement *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->CustomDrawer).WeakReferenceCount;
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
      pFVar4 = pFVar4 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateCustomVertsElement,int> @ 1424d9dc0

void __cdecl
DestructItems<FSlateCustomVertsElement,int>(FSlateCustomVertsElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Vertices;
    do {
      pFVar1 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateGradientElement,int> @ 1424d9e10

void __cdecl DestructItems<FSlateGradientElement,int>(FSlateGradientElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->GradientStops;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateLineElement,int> @ 1424d9e50

void __cdecl DestructItems<FSlateLineElement,int>(FSlateLineElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Points;
    do {
      pFVar1 = (((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateShapedTextElement,int> @ 1424d9ea0

void __cdecl
DestructItems<FSlateShapedTextElement,int>(FSlateShapedTextElement *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ShapedGlyphSequence).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1[4].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateSplineElement,int> @ 1424d9ef0

void __cdecl DestructItems<FSlateSplineElement,int>(FSlateSplineElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->GradientStops;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateTextElement,int> @ 1424d9f30

void __cdecl DestructItems<FSlateTextElement,int>(FSlateTextElement *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->FontInfo).CompositeFont.SharedReferenceCount;
    do {
      if (pFVar1[5].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[5].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWidgetAndPointer,int> @ 1424d9f80

void __cdecl DestructItems<FWidgetAndPointer,int>(FWidgetAndPointer *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*plVar1);
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlateWindowElementList::FWidgetDrawElementState,int> @ 1424d9fc0

void __cdecl
DestructItems<FSlateWindowElementList::FWidgetDrawElementState,int>
          (FWidgetDrawElementState *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->CacheHandle).Ptr.WeakReferenceCount;
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
      pFVar4 = pFVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int> @ 1424da010

void __cdecl
DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int>
          (FWidgetResult *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Widget).SharedReferenceCount;
    do {
      if (*(longlong **)(pFVar1 + 1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar1 + 1) + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int> @ 1424da060

void __cdecl
DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
          (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FSlateWindowElementList,1>,int> @ 1424da0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
          (TSharedRef<FSlateWindowElementList,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,int> @ 1424da0e0

void __cdecl
DestructItems<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,int>
          (TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> *param_1,
          int param_2)

{
  FSlateShaderResource *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlateShaderResource *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int> @ 1424da120

void __cdecl
DestructItems<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int>
          (TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_> *param_1,int param_2)

{
  FSlateTextureAtlas *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FSlateTextureAtlas *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSlateClippingState,int> @ 1424da160

void __cdecl DestructItems<FSlateClippingState,int>(FSlateClippingState *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->StencilQuads).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Do<`FSlateCachedElementList::DestroyCachedData'::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&> @ 1424da1a0

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FSlateCachedElementList::DestroyCachedData_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2)

{
  undefined1 *puVar1;
  FSlateGradientElement *pFVar2;
  FSlateCustomDrawerElement *pFVar3;
  FSlateCustomVertsElement *pFVar4;
  
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (*(int *)&param_2->field_0x14 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0x14);
  }
  *(undefined4 *)&param_2->field_0x28 = 0;
  if (*(int *)&param_2->field_0x2c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&param_2->field_0x18,0,(int *)&param_2->field_0x2c);
  }
  puVar1 = &param_2->field_0x44;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateTextElement,int>
              (*(FSlateTextElement **)&param_2->field_0x30,*(int *)&param_2->field_0x40);
    *(undefined4 *)&param_2->field_0x40 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (200,8,0,(ForAnyElementType *)&param_2->field_0x30,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateTextElement,int>
              (*(FSlateTextElement **)&param_2->field_0x30,*(int *)&param_2->field_0x40);
    *(undefined4 *)&param_2->field_0x40 = 0;
  }
  puVar1 = &param_2->field_0x5c;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateShapedTextElement,int>
              (*(FSlateShapedTextElement **)&param_2->field_0x48,*(int *)&param_2->field_0x58);
    *(undefined4 *)&param_2->field_0x58 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x90,8,0,(ForAnyElementType *)&param_2->field_0x48,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateShapedTextElement,int>
              (*(FSlateShapedTextElement **)&param_2->field_0x48,*(int *)&param_2->field_0x58);
    *(undefined4 *)&param_2->field_0x58 = 0;
  }
  puVar1 = &param_2->field_0x74;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateSplineElement,int>
              (*(FSlateSplineElement **)&param_2->field_0x60,*(int *)&param_2->field_0x70);
    *(undefined4 *)&param_2->field_0x70 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x90,8,0,(ForAnyElementType *)&param_2->field_0x60,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateSplineElement,int>
              (*(FSlateSplineElement **)&param_2->field_0x60,*(int *)&param_2->field_0x70);
    *(undefined4 *)&param_2->field_0x70 = 0;
  }
  puVar1 = &param_2->field_0x8c;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateLineElement,int>
              (*(FSlateLineElement **)&param_2->field_0x78,*(int *)&param_2->field_0x88);
    *(undefined4 *)&param_2->field_0x88 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x88,8,0,(ForAnyElementType *)&param_2->field_0x78,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateLineElement,int>
              (*(FSlateLineElement **)&param_2->field_0x78,*(int *)&param_2->field_0x88);
    *(undefined4 *)&param_2->field_0x88 = 0;
  }
  puVar1 = &param_2->field_0xa4;
  pFVar2 = *(FSlateGradientElement **)&param_2->field_0x90;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateGradientElement,int>(pFVar2,*(int *)&param_2->field_0xa0);
    *(undefined4 *)&param_2->field_0xa0 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x70,0x10,0,(ForAnyElementType *)&param_2->field_0x90,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateGradientElement,int>(pFVar2,*(int *)&param_2->field_0xa0);
    *(undefined4 *)&param_2->field_0xa0 = 0;
  }
  *(undefined4 *)&param_2->field_0xb8 = 0;
  if (*(int *)&param_2->field_0xbc < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&param_2->field_0xa8,0,(int *)&param_2->field_0xbc);
  }
  *(undefined4 *)&param_2->field_0xd0 = 0;
  if (*(int *)&param_2->field_0xd4 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&param_2->field_0xc0,0,(int *)&param_2->field_0xd4);
  }
  puVar1 = &param_2->field_0xec;
  pFVar3 = *(FSlateCustomDrawerElement **)&param_2->field_0xd8;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateCustomDrawerElement,int>(pFVar3,*(int *)&param_2->field_0xe8);
    *(undefined4 *)&param_2->field_0xe8 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)&param_2->field_0xd8,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateCustomDrawerElement,int>(pFVar3,*(int *)&param_2->field_0xe8);
    *(undefined4 *)&param_2->field_0xe8 = 0;
  }
  puVar1 = &param_2->field_0x104;
  pFVar4 = *(FSlateCustomVertsElement **)&param_2->field_0xf0;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateCustomVertsElement,int>(pFVar4,*(int *)&param_2->field_0x100);
    *(undefined4 *)&param_2->field_0x100 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x80,8,0,(ForAnyElementType *)&param_2->field_0xf0,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateCustomVertsElement,int>(pFVar4,*(int *)&param_2->field_0x100);
    *(undefined4 *)&param_2->field_0x100 = 0;
  }
  *(undefined4 *)&param_2->field_0x118 = 0;
  if (*(int *)&param_2->field_0x11c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&param_2->field_0x108,0,(int *)&param_2->field_0x11c
              );
  }
  *(undefined4 *)&param_2->field_0x130 = 0;
  if (*(int *)&param_2->field_0x134 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)&param_2->field_0x120,0,(int *)&param_2->field_0x134
              );
  }
  *(undefined4 *)&param_2->field_0x148 = 0;
  if (*(int *)&param_2->field_0x14c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&param_2->field_0x138,0,(int *)&param_2->field_0x14c);
  }
  return;
}

// Do<`FSlateCachedElementList::IsEmpty'::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&> @ 1424da520

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FSlateCachedElementList::IsEmpty_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2)

{
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x10;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x28;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x40;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x58;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x70;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x88;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xa0;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xb8;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xd0;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xe8;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x100;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x118;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x130;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x148;
  }
  return;
}

// Do<`FSlateWindowElementList::ResetElementList'::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&> @ 1424da650

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FSlateWindowElementList::ResetElementList_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2)

{
  undefined1 *puVar1;
  FSlateGradientElement *pFVar2;
  FSlateCustomDrawerElement *pFVar3;
  FSlateCustomVertsElement *pFVar4;
  
  *(undefined4 *)&param_2->field_0x10 = 0;
  if (*(int *)&param_2->field_0x14 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0x14);
  }
  *(undefined4 *)&param_2->field_0x28 = 0;
  if (*(int *)&param_2->field_0x2c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&param_2->field_0x18,0,(int *)&param_2->field_0x2c);
  }
  puVar1 = &param_2->field_0x44;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateTextElement,int>
              (*(FSlateTextElement **)&param_2->field_0x30,*(int *)&param_2->field_0x40);
    *(undefined4 *)&param_2->field_0x40 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (200,8,0,(ForAnyElementType *)&param_2->field_0x30,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateTextElement,int>
              (*(FSlateTextElement **)&param_2->field_0x30,*(int *)&param_2->field_0x40);
    *(undefined4 *)&param_2->field_0x40 = 0;
  }
  puVar1 = &param_2->field_0x5c;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateShapedTextElement,int>
              (*(FSlateShapedTextElement **)&param_2->field_0x48,*(int *)&param_2->field_0x58);
    *(undefined4 *)&param_2->field_0x58 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x90,8,0,(ForAnyElementType *)&param_2->field_0x48,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateShapedTextElement,int>
              (*(FSlateShapedTextElement **)&param_2->field_0x48,*(int *)&param_2->field_0x58);
    *(undefined4 *)&param_2->field_0x58 = 0;
  }
  puVar1 = &param_2->field_0x74;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateSplineElement,int>
              (*(FSlateSplineElement **)&param_2->field_0x60,*(int *)&param_2->field_0x70);
    *(undefined4 *)&param_2->field_0x70 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x90,8,0,(ForAnyElementType *)&param_2->field_0x60,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateSplineElement,int>
              (*(FSlateSplineElement **)&param_2->field_0x60,*(int *)&param_2->field_0x70);
    *(undefined4 *)&param_2->field_0x70 = 0;
  }
  puVar1 = &param_2->field_0x8c;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateLineElement,int>
              (*(FSlateLineElement **)&param_2->field_0x78,*(int *)&param_2->field_0x88);
    *(undefined4 *)&param_2->field_0x88 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x88,8,0,(ForAnyElementType *)&param_2->field_0x78,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateLineElement,int>
              (*(FSlateLineElement **)&param_2->field_0x78,*(int *)&param_2->field_0x88);
    *(undefined4 *)&param_2->field_0x88 = 0;
  }
  puVar1 = &param_2->field_0xa4;
  pFVar2 = *(FSlateGradientElement **)&param_2->field_0x90;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateGradientElement,int>(pFVar2,*(int *)&param_2->field_0xa0);
    *(undefined4 *)&param_2->field_0xa0 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x70,0x10,0,(ForAnyElementType *)&param_2->field_0x90,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateGradientElement,int>(pFVar2,*(int *)&param_2->field_0xa0);
    *(undefined4 *)&param_2->field_0xa0 = 0;
  }
  *(undefined4 *)&param_2->field_0xb8 = 0;
  if (*(int *)&param_2->field_0xbc < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&param_2->field_0xa8,0,(int *)&param_2->field_0xbc);
  }
  *(undefined4 *)&param_2->field_0xd0 = 0;
  if (*(int *)&param_2->field_0xd4 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&param_2->field_0xc0,0,(int *)&param_2->field_0xd4);
  }
  puVar1 = &param_2->field_0xec;
  pFVar3 = *(FSlateCustomDrawerElement **)&param_2->field_0xd8;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateCustomDrawerElement,int>(pFVar3,*(int *)&param_2->field_0xe8);
    *(undefined4 *)&param_2->field_0xe8 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)&param_2->field_0xd8,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateCustomDrawerElement,int>(pFVar3,*(int *)&param_2->field_0xe8);
    *(undefined4 *)&param_2->field_0xe8 = 0;
  }
  puVar1 = &param_2->field_0x104;
  pFVar4 = *(FSlateCustomVertsElement **)&param_2->field_0xf0;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSlateCustomVertsElement,int>(pFVar4,*(int *)&param_2->field_0x100);
    *(undefined4 *)&param_2->field_0x100 = 0;
    if (*(int *)puVar1 != 0) {
      ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                (0x80,8,0,(ForAnyElementType *)&param_2->field_0xf0,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSlateCustomVertsElement,int>(pFVar4,*(int *)&param_2->field_0x100);
    *(undefined4 *)&param_2->field_0x100 = 0;
  }
  *(undefined4 *)&param_2->field_0x118 = 0;
  if (*(int *)&param_2->field_0x11c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&param_2->field_0x108,0,(int *)&param_2->field_0x11c
              );
  }
  *(undefined4 *)&param_2->field_0x130 = 0;
  if (*(int *)&param_2->field_0x134 < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)&param_2->field_0x120,0,(int *)&param_2->field_0x134
              );
  }
  *(undefined4 *)&param_2->field_0x148 = 0;
  if (*(int *)&param_2->field_0x14c < 0) {
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&param_2->field_0x138,0,(int *)&param_2->field_0x14c);
  }
  return;
}

// Do<`FSlateCachedElementsHandle::HasCachedElements'::__l5::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&> @ 1424da9d0

void __cdecl
UE::Core::Private::Tuple::
TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
Do<_FSlateCachedElementsHandle::HasCachedElements_::__l5::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
          (<lambda_1> *param_1,
          TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          *param_2)

{
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x10;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x28;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x40;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x58;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x70;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x88;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xa0;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xb8;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xd0;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0xe8;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x100;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x118;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x130;
  }
  if (*param_1->bElementsFound == false) {
    *param_1->bElementsFound = 0 < *(int *)&param_2->field_0x148;
  }
  return;
}

// FindByPredicate<`FHittestGrid::AddGrid'::__l2::<lambda_2>_> @ 1424db470

FAppendedGridData * __thiscall
TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FHittestGrid::AddGrid_::__l2::<lambda_2>_>
          (TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this,
          <lambda_2> *param_1)

{
  FAppendedGridData *pFVar1;
  FHittestGrid *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FHittestGrid *pFVar6;
  FAppendedGridData *pFVar7;
  bool bVar8;
  
  pFVar7 = (FAppendedGridData *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar7 + this->ArrayNum;
  do {
    if (pFVar7 == pFVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->OtherGrid).SharedReferenceCount.ReferenceController);
      return (FAppendedGridData *)0x0;
    }
    pTVar5 = (pFVar7->Grid).WeakReferenceCount.ReferenceController;
    pFVar6 = (FHittestGrid *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1424db4c3;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar8 = aVar3 == aVar4;
        if (bVar8) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar8);
      pFVar6 = (pFVar7->Grid).Object;
    }
LAB_1424db4c3:
    pFVar2 = (param_1->OtherGrid).Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pFVar2 == pFVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->OtherGrid).SharedReferenceCount.ReferenceController);
      return pFVar7;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// FindFocusableWidget<`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_10>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_11>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_12>_> @ 1424db520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodOrthogonal::
FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_10>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_11>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_12>_>
          (FNavigationMethodOrthogonal *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FSlateRect *param_1,FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_10> param_7,<lambda_11> param_8,<lambda_12> param_9,
          int param_10)

{
  EUINavigationRule EVar1;
  SWidget *pSVar2;
  FHittestGrid *this_00;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float>_u_0_s_0 TVar8;
  atomic<int> aVar9;
  uint uVar10;
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  FSlateRect *pFVar15;
  FNavigationReply *pFVar16;
  FSlateRect *pFVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  atomic<int> aVar24;
  int iVar25;
  TSharedPtr<SWidget,1> *pTVar26;
  FWidgetData *pFVar27;
  FGeometry *pFVar28;
  FSlateRotatedRect *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  ForElementType<FHittestGrid::FWidgetIndex> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  TSharedPtr<SWidget_const_,1> *pTVar33;
  SWidget *pSVar34;
  longlong lVar35;
  FNavigationReply *pFVar36;
  undefined8 uVar37;
  FText *pFVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  SWidget *pSVar43;
  int *piVar44;
  atomic<int> *paVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_b58 [32];
  undefined8 local_af0;
  uint local_ae8;
  TSharedPtr<SWidget,1> *local_ae0;
  uint local_ad8;
  TReferenceControllerBase<1> *local_ad0;
  int local_ac8;
  SWidget *local_ab8;
  TReferenceControllerBase<1> *pTStack_ab0;
  undefined8 local_aa8;
  int local_aa0;
  int local_a9c;
  uint local_a98;
  int local_a94;
  int local_a90;
  int local_a8c;
  undefined8 local_a88;
  float local_a80;
  float fStack_a7c;
  undefined8 local_a78;
  FSlateRect *local_a70;
  SWidget *local_a68;
  FNavigationReply *local_a58;
  int local_a50;
  FSlateRect *local_a48;
  float local_a40;
  float fStack_a3c;
  undefined8 local_a38;
  undefined8 local_a30;
  float local_a28;
  float fStack_a24;
  undefined8 local_a20;
  longlong local_a18;
  float local_a10;
  float fStack_a0c;
  longlong local_a08;
  TVector2<float>_u_0 local_a00;
  undefined4 local_9f8;
  undefined8 local_9f4;
  undefined4 local_9ec;
  undefined1 local_9e8 [4];
  undefined1 local_9e4 [4];
  undefined1 local_9e0 [4];
  undefined1 local_9dc [4];
  undefined1 local_9d8 [4];
  undefined1 local_9d4 [4];
  TSharedPtr<SWidget,1> local_9d0;
  TReferenceControllerBase<1> *local_9c0;
  int *local_9b0;
  undefined8 local_9a8;
  int *local_9a0;
  undefined8 local_994;
  undefined1 local_98c [4];
  undefined1 local_988 [8];
  undefined4 local_980;
  undefined4 uStack_97c;
  float fStack_978;
  float fStack_974;
  float fStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  TTransform2<float> TStack_964;
  undefined4 uStack_94c;
  FText local_948;
  TSharedPtr<SWidget_const_,1> local_938;
  FText local_928;
  TSharedPtr<SWidget_const_,1> local_918;
  FText local_908;
  TSharedPtr<SWidget_const_,1> local_8f8;
  FText local_8e8;
  TSharedPtr<SWidget_const_,1> local_8d8;
  FText local_8c8;
  TSharedPtr<SWidget_const_,1> local_8b8;
  TSharedPtr<SWidget_const_,1> local_8a8;
  FText local_898;
  TSharedPtr<SWidget_const_,1> local_888;
  SWidget *local_878;
  undefined8 uStack_870;
  FText local_868;
  TSharedPtr<SWidget_const_,1> local_858;
  FText local_848;
  TSharedPtr<SWidget_const_,1> local_838;
  TTransform2<float> local_828;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  FSlateRect local_7f8;
  FSlateRect local_7e8;
  undefined8 local_7d8;
  TTransform2<float> local_7d0;
  FReadAccessScope local_7b8;
  TVector2<float>_u_0_s_0 local_7a0;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  uVar58 = FHittestGrid::CellSize.field0_0x0._s_0.Y;
  uVar57 = FHittestGrid::CellSize.field0_0x0._s_0.X;
  fVar56 = __real_3f000000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  uVar41 = 0;
  uVar37 = *(undefined8 *)(*(longlong *)&this->field_0x8 + 0xc0);
  uVar42 = (ulonglong)param_3;
  local_a8c = param_4;
  fVar46 = (param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top;
  fVar49 = (param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left;
  iVar39 = (int)((ulonglong)uVar37 >> 0x20) + -1;
  iVar25 = (int)uVar37;
  local_a58 = param_6;
  local_ad8 = param_3;
  local_a90 = param_10;
  local_ae8 = 0;
  iVar21 = (int)ROUND((fVar46 + fVar46) / FHittestGrid::CellSize.field0_0x0._s_0.Y - __real_3f000000
                     ) >> 1;
  iVar23 = 0;
  if (0 < iVar21) {
    iVar23 = iVar21;
  }
  iVar22 = (int)ROUND((fVar49 + fVar49) / FHittestGrid::CellSize.field0_0x0._s_0.X - __real_3f000000
                     ) >> 1;
  iVar21 = 0;
  if (0 < iVar22) {
    iVar21 = iVar22;
  }
  iVar22 = iVar25 + -1;
  if (iVar21 < iVar25 + -1) {
    iVar22 = iVar21;
  }
  if (iVar23 < iVar39) {
    iVar39 = iVar23;
  }
  local_af0 = CONCAT44(iVar39,iVar22);
  local_ae0 = __return_storage_ptr__;
  local_a78 = uVar37;
  local_a70 = param_1;
  local_a48 = param_2;
  local_9a8 = uVar37;
  if ((1 < (uint)param_3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
    return pTVar26;
  }
  fVar49 = __real_3dcccccd;
  uVar10 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fStack_774 = param_1->Top;
  fStack_770 = param_1->Right;
  fVar46 = param_1->Bottom;
  local_a50 = local_af0._4_4_;
  if (param_3 == 0) {
    local_a50 = (int)local_af0;
  }
  if ((iVar25 < 1) || (local_a78._4_4_ < 1)) {
    local_ae0->Object = (SWidget *)0x0;
    (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_ae0;
  }
  if (param_3 == 0) {
    local_a9c = local_a78._4_4_ + -1;
    local_ac8 = 1;
    fVar47 = (__real_40000000 / (float)uVar58) * param_2->Bottom;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar58) * param_2->Top - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_aa0 = local_a9c;
    if (iVar25 < local_a9c) {
      local_aa0 = iVar25;
    }
  }
  else {
    local_a9c = iVar25 + -1;
    local_ac8 = 0;
    fVar47 = (__real_40000000 / (float)uVar57) * param_2->Right;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar57) * param_2->Left - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_aa0 = local_a9c;
    if (iVar25 < local_a9c) {
      local_aa0 = iVar25;
    }
  }
  iVar39 = (int)ROUND(fVar47 - fVar56) >> 1;
  iVar25 = 0;
  if (0 < iVar39) {
    iVar25 = iVar39;
  }
  if (iVar25 < local_a9c) {
    local_a9c = iVar25;
  }
  bVar18 = false;
  iVar25 = local_a78._4_4_;
  fStack_76c = fVar46;
  do {
    fVar56 = __real_bf800000;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar39 = local_af0._4_4_;
    if (uVar42 == 0) {
      iVar39 = (int)local_af0;
    }
    if (iVar39 < 0) goto LAB_1424dc3ff;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      iVar25 = (int)uVar37;
      iVar39 = (int)local_af0;
    }
    else {
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar39 = local_af0._4_4_;
    }
    if (iVar25 <= iVar39) goto LAB_1424dc3ff;
    local_aa8 = local_af0;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      local_a94 = (int)local_af0;
      iVar25 = (int)local_af0;
    }
    else {
      local_a94 = local_af0._4_4_;
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar25 = local_af0._4_4_;
    }
    pFVar16 = local_a58;
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    uVar57 = 0;
    uVar58 = 0;
    local_9a0 = (int *)((longlong)&local_af0 + 4);
    if (uVar42 == 0) {
      local_9a0 = (int *)&local_af0;
    }
    local_ab8 = (SWidget *)0x0;
    pTStack_ab0 = (TReferenceControllerBase<1> *)0x0;
    local_a68 = (SWidget *)0x0;
    *local_9a0 = iVar25 + local_a8c;
    piVar44 = (int *)((longlong)&local_aa8 + 4);
    iVar25 = local_ac8;
    iVar39 = local_aa0;
    local_9b0 = (int *)((longlong)&local_aa8 + 4);
    if (local_ac8 == 0) {
      piVar44 = (int *)&local_aa8;
      local_9b0 = (int *)&local_aa8;
    }
    while( true ) {
      uVar40 = local_ad8;
      fVar47 = __real_3f000000;
      *piVar44 = iVar39;
      uVar37 = local_9a8;
      pFVar17 = local_a48;
      pFVar36 = local_a58;
      pSVar43 = local_a68;
      pFVar15 = local_a70;
      iVar39 = local_aa8._4_4_;
      iVar21 = (int)local_aa8;
      iVar23 = local_aa8._4_4_;
      if (iVar25 == 0) {
        iVar23 = iVar21;
      }
      if (local_a9c < iVar23) break;
      local_740.ArrayMax = 100;
      local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
      local_740.ArrayNum = 0;
      FHittestGrid::GetCollapsedWidgets
                (*(FHittestGrid **)&this->field_0x8,&local_740,iVar21,local_aa8._4_4_);
      local_a98 = local_740.ArrayNum - 1;
      if (-1 < (int)local_a98) {
        local_a18 = (longlong)(int)local_a98;
        lVar35 = local_a18 << 4;
        fVar47 = fVar56;
        do {
          uVar40 = 0;
          if ((int)local_a98 < local_740.ArrayNum) {
            uVar40 = ~local_a98 >> 0x1f;
          }
          local_a08 = lVar35;
          if ((uVar40 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
            return pTVar26;
          }
          FVar31 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
          if (local_740.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar31 = local_740.AllocatorInstance.SecondaryData;
          }
          pFVar27 = FHittestGrid::FWidgetIndex::GetWidgetData
                              ((FWidgetIndex *)((longlong)FVar31 + lVar35));
          pSVar43 = (SWidget *)0x0;
          pTVar30 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
          fVar56 = fVar47;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            aVar9 = pTVar30->SharedReferenceCount;
            do {
              if (aVar9 == (atomic<int>)0x0) {
                pTVar30 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_1424dc114;
              }
              LOCK();
              aVar24 = pTVar30->SharedReferenceCount;
              bVar19 = aVar9 == aVar24;
              if (bVar19) {
                pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
                aVar24 = aVar9;
              }
              UNLOCK();
              aVar9 = aVar24;
            } while (!bVar19);
            pSVar43 = (pFVar27->WeakWidget).Object;
          }
          local_ad0 = pTVar30;
          if (pSVar43 != (SWidget *)0x0) {
            if (((local_a90 == -1) || (pFVar27->UserIndex == -1)) ||
               (local_a90 == pFVar27->UserIndex)) {
              lVar35 = *(longlong *)&this->field_0x8;
              pFVar28 = SWidget::GetPaintSpaceGeometry(pSVar43);
              afVar14 = _UNK_15076b188;
              afVar12 = ___xmm_3f80000000000000000000003f800000;
              ___xmm_3f80000000000000000000003f800000 = afVar11[0];
              _UNK_15076b184 = afVar11[1];
              local_828.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_828.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar13[0];
              _UNK_15076b18c = afVar13[1];
              local_828.M.M[1][0] = _UNK_15076b188;
              local_828.M.M[1][1] = _UNK_15076b18c;
              uVar37 = *(undefined8 *)&(pFVar28->AbsolutePosition).field0_0x0._s_0.Y;
              uVar5 = *(undefined8 *)&(pFVar28->Position).field0_0x0._s_0.Y;
              uVar6 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[0] + 1);
              uVar7 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[1] + 1);
              local_980 = *(undefined4 *)&pFVar28->Size;
              uStack_97c = *(undefined4 *)&(pFVar28->Size).field_0x4;
              fVar56 = pFVar28->Scale;
              fStack_974 = (pFVar28->AbsolutePosition).field0_0x0._s_0.X;
              TVar8 = (pFVar28->AbsolutePosition).field0_0x0._s_0;
              fStack_970 = (float)uVar37;
              uStack_96c = (undefined4)((ulonglong)uVar37 >> 0x20);
              uStack_968 = (undefined4)uVar5;
              TStack_964.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
              uVar37 = *(undefined8 *)&(pFVar28->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
              ;
              TStack_964.Trans.field0_0x0._s_0.Y = (float)uVar37;
              uStack_94c = (undefined4)((ulonglong)uVar37 >> 0x20);
              TStack_964.M.M[0][1] = (float)uVar6;
              TStack_964.M.M[1][0] = (float)((ulonglong)uVar6 >> 0x20);
              TStack_964.M.M[1][1] = (float)uVar7;
              TStack_964.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar7 >> 0x20);
              fStack_a0c = (float)(*(uint *)(lVar35 + 0xd4) ^ uVar10);
              local_a10 = (float)(*(uint *)(lVar35 + 0xd0) ^ uVar10);
              local_994 = CONCAT44(fStack_a0c,local_a10);
              local_a88._0_4_ = TVar8.X;
              local_a28 = local_a10 + (float)local_a88;
              local_a88._4_4_ = TVar8.Y;
              fStack_a24 = fStack_a0c + local_a88._4_4_;
              ___xmm_3f80000000000000000000003f800000 = afVar12;
              _UNK_15076b188 = afVar14;
              local_a88 = local_994;
              fStack_978 = fVar56;
              local_828.Trans.field0_0x0._s_0.X = local_a10;
              local_828.Trans.field0_0x0._s_0.Y = fStack_a0c;
              Concatenate<TTransform2<float>_>(&local_7d0,&TStack_964,&local_828);
              TStack_964.M.M[0][0] = local_7d0.M.M[0][0];
              TStack_964.M.M[0][1] = local_7d0.M.M[0][1];
              TStack_964.M.M[1][0] = local_7d0.M.M[1][0];
              TStack_964.M.M[1][1] = local_7d0.M.M[1][1];
              fStack_974 = local_a28;
              fStack_970 = fStack_a24;
              local_a20 = CONCAT44(uStack_97c,local_980);
              local_9f8 = local_980;
              local_9ec = uStack_97c;
              TStack_964.Trans.field0_0x0._s_0.X = local_7d0.Trans.field0_0x0._0_4_;
              TStack_964.Trans.field0_0x0._s_0.Y = local_7d0.Trans.field0_0x0._4_4_;
              local_a00 = (TVector2<float>_u_0)0x0;
              local_9f4 = 0;
              fStack_978 = fVar56;
              pFVar29 = TransformRect<TTransform2<float>_>
                                  (&local_758,&TStack_964,(FSlateRotatedRect *)&local_a00._s_0);
              fVar48 = (pFVar29->ExtentY).field0_0x0._s_0.X;
              fVar50 = (pFVar29->ExtentY).field0_0x0._s_0.Y;
              fVar51 = (pFVar29->TopLeft).field0_0x0._s_0.X;
              fVar52 = (pFVar29->TopLeft).field0_0x0._s_0.Y;
              fVar53 = fVar48 + fVar51;
              local_7a0 = (pFVar29->TopLeft).field0_0x0._s_0;
              fVar54 = fVar50 + fVar52;
              fVar51 = fVar51 + (pFVar29->ExtentX).field0_0x0._s_0.X;
              fVar52 = fVar52 + (pFVar29->ExtentX).field0_0x0._s_0.Y;
              fVar55 = fVar53;
              if (fVar51 <= fVar53) {
                fVar55 = fVar51;
              }
              fVar48 = fVar48 + fVar51;
              fVar56 = fVar54;
              if (fVar52 <= fVar54) {
                fVar56 = fVar52;
              }
              fVar50 = fVar50 + fVar52;
              if (fVar48 <= fVar55) {
                fVar55 = fVar48;
              }
              if (fVar50 <= fVar56) {
                fVar56 = fVar50;
              }
              if (local_7a0.X <= fVar55) {
                fVar55 = local_7a0.X;
              }
              if (local_7a0.Y <= fVar56) {
                fVar56 = local_7a0.Y;
              }
              if (fVar53 <= fVar51) {
                fVar53 = fVar51;
              }
              if (fVar54 <= fVar52) {
                fVar54 = fVar52;
              }
              if (fVar53 <= fVar48) {
                fVar53 = fVar48;
              }
              if (fVar54 <= fVar50) {
                fVar54 = fVar50;
              }
              if (fVar53 <= local_7a0.X) {
                fVar53 = local_7a0.X;
              }
              if (fVar54 <= local_7a0.Y) {
                fVar54 = local_7a0.Y;
              }
              if (((fVar56 + fVar49 <= fVar46) || (fVar53 < local_a48->Left)) ||
                 ((local_a48->Right <= fVar55 && fVar55 != local_a48->Right ||
                  ((fVar54 < local_a48->Top ||
                   (local_a48->Bottom <= fVar56 && fVar56 != local_a48->Bottom)))))) {
                local_848.TextData.Reference =
                     FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference,
                             local_9d4);
                }
                local_848.Flags = FNavigationMethod::FDebuggingText::DoesNotIntersect.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_848;
                pTVar33 = &local_838;
                local_838.Object = pSVar43;
                local_838.SharedReferenceCount.ReferenceController = pTVar30;
              }
              else if ((local_a68 == (SWidget *)0x0) || (fVar56 < fVar47 + fVar49)) {
                uVar40 = uVar41;
                if (pFVar16->BoundaryRule == Escape) {
LAB_1424dbdcf:
                  bVar19 = false;
                }
                else {
                  local_9c0 = (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  local_ae8 = uVar41 | 1;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_9c0 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_9c0->SharedReferenceCount =
                         (atomic<int>)((int)local_9c0->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  uVar40 = local_ae8;
                  if (pSVar2 == (SWidget *)0x0) goto LAB_1424dbdcf;
                  local_9d0.SharedReferenceCount.ReferenceController =
                       (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  uVar40 = uVar41 | 3;
                  this_00 = *(FHittestGrid **)&this->field_0x8;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_9d0.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_9d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_9d0.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_ae8 = uVar40;
                  bVar19 = FHittestGrid::IsDescendantOf(this_00,pSVar2,pFVar27);
                  if (bVar19) goto LAB_1424dbdcf;
                  bVar19 = true;
                }
                if ((uVar40 & 2) != 0) {
                  uVar40 = uVar40 & 0xfffffffd;
                  local_ae8 = uVar40;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_9d0.SharedReferenceCount.ReferenceController)
                  ;
                }
                uVar41 = uVar40;
                if ((uVar40 & 1) != 0) {
                  uVar41 = uVar40 & 0xfffffffe;
                  local_ae8 = uVar41;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_9c0);
                }
                if (bVar19) {
                  local_908.TextData.Reference =
                       FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::NotADescendant.TextData.
                                  Reference + 8))
                              (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference,
                               local_9e8);
                  }
                  local_908.Flags = FNavigationMethod::FDebuggingText::NotADescendant.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_908;
                  pTVar33 = &local_8f8;
                  local_8f8.Object = pSVar43;
                  local_8f8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else if (pSVar43->EnabledStateAttribute ==
                         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                         0x0) {
                  local_8e8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::Disabled.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::Disabled.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::Disabled.TextData.Reference + 8
                                ))(FNavigationMethod::FDebuggingText::Disabled.TextData.Reference,
                                   local_9e4);
                  }
                  local_8e8.Flags = FNavigationMethod::FDebuggingText::Disabled.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8e8;
                  pTVar33 = &local_8d8;
                  local_8d8.Object = pSVar43;
                  local_8d8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else {
                  cVar20 = (**(code **)(pSVar43->_padding_ + 0x198))(pSVar43);
                  if (cVar20 != '\0') {
                    if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
                      paVar45 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar45 = &pTVar30->SharedReferenceCount;
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      local_ad0 = pTVar30;
                    }
                    uVar41 = ((uint)((ulonglong)pSVar43 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)pSVar43 >> 4)) * -0x7a143595;
                    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
                    local_8a8.Object = pSVar43;
                    local_8a8.SharedReferenceCount.ReferenceController = pTVar30;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    iVar25 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                       ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                                         *)&this->field_0x18,uVar41 >> 0x10 ^ uVar41,&local_8a8);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    if (iVar25 == -1) {
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uVar58,uVar57);
                      uStack_870._0_4_ = SUB84(pTVar30,0);
                      uVar57 = (undefined4)uStack_870;
                      uStack_870._4_4_ = (undefined4)((ulonglong)pTVar30 >> 0x20);
                      uVar58 = uStack_870._4_4_;
                      local_ab8 = pSVar43;
                      pTStack_ab0 = pTVar30;
                      local_878 = pSVar43;
                      uStack_870 = pTVar30;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar32);
                      local_868.TextData.Reference =
                           FNavigationMethod::FDebuggingText::Valid.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::Valid.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::Valid.TextData.Reference +
                                    8))(FNavigationMethod::FDebuggingText::Valid.TextData.Reference,
                                        local_9d8);
                      }
                      local_868.Flags = FNavigationMethod::FDebuggingText::Valid.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar30->SharedReferenceCount =
                             (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      local_858.Object = pSVar43;
                      local_858.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_858,&local_868);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ad0;
                      local_a68 = pSVar43;
                      uVar41 = local_ae8;
                    }
                    else {
                      local_898.TextData.Reference =
                           FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                      Reference + 8))
                                  (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                   Reference,local_9dc);
                      }
                      local_898.Flags = FNavigationMethod::FDebuggingText::ParentDisabled.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      local_888.Object = pSVar43;
                      local_888.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_888,&local_898);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ad0;
                      fVar56 = fVar47;
                      uVar41 = local_ae8;
                    }
                    goto LAB_1424dc114;
                  }
                  local_8c8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                       Reference;
                  if (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                      Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                                  TextData.Reference + 8))
                              (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                               TextData.Reference,local_9e0);
                  }
                  local_8c8.Flags =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8c8;
                  pTVar33 = &local_8b8;
                  local_8b8.Object = pSVar43;
                  local_8b8.SharedReferenceCount.ReferenceController = pTVar30;
                }
              }
              else {
                local_928.TextData.Reference =
                     FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                             Reference,local_988);
                }
                local_928.Flags = FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_928;
                pTVar33 = &local_918;
                local_918.Object = pSVar43;
                local_918.SharedReferenceCount.ReferenceController = pTVar30;
              }
            }
            else {
              local_948.TextData.Reference =
                   FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference;
              if (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                  != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData
                              .Reference + 8))
                          (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.
                           Reference,local_98c);
              }
              local_948.Flags = FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.Flags;
              if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar30->SharedReferenceCount =
                     (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar38 = &local_948;
              pTVar33 = &local_938;
              local_938.Object = pSVar43;
              local_938.SharedReferenceCount.ReferenceController = pTVar30;
            }
            FNavigationMethod::AddDebugIntermediateResult((FNavigationMethod *)this,pTVar33,pFVar38)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            fVar56 = fVar47;
          }
LAB_1424dc114:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          local_a98 = local_a98 - 1;
          local_a18 = local_a18 + -1;
          lVar35 = local_a08 + -0x10;
          fVar47 = fVar56;
        } while (-1 < (int)local_a98);
        iVar21 = (int)local_aa8;
        piVar44 = local_9b0;
        iVar25 = local_ac8;
        iVar39 = local_aa8._4_4_;
        local_a08 = lVar35;
      }
      if (local_740.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
      }
      if (iVar25 == 0) {
        iVar39 = iVar21;
      }
      iVar39 = iVar39 + 1;
    }
    if (local_a68 != (SWidget *)0x0) {
      local_768 = local_a48->Left;
      fStack_764 = local_a48->Top;
      fStack_760 = local_a48->Right;
      fStack_75c = local_a48->Bottom;
      pSVar2 = pSVar43;
      if (fVar56 + fVar49 <= fStack_75c) break;
      EVar1 = local_a58->BoundaryRule;
      if (EVar1 == Explicit) {
        local_ae0->Object = (local_a58->FocusRecipient).Object;
        pTVar30 = (local_a58->FocusRecipient).SharedReferenceCount.ReferenceController;
        (local_ae0->SharedReferenceCount).ReferenceController = pTVar30;
        pTVar32 = pTStack_ab0;
        if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1424dc4b0;
      }
      if (EVar1 == Wrap) {
        local_a80 = (local_a70->Right - local_a70->Left) * __real_3f000000 + local_a70->Left;
        fStack_a7c = (local_a70->Bottom - local_a70->Top) * __real_3f000000 + local_a70->Top;
        local_7d8 = CONCAT44(fStack_a7c,local_a80);
        if ((1 < local_ad8) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                ,0x4b0,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        break;
      }
      if (EVar1 != Stop) {
        if ((EVar1 != Custom) && (EVar1 != CustomBoundary)) break;
        bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a58->FocusDelegate);
        if (bVar18) goto LAB_1424dc41e;
      }
      local_ae0->Object = (SWidget *)0x0;
      (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar32 = pTStack_ab0;
      goto LAB_1424dc4b0;
    }
    if ((bVar18) && (local_a50 == local_a94)) {
LAB_1424dc3f6:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
LAB_1424dc3ff:
      local_ae0->Object = (SWidget *)0x0;
      (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      return local_ae0;
    }
    uVar42 = (ulonglong)(int)local_ad8;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar25 = local_af0._4_4_;
    if (uVar42 == 0) {
      iVar25 = (int)local_af0;
    }
    if (iVar25 < 0) {
LAB_1424dc26d:
      pFVar36 = local_a58;
      if (local_a58->BoundaryRule != Wrap) {
        if (local_a58->BoundaryRule == CustomBoundary) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &local_a58->FocusDelegate,&local_7b8);
          if (((*(int *)&(pFVar36->FocusDelegate).field_0x10 != 0) &&
              (plVar3 = *(longlong **)&(pFVar36->FocusDelegate).field_0x8, plVar3 != (longlong *)0x0
              )) && (cVar20 = (**(code **)(*plVar3 + 0x38))(), cVar20 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_7b8);
LAB_1424dc41e:
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::Execute(&pFVar36->FocusDelegate,local_ae0,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_ab0);
            return local_ae0;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_7b8);
        }
        iVar25 = local_a78._4_4_;
        goto LAB_1424dc3e8;
      }
      if (bVar18) goto LAB_1424dc3f6;
      local_808 = local_a48->Left;
      fVar46 = local_a48->Top;
      fStack_800 = local_a48->Right;
      fStack_7fc = local_a48->Bottom;
      local_a40 = (local_a70->Right - local_a70->Left) * fVar47 + local_a70->Left;
      fStack_a3c = (local_a70->Bottom - local_a70->Top) * fVar47 + local_a70->Top;
      local_a38 = CONCAT44(fStack_a3c,local_a40);
      fStack_804 = fVar46;
      if ((1 < uVar42) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      lVar35 = *(longlong *)&this->field_0x8;
      iVar25 = local_a78._4_4_;
      *(float *)((longlong)&local_a38 + uVar42 * 4) = fVar46;
      fStack_a7c = (float)(*(int *)(lVar35 + 0xc4) + -1);
      local_a30 = local_a38;
      uVar5 = local_a30;
      local_a30._4_4_ = (float)((ulonglong)local_a38 >> 0x20);
      bVar18 = true;
      local_a30._0_4_ = (float)local_a38;
      fVar48 = (float)((int)ROUND((local_a30._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                                  local_a30._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y) -
                                  fVar47) >> 1);
      fVar56 = 0.0;
      if (0 < (int)fVar48) {
        fVar56 = fVar48;
      }
      local_a80 = (float)(*(int *)(lVar35 + 0xc0) + -1);
      fVar48 = (float)((int)ROUND(((float)local_a30 / FHittestGrid::CellSize.field0_0x0._s_0.X +
                                  (float)local_a30 / FHittestGrid::CellSize.field0_0x0._s_0.X) -
                                  fVar47) >> 1);
      fVar47 = 0.0;
      if (0 < (int)fVar48) {
        fVar47 = fVar48;
      }
      if ((int)fVar47 < (int)local_a80) {
        local_a80 = fVar47;
      }
      if ((int)fVar56 < (int)fStack_a7c) {
        fStack_a7c = fVar56;
      }
      local_af0 = CONCAT44(fStack_a7c,local_a80);
      local_a30 = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
    }
    else {
      if (uVar42 < 2) {
LAB_1424dc227:
        if (1 < (longlong)uVar42) goto LAB_1424dc22d;
      }
      else {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        if (-1 < (longlong)uVar42) goto LAB_1424dc227;
LAB_1424dc22d:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
      }
      iVar39 = local_a78._4_4_;
      if (uVar42 == 0) {
        iVar39 = (int)uVar37;
      }
      iVar25 = local_a78._4_4_;
      if (iVar39 <= *local_9a0) goto LAB_1424dc26d;
LAB_1424dc3e8:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
    }
  } while( true );
  while (pSVar2 != (SWidget *)0x0) {
    if (pSVar2->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->field_0x18,&local_9d0,(bool *)&local_ab8);
      local_7f8.Left = pFVar17->Left;
      local_7f8.Top = pFVar17->Top;
      local_7f8.Right = pFVar17->Right;
      local_7f8.Bottom = pFVar17->Bottom;
      local_7e8.Left = pFVar15->Left;
      local_7e8.Top = pFVar15->Top;
      local_7e8.Right = pFVar15->Right;
      local_7e8.Bottom = pFVar15->Bottom;
      FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_10>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_11>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_12>_>
                (this,local_ae0,&local_7e8,&local_7f8,uVar40,local_a8c,param_5,pFVar36,param_7,
                 param_8,param_9,local_a90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
      return local_ae0;
    }
    pTVar30 = (pSVar2->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar34 = (SWidget *)0x0;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar30->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424dc615;
        }
        LOCK();
        aVar24 = pTVar30->SharedReferenceCount;
        bVar18 = aVar9 == aVar24;
        if (bVar18) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar24 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar24;
      } while (!bVar18);
      pSVar34 = (pSVar2->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
    pSVar2 = pSVar34;
  }
LAB_1424dc615:
  local_ae0->Object = pSVar43;
  (local_ae0->SharedReferenceCount).ReferenceController = pTStack_ab0;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
LAB_1424dc4b0:
  pTVar26 = local_ae0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  return pTVar26;
}

// FindFocusableWidget<`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_10>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_11>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_12>_> @ 1424dc6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::
FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_10>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_11>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_12>_>
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FSlateRect *param_1,
          FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_10> param_7,<lambda_11> param_8,<lambda_12> param_9,
          int param_10,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_11,
          TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
          *param_12)

{
  undefined8 uVar1;
  EUINavigationRule EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  uint uVar12;
  float fVar13;
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float afVar17 [2];
  TRefCountPtr<ITextData> TVar18;
  FSlateRect *pFVar19;
  FSlateRect *pFVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  atomic<int> aVar27;
  TSharedPtr<SWidget,1> *pTVar28;
  FWidgetData *pFVar29;
  FGeometry *pFVar30;
  FSlateRotatedRect *pFVar31;
  int *piVar32;
  TIntPoint<int> *pTVar33;
  uint uVar34;
  TVector2<float>_u_0_s_0 TVar35;
  TReferenceControllerBase<1> *pTVar36;
  ForElementType<FHittestGrid::FWidgetIndex> FVar37;
  int iVar38;
  longlong lVar39;
  SWidget *pSVar40;
  FNavigationReply *pFVar41;
  int iVar42;
  ulonglong uVar43;
  SWidget *pSVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined1 auStackY_aa8 [32];
  undefined8 local_a30;
  uint local_a28;
  TSharedPtr<SWidget,1> *local_a20;
  undefined8 local_a18;
  TVector2<float>_u_0_s_0 local_a10;
  int local_a08;
  uint local_a04;
  SWidget *local_9f8;
  TReferenceControllerBase<1> *pTStack_9f0;
  TReferenceControllerBase<1> *local_9e8;
  int local_9e0;
  int local_9dc;
  uint local_9d8;
  int local_9d4;
  int local_9d0;
  int local_9cc;
  FSlateRect *local_9c8;
  float local_9c0;
  float fStack_9bc;
  TReferenceControllerBase<1> *local_9b8;
  SWidget *local_9a8;
  FNavigationReply *local_998;
  int local_990;
  FSlateRect *local_988;
  FHittestGrid *local_980;
  TReferenceControllerBase<1> *local_978;
  SWidget *local_970;
  float local_968;
  float fStack_964;
  undefined8 local_960;
  float local_958;
  float fStack_954;
  TReferenceControllerBase<1> *local_950;
  TReferenceControllerBase<1> *local_948;
  TReferenceControllerBase<1> *local_940;
  TReferenceControllerBase<1> *local_938;
  float local_930;
  float fStack_92c;
  undefined8 local_928;
  undefined8 local_920;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  *local_918;
  TReferenceControllerBase<1> *local_910;
  TVector2<float>_u_0 local_908;
  undefined4 local_900;
  undefined8 local_8fc;
  undefined4 local_8f4;
  undefined1 local_8f0 [4];
  undefined1 local_8ec [4];
  undefined1 local_8e8 [4];
  undefined1 local_8e4 [4];
  undefined1 local_8e0 [4];
  undefined1 local_8dc [4];
  undefined1 local_8d8 [4];
  undefined1 local_8d4 [4];
  undefined1 local_8d0 [4];
  undefined1 local_8cc [4];
  undefined1 local_8c8 [4];
  TSharedPtr<SWidget,1> local_8c4;
  TReferenceControllerBase<1> *local_8b0;
  TReferenceControllerBase<1> *local_8a8;
  undefined8 local_894;
  undefined1 local_88c [4];
  undefined1 local_888 [8];
  undefined4 local_880;
  undefined4 uStack_87c;
  float fStack_878;
  float fStack_874;
  float fStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  TTransform2<float> TStack_864;
  undefined4 uStack_84c;
  TSharedPtr<SWidget_const_,1> local_848;
  SWidget *local_838;
  undefined8 uStack_830;
  TTransform2<float> local_828;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  FSlateRect local_7f8;
  FSlateRect local_7e8;
  undefined8 local_7d8;
  TTransform2<float> local_7d0;
  FReadAccessScope local_7b8;
  TVector2<float>_u_0_s_0 local_7a0;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  fVar51 = __real_3f000000;
  fVar49 = __real_3f800000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  uVar43 = (ulonglong)param_3;
  local_9cc = param_4;
  local_918 = param_12;
  iVar42 = (this->NumCells).field0_0x0._s_0.Y + -1;
  local_998 = param_6;
  local_a04 = param_3;
  local_9d0 = param_10;
  local_a28 = 0;
  iVar24 = (int)ROUND(((param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.Y +
                      __real_3f800000 / CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar26 = 0;
  if (0 < iVar24) {
    iVar26 = iVar24;
  }
  iVar24 = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar25 = (int)ROUND(((param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.X +
                      __real_3f800000 / CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar38 = 0;
  if (0 < iVar25) {
    iVar38 = iVar25;
  }
  if (iVar38 < iVar24) {
    iVar24 = iVar38;
  }
  if (iVar26 < iVar42) {
    iVar42 = iVar26;
  }
  local_a30 = CONCAT44(iVar42,iVar24);
  local_a20 = __return_storage_ptr__;
  local_9c8 = param_1;
  local_988 = param_2;
  local_980 = this;
  if ((1 < (uint)param_3) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  fVar13 = __real_3dcccccd;
  uVar12 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fStack_774 = param_1->Top;
  fStack_770 = param_1->Right;
  fVar56 = param_1->Bottom;
  pTVar33 = &this->NumCells;
  local_9dc = (pTVar33->field0_0x0)._s_0.X;
  local_990 = local_a30._4_4_;
  if (param_3 == 0) {
    local_990 = (int)local_a30;
  }
  if ((local_9dc < 1) || (iVar42 = (this->NumCells).field0_0x0._s_0.Y, iVar42 < 1)) {
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a20;
  }
  if (param_3 == 0) {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.Y;
    local_9dc = iVar42 + -1;
    local_a08 = 1;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Bottom;
    iVar26 = (int)ROUND(fVar49 * param_2->Top - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9e0 = local_9dc;
    if (iVar42 < local_9dc) {
      local_9e0 = iVar42;
    }
  }
  else {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.X;
    local_9dc = local_9dc + -1;
    local_a08 = 0;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Right;
    iVar26 = (int)ROUND(fVar49 * param_2->Left - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9e0 = local_9dc;
    if (iVar42 < local_9dc) {
      local_9e0 = iVar42;
    }
  }
  iVar26 = (int)ROUND(fVar50 - fVar51) >> 1;
  iVar42 = 0;
  if (0 < iVar26) {
    iVar42 = iVar26;
  }
  if (iVar42 < local_9dc) {
    local_9dc = iVar42;
  }
  bVar21 = false;
  fStack_76c = fVar56;
LAB_1424dc9bc:
  iVar42 = local_a08;
  fVar49 = __real_bf800000;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar26 = local_a30._4_4_;
  if (uVar43 == 0) {
    iVar26 = (int)local_a30;
  }
  if (iVar26 < 0) goto LAB_1424dd9af;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x144,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    iVar26 = (pTVar33->field0_0x0)._s_0.X;
    iVar24 = (int)local_a30;
  }
  else {
    iVar26 = (pTVar33->field0_0x0)._s_0.Y;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar24 = local_a30._4_4_;
  }
  if (iVar26 <= iVar24) goto LAB_1424dd9af;
  local_a18 = local_a30;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    local_9d4 = (int)local_a30;
    iVar26 = (int)local_a30;
  }
  else {
    local_9d4 = local_a30._4_4_;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar26 = local_a30._4_4_;
  }
  afVar16 = _UNK_15076b188;
  afVar14 = ___xmm_3f80000000000000000000003f800000;
  uVar54 = 0;
  uVar55 = 0;
  piVar32 = (int *)((longlong)&local_a30 + 4);
  if (uVar43 == 0) {
    piVar32 = (int *)&local_a30;
  }
  local_9f8 = (SWidget *)0x0;
  pTStack_9f0 = (TReferenceControllerBase<1> *)0x0;
  local_9a8 = (SWidget *)0x0;
  *piVar32 = local_9cc + iVar26;
  piVar32 = (int *)((longlong)&local_a18 + 4);
  iVar26 = local_9e0;
  if (iVar42 == 0) {
    piVar32 = (int *)&local_a18;
  }
  while( true ) {
    pFVar20 = local_988;
    pFVar41 = local_998;
    pSVar44 = local_9a8;
    pFVar19 = local_9c8;
    fVar51 = __real_3f000000;
    *piVar32 = iVar26;
    iVar26 = local_a18._4_4_;
    iVar38 = (int)local_a18;
    iVar24 = local_a18._4_4_;
    if (iVar42 == 0) {
      iVar24 = iVar38;
    }
    if (local_9dc < iVar24) break;
    local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
    local_740.ArrayNum = 0;
    local_740.ArrayMax = 100;
    GetCollapsedWidgets(this,&local_740,iVar38,local_a18._4_4_);
    local_9d8 = local_740.ArrayNum - 1;
    if (-1 < (int)local_9d8) {
      do {
        uVar43 = (ulonglong)local_9d8;
        uVar34 = 0;
        if ((int)local_9d8 < local_740.ArrayNum) {
          uVar34 = ~local_9d8 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
          return pTVar28;
        }
        FVar37 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
        if (local_740.AllocatorInstance.SecondaryData !=
            (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
          FVar37 = local_740.AllocatorInstance.SecondaryData;
        }
        pFVar29 = FWidgetIndex::GetWidgetData((FWidgetIndex *)(uVar43 * 0x10 + (longlong)FVar37));
        pSVar44 = (SWidget *)0x0;
        pTVar3 = (pFVar29->WeakWidget).WeakReferenceCount.ReferenceController;
        pSVar5 = local_9a8;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar11 = pTVar3->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              TVar35 = (TVector2<float>_u_0_s_0)(TReferenceControllerBase<1> *)0x0;
              goto LAB_1424dd6b1;
            }
            LOCK();
            aVar27 = pTVar3->SharedReferenceCount;
            bVar22 = aVar11 == aVar27;
            if (bVar22) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar27 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar27;
          } while (!bVar22);
          pSVar44 = (pFVar29->WeakWidget).Object;
        }
        TVar35 = (TVector2<float>_u_0_s_0)pTVar3;
        local_a10 = (TVector2<float>_u_0_s_0)pTVar3;
        local_9e8 = pTVar3;
        local_9b8 = pTVar3;
        local_978 = pTVar3;
        local_970 = pSVar44;
        local_950 = pTVar3;
        local_948 = pTVar3;
        local_940 = pTVar3;
        local_938 = pTVar3;
        local_910 = pTVar3;
        if (pSVar44 != (SWidget *)0x0) {
          if (((local_9d0 == -1) || (pFVar29->UserIndex == -1)) || (local_9d0 == pFVar29->UserIndex)
             ) {
            pFVar30 = SWidget::GetPaintSpaceGeometry(pSVar44);
            afVar17 = _UNK_15076b188;
            afVar15 = ___xmm_3f80000000000000000000003f800000;
            ___xmm_3f80000000000000000000003f800000 = afVar14[0];
            _UNK_15076b184 = afVar14[1];
            local_828.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_828.M.M[0][1] = _UNK_15076b184;
            _UNK_15076b188 = afVar16[0];
            _UNK_15076b18c = afVar16[1];
            local_828.M.M[1][0] = _UNK_15076b188;
            local_828.M.M[1][1] = _UNK_15076b18c;
            uVar1 = *(undefined8 *)&(pFVar30->AbsolutePosition).field0_0x0._s_0.Y;
            uVar8 = *(undefined8 *)&(pFVar30->Position).field0_0x0._s_0.Y;
            local_880 = *(undefined4 *)&pFVar30->Size;
            uStack_87c = *(undefined4 *)&(pFVar30->Size).field_0x4;
            fVar51 = pFVar30->Scale;
            fStack_874 = (pFVar30->AbsolutePosition).field0_0x0._s_0.X;
            local_a10 = (pFVar30->AbsolutePosition).field0_0x0._s_0;
            uVar9 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[0] + 1);
            uVar10 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[1] + 1);
            fStack_870 = (float)uVar1;
            uStack_86c = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_868 = (undefined4)uVar8;
            TStack_864.M.M[0][0] = (float)((ulonglong)uVar8 >> 0x20);
            uVar1 = *(undefined8 *)&(pFVar30->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
            TStack_864.M.M[0][1] = (float)uVar9;
            TStack_864.M.M[1][0] = (float)((ulonglong)uVar9 >> 0x20);
            TStack_864.M.M[1][1] = (float)uVar10;
            TStack_864.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar10 >> 0x20);
            TStack_864.Trans.field0_0x0._s_0.Y = (float)uVar1;
            uStack_84c = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_968 = (float)((uint)(local_980->GridWindowOrigin).field0_0x0._s_0.X ^ uVar12);
            fStack_964 = (float)((uint)(local_980->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar12);
            local_960 = CONCAT44(fStack_964,local_968);
            local_958 = local_968 + local_a10.X;
            fStack_954 = fStack_964 + local_a10.Y;
            ___xmm_3f80000000000000000000003f800000 = afVar15;
            _UNK_15076b188 = afVar17;
            local_894 = local_960;
            fStack_878 = fVar51;
            local_828.Trans.field0_0x0._s_0.X = local_968;
            local_828.Trans.field0_0x0._s_0.Y = fStack_964;
            Concatenate<TTransform2<float>_>(&local_7d0,&TStack_864,&local_828);
            TStack_864.M.M[0][0] = local_7d0.M.M[0][0];
            TStack_864.M.M[0][1] = local_7d0.M.M[0][1];
            TStack_864.M.M[1][0] = local_7d0.M.M[1][0];
            TStack_864.M.M[1][1] = local_7d0.M.M[1][1];
            fStack_874 = local_958;
            fStack_870 = fStack_954;
            local_a10 = (TVector2<float>_u_0_s_0)CONCAT44(uStack_87c,local_880);
            local_900 = local_880;
            local_8f4 = uStack_87c;
            TStack_864.Trans.field0_0x0._s_0.X = local_7d0.Trans.field0_0x0._0_4_;
            TStack_864.Trans.field0_0x0._s_0.Y = local_7d0.Trans.field0_0x0._4_4_;
            local_908 = (TVector2<float>_u_0)0x0;
            local_8fc = 0;
            fStack_878 = fVar51;
            pFVar31 = TransformRect<TTransform2<float>_>
                                (&local_758,&TStack_864,(FSlateRotatedRect *)&local_908._s_0);
            fVar51 = (pFVar31->TopLeft).field0_0x0._s_0.X;
            fVar50 = (pFVar31->TopLeft).field0_0x0._s_0.Y;
            fVar46 = (pFVar31->ExtentY).field0_0x0._s_0.X;
            fVar47 = fVar50 + (pFVar31->ExtentX).field0_0x0._s_0.Y;
            fVar48 = fVar51 + (pFVar31->ExtentX).field0_0x0._s_0.X;
            local_7a0 = (pFVar31->TopLeft).field0_0x0._s_0;
            fVar51 = fVar46 + fVar51;
            fVar45 = (pFVar31->ExtentY).field0_0x0._s_0.Y;
            fVar50 = fVar45 + fVar50;
            fVar46 = fVar48 + fVar46;
            fVar45 = fVar47 + fVar45;
            fVar52 = fVar51;
            if (fVar51 <= fVar48) {
              fVar52 = fVar48;
            }
            fVar53 = fVar50;
            if (fVar50 <= fVar47) {
              fVar53 = fVar47;
            }
            if (fVar53 <= fVar45) {
              fVar53 = fVar45;
            }
            if (fVar53 <= local_7a0.Y) {
              fVar53 = local_7a0.Y;
            }
            if (fVar47 <= fVar50) {
              fVar50 = fVar47;
            }
            if (fVar48 <= fVar51) {
              fVar51 = fVar48;
            }
            if (fVar52 <= fVar46) {
              fVar52 = fVar46;
            }
            if (fVar45 <= fVar50) {
              fVar50 = fVar45;
            }
            if (fVar46 <= fVar51) {
              fVar51 = fVar46;
            }
            if (fVar52 <= local_7a0.X) {
              fVar52 = local_7a0.X;
            }
            if (local_7a0.Y <= fVar50) {
              fVar50 = local_7a0.Y;
            }
            if (local_7a0.X <= fVar51) {
              fVar51 = local_7a0.X;
            }
            pSVar5 = local_9a8;
            if ((((fVar50 + fVar13 <= fVar56) || (fVar52 < local_988->Left)) ||
                (local_988->Right <= fVar51 && fVar51 != local_988->Right)) ||
               ((fVar53 < local_988->Top ||
                (local_988->Bottom <= fVar50 && fVar50 != local_988->Bottom)))) {
              TVar35 = (TVector2<float>_u_0_s_0)local_938;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::DoesNotIntersect.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::DoesNotIntersect.TextData.Reference + 8))
                            (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference,local_8c8
                            );
                }
                uVar34 = HittestGridDebuggingText::DoesNotIntersect.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))
                            (TVar18.Reference,
                             (undefined1 *)
                             ((longlong)&local_8c4.SharedReferenceCount.ReferenceController + 4));
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar3);
                TVar35 = (TVector2<float>_u_0_s_0)local_938;
                pSVar5 = local_9a8;
              }
            }
            else if ((local_9a8 == (SWidget *)0x0) || (fVar50 < fVar49 + fVar13)) {
              uVar34 = local_a28;
              if (local_998->BoundaryRule == Escape) {
LAB_1424dd0f5:
                local_a28 = uVar34;
                bVar22 = false;
              }
              else {
                local_8a8 = (local_998->EventHandler).SharedReferenceCount.ReferenceController;
                pSVar5 = (local_998->EventHandler).Object;
                if (local_8a8 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_8a8->SharedReferenceCount =
                       (atomic<int>)((int)local_8a8->SharedReferenceCount + 1);
                  UNLOCK();
                }
                uVar34 = local_a28 | 1;
                if (pSVar5 == (SWidget *)0x0) goto LAB_1424dd0f5;
                local_8b0 = (local_998->EventHandler).SharedReferenceCount.ReferenceController;
                local_a28 = local_a28 | 3;
                pSVar5 = (local_998->EventHandler).Object;
                if (local_8b0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_8b0->SharedReferenceCount =
                       (atomic<int>)((int)local_8b0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                bVar22 = IsDescendantOf(local_980,pSVar5,pFVar29);
                uVar34 = local_a28;
                if (bVar22) goto LAB_1424dd0f5;
                bVar22 = true;
              }
              if ((local_a28 & 2) != 0) {
                local_a28 = local_a28 & 0xfffffffd;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_8b0);
              }
              if ((local_a28 & 1) != 0) {
                local_a28 = local_a28 & 0xfffffffe;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_8a8);
              }
              pSVar5 = local_9a8;
              if (bVar22) {
                TVar35 = (TVector2<float>_u_0_s_0)local_948;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::NotADescendant.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *HittestGridDebuggingText::NotADescendant.TextData.Reference + 8))
                              (HittestGridDebuggingText::NotADescendant.TextData.Reference,local_8e4
                              );
                  }
                  uVar34 = HittestGridDebuggingText::NotADescendant.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_948;
                    pSVar5 = local_9a8;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8e0);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_948;
                    pSVar5 = local_9a8;
                  }
                }
              }
              else if (pSVar44->EnabledStateAttribute ==
                       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                       0x0) {
                TVar35 = (TVector2<float>_u_0_s_0)local_910;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::Disabled.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::Disabled.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*HittestGridDebuggingText::Disabled.TextData.Reference +
                                8))(HittestGridDebuggingText::Disabled.TextData.Reference,local_8dc)
                    ;
                  }
                  uVar34 = HittestGridDebuggingText::Disabled.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_910;
                    pSVar5 = local_9a8;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8d8);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_910;
                    pSVar5 = local_9a8;
                  }
                }
              }
              else {
                cVar23 = (**(code **)(pSVar44->_padding_ + 0x198))(pSVar44);
                if (cVar23 == '\0') {
                  TVar35 = (TVector2<float>_u_0_s_0)local_940;
                  pSVar5 = local_9a8;
                  if (param_11 !=
                      (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    iVar42 = param_11->ArrayNum;
                    if (iVar42 == param_11->ArrayMax) {
                      iVar42 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                    }
                    pFVar4 = (param_11->AllocatorInstance).Data;
                    param_11->ArrayNum = iVar42 + 1;
                    TVar18 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData;
                    lVar39 = (longlong)iVar42 * 0x20;
                    if (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference !=
                        (ITextData *)0x0) {
                      (**(code **)((longlong)
                                   *HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                    Reference + 8))
                                (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                 Reference,local_8d4);
                    }
                    uVar34 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                    }
                    else {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                    if (TVar18.Reference == (ITextData *)0x0) {
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_940;
                      pSVar5 = local_9a8;
                    }
                    else {
                      (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8d0);
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_940;
                      pSVar5 = local_9a8;
                    }
                  }
                }
                else {
                  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    local_978 = pTVar3;
                    local_970 = pSVar44;
                  }
                  uVar34 = ((uint)((ulonglong)pSVar44 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pSVar44 >> 4)) * -0x7a143595;
                  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                  local_848.Object = pSVar44;
                  local_848.SharedReferenceCount.ReferenceController = pTVar3;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  iVar42 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                     (local_918,uVar34 >> 0x10 ^ uVar34,&local_848);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  if (iVar42 == -1) {
                    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uVar55,uVar54);
                    uStack_830._0_4_ = SUB84(pTVar3,0);
                    uVar54 = (undefined4)uStack_830;
                    uStack_830._4_4_ = (undefined4)((ulonglong)pTVar3 >> 0x20);
                    uVar55 = uStack_830._4_4_;
                    local_9f8 = pSVar44;
                    pTStack_9f0 = pTVar3;
                    local_838 = pSVar44;
                    uStack_830 = pTVar3;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar36);
                    TVar35 = (TVector2<float>_u_0_s_0)local_9e8;
                    fVar49 = fVar50;
                    pSVar5 = pSVar44;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::Valid.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::Valid.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*HittestGridDebuggingText::Valid.TextData.Reference +
                                    8))(HittestGridDebuggingText::Valid.TextData.Reference,
                                        &local_8c4.SharedReferenceCount);
                      }
                      uVar34 = HittestGridDebuggingText::Valid.Flags;
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_970;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = local_978;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))
                                  (TVar18.Reference,(undefined1 *)((longlong)&local_8c4.Object + 4))
                        ;
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_9e8;
                    }
                  }
                  else {
                    TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                    pSVar5 = local_9a8;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::ParentDisabled.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *HittestGridDebuggingText::ParentDisabled.TextData.Reference +
                                    8))(HittestGridDebuggingText::ParentDisabled.TextData.Reference,
                                        local_8cc);
                      }
                      uVar34 = HittestGridDebuggingText::ParentDisabled.Flags;
                      local_9e8 = (TReferenceControllerBase<1> *)
                                  CONCAT44(local_9e8._4_4_,
                                           HittestGridDebuggingText::ParentDisabled.Flags);
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_970;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                        pSVar5 = local_9a8;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_88c);
                        *(undefined4 *)(pFVar4 + lVar39 + 0x18) = local_9e8._0_4_;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                        pSVar5 = local_9a8;
                      }
                    }
                  }
                }
              }
            }
            else {
              TVar35 = (TVector2<float>_u_0_s_0)local_950;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::PreviousWidgetIsBetter.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference
                              + 8))(HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.
                                    Reference,local_8ec);
                }
                uVar34 = HittestGridDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_950;
                  pSVar5 = local_9a8;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8e8);
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_950;
                  pSVar5 = local_9a8;
                }
              }
            }
          }
          else if (param_11 !=
                   (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                    *)0x0) {
            iVar42 = param_11->ArrayNum;
            if (iVar42 == param_11->ArrayMax) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
            }
            pFVar4 = (param_11->AllocatorInstance).Data;
            param_11->ArrayNum = iVar42 + 1;
            TVar18 = HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData;
            lVar39 = (longlong)iVar42 * 0x20;
            if (HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference !=
                (ITextData *)0x0) {
              (**(code **)((longlong)
                           *HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                          + 8))(HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.
                                Reference,local_888);
            }
            uVar34 = HittestGridDebuggingText::NotCompatibleWithUserIndex.Flags;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
            }
            else {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
            if (TVar18.Reference == (ITextData *)0x0) {
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_a10;
              pSVar5 = local_9a8;
            }
            else {
              (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8f0);
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_a10;
              pSVar5 = local_9a8;
            }
          }
        }
LAB_1424dd6b1:
        local_9a8 = pSVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar35);
        local_9d8 = local_9d8 - 1;
      } while (-1 < (int)local_9d8);
      iVar38 = (int)local_a18;
      this = local_980;
      iVar42 = local_a08;
      iVar26 = local_a18._4_4_;
    }
    if (local_740.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0
       ) {
      FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
    }
    piVar32 = (int *)((longlong)&local_a18 + 4);
    if (iVar42 == 0) {
      piVar32 = (int *)&local_a18;
      iVar26 = iVar38;
    }
    iVar26 = iVar26 + 1;
  }
  if (local_9a8 != (SWidget *)0x0) {
    local_768 = local_988->Left;
    fStack_764 = local_988->Top;
    fStack_760 = local_988->Right;
    fStack_75c = local_988->Bottom;
    pSVar5 = pSVar44;
    this_00 = local_918;
    if (fVar49 + fVar13 <= fStack_75c) goto joined_r0x0001424ddb91;
    EVar2 = local_998->BoundaryRule;
    if (EVar2 == Explicit) {
      local_a20->Object = (local_998->FocusRecipient).Object;
      pTVar3 = (local_998->FocusRecipient).SharedReferenceCount.ReferenceController;
      (local_a20->SharedReferenceCount).ReferenceController = pTVar3;
      pTVar36 = pTStack_9f0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1424dda5c;
    }
    if (EVar2 == Wrap) {
      local_9c0 = (local_9c8->Right - local_9c8->Left) * __real_3f000000 + local_9c8->Left;
      fStack_9bc = (local_9c8->Bottom - local_9c8->Top) * __real_3f000000 + local_9c8->Top;
      local_7d8 = CONCAT44(fStack_9bc,local_9c0);
      if ((1 < local_a04) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), this_00 = local_918, bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      goto joined_r0x0001424ddb91;
    }
    if (EVar2 != Stop) {
      if ((EVar2 != Custom) && (EVar2 != CustomBoundary)) goto joined_r0x0001424ddb91;
      bVar21 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_998->FocusDelegate);
      if (bVar21) goto LAB_1424dd9cd;
    }
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar36 = pTStack_9f0;
    goto LAB_1424dda5c;
  }
  if ((bVar21) && (local_990 == local_9d4)) {
LAB_1424dd9a6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0)
    ;
LAB_1424dd9af:
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a20;
  }
  uVar43 = (ulonglong)(int)local_a04;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar42 = local_a30._4_4_;
  if (uVar43 == 0) {
    iVar42 = (int)local_a30;
  }
  if (iVar42 < 0) {
LAB_1424dd803:
    pFVar41 = local_998;
    if (local_998->BoundaryRule == Wrap) {
      if (bVar21) goto LAB_1424dd9a6;
      local_808 = local_988->Left;
      fVar56 = local_988->Top;
      fStack_800 = local_988->Right;
      fStack_7fc = local_988->Bottom;
      local_930 = (local_9c8->Right - local_9c8->Left) * fVar51 + local_9c8->Left;
      fStack_92c = (local_9c8->Bottom - local_9c8->Top) * fVar51 + local_9c8->Top;
      local_928 = CONCAT44(fStack_92c,local_930);
      fStack_804 = fVar56;
      if ((1 < uVar43) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      pTVar33 = &this->NumCells;
      iVar42 = (pTVar33->field0_0x0)._s_0.X;
      fStack_9bc = (float)((this->NumCells).field0_0x0._s_0.Y + -1);
      *(float *)((longlong)&local_928 + uVar43 * 4) = fVar56;
      local_920 = local_928;
      uVar1 = local_920;
      local_920._4_4_ = (float)((ulonglong)local_928 >> 0x20);
      bVar21 = true;
      local_920._0_4_ = (float)local_928;
      fVar50 = (float)((int)ROUND((local_920._4_4_ / CellSize.field0_0x0._s_0.Y +
                                  local_920._4_4_ / CellSize.field0_0x0._s_0.Y) - fVar51) >> 1);
      fVar49 = 0.0;
      if (0 < (int)fVar50) {
        fVar49 = fVar50;
      }
      local_9c0 = (float)(iVar42 + -1);
      fVar50 = (float)((int)ROUND(((float)local_920 / CellSize.field0_0x0._s_0.X +
                                  (float)local_920 / CellSize.field0_0x0._s_0.X) - fVar51) >> 1);
      fVar51 = 0.0;
      if (0 < (int)fVar50) {
        fVar51 = fVar50;
      }
      if ((int)fVar51 < (int)local_9c0) {
        local_9c0 = fVar51;
      }
      if ((int)fVar49 < (int)fStack_9bc) {
        fStack_9bc = fVar49;
      }
      local_a30 = CONCAT44(fStack_9bc,local_9c0);
      local_920 = uVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      goto LAB_1424dc9bc;
    }
    if (local_998->BoundaryRule != CustomBoundary) goto LAB_1424dd98d;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_998->FocusDelegate,
               &local_7b8);
    if (((*(int *)&(pFVar41->FocusDelegate).field_0x10 != 0) &&
        (plVar6 = *(longlong **)&(pFVar41->FocusDelegate).field_0x8, plVar6 != (longlong *)0x0)) &&
       (cVar23 = (**(code **)(*plVar6 + 0x38))(), cVar23 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_7b8);
LAB_1424dd9cd:
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      Execute(&pFVar41->FocusDelegate,local_a20,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      return local_a20;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7b8);
  }
  else {
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    piVar32 = (int *)((longlong)&local_a30 + 4);
    if (uVar43 == 0) {
      piVar32 = (int *)&local_a30;
    }
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    pTVar33 = &this->NumCells;
    if (uVar43 != 0) {
      pTVar33 = (TIntPoint<int> *)((longlong)&(this->NumCells).field0_0x0 + 4);
    }
    if ((pTVar33->field0_0x0)._s_0.X <= *piVar32) goto LAB_1424dd803;
  }
LAB_1424dd98d:
  pTVar33 = &this->NumCells;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0);
  goto LAB_1424dc9bc;
joined_r0x0001424ddb91:
  while (local_918 = this_00, pSVar5 != (SWidget *)0x0) {
    if (pSVar5->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>(this_00,&local_8c4,(bool *)&local_9f8);
      local_7f8.Left = pFVar20->Left;
      local_7f8.Top = pFVar20->Top;
      local_7f8.Right = pFVar20->Right;
      local_7f8.Bottom = pFVar20->Bottom;
      local_7e8.Left = pFVar19->Left;
      local_7e8.Top = pFVar19->Top;
      local_7e8.Right = pFVar19->Right;
      local_7e8.Bottom = pFVar19->Bottom;
      FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_10>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_11>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_12>_>
                (this,local_a20,&local_7e8,&local_7f8,local_a04,local_9cc,param_5,pFVar41,param_7,
                 param_8,param_9,local_9d0,param_11,this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      return local_a20;
    }
    pTVar3 = (pSVar5->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar40 = (SWidget *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar11 = pTVar3->SharedReferenceCount;
      do {
        if (aVar11 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424ddbc5;
        }
        LOCK();
        aVar27 = pTVar3->SharedReferenceCount;
        bVar21 = aVar11 == aVar27;
        if (bVar21) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
          aVar27 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar27;
      } while (!bVar21);
      pSVar40 = (pSVar5->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pSVar5 = pSVar40;
    this_00 = local_918;
  }
LAB_1424ddbc5:
  local_a20->Object = pSVar44;
  (local_a20->SharedReferenceCount).ReferenceController = pTStack_9f0;
  pTVar36 = (TReferenceControllerBase<1> *)0x0;
LAB_1424dda5c:
  pTVar28 = local_a20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  return pTVar28;
}

// FindFocusableWidget<`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_1>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_2>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_3>_> @ 1424ddcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodOrthogonal::
FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_1>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_2>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_3>_>
          (FNavigationMethodOrthogonal *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FSlateRect *param_1,FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_1> param_7,<lambda_2> param_8,<lambda_3> param_9,
          int param_10)

{
  EUINavigationRule EVar1;
  SWidget *pSVar2;
  FHittestGrid *this_00;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float>_u_0_s_0 TVar8;
  atomic<int> aVar9;
  uint uVar10;
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  FSlateRect *pFVar15;
  FNavigationReply *pFVar16;
  FSlateRect *pFVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  atomic<int> aVar24;
  int iVar25;
  TSharedPtr<SWidget,1> *pTVar26;
  FWidgetData *pFVar27;
  FGeometry *pFVar28;
  FSlateRotatedRect *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  ForElementType<FHittestGrid::FWidgetIndex> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  TSharedPtr<SWidget_const_,1> *pTVar33;
  SWidget *pSVar34;
  longlong lVar35;
  FNavigationReply *pFVar36;
  undefined8 uVar37;
  FText *pFVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  SWidget *pSVar43;
  int *piVar44;
  atomic<int> *paVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  undefined1 auStackY_b38 [32];
  undefined8 local_ad0;
  uint local_ac8;
  TSharedPtr<SWidget,1> *local_ac0;
  uint local_ab8;
  TReferenceControllerBase<1> *local_ab0;
  int local_aa8;
  SWidget *local_a98;
  TReferenceControllerBase<1> *pTStack_a90;
  undefined8 local_a88;
  int local_a80;
  int local_a7c;
  uint local_a78;
  int local_a74;
  int local_a70;
  int local_a6c;
  float local_a68;
  float fStack_a64;
  undefined8 local_a60;
  undefined8 local_a58;
  FSlateRect *local_a50;
  SWidget *local_a48;
  FNavigationReply *local_a38;
  int local_a30;
  FSlateRect *local_a28;
  undefined8 local_a20;
  float local_a18;
  float fStack_a14;
  longlong local_a10;
  longlong local_a08;
  float local_a00;
  float fStack_9fc;
  undefined8 local_9f8;
  undefined8 local_9f0;
  float local_9e8;
  float fStack_9e4;
  TVector2<float>_u_0 local_9e0;
  undefined4 local_9d8;
  undefined8 local_9d4;
  undefined4 local_9cc;
  undefined1 local_9c8 [4];
  undefined1 local_9c4 [4];
  undefined1 local_9c0 [4];
  undefined1 local_9bc [4];
  undefined1 local_9b8 [4];
  undefined1 local_9b4 [4];
  undefined1 local_9b0 [4];
  undefined1 local_9ac [20];
  TReferenceControllerBase<1> *local_998;
  int *local_988;
  undefined8 local_980;
  int *local_978;
  undefined8 local_96c;
  undefined4 local_960;
  undefined4 uStack_95c;
  float fStack_958;
  float fStack_954;
  float fStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  TTransform2<float> TStack_944;
  undefined4 uStack_92c;
  TSharedPtr<SWidget_const_,1> local_928;
  FText local_918;
  TSharedPtr<SWidget_const_,1> local_908;
  FText local_8f8;
  TSharedPtr<SWidget_const_,1> local_8e8;
  FText local_8d8;
  TSharedPtr<SWidget_const_,1> local_8c8;
  FText local_8b8;
  TSharedPtr<SWidget_const_,1> local_8a8;
  TSharedPtr<SWidget_const_,1> local_898;
  FText local_888;
  TSharedPtr<SWidget_const_,1> local_878;
  SWidget *local_868;
  undefined8 uStack_860;
  TSharedPtr<SWidget_const_,1> local_858;
  FText local_848;
  TSharedPtr<SWidget_const_,1> local_838;
  FText local_828;
  FText local_818;
  TTransform2<float> local_808;
  FSlateRect local_7e8;
  FSlateRect local_7d8;
  undefined8 local_7c8;
  TTransform2<float> local_7c0;
  FReadAccessScope local_7a8;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  TVector2<float>_u_0_s_0 local_778;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  uVar57 = FHittestGrid::CellSize.field0_0x0._s_0.Y;
  uVar56 = FHittestGrid::CellSize.field0_0x0._s_0.X;
  fVar55 = __real_3f000000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_b38;
  uVar41 = 0;
  fVar58 = param_1->Left;
  uVar37 = *(undefined8 *)(*(longlong *)&this->field_0x8 + 0xc0);
  uVar42 = (ulonglong)param_3;
  local_a6c = param_4;
  fVar46 = (param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top;
  fVar47 = (param_1->Right - fVar58) * __real_3f000000 + fVar58;
  iVar39 = (int)((ulonglong)uVar37 >> 0x20) + -1;
  iVar25 = (int)uVar37;
  local_a38 = param_6;
  local_ab8 = param_3;
  local_a70 = param_10;
  local_ac8 = 0;
  iVar21 = (int)ROUND((fVar46 + fVar46) / FHittestGrid::CellSize.field0_0x0._s_0.Y - __real_3f000000
                     ) >> 1;
  iVar23 = 0;
  if (0 < iVar21) {
    iVar23 = iVar21;
  }
  iVar22 = (int)ROUND((fVar47 + fVar47) / FHittestGrid::CellSize.field0_0x0._s_0.X - __real_3f000000
                     ) >> 1;
  iVar21 = 0;
  if (0 < iVar22) {
    iVar21 = iVar22;
  }
  iVar22 = iVar25 + -1;
  if (iVar21 < iVar25 + -1) {
    iVar22 = iVar21;
  }
  if (iVar23 < iVar39) {
    iVar39 = iVar23;
  }
  local_ad0 = CONCAT44(iVar39,iVar22);
  local_ac0 = __return_storage_ptr__;
  local_a58 = uVar37;
  local_a50 = param_1;
  local_a28 = param_2;
  local_980 = uVar37;
  if (((param_3 < 0) || (1 < param_3)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
    return pTVar26;
  }
  fVar46 = __real_3dcccccd;
  uVar10 = __xmm_80000000800000008000000080000000;
  local_a30 = local_ad0._4_4_;
  if (param_3 == 0) {
    local_a30 = (int)local_ad0;
  }
  if ((iVar25 < 1) || (local_a58._4_4_ < 1)) {
    local_ac0->Object = (SWidget *)0x0;
    (local_ac0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_ac0;
  }
  if (param_3 == 0) {
    local_a7c = local_a58._4_4_ + -1;
    local_aa8 = 1;
    fVar47 = (__real_40000000 / (float)uVar57) * param_2->Bottom;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar57) * param_2->Top - fVar55) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_a80 = local_a7c;
    if (iVar25 < local_a7c) {
      local_a80 = iVar25;
    }
  }
  else {
    local_a7c = iVar25 + -1;
    local_aa8 = 0;
    fVar47 = (__real_40000000 / (float)uVar56) * param_2->Right;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar56) * param_2->Left - fVar55) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_a80 = local_a7c;
    if (iVar25 < local_a7c) {
      local_a80 = iVar25;
    }
  }
  iVar39 = (int)ROUND(fVar47 - fVar55) >> 1;
  iVar25 = 0;
  if (0 < iVar39) {
    iVar25 = iVar39;
  }
  if (iVar25 < local_a7c) {
    local_a7c = iVar25;
  }
  bVar18 = false;
  iVar25 = local_a58._4_4_;
  do {
    fVar55 = __real_bf800000;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar39 = local_ad0._4_4_;
    if (uVar42 == 0) {
      iVar39 = (int)local_ad0;
    }
    if (iVar39 < 0) goto LAB_1424deba1;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      iVar25 = (int)uVar37;
      iVar39 = (int)local_ad0;
    }
    else {
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar39 = local_ad0._4_4_;
    }
    if (iVar25 <= iVar39) goto LAB_1424deba1;
    local_a88 = local_ad0;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      local_a74 = (int)local_ad0;
      iVar25 = (int)local_ad0;
    }
    else {
      local_a74 = local_ad0._4_4_;
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar25 = local_ad0._4_4_;
    }
    pFVar16 = local_a38;
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    uVar56 = 0;
    uVar57 = 0;
    local_978 = (int *)((longlong)&local_ad0 + 4);
    if (uVar42 == 0) {
      local_978 = (int *)&local_ad0;
    }
    local_a98 = (SWidget *)0x0;
    pTStack_a90 = (TReferenceControllerBase<1> *)0x0;
    local_a48 = (SWidget *)0x0;
    *local_978 = iVar25 + local_a6c;
    piVar44 = (int *)((longlong)&local_a88 + 4);
    iVar25 = local_aa8;
    iVar39 = local_a80;
    local_988 = (int *)((longlong)&local_a88 + 4);
    if (local_aa8 == 0) {
      piVar44 = (int *)&local_a88;
      local_988 = (int *)&local_a88;
    }
    while( true ) {
      uVar40 = local_ab8;
      fVar47 = __real_3f000000;
      *piVar44 = iVar39;
      uVar37 = local_980;
      pFVar17 = local_a28;
      pFVar36 = local_a38;
      pSVar43 = local_a48;
      pFVar15 = local_a50;
      iVar39 = local_a88._4_4_;
      iVar21 = (int)local_a88;
      iVar23 = local_a88._4_4_;
      if (iVar25 == 0) {
        iVar23 = iVar21;
      }
      if (local_a7c < iVar23) break;
      local_740.ArrayMax = 100;
      local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
      local_740.ArrayNum = 0;
      FHittestGrid::GetCollapsedWidgets
                (*(FHittestGrid **)&this->field_0x8,&local_740,iVar21,local_a88._4_4_);
      local_a78 = local_740.ArrayNum - 1;
      if (-1 < (int)local_a78) {
        local_a10 = (longlong)(int)local_a78;
        lVar35 = local_a10 << 4;
        fVar47 = fVar55;
        do {
          uVar40 = 0;
          if ((int)local_a78 < local_740.ArrayNum) {
            uVar40 = ~local_a78 >> 0x1f;
          }
          local_a08 = lVar35;
          if ((uVar40 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
            return pTVar26;
          }
          FVar31 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
          if (local_740.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar31 = local_740.AllocatorInstance.SecondaryData;
          }
          pFVar27 = FHittestGrid::FWidgetIndex::GetWidgetData
                              ((FWidgetIndex *)((longlong)FVar31 + lVar35));
          pSVar43 = (SWidget *)0x0;
          pTVar30 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
          fVar55 = fVar47;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            aVar9 = pTVar30->SharedReferenceCount;
            do {
              if (aVar9 == (atomic<int>)0x0) {
                pTVar30 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_1424de8b6;
              }
              LOCK();
              aVar24 = pTVar30->SharedReferenceCount;
              bVar19 = aVar9 == aVar24;
              if (bVar19) {
                pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
                aVar24 = aVar9;
              }
              UNLOCK();
              aVar9 = aVar24;
            } while (!bVar19);
            pSVar43 = (pFVar27->WeakWidget).Object;
          }
          local_ab0 = pTVar30;
          if (pSVar43 != (SWidget *)0x0) {
            if (((local_a70 == -1) || (pFVar27->UserIndex == -1)) ||
               (local_a70 == pFVar27->UserIndex)) {
              lVar35 = *(longlong *)&this->field_0x8;
              pFVar28 = SWidget::GetPaintSpaceGeometry(pSVar43);
              afVar14 = _UNK_15076b188;
              afVar12 = ___xmm_3f80000000000000000000003f800000;
              ___xmm_3f80000000000000000000003f800000 = afVar11[0];
              _UNK_15076b184 = afVar11[1];
              local_808.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_808.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar13[0];
              _UNK_15076b18c = afVar13[1];
              local_808.M.M[1][0] = _UNK_15076b188;
              local_808.M.M[1][1] = _UNK_15076b18c;
              uVar37 = *(undefined8 *)&(pFVar28->AbsolutePosition).field0_0x0._s_0.Y;
              uVar5 = *(undefined8 *)&(pFVar28->Position).field0_0x0._s_0.Y;
              uVar6 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[0] + 1);
              uVar7 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[1] + 1);
              local_960 = *(undefined4 *)&pFVar28->Size;
              uStack_95c = *(undefined4 *)&(pFVar28->Size).field_0x4;
              fVar55 = pFVar28->Scale;
              fStack_954 = (pFVar28->AbsolutePosition).field0_0x0._s_0.X;
              TVar8 = (pFVar28->AbsolutePosition).field0_0x0._s_0;
              fStack_950 = (float)uVar37;
              uStack_94c = (undefined4)((ulonglong)uVar37 >> 0x20);
              uStack_948 = (undefined4)uVar5;
              TStack_944.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
              uVar37 = *(undefined8 *)&(pFVar28->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
              ;
              TStack_944.Trans.field0_0x0._s_0.Y = (float)uVar37;
              uStack_92c = (undefined4)((ulonglong)uVar37 >> 0x20);
              TStack_944.M.M[0][1] = (float)uVar6;
              TStack_944.M.M[1][0] = (float)((ulonglong)uVar6 >> 0x20);
              TStack_944.M.M[1][1] = (float)uVar7;
              TStack_944.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar7 >> 0x20);
              fStack_9e4 = (float)(*(uint *)(lVar35 + 0xd4) ^ uVar10);
              local_9e8 = (float)(*(uint *)(lVar35 + 0xd0) ^ uVar10);
              local_96c = CONCAT44(fStack_9e4,local_9e8);
              local_a60._0_4_ = TVar8.X;
              local_a18 = local_9e8 + (float)local_a60;
              local_a60._4_4_ = TVar8.Y;
              fStack_a14 = fStack_9e4 + local_a60._4_4_;
              ___xmm_3f80000000000000000000003f800000 = afVar12;
              _UNK_15076b188 = afVar14;
              local_a60 = local_96c;
              fStack_958 = fVar55;
              local_808.Trans.field0_0x0._s_0.X = local_9e8;
              local_808.Trans.field0_0x0._s_0.Y = fStack_9e4;
              Concatenate<TTransform2<float>_>(&local_7c0,&TStack_944,&local_808);
              TStack_944.M.M[0][0] = local_7c0.M.M[0][0];
              TStack_944.M.M[0][1] = local_7c0.M.M[0][1];
              TStack_944.M.M[1][0] = local_7c0.M.M[1][0];
              TStack_944.M.M[1][1] = local_7c0.M.M[1][1];
              fStack_954 = local_a18;
              fStack_950 = fStack_a14;
              local_a20 = CONCAT44(uStack_95c,local_960);
              local_9d8 = local_960;
              local_9cc = uStack_95c;
              TStack_944.Trans.field0_0x0._s_0.X = local_7c0.Trans.field0_0x0._0_4_;
              TStack_944.Trans.field0_0x0._s_0.Y = local_7c0.Trans.field0_0x0._4_4_;
              local_9e0 = (TVector2<float>_u_0)0x0;
              local_9d4 = 0;
              fStack_958 = fVar55;
              pFVar29 = TransformRect<TTransform2<float>_>
                                  (&local_758,&TStack_944,(FSlateRotatedRect *)&local_9e0._s_0);
              fVar48 = (pFVar29->ExtentY).field0_0x0._s_0.X;
              fVar49 = (pFVar29->ExtentY).field0_0x0._s_0.Y;
              fVar50 = (pFVar29->TopLeft).field0_0x0._s_0.X;
              fVar51 = (pFVar29->TopLeft).field0_0x0._s_0.Y;
              fVar55 = fVar48 + fVar50;
              local_778 = (pFVar29->TopLeft).field0_0x0._s_0;
              fVar52 = fVar49 + fVar51;
              fVar50 = fVar50 + (pFVar29->ExtentX).field0_0x0._s_0.X;
              fVar51 = fVar51 + (pFVar29->ExtentX).field0_0x0._s_0.Y;
              fVar53 = fVar55;
              if (fVar50 <= fVar55) {
                fVar53 = fVar50;
              }
              fVar48 = fVar48 + fVar50;
              fVar54 = fVar52;
              if (fVar51 <= fVar52) {
                fVar54 = fVar51;
              }
              fVar49 = fVar49 + fVar51;
              if (fVar48 <= fVar53) {
                fVar53 = fVar48;
              }
              if (fVar49 <= fVar54) {
                fVar54 = fVar49;
              }
              if (local_778.X <= fVar53) {
                fVar53 = local_778.X;
              }
              if (local_778.Y <= fVar54) {
                fVar54 = local_778.Y;
              }
              if (fVar55 <= fVar50) {
                fVar55 = fVar50;
              }
              if (fVar52 <= fVar51) {
                fVar52 = fVar51;
              }
              if (fVar55 <= fVar48) {
                fVar55 = fVar48;
              }
              if (fVar52 <= fVar49) {
                fVar52 = fVar49;
              }
              if (fVar55 <= local_778.X) {
                fVar55 = local_778.X;
              }
              if (fVar52 <= local_778.Y) {
                fVar52 = local_778.Y;
              }
              if (((fVar58 <= fVar55 - fVar46) || (fVar55 < local_a28->Left)) ||
                 ((local_a28->Right <= fVar53 && fVar53 != local_a28->Right ||
                  ((fVar52 < local_a28->Top ||
                   (local_a28->Bottom <= fVar54 && fVar54 != local_a28->Bottom)))))) {
                local_848.TextData.Reference =
                     FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference,
                             local_9b0);
                }
                local_848.Flags = FNavigationMethod::FDebuggingText::DoesNotIntersect.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_848;
                pTVar33 = &local_838;
                local_838.Object = pSVar43;
                local_838.SharedReferenceCount.ReferenceController = pTVar30;
              }
              else if ((local_a48 == (SWidget *)0x0) || (fVar47 - fVar46 < fVar55)) {
                uVar40 = uVar41;
                if (pFVar16->BoundaryRule == Escape) {
LAB_1424de56b:
                  bVar19 = false;
                }
                else {
                  local_998 = (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  local_ac8 = uVar41 | 1;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_998 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_998->SharedReferenceCount =
                         (atomic<int>)((int)local_998->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  uVar40 = local_ac8;
                  if (pSVar2 == (SWidget *)0x0) goto LAB_1424de56b;
                  local_9ac._12_8_ =
                       (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  uVar40 = uVar41 | 3;
                  this_00 = *(FHittestGrid **)&this->field_0x8;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if ((TReferenceControllerBase<1> *)local_9ac._12_8_ !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    ((TReferenceControllerBase<1> *)local_9ac._12_8_)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)((TReferenceControllerBase<1> *)local_9ac._12_8_)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_ac8 = uVar40;
                  bVar19 = FHittestGrid::IsDescendantOf(this_00,pSVar2,pFVar27);
                  if (bVar19) goto LAB_1424de56b;
                  bVar19 = true;
                }
                if ((uVar40 & 2) != 0) {
                  uVar40 = uVar40 & 0xfffffffd;
                  local_ac8 = uVar40;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_9ac._12_8_);
                }
                uVar41 = uVar40;
                if ((uVar40 & 1) != 0) {
                  uVar41 = uVar40 & 0xfffffffe;
                  local_ac8 = uVar41;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_998);
                }
                if (bVar19) {
                  local_8f8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::NotADescendant.TextData.
                                  Reference + 8))
                              (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference,
                               local_9c0);
                  }
                  local_8f8.Flags = FNavigationMethod::FDebuggingText::NotADescendant.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8f8;
                  pTVar33 = &local_8e8;
                  local_8e8.Object = pSVar43;
                  local_8e8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else if (pSVar43->EnabledStateAttribute ==
                         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                         0x0) {
                  local_8d8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::Disabled.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::Disabled.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::Disabled.TextData.Reference + 8
                                ))(FNavigationMethod::FDebuggingText::Disabled.TextData.Reference,
                                   local_9bc);
                  }
                  local_8d8.Flags = FNavigationMethod::FDebuggingText::Disabled.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8d8;
                  pTVar33 = &local_8c8;
                  local_8c8.Object = pSVar43;
                  local_8c8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else {
                  cVar20 = (**(code **)(pSVar43->_padding_ + 0x198))(pSVar43);
                  if (cVar20 != '\0') {
                    if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
                      paVar45 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar45 = &pTVar30->SharedReferenceCount;
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      local_ab0 = pTVar30;
                    }
                    uVar41 = ((uint)((ulonglong)pSVar43 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)pSVar43 >> 4)) * -0x7a143595;
                    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
                    local_898.Object = pSVar43;
                    local_898.SharedReferenceCount.ReferenceController = pTVar30;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    iVar25 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                       ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                                         *)&this->field_0x18,uVar41 >> 0x10 ^ uVar41,&local_898);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    if (iVar25 == -1) {
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uVar57,uVar56);
                      uStack_860._0_4_ = SUB84(pTVar30,0);
                      uVar56 = (undefined4)uStack_860;
                      uStack_860._4_4_ = (undefined4)((ulonglong)pTVar30 >> 0x20);
                      uVar57 = uStack_860._4_4_;
                      local_a98 = pSVar43;
                      pTStack_a90 = pTVar30;
                      local_868 = pSVar43;
                      uStack_860 = pTVar30;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar32);
                      local_828.TextData.Reference =
                           FNavigationMethod::FDebuggingText::Valid.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::Valid.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::Valid.TextData.Reference +
                                    8))(FNavigationMethod::FDebuggingText::Valid.TextData.Reference,
                                        local_9ac + 4);
                      }
                      local_828.Flags = FNavigationMethod::FDebuggingText::Valid.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar30->SharedReferenceCount =
                             (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      local_858.Object = pSVar43;
                      local_858.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_858,&local_828);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ab0;
                      local_a48 = pSVar43;
                      uVar41 = local_ac8;
                    }
                    else {
                      local_888.TextData.Reference =
                           FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                      Reference + 8))
                                  (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                   Reference,local_9b4);
                      }
                      local_888.Flags = FNavigationMethod::FDebuggingText::ParentDisabled.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      local_878.Object = pSVar43;
                      local_878.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_878,&local_888);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ab0;
                      fVar55 = fVar47;
                      uVar41 = local_ac8;
                    }
                    goto LAB_1424de8b6;
                  }
                  local_8b8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                       Reference;
                  if (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                      Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                                  TextData.Reference + 8))
                              (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                               TextData.Reference,local_9b8);
                  }
                  local_8b8.Flags =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8b8;
                  pTVar33 = &local_8a8;
                  local_8a8.Object = pSVar43;
                  local_8a8.SharedReferenceCount.ReferenceController = pTVar30;
                }
              }
              else {
                local_918.TextData.Reference =
                     FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                             Reference,local_9c4);
                }
                local_918.Flags = FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_918;
                pTVar33 = &local_908;
                local_908.Object = pSVar43;
                local_908.SharedReferenceCount.ReferenceController = pTVar30;
              }
            }
            else {
              local_818.TextData.Reference =
                   FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference;
              if (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                  != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData
                              .Reference + 8))
                          (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.
                           Reference,local_9c8);
              }
              local_818.Flags = FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.Flags;
              if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar30->SharedReferenceCount =
                     (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar38 = &local_818;
              pTVar33 = &local_928;
              local_928.Object = pSVar43;
              local_928.SharedReferenceCount.ReferenceController = pTVar30;
            }
            FNavigationMethod::AddDebugIntermediateResult((FNavigationMethod *)this,pTVar33,pFVar38)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            fVar55 = fVar47;
          }
LAB_1424de8b6:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          local_a78 = local_a78 - 1;
          local_a10 = local_a10 + -1;
          lVar35 = local_a08 + -0x10;
          fVar47 = fVar55;
        } while (-1 < (int)local_a78);
        iVar21 = (int)local_a88;
        piVar44 = local_988;
        iVar25 = local_aa8;
        iVar39 = local_a88._4_4_;
        local_a08 = lVar35;
      }
      if (local_740.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
      }
      if (iVar25 == 0) {
        iVar39 = iVar21;
      }
      iVar39 = iVar39 + 1;
    }
    if (local_a48 != (SWidget *)0x0) {
      pSVar2 = pSVar43;
      if (local_a28->Left <= fVar55 - fVar46) break;
      EVar1 = local_a38->BoundaryRule;
      if (EVar1 == Explicit) {
        local_ac0->Object = (local_a38->FocusRecipient).Object;
        pTVar30 = (local_a38->FocusRecipient).SharedReferenceCount.ReferenceController;
        (local_ac0->SharedReferenceCount).ReferenceController = pTVar30;
        pTVar32 = pTStack_a90;
        if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1424dec43;
      }
      if (EVar1 == Wrap) {
        local_a68 = (local_a50->Right - local_a50->Left) * __real_3f000000 + local_a50->Left;
        fStack_a64 = (local_a50->Bottom - local_a50->Top) * __real_3f000000 + local_a50->Top;
        local_7c8 = CONCAT44(fStack_a64,local_a68);
        if ((1 < local_ab8) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                ,0x4b0,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        break;
      }
      if (EVar1 != Stop) {
        if ((EVar1 != Custom) && (EVar1 != CustomBoundary)) break;
        bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a38->FocusDelegate);
        if (bVar18) goto LAB_1424debc0;
      }
      local_ac0->Object = (SWidget *)0x0;
      (local_ac0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar32 = pTStack_a90;
      goto LAB_1424dec43;
    }
    if ((bVar18) && (local_a30 == local_a74)) {
LAB_1424deb98:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a90);
LAB_1424deba1:
      local_ac0->Object = (SWidget *)0x0;
      (local_ac0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      return local_ac0;
    }
    uVar42 = (ulonglong)(int)local_ab8;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar25 = local_ad0._4_4_;
    if (uVar42 == 0) {
      iVar25 = (int)local_ad0;
    }
    if (iVar25 < 0) {
LAB_1424dea0f:
      pFVar36 = local_a38;
      if (local_a38->BoundaryRule != Wrap) {
        if (local_a38->BoundaryRule == CustomBoundary) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &local_a38->FocusDelegate,&local_7a8);
          if (((*(int *)&(pFVar36->FocusDelegate).field_0x10 != 0) &&
              (plVar3 = *(longlong **)&(pFVar36->FocusDelegate).field_0x8, plVar3 != (longlong *)0x0
              )) && (cVar20 = (**(code **)(*plVar3 + 0x38))(), cVar20 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_7a8);
LAB_1424debc0:
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::Execute(&pFVar36->FocusDelegate,local_ac0,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a90);
            return local_ac0;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_7a8);
        }
        iVar25 = local_a58._4_4_;
        goto LAB_1424deb8a;
      }
      if (bVar18) goto LAB_1424deb98;
      local_788 = local_a28->Left;
      fStack_784 = local_a28->Top;
      fVar58 = local_a28->Right;
      fStack_77c = local_a28->Bottom;
      local_a00 = (local_a50->Right - local_a50->Left) * fVar47 + local_a50->Left;
      fStack_9fc = (local_a50->Bottom - local_a50->Top) * fVar47 + local_a50->Top;
      local_9f8 = CONCAT44(fStack_9fc,local_a00);
      fStack_780 = fVar58;
      if ((1 < uVar42) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      lVar35 = *(longlong *)&this->field_0x8;
      iVar25 = local_a58._4_4_;
      *(float *)((longlong)&local_9f8 + uVar42 * 4) = fVar58;
      fStack_a64 = (float)(*(int *)(lVar35 + 0xc4) + -1);
      local_9f0 = local_9f8;
      uVar5 = local_9f0;
      local_9f0._4_4_ = (float)((ulonglong)local_9f8 >> 0x20);
      bVar18 = true;
      local_9f0._0_4_ = (float)local_9f8;
      fVar48 = (float)((int)ROUND((local_9f0._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                                  local_9f0._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y) -
                                  fVar47) >> 1);
      fVar55 = 0.0;
      if (0 < (int)fVar48) {
        fVar55 = fVar48;
      }
      local_a68 = (float)(*(int *)(lVar35 + 0xc0) + -1);
      fVar48 = (float)((int)ROUND(((float)local_9f0 / FHittestGrid::CellSize.field0_0x0._s_0.X +
                                  (float)local_9f0 / FHittestGrid::CellSize.field0_0x0._s_0.X) -
                                  fVar47) >> 1);
      fVar47 = 0.0;
      if (0 < (int)fVar48) {
        fVar47 = fVar48;
      }
      if ((int)fVar47 < (int)local_a68) {
        local_a68 = fVar47;
      }
      if ((int)fVar55 < (int)fStack_a64) {
        fStack_a64 = fVar55;
      }
      local_ad0 = CONCAT44(fStack_a64,local_a68);
      local_9f0 = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a90);
    }
    else {
      if (uVar42 < 2) {
LAB_1424de9c9:
        if (1 < (longlong)uVar42) goto LAB_1424de9cf;
      }
      else {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        if (-1 < (longlong)uVar42) goto LAB_1424de9c9;
LAB_1424de9cf:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
      }
      iVar39 = local_a58._4_4_;
      if (uVar42 == 0) {
        iVar39 = (int)uVar37;
      }
      iVar25 = local_a58._4_4_;
      if (iVar39 <= *local_978) goto LAB_1424dea0f;
LAB_1424deb8a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a90);
    }
  } while( true );
  while (pSVar2 != (SWidget *)0x0) {
    if (pSVar2->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->field_0x18,(TSharedPtr<SWidget,1> *)local_9ac,(bool *)&local_a98);
      local_7e8.Left = pFVar17->Left;
      local_7e8.Top = pFVar17->Top;
      local_7e8.Right = pFVar17->Right;
      local_7e8.Bottom = pFVar17->Bottom;
      local_7d8.Left = pFVar15->Left;
      local_7d8.Top = pFVar15->Top;
      local_7d8.Right = pFVar15->Right;
      local_7d8.Bottom = pFVar15->Bottom;
      FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_1>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_2>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_3>_>
                (this,local_ac0,&local_7d8,&local_7e8,uVar40,local_a6c,param_5,pFVar36,param_7,
                 param_8,param_9,local_a70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a90);
      return local_ac0;
    }
    pTVar30 = (pSVar2->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar34 = (SWidget *)0x0;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar30->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424deda5;
        }
        LOCK();
        aVar24 = pTVar30->SharedReferenceCount;
        bVar18 = aVar9 == aVar24;
        if (bVar18) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar24 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar24;
      } while (!bVar18);
      pSVar34 = (pSVar2->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
    pSVar2 = pSVar34;
  }
LAB_1424deda5:
  local_ac0->Object = pSVar43;
  (local_ac0->SharedReferenceCount).ReferenceController = pTStack_a90;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
LAB_1424dec43:
  pTVar26 = local_ac0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  return pTVar26;
}

// FindFocusableWidget<`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_1>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_2>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_3>_> @ 1424dee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::
FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_1>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_2>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_3>_>
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FSlateRect *param_1,
          FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_1> param_7,<lambda_2> param_8,<lambda_3> param_9,
          int param_10,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_11,
          TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
          *param_12)

{
  undefined8 uVar1;
  EUINavigationRule EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  uint uVar12;
  float fVar13;
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float afVar17 [2];
  TRefCountPtr<ITextData> TVar18;
  FSlateRect *pFVar19;
  FSlateRect *pFVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  atomic<int> aVar27;
  TSharedPtr<SWidget,1> *pTVar28;
  FWidgetData *pFVar29;
  FGeometry *pFVar30;
  FSlateRotatedRect *pFVar31;
  int *piVar32;
  TIntPoint<int> *pTVar33;
  uint uVar34;
  TVector2<float>_u_0_s_0 TVar35;
  TReferenceControllerBase<1> *pTVar36;
  ForElementType<FHittestGrid::FWidgetIndex> FVar37;
  int iVar38;
  longlong lVar39;
  SWidget *pSVar40;
  FNavigationReply *pFVar41;
  int iVar42;
  ulonglong uVar43;
  SWidget *pSVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined1 auStackY_a88 [32];
  undefined8 local_a10;
  uint local_a08;
  TSharedPtr<SWidget,1> *local_a00;
  undefined8 local_9f8;
  TVector2<float>_u_0_s_0 local_9f0;
  int local_9e8;
  uint local_9e4;
  SWidget *local_9d8;
  TReferenceControllerBase<1> *pTStack_9d0;
  TReferenceControllerBase<1> *local_9c8;
  int local_9c0;
  int local_9bc;
  uint local_9b8;
  int local_9b4;
  int local_9b0;
  int local_9ac;
  FSlateRect *local_9a8;
  float local_9a0;
  float fStack_99c;
  TReferenceControllerBase<1> *local_998;
  SWidget *local_988;
  FNavigationReply *local_978;
  int local_970;
  FHittestGrid *local_968;
  SWidget *local_960;
  TReferenceControllerBase<1> *local_958;
  FSlateRect *local_950;
  undefined8 local_948;
  float local_940;
  float fStack_93c;
  TReferenceControllerBase<1> *local_938;
  TReferenceControllerBase<1> *local_930;
  TReferenceControllerBase<1> *local_928;
  TReferenceControllerBase<1> *local_920;
  float local_918;
  float fStack_914;
  undefined8 local_910;
  undefined8 local_908;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  *local_900;
  TReferenceControllerBase<1> *local_8f8;
  float local_8f0;
  float fStack_8ec;
  TVector2<float>_u_0 local_8e8;
  undefined4 local_8e0;
  undefined8 local_8dc;
  undefined4 local_8d4;
  undefined1 local_8d0 [4];
  undefined1 local_8cc [4];
  undefined1 local_8c8 [4];
  undefined1 local_8c4 [4];
  undefined1 local_8c0 [4];
  undefined1 local_8bc [4];
  undefined1 local_8b8 [4];
  undefined1 local_8b4 [4];
  undefined1 local_8b0 [4];
  undefined1 local_8ac [4];
  undefined1 local_8a8 [4];
  undefined1 local_8a4 [4];
  TSharedPtr<SWidget,1> local_8a0;
  TReferenceControllerBase<1> *local_890;
  TReferenceControllerBase<1> *local_888;
  undefined8 local_874;
  undefined1 local_86c [4];
  undefined1 local_868 [8];
  undefined4 local_860;
  undefined4 uStack_85c;
  float fStack_858;
  float fStack_854;
  float fStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  TTransform2<float> TStack_844;
  undefined4 uStack_82c;
  TSharedPtr<SWidget_const_,1> local_828;
  SWidget *local_818;
  undefined8 uStack_810;
  TTransform2<float> local_808;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  FSlateRect local_7d8;
  FSlateRect local_7c8;
  undefined8 local_7b8;
  TTransform2<float> local_7b0;
  FReadAccessScope local_798;
  TVector2<float>_u_0_s_0 local_780;
  FSlateRotatedRect local_760;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_748;
  ulonglong local_f8;
  
  fVar51 = __real_3f000000;
  fVar49 = __real_3f800000;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_a88;
  fVar56 = param_1->Left;
  uVar43 = (ulonglong)param_3;
  local_9ac = param_4;
  local_900 = param_12;
  iVar42 = (this->NumCells).field0_0x0._s_0.Y + -1;
  local_978 = param_6;
  local_9e4 = param_3;
  local_9b0 = param_10;
  local_a08 = 0;
  iVar24 = (int)ROUND(((param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.Y +
                      __real_3f800000 / CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar26 = 0;
  if (0 < iVar24) {
    iVar26 = iVar24;
  }
  iVar24 = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar25 = (int)ROUND(((param_1->Right - fVar56) * __real_3f000000 + fVar56) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.X +
                      __real_3f800000 / CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar38 = 0;
  if (0 < iVar25) {
    iVar38 = iVar25;
  }
  if (iVar38 < iVar24) {
    iVar24 = iVar38;
  }
  if (iVar26 < iVar42) {
    iVar42 = iVar26;
  }
  local_a10 = CONCAT44(iVar42,iVar24);
  local_a00 = __return_storage_ptr__;
  local_9a8 = param_1;
  local_968 = this;
  local_950 = param_2;
  if (((param_3 < 0) || (1 < param_3)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  fVar13 = __real_3dcccccd;
  uVar12 = __xmm_80000000800000008000000080000000;
  pTVar33 = &this->NumCells;
  local_9bc = (pTVar33->field0_0x0)._s_0.X;
  local_970 = local_a10._4_4_;
  if (param_3 == 0) {
    local_970 = (int)local_a10;
  }
  if ((local_9bc < 1) || (iVar42 = (this->NumCells).field0_0x0._s_0.Y, iVar42 < 1)) {
    local_a00->Object = (SWidget *)0x0;
    (local_a00->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a00;
  }
  if (param_3 == 0) {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.Y;
    local_9bc = iVar42 + -1;
    local_9e8 = 1;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Bottom;
    iVar26 = (int)ROUND(fVar49 * param_2->Top - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9c0 = local_9bc;
    if (iVar42 < local_9bc) {
      local_9c0 = iVar42;
    }
  }
  else {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.X;
    local_9bc = local_9bc + -1;
    local_9e8 = 0;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Right;
    iVar26 = (int)ROUND(fVar49 * param_2->Left - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9c0 = local_9bc;
    if (iVar42 < local_9bc) {
      local_9c0 = iVar42;
    }
  }
  iVar26 = (int)ROUND(fVar50 - fVar51) >> 1;
  iVar42 = 0;
  if (0 < iVar26) {
    iVar42 = iVar26;
  }
  if (iVar42 < local_9bc) {
    local_9bc = iVar42;
  }
  bVar21 = false;
LAB_1424df14c:
  iVar42 = local_9e8;
  fVar49 = __real_bf800000;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar26 = local_a10._4_4_;
  if (uVar43 == 0) {
    iVar26 = (int)local_a10;
  }
  if (iVar26 < 0) goto LAB_1424e013e;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x144,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    iVar26 = (pTVar33->field0_0x0)._s_0.X;
    iVar24 = (int)local_a10;
  }
  else {
    iVar26 = (pTVar33->field0_0x0)._s_0.Y;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar24 = local_a10._4_4_;
  }
  if (iVar26 <= iVar24) goto LAB_1424e013e;
  local_9f8 = local_a10;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    local_9b4 = (int)local_a10;
    iVar26 = (int)local_a10;
  }
  else {
    local_9b4 = local_a10._4_4_;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar26 = local_a10._4_4_;
  }
  afVar16 = _UNK_15076b188;
  afVar14 = ___xmm_3f80000000000000000000003f800000;
  uVar54 = 0;
  uVar55 = 0;
  piVar32 = (int *)((longlong)&local_a10 + 4);
  if (uVar43 == 0) {
    piVar32 = (int *)&local_a10;
  }
  local_9d8 = (SWidget *)0x0;
  pTStack_9d0 = (TReferenceControllerBase<1> *)0x0;
  local_988 = (SWidget *)0x0;
  *piVar32 = local_9ac + iVar26;
  piVar32 = (int *)((longlong)&local_9f8 + 4);
  iVar26 = local_9c0;
  if (iVar42 == 0) {
    piVar32 = (int *)&local_9f8;
  }
  while( true ) {
    pFVar20 = local_950;
    pFVar41 = local_978;
    pSVar44 = local_988;
    pFVar19 = local_9a8;
    fVar51 = __real_3f000000;
    *piVar32 = iVar26;
    iVar26 = local_9f8._4_4_;
    iVar38 = (int)local_9f8;
    iVar24 = local_9f8._4_4_;
    if (iVar42 == 0) {
      iVar24 = iVar38;
    }
    if (local_9bc < iVar24) break;
    local_748.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
    local_748.ArrayNum = 0;
    local_748.ArrayMax = 100;
    GetCollapsedWidgets(this,&local_748,iVar38,local_9f8._4_4_);
    local_9b8 = local_748.ArrayNum - 1;
    if (-1 < (int)local_9b8) {
      do {
        uVar43 = (ulonglong)local_9b8;
        uVar34 = 0;
        if ((int)local_9b8 < local_748.ArrayNum) {
          uVar34 = ~local_9b8 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
          return pTVar28;
        }
        FVar37 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_748;
        if (local_748.AllocatorInstance.SecondaryData !=
            (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
          FVar37 = local_748.AllocatorInstance.SecondaryData;
        }
        pFVar29 = FWidgetIndex::GetWidgetData((FWidgetIndex *)(uVar43 * 0x10 + (longlong)FVar37));
        pSVar44 = (SWidget *)0x0;
        pTVar3 = (pFVar29->WeakWidget).WeakReferenceCount.ReferenceController;
        pSVar5 = local_988;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar11 = pTVar3->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              TVar35 = (TVector2<float>_u_0_s_0)(TReferenceControllerBase<1> *)0x0;
              goto LAB_1424dfe49;
            }
            LOCK();
            aVar27 = pTVar3->SharedReferenceCount;
            bVar22 = aVar11 == aVar27;
            if (bVar22) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar27 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar27;
          } while (!bVar22);
          pSVar44 = (pFVar29->WeakWidget).Object;
        }
        TVar35 = (TVector2<float>_u_0_s_0)pTVar3;
        local_9f0 = (TVector2<float>_u_0_s_0)pTVar3;
        local_9c8 = pTVar3;
        local_998 = pTVar3;
        local_960 = pSVar44;
        local_958 = pTVar3;
        local_938 = pTVar3;
        local_930 = pTVar3;
        local_928 = pTVar3;
        local_920 = pTVar3;
        local_8f8 = pTVar3;
        if (pSVar44 != (SWidget *)0x0) {
          if (((local_9b0 == -1) || (pFVar29->UserIndex == -1)) || (local_9b0 == pFVar29->UserIndex)
             ) {
            pFVar30 = SWidget::GetPaintSpaceGeometry(pSVar44);
            afVar17 = _UNK_15076b188;
            afVar15 = ___xmm_3f80000000000000000000003f800000;
            ___xmm_3f80000000000000000000003f800000 = afVar14[0];
            _UNK_15076b184 = afVar14[1];
            local_808.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_808.M.M[0][1] = _UNK_15076b184;
            _UNK_15076b188 = afVar16[0];
            _UNK_15076b18c = afVar16[1];
            local_808.M.M[1][0] = _UNK_15076b188;
            local_808.M.M[1][1] = _UNK_15076b18c;
            uVar1 = *(undefined8 *)&(pFVar30->AbsolutePosition).field0_0x0._s_0.Y;
            uVar8 = *(undefined8 *)&(pFVar30->Position).field0_0x0._s_0.Y;
            local_860 = *(undefined4 *)&pFVar30->Size;
            uStack_85c = *(undefined4 *)&(pFVar30->Size).field_0x4;
            fVar51 = pFVar30->Scale;
            fStack_854 = (pFVar30->AbsolutePosition).field0_0x0._s_0.X;
            local_9f0 = (pFVar30->AbsolutePosition).field0_0x0._s_0;
            uVar9 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[0] + 1);
            uVar10 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[1] + 1);
            fStack_850 = (float)uVar1;
            uStack_84c = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_848 = (undefined4)uVar8;
            TStack_844.M.M[0][0] = (float)((ulonglong)uVar8 >> 0x20);
            uVar1 = *(undefined8 *)&(pFVar30->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
            TStack_844.M.M[0][1] = (float)uVar9;
            TStack_844.M.M[1][0] = (float)((ulonglong)uVar9 >> 0x20);
            TStack_844.M.M[1][1] = (float)uVar10;
            TStack_844.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar10 >> 0x20);
            TStack_844.Trans.field0_0x0._s_0.Y = (float)uVar1;
            uStack_82c = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_8f0 = (float)((uint)(local_968->GridWindowOrigin).field0_0x0._s_0.X ^ uVar12);
            fStack_8ec = (float)((uint)(local_968->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar12);
            local_948 = CONCAT44(fStack_8ec,local_8f0);
            local_940 = local_8f0 + local_9f0.X;
            fStack_93c = fStack_8ec + local_9f0.Y;
            ___xmm_3f80000000000000000000003f800000 = afVar15;
            _UNK_15076b188 = afVar17;
            local_874 = local_948;
            fStack_858 = fVar51;
            local_808.Trans.field0_0x0._s_0.X = local_8f0;
            local_808.Trans.field0_0x0._s_0.Y = fStack_8ec;
            Concatenate<TTransform2<float>_>(&local_7b0,&TStack_844,&local_808);
            TStack_844.M.M[0][0] = local_7b0.M.M[0][0];
            TStack_844.M.M[0][1] = local_7b0.M.M[0][1];
            TStack_844.M.M[1][0] = local_7b0.M.M[1][0];
            TStack_844.M.M[1][1] = local_7b0.M.M[1][1];
            fStack_854 = local_940;
            fStack_850 = fStack_93c;
            local_9f0 = (TVector2<float>_u_0_s_0)CONCAT44(uStack_85c,local_860);
            local_8e0 = local_860;
            local_8d4 = uStack_85c;
            TStack_844.Trans.field0_0x0._s_0.X = local_7b0.Trans.field0_0x0._0_4_;
            TStack_844.Trans.field0_0x0._s_0.Y = local_7b0.Trans.field0_0x0._4_4_;
            local_8e8 = (TVector2<float>_u_0)0x0;
            local_8dc = 0;
            fStack_858 = fVar51;
            pFVar31 = TransformRect<TTransform2<float>_>
                                (&local_760,&TStack_844,(FSlateRotatedRect *)&local_8e8._s_0);
            fVar51 = (pFVar31->TopLeft).field0_0x0._s_0.X;
            fVar50 = (pFVar31->TopLeft).field0_0x0._s_0.Y;
            fVar46 = (pFVar31->ExtentY).field0_0x0._s_0.X;
            fVar47 = fVar50 + (pFVar31->ExtentX).field0_0x0._s_0.Y;
            fVar48 = fVar51 + (pFVar31->ExtentX).field0_0x0._s_0.X;
            local_780 = (pFVar31->TopLeft).field0_0x0._s_0;
            fVar51 = fVar46 + fVar51;
            fVar45 = (pFVar31->ExtentY).field0_0x0._s_0.Y;
            fVar50 = fVar45 + fVar50;
            fVar46 = fVar48 + fVar46;
            fVar45 = fVar47 + fVar45;
            fVar53 = fVar51;
            if (fVar51 <= fVar48) {
              fVar53 = fVar48;
            }
            fVar52 = fVar50;
            if (fVar50 <= fVar47) {
              fVar52 = fVar47;
            }
            if (fVar52 <= fVar45) {
              fVar52 = fVar45;
            }
            if (fVar52 <= local_780.Y) {
              fVar52 = local_780.Y;
            }
            if (fVar53 <= fVar46) {
              fVar53 = fVar46;
            }
            if (fVar47 <= fVar50) {
              fVar50 = fVar47;
            }
            if (fVar48 <= fVar51) {
              fVar51 = fVar48;
            }
            if (fVar53 <= local_780.X) {
              fVar53 = local_780.X;
            }
            if (fVar45 <= fVar50) {
              fVar50 = fVar45;
            }
            if (fVar46 <= fVar51) {
              fVar51 = fVar46;
            }
            if (local_780.Y <= fVar50) {
              fVar50 = local_780.Y;
            }
            if (local_780.X <= fVar51) {
              fVar51 = local_780.X;
            }
            pSVar5 = local_988;
            if ((((fVar56 <= fVar53 - fVar13) || (fVar53 < local_950->Left)) ||
                (local_950->Right <= fVar51 && fVar51 != local_950->Right)) ||
               ((fVar52 < local_950->Top ||
                (local_950->Bottom <= fVar50 && fVar50 != local_950->Bottom)))) {
              TVar35 = (TVector2<float>_u_0_s_0)local_920;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::DoesNotIntersect.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::DoesNotIntersect.TextData.Reference + 8))
                            (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference,
                             &local_8a0.SharedReferenceCount);
                }
                uVar34 = HittestGridDebuggingText::DoesNotIntersect.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8a4);
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar3);
                TVar35 = (TVector2<float>_u_0_s_0)local_920;
                pSVar5 = local_988;
              }
            }
            else if ((local_988 == (SWidget *)0x0) || (fVar49 - fVar13 < fVar53)) {
              uVar34 = local_a08;
              if (local_978->BoundaryRule == Escape) {
LAB_1424df88d:
                local_a08 = uVar34;
                bVar22 = false;
              }
              else {
                local_888 = (local_978->EventHandler).SharedReferenceCount.ReferenceController;
                pSVar5 = (local_978->EventHandler).Object;
                if (local_888 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_888->SharedReferenceCount =
                       (atomic<int>)((int)local_888->SharedReferenceCount + 1);
                  UNLOCK();
                }
                uVar34 = local_a08 | 1;
                if (pSVar5 == (SWidget *)0x0) goto LAB_1424df88d;
                local_890 = (local_978->EventHandler).SharedReferenceCount.ReferenceController;
                local_a08 = local_a08 | 3;
                pSVar5 = (local_978->EventHandler).Object;
                if (local_890 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_890->SharedReferenceCount =
                       (atomic<int>)((int)local_890->SharedReferenceCount + 1);
                  UNLOCK();
                }
                bVar22 = IsDescendantOf(local_968,pSVar5,pFVar29);
                uVar34 = local_a08;
                if (bVar22) goto LAB_1424df88d;
                bVar22 = true;
              }
              if ((local_a08 & 2) != 0) {
                local_a08 = local_a08 & 0xfffffffd;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_890);
              }
              if ((local_a08 & 1) != 0) {
                local_a08 = local_a08 & 0xfffffffe;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_888);
              }
              pSVar5 = local_988;
              if (bVar22) {
                TVar35 = (TVector2<float>_u_0_s_0)local_8f8;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::NotADescendant.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *HittestGridDebuggingText::NotADescendant.TextData.Reference + 8))
                              (HittestGridDebuggingText::NotADescendant.TextData.Reference,local_8c4
                              );
                  }
                  uVar34 = HittestGridDebuggingText::NotADescendant.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_8f8;
                    pSVar5 = local_988;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8c0);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_8f8;
                    pSVar5 = local_988;
                  }
                }
              }
              else if (pSVar44->EnabledStateAttribute ==
                       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                       0x0) {
                TVar35 = (TVector2<float>_u_0_s_0)local_930;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::Disabled.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::Disabled.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*HittestGridDebuggingText::Disabled.TextData.Reference +
                                8))(HittestGridDebuggingText::Disabled.TextData.Reference,local_8bc)
                    ;
                  }
                  uVar34 = HittestGridDebuggingText::Disabled.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_930;
                    pSVar5 = local_988;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8b8);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_930;
                    pSVar5 = local_988;
                  }
                }
              }
              else {
                cVar23 = (**(code **)(pSVar44->_padding_ + 0x198))(pSVar44);
                if (cVar23 == '\0') {
                  TVar35 = (TVector2<float>_u_0_s_0)local_928;
                  pSVar5 = local_988;
                  if (param_11 !=
                      (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    iVar42 = param_11->ArrayNum;
                    if (iVar42 == param_11->ArrayMax) {
                      iVar42 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                    }
                    pFVar4 = (param_11->AllocatorInstance).Data;
                    param_11->ArrayNum = iVar42 + 1;
                    TVar18 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData;
                    lVar39 = (longlong)iVar42 * 0x20;
                    if (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference !=
                        (ITextData *)0x0) {
                      (**(code **)((longlong)
                                   *HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                    Reference + 8))
                                (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                 Reference,local_8b4);
                    }
                    uVar34 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                    }
                    else {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                    if (TVar18.Reference == (ITextData *)0x0) {
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_928;
                      pSVar5 = local_988;
                    }
                    else {
                      (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8b0);
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_928;
                      pSVar5 = local_988;
                    }
                  }
                }
                else {
                  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    local_960 = pSVar44;
                    local_958 = pTVar3;
                  }
                  uVar34 = ((uint)((ulonglong)pSVar44 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pSVar44 >> 4)) * -0x7a143595;
                  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                  local_828.Object = pSVar44;
                  local_828.SharedReferenceCount.ReferenceController = pTVar3;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  iVar42 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                     (local_900,uVar34 >> 0x10 ^ uVar34,&local_828);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  if (iVar42 == -1) {
                    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uVar55,uVar54);
                    uStack_810._0_4_ = SUB84(pTVar3,0);
                    uVar54 = (undefined4)uStack_810;
                    uStack_810._4_4_ = (undefined4)((ulonglong)pTVar3 >> 0x20);
                    uVar55 = uStack_810._4_4_;
                    local_9d8 = pSVar44;
                    pTStack_9d0 = pTVar3;
                    local_818 = pSVar44;
                    uStack_810 = pTVar3;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar36);
                    TVar35 = (TVector2<float>_u_0_s_0)local_9c8;
                    fVar49 = fVar53;
                    pSVar5 = pSVar44;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::Valid.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::Valid.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*HittestGridDebuggingText::Valid.TextData.Reference +
                                    8))(HittestGridDebuggingText::Valid.TextData.Reference,local_8a8
                                       );
                      }
                      uVar34 = HittestGridDebuggingText::Valid.Flags;
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_960;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = local_958;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8ac);
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_9c8;
                    }
                  }
                  else {
                    TVar35 = (TVector2<float>_u_0_s_0)local_998;
                    pSVar5 = local_988;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::ParentDisabled.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *HittestGridDebuggingText::ParentDisabled.TextData.Reference +
                                    8))(HittestGridDebuggingText::ParentDisabled.TextData.Reference,
                                        local_86c);
                      }
                      uVar34 = HittestGridDebuggingText::ParentDisabled.Flags;
                      local_9c8 = (TReferenceControllerBase<1> *)
                                  CONCAT44(local_9c8._4_4_,
                                           HittestGridDebuggingText::ParentDisabled.Flags);
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_960;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_998;
                        pSVar5 = local_988;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))
                                  (TVar18.Reference,(undefined1 *)((longlong)&local_8a0.Object + 4))
                        ;
                        *(undefined4 *)(pFVar4 + lVar39 + 0x18) = local_9c8._0_4_;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_998;
                        pSVar5 = local_988;
                      }
                    }
                  }
                }
              }
            }
            else {
              TVar35 = (TVector2<float>_u_0_s_0)local_938;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::PreviousWidgetIsBetter.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference
                              + 8))(HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.
                                    Reference,local_8cc);
                }
                uVar34 = HittestGridDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_938;
                  pSVar5 = local_988;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8c8);
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_938;
                  pSVar5 = local_988;
                }
              }
            }
          }
          else if (param_11 !=
                   (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                    *)0x0) {
            iVar42 = param_11->ArrayNum;
            if (iVar42 == param_11->ArrayMax) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
            }
            pFVar4 = (param_11->AllocatorInstance).Data;
            param_11->ArrayNum = iVar42 + 1;
            TVar18 = HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData;
            lVar39 = (longlong)iVar42 * 0x20;
            if (HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference !=
                (ITextData *)0x0) {
              (**(code **)((longlong)
                           *HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                          + 8))(HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.
                                Reference,local_868);
            }
            uVar34 = HittestGridDebuggingText::NotCompatibleWithUserIndex.Flags;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
            }
            else {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
            if (TVar18.Reference == (ITextData *)0x0) {
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_9f0;
              pSVar5 = local_988;
            }
            else {
              (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8d0);
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_9f0;
              pSVar5 = local_988;
            }
          }
        }
LAB_1424dfe49:
        local_988 = pSVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar35);
        local_9b8 = local_9b8 - 1;
      } while (-1 < (int)local_9b8);
      iVar38 = (int)local_9f8;
      this = local_968;
      iVar42 = local_9e8;
      iVar26 = local_9f8._4_4_;
    }
    if (local_748.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0
       ) {
      FMemory::Free((void *)local_748.AllocatorInstance.SecondaryData);
    }
    piVar32 = (int *)((longlong)&local_9f8 + 4);
    if (iVar42 == 0) {
      piVar32 = (int *)&local_9f8;
      iVar26 = iVar38;
    }
    iVar26 = iVar26 + 1;
  }
  if (local_988 != (SWidget *)0x0) {
    pSVar5 = pSVar44;
    this_00 = local_900;
    if (local_950->Left <= fVar49 - fVar13) goto joined_r0x0001424e0311;
    EVar2 = local_978->BoundaryRule;
    if (EVar2 == Explicit) {
      local_a00->Object = (local_978->FocusRecipient).Object;
      pTVar3 = (local_978->FocusRecipient).SharedReferenceCount.ReferenceController;
      (local_a00->SharedReferenceCount).ReferenceController = pTVar3;
      pTVar36 = pTStack_9d0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1424e01dc;
    }
    if (EVar2 == Wrap) {
      local_9a0 = (local_9a8->Right - local_9a8->Left) * __real_3f000000 + local_9a8->Left;
      fStack_99c = (local_9a8->Bottom - local_9a8->Top) * __real_3f000000 + local_9a8->Top;
      local_7b8 = CONCAT44(fStack_99c,local_9a0);
      if ((1 < local_9e4) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), this_00 = local_900, bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      goto joined_r0x0001424e0311;
    }
    if (EVar2 != Stop) {
      if ((EVar2 != Custom) && (EVar2 != CustomBoundary)) goto joined_r0x0001424e0311;
      bVar21 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_978->FocusDelegate);
      if (bVar21) goto LAB_1424e015c;
    }
    local_a00->Object = (SWidget *)0x0;
    (local_a00->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar36 = pTStack_9d0;
    goto LAB_1424e01dc;
  }
  if ((bVar21) && (local_970 == local_9b4)) {
LAB_1424e0135:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9d0)
    ;
LAB_1424e013e:
    local_a00->Object = (SWidget *)0x0;
    (local_a00->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a00;
  }
  uVar43 = (ulonglong)(int)local_9e4;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar42 = local_a10._4_4_;
  if (uVar43 == 0) {
    iVar42 = (int)local_a10;
  }
  if (iVar42 < 0) {
LAB_1424dff9b:
    pFVar41 = local_978;
    if (local_978->BoundaryRule == Wrap) {
      if (bVar21) goto LAB_1424e0135;
      local_7e8 = local_950->Left;
      fStack_7e4 = local_950->Top;
      fVar56 = local_950->Right;
      fStack_7dc = local_950->Bottom;
      local_918 = (local_9a8->Right - local_9a8->Left) * fVar51 + local_9a8->Left;
      fStack_914 = (local_9a8->Bottom - local_9a8->Top) * fVar51 + local_9a8->Top;
      local_910 = CONCAT44(fStack_914,local_918);
      fStack_7e0 = fVar56;
      if ((1 < uVar43) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      pTVar33 = &this->NumCells;
      iVar42 = (pTVar33->field0_0x0)._s_0.X;
      fStack_99c = (float)((this->NumCells).field0_0x0._s_0.Y + -1);
      *(float *)((longlong)&local_910 + uVar43 * 4) = fVar56;
      local_908 = local_910;
      uVar1 = local_908;
      local_908._4_4_ = (float)((ulonglong)local_910 >> 0x20);
      bVar21 = true;
      local_908._0_4_ = (float)local_910;
      fVar50 = (float)((int)ROUND((local_908._4_4_ / CellSize.field0_0x0._s_0.Y +
                                  local_908._4_4_ / CellSize.field0_0x0._s_0.Y) - fVar51) >> 1);
      fVar49 = 0.0;
      if (0 < (int)fVar50) {
        fVar49 = fVar50;
      }
      local_9a0 = (float)(iVar42 + -1);
      fVar50 = (float)((int)ROUND(((float)local_908 / CellSize.field0_0x0._s_0.X +
                                  (float)local_908 / CellSize.field0_0x0._s_0.X) - fVar51) >> 1);
      fVar51 = 0.0;
      if (0 < (int)fVar50) {
        fVar51 = fVar50;
      }
      if ((int)fVar51 < (int)local_9a0) {
        local_9a0 = fVar51;
      }
      if ((int)fVar49 < (int)fStack_99c) {
        fStack_99c = fVar49;
      }
      local_a10 = CONCAT44(fStack_99c,local_9a0);
      local_908 = uVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9d0);
      goto LAB_1424df14c;
    }
    if (local_978->BoundaryRule != CustomBoundary) goto LAB_1424e011c;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_978->FocusDelegate,
               &local_798);
    if (((*(int *)&(pFVar41->FocusDelegate).field_0x10 != 0) &&
        (plVar6 = *(longlong **)&(pFVar41->FocusDelegate).field_0x8, plVar6 != (longlong *)0x0)) &&
       (cVar23 = (**(code **)(*plVar6 + 0x38))(), cVar23 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_798);
LAB_1424e015c:
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      Execute(&pFVar41->FocusDelegate,local_a00,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9d0);
      return local_a00;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_798);
  }
  else {
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    piVar32 = (int *)((longlong)&local_a10 + 4);
    if (uVar43 == 0) {
      piVar32 = (int *)&local_a10;
    }
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    pTVar33 = &this->NumCells;
    if (uVar43 != 0) {
      pTVar33 = (TIntPoint<int> *)((longlong)&(this->NumCells).field0_0x0 + 4);
    }
    if ((pTVar33->field0_0x0)._s_0.X <= *piVar32) goto LAB_1424dff9b;
  }
LAB_1424e011c:
  pTVar33 = &this->NumCells;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9d0);
  goto LAB_1424df14c;
joined_r0x0001424e0311:
  while (local_900 = this_00, pSVar5 != (SWidget *)0x0) {
    if (pSVar5->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>(this_00,&local_8a0,(bool *)&local_9d8);
      local_7d8.Left = pFVar20->Left;
      local_7d8.Top = pFVar20->Top;
      local_7d8.Right = pFVar20->Right;
      local_7d8.Bottom = pFVar20->Bottom;
      local_7c8.Left = pFVar19->Left;
      local_7c8.Top = pFVar19->Top;
      local_7c8.Right = pFVar19->Right;
      local_7c8.Bottom = pFVar19->Bottom;
      FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_1>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_2>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_3>_>
                (this,local_a00,&local_7c8,&local_7d8,local_9e4,local_9ac,param_5,pFVar41,param_7,
                 param_8,param_9,local_9b0,param_11,this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9d0);
      return local_a00;
    }
    pTVar3 = (pSVar5->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar40 = (SWidget *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar11 = pTVar3->SharedReferenceCount;
      do {
        if (aVar11 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424e0345;
        }
        LOCK();
        aVar27 = pTVar3->SharedReferenceCount;
        bVar21 = aVar11 == aVar27;
        if (bVar21) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
          aVar27 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar27;
      } while (!bVar21);
      pSVar40 = (pSVar5->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pSVar5 = pSVar40;
    this_00 = local_900;
  }
LAB_1424e0345:
  local_a00->Object = pSVar44;
  (local_a00->SharedReferenceCount).ReferenceController = pTStack_9d0;
  pTVar36 = (TReferenceControllerBase<1> *)0x0;
LAB_1424e01dc:
  pTVar28 = local_a00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  return pTVar28;
}

// FindFocusableWidget<`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_4>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_5>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_6>_> @ 1424e0440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodOrthogonal::
FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_4>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_5>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_6>_>
          (FNavigationMethodOrthogonal *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FSlateRect *param_1,FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_4> param_7,<lambda_5> param_8,<lambda_6> param_9,
          int param_10)

{
  EUINavigationRule EVar1;
  SWidget *pSVar2;
  FHittestGrid *this_00;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float>_u_0_s_0 TVar8;
  atomic<int> aVar9;
  uint uVar10;
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  FSlateRect *pFVar15;
  FNavigationReply *pFVar16;
  FSlateRect *pFVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  atomic<int> aVar24;
  int iVar25;
  TSharedPtr<SWidget,1> *pTVar26;
  FWidgetData *pFVar27;
  FGeometry *pFVar28;
  FSlateRotatedRect *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  ForElementType<FHittestGrid::FWidgetIndex> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  TSharedPtr<SWidget_const_,1> *pTVar33;
  SWidget *pSVar34;
  longlong lVar35;
  FNavigationReply *pFVar36;
  undefined8 uVar37;
  FText *pFVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  SWidget *pSVar43;
  int *piVar44;
  atomic<int> *paVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_b48 [32];
  undefined8 local_ae0;
  uint local_ad8;
  TSharedPtr<SWidget,1> *local_ad0;
  uint local_ac8;
  TReferenceControllerBase<1> *local_ac0;
  int local_ab8;
  SWidget *local_aa8;
  TReferenceControllerBase<1> *pTStack_aa0;
  undefined8 local_a98;
  int local_a90;
  int local_a8c;
  uint local_a88;
  int local_a84;
  int local_a80;
  int local_a7c;
  float local_a78;
  float fStack_a74;
  undefined8 local_a70;
  undefined8 local_a68;
  FSlateRect *local_a60;
  SWidget *local_a58;
  FNavigationReply *local_a48;
  int local_a40;
  FSlateRect *local_a38;
  undefined8 local_a30;
  float local_a28;
  float fStack_a24;
  longlong local_a20;
  longlong local_a18;
  float local_a10;
  float fStack_a0c;
  undefined8 local_a08;
  undefined8 local_a00;
  float local_9f8;
  float fStack_9f4;
  TVector2<float>_u_0 local_9f0;
  undefined4 local_9e8;
  undefined8 local_9e4;
  undefined4 local_9dc;
  undefined1 local_9d8 [4];
  undefined1 local_9d4 [4];
  undefined1 local_9d0 [4];
  undefined1 local_9cc [4];
  undefined1 local_9c8 [4];
  undefined1 local_9c4 [4];
  undefined1 local_9c0 [4];
  undefined1 local_9bc [20];
  TReferenceControllerBase<1> *local_9a8;
  int *local_998;
  undefined8 local_990;
  int *local_988;
  undefined8 local_97c;
  undefined4 local_970;
  undefined4 uStack_96c;
  float fStack_968;
  float fStack_964;
  float fStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  TTransform2<float> TStack_954;
  undefined4 uStack_93c;
  TSharedPtr<SWidget_const_,1> local_938;
  FText local_928;
  TSharedPtr<SWidget_const_,1> local_918;
  FText local_908;
  TSharedPtr<SWidget_const_,1> local_8f8;
  FText local_8e8;
  TSharedPtr<SWidget_const_,1> local_8d8;
  FText local_8c8;
  TSharedPtr<SWidget_const_,1> local_8b8;
  TSharedPtr<SWidget_const_,1> local_8a8;
  FText local_898;
  TSharedPtr<SWidget_const_,1> local_888;
  SWidget *local_878;
  undefined8 uStack_870;
  FText local_868;
  FText local_858;
  TSharedPtr<SWidget_const_,1> local_848;
  TSharedPtr<SWidget_const_,1> local_838;
  FText local_828;
  TTransform2<float> local_818;
  FSlateRect local_7f8;
  undefined8 local_7e8;
  TTransform2<float> local_7e0;
  FReadAccessScope local_7c8;
  FSlateRect local_7a8;
  TVector2<float>_u_0_s_0 local_798;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  uVar58 = FHittestGrid::CellSize.field0_0x0._s_0.Y;
  uVar57 = FHittestGrid::CellSize.field0_0x0._s_0.X;
  fVar56 = __real_3f000000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_b48;
  uVar41 = 0;
  uVar37 = *(undefined8 *)(*(longlong *)&this->field_0x8 + 0xc0);
  uVar42 = (ulonglong)param_3;
  local_a7c = param_4;
  fVar46 = (param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top;
  fVar49 = (param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left;
  iVar39 = (int)((ulonglong)uVar37 >> 0x20) + -1;
  iVar25 = (int)uVar37;
  local_a48 = param_6;
  local_ac8 = param_3;
  local_a80 = param_10;
  local_ad8 = 0;
  iVar21 = (int)ROUND((fVar46 + fVar46) / FHittestGrid::CellSize.field0_0x0._s_0.Y - __real_3f000000
                     ) >> 1;
  iVar23 = 0;
  if (0 < iVar21) {
    iVar23 = iVar21;
  }
  iVar22 = (int)ROUND((fVar49 + fVar49) / FHittestGrid::CellSize.field0_0x0._s_0.X - __real_3f000000
                     ) >> 1;
  iVar21 = 0;
  if (0 < iVar22) {
    iVar21 = iVar22;
  }
  iVar22 = iVar25 + -1;
  if (iVar21 < iVar25 + -1) {
    iVar22 = iVar21;
  }
  if (iVar23 < iVar39) {
    iVar39 = iVar23;
  }
  local_ae0 = CONCAT44(iVar39,iVar22);
  local_ad0 = __return_storage_ptr__;
  local_a68 = uVar37;
  local_a60 = param_1;
  local_a38 = param_2;
  local_990 = uVar37;
  if ((1 < (uint)param_3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
    return pTVar26;
  }
  fVar49 = __real_3dcccccd;
  uVar10 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fStack_774 = param_1->Top;
  fVar46 = param_1->Right;
  fStack_76c = param_1->Bottom;
  local_a40 = local_ae0._4_4_;
  if (param_3 == 0) {
    local_a40 = (int)local_ae0;
  }
  if ((iVar25 < 1) || (local_a68._4_4_ < 1)) {
    local_ad0->Object = (SWidget *)0x0;
    (local_ad0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_ad0;
  }
  if (param_3 == 0) {
    local_a8c = local_a68._4_4_ + -1;
    local_ab8 = 1;
    fVar47 = (__real_40000000 / (float)uVar58) * param_2->Bottom;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar58) * param_2->Top - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_a90 = local_a8c;
    if (iVar25 < local_a8c) {
      local_a90 = iVar25;
    }
  }
  else {
    local_a8c = iVar25 + -1;
    local_ab8 = 0;
    fVar47 = (__real_40000000 / (float)uVar57) * param_2->Right;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar57) * param_2->Left - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_a90 = local_a8c;
    if (iVar25 < local_a8c) {
      local_a90 = iVar25;
    }
  }
  iVar39 = (int)ROUND(fVar47 - fVar56) >> 1;
  iVar25 = 0;
  if (0 < iVar39) {
    iVar25 = iVar39;
  }
  if (iVar25 < local_a8c) {
    local_a8c = iVar25;
  }
  bVar18 = false;
  iVar25 = local_a68._4_4_;
  fStack_770 = fVar46;
  do {
    fVar56 = __real_bf800000;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar39 = local_ae0._4_4_;
    if (uVar42 == 0) {
      iVar39 = (int)local_ae0;
    }
    if (iVar39 < 0) goto LAB_1424e1309;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      iVar25 = (int)uVar37;
      iVar39 = (int)local_ae0;
    }
    else {
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar39 = local_ae0._4_4_;
    }
    if (iVar25 <= iVar39) goto LAB_1424e1309;
    local_a98 = local_ae0;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      local_a84 = (int)local_ae0;
      iVar25 = (int)local_ae0;
    }
    else {
      local_a84 = local_ae0._4_4_;
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar25 = local_ae0._4_4_;
    }
    pFVar16 = local_a48;
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    uVar57 = 0;
    uVar58 = 0;
    local_988 = (int *)((longlong)&local_ae0 + 4);
    if (uVar42 == 0) {
      local_988 = (int *)&local_ae0;
    }
    local_aa8 = (SWidget *)0x0;
    pTStack_aa0 = (TReferenceControllerBase<1> *)0x0;
    local_a58 = (SWidget *)0x0;
    *local_988 = iVar25 + local_a7c;
    piVar44 = (int *)((longlong)&local_a98 + 4);
    iVar25 = local_ab8;
    iVar39 = local_a90;
    local_998 = (int *)((longlong)&local_a98 + 4);
    if (local_ab8 == 0) {
      piVar44 = (int *)&local_a98;
      local_998 = (int *)&local_a98;
    }
    while( true ) {
      uVar40 = local_ac8;
      fVar47 = __real_3f000000;
      *piVar44 = iVar39;
      uVar37 = local_990;
      pFVar17 = local_a38;
      pFVar36 = local_a48;
      pSVar43 = local_a58;
      pFVar15 = local_a60;
      iVar39 = local_a98._4_4_;
      iVar21 = (int)local_a98;
      iVar23 = local_a98._4_4_;
      if (iVar25 == 0) {
        iVar23 = iVar21;
      }
      if (local_a8c < iVar23) break;
      local_740.ArrayMax = 100;
      local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
      local_740.ArrayNum = 0;
      FHittestGrid::GetCollapsedWidgets
                (*(FHittestGrid **)&this->field_0x8,&local_740,iVar21,local_a98._4_4_);
      local_a88 = local_740.ArrayNum - 1;
      if (-1 < (int)local_a88) {
        local_a20 = (longlong)(int)local_a88;
        lVar35 = local_a20 << 4;
        fVar47 = fVar56;
        do {
          uVar40 = 0;
          if ((int)local_a88 < local_740.ArrayNum) {
            uVar40 = ~local_a88 >> 0x1f;
          }
          local_a18 = lVar35;
          if ((uVar40 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
            return pTVar26;
          }
          FVar31 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
          if (local_740.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar31 = local_740.AllocatorInstance.SecondaryData;
          }
          pFVar27 = FHittestGrid::FWidgetIndex::GetWidgetData
                              ((FWidgetIndex *)((longlong)FVar31 + lVar35));
          pSVar43 = (SWidget *)0x0;
          pTVar30 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
          fVar56 = fVar47;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            aVar9 = pTVar30->SharedReferenceCount;
            do {
              if (aVar9 == (atomic<int>)0x0) {
                pTVar30 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_1424e1034;
              }
              LOCK();
              aVar24 = pTVar30->SharedReferenceCount;
              bVar19 = aVar9 == aVar24;
              if (bVar19) {
                pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
                aVar24 = aVar9;
              }
              UNLOCK();
              aVar9 = aVar24;
            } while (!bVar19);
            pSVar43 = (pFVar27->WeakWidget).Object;
          }
          local_ac0 = pTVar30;
          if (pSVar43 != (SWidget *)0x0) {
            if (((local_a80 == -1) || (pFVar27->UserIndex == -1)) ||
               (local_a80 == pFVar27->UserIndex)) {
              lVar35 = *(longlong *)&this->field_0x8;
              pFVar28 = SWidget::GetPaintSpaceGeometry(pSVar43);
              afVar14 = _UNK_15076b188;
              afVar12 = ___xmm_3f80000000000000000000003f800000;
              ___xmm_3f80000000000000000000003f800000 = afVar11[0];
              _UNK_15076b184 = afVar11[1];
              local_818.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_818.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar13[0];
              _UNK_15076b18c = afVar13[1];
              local_818.M.M[1][0] = _UNK_15076b188;
              local_818.M.M[1][1] = _UNK_15076b18c;
              uVar37 = *(undefined8 *)&(pFVar28->AbsolutePosition).field0_0x0._s_0.Y;
              uVar5 = *(undefined8 *)&(pFVar28->Position).field0_0x0._s_0.Y;
              uVar6 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[0] + 1);
              uVar7 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[1] + 1);
              local_970 = *(undefined4 *)&pFVar28->Size;
              uStack_96c = *(undefined4 *)&(pFVar28->Size).field_0x4;
              fVar56 = pFVar28->Scale;
              fStack_964 = (pFVar28->AbsolutePosition).field0_0x0._s_0.X;
              TVar8 = (pFVar28->AbsolutePosition).field0_0x0._s_0;
              fStack_960 = (float)uVar37;
              uStack_95c = (undefined4)((ulonglong)uVar37 >> 0x20);
              uStack_958 = (undefined4)uVar5;
              TStack_954.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
              uVar37 = *(undefined8 *)&(pFVar28->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
              ;
              TStack_954.Trans.field0_0x0._s_0.Y = (float)uVar37;
              uStack_93c = (undefined4)((ulonglong)uVar37 >> 0x20);
              TStack_954.M.M[0][1] = (float)uVar6;
              TStack_954.M.M[1][0] = (float)((ulonglong)uVar6 >> 0x20);
              TStack_954.M.M[1][1] = (float)uVar7;
              TStack_954.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar7 >> 0x20);
              fStack_9f4 = (float)(*(uint *)(lVar35 + 0xd4) ^ uVar10);
              local_9f8 = (float)(*(uint *)(lVar35 + 0xd0) ^ uVar10);
              local_97c = CONCAT44(fStack_9f4,local_9f8);
              local_a70._0_4_ = TVar8.X;
              local_a28 = local_9f8 + (float)local_a70;
              local_a70._4_4_ = TVar8.Y;
              fStack_a24 = fStack_9f4 + local_a70._4_4_;
              ___xmm_3f80000000000000000000003f800000 = afVar12;
              _UNK_15076b188 = afVar14;
              local_a70 = local_97c;
              fStack_968 = fVar56;
              local_818.Trans.field0_0x0._s_0.X = local_9f8;
              local_818.Trans.field0_0x0._s_0.Y = fStack_9f4;
              Concatenate<TTransform2<float>_>(&local_7e0,&TStack_954,&local_818);
              TStack_954.M.M[0][0] = local_7e0.M.M[0][0];
              TStack_954.M.M[0][1] = local_7e0.M.M[0][1];
              TStack_954.M.M[1][0] = local_7e0.M.M[1][0];
              TStack_954.M.M[1][1] = local_7e0.M.M[1][1];
              fStack_964 = local_a28;
              fStack_960 = fStack_a24;
              local_a30 = CONCAT44(uStack_96c,local_970);
              local_9e8 = local_970;
              local_9dc = uStack_96c;
              TStack_954.Trans.field0_0x0._s_0.X = local_7e0.Trans.field0_0x0._0_4_;
              TStack_954.Trans.field0_0x0._s_0.Y = local_7e0.Trans.field0_0x0._4_4_;
              local_9f0 = (TVector2<float>_u_0)0x0;
              local_9e4 = 0;
              fStack_968 = fVar56;
              pFVar29 = TransformRect<TTransform2<float>_>
                                  (&local_758,&TStack_954,(FSlateRotatedRect *)&local_9f0._s_0);
              fVar48 = (pFVar29->ExtentY).field0_0x0._s_0.X;
              fVar50 = (pFVar29->ExtentY).field0_0x0._s_0.Y;
              fVar51 = (pFVar29->TopLeft).field0_0x0._s_0.X;
              fVar52 = (pFVar29->TopLeft).field0_0x0._s_0.Y;
              fVar53 = fVar48 + fVar51;
              local_798 = (pFVar29->TopLeft).field0_0x0._s_0;
              fVar54 = fVar50 + fVar52;
              fVar51 = fVar51 + (pFVar29->ExtentX).field0_0x0._s_0.X;
              fVar52 = fVar52 + (pFVar29->ExtentX).field0_0x0._s_0.Y;
              fVar56 = fVar53;
              if (fVar51 <= fVar53) {
                fVar56 = fVar51;
              }
              fVar48 = fVar48 + fVar51;
              fVar55 = fVar54;
              if (fVar52 <= fVar54) {
                fVar55 = fVar52;
              }
              fVar50 = fVar50 + fVar52;
              if (fVar48 <= fVar56) {
                fVar56 = fVar48;
              }
              if (fVar50 <= fVar55) {
                fVar55 = fVar50;
              }
              if (local_798.X <= fVar56) {
                fVar56 = local_798.X;
              }
              if (local_798.Y <= fVar55) {
                fVar55 = local_798.Y;
              }
              if (fVar53 <= fVar51) {
                fVar53 = fVar51;
              }
              if (fVar54 <= fVar52) {
                fVar54 = fVar52;
              }
              if (fVar53 <= fVar48) {
                fVar53 = fVar48;
              }
              if (fVar54 <= fVar50) {
                fVar54 = fVar50;
              }
              if (fVar53 <= local_798.X) {
                fVar53 = local_798.X;
              }
              if (fVar54 <= local_798.Y) {
                fVar54 = local_798.Y;
              }
              if (((fVar56 + fVar49 <= fVar46) || (fVar53 < local_a38->Left)) ||
                 ((local_a38->Right <= fVar56 && fVar56 != local_a38->Right ||
                  ((fVar54 < local_a38->Top ||
                   (local_a38->Bottom <= fVar55 && fVar55 != local_a38->Bottom)))))) {
                local_858.TextData.Reference =
                     FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference,
                             local_9c0);
                }
                local_858.Flags = FNavigationMethod::FDebuggingText::DoesNotIntersect.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_858;
                pTVar33 = &local_848;
                local_848.Object = pSVar43;
                local_848.SharedReferenceCount.ReferenceController = pTVar30;
              }
              else if ((local_a58 == (SWidget *)0x0) || (fVar56 < fVar47 + fVar49)) {
                uVar40 = uVar41;
                if (pFVar16->BoundaryRule == Escape) {
LAB_1424e0ce9:
                  bVar19 = false;
                }
                else {
                  local_9a8 = (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  local_ad8 = uVar41 | 1;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_9a8 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_9a8->SharedReferenceCount =
                         (atomic<int>)((int)local_9a8->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  uVar40 = local_ad8;
                  if (pSVar2 == (SWidget *)0x0) goto LAB_1424e0ce9;
                  local_9bc._12_8_ =
                       (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  uVar40 = uVar41 | 3;
                  this_00 = *(FHittestGrid **)&this->field_0x8;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if ((TReferenceControllerBase<1> *)local_9bc._12_8_ !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    ((TReferenceControllerBase<1> *)local_9bc._12_8_)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)((TReferenceControllerBase<1> *)local_9bc._12_8_)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_ad8 = uVar40;
                  bVar19 = FHittestGrid::IsDescendantOf(this_00,pSVar2,pFVar27);
                  if (bVar19) goto LAB_1424e0ce9;
                  bVar19 = true;
                }
                if ((uVar40 & 2) != 0) {
                  uVar40 = uVar40 & 0xfffffffd;
                  local_ad8 = uVar40;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_9bc._12_8_);
                }
                uVar41 = uVar40;
                if ((uVar40 & 1) != 0) {
                  uVar41 = uVar40 & 0xfffffffe;
                  local_ad8 = uVar41;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_9a8);
                }
                if (bVar19) {
                  local_908.TextData.Reference =
                       FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::NotADescendant.TextData.
                                  Reference + 8))
                              (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference,
                               local_9d0);
                  }
                  local_908.Flags = FNavigationMethod::FDebuggingText::NotADescendant.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_908;
                  pTVar33 = &local_8f8;
                  local_8f8.Object = pSVar43;
                  local_8f8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else if (pSVar43->EnabledStateAttribute ==
                         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                         0x0) {
                  local_8e8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::Disabled.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::Disabled.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::Disabled.TextData.Reference + 8
                                ))(FNavigationMethod::FDebuggingText::Disabled.TextData.Reference,
                                   local_9cc);
                  }
                  local_8e8.Flags = FNavigationMethod::FDebuggingText::Disabled.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8e8;
                  pTVar33 = &local_8d8;
                  local_8d8.Object = pSVar43;
                  local_8d8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else {
                  cVar20 = (**(code **)(pSVar43->_padding_ + 0x198))(pSVar43);
                  if (cVar20 != '\0') {
                    if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
                      paVar45 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar45 = &pTVar30->SharedReferenceCount;
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      local_ac0 = pTVar30;
                    }
                    uVar41 = ((uint)((ulonglong)pSVar43 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)pSVar43 >> 4)) * -0x7a143595;
                    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
                    local_8a8.Object = pSVar43;
                    local_8a8.SharedReferenceCount.ReferenceController = pTVar30;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    iVar25 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                       ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                                         *)&this->field_0x18,uVar41 >> 0x10 ^ uVar41,&local_8a8);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    if (iVar25 == -1) {
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uVar58,uVar57);
                      uStack_870._0_4_ = SUB84(pTVar30,0);
                      uVar57 = (undefined4)uStack_870;
                      uStack_870._4_4_ = (undefined4)((ulonglong)pTVar30 >> 0x20);
                      uVar58 = uStack_870._4_4_;
                      local_aa8 = pSVar43;
                      pTStack_aa0 = pTVar30;
                      local_878 = pSVar43;
                      uStack_870 = pTVar30;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar32);
                      local_868.TextData.Reference =
                           FNavigationMethod::FDebuggingText::Valid.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::Valid.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::Valid.TextData.Reference +
                                    8))(FNavigationMethod::FDebuggingText::Valid.TextData.Reference,
                                        local_9bc + 4);
                      }
                      local_868.Flags = FNavigationMethod::FDebuggingText::Valid.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar30->SharedReferenceCount =
                             (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      local_838.Object = pSVar43;
                      local_838.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_838,&local_868);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ac0;
                      local_a58 = pSVar43;
                      uVar41 = local_ad8;
                    }
                    else {
                      local_898.TextData.Reference =
                           FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                      Reference + 8))
                                  (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                   Reference,local_9c4);
                      }
                      local_898.Flags = FNavigationMethod::FDebuggingText::ParentDisabled.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      local_888.Object = pSVar43;
                      local_888.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_888,&local_898);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ac0;
                      fVar56 = fVar47;
                      uVar41 = local_ad8;
                    }
                    goto LAB_1424e1034;
                  }
                  local_8c8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                       Reference;
                  if (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                      Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                                  TextData.Reference + 8))
                              (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                               TextData.Reference,local_9c8);
                  }
                  local_8c8.Flags =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8c8;
                  pTVar33 = &local_8b8;
                  local_8b8.Object = pSVar43;
                  local_8b8.SharedReferenceCount.ReferenceController = pTVar30;
                }
              }
              else {
                local_928.TextData.Reference =
                     FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                             Reference,local_9d4);
                }
                local_928.Flags = FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_928;
                pTVar33 = &local_918;
                local_918.Object = pSVar43;
                local_918.SharedReferenceCount.ReferenceController = pTVar30;
              }
            }
            else {
              local_828.TextData.Reference =
                   FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference;
              if (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                  != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData
                              .Reference + 8))
                          (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.
                           Reference,local_9d8);
              }
              local_828.Flags = FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.Flags;
              if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar30->SharedReferenceCount =
                     (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar38 = &local_828;
              pTVar33 = &local_938;
              local_938.Object = pSVar43;
              local_938.SharedReferenceCount.ReferenceController = pTVar30;
            }
            FNavigationMethod::AddDebugIntermediateResult((FNavigationMethod *)this,pTVar33,pFVar38)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            fVar56 = fVar47;
          }
LAB_1424e1034:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          local_a88 = local_a88 - 1;
          local_a20 = local_a20 + -1;
          lVar35 = local_a18 + -0x10;
          fVar47 = fVar56;
        } while (-1 < (int)local_a88);
        iVar21 = (int)local_a98;
        piVar44 = local_998;
        iVar25 = local_ab8;
        iVar39 = local_a98._4_4_;
        local_a18 = lVar35;
      }
      if (local_740.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
      }
      if (iVar25 == 0) {
        iVar39 = iVar21;
      }
      iVar39 = iVar39 + 1;
    }
    if (local_a58 != (SWidget *)0x0) {
      local_768 = local_a38->Left;
      fStack_764 = local_a38->Top;
      fStack_760 = local_a38->Right;
      fStack_75c = local_a38->Bottom;
      pSVar2 = pSVar43;
      if (fVar56 + fVar49 <= fStack_760) break;
      EVar1 = local_a48->BoundaryRule;
      if (EVar1 == Explicit) {
        local_ad0->Object = (local_a48->FocusRecipient).Object;
        pTVar30 = (local_a48->FocusRecipient).SharedReferenceCount.ReferenceController;
        (local_ad0->SharedReferenceCount).ReferenceController = pTVar30;
        pTVar32 = pTStack_aa0;
        if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1424e13ba;
      }
      if (EVar1 == Wrap) {
        local_a78 = (local_a60->Right - local_a60->Left) * __real_3f000000 + local_a60->Left;
        fStack_a74 = (local_a60->Bottom - local_a60->Top) * __real_3f000000 + local_a60->Top;
        local_7e8 = CONCAT44(fStack_a74,local_a78);
        if ((1 < local_ac8) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                ,0x4b0,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        break;
      }
      if (EVar1 != Stop) {
        if ((EVar1 != Custom) && (EVar1 != CustomBoundary)) break;
        bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a48->FocusDelegate);
        if (bVar18) goto LAB_1424e1328;
      }
      local_ad0->Object = (SWidget *)0x0;
      (local_ad0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar32 = pTStack_aa0;
      goto LAB_1424e13ba;
    }
    if ((bVar18) && (local_a40 == local_a84)) {
LAB_1424e1300:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_aa0);
LAB_1424e1309:
      local_ad0->Object = (SWidget *)0x0;
      (local_ad0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      return local_ad0;
    }
    uVar42 = (ulonglong)(int)local_ac8;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar25 = local_ae0._4_4_;
    if (uVar42 == 0) {
      iVar25 = (int)local_ae0;
    }
    if (iVar25 < 0) {
LAB_1424e118d:
      pFVar36 = local_a48;
      if (local_a48->BoundaryRule != Wrap) {
        if (local_a48->BoundaryRule == CustomBoundary) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &local_a48->FocusDelegate,&local_7c8);
          if (((*(int *)&(pFVar36->FocusDelegate).field_0x10 != 0) &&
              (plVar3 = *(longlong **)&(pFVar36->FocusDelegate).field_0x8, plVar3 != (longlong *)0x0
              )) && (cVar20 = (**(code **)(*plVar3 + 0x38))(), cVar20 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_7c8);
LAB_1424e1328:
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::Execute(&pFVar36->FocusDelegate,local_ad0,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_aa0);
            return local_ad0;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_7c8);
        }
        iVar25 = local_a68._4_4_;
        goto LAB_1424e12f2;
      }
      if (bVar18) goto LAB_1424e1300;
      fVar46 = local_a38->Left;
      local_a10 = (local_a60->Right - local_a60->Left) * fVar47 + local_a60->Left;
      fStack_a0c = (local_a60->Bottom - local_a60->Top) * fVar47 + local_a60->Top;
      local_a08 = CONCAT44(fStack_a0c,local_a10);
      if ((1 < uVar42) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      lVar35 = *(longlong *)&this->field_0x8;
      iVar25 = local_a68._4_4_;
      *(float *)((longlong)&local_a08 + uVar42 * 4) = fVar46;
      fStack_a74 = (float)(*(int *)(lVar35 + 0xc4) + -1);
      local_a00 = local_a08;
      uVar5 = local_a00;
      local_a00._4_4_ = (float)((ulonglong)local_a08 >> 0x20);
      bVar18 = true;
      local_a00._0_4_ = (float)local_a08;
      fVar48 = (float)((int)ROUND((local_a00._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                                  local_a00._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y) -
                                  fVar47) >> 1);
      fVar56 = 0.0;
      if (0 < (int)fVar48) {
        fVar56 = fVar48;
      }
      local_a78 = (float)(*(int *)(lVar35 + 0xc0) + -1);
      fVar48 = (float)((int)ROUND(((float)local_a00 / FHittestGrid::CellSize.field0_0x0._s_0.X +
                                  (float)local_a00 / FHittestGrid::CellSize.field0_0x0._s_0.X) -
                                  fVar47) >> 1);
      fVar47 = 0.0;
      if (0 < (int)fVar48) {
        fVar47 = fVar48;
      }
      if ((int)fVar47 < (int)local_a78) {
        local_a78 = fVar47;
      }
      if ((int)fVar56 < (int)fStack_a74) {
        fStack_a74 = fVar56;
      }
      local_ae0 = CONCAT44(fStack_a74,local_a78);
      local_a00 = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_aa0);
    }
    else {
      if (uVar42 < 2) {
LAB_1424e1147:
        if (1 < (longlong)uVar42) goto LAB_1424e114d;
      }
      else {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        if (-1 < (longlong)uVar42) goto LAB_1424e1147;
LAB_1424e114d:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
      }
      iVar39 = local_a68._4_4_;
      if (uVar42 == 0) {
        iVar39 = (int)uVar37;
      }
      iVar25 = local_a68._4_4_;
      if (iVar39 <= *local_988) goto LAB_1424e118d;
LAB_1424e12f2:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_aa0);
    }
  } while( true );
  while (pSVar2 != (SWidget *)0x0) {
    if (pSVar2->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->field_0x18,(TSharedPtr<SWidget,1> *)local_9bc,(bool *)&local_aa8);
      local_7a8.Left = pFVar17->Left;
      local_7a8.Top = pFVar17->Top;
      local_7a8.Right = pFVar17->Right;
      local_7a8.Bottom = pFVar17->Bottom;
      local_7f8.Left = pFVar15->Left;
      local_7f8.Top = pFVar15->Top;
      local_7f8.Right = pFVar15->Right;
      local_7f8.Bottom = pFVar15->Bottom;
      FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_4>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_5>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_6>_>
                (this,local_ad0,&local_7f8,&local_7a8,uVar40,local_a7c,param_5,pFVar36,param_7,
                 param_8,param_9,local_a80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_aa0);
      return local_ad0;
    }
    pTVar30 = (pSVar2->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar34 = (SWidget *)0x0;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar30->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424e1515;
        }
        LOCK();
        aVar24 = pTVar30->SharedReferenceCount;
        bVar18 = aVar9 == aVar24;
        if (bVar18) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar24 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar24;
      } while (!bVar18);
      pSVar34 = (pSVar2->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
    pSVar2 = pSVar34;
  }
LAB_1424e1515:
  local_ad0->Object = pSVar43;
  (local_ad0->SharedReferenceCount).ReferenceController = pTStack_aa0;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
LAB_1424e13ba:
  pTVar26 = local_ad0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  return pTVar26;
}

// FindFocusableWidget<`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_4>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_5>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_6>_> @ 1424e15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::
FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_4>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_5>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_6>_>
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FSlateRect *param_1,
          FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_4> param_7,<lambda_5> param_8,<lambda_6> param_9,
          int param_10,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_11,
          TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
          *param_12)

{
  undefined8 uVar1;
  EUINavigationRule EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  float fVar12;
  uint uVar13;
  float fVar14;
  float afVar15 [2];
  float afVar16 [2];
  float afVar17 [2];
  float afVar18 [2];
  TRefCountPtr<ITextData> TVar19;
  FSlateRect *pFVar20;
  FSlateRect *pFVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  atomic<int> aVar28;
  TSharedPtr<SWidget,1> *pTVar29;
  FWidgetData *pFVar30;
  FGeometry *pFVar31;
  FSlateRotatedRect *pFVar32;
  int *piVar33;
  TIntPoint<int> *pTVar34;
  uint uVar35;
  TVector2<float>_u_0_s_0 TVar36;
  TReferenceControllerBase<1> *pTVar37;
  ForElementType<FHittestGrid::FWidgetIndex> FVar38;
  int iVar39;
  longlong lVar40;
  SWidget *pSVar41;
  FNavigationReply *pFVar42;
  int iVar43;
  ulonglong uVar44;
  SWidget *pSVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined1 auStackY_a98 [32];
  undefined8 local_a20;
  uint local_a18;
  TSharedPtr<SWidget,1> *local_a10;
  undefined8 local_a08;
  TVector2<float>_u_0_s_0 local_a00;
  int local_9f8;
  uint local_9f4;
  SWidget *local_9e8;
  TReferenceControllerBase<1> *pTStack_9e0;
  TReferenceControllerBase<1> *local_9d8;
  int local_9d0;
  int local_9cc;
  uint local_9c8;
  int local_9c4;
  int local_9c0;
  int local_9bc;
  FSlateRect *local_9b8;
  float local_9b0;
  float fStack_9ac;
  TReferenceControllerBase<1> *local_9a8;
  SWidget *local_998;
  FNavigationReply *local_988;
  int local_980;
  FHittestGrid *local_978;
  SWidget *local_970;
  TReferenceControllerBase<1> *local_968;
  FSlateRect *local_960;
  undefined8 local_958;
  float local_950;
  float fStack_94c;
  TReferenceControllerBase<1> *local_948;
  TReferenceControllerBase<1> *local_940;
  TReferenceControllerBase<1> *local_938;
  TReferenceControllerBase<1> *local_930;
  float local_928;
  float fStack_924;
  undefined8 local_920;
  undefined8 local_918;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  *local_910;
  TReferenceControllerBase<1> *local_908;
  float local_900;
  float fStack_8fc;
  TVector2<float>_u_0 local_8f8;
  undefined4 local_8f0;
  undefined8 local_8ec;
  undefined4 local_8e4;
  undefined1 local_8e0 [4];
  undefined1 local_8dc [4];
  undefined1 local_8d8 [4];
  undefined1 local_8d4 [4];
  undefined1 local_8d0 [4];
  undefined1 local_8cc [4];
  undefined1 local_8c8 [4];
  undefined1 local_8c4 [4];
  undefined1 local_8c0 [4];
  undefined1 local_8bc [4];
  undefined1 local_8b8 [4];
  undefined1 local_8b4 [4];
  TSharedPtr<SWidget,1> local_8b0;
  TReferenceControllerBase<1> *local_8a0;
  TReferenceControllerBase<1> *local_898;
  undefined8 local_884;
  undefined1 local_87c [4];
  undefined1 local_878 [8];
  undefined4 local_870;
  undefined4 uStack_86c;
  float fStack_868;
  float fStack_864;
  float fStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  TTransform2<float> TStack_854;
  undefined4 uStack_83c;
  TSharedPtr<SWidget_const_,1> local_838;
  SWidget *local_828;
  undefined8 uStack_820;
  TTransform2<float> local_818;
  FSlateRect local_7f8;
  FSlateRect local_7e8;
  undefined8 local_7d8;
  TTransform2<float> local_7d0;
  FReadAccessScope local_7b8;
  TVector2<float>_u_0_s_0 local_7a0;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  fVar12 = __real_3f000000;
  fVar49 = __real_3f800000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  uVar44 = (ulonglong)param_3;
  local_9bc = param_4;
  local_910 = param_12;
  iVar43 = (this->NumCells).field0_0x0._s_0.Y + -1;
  local_988 = param_6;
  local_9f4 = param_3;
  local_9c0 = param_10;
  local_a18 = 0;
  iVar25 = (int)ROUND(((param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.Y +
                      __real_3f800000 / CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar27 = 0;
  if (0 < iVar25) {
    iVar27 = iVar25;
  }
  iVar25 = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar26 = (int)ROUND(((param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.X +
                      __real_3f800000 / CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar39 = 0;
  if (0 < iVar26) {
    iVar39 = iVar26;
  }
  if (iVar39 < iVar25) {
    iVar25 = iVar39;
  }
  if (iVar27 < iVar43) {
    iVar43 = iVar27;
  }
  local_a20 = CONCAT44(iVar43,iVar25);
  local_a10 = __return_storage_ptr__;
  local_9b8 = param_1;
  local_978 = this;
  local_960 = param_2;
  if ((1 < (uint)param_3) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar29;
  }
  afVar17 = _UNK_15076b188;
  afVar15 = ___xmm_3f80000000000000000000003f800000;
  fVar14 = __real_3dcccccd;
  uVar13 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fStack_774 = param_1->Top;
  fVar56 = param_1->Right;
  fStack_76c = param_1->Bottom;
  pTVar34 = &this->NumCells;
  local_9cc = (pTVar34->field0_0x0)._s_0.X;
  local_980 = local_a20._4_4_;
  if (param_3 == 0) {
    local_980 = (int)local_a20;
  }
  if ((local_9cc < 1) || (iVar43 = (this->NumCells).field0_0x0._s_0.Y, iVar43 < 1)) {
    local_a10->Object = (SWidget *)0x0;
    (local_a10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a10;
  }
  if (param_3 == 0) {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.Y;
    local_9cc = iVar43 + -1;
    local_9f8 = 1;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Bottom;
    iVar27 = (int)ROUND(fVar49 * param_2->Top - fVar12) >> 1;
    iVar43 = 0;
    if (0 < iVar27) {
      iVar43 = iVar27;
    }
    local_9d0 = local_9cc;
    if (iVar43 < local_9cc) {
      local_9d0 = iVar43;
    }
  }
  else {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.X;
    local_9cc = local_9cc + -1;
    local_9f8 = 0;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Right;
    iVar27 = (int)ROUND(fVar49 * param_2->Left - fVar12) >> 1;
    iVar43 = 0;
    if (0 < iVar27) {
      iVar43 = iVar27;
    }
    local_9d0 = local_9cc;
    if (iVar43 < local_9cc) {
      local_9d0 = iVar43;
    }
  }
  iVar27 = (int)ROUND(fVar50 - fVar12) >> 1;
  iVar43 = 0;
  if (0 < iVar27) {
    iVar43 = iVar27;
  }
  if (iVar43 < local_9cc) {
    local_9cc = iVar43;
  }
  bVar22 = false;
  fStack_770 = fVar56;
LAB_1424e18c5:
  iVar43 = local_9f8;
  fVar49 = __real_bf800000;
  if ((1 < uVar44) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar29;
  }
  iVar27 = local_a20._4_4_;
  if (uVar44 == 0) {
    iVar27 = (int)local_a20;
  }
  if (iVar27 < 0) goto LAB_1424e288a;
  if ((1 < uVar44) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x144,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar29;
  }
  if (uVar44 == 0) {
    iVar27 = (pTVar34->field0_0x0)._s_0.X;
    iVar25 = (int)local_a20;
  }
  else {
    iVar27 = (pTVar34->field0_0x0)._s_0.Y;
    if ((1 < uVar44) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar29;
    }
    iVar25 = local_a20._4_4_;
  }
  if (iVar27 <= iVar25) goto LAB_1424e288a;
  local_a08 = local_a20;
  if ((1 < uVar44) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar29;
  }
  if (uVar44 == 0) {
    local_9c4 = (int)local_a20;
    iVar27 = (int)local_a20;
  }
  else {
    local_9c4 = local_a20._4_4_;
    if ((1 < uVar44) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar29;
    }
    iVar27 = local_a20._4_4_;
  }
  uVar54 = 0;
  uVar55 = 0;
  local_9e8 = (SWidget *)0x0;
  pTStack_9e0 = (TReferenceControllerBase<1> *)0x0;
  local_998 = (SWidget *)0x0;
  piVar33 = (int *)((longlong)&local_a20 + 4);
  if (uVar44 == 0) {
    piVar33 = (int *)&local_a20;
  }
  *piVar33 = local_9bc + iVar27;
  piVar33 = (int *)((longlong)&local_a08 + 4);
  iVar27 = local_9d0;
  if (iVar43 == 0) {
    piVar33 = (int *)&local_a08;
  }
  while( true ) {
    pFVar21 = local_960;
    pFVar42 = local_988;
    pSVar45 = local_998;
    pFVar20 = local_9b8;
    *piVar33 = iVar27;
    iVar27 = local_a08._4_4_;
    iVar39 = (int)local_a08;
    iVar25 = local_a08._4_4_;
    if (iVar43 == 0) {
      iVar25 = iVar39;
    }
    if (local_9cc < iVar25) break;
    local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
    local_740.ArrayNum = 0;
    local_740.ArrayMax = 100;
    GetCollapsedWidgets(this,&local_740,iVar39,local_a08._4_4_);
    local_9c8 = local_740.ArrayNum - 1;
    if (-1 < (int)local_9c8) {
      do {
        uVar44 = (ulonglong)local_9c8;
        uVar35 = 0;
        if ((int)local_9c8 < local_740.ArrayNum) {
          uVar35 = ~local_9c8 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
          return pTVar29;
        }
        FVar38 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
        if (local_740.AllocatorInstance.SecondaryData !=
            (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
          FVar38 = local_740.AllocatorInstance.SecondaryData;
        }
        pFVar30 = FWidgetIndex::GetWidgetData((FWidgetIndex *)(uVar44 * 0x10 + (longlong)FVar38));
        pSVar45 = (SWidget *)0x0;
        pTVar3 = (pFVar30->WeakWidget).WeakReferenceCount.ReferenceController;
        pSVar5 = local_998;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar11 = pTVar3->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              TVar36 = (TVector2<float>_u_0_s_0)(TReferenceControllerBase<1> *)0x0;
              goto LAB_1424e25b4;
            }
            LOCK();
            aVar28 = pTVar3->SharedReferenceCount;
            bVar23 = aVar11 == aVar28;
            if (bVar23) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar28 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar28;
          } while (!bVar23);
          pSVar45 = (pFVar30->WeakWidget).Object;
        }
        TVar36 = (TVector2<float>_u_0_s_0)pTVar3;
        local_a00 = (TVector2<float>_u_0_s_0)pTVar3;
        local_9d8 = pTVar3;
        local_9a8 = pTVar3;
        local_970 = pSVar45;
        local_968 = pTVar3;
        local_948 = pTVar3;
        local_940 = pTVar3;
        local_938 = pTVar3;
        local_930 = pTVar3;
        local_908 = pTVar3;
        if (pSVar45 != (SWidget *)0x0) {
          if (((local_9c0 == -1) || (pFVar30->UserIndex == -1)) || (local_9c0 == pFVar30->UserIndex)
             ) {
            pFVar31 = SWidget::GetPaintSpaceGeometry(pSVar45);
            afVar18 = _UNK_15076b188;
            afVar16 = ___xmm_3f80000000000000000000003f800000;
            ___xmm_3f80000000000000000000003f800000 = afVar15[0];
            _UNK_15076b184 = afVar15[1];
            local_818.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_818.M.M[0][1] = _UNK_15076b184;
            _UNK_15076b188 = afVar17[0];
            _UNK_15076b18c = afVar17[1];
            local_818.M.M[1][0] = _UNK_15076b188;
            local_818.M.M[1][1] = _UNK_15076b18c;
            uVar1 = *(undefined8 *)&(pFVar31->AbsolutePosition).field0_0x0._s_0.Y;
            uVar8 = *(undefined8 *)&(pFVar31->Position).field0_0x0._s_0.Y;
            local_870 = *(undefined4 *)&pFVar31->Size;
            uStack_86c = *(undefined4 *)&(pFVar31->Size).field_0x4;
            fVar50 = pFVar31->Scale;
            fStack_864 = (pFVar31->AbsolutePosition).field0_0x0._s_0.X;
            local_a00 = (pFVar31->AbsolutePosition).field0_0x0._s_0;
            uVar9 = *(undefined8 *)((pFVar31->AccumulatedRenderTransform).M.M[0] + 1);
            uVar10 = *(undefined8 *)((pFVar31->AccumulatedRenderTransform).M.M[1] + 1);
            fStack_860 = (float)uVar1;
            uStack_85c = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_858 = (undefined4)uVar8;
            TStack_854.M.M[0][0] = (float)((ulonglong)uVar8 >> 0x20);
            uVar1 = *(undefined8 *)&(pFVar31->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
            TStack_854.M.M[0][1] = (float)uVar9;
            TStack_854.M.M[1][0] = (float)((ulonglong)uVar9 >> 0x20);
            TStack_854.M.M[1][1] = (float)uVar10;
            TStack_854.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar10 >> 0x20);
            TStack_854.Trans.field0_0x0._s_0.Y = (float)uVar1;
            uStack_83c = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_900 = (float)((uint)(local_978->GridWindowOrigin).field0_0x0._s_0.X ^ uVar13);
            fStack_8fc = (float)((uint)(local_978->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar13);
            local_958 = CONCAT44(fStack_8fc,local_900);
            local_950 = local_900 + local_a00.X;
            fStack_94c = fStack_8fc + local_a00.Y;
            ___xmm_3f80000000000000000000003f800000 = afVar16;
            _UNK_15076b188 = afVar18;
            local_884 = local_958;
            fStack_868 = fVar50;
            local_818.Trans.field0_0x0._s_0.X = local_900;
            local_818.Trans.field0_0x0._s_0.Y = fStack_8fc;
            Concatenate<TTransform2<float>_>(&local_7d0,&TStack_854,&local_818);
            TStack_854.M.M[0][0] = local_7d0.M.M[0][0];
            TStack_854.M.M[0][1] = local_7d0.M.M[0][1];
            TStack_854.M.M[1][0] = local_7d0.M.M[1][0];
            TStack_854.M.M[1][1] = local_7d0.M.M[1][1];
            fStack_864 = local_950;
            fStack_860 = fStack_94c;
            local_a00 = (TVector2<float>_u_0_s_0)CONCAT44(uStack_86c,local_870);
            local_8f0 = local_870;
            local_8e4 = uStack_86c;
            TStack_854.Trans.field0_0x0._s_0.X = local_7d0.Trans.field0_0x0._0_4_;
            TStack_854.Trans.field0_0x0._s_0.Y = local_7d0.Trans.field0_0x0._4_4_;
            local_8f8 = (TVector2<float>_u_0)0x0;
            local_8ec = 0;
            fStack_868 = fVar50;
            pFVar32 = TransformRect<TTransform2<float>_>
                                (&local_758,&TStack_854,(FSlateRotatedRect *)&local_8f8._s_0);
            fVar50 = (pFVar32->TopLeft).field0_0x0._s_0.X;
            fVar52 = (pFVar32->ExtentY).field0_0x0._s_0.X;
            fVar47 = (pFVar32->TopLeft).field0_0x0._s_0.Y;
            fVar51 = fVar50 + (pFVar32->ExtentX).field0_0x0._s_0.X;
            local_7a0 = (pFVar32->TopLeft).field0_0x0._s_0;
            fVar50 = fVar52 + fVar50;
            fVar46 = (pFVar32->ExtentY).field0_0x0._s_0.Y;
            fVar48 = fVar47 + (pFVar32->ExtentX).field0_0x0._s_0.Y;
            fVar47 = fVar46 + fVar47;
            fVar52 = fVar51 + fVar52;
            fVar53 = fVar50;
            if (fVar51 <= fVar50) {
              fVar53 = fVar51;
            }
            fVar46 = fVar48 + fVar46;
            if (fVar52 <= fVar53) {
              fVar53 = fVar52;
            }
            if (local_7a0.X <= fVar53) {
              fVar53 = local_7a0.X;
            }
            pSVar5 = local_998;
            if (fVar56 < fVar53 + fVar14) {
              if (fVar50 <= fVar51) {
                fVar50 = fVar51;
              }
              if (fVar50 <= fVar52) {
                fVar50 = fVar52;
              }
              if (fVar50 <= local_7a0.X) {
                fVar50 = local_7a0.X;
              }
              if ((local_960->Left <= fVar50) &&
                 (fVar53 < local_960->Right || fVar53 == local_960->Right)) {
                fVar50 = fVar47;
                if (fVar47 <= fVar48) {
                  fVar50 = fVar48;
                }
                if (fVar50 <= fVar46) {
                  fVar50 = fVar46;
                }
                if (fVar50 <= local_7a0.Y) {
                  fVar50 = local_7a0.Y;
                }
                if (local_960->Top <= fVar50) {
                  if (fVar48 <= fVar47) {
                    fVar47 = fVar48;
                  }
                  if (fVar46 <= fVar47) {
                    fVar47 = fVar46;
                  }
                  if (local_7a0.Y <= fVar47) {
                    fVar47 = local_7a0.Y;
                  }
                  if (fVar47 < local_960->Bottom || fVar47 == local_960->Bottom) {
                    if ((local_998 != (SWidget *)0x0) && (fVar49 + fVar14 <= fVar53)) {
                      TVar36 = (TVector2<float>_u_0_s_0)local_948;
                      if (param_11 !=
                          (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                           *)0x0) {
                        iVar43 = param_11->ArrayNum;
                        if (iVar43 == param_11->ArrayMax) {
                          iVar43 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax
                                             );
                        }
                        pFVar4 = (param_11->AllocatorInstance).Data;
                        param_11->ArrayNum = iVar43 + 1;
                        TVar19 = HittestGridDebuggingText::PreviousWidgetIsBetter.TextData;
                        lVar40 = (longlong)iVar43 * 0x20;
                        if (HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                            (ITextData *)0x0) {
                          (**(code **)((longlong)
                                       *HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.
                                        Reference + 8))
                                    (HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.
                                     Reference,local_8dc);
                        }
                        uVar35 = HittestGridDebuggingText::PreviousWidgetIsBetter.Flags;
                        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                        }
                        else {
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                        if (TVar19.Reference == (ITextData *)0x0) {
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_948;
                          pSVar5 = local_998;
                        }
                        else {
                          (**(code **)((longlong)*TVar19.Reference + 8))(TVar19.Reference,local_8d8)
                          ;
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_948;
                          pSVar5 = local_998;
                        }
                      }
                      goto LAB_1424e25b4;
                    }
                    uVar35 = local_a18;
                    if (local_988->BoundaryRule == Escape) {
LAB_1424e1ff8:
                      local_a18 = uVar35;
                      bVar23 = false;
                    }
                    else {
                      local_898 = (local_988->EventHandler).SharedReferenceCount.ReferenceController
                      ;
                      pSVar5 = (local_988->EventHandler).Object;
                      if (local_898 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        local_898->SharedReferenceCount =
                             (atomic<int>)((int)local_898->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      uVar35 = local_a18 | 1;
                      if (pSVar5 == (SWidget *)0x0) goto LAB_1424e1ff8;
                      local_8a0 = (local_988->EventHandler).SharedReferenceCount.ReferenceController
                      ;
                      local_a18 = local_a18 | 3;
                      pSVar5 = (local_988->EventHandler).Object;
                      if (local_8a0 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        local_8a0->SharedReferenceCount =
                             (atomic<int>)((int)local_8a0->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      bVar23 = IsDescendantOf(local_978,pSVar5,pFVar30);
                      uVar35 = local_a18;
                      if (bVar23) goto LAB_1424e1ff8;
                      bVar23 = true;
                    }
                    if ((local_a18 & 2) != 0) {
                      local_a18 = local_a18 & 0xfffffffd;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(local_8a0);
                    }
                    if ((local_a18 & 1) != 0) {
                      local_a18 = local_a18 & 0xfffffffe;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(local_898);
                    }
                    pSVar5 = local_998;
                    if (bVar23) {
                      TVar36 = (TVector2<float>_u_0_s_0)local_908;
                      if (param_11 !=
                          (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                           *)0x0) {
                        iVar43 = param_11->ArrayNum;
                        if (iVar43 == param_11->ArrayMax) {
                          iVar43 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax
                                             );
                        }
                        pFVar4 = (param_11->AllocatorInstance).Data;
                        param_11->ArrayNum = iVar43 + 1;
                        TVar19 = HittestGridDebuggingText::NotADescendant.TextData;
                        lVar40 = (longlong)iVar43 * 0x20;
                        if (HittestGridDebuggingText::NotADescendant.TextData.Reference !=
                            (ITextData *)0x0) {
                          (**(code **)((longlong)
                                       *HittestGridDebuggingText::NotADescendant.TextData.Reference
                                      + 8))(HittestGridDebuggingText::NotADescendant.TextData.
                                            Reference,local_8d4);
                        }
                        uVar35 = HittestGridDebuggingText::NotADescendant.Flags;
                        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                        }
                        else {
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                        if (TVar19.Reference == (ITextData *)0x0) {
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_908;
                          pSVar5 = local_998;
                        }
                        else {
                          (**(code **)((longlong)*TVar19.Reference + 8))(TVar19.Reference,local_8d0)
                          ;
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_908;
                          pSVar5 = local_998;
                        }
                      }
                    }
                    else if (pSVar45->EnabledStateAttribute ==
                             (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                              )0x0) {
                      TVar36 = (TVector2<float>_u_0_s_0)local_940;
                      if (param_11 !=
                          (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                           *)0x0) {
                        iVar43 = param_11->ArrayNum;
                        if (iVar43 == param_11->ArrayMax) {
                          iVar43 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax
                                             );
                        }
                        pFVar4 = (param_11->AllocatorInstance).Data;
                        param_11->ArrayNum = iVar43 + 1;
                        TVar19 = HittestGridDebuggingText::Disabled.TextData;
                        lVar40 = (longlong)iVar43 * 0x20;
                        if (HittestGridDebuggingText::Disabled.TextData.Reference !=
                            (ITextData *)0x0) {
                          (**(code **)((longlong)
                                       *HittestGridDebuggingText::Disabled.TextData.Reference + 8))
                                    (HittestGridDebuggingText::Disabled.TextData.Reference,local_8cc
                                    );
                        }
                        uVar35 = HittestGridDebuggingText::Disabled.Flags;
                        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                        }
                        else {
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                          *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                          *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                        if (TVar19.Reference == (ITextData *)0x0) {
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_940;
                          pSVar5 = local_998;
                        }
                        else {
                          (**(code **)((longlong)*TVar19.Reference + 8))(TVar19.Reference,local_8c8)
                          ;
                          *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                          (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar3);
                          TVar36 = (TVector2<float>_u_0_s_0)local_940;
                          pSVar5 = local_998;
                        }
                      }
                    }
                    else {
                      cVar24 = (**(code **)(pSVar45->_padding_ + 0x198))(pSVar45);
                      if (cVar24 == '\0') {
                        TVar36 = (TVector2<float>_u_0_s_0)local_938;
                        pSVar5 = local_998;
                        if (param_11 !=
                            (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                             *)0x0) {
                          iVar43 = param_11->ArrayNum;
                          if (iVar43 == param_11->ArrayMax) {
                            iVar43 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x820,&param_11->AllocatorInstance,
                                                &param_11->ArrayMax);
                          }
                          pFVar4 = (param_11->AllocatorInstance).Data;
                          param_11->ArrayNum = iVar43 + 1;
                          TVar19 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData;
                          lVar40 = (longlong)iVar43 * 0x20;
                          if (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                              Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)
                                         *HittestGridDebuggingText::DoesNotSuportKeyboardFocus.
                                          TextData.Reference + 8))
                                      (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData
                                       .Reference,local_8c4);
                          }
                          uVar35 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                          if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                            *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                            *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                          }
                          else {
                            LOCK();
                            pTVar3->SharedReferenceCount =
                                 (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                            UNLOCK();
                            *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                            *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                            LOCK();
                            pTVar3->SharedReferenceCount =
                                 (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                            UNLOCK();
                          }
                          *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                          if (TVar19.Reference == (ITextData *)0x0) {
                            *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline(pTVar3);
                            TVar36 = (TVector2<float>_u_0_s_0)local_938;
                            pSVar5 = local_998;
                          }
                          else {
                            (**(code **)((longlong)*TVar19.Reference + 8))
                                      (TVar19.Reference,local_8c0);
                            *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                            (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline(pTVar3);
                            TVar36 = (TVector2<float>_u_0_s_0)local_938;
                            pSVar5 = local_998;
                          }
                        }
                      }
                      else {
                        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                          LOCK();
                          pTVar3->SharedReferenceCount =
                               (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                          UNLOCK();
                          local_970 = pSVar45;
                          local_968 = pTVar3;
                        }
                        uVar35 = ((uint)((ulonglong)pSVar45 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)pSVar45 >> 4)) * -0x7a143595;
                        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
                        local_838.Object = pSVar45;
                        local_838.SharedReferenceCount.ReferenceController = pTVar3;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        iVar43 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                                 ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                           (local_910,uVar35 >> 0x10 ^ uVar35,&local_838);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        if (iVar43 == -1) {
                          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                            LOCK();
                            pTVar3->SharedReferenceCount =
                                 (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                            UNLOCK();
                          }
                          pTVar37 = (TReferenceControllerBase<1> *)CONCAT44(uVar55,uVar54);
                          uStack_820._0_4_ = SUB84(pTVar3,0);
                          uVar54 = (undefined4)uStack_820;
                          uStack_820._4_4_ = (undefined4)((ulonglong)pTVar3 >> 0x20);
                          uVar55 = uStack_820._4_4_;
                          local_9e8 = pSVar45;
                          pTStack_9e0 = pTVar3;
                          local_828 = pSVar45;
                          uStack_820 = pTVar3;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline(pTVar37);
                          TVar36 = (TVector2<float>_u_0_s_0)local_9d8;
                          fVar49 = fVar53;
                          pSVar5 = pSVar45;
                          if (param_11 !=
                              (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                               *)0x0) {
                            iVar43 = param_11->ArrayNum;
                            if (iVar43 == param_11->ArrayMax) {
                              iVar43 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x820,&param_11->AllocatorInstance,
                                                  &param_11->ArrayMax);
                            }
                            pFVar4 = (param_11->AllocatorInstance).Data;
                            param_11->ArrayNum = iVar43 + 1;
                            TVar19 = HittestGridDebuggingText::Valid.TextData;
                            lVar40 = (longlong)iVar43 * 0x20;
                            if (HittestGridDebuggingText::Valid.TextData.Reference !=
                                (ITextData *)0x0) {
                              (**(code **)((longlong)
                                           *HittestGridDebuggingText::Valid.TextData.Reference + 8))
                                        (HittestGridDebuggingText::Valid.TextData.Reference,
                                         local_8b8);
                            }
                            uVar35 = HittestGridDebuggingText::Valid.Flags;
                            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                              *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                              *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                            }
                            else {
                              LOCK();
                              pTVar3->SharedReferenceCount =
                                   (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                              UNLOCK();
                              *(SWidget **)(pFVar4 + lVar40) = local_970;
                              *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = local_968;
                              LOCK();
                              pTVar3->SharedReferenceCount =
                                   (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                              UNLOCK();
                            }
                            *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                            if (TVar19.Reference == (ITextData *)0x0) {
                              *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                            }
                            else {
                              (**(code **)((longlong)*TVar19.Reference + 8))
                                        (TVar19.Reference,local_8bc);
                              *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                              (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                            }
                            SharedPointerInternals::TReferenceControllerBase<1>::
                            ReleaseSharedReferenceNoInline(pTVar3);
                            TVar36 = (TVector2<float>_u_0_s_0)local_9d8;
                          }
                        }
                        else {
                          TVar36 = (TVector2<float>_u_0_s_0)local_9a8;
                          pSVar5 = local_998;
                          if (param_11 !=
                              (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                               *)0x0) {
                            iVar43 = param_11->ArrayNum;
                            if (iVar43 == param_11->ArrayMax) {
                              iVar43 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x820,&param_11->AllocatorInstance,
                                                  &param_11->ArrayMax);
                            }
                            pFVar4 = (param_11->AllocatorInstance).Data;
                            param_11->ArrayNum = iVar43 + 1;
                            TVar19 = HittestGridDebuggingText::ParentDisabled.TextData;
                            lVar40 = (longlong)iVar43 * 0x20;
                            if (HittestGridDebuggingText::ParentDisabled.TextData.Reference !=
                                (ITextData *)0x0) {
                              (**(code **)((longlong)
                                           *HittestGridDebuggingText::ParentDisabled.TextData.
                                            Reference + 8))
                                        (HittestGridDebuggingText::ParentDisabled.TextData.Reference
                                         ,local_87c);
                            }
                            uVar35 = HittestGridDebuggingText::ParentDisabled.Flags;
                            local_9d8 = (TReferenceControllerBase<1> *)
                                        CONCAT44(local_9d8._4_4_,
                                                 HittestGridDebuggingText::ParentDisabled.Flags);
                            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                              *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                              *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
                            }
                            else {
                              LOCK();
                              pTVar3->SharedReferenceCount =
                                   (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                              UNLOCK();
                              *(SWidget **)(pFVar4 + lVar40) = local_970;
                              *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                              LOCK();
                              pTVar3->SharedReferenceCount =
                                   (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                              UNLOCK();
                            }
                            *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
                            if (TVar19.Reference == (ITextData *)0x0) {
                              *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                              SharedPointerInternals::TReferenceControllerBase<1>::
                              ReleaseSharedReferenceNoInline(pTVar3);
                              TVar36 = (TVector2<float>_u_0_s_0)local_9a8;
                              pSVar5 = local_998;
                            }
                            else {
                              (**(code **)((longlong)*TVar19.Reference + 8))
                                        (TVar19.Reference,
                                         (undefined1 *)((longlong)&local_8b0.Object + 4));
                              *(undefined4 *)(pFVar4 + lVar40 + 0x18) = local_9d8._0_4_;
                              (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
                              SharedPointerInternals::TReferenceControllerBase<1>::
                              ReleaseSharedReferenceNoInline(pTVar3);
                              TVar36 = (TVector2<float>_u_0_s_0)local_9a8;
                              pSVar5 = local_998;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1424e25b4;
                  }
                }
              }
            }
            TVar36 = (TVector2<float>_u_0_s_0)local_930;
            if (param_11 !=
                (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              iVar43 = param_11->ArrayNum;
              if (iVar43 == param_11->ArrayMax) {
                iVar43 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
              }
              pFVar4 = (param_11->AllocatorInstance).Data;
              param_11->ArrayNum = iVar43 + 1;
              TVar19 = HittestGridDebuggingText::DoesNotIntersect.TextData;
              lVar40 = (longlong)iVar43 * 0x20;
              if (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *HittestGridDebuggingText::DoesNotIntersect.TextData.Reference + 8))
                          (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference,
                           &local_8b0.SharedReferenceCount);
              }
              uVar35 = HittestGridDebuggingText::DoesNotIntersect.Flags;
              if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
              }
              else {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
                *(SWidget **)(pFVar4 + lVar40) = pSVar45;
                *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
              if (TVar19.Reference == (ITextData *)0x0) {
                *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
              }
              else {
                (**(code **)((longlong)*TVar19.Reference + 8))(TVar19.Reference,local_8b4);
                *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
                (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar36 = (TVector2<float>_u_0_s_0)local_930;
              pSVar5 = local_998;
            }
          }
          else if (param_11 !=
                   (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                    *)0x0) {
            iVar43 = param_11->ArrayNum;
            if (iVar43 == param_11->ArrayMax) {
              iVar43 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
            }
            pFVar4 = (param_11->AllocatorInstance).Data;
            param_11->ArrayNum = iVar43 + 1;
            TVar19 = HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData;
            lVar40 = (longlong)iVar43 * 0x20;
            if (HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference !=
                (ITextData *)0x0) {
              (**(code **)((longlong)
                           *HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                          + 8))(HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.
                                Reference,local_878);
            }
            uVar35 = HittestGridDebuggingText::NotCompatibleWithUserIndex.Flags;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              *(SWidget **)(pFVar4 + lVar40) = pSVar45;
              *(undefined8 *)(pFVar4 + lVar40 + 8) = 0;
            }
            else {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              *(SWidget **)(pFVar4 + lVar40) = pSVar45;
              *(TReferenceControllerBase<1> **)(pFVar4 + lVar40 + 8) = pTVar3;
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(ITextData **)(pFVar4 + lVar40 + 0x10) = TVar19.Reference;
            if (TVar19.Reference == (ITextData *)0x0) {
              *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar36 = local_a00;
              pSVar5 = local_998;
            }
            else {
              (**(code **)((longlong)*TVar19.Reference + 8))(TVar19.Reference,local_8e0);
              *(uint *)(pFVar4 + lVar40 + 0x18) = uVar35;
              (**(code **)((longlong)*TVar19.Reference + 0x10))(TVar19.Reference);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar36 = local_a00;
              pSVar5 = local_998;
            }
          }
        }
LAB_1424e25b4:
        local_998 = pSVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar36);
        local_9c8 = local_9c8 - 1;
      } while (-1 < (int)local_9c8);
      iVar39 = (int)local_a08;
      this = local_978;
      iVar43 = local_9f8;
      iVar27 = local_a08._4_4_;
    }
    if (local_740.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0
       ) {
      FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
    }
    piVar33 = (int *)((longlong)&local_a08 + 4);
    if (iVar43 == 0) {
      piVar33 = (int *)&local_a08;
      iVar27 = iVar39;
    }
    iVar27 = iVar27 + 1;
  }
  if (local_998 != (SWidget *)0x0) {
    local_768 = local_960->Left;
    fStack_764 = local_960->Top;
    fStack_760 = local_960->Right;
    fStack_75c = local_960->Bottom;
    pSVar5 = pSVar45;
    this_00 = local_910;
    if (fVar49 + fVar14 <= fStack_760) goto joined_r0x0001424e2a68;
    EVar2 = local_988->BoundaryRule;
    if (EVar2 == Explicit) {
      local_a10->Object = (local_988->FocusRecipient).Object;
      pTVar3 = (local_988->FocusRecipient).SharedReferenceCount.ReferenceController;
      (local_a10->SharedReferenceCount).ReferenceController = pTVar3;
      pTVar37 = pTStack_9e0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1424e2937;
    }
    if (EVar2 == Wrap) {
      local_9b0 = (local_9b8->Right - local_9b8->Left) * fVar12 + local_9b8->Left;
      fStack_9ac = (local_9b8->Bottom - local_9b8->Top) * fVar12 + local_9b8->Top;
      local_7d8 = CONCAT44(fStack_9ac,local_9b0);
      if ((1 < local_9f4) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), this_00 = local_910, bVar22)) {
        pcVar7 = (code *)swi(3);
        pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar29;
      }
      goto joined_r0x0001424e2a68;
    }
    if (EVar2 != Stop) {
      if ((EVar2 != Custom) && (EVar2 != CustomBoundary)) goto joined_r0x0001424e2a68;
      bVar22 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_988->FocusDelegate);
      if (bVar22) goto LAB_1424e28a8;
    }
    local_a10->Object = (SWidget *)0x0;
    (local_a10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar37 = pTStack_9e0;
    goto LAB_1424e2937;
  }
  if ((bVar22) && (local_980 == local_9c4)) {
LAB_1424e2881:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9e0)
    ;
LAB_1424e288a:
    local_a10->Object = (SWidget *)0x0;
    (local_a10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a10;
  }
  uVar44 = (ulonglong)(int)local_9f4;
  if ((1 < uVar44) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar23)) {
    pcVar7 = (code *)swi(3);
    pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar29;
  }
  iVar43 = local_a20._4_4_;
  if (uVar44 == 0) {
    iVar43 = (int)local_a20;
  }
  if (iVar43 < 0) {
LAB_1424e26fd:
    pFVar42 = local_988;
    if (local_988->BoundaryRule == Wrap) {
      if (bVar22) goto LAB_1424e2881;
      fVar56 = local_960->Left;
      local_928 = (local_9b8->Right - local_9b8->Left) * fVar12 + local_9b8->Left;
      fStack_924 = (local_9b8->Bottom - local_9b8->Top) * fVar12 + local_9b8->Top;
      local_920 = CONCAT44(fStack_924,local_928);
      if ((1 < uVar44) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar29;
      }
      pTVar34 = &this->NumCells;
      iVar43 = (pTVar34->field0_0x0)._s_0.X;
      fStack_9ac = (float)((this->NumCells).field0_0x0._s_0.Y + -1);
      *(float *)((longlong)&local_920 + uVar44 * 4) = fVar56;
      local_918 = local_920;
      uVar1 = local_918;
      local_918._4_4_ = (float)((ulonglong)local_920 >> 0x20);
      bVar22 = true;
      local_918._0_4_ = (float)local_920;
      fVar50 = (float)((int)ROUND((local_918._4_4_ / CellSize.field0_0x0._s_0.Y +
                                  local_918._4_4_ / CellSize.field0_0x0._s_0.Y) - fVar12) >> 1);
      fVar49 = 0.0;
      if (0 < (int)fVar50) {
        fVar49 = fVar50;
      }
      local_9b0 = (float)(iVar43 + -1);
      fVar52 = (float)((int)ROUND(((float)local_918 / CellSize.field0_0x0._s_0.X +
                                  (float)local_918 / CellSize.field0_0x0._s_0.X) - fVar12) >> 1);
      fVar50 = 0.0;
      if (0 < (int)fVar52) {
        fVar50 = fVar52;
      }
      if ((int)fVar50 < (int)local_9b0) {
        local_9b0 = fVar50;
      }
      if ((int)fVar49 < (int)fStack_9ac) {
        fStack_9ac = fVar49;
      }
      local_a20 = CONCAT44(fStack_9ac,local_9b0);
      local_918 = uVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9e0);
      goto LAB_1424e18c5;
    }
    if (local_988->BoundaryRule == CustomBoundary) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_988->FocusDelegate
                 ,&local_7b8);
      if (((*(int *)&(pFVar42->FocusDelegate).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(pFVar42->FocusDelegate).field_0x8, plVar6 == (longlong *)0x0))
         || (cVar24 = (**(code **)(*plVar6 + 0x38))(), cVar24 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_7b8);
        goto LAB_1424e2868;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_7b8);
LAB_1424e28a8:
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      Execute(&pFVar42->FocusDelegate,local_a10,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9e0);
      return local_a10;
    }
  }
  else {
    if ((1 < uVar44) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar29;
    }
    piVar33 = (int *)((longlong)&local_a20 + 4);
    if (uVar44 == 0) {
      piVar33 = (int *)&local_a20;
    }
    if ((1 < uVar44) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar23)) {
      pcVar7 = (code *)swi(3);
      pTVar29 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar29;
    }
    pTVar34 = &this->NumCells;
    if (uVar44 != 0) {
      pTVar34 = (TIntPoint<int> *)((longlong)&(this->NumCells).field0_0x0 + 4);
    }
    if ((pTVar34->field0_0x0)._s_0.X <= *piVar33) goto LAB_1424e26fd;
  }
LAB_1424e2868:
  pTVar34 = &this->NumCells;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9e0);
  goto LAB_1424e18c5;
joined_r0x0001424e2a68:
  while (local_910 = this_00, pSVar5 != (SWidget *)0x0) {
    if (pSVar5->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>(this_00,&local_8b0,(bool *)&local_9e8);
      local_7f8.Left = pFVar21->Left;
      local_7f8.Top = pFVar21->Top;
      local_7f8.Right = pFVar21->Right;
      local_7f8.Bottom = pFVar21->Bottom;
      local_7e8.Left = pFVar20->Left;
      local_7e8.Top = pFVar20->Top;
      local_7e8.Right = pFVar20->Right;
      local_7e8.Bottom = pFVar20->Bottom;
      FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_4>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_5>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_6>_>
                (this,local_a10,&local_7e8,&local_7f8,local_9f4,local_9bc,param_5,pFVar42,param_7,
                 param_8,param_9,local_9c0,param_11,this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9e0);
      return local_a10;
    }
    pTVar3 = (pSVar5->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar41 = (SWidget *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar11 = pTVar3->SharedReferenceCount;
      do {
        if (aVar11 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424e2aa5;
        }
        LOCK();
        aVar28 = pTVar3->SharedReferenceCount;
        bVar22 = aVar11 == aVar28;
        if (bVar22) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
          aVar28 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar28;
      } while (!bVar22);
      pSVar41 = (pSVar5->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pSVar5 = pSVar41;
    this_00 = local_910;
  }
LAB_1424e2aa5:
  local_a10->Object = pSVar45;
  (local_a10->SharedReferenceCount).ReferenceController = pTStack_9e0;
  pTVar37 = (TReferenceControllerBase<1> *)0x0;
LAB_1424e2937:
  pTVar29 = local_a10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
  return pTVar29;
}

// FindFocusableWidget<`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_7>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_8>,`FNavigationMethodOrthogonal::FindNextFocusableWidget'::__l4::<lambda_9>_> @ 1424e2ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethodOrthogonal::
FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_7>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_8>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_9>_>
          (FNavigationMethodOrthogonal *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FSlateRect *param_1,FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_7> param_7,<lambda_8> param_8,<lambda_9> param_9,
          int param_10)

{
  EUINavigationRule EVar1;
  SWidget *pSVar2;
  FHittestGrid *this_00;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float>_u_0_s_0 TVar8;
  atomic<int> aVar9;
  uint uVar10;
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  FSlateRect *pFVar15;
  FNavigationReply *pFVar16;
  FSlateRect *pFVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  atomic<int> aVar24;
  int iVar25;
  TSharedPtr<SWidget,1> *pTVar26;
  FWidgetData *pFVar27;
  FGeometry *pFVar28;
  FSlateRotatedRect *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  ForElementType<FHittestGrid::FWidgetIndex> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  TSharedPtr<SWidget_const_,1> *pTVar33;
  SWidget *pSVar34;
  longlong lVar35;
  FNavigationReply *pFVar36;
  undefined8 uVar37;
  FText *pFVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  SWidget *pSVar43;
  int *piVar44;
  atomic<int> *paVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_b58 [32];
  undefined8 local_af0;
  uint local_ae8;
  TSharedPtr<SWidget,1> *local_ae0;
  uint local_ad8;
  TReferenceControllerBase<1> *local_ad0;
  int local_ac8;
  SWidget *local_ab8;
  TReferenceControllerBase<1> *pTStack_ab0;
  undefined8 local_aa8;
  int local_aa0;
  int local_a9c;
  uint local_a98;
  int local_a94;
  int local_a90;
  int local_a8c;
  undefined8 local_a88;
  float local_a80;
  float fStack_a7c;
  undefined8 local_a78;
  FSlateRect *local_a70;
  SWidget *local_a68;
  FNavigationReply *local_a58;
  int local_a50;
  FSlateRect *local_a48;
  float local_a40;
  float fStack_a3c;
  undefined8 local_a38;
  undefined8 local_a30;
  float local_a28;
  float fStack_a24;
  undefined8 local_a20;
  longlong local_a18;
  float local_a10;
  float fStack_a0c;
  longlong local_a08;
  TVector2<float>_u_0 local_a00;
  undefined4 local_9f8;
  undefined8 local_9f4;
  undefined4 local_9ec;
  undefined1 local_9e8 [4];
  undefined1 local_9e4 [4];
  undefined1 local_9e0 [4];
  undefined1 local_9dc [4];
  undefined1 local_9d8 [4];
  undefined1 local_9d4 [4];
  TSharedPtr<SWidget,1> local_9d0;
  TReferenceControllerBase<1> *local_9c0;
  int *local_9b0;
  undefined8 local_9a8;
  int *local_9a0;
  undefined8 local_994;
  undefined1 local_98c [4];
  undefined1 local_988 [8];
  undefined4 local_980;
  undefined4 uStack_97c;
  float fStack_978;
  float fStack_974;
  float fStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  TTransform2<float> TStack_964;
  undefined4 uStack_94c;
  FText local_948;
  TSharedPtr<SWidget_const_,1> local_938;
  FText local_928;
  TSharedPtr<SWidget_const_,1> local_918;
  FText local_908;
  TSharedPtr<SWidget_const_,1> local_8f8;
  FText local_8e8;
  TSharedPtr<SWidget_const_,1> local_8d8;
  FText local_8c8;
  TSharedPtr<SWidget_const_,1> local_8b8;
  TSharedPtr<SWidget_const_,1> local_8a8;
  FText local_898;
  TSharedPtr<SWidget_const_,1> local_888;
  SWidget *local_878;
  undefined8 uStack_870;
  FText local_868;
  TSharedPtr<SWidget_const_,1> local_858;
  FText local_848;
  TSharedPtr<SWidget_const_,1> local_838;
  TTransform2<float> local_828;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  FSlateRect local_7f8;
  FSlateRect local_7e8;
  undefined8 local_7d8;
  TTransform2<float> local_7d0;
  FReadAccessScope local_7b8;
  TVector2<float>_u_0_s_0 local_7a0;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  uVar58 = FHittestGrid::CellSize.field0_0x0._s_0.Y;
  uVar57 = FHittestGrid::CellSize.field0_0x0._s_0.X;
  fVar56 = __real_3f000000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  uVar41 = 0;
  uVar37 = *(undefined8 *)(*(longlong *)&this->field_0x8 + 0xc0);
  uVar42 = (ulonglong)param_3;
  local_a8c = param_4;
  fVar46 = (param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top;
  fVar49 = (param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left;
  iVar39 = (int)((ulonglong)uVar37 >> 0x20) + -1;
  iVar25 = (int)uVar37;
  local_a58 = param_6;
  local_ad8 = param_3;
  local_a90 = param_10;
  local_ae8 = 0;
  iVar21 = (int)ROUND((fVar46 + fVar46) / FHittestGrid::CellSize.field0_0x0._s_0.Y - __real_3f000000
                     ) >> 1;
  iVar23 = 0;
  if (0 < iVar21) {
    iVar23 = iVar21;
  }
  iVar22 = (int)ROUND((fVar49 + fVar49) / FHittestGrid::CellSize.field0_0x0._s_0.X - __real_3f000000
                     ) >> 1;
  iVar21 = 0;
  if (0 < iVar22) {
    iVar21 = iVar22;
  }
  iVar22 = iVar25 + -1;
  if (iVar21 < iVar25 + -1) {
    iVar22 = iVar21;
  }
  if (iVar23 < iVar39) {
    iVar39 = iVar23;
  }
  local_af0 = CONCAT44(iVar39,iVar22);
  local_ae0 = __return_storage_ptr__;
  local_a78 = uVar37;
  local_a70 = param_1;
  local_a48 = param_2;
  local_9a8 = uVar37;
  if ((1 < (uint)param_3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
    return pTVar26;
  }
  fVar49 = __real_3dcccccd;
  uVar10 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fVar46 = param_1->Top;
  fStack_770 = param_1->Right;
  fStack_76c = param_1->Bottom;
  local_a50 = local_af0._4_4_;
  if (param_3 == 0) {
    local_a50 = (int)local_af0;
  }
  if ((iVar25 < 1) || (local_a78._4_4_ < 1)) {
    local_ae0->Object = (SWidget *)0x0;
    (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_ae0;
  }
  if (param_3 == 0) {
    local_a9c = local_a78._4_4_ + -1;
    local_ac8 = 1;
    fVar47 = (__real_40000000 / (float)uVar58) * param_2->Bottom;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar58) * param_2->Top - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_aa0 = local_a9c;
    if (iVar25 < local_a9c) {
      local_aa0 = iVar25;
    }
  }
  else {
    local_a9c = iVar25 + -1;
    local_ac8 = 0;
    fVar47 = (__real_40000000 / (float)uVar57) * param_2->Right;
    iVar39 = (int)ROUND((__real_40000000 / (float)uVar57) * param_2->Left - fVar56) >> 1;
    iVar25 = 0;
    if (0 < iVar39) {
      iVar25 = iVar39;
    }
    local_aa0 = local_a9c;
    if (iVar25 < local_a9c) {
      local_aa0 = iVar25;
    }
  }
  iVar39 = (int)ROUND(fVar47 - fVar56) >> 1;
  iVar25 = 0;
  if (0 < iVar39) {
    iVar25 = iVar39;
  }
  if (iVar25 < local_a9c) {
    local_a9c = iVar25;
  }
  bVar18 = false;
  iVar25 = local_a78._4_4_;
  fStack_774 = fVar46;
  do {
    fVar56 = __real_bf800000;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar39 = local_af0._4_4_;
    if (uVar42 == 0) {
      iVar39 = (int)local_af0;
    }
    if (iVar39 < 0) goto LAB_1424e3a80;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      iVar25 = (int)uVar37;
      iVar39 = (int)local_af0;
    }
    else {
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar39 = local_af0._4_4_;
    }
    if (iVar25 <= iVar39) goto LAB_1424e3a80;
    local_aa8 = local_af0;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    if (uVar42 == 0) {
      local_a94 = (int)local_af0;
      iVar25 = (int)local_af0;
    }
    else {
      local_a94 = local_af0._4_4_;
      if ((1 < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                              ,0x138,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      iVar25 = local_af0._4_4_;
    }
    pFVar16 = local_a58;
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    uVar57 = 0;
    uVar58 = 0;
    local_9a0 = (int *)((longlong)&local_af0 + 4);
    if (uVar42 == 0) {
      local_9a0 = (int *)&local_af0;
    }
    local_ab8 = (SWidget *)0x0;
    pTStack_ab0 = (TReferenceControllerBase<1> *)0x0;
    local_a68 = (SWidget *)0x0;
    *local_9a0 = iVar25 + local_a8c;
    piVar44 = (int *)((longlong)&local_aa8 + 4);
    iVar25 = local_ac8;
    iVar39 = local_aa0;
    local_9b0 = (int *)((longlong)&local_aa8 + 4);
    if (local_ac8 == 0) {
      piVar44 = (int *)&local_aa8;
      local_9b0 = (int *)&local_aa8;
    }
    while( true ) {
      uVar40 = local_ad8;
      fVar47 = __real_3f000000;
      *piVar44 = iVar39;
      uVar37 = local_9a8;
      pFVar17 = local_a48;
      pFVar36 = local_a58;
      pSVar43 = local_a68;
      pFVar15 = local_a70;
      iVar39 = local_aa8._4_4_;
      iVar21 = (int)local_aa8;
      iVar23 = local_aa8._4_4_;
      if (iVar25 == 0) {
        iVar23 = iVar21;
      }
      if (local_a9c < iVar23) break;
      local_740.ArrayMax = 100;
      local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
      local_740.ArrayNum = 0;
      FHittestGrid::GetCollapsedWidgets
                (*(FHittestGrid **)&this->field_0x8,&local_740,iVar21,local_aa8._4_4_);
      local_a98 = local_740.ArrayNum - 1;
      if (-1 < (int)local_a98) {
        local_a18 = (longlong)(int)local_a98;
        lVar35 = local_a18 << 4;
        fVar47 = fVar56;
        do {
          uVar40 = 0;
          if ((int)local_a98 < local_740.ArrayNum) {
            uVar40 = ~local_a98 >> 0x1f;
          }
          local_a08 = lVar35;
          if ((uVar40 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
            return pTVar26;
          }
          FVar31 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
          if (local_740.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar31 = local_740.AllocatorInstance.SecondaryData;
          }
          pFVar27 = FHittestGrid::FWidgetIndex::GetWidgetData
                              ((FWidgetIndex *)((longlong)FVar31 + lVar35));
          pSVar43 = (SWidget *)0x0;
          pTVar30 = (pFVar27->WeakWidget).WeakReferenceCount.ReferenceController;
          fVar56 = fVar47;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            aVar9 = pTVar30->SharedReferenceCount;
            do {
              if (aVar9 == (atomic<int>)0x0) {
                pTVar30 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_1424e3795;
              }
              LOCK();
              aVar24 = pTVar30->SharedReferenceCount;
              bVar19 = aVar9 == aVar24;
              if (bVar19) {
                pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
                aVar24 = aVar9;
              }
              UNLOCK();
              aVar9 = aVar24;
            } while (!bVar19);
            pSVar43 = (pFVar27->WeakWidget).Object;
          }
          local_ad0 = pTVar30;
          if (pSVar43 != (SWidget *)0x0) {
            if (((local_a90 == -1) || (pFVar27->UserIndex == -1)) ||
               (local_a90 == pFVar27->UserIndex)) {
              lVar35 = *(longlong *)&this->field_0x8;
              pFVar28 = SWidget::GetPaintSpaceGeometry(pSVar43);
              afVar14 = _UNK_15076b188;
              afVar12 = ___xmm_3f80000000000000000000003f800000;
              ___xmm_3f80000000000000000000003f800000 = afVar11[0];
              _UNK_15076b184 = afVar11[1];
              local_828.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
              local_828.M.M[0][1] = _UNK_15076b184;
              _UNK_15076b188 = afVar13[0];
              _UNK_15076b18c = afVar13[1];
              local_828.M.M[1][0] = _UNK_15076b188;
              local_828.M.M[1][1] = _UNK_15076b18c;
              uVar37 = *(undefined8 *)&(pFVar28->AbsolutePosition).field0_0x0._s_0.Y;
              uVar5 = *(undefined8 *)&(pFVar28->Position).field0_0x0._s_0.Y;
              uVar6 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[0] + 1);
              uVar7 = *(undefined8 *)((pFVar28->AccumulatedRenderTransform).M.M[1] + 1);
              local_980 = *(undefined4 *)&pFVar28->Size;
              uStack_97c = *(undefined4 *)&(pFVar28->Size).field_0x4;
              fVar56 = pFVar28->Scale;
              fStack_974 = (pFVar28->AbsolutePosition).field0_0x0._s_0.X;
              TVar8 = (pFVar28->AbsolutePosition).field0_0x0._s_0;
              fStack_970 = (float)uVar37;
              uStack_96c = (undefined4)((ulonglong)uVar37 >> 0x20);
              uStack_968 = (undefined4)uVar5;
              TStack_964.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
              uVar37 = *(undefined8 *)&(pFVar28->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
              ;
              TStack_964.Trans.field0_0x0._s_0.Y = (float)uVar37;
              uStack_94c = (undefined4)((ulonglong)uVar37 >> 0x20);
              TStack_964.M.M[0][1] = (float)uVar6;
              TStack_964.M.M[1][0] = (float)((ulonglong)uVar6 >> 0x20);
              TStack_964.M.M[1][1] = (float)uVar7;
              TStack_964.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar7 >> 0x20);
              fStack_a0c = (float)(*(uint *)(lVar35 + 0xd4) ^ uVar10);
              local_a10 = (float)(*(uint *)(lVar35 + 0xd0) ^ uVar10);
              local_994 = CONCAT44(fStack_a0c,local_a10);
              local_a88._0_4_ = TVar8.X;
              local_a28 = local_a10 + (float)local_a88;
              local_a88._4_4_ = TVar8.Y;
              fStack_a24 = fStack_a0c + local_a88._4_4_;
              ___xmm_3f80000000000000000000003f800000 = afVar12;
              _UNK_15076b188 = afVar14;
              local_a88 = local_994;
              fStack_978 = fVar56;
              local_828.Trans.field0_0x0._s_0.X = local_a10;
              local_828.Trans.field0_0x0._s_0.Y = fStack_a0c;
              Concatenate<TTransform2<float>_>(&local_7d0,&TStack_964,&local_828);
              TStack_964.M.M[0][0] = local_7d0.M.M[0][0];
              TStack_964.M.M[0][1] = local_7d0.M.M[0][1];
              TStack_964.M.M[1][0] = local_7d0.M.M[1][0];
              TStack_964.M.M[1][1] = local_7d0.M.M[1][1];
              fStack_974 = local_a28;
              fStack_970 = fStack_a24;
              local_a20 = CONCAT44(uStack_97c,local_980);
              local_9f8 = local_980;
              local_9ec = uStack_97c;
              TStack_964.Trans.field0_0x0._s_0.X = local_7d0.Trans.field0_0x0._0_4_;
              TStack_964.Trans.field0_0x0._s_0.Y = local_7d0.Trans.field0_0x0._4_4_;
              local_a00 = (TVector2<float>_u_0)0x0;
              local_9f4 = 0;
              fStack_978 = fVar56;
              pFVar29 = TransformRect<TTransform2<float>_>
                                  (&local_758,&TStack_964,(FSlateRotatedRect *)&local_a00._s_0);
              fVar48 = (pFVar29->ExtentY).field0_0x0._s_0.X;
              fVar50 = (pFVar29->ExtentY).field0_0x0._s_0.Y;
              fVar51 = (pFVar29->TopLeft).field0_0x0._s_0.X;
              fVar52 = (pFVar29->TopLeft).field0_0x0._s_0.Y;
              fVar53 = fVar48 + fVar51;
              local_7a0 = (pFVar29->TopLeft).field0_0x0._s_0;
              fVar56 = fVar50 + fVar52;
              fVar51 = fVar51 + (pFVar29->ExtentX).field0_0x0._s_0.X;
              fVar52 = fVar52 + (pFVar29->ExtentX).field0_0x0._s_0.Y;
              fVar54 = fVar53;
              if (fVar51 <= fVar53) {
                fVar54 = fVar51;
              }
              fVar48 = fVar48 + fVar51;
              fVar55 = fVar56;
              if (fVar52 <= fVar56) {
                fVar55 = fVar52;
              }
              fVar50 = fVar50 + fVar52;
              if (fVar48 <= fVar54) {
                fVar54 = fVar48;
              }
              if (fVar50 <= fVar55) {
                fVar55 = fVar50;
              }
              if (local_7a0.X <= fVar54) {
                fVar54 = local_7a0.X;
              }
              if (local_7a0.Y <= fVar55) {
                fVar55 = local_7a0.Y;
              }
              if (fVar56 <= fVar52) {
                fVar56 = fVar52;
              }
              if (fVar53 <= fVar51) {
                fVar53 = fVar51;
              }
              if (fVar56 <= fVar50) {
                fVar56 = fVar50;
              }
              if (fVar53 <= fVar48) {
                fVar53 = fVar48;
              }
              if (fVar56 <= local_7a0.Y) {
                fVar56 = local_7a0.Y;
              }
              if (fVar53 <= local_7a0.X) {
                fVar53 = local_7a0.X;
              }
              if (((fVar46 <= fVar56 - fVar49) || (fVar53 < local_a48->Left)) ||
                 ((local_a48->Right <= fVar54 && fVar54 != local_a48->Right ||
                  ((fVar56 < local_a48->Top ||
                   (local_a48->Bottom <= fVar55 && fVar55 != local_a48->Bottom)))))) {
                local_848.TextData.Reference =
                     FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference,
                             local_9d4);
                }
                local_848.Flags = FNavigationMethod::FDebuggingText::DoesNotIntersect.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_848;
                pTVar33 = &local_838;
                local_838.Object = pSVar43;
                local_838.SharedReferenceCount.ReferenceController = pTVar30;
              }
              else if ((local_a68 == (SWidget *)0x0) || (fVar47 - fVar49 < fVar56)) {
                uVar40 = uVar41;
                if (pFVar16->BoundaryRule == Escape) {
LAB_1424e3450:
                  bVar19 = false;
                }
                else {
                  local_9c0 = (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  local_ae8 = uVar41 | 1;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_9c0 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_9c0->SharedReferenceCount =
                         (atomic<int>)((int)local_9c0->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  uVar40 = local_ae8;
                  if (pSVar2 == (SWidget *)0x0) goto LAB_1424e3450;
                  local_9d0.SharedReferenceCount.ReferenceController =
                       (pFVar16->EventHandler).SharedReferenceCount.ReferenceController;
                  uVar40 = uVar41 | 3;
                  this_00 = *(FHittestGrid **)&this->field_0x8;
                  pSVar2 = (pFVar16->EventHandler).Object;
                  if (local_9d0.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_9d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_9d0.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_ae8 = uVar40;
                  bVar19 = FHittestGrid::IsDescendantOf(this_00,pSVar2,pFVar27);
                  if (bVar19) goto LAB_1424e3450;
                  bVar19 = true;
                }
                if ((uVar40 & 2) != 0) {
                  uVar40 = uVar40 & 0xfffffffd;
                  local_ae8 = uVar40;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_9d0.SharedReferenceCount.ReferenceController)
                  ;
                }
                uVar41 = uVar40;
                if ((uVar40 & 1) != 0) {
                  uVar41 = uVar40 & 0xfffffffe;
                  local_ae8 = uVar41;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_9c0);
                }
                if (bVar19) {
                  local_908.TextData.Reference =
                       FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::NotADescendant.TextData.
                                  Reference + 8))
                              (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference,
                               local_9e8);
                  }
                  local_908.Flags = FNavigationMethod::FDebuggingText::NotADescendant.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_908;
                  pTVar33 = &local_8f8;
                  local_8f8.Object = pSVar43;
                  local_8f8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else if (pSVar43->EnabledStateAttribute ==
                         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                         0x0) {
                  local_8e8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::Disabled.TextData.Reference;
                  if (FNavigationMethod::FDebuggingText::Disabled.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::Disabled.TextData.Reference + 8
                                ))(FNavigationMethod::FDebuggingText::Disabled.TextData.Reference,
                                   local_9e4);
                  }
                  local_8e8.Flags = FNavigationMethod::FDebuggingText::Disabled.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8e8;
                  pTVar33 = &local_8d8;
                  local_8d8.Object = pSVar43;
                  local_8d8.SharedReferenceCount.ReferenceController = pTVar30;
                }
                else {
                  cVar20 = (**(code **)(pSVar43->_padding_ + 0x198))(pSVar43);
                  if (cVar20 != '\0') {
                    if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
                      paVar45 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar45 = &pTVar30->SharedReferenceCount;
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      LOCK();
                      *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                      UNLOCK();
                      local_ad0 = pTVar30;
                    }
                    uVar41 = ((uint)((ulonglong)pSVar43 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)pSVar43 >> 4)) * -0x7a143595;
                    uVar41 = (uVar41 >> 0xd ^ uVar41) * -0x3d4d51cb;
                    local_8a8.Object = pSVar43;
                    local_8a8.SharedReferenceCount.ReferenceController = pTVar30;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    iVar25 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                       ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                                         *)&this->field_0x18,uVar41 >> 0x10 ^ uVar41,&local_8a8);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar30);
                    if (iVar25 == -1) {
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uVar58,uVar57);
                      uStack_870._0_4_ = SUB84(pTVar30,0);
                      uVar57 = (undefined4)uStack_870;
                      uStack_870._4_4_ = (undefined4)((ulonglong)pTVar30 >> 0x20);
                      uVar58 = uStack_870._4_4_;
                      local_ab8 = pSVar43;
                      pTStack_ab0 = pTVar30;
                      local_878 = pSVar43;
                      uStack_870 = pTVar30;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar32);
                      local_868.TextData.Reference =
                           FNavigationMethod::FDebuggingText::Valid.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::Valid.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::Valid.TextData.Reference +
                                    8))(FNavigationMethod::FDebuggingText::Valid.TextData.Reference,
                                        local_9d8);
                      }
                      local_868.Flags = FNavigationMethod::FDebuggingText::Valid.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar30->SharedReferenceCount =
                             (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      local_858.Object = pSVar43;
                      local_858.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_858,&local_868);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ad0;
                      local_a68 = pSVar43;
                      uVar41 = local_ae8;
                    }
                    else {
                      local_898.TextData.Reference =
                           FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference;
                      if (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                      Reference + 8))
                                  (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.
                                   Reference,local_9dc);
                      }
                      local_898.Flags = FNavigationMethod::FDebuggingText::ParentDisabled.Flags;
                      if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar45 = (atomic<int>)((int)*paVar45 + 1);
                        UNLOCK();
                      }
                      local_888.Object = pSVar43;
                      local_888.SharedReferenceCount.ReferenceController = pTVar30;
                      FNavigationMethod::AddDebugIntermediateResult
                                ((FNavigationMethod *)this,&local_888,&local_898);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar30);
                      pTVar30 = local_ad0;
                      fVar56 = fVar47;
                      uVar41 = local_ae8;
                    }
                    goto LAB_1424e3795;
                  }
                  local_8c8.TextData.Reference =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                       Reference;
                  if (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                      Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                                  TextData.Reference + 8))
                              (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.
                               TextData.Reference,local_9e0);
                  }
                  local_8c8.Flags =
                       FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar30->SharedReferenceCount =
                         (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar38 = &local_8c8;
                  pTVar33 = &local_8b8;
                  local_8b8.Object = pSVar43;
                  local_8b8.SharedReferenceCount.ReferenceController = pTVar30;
                }
              }
              else {
                local_928.TextData.Reference =
                     FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference;
                if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                                Reference + 8))
                            (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.
                             Reference,local_988);
                }
                local_928.Flags = FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->SharedReferenceCount =
                       (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = &local_928;
                pTVar33 = &local_918;
                local_918.Object = pSVar43;
                local_918.SharedReferenceCount.ReferenceController = pTVar30;
              }
            }
            else {
              local_948.TextData.Reference =
                   FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference;
              if (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                  != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData
                              .Reference + 8))
                          (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.
                           Reference,local_98c);
              }
              local_948.Flags = FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.Flags;
              if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar30->SharedReferenceCount =
                     (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar38 = &local_948;
              pTVar33 = &local_938;
              local_938.Object = pSVar43;
              local_938.SharedReferenceCount.ReferenceController = pTVar30;
            }
            FNavigationMethod::AddDebugIntermediateResult((FNavigationMethod *)this,pTVar33,pFVar38)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar30);
            fVar56 = fVar47;
          }
LAB_1424e3795:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          local_a98 = local_a98 - 1;
          local_a18 = local_a18 + -1;
          lVar35 = local_a08 + -0x10;
          fVar47 = fVar56;
        } while (-1 < (int)local_a98);
        iVar21 = (int)local_aa8;
        piVar44 = local_9b0;
        iVar25 = local_ac8;
        iVar39 = local_aa8._4_4_;
        local_a08 = lVar35;
      }
      if (local_740.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
      }
      if (iVar25 == 0) {
        iVar39 = iVar21;
      }
      iVar39 = iVar39 + 1;
    }
    if (local_a68 != (SWidget *)0x0) {
      local_768 = local_a48->Left;
      fStack_764 = local_a48->Top;
      fStack_760 = local_a48->Right;
      fStack_75c = local_a48->Bottom;
      pSVar2 = pSVar43;
      if (fStack_764 <= fVar56 - fVar49) break;
      EVar1 = local_a58->BoundaryRule;
      if (EVar1 == Explicit) {
        local_ae0->Object = (local_a58->FocusRecipient).Object;
        pTVar30 = (local_a58->FocusRecipient).SharedReferenceCount.ReferenceController;
        (local_ae0->SharedReferenceCount).ReferenceController = pTVar30;
        pTVar32 = pTStack_ab0;
        if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1424e3b31;
      }
      if (EVar1 == Wrap) {
        local_a80 = (local_a70->Right - local_a70->Left) * __real_3f000000 + local_a70->Left;
        fStack_a7c = (local_a70->Bottom - local_a70->Top) * __real_3f000000 + local_a70->Top;
        local_7d8 = CONCAT44(fStack_a7c,local_a80);
        if ((1 < local_ad8) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                ,0x4b0,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        break;
      }
      if (EVar1 != Stop) {
        if ((EVar1 != Custom) && (EVar1 != CustomBoundary)) break;
        bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a58->FocusDelegate);
        if (bVar18) goto LAB_1424e3a9f;
      }
      local_ae0->Object = (SWidget *)0x0;
      (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar32 = pTStack_ab0;
      goto LAB_1424e3b31;
    }
    if ((bVar18) && (local_a50 == local_a94)) {
LAB_1424e3a77:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
LAB_1424e3a80:
      local_ae0->Object = (SWidget *)0x0;
      (local_ae0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      return local_ae0;
    }
    uVar42 = (ulonglong)(int)local_ad8;
    if ((1 < uVar42) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
      return pTVar26;
    }
    iVar25 = local_af0._4_4_;
    if (uVar42 == 0) {
      iVar25 = (int)local_af0;
    }
    if (iVar25 < 0) {
LAB_1424e38ee:
      pFVar36 = local_a58;
      if (local_a58->BoundaryRule != Wrap) {
        if (local_a58->BoundaryRule == CustomBoundary) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &local_a58->FocusDelegate,&local_7b8);
          if (((*(int *)&(pFVar36->FocusDelegate).field_0x10 != 0) &&
              (plVar3 = *(longlong **)&(pFVar36->FocusDelegate).field_0x8, plVar3 != (longlong *)0x0
              )) && (cVar20 = (**(code **)(*plVar3 + 0x38))(), cVar20 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_7b8);
LAB_1424e3a9f:
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::Execute(&pFVar36->FocusDelegate,local_ae0,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_ab0);
            return local_ae0;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_7b8);
        }
        iVar25 = local_a78._4_4_;
        goto LAB_1424e3a69;
      }
      if (bVar18) goto LAB_1424e3a77;
      local_808 = local_a48->Left;
      fStack_804 = local_a48->Top;
      fStack_800 = local_a48->Right;
      fVar46 = local_a48->Bottom;
      local_a40 = (local_a70->Right - local_a70->Left) * fVar47 + local_a70->Left;
      fStack_a3c = (local_a70->Bottom - local_a70->Top) * fVar47 + local_a70->Top;
      local_a38 = CONCAT44(fStack_a3c,local_a40);
      fStack_7fc = fVar46;
      if ((1 < uVar42) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar26;
      }
      lVar35 = *(longlong *)&this->field_0x8;
      iVar25 = local_a78._4_4_;
      *(float *)((longlong)&local_a38 + uVar42 * 4) = fVar46;
      fStack_a7c = (float)(*(int *)(lVar35 + 0xc4) + -1);
      local_a30 = local_a38;
      uVar5 = local_a30;
      local_a30._4_4_ = (float)((ulonglong)local_a38 >> 0x20);
      bVar18 = true;
      local_a30._0_4_ = (float)local_a38;
      fVar48 = (float)((int)ROUND((local_a30._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                                  local_a30._4_4_ / FHittestGrid::CellSize.field0_0x0._s_0.Y) -
                                  fVar47) >> 1);
      fVar56 = 0.0;
      if (0 < (int)fVar48) {
        fVar56 = fVar48;
      }
      local_a80 = (float)(*(int *)(lVar35 + 0xc0) + -1);
      fVar48 = (float)((int)ROUND(((float)local_a30 / FHittestGrid::CellSize.field0_0x0._s_0.X +
                                  (float)local_a30 / FHittestGrid::CellSize.field0_0x0._s_0.X) -
                                  fVar47) >> 1);
      fVar47 = 0.0;
      if (0 < (int)fVar48) {
        fVar47 = fVar48;
      }
      if ((int)fVar47 < (int)local_a80) {
        local_a80 = fVar47;
      }
      if ((int)fVar56 < (int)fStack_a7c) {
        fStack_a7c = fVar56;
      }
      local_af0 = CONCAT44(fStack_a7c,local_a80);
      local_a30 = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
    }
    else {
      if (uVar42 < 2) {
LAB_1424e38a8:
        if (1 < (longlong)uVar42) goto LAB_1424e38ae;
      }
      else {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
        if (-1 < (longlong)uVar42) goto LAB_1424e38a8;
LAB_1424e38ae:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L"");
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pTVar26 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar26;
        }
      }
      iVar39 = local_a78._4_4_;
      if (uVar42 == 0) {
        iVar39 = (int)uVar37;
      }
      iVar25 = local_a78._4_4_;
      if (iVar39 <= *local_9a0) goto LAB_1424e38ee;
LAB_1424e3a69:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
    }
  } while( true );
  while (pSVar2 != (SWidget *)0x0) {
    if (pSVar2->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->field_0x18,&local_9d0,(bool *)&local_ab8);
      local_7f8.Left = pFVar17->Left;
      local_7f8.Top = pFVar17->Top;
      local_7f8.Right = pFVar17->Right;
      local_7f8.Bottom = pFVar17->Bottom;
      local_7e8.Left = pFVar15->Left;
      local_7e8.Top = pFVar15->Top;
      local_7e8.Right = pFVar15->Right;
      local_7e8.Bottom = pFVar15->Bottom;
      FindFocusableWidget<_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_7>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_8>,_FNavigationMethodOrthogonal::FindNextFocusableWidget_::__l4::<lambda_9>_>
                (this,local_ae0,&local_7e8,&local_7f8,uVar40,local_a8c,param_5,pFVar36,param_7,
                 param_8,param_9,local_a90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ab0);
      return local_ae0;
    }
    pTVar30 = (pSVar2->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar34 = (SWidget *)0x0;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = pTVar30->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424e3c95;
        }
        LOCK();
        aVar24 = pTVar30->SharedReferenceCount;
        bVar18 = aVar9 == aVar24;
        if (bVar18) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
          aVar24 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar24;
      } while (!bVar18);
      pSVar34 = (pSVar2->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
    pSVar2 = pSVar34;
  }
LAB_1424e3c95:
  local_ae0->Object = pSVar43;
  (local_ae0->SharedReferenceCount).ReferenceController = pTStack_ab0;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
LAB_1424e3b31:
  pTVar26 = local_ae0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  return pTVar26;
}

// FindFocusableWidget<`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_7>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_8>,`FHittestGrid::FindNextFocusableWidgetDefault'::__l4::<lambda_9>_> @ 1424e3d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::
FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_7>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_8>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_9>_>
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FSlateRect *param_1,
          FSlateRect *param_2,int param_3,int param_4,EUINavigation param_5,
          FNavigationReply *param_6,<lambda_7> param_7,<lambda_8> param_8,<lambda_9> param_9,
          int param_10,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_11,
          TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
          *param_12)

{
  undefined8 uVar1;
  EUINavigationRule EVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  uint uVar12;
  float fVar13;
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float afVar17 [2];
  TRefCountPtr<ITextData> TVar18;
  FSlateRect *pFVar19;
  FSlateRect *pFVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  atomic<int> aVar27;
  TSharedPtr<SWidget,1> *pTVar28;
  FWidgetData *pFVar29;
  FGeometry *pFVar30;
  FSlateRotatedRect *pFVar31;
  int *piVar32;
  TIntPoint<int> *pTVar33;
  uint uVar34;
  TVector2<float>_u_0_s_0 TVar35;
  TReferenceControllerBase<1> *pTVar36;
  ForElementType<FHittestGrid::FWidgetIndex> FVar37;
  int iVar38;
  longlong lVar39;
  SWidget *pSVar40;
  FNavigationReply *pFVar41;
  int iVar42;
  ulonglong uVar43;
  SWidget *pSVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined1 auStackY_aa8 [32];
  undefined8 local_a30;
  uint local_a28;
  TSharedPtr<SWidget,1> *local_a20;
  undefined8 local_a18;
  TVector2<float>_u_0_s_0 local_a10;
  int local_a08;
  uint local_a04;
  SWidget *local_9f8;
  TReferenceControllerBase<1> *pTStack_9f0;
  TReferenceControllerBase<1> *local_9e8;
  int local_9e0;
  int local_9dc;
  uint local_9d8;
  int local_9d4;
  int local_9d0;
  int local_9cc;
  FSlateRect *local_9c8;
  float local_9c0;
  float fStack_9bc;
  TReferenceControllerBase<1> *local_9b8;
  SWidget *local_9a8;
  FNavigationReply *local_998;
  int local_990;
  FSlateRect *local_988;
  FHittestGrid *local_980;
  TReferenceControllerBase<1> *local_978;
  SWidget *local_970;
  float local_968;
  float fStack_964;
  undefined8 local_960;
  float local_958;
  float fStack_954;
  TReferenceControllerBase<1> *local_950;
  TReferenceControllerBase<1> *local_948;
  TReferenceControllerBase<1> *local_940;
  TReferenceControllerBase<1> *local_938;
  float local_930;
  float fStack_92c;
  undefined8 local_928;
  undefined8 local_920;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  *local_918;
  TReferenceControllerBase<1> *local_910;
  TVector2<float>_u_0 local_908;
  undefined4 local_900;
  undefined8 local_8fc;
  undefined4 local_8f4;
  undefined1 local_8f0 [4];
  undefined1 local_8ec [4];
  undefined1 local_8e8 [4];
  undefined1 local_8e4 [4];
  undefined1 local_8e0 [4];
  undefined1 local_8dc [4];
  undefined1 local_8d8 [4];
  undefined1 local_8d4 [4];
  undefined1 local_8d0 [4];
  undefined1 local_8cc [4];
  undefined1 local_8c8 [4];
  TSharedPtr<SWidget,1> local_8c4;
  TReferenceControllerBase<1> *local_8b0;
  TReferenceControllerBase<1> *local_8a8;
  undefined8 local_894;
  undefined1 local_88c [4];
  undefined1 local_888 [8];
  undefined4 local_880;
  undefined4 uStack_87c;
  float fStack_878;
  float fStack_874;
  float fStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  TTransform2<float> TStack_864;
  undefined4 uStack_84c;
  TSharedPtr<SWidget_const_,1> local_848;
  SWidget *local_838;
  undefined8 uStack_830;
  TTransform2<float> local_828;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  FSlateRect local_7f8;
  FSlateRect local_7e8;
  undefined8 local_7d8;
  TTransform2<float> local_7d0;
  FReadAccessScope local_7b8;
  TVector2<float>_u_0_s_0 local_7a0;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  FSlateRotatedRect local_758;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_740;
  ulonglong local_f0;
  
  fVar51 = __real_3f000000;
  fVar49 = __real_3f800000;
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  uVar43 = (ulonglong)param_3;
  local_9cc = param_4;
  local_918 = param_12;
  iVar42 = (this->NumCells).field0_0x0._s_0.Y + -1;
  local_998 = param_6;
  local_a04 = param_3;
  local_9d0 = param_10;
  local_a28 = 0;
  iVar24 = (int)ROUND(((param_1->Bottom - param_1->Top) * __real_3f000000 + param_1->Top) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.Y +
                      __real_3f800000 / CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar26 = 0;
  if (0 < iVar24) {
    iVar26 = iVar24;
  }
  iVar24 = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar25 = (int)ROUND(((param_1->Right - param_1->Left) * __real_3f000000 + param_1->Left) *
                      (__real_3f800000 / CellSize.field0_0x0._s_0.X +
                      __real_3f800000 / CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar38 = 0;
  if (0 < iVar25) {
    iVar38 = iVar25;
  }
  if (iVar38 < iVar24) {
    iVar24 = iVar38;
  }
  if (iVar26 < iVar42) {
    iVar42 = iVar26;
  }
  local_a30 = CONCAT44(iVar42,iVar24);
  local_a20 = __return_storage_ptr__;
  local_9c8 = param_1;
  local_988 = param_2;
  local_980 = this;
  if ((1 < (uint)param_3) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  fVar13 = __real_3dcccccd;
  uVar12 = __xmm_80000000800000008000000080000000;
  local_778 = param_1->Left;
  fVar56 = param_1->Top;
  fStack_770 = param_1->Right;
  fStack_76c = param_1->Bottom;
  pTVar33 = &this->NumCells;
  local_9dc = (pTVar33->field0_0x0)._s_0.X;
  local_990 = local_a30._4_4_;
  if (param_3 == 0) {
    local_990 = (int)local_a30;
  }
  if ((local_9dc < 1) || (iVar42 = (this->NumCells).field0_0x0._s_0.Y, iVar42 < 1)) {
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a20;
  }
  if (param_3 == 0) {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.Y;
    local_9dc = iVar42 + -1;
    local_a08 = 1;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Bottom;
    iVar26 = (int)ROUND(fVar49 * param_2->Top - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9e0 = local_9dc;
    if (iVar42 < local_9dc) {
      local_9e0 = iVar42;
    }
  }
  else {
    fVar49 = fVar49 / CellSize.field0_0x0._s_0.X;
    local_9dc = local_9dc + -1;
    local_a08 = 0;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar49 * param_2->Right;
    iVar26 = (int)ROUND(fVar49 * param_2->Left - fVar51) >> 1;
    iVar42 = 0;
    if (0 < iVar26) {
      iVar42 = iVar26;
    }
    local_9e0 = local_9dc;
    if (iVar42 < local_9dc) {
      local_9e0 = iVar42;
    }
  }
  iVar26 = (int)ROUND(fVar50 - fVar51) >> 1;
  iVar42 = 0;
  if (0 < iVar26) {
    iVar42 = iVar26;
  }
  if (iVar42 < local_9dc) {
    local_9dc = iVar42;
  }
  bVar21 = false;
  fStack_774 = fVar56;
LAB_1424e403c:
  iVar42 = local_a08;
  fVar49 = __real_bf800000;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar26 = local_a30._4_4_;
  if (uVar43 == 0) {
    iVar26 = (int)local_a30;
  }
  if (iVar26 < 0) goto LAB_1424e502f;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x144,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    iVar26 = (pTVar33->field0_0x0)._s_0.X;
    iVar24 = (int)local_a30;
  }
  else {
    iVar26 = (pTVar33->field0_0x0)._s_0.Y;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar24 = local_a30._4_4_;
  }
  if (iVar26 <= iVar24) goto LAB_1424e502f;
  local_a18 = local_a30;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  if (uVar43 == 0) {
    local_9d4 = (int)local_a30;
    iVar26 = (int)local_a30;
  }
  else {
    local_9d4 = local_a30._4_4_;
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    iVar26 = local_a30._4_4_;
  }
  afVar16 = _UNK_15076b188;
  afVar14 = ___xmm_3f80000000000000000000003f800000;
  uVar54 = 0;
  uVar55 = 0;
  piVar32 = (int *)((longlong)&local_a30 + 4);
  if (uVar43 == 0) {
    piVar32 = (int *)&local_a30;
  }
  local_9f8 = (SWidget *)0x0;
  pTStack_9f0 = (TReferenceControllerBase<1> *)0x0;
  local_9a8 = (SWidget *)0x0;
  *piVar32 = local_9cc + iVar26;
  piVar32 = (int *)((longlong)&local_a18 + 4);
  iVar26 = local_9e0;
  if (iVar42 == 0) {
    piVar32 = (int *)&local_a18;
  }
  while( true ) {
    pFVar20 = local_988;
    pFVar41 = local_998;
    pSVar44 = local_9a8;
    pFVar19 = local_9c8;
    fVar51 = __real_3f000000;
    *piVar32 = iVar26;
    iVar26 = local_a18._4_4_;
    iVar38 = (int)local_a18;
    iVar24 = local_a18._4_4_;
    if (iVar42 == 0) {
      iVar24 = iVar38;
    }
    if (local_9dc < iVar24) break;
    local_740.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
    local_740.ArrayNum = 0;
    local_740.ArrayMax = 100;
    GetCollapsedWidgets(this,&local_740,iVar38,local_a18._4_4_);
    local_9d8 = local_740.ArrayNum - 1;
    if (-1 < (int)local_9d8) {
      do {
        uVar43 = (ulonglong)local_9d8;
        uVar34 = 0;
        if ((int)local_9d8 < local_740.ArrayNum) {
          uVar34 = ~local_9d8 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
          return pTVar28;
        }
        FVar37 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_740;
        if (local_740.AllocatorInstance.SecondaryData !=
            (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
          FVar37 = local_740.AllocatorInstance.SecondaryData;
        }
        pFVar29 = FWidgetIndex::GetWidgetData((FWidgetIndex *)(uVar43 * 0x10 + (longlong)FVar37));
        pSVar44 = (SWidget *)0x0;
        pTVar3 = (pFVar29->WeakWidget).WeakReferenceCount.ReferenceController;
        pSVar5 = local_9a8;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar11 = pTVar3->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              TVar35 = (TVector2<float>_u_0_s_0)(TReferenceControllerBase<1> *)0x0;
              goto LAB_1424e4d31;
            }
            LOCK();
            aVar27 = pTVar3->SharedReferenceCount;
            bVar22 = aVar11 == aVar27;
            if (bVar22) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar27 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar27;
          } while (!bVar22);
          pSVar44 = (pFVar29->WeakWidget).Object;
        }
        TVar35 = (TVector2<float>_u_0_s_0)pTVar3;
        local_a10 = (TVector2<float>_u_0_s_0)pTVar3;
        local_9e8 = pTVar3;
        local_9b8 = pTVar3;
        local_978 = pTVar3;
        local_970 = pSVar44;
        local_950 = pTVar3;
        local_948 = pTVar3;
        local_940 = pTVar3;
        local_938 = pTVar3;
        local_910 = pTVar3;
        if (pSVar44 != (SWidget *)0x0) {
          if (((local_9d0 == -1) || (pFVar29->UserIndex == -1)) || (local_9d0 == pFVar29->UserIndex)
             ) {
            pFVar30 = SWidget::GetPaintSpaceGeometry(pSVar44);
            afVar17 = _UNK_15076b188;
            afVar15 = ___xmm_3f80000000000000000000003f800000;
            ___xmm_3f80000000000000000000003f800000 = afVar14[0];
            _UNK_15076b184 = afVar14[1];
            local_828.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_828.M.M[0][1] = _UNK_15076b184;
            _UNK_15076b188 = afVar16[0];
            _UNK_15076b18c = afVar16[1];
            local_828.M.M[1][0] = _UNK_15076b188;
            local_828.M.M[1][1] = _UNK_15076b18c;
            uVar1 = *(undefined8 *)&(pFVar30->AbsolutePosition).field0_0x0._s_0.Y;
            uVar8 = *(undefined8 *)&(pFVar30->Position).field0_0x0._s_0.Y;
            local_880 = *(undefined4 *)&pFVar30->Size;
            uStack_87c = *(undefined4 *)&(pFVar30->Size).field_0x4;
            fVar51 = pFVar30->Scale;
            fStack_874 = (pFVar30->AbsolutePosition).field0_0x0._s_0.X;
            local_a10 = (pFVar30->AbsolutePosition).field0_0x0._s_0;
            uVar9 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[0] + 1);
            uVar10 = *(undefined8 *)((pFVar30->AccumulatedRenderTransform).M.M[1] + 1);
            fStack_870 = (float)uVar1;
            uStack_86c = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_868 = (undefined4)uVar8;
            TStack_864.M.M[0][0] = (float)((ulonglong)uVar8 >> 0x20);
            uVar1 = *(undefined8 *)&(pFVar30->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
            TStack_864.M.M[0][1] = (float)uVar9;
            TStack_864.M.M[1][0] = (float)((ulonglong)uVar9 >> 0x20);
            TStack_864.M.M[1][1] = (float)uVar10;
            TStack_864.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar10 >> 0x20);
            TStack_864.Trans.field0_0x0._s_0.Y = (float)uVar1;
            uStack_84c = (undefined4)((ulonglong)uVar1 >> 0x20);
            local_968 = (float)((uint)(local_980->GridWindowOrigin).field0_0x0._s_0.X ^ uVar12);
            fStack_964 = (float)((uint)(local_980->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar12);
            local_960 = CONCAT44(fStack_964,local_968);
            local_958 = local_968 + local_a10.X;
            fStack_954 = fStack_964 + local_a10.Y;
            ___xmm_3f80000000000000000000003f800000 = afVar15;
            _UNK_15076b188 = afVar17;
            local_894 = local_960;
            fStack_878 = fVar51;
            local_828.Trans.field0_0x0._s_0.X = local_968;
            local_828.Trans.field0_0x0._s_0.Y = fStack_964;
            Concatenate<TTransform2<float>_>(&local_7d0,&TStack_864,&local_828);
            TStack_864.M.M[0][0] = local_7d0.M.M[0][0];
            TStack_864.M.M[0][1] = local_7d0.M.M[0][1];
            TStack_864.M.M[1][0] = local_7d0.M.M[1][0];
            TStack_864.M.M[1][1] = local_7d0.M.M[1][1];
            fStack_874 = local_958;
            fStack_870 = fStack_954;
            local_a10 = (TVector2<float>_u_0_s_0)CONCAT44(uStack_87c,local_880);
            local_900 = local_880;
            local_8f4 = uStack_87c;
            TStack_864.Trans.field0_0x0._s_0.X = local_7d0.Trans.field0_0x0._0_4_;
            TStack_864.Trans.field0_0x0._s_0.Y = local_7d0.Trans.field0_0x0._4_4_;
            local_908 = (TVector2<float>_u_0)0x0;
            local_8fc = 0;
            fStack_878 = fVar51;
            pFVar31 = TransformRect<TTransform2<float>_>
                                (&local_758,&TStack_864,(FSlateRotatedRect *)&local_908._s_0);
            fVar51 = (pFVar31->TopLeft).field0_0x0._s_0.X;
            fVar50 = (pFVar31->TopLeft).field0_0x0._s_0.Y;
            fVar46 = (pFVar31->ExtentY).field0_0x0._s_0.X;
            fVar47 = fVar50 + (pFVar31->ExtentX).field0_0x0._s_0.Y;
            fVar48 = fVar51 + (pFVar31->ExtentX).field0_0x0._s_0.X;
            local_7a0 = (pFVar31->TopLeft).field0_0x0._s_0;
            fVar51 = fVar46 + fVar51;
            fVar45 = (pFVar31->ExtentY).field0_0x0._s_0.Y;
            fVar50 = fVar45 + fVar50;
            fVar46 = fVar48 + fVar46;
            fVar45 = fVar47 + fVar45;
            fVar52 = fVar51;
            if (fVar51 <= fVar48) {
              fVar52 = fVar48;
            }
            fVar53 = fVar50;
            if (fVar50 <= fVar47) {
              fVar53 = fVar47;
            }
            if (fVar53 <= fVar45) {
              fVar53 = fVar45;
            }
            if (fVar53 <= local_7a0.Y) {
              fVar53 = local_7a0.Y;
            }
            if (fVar47 <= fVar50) {
              fVar50 = fVar47;
            }
            if (fVar48 <= fVar51) {
              fVar51 = fVar48;
            }
            if (fVar52 <= fVar46) {
              fVar52 = fVar46;
            }
            if (fVar45 <= fVar50) {
              fVar50 = fVar45;
            }
            if (fVar46 <= fVar51) {
              fVar51 = fVar46;
            }
            if (local_7a0.Y <= fVar50) {
              fVar50 = local_7a0.Y;
            }
            if (local_7a0.X <= fVar51) {
              fVar51 = local_7a0.X;
            }
            if (fVar52 <= local_7a0.X) {
              fVar52 = local_7a0.X;
            }
            pSVar5 = local_9a8;
            if ((((fVar56 <= fVar53 - fVar13) || (fVar52 < local_988->Left)) ||
                (local_988->Right <= fVar51 && fVar51 != local_988->Right)) ||
               ((fVar53 < local_988->Top ||
                (local_988->Bottom <= fVar50 && fVar50 != local_988->Bottom)))) {
              TVar35 = (TVector2<float>_u_0_s_0)local_938;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::DoesNotIntersect.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::DoesNotIntersect.TextData.Reference + 8))
                            (HittestGridDebuggingText::DoesNotIntersect.TextData.Reference,local_8c8
                            );
                }
                uVar34 = HittestGridDebuggingText::DoesNotIntersect.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))
                            (TVar18.Reference,
                             (undefined1 *)
                             ((longlong)&local_8c4.SharedReferenceCount.ReferenceController + 4));
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar3);
                TVar35 = (TVector2<float>_u_0_s_0)local_938;
                pSVar5 = local_9a8;
              }
            }
            else if ((local_9a8 == (SWidget *)0x0) || (fVar49 - fVar13 < fVar53)) {
              uVar34 = local_a28;
              if (local_998->BoundaryRule == Escape) {
LAB_1424e4775:
                local_a28 = uVar34;
                bVar22 = false;
              }
              else {
                local_8a8 = (local_998->EventHandler).SharedReferenceCount.ReferenceController;
                pSVar5 = (local_998->EventHandler).Object;
                if (local_8a8 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_8a8->SharedReferenceCount =
                       (atomic<int>)((int)local_8a8->SharedReferenceCount + 1);
                  UNLOCK();
                }
                uVar34 = local_a28 | 1;
                if (pSVar5 == (SWidget *)0x0) goto LAB_1424e4775;
                local_8b0 = (local_998->EventHandler).SharedReferenceCount.ReferenceController;
                local_a28 = local_a28 | 3;
                pSVar5 = (local_998->EventHandler).Object;
                if (local_8b0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_8b0->SharedReferenceCount =
                       (atomic<int>)((int)local_8b0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                bVar22 = IsDescendantOf(local_980,pSVar5,pFVar29);
                uVar34 = local_a28;
                if (bVar22) goto LAB_1424e4775;
                bVar22 = true;
              }
              if ((local_a28 & 2) != 0) {
                local_a28 = local_a28 & 0xfffffffd;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_8b0);
              }
              if ((local_a28 & 1) != 0) {
                local_a28 = local_a28 & 0xfffffffe;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_8a8);
              }
              pSVar5 = local_9a8;
              if (bVar22) {
                TVar35 = (TVector2<float>_u_0_s_0)local_948;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::NotADescendant.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::NotADescendant.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *HittestGridDebuggingText::NotADescendant.TextData.Reference + 8))
                              (HittestGridDebuggingText::NotADescendant.TextData.Reference,local_8e4
                              );
                  }
                  uVar34 = HittestGridDebuggingText::NotADescendant.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_948;
                    pSVar5 = local_9a8;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8e0);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_948;
                    pSVar5 = local_9a8;
                  }
                }
              }
              else if (pSVar44->EnabledStateAttribute ==
                       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                       0x0) {
                TVar35 = (TVector2<float>_u_0_s_0)local_910;
                if (param_11 !=
                    (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                     *)0x0) {
                  iVar42 = param_11->ArrayNum;
                  if (iVar42 == param_11->ArrayMax) {
                    iVar42 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                  }
                  pFVar4 = (param_11->AllocatorInstance).Data;
                  param_11->ArrayNum = iVar42 + 1;
                  TVar18 = HittestGridDebuggingText::Disabled.TextData;
                  lVar39 = (longlong)iVar42 * 0x20;
                  if (HittestGridDebuggingText::Disabled.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*HittestGridDebuggingText::Disabled.TextData.Reference +
                                8))(HittestGridDebuggingText::Disabled.TextData.Reference,local_8dc)
                    ;
                  }
                  uVar34 = HittestGridDebuggingText::Disabled.Flags;
                  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                  }
                  else {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                    *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                  if (TVar18.Reference == (ITextData *)0x0) {
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_910;
                    pSVar5 = local_9a8;
                  }
                  else {
                    (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8d8);
                    *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                    (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar3);
                    TVar35 = (TVector2<float>_u_0_s_0)local_910;
                    pSVar5 = local_9a8;
                  }
                }
              }
              else {
                cVar23 = (**(code **)(pSVar44->_padding_ + 0x198))(pSVar44);
                if (cVar23 == '\0') {
                  TVar35 = (TVector2<float>_u_0_s_0)local_940;
                  pSVar5 = local_9a8;
                  if (param_11 !=
                      (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    iVar42 = param_11->ArrayNum;
                    if (iVar42 == param_11->ArrayMax) {
                      iVar42 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                    }
                    pFVar4 = (param_11->AllocatorInstance).Data;
                    param_11->ArrayNum = iVar42 + 1;
                    TVar18 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData;
                    lVar39 = (longlong)iVar42 * 0x20;
                    if (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference !=
                        (ITextData *)0x0) {
                      (**(code **)((longlong)
                                   *HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                    Reference + 8))
                                (HittestGridDebuggingText::DoesNotSuportKeyboardFocus.TextData.
                                 Reference,local_8d4);
                    }
                    uVar34 = HittestGridDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                    }
                    else {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                      *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                      *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                    if (TVar18.Reference == (ITextData *)0x0) {
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_940;
                      pSVar5 = local_9a8;
                    }
                    else {
                      (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8d0);
                      *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_940;
                      pSVar5 = local_9a8;
                    }
                  }
                }
                else {
                  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    LOCK();
                    pTVar3->SharedReferenceCount =
                         (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                    UNLOCK();
                    local_978 = pTVar3;
                    local_970 = pSVar44;
                  }
                  uVar34 = ((uint)((ulonglong)pSVar44 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pSVar44 >> 4)) * -0x7a143595;
                  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
                  local_848.Object = pSVar44;
                  local_848.SharedReferenceCount.ReferenceController = pTVar3;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  iVar42 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                     (local_918,uVar34 >> 0x10 ^ uVar34,&local_848);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  if (iVar42 == -1) {
                    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar3->SharedReferenceCount =
                           (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    pTVar36 = (TReferenceControllerBase<1> *)CONCAT44(uVar55,uVar54);
                    uStack_830._0_4_ = SUB84(pTVar3,0);
                    uVar54 = (undefined4)uStack_830;
                    uStack_830._4_4_ = (undefined4)((ulonglong)pTVar3 >> 0x20);
                    uVar55 = uStack_830._4_4_;
                    local_9f8 = pSVar44;
                    pTStack_9f0 = pTVar3;
                    local_838 = pSVar44;
                    uStack_830 = pTVar3;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar36);
                    TVar35 = (TVector2<float>_u_0_s_0)local_9e8;
                    fVar49 = fVar53;
                    pSVar5 = pSVar44;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::Valid.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::Valid.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*HittestGridDebuggingText::Valid.TextData.Reference +
                                    8))(HittestGridDebuggingText::Valid.TextData.Reference,
                                        &local_8c4.SharedReferenceCount);
                      }
                      uVar34 = HittestGridDebuggingText::Valid.Flags;
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_970;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = local_978;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))
                                  (TVar18.Reference,(undefined1 *)((longlong)&local_8c4.Object + 4))
                        ;
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar3);
                      TVar35 = (TVector2<float>_u_0_s_0)local_9e8;
                    }
                  }
                  else {
                    TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                    pSVar5 = local_9a8;
                    if (param_11 !=
                        (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                         *)0x0) {
                      iVar42 = param_11->ArrayNum;
                      if (iVar42 == param_11->ArrayMax) {
                        iVar42 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                      }
                      pFVar4 = (param_11->AllocatorInstance).Data;
                      param_11->ArrayNum = iVar42 + 1;
                      TVar18 = HittestGridDebuggingText::ParentDisabled.TextData;
                      lVar39 = (longlong)iVar42 * 0x20;
                      if (HittestGridDebuggingText::ParentDisabled.TextData.Reference !=
                          (ITextData *)0x0) {
                        (**(code **)((longlong)
                                     *HittestGridDebuggingText::ParentDisabled.TextData.Reference +
                                    8))(HittestGridDebuggingText::ParentDisabled.TextData.Reference,
                                        local_8cc);
                      }
                      uVar34 = HittestGridDebuggingText::ParentDisabled.Flags;
                      local_9e8 = (TReferenceControllerBase<1> *)
                                  CONCAT44(local_9e8._4_4_,
                                           HittestGridDebuggingText::ParentDisabled.Flags);
                      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                        *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                        *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                      }
                      else {
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                        *(SWidget **)(pFVar4 + lVar39) = local_970;
                        *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                        LOCK();
                        pTVar3->SharedReferenceCount =
                             (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                      if (TVar18.Reference == (ITextData *)0x0) {
                        *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                        pSVar5 = local_9a8;
                      }
                      else {
                        (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_88c);
                        *(undefined4 *)(pFVar4 + lVar39 + 0x18) = local_9e8._0_4_;
                        (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        TVar35 = (TVector2<float>_u_0_s_0)local_9b8;
                        pSVar5 = local_9a8;
                      }
                    }
                  }
                }
              }
            }
            else {
              TVar35 = (TVector2<float>_u_0_s_0)local_950;
              if (param_11 !=
                  (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                   *)0x0) {
                iVar42 = param_11->ArrayNum;
                if (iVar42 == param_11->ArrayMax) {
                  iVar42 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
                }
                pFVar4 = (param_11->AllocatorInstance).Data;
                param_11->ArrayNum = iVar42 + 1;
                TVar18 = HittestGridDebuggingText::PreviousWidgetIsBetter.TextData;
                lVar39 = (longlong)iVar42 * 0x20;
                if (HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.Reference
                              + 8))(HittestGridDebuggingText::PreviousWidgetIsBetter.TextData.
                                    Reference,local_8ec);
                }
                uVar34 = HittestGridDebuggingText::PreviousWidgetIsBetter.Flags;
                if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
                }
                else {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                  *(SWidget **)(pFVar4 + lVar39) = pSVar44;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
                if (TVar18.Reference == (ITextData *)0x0) {
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_950;
                  pSVar5 = local_9a8;
                }
                else {
                  (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8e8);
                  *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
                  (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar3);
                  TVar35 = (TVector2<float>_u_0_s_0)local_950;
                  pSVar5 = local_9a8;
                }
              }
            }
          }
          else if (param_11 !=
                   (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                    *)0x0) {
            iVar42 = param_11->ArrayNum;
            if (iVar42 == param_11->ArrayMax) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_11->AllocatorInstance,&param_11->ArrayMax);
            }
            pFVar4 = (param_11->AllocatorInstance).Data;
            param_11->ArrayNum = iVar42 + 1;
            TVar18 = HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData;
            lVar39 = (longlong)iVar42 * 0x20;
            if (HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference !=
                (ITextData *)0x0) {
              (**(code **)((longlong)
                           *HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                          + 8))(HittestGridDebuggingText::NotCompatibleWithUserIndex.TextData.
                                Reference,local_888);
            }
            uVar34 = HittestGridDebuggingText::NotCompatibleWithUserIndex.Flags;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(undefined8 *)(pFVar4 + lVar39 + 8) = 0;
            }
            else {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              *(SWidget **)(pFVar4 + lVar39) = pSVar44;
              *(TReferenceControllerBase<1> **)(pFVar4 + lVar39 + 8) = pTVar3;
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(ITextData **)(pFVar4 + lVar39 + 0x10) = TVar18.Reference;
            if (TVar18.Reference == (ITextData *)0x0) {
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_a10;
              pSVar5 = local_9a8;
            }
            else {
              (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_8f0);
              *(uint *)(pFVar4 + lVar39 + 0x18) = uVar34;
              (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              TVar35 = local_a10;
              pSVar5 = local_9a8;
            }
          }
        }
LAB_1424e4d31:
        local_9a8 = pSVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar35);
        local_9d8 = local_9d8 - 1;
      } while (-1 < (int)local_9d8);
      iVar38 = (int)local_a18;
      this = local_980;
      iVar42 = local_a08;
      iVar26 = local_a18._4_4_;
    }
    if (local_740.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0
       ) {
      FMemory::Free((void *)local_740.AllocatorInstance.SecondaryData);
    }
    piVar32 = (int *)((longlong)&local_a18 + 4);
    if (iVar42 == 0) {
      piVar32 = (int *)&local_a18;
      iVar26 = iVar38;
    }
    iVar26 = iVar26 + 1;
  }
  if (local_9a8 != (SWidget *)0x0) {
    local_768 = local_988->Left;
    fStack_764 = local_988->Top;
    fStack_760 = local_988->Right;
    fStack_75c = local_988->Bottom;
    pSVar5 = pSVar44;
    this_00 = local_918;
    if (fStack_764 <= fVar49 - fVar13) goto joined_r0x0001424e5211;
    EVar2 = local_998->BoundaryRule;
    if (EVar2 == Explicit) {
      local_a20->Object = (local_998->FocusRecipient).Object;
      pTVar3 = (local_998->FocusRecipient).SharedReferenceCount.ReferenceController;
      (local_a20->SharedReferenceCount).ReferenceController = pTVar3;
      pTVar36 = pTStack_9f0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1424e50dc;
    }
    if (EVar2 == Wrap) {
      local_9c0 = (local_9c8->Right - local_9c8->Left) * __real_3f000000 + local_9c8->Left;
      fStack_9bc = (local_9c8->Bottom - local_9c8->Top) * __real_3f000000 + local_9c8->Top;
      local_7d8 = CONCAT44(fStack_9bc,local_9c0);
      if ((1 < local_a04) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), this_00 = local_918, bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      goto joined_r0x0001424e5211;
    }
    if (EVar2 != Stop) {
      if ((EVar2 != Custom) && (EVar2 != CustomBoundary)) goto joined_r0x0001424e5211;
      bVar21 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_998->FocusDelegate);
      if (bVar21) goto LAB_1424e504d;
    }
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar36 = pTStack_9f0;
    goto LAB_1424e50dc;
  }
  if ((bVar21) && (local_990 == local_9d4)) {
LAB_1424e5026:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0)
    ;
LAB_1424e502f:
    local_a20->Object = (SWidget *)0x0;
    (local_a20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return local_a20;
  }
  uVar43 = (ulonglong)(int)local_a04;
  if ((1 < uVar43) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                          ,0x138,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar28;
  }
  iVar42 = local_a30._4_4_;
  if (uVar43 == 0) {
    iVar42 = (int)local_a30;
  }
  if (iVar42 < 0) {
LAB_1424e4e83:
    pFVar41 = local_998;
    if (local_998->BoundaryRule == Wrap) {
      if (bVar21) goto LAB_1424e5026;
      local_808 = local_988->Left;
      fStack_804 = local_988->Top;
      fStack_800 = local_988->Right;
      fVar56 = local_988->Bottom;
      local_930 = (local_9c8->Right - local_9c8->Left) * fVar51 + local_9c8->Left;
      fStack_92c = (local_9c8->Bottom - local_9c8->Top) * fVar51 + local_9c8->Top;
      local_928 = CONCAT44(fStack_92c,local_930);
      fStack_7fc = fVar56;
      if ((1 < uVar43) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                              ,0x4b0,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
        return pTVar28;
      }
      pTVar33 = &this->NumCells;
      iVar42 = (pTVar33->field0_0x0)._s_0.X;
      fStack_9bc = (float)((this->NumCells).field0_0x0._s_0.Y + -1);
      *(float *)((longlong)&local_928 + uVar43 * 4) = fVar56;
      local_920 = local_928;
      uVar1 = local_920;
      local_920._4_4_ = (float)((ulonglong)local_928 >> 0x20);
      bVar21 = true;
      local_920._0_4_ = (float)local_928;
      fVar50 = (float)((int)ROUND((local_920._4_4_ / CellSize.field0_0x0._s_0.Y +
                                  local_920._4_4_ / CellSize.field0_0x0._s_0.Y) - fVar51) >> 1);
      fVar49 = 0.0;
      if (0 < (int)fVar50) {
        fVar49 = fVar50;
      }
      local_9c0 = (float)(iVar42 + -1);
      fVar50 = (float)((int)ROUND(((float)local_920 / CellSize.field0_0x0._s_0.X +
                                  (float)local_920 / CellSize.field0_0x0._s_0.X) - fVar51) >> 1);
      fVar51 = 0.0;
      if (0 < (int)fVar50) {
        fVar51 = fVar50;
      }
      if ((int)fVar51 < (int)local_9c0) {
        local_9c0 = fVar51;
      }
      if ((int)fVar49 < (int)fStack_9bc) {
        fStack_9bc = fVar49;
      }
      local_a30 = CONCAT44(fStack_9bc,local_9c0);
      local_920 = uVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      goto LAB_1424e403c;
    }
    if (local_998->BoundaryRule != CustomBoundary) goto LAB_1424e500d;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_998->FocusDelegate,
               &local_7b8);
    if (((*(int *)&(pFVar41->FocusDelegate).field_0x10 != 0) &&
        (plVar6 = *(longlong **)&(pFVar41->FocusDelegate).field_0x8, plVar6 != (longlong *)0x0)) &&
       (cVar23 = (**(code **)(*plVar6 + 0x38))(), cVar23 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_7b8);
LAB_1424e504d:
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      Execute(&pFVar41->FocusDelegate,local_a20,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      return local_a20;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7b8);
  }
  else {
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x138,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    piVar32 = (int *)((longlong)&local_a30 + 4);
    if (uVar43 == 0) {
      piVar32 = (int *)&local_a30;
    }
    if ((1 < uVar43) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\IntPoint.h"
                            ,0x144,L""), bVar22)) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
      return pTVar28;
    }
    pTVar33 = &this->NumCells;
    if (uVar43 != 0) {
      pTVar33 = (TIntPoint<int> *)((longlong)&(this->NumCells).field0_0x0 + 4);
    }
    if ((pTVar33->field0_0x0)._s_0.X <= *piVar32) goto LAB_1424e4e83;
  }
LAB_1424e500d:
  pTVar33 = &this->NumCells;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0);
  goto LAB_1424e403c;
joined_r0x0001424e5211:
  while (local_918 = this_00, pSVar5 != (SWidget *)0x0) {
    if (pSVar5->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>(this_00,&local_8c4,(bool *)&local_9f8);
      local_7f8.Left = pFVar20->Left;
      local_7f8.Top = pFVar20->Top;
      local_7f8.Right = pFVar20->Right;
      local_7f8.Bottom = pFVar20->Bottom;
      local_7e8.Left = pFVar19->Left;
      local_7e8.Top = pFVar19->Top;
      local_7e8.Right = pFVar19->Right;
      local_7e8.Bottom = pFVar19->Bottom;
      FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_7>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_8>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_9>_>
                (this,local_a20,&local_7e8,&local_7f8,local_a04,local_9cc,param_5,pFVar41,param_7,
                 param_8,param_9,local_9d0,param_11,this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_9f0);
      return local_a20;
    }
    pTVar3 = (pSVar5->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pSVar40 = (SWidget *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar11 = pTVar3->SharedReferenceCount;
      do {
        if (aVar11 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1424e5245;
        }
        LOCK();
        aVar27 = pTVar3->SharedReferenceCount;
        bVar21 = aVar11 == aVar27;
        if (bVar21) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
          aVar27 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar27;
      } while (!bVar21);
      pSVar40 = (pSVar5->PersistentState).PaintParent.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pSVar5 = pSVar40;
    this_00 = local_918;
  }
LAB_1424e5245:
  local_a20->Object = pSVar44;
  (local_a20->SharedReferenceCount).ReferenceController = pTStack_9f0;
  pTVar36 = (TReferenceControllerBase<1> *)0x0;
LAB_1424e50dc:
  pTVar28 = local_a20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
  return pTVar28;
}

// FindLastByPredicate<`FWidgetPath::GetDeepestWindow'::__l2::<lambda_1>_> @ 1424e5490

int __thiscall
TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
FindLastByPredicate<_FWidgetPath::GetDeepestWindow_::__l2::<lambda_1>_>
          (TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          <lambda_1> param_1,int param_2)

{
  ForElementType<FArrangedWidget> *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ForElementType<FArrangedWidget> FVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
    this = (TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar6
    ;
  }
  FVar6 = (ForElementType<FArrangedWidget>)((longlong)this + (longlong)param_2 * 0x48);
  do {
    if (FVar6 == (ForElementType<FArrangedWidget>)this) {
      return -1;
    }
    pFVar1 = (ForElementType<FArrangedWidget> *)((longlong)FVar6 + -0x10);
    FVar6 = (ForElementType<FArrangedWidget>)((longlong)FVar6 + -0x48);
    cVar4 = (**(code **)(*(longlong *)*pFVar1 + 0x208))();
  } while (cVar4 == '\0');
  return (int)(((longlong)FVar6 - (longlong)this) / 0x48);
}

// GenerateIndexedVertexBatches<FSlateBoxElement,`FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>_&,`FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_2>_&,`FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_3>_&> @ 1424e5760

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::
GenerateIndexedVertexBatches<FSlateBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateBoxElement>_::__l2::<lambda_3>_&>
          (FSlateElementBatcher *this,
          TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,<lambda_1> *param_2,<lambda_2> *param_3,<lambda_3> *param_4)

{
  ESlateDrawEffect EVar1;
  char cVar2;
  ESlateDrawEffect EVar3;
  char cVar4;
  byte bVar5;
  TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *pTVar6;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  code *pcVar9;
  byte bVar10;
  bool bVar11;
  ESlatePostRT EVar12;
  FSlateClippingState *pFVar13;
  FSlateRenderBatch *pFVar14;
  longlong lVar15;
  FSlateDrawElement *pFVar16;
  int iVar17;
  ESlateDrawPrimitive EVar18;
  FSlateShaderResource *pFVar19;
  ESlateBatchDrawFlag EVar20;
  uint uVar21;
  ESlateBatchDrawFlag EVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  uint local_150;
  FSlateShaderResource *local_148;
  longlong local_138;
  TVector4<float>_u_0 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FSlateShaderResource *local_e8;
  undefined2 local_e0;
  ESlateDrawEffect local_de;
  ESlateBatchDrawFlag local_dc;
  char local_da;
  FSlateClippingState *local_d8;
  longlong local_c0;
  int local_b8;
  TVector4<float>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FSlateShaderResource *local_78;
  undefined2 local_70;
  ESlateDrawEffect local_6e;
  ESlateBatchDrawFlag local_6c;
  char local_6a;
  FSlateClippingState *local_68;
  
  iVar23 = param_1->ArrayNum;
  local_150 = 0;
  if (iVar23 < 1) {
    return;
  }
  local_138 = 0;
LAB_1424e57c0:
  if ((int)local_150 < 0) {
    return;
  }
  if (iVar23 <= (int)local_150) {
    return;
  }
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (((int)local_150 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar16 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + local_138 * 0x98);
  local_148 = (FSlateShaderResource *)0x0;
  lVar27 = *(longlong *)&pFVar16[1].ClipStateHandle.PrecachedClipIndex;
  EVar1 = pFVar16->DrawEffects;
  if (lVar27 != 0) {
    local_148 = *(FSlateShaderResource **)(lVar27 + 0x10);
  }
  iVar23._0_2_ = pFVar16[1].BatchFlags;
  iVar23._2_1_ = pFVar16[1].SceneIndex;
  iVar23._3_1_ = pFVar16[1].DrawEffects;
  if ((iVar23 == 3) || (iVar23 == 1)) {
    bVar5 = 1;
    if (iVar23 != 3) goto LAB_1424e587a;
  }
  else {
    bVar5 = 0;
LAB_1424e587a:
    if (iVar23 != 2) {
      bVar10 = 0;
      goto LAB_1424e5888;
    }
  }
  bVar10 = 1;
LAB_1424e5888:
  iVar23 = pFVar16->LayerId;
  cVar2 = pFVar16->SceneIndex;
  local_e0 = 2;
  EVar22 = -(ushort)bVar10 & TileV | -(ushort)bVar5 & TileU | pFVar16->BatchFlags;
  local_e8 = local_148;
  local_de = EVar1;
  local_dc = EVar22;
  local_da = cVar2;
  local_d8 = ResolveClippingState(param_3->__this,pFVar16);
  local_c0 = local_138 * 0x98;
  uVar26 = local_150;
  EVar18 = TriangleList;
  do {
    local_138 = local_138 + 1;
    lVar27 = local_c0 + 0x98;
    uVar26 = uVar26 + 1;
    local_c0 = lVar27;
    if (((int)uVar26 < 0) || (param_1->ArrayNum <= (int)uVar26)) goto LAB_1424e5ac1;
    if (((int)uVar26 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar16 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + lVar27);
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    pFVar19 = (FSlateShaderResource *)0x0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    lVar27 = *(longlong *)&pFVar16[1].ClipStateHandle.PrecachedClipIndex;
    EVar3 = pFVar16->DrawEffects;
    if (lVar27 != 0) {
      pFVar19 = *(FSlateShaderResource **)(lVar27 + 0x10);
    }
    iVar17._0_2_ = pFVar16[1].BatchFlags;
    iVar17._2_1_ = pFVar16[1].SceneIndex;
    iVar17._3_1_ = pFVar16[1].DrawEffects;
    if ((iVar17 == 3) || (iVar17 == 1)) {
      bVar5 = 1;
      if (iVar17 != 3) goto LAB_1424e59ea;
LAB_1424e59f3:
      bVar10 = 1;
    }
    else {
      bVar5 = 0;
LAB_1424e59ea:
      if (iVar17 == 2) goto LAB_1424e59f3;
      bVar10 = 0;
    }
    cVar4 = pFVar16->SceneIndex;
    iVar17 = pFVar16->LayerId;
    local_70 = 2;
    EVar20 = -(ushort)bVar10 & TileV | -(ushort)bVar5 & TileU | pFVar16->BatchFlags;
    local_b8 = iVar17;
    local_78 = pFVar19;
    local_6e = EVar3;
    local_6c = EVar20;
    local_6a = cVar4;
    pFVar13 = ResolveClippingState(param_3->__this,pFVar16);
    local_68 = pFVar13;
    if (iVar17 != iVar23) break;
    bVar11 = FShaderParams::operator==
                       ((FShaderParams *)&local_a8._s_0,(FShaderParams *)&local_118._s_0);
    EVar18 = (ESlateDrawPrimitive)local_e0;
    if (((((!bVar11) || (pFVar19 != local_148)) || ((ESlateDrawPrimitive)local_e0 != TriangleList))
        || ((local_e0._1_1_ != '\0' || (EVar3 != EVar1)))) ||
       ((EVar20 != EVar22 || ((cVar4 != cVar2 || (pFVar13 != local_d8)))))) goto LAB_1424e5ac1;
  } while( true );
  EVar18 = (ESlateDrawPrimitive)local_e0;
LAB_1424e5ac1:
  uVar25 = (ulonglong)(int)local_150;
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar14 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar23,(FShaderParams *)&local_118._s_0,local_148,EVar18,
                         local_e0._1_1_,EVar1,EVar22,cVar2);
  }
  else {
    pFVar14 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar23,(FShaderParams *)&local_118._s_0,
                         local_148,EVar18,local_e0._1_1_,EVar1,EVar22,cVar2);
  }
  pFVar14->ClippingState = local_d8;
  if (local_148 != (FSlateShaderResource *)0x0) {
    EVar12 = (**(code **)(local_148->_padding_ + 0x20))(local_148);
    pFVar14->CachedUsedPostBuffers = EVar12;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar12;
  }
  iVar23 = 0;
  for (uVar21 = local_150; uVar21 < uVar26; uVar21 = uVar21 + 1) {
    pTVar6 = param_4->DrawElements;
    uVar24 = 0;
    if ((int)uVar21 < pTVar6->ArrayNum) {
      uVar24 = ~uVar21 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar15 = (longlong)(int)uVar21 * 0x98;
    lVar27 = (pTVar6->AllocatorInstance)._padding_;
    bVar5 = *(byte *)(lVar15 + 0x43 + lVar27);
    if ((*(int *)(lVar15 + 0x90 + lVar27) == 3) ||
       ((((*(float *)(lVar15 + 0x58 + lVar27) == 0.0 && (*(float *)(lVar15 + 0x5c + lVar27) == 0.0))
         && (*(float *)(lVar15 + 0x60 + lVar27) == 0.0)) &&
        (*(float *)(lVar15 + 100 + lVar27) == 0.0)))) {
      iVar17 = iVar23 + 4;
      if ((GSlateFeathering != 0) && ((bVar5 & 0x10) != 0)) {
        iVar17 = iVar23 + 8;
      }
    }
    else {
      iVar17 = iVar23 + 0x10;
      if ((GSlateFeathering != 0) && ((bVar5 & 0x10) != 0)) {
        iVar17 = iVar23 + 0x1c;
      }
    }
    iVar23 = iVar17;
  }
  pTVar7 = pFVar14->SourceVertices;
  uVar21 = iVar23 + pTVar7->ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (pTVar7->ArrayMax < (int)uVar21) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (0x2c,4,uVar21,&pTVar7->AllocatorInstance,pTVar7->ArrayNum,&pTVar7->ArrayMax);
  }
  pTVar8 = pFVar14->SourceIndices;
  uVar21 = iVar23 + pTVar8->ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (pTVar8->ArrayMax < (int)uVar21) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar21,&pTVar8->AllocatorInstance,pTVar8->ArrayNum,&pTVar8->ArrayMax);
  }
  if ((int)local_150 < (int)uVar26) {
    lVar27 = uVar25 * 0x98;
    do {
      uVar24 = (uint)uVar25;
      uVar21 = 0;
      if ((int)uVar24 < param_1->ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      `FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()
                (param_2,pFVar14,
                 (FSlateBoxElement *)((param_1->AllocatorInstance)._padding_ + lVar27));
      uVar25 = (ulonglong)(uVar24 + 1);
      lVar27 = lVar27 + 0x98;
    } while ((int)(uVar24 + 1) < (int)uVar26);
  }
  iVar23 = param_1->ArrayNum;
  local_150 = uVar26;
  if (iVar23 <= (int)uVar26) {
    return;
  }
  goto LAB_1424e57c0;
}

// GenerateIndexedVertexBatches<FSlateLineElement,`FSlateElementBatcher::AddLineElements'::__l2::<lambda_1>_&,`FSlateElementBatcher::AddLineElements'::__l2::<lambda_2>_&,`FSlateElementBatcher::AddLineElements'::__l2::<lambda_3>_&> @ 1424e5db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::
GenerateIndexedVertexBatches<FSlateLineElement,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddLineElements_::__l2::<lambda_3>_&>
          (FSlateElementBatcher *this,
          TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,<lambda_1> *param_2,<lambda_2> *param_3,<lambda_3> *param_4)

{
  ESlateDrawEffect EVar1;
  char cVar2;
  ESlateDrawEffect EVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  ESlatePostRT EVar12;
  uint uVar13;
  FSlateClippingState *pFVar14;
  FSlateRenderBatch *pFVar15;
  FSlateDrawElement *pFVar16;
  FSlateShaderResource *pFVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ESlateDrawPrimitive EVar22;
  ESlateDrawPrimitive EVar23;
  ESlateBatchDrawFlag EVar24;
  ESlateShader EVar25;
  longlong lVar26;
  float fVar27;
  ESlateShader local_1c8;
  longlong local_1a0;
  uint local_198;
  TVector4<float>_u_0 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  FSlateShaderResource *local_148;
  ESlateDrawPrimitive local_140;
  undefined1 local_13f;
  ESlateDrawEffect local_13e;
  ESlateBatchDrawFlag local_13c;
  char local_13a;
  FSlateClippingState *local_138;
  longlong local_128;
  float local_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  int local_e8;
  TVector4<float>_u_0 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ESlateDrawPrimitive local_a0;
  ESlateShader local_9f;
  ESlateDrawEffect local_9e;
  undefined2 local_9c;
  char local_9a;
  FSlateClippingState *local_98;
  
  uVar10 = _UNK_150689648;
  uVar9 = ___xmm_3f800000000000000000000000000000;
  fVar8 = __real_3f000000;
  fVar7 = __real_3f800000;
  iVar21 = param_1->ArrayNum;
  local_198 = 0;
  if (0 < iVar21) {
    local_1a0 = 0;
    do {
      if ((int)local_198 < 0) {
        return;
      }
      if (iVar21 <= (int)local_198) {
        return;
      }
      local_178._0_8_ = 0;
      local_178._8_8_ = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      if (((int)local_198 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_13f = 0;
      local_1c8 = Default;
      pFVar16 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + local_1a0 * 0x88);
      EVar1 = pFVar16->DrawEffects;
      fVar27 = *(float *)&pFVar16[1].ClipStateHandle.CachedClipState;
      if (pFVar16[1].ClipStateHandle.field_0xc == '\0') {
        EVar22 = LineList;
        if (fVar27 != fVar7) goto LAB_1424e5f29;
      }
      else {
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        local_13f = 4;
        local_168 = uVar9;
        uStack_160 = uVar10;
        local_158 = uVar9;
        uStack_150 = uVar10;
        local_1c8 = LineSegment;
        fVar27 = fVar27 * fVar8;
        local_118 = (fVar27 - fVar7) / (fVar27 + fVar7);
        uStack_114 = 0;
        uStack_10c = 0;
        local_178._s_0.Y = (float)0;
        local_178._s_0.X = local_118;
        local_178._8_8_ = 0;
LAB_1424e5f29:
        EVar22 = TriangleList;
      }
      iVar21 = pFVar16->LayerId;
      cVar2 = pFVar16->SceneIndex;
      local_148 = (FSlateShaderResource *)0x0;
      local_13c = None;
      local_140 = EVar22;
      local_13e = EVar1;
      local_13a = cVar2;
      local_138 = ResolveClippingState(param_3->__this,pFVar16);
      pFVar17 = (FSlateShaderResource *)0x0;
      local_128 = local_1a0 * 0x88;
      EVar24 = None;
      uVar18 = local_198;
      while( true ) {
        local_1a0 = local_1a0 + 1;
        lVar26 = local_128 + 0x88;
        uVar18 = uVar18 + 1;
        local_128 = lVar26;
        if (((int)uVar18 < 0) || (param_1->ArrayNum <= (int)uVar18)) break;
        if (((int)uVar18 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + lVar26);
        local_d8._0_8_ = 0;
        EVar25 = Default;
        local_b8 = 0;
        uStack_b0 = 0;
        EVar3 = pFVar16->DrawEffects;
        fVar27 = *(float *)&pFVar16[1].ClipStateHandle.CachedClipState;
        if (pFVar16[1].ClipStateHandle.field_0xc == '\0') {
          EVar23 = LineList;
          if (fVar27 != fVar7) goto LAB_1424e608d;
        }
        else {
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          EVar25 = LineSegment;
          local_b8 = uVar9;
          uStack_b0 = uVar10;
          fVar27 = fVar27 * fVar8;
          local_118 = (fVar27 - fVar7) / (fVar27 + fVar7);
          uStack_114 = 0;
          uStack_10c = 0;
          local_d8._s_0.Y = (float)0;
          local_d8._s_0.X = local_118;
LAB_1424e608d:
          EVar23 = TriangleList;
        }
        local_d8._8_8_ = 0;
        cVar4 = pFVar16->SceneIndex;
        iVar5 = pFVar16->LayerId;
        local_a8 = 0;
        local_9c = 0;
        local_e8 = iVar5;
        local_c8 = local_b8;
        uStack_c0 = uStack_b0;
        local_a0 = EVar23;
        local_9f = EVar25;
        local_9e = EVar3;
        local_9a = cVar4;
        pFVar14 = ResolveClippingState(param_3->__this,pFVar16);
        pFVar17 = local_148;
        EVar24 = local_13c;
        local_98 = pFVar14;
        if ((((((iVar5 != iVar21) ||
               (bVar11 = FShaderParams::operator==
                                   ((FShaderParams *)&local_d8._s_0,(FShaderParams *)&local_178._s_0
                                   ), pFVar17 = local_148, EVar24 = local_13c, !bVar11)) ||
              (local_148 != (FSlateShaderResource *)0x0)) ||
             ((EVar23 != EVar22 || (EVar25 != local_1c8)))) ||
            ((EVar3 != EVar1 || ((local_13c != None || (cVar4 != cVar2)))))) ||
           (pFVar14 != local_138)) break;
      }
      pFVar14 = local_138;
      if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
        pFVar15 = FSlateBatchData::AddRenderBatch
                            (this->BatchData,iVar21,(FShaderParams *)&local_178._s_0,pFVar17,EVar22,
                             local_1c8,EVar1,EVar24,cVar2);
      }
      else {
        pFVar15 = FSlateCachedElementList::AddRenderBatch
                            (this->CurrentCachedElementList,iVar21,(FShaderParams *)&local_178._s_0,
                             pFVar17,EVar22,local_1c8,EVar1,EVar24,cVar2);
      }
      uVar20 = (ulonglong)(int)local_198;
      pFVar15->ClippingState = pFVar14;
      if (pFVar17 != (FSlateShaderResource *)0x0) {
        EVar12 = (**(code **)(pFVar17->_padding_ + 0x20))(pFVar17);
        pFVar15->CachedUsedPostBuffers = EVar12;
        this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar12;
      }
      `FSlateElementBatcher::AddLineElements'::__l2::<lambda_3>::operator()
                (param_4,pFVar15,local_198,uVar18);
      if ((int)local_198 < (int)uVar18) {
        lVar26 = uVar20 * 0x88;
        do {
          uVar19 = (uint)uVar20;
          uVar13 = 0;
          if ((int)uVar19 < param_1->ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          `FSlateElementBatcher::AddLineElements'::__l2::<lambda_1>::operator()
                    (param_2,pFVar15,
                     (FSlateLineElement *)((param_1->AllocatorInstance)._padding_ + lVar26));
          uVar20 = (ulonglong)(uVar19 + 1);
          lVar26 = lVar26 + 0x88;
        } while ((int)(uVar19 + 1) < (int)uVar18);
      }
      iVar21 = param_1->ArrayNum;
      local_198 = uVar18;
    } while ((int)uVar18 < iVar21);
  }
  return;
}

// GenerateIndexedVertexBatches<FSlateRoundedBoxElement,`FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>_&,`FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_2>_&,`FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_3>_&> @ 1424e6320

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateElementBatcher::
GenerateIndexedVertexBatches<FSlateRoundedBoxElement,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_1>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_2>_&,_FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>_::__l2::<lambda_3>_&>
          (FSlateElementBatcher *this,
          TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1,<lambda_1> *param_2,<lambda_2> *param_3,<lambda_3> *param_4)

{
  ESlateDrawEffect EVar1;
  char cVar2;
  ESlateDrawEffect EVar3;
  char cVar4;
  byte bVar5;
  TVector2<float>_u_0_s_0 TVar6;
  TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *pTVar7;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar9;
  code *pcVar10;
  byte bVar11;
  bool bVar12;
  ESlatePostRT EVar13;
  uint uVar14;
  FSlateClippingState *pFVar15;
  FSlateRenderBatch *pFVar16;
  longlong lVar17;
  FSlateDrawElement *pFVar18;
  int iVar19;
  ESlateDrawPrimitive EVar20;
  FSlateShaderResource *pFVar21;
  ESlateBatchDrawFlag EVar22;
  uint uVar23;
  ESlateBatchDrawFlag EVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 local_158;
  uint local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  TVector4<float>_u_0 local_118;
  TVector2<float>_u_0 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FSlateShaderResource *local_e8;
  undefined2 local_e0;
  ESlateDrawEffect local_de;
  ESlateBatchDrawFlag local_dc;
  char local_da;
  FSlateClippingState *local_d8;
  longlong local_c8;
  int local_b8;
  TVector4<float>_u_0 local_a8;
  float local_98;
  float fStack_94;
  int iStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  FSlateShaderResource *local_78;
  undefined2 local_70;
  ESlateDrawEffect local_6e;
  ESlateBatchDrawFlag local_6c;
  char local_6a;
  FSlateClippingState *local_68;
  
  iVar25 = param_1->ArrayNum;
  local_148 = 0;
  if (iVar25 < 1) {
    return;
  }
  local_140 = 0;
LAB_1424e6380:
  if ((int)local_148 < 0) {
    return;
  }
  if (iVar25 <= (int)local_148) {
    return;
  }
  local_108 = (TVector2<float>_u_0)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (((int)local_148 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_118._s_0.X = 0.0;
  pFVar18 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + local_140 * 0xd0);
  TVar6 = (pFVar18->LocalSize).field0_0x0._s_0;
  local_118._s_0.Y = (float)*(undefined4 *)&pFVar18[2].ClipStateHandle.CachedClipState;
  EVar1 = pFVar18->DrawEffects;
  local_158._0_4_ = TVar6.X;
  lVar26 = *(longlong *)&pFVar18[1].ClipStateHandle.PrecachedClipIndex;
  local_118._s_0.Z = (float)local_158;
  local_158._4_4_ = TVar6.Y;
  local_118._s_0.W = local_158._4_4_;
  local_158 = (FSlateShaderResource *)0x0;
  local_108 = pFVar18[2].LocalSize.field0_0x0;
  uStack_100._0_4_ = pFVar18[2].LayerId;
  uStack_100._4_4_ = pFVar18[2].Scale;
  if (lVar26 != 0) {
    local_158 = *(FSlateShaderResource **)(lVar26 + 0x10);
  }
  iVar25._0_2_ = pFVar18[1].BatchFlags;
  iVar25._2_1_ = pFVar18[1].SceneIndex;
  iVar25._3_1_ = pFVar18[1].DrawEffects;
  if ((iVar25 == 3) || (iVar25 == 1)) {
    bVar5 = 1;
    if (iVar25 != 3) goto LAB_1424e6470;
  }
  else {
    bVar5 = 0;
LAB_1424e6470:
    if (iVar25 != 2) {
      bVar11 = 0;
      goto LAB_1424e647e;
    }
  }
  bVar11 = 1;
LAB_1424e647e:
  iVar25 = pFVar18->LayerId;
  cVar2 = pFVar18->SceneIndex;
  local_e0 = 0x702;
  EVar24 = -(ushort)bVar11 & TileV | -(ushort)bVar5 & TileU | pFVar18->BatchFlags;
  local_e8 = local_158;
  local_de = EVar1;
  local_dc = EVar24;
  local_da = cVar2;
  local_d8 = ResolveClippingState(param_3->__this,pFVar18);
  local_c8 = local_140 * 0xd0;
  uVar27 = local_148;
  EVar20 = TriangleList;
  do {
    local_140 = local_140 + 1;
    lVar26 = local_c8 + 0xd0;
    uVar27 = uVar27 + 1;
    local_c8 = lVar26;
    if (((int)uVar27 < 0) || (param_1->ArrayNum <= (int)uVar27)) goto LAB_1424e66e4;
    if (((int)uVar27 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_88 = 0;
    uStack_80 = 0;
    pFVar21 = (FSlateShaderResource *)0x0;
    local_a8._s_0.X = 0.0;
    pFVar18 = (FSlateDrawElement *)((param_1->AllocatorInstance)._padding_ + lVar26);
    TVar6 = (pFVar18->LocalSize).field0_0x0._s_0;
    local_a8._s_0.Y = (float)*(undefined4 *)&pFVar18[2].ClipStateHandle.CachedClipState;
    EVar3 = pFVar18->DrawEffects;
    local_138 = TVar6.X;
    lVar26 = *(longlong *)&pFVar18[1].ClipStateHandle.PrecachedClipIndex;
    local_a8._s_0.Z = local_138;
    fStack_134 = TVar6.Y;
    local_a8._s_0.W = fStack_134;
    local_98 = pFVar18[2].LocalSize.field0_0x0._s_0.X;
    fStack_94 = pFVar18[2].LocalSize.field0_0x0._s_0.Y;
    iStack_90 = pFVar18[2].LayerId;
    fStack_8c = pFVar18[2].Scale;
    if (lVar26 != 0) {
      pFVar21 = *(FSlateShaderResource **)(lVar26 + 0x10);
    }
    iVar19._0_2_ = pFVar18[1].BatchFlags;
    iVar19._2_1_ = pFVar18[1].SceneIndex;
    iVar19._3_1_ = pFVar18[1].DrawEffects;
    if ((iVar19 == 3) || (iVar19 == 1)) {
      bVar5 = 1;
      if (iVar19 != 3) goto LAB_1424e6614;
LAB_1424e661d:
      bVar11 = 1;
    }
    else {
      bVar5 = 0;
LAB_1424e6614:
      if (iVar19 == 2) goto LAB_1424e661d;
      bVar11 = 0;
    }
    cVar4 = pFVar18->SceneIndex;
    iVar19 = pFVar18->LayerId;
    local_70 = 0x702;
    EVar22 = -(ushort)bVar11 & TileV | -(ushort)bVar5 & TileU | pFVar18->BatchFlags;
    local_b8 = iVar19;
    local_78 = pFVar21;
    local_6e = EVar3;
    local_6c = EVar22;
    local_6a = cVar4;
    pFVar15 = ResolveClippingState(param_3->__this,pFVar18);
    local_68 = pFVar15;
    if (iVar19 != iVar25) break;
    bVar12 = FShaderParams::operator==
                       ((FShaderParams *)&local_a8._s_0,(FShaderParams *)&local_118._s_0);
    EVar20 = (ESlateDrawPrimitive)local_e0;
    if (((((!bVar12) || (pFVar21 != local_158)) || ((ESlateDrawPrimitive)local_e0 != TriangleList))
        || ((local_e0._1_1_ != '\a' || (EVar3 != EVar1)))) ||
       ((EVar22 != EVar24 || ((cVar4 != cVar2 || (pFVar15 != local_d8)))))) goto LAB_1424e66e4;
  } while( true );
  EVar20 = (ESlateDrawPrimitive)local_e0;
LAB_1424e66e4:
  if (this->CurrentCachedElementList == (FSlateCachedElementList *)0x0) {
    pFVar16 = FSlateBatchData::AddRenderBatch
                        (this->BatchData,iVar25,(FShaderParams *)&local_118._s_0,local_158,EVar20,
                         local_e0._1_1_,EVar1,EVar24,cVar2);
  }
  else {
    pFVar16 = FSlateCachedElementList::AddRenderBatch
                        (this->CurrentCachedElementList,iVar25,(FShaderParams *)&local_118._s_0,
                         local_158,EVar20,local_e0._1_1_,EVar1,EVar24,cVar2);
  }
  pFVar16->ClippingState = local_d8;
  if (local_158 != (FSlateShaderResource *)0x0) {
    EVar13 = (**(code **)(local_158->_padding_ + 0x20))(local_158);
    pFVar16->CachedUsedPostBuffers = EVar13;
    this->UsedSlatePostBuffers = this->UsedSlatePostBuffers | EVar13;
  }
  iVar25 = 0;
  for (uVar23 = local_148; uVar23 < uVar27; uVar23 = uVar23 + 1) {
    pTVar7 = param_4->DrawElements;
    uVar14 = 0;
    if ((int)uVar23 < pTVar7->ArrayNum) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar17 = (longlong)(int)uVar23 * 0xd0;
    lVar26 = (pTVar7->AllocatorInstance)._padding_;
    bVar5 = *(byte *)(lVar17 + 0x43 + lVar26);
    if ((*(int *)(lVar17 + 0x90 + lVar26) == 3) ||
       ((((*(float *)(lVar17 + 0x58 + lVar26) == 0.0 && (*(float *)(lVar17 + 0x5c + lVar26) == 0.0))
         && (*(float *)(lVar17 + 0x60 + lVar26) == 0.0)) &&
        (*(float *)(lVar17 + 100 + lVar26) == 0.0)))) {
      iVar19 = iVar25 + 4;
      if ((GSlateFeathering != 0) && ((bVar5 & 0x10) != 0)) {
        iVar19 = iVar25 + 8;
      }
    }
    else {
      iVar19 = iVar25 + 0x10;
      if ((GSlateFeathering != 0) && ((bVar5 & 0x10) != 0)) {
        iVar19 = iVar25 + 0x1c;
      }
    }
    iVar25 = iVar19;
  }
  pTVar8 = pFVar16->SourceVertices;
  uVar23 = iVar25 + pTVar8->ArrayNum;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (pTVar8->ArrayMax < (int)uVar23) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (0x2c,4,uVar23,&pTVar8->AllocatorInstance,pTVar8->ArrayNum,&pTVar8->ArrayMax);
  }
  pTVar9 = pFVar16->SourceIndices;
  uVar23 = iVar25 + pTVar9->ArrayNum;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (pTVar9->ArrayMax < (int)uVar23) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar23,&pTVar9->AllocatorInstance,pTVar9->ArrayNum,&pTVar9->ArrayMax);
  }
  if ((int)local_148 < (int)uVar27) {
    lVar26 = (longlong)(int)local_148 * 0xd0;
    do {
      uVar23 = 0;
      if ((int)local_148 < param_1->ArrayNum) {
        uVar23 = ~local_148 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      `FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()
                (param_2,pFVar16,
                 (FSlateRoundedBoxElement *)((param_1->AllocatorInstance)._padding_ + lVar26));
      local_148 = local_148 + 1;
      lVar26 = lVar26 + 0xd0;
    } while ((int)local_148 < (int)uVar27);
  }
  iVar25 = param_1->ArrayNum;
  local_148 = uVar27;
  if (iVar25 <= (int)uVar27) {
    return;
  }
  goto LAB_1424e6380;
}

// GetTypeHash<SWidget_const_,1> @ 1424e6fc0

uint __cdecl GetTypeHash<SWidget_const_,1>(TSharedPtr<SWidget_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Merge<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,`FHittestGrid::GetCollapsedWidgets'::__l10::<lambda_1>_>_> @ 1424e7220

void __cdecl
AlgoImpl::
Merge<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,_FHittestGrid::GetCollapsedWidgets_::__l10::<lambda_1>_>_>
          (FWidgetIndex *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FHittestGrid::FWidgetIndex,_private:_void___cdecl_FHittestGrid::GetCollapsedWidgets(TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>_&,int,int)const_::_10_::<lambda_1>_>
          param_5)

{
  uint uVar1;
  FHittestGrid *pFVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  FWidgetData *pFVar8;
  FWidgetData *pFVar9;
  FWidgetIndex *pFVar10;
  FWidgetIndex *pFVar12;
  int iVar13;
  FWidgetIndex *this;
  FWidgetIndex *pFVar14;
  FWidgetIndex *pFVar15;
  uint uVar16;
  int iVar17;
  int local_58;
  FWidgetIndex *pFVar11;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar17 = 0;
      if (0 < param_2 - local_58) {
        uVar16 = param_2 - local_58;
        do {
          iVar7 = (uVar16 >> 1) + iVar17;
          pFVar8 = FHittestGrid::FWidgetIndex::GetWidgetData(param_1 + param_2);
          pFVar9 = FHittestGrid::FWidgetIndex::GetWidgetData
                             (param_1 + (longlong)iVar7 + (longlong)local_58);
          if ((pFVar8->PrimarySort < pFVar9->PrimarySort) ||
             ((pFVar8->PrimarySort == pFVar9->PrimarySort &&
              ((pFVar8->SecondarySort).Order < (pFVar9->SecondarySort).Order)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) {
            iVar17 = iVar7 + (uVar16 & 1);
          }
          uVar1 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar1 != 0);
      }
      local_58 = local_58 + iVar17;
      if (param_2 <= local_58) {
        return;
      }
      iVar17 = 0;
      this = param_1 + local_58;
      uVar16 = param_3 - param_2;
      if (0 < (int)uVar16) {
        do {
          iVar7 = (uVar16 >> 1) + iVar17;
          pFVar8 = FHittestGrid::FWidgetIndex::GetWidgetData
                             (param_1 + (longlong)iVar7 + (longlong)param_2);
          pFVar9 = FHittestGrid::FWidgetIndex::GetWidgetData(this);
          if ((pFVar8->PrimarySort < pFVar9->PrimarySort) ||
             ((pFVar8->PrimarySort == pFVar9->PrimarySort &&
              ((pFVar8->SecondarySort).Order < (pFVar9->SecondarySort).Order)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            iVar17 = (uVar16 & 1) + iVar7;
          }
          uVar1 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar1 != 0);
      }
      iVar13 = (iVar17 - local_58) + param_2;
      iVar7 = param_2 - local_58;
      if ((iVar7 != 0) && (iVar7 < iVar13)) {
        pFVar10 = this + iVar7;
        pFVar14 = this;
        pFVar11 = this + iVar7;
        do {
          while( true ) {
            pFVar12 = pFVar10 + 1;
            pFVar15 = pFVar14 + 1;
            iVar7 = pFVar10->WidgetIndex;
            uVar4 = *(undefined4 *)&pFVar10->field_0xc;
            pFVar2 = pFVar14->Grid;
            iVar5 = pFVar14->WidgetIndex;
            uVar6 = *(undefined4 *)&pFVar14->field_0xc;
            pFVar14->Grid = pFVar10->Grid;
            pFVar14->WidgetIndex = iVar7;
            *(undefined4 *)&pFVar14->field_0xc = uVar4;
            pFVar10->Grid = pFVar2;
            pFVar10->WidgetIndex = iVar5;
            *(undefined4 *)&pFVar10->field_0xc = uVar6;
            pFVar14 = pFVar15;
            if (pFVar12 == this + iVar13) break;
            pFVar10 = pFVar12;
            if (pFVar15 == pFVar11) {
              pFVar11 = pFVar12;
            }
          }
          pFVar10 = pFVar11;
        } while (pFVar15 != pFVar11);
      }
      local_58 = local_58 + 1 + iVar17;
      param_2 = param_2 + iVar17;
    } while (local_58 < param_2);
  }
  return;
}

// Reverse<FWidgetAndPointer> @ 1424e8500

void __cdecl AlgoImpl::Reverse<FWidgetAndPointer>(FWidgetAndPointer *param_1,int param_2)

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
  FDeprecateSlateVector2D FVar11;
  FDeprecateSlateVector2D FVar12;
  undefined8 uVar13;
  FDeprecateSlateVector2D FVar14;
  undefined8 uVar15;
  FWidgetAndPointer *pFVar16;
  longlong lVar17;
  
  lVar17 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar16 = param_1 + (param_2 + -1);
    do {
      lVar1 = pFVar16->_padding_;
      lVar2 = param_1->_padding_;
      lVar3 = param_1->_padding_;
      lVar4 = param_1->_padding_;
      lVar5 = param_1->_padding_;
      lVar6 = param_1->_padding_;
      lVar7 = param_1->_padding_;
      lVar8 = param_1->_padding_;
      lVar9 = param_1->_padding_;
      lVar10 = param_1->_padding_;
      FVar11 = (param_1->OptionalPointerPosition).TypedValue.CurrentCursorPosition;
      FVar12 = (param_1->OptionalPointerPosition).TypedValue.LastCursorPosition;
      uVar13 = *(undefined8 *)&(param_1->OptionalPointerPosition).bIsSet;
      param_1->_padding_ = pFVar16->_padding_;
      param_1->_padding_ = lVar1;
      lVar1 = pFVar16->_padding_;
      param_1->_padding_ = pFVar16->_padding_;
      param_1->_padding_ = lVar1;
      lVar1 = pFVar16->_padding_;
      param_1->_padding_ = pFVar16->_padding_;
      param_1->_padding_ = lVar1;
      lVar1 = pFVar16->_padding_;
      param_1->_padding_ = pFVar16->_padding_;
      param_1->_padding_ = lVar1;
      FVar14 = (pFVar16->OptionalPointerPosition).TypedValue.CurrentCursorPosition;
      param_1->_padding_ = pFVar16->_padding_;
      (param_1->OptionalPointerPosition).TypedValue.CurrentCursorPosition = FVar14;
      uVar15 = *(undefined8 *)&(pFVar16->OptionalPointerPosition).bIsSet;
      (param_1->OptionalPointerPosition).TypedValue.LastCursorPosition =
           (pFVar16->OptionalPointerPosition).TypedValue.LastCursorPosition;
      *(undefined8 *)&(param_1->OptionalPointerPosition).bIsSet = uVar15;
      pFVar16->_padding_ = lVar2;
      pFVar16->_padding_ = lVar3;
      pFVar16->_padding_ = lVar4;
      pFVar16->_padding_ = lVar5;
      pFVar16->_padding_ = lVar6;
      pFVar16->_padding_ = lVar7;
      pFVar16->_padding_ = lVar8;
      pFVar16->_padding_ = lVar9;
      pFVar16->_padding_ = lVar10;
      (pFVar16->OptionalPointerPosition).TypedValue.CurrentCursorPosition = FVar11;
      (pFVar16->OptionalPointerPosition).TypedValue.LastCursorPosition = FVar12;
      *(undefined8 *)&(pFVar16->OptionalPointerPosition).bIsSet = uVar13;
      lVar17 = lVar17 + -1;
      pFVar16 = pFVar16 + -1;
      param_1 = param_1 + 1;
    } while (lVar17 != 0);
  }
  return;
}

// RotateInternal<TTuple<int,int>_> @ 1424e85e0

int __cdecl
AlgoImpl::RotateInternal<TTuple<int,int>_>(TTuple<int,int> *param_1,int param_2,int param_3)

{
  TTuple<int,int> TVar1;
  TTuple<int,int> *pTVar2;
  TTuple<int,int> *pTVar4;
  TTuple<int,int> *pTVar5;
  TTuple<int,int> *pTVar6;
  TTuple<int,int> *pTVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar2 = param_1 + param_3;
    pTVar5 = param_1;
    pTVar3 = param_1 + param_3;
    do {
      while( true ) {
        pTVar4 = pTVar2 + 1;
        pTVar6 = pTVar5 + 1;
        TVar1 = *pTVar5;
        *pTVar5 = *pTVar2;
        *pTVar2 = TVar1;
        pTVar5 = pTVar6;
        if (pTVar4 == param_1 + param_2) break;
        pTVar2 = pTVar4;
        if (pTVar6 == pTVar3) {
          pTVar3 = pTVar4;
        }
      }
      pTVar2 = pTVar3;
    } while (pTVar6 != pTVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FHittestGrid::FWidgetIndex> @ 1424e8660

int __cdecl
AlgoImpl::RotateInternal<FHittestGrid::FWidgetIndex>(FWidgetIndex *param_1,int param_2,int param_3)

{
  FHittestGrid *pFVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  FWidgetIndex *pFVar6;
  FWidgetIndex *pFVar8;
  FWidgetIndex *pFVar9;
  FWidgetIndex *pFVar10;
  FWidgetIndex *pFVar7;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar6 = param_1 + param_3;
    pFVar9 = param_1;
    pFVar7 = param_1 + param_3;
    do {
      while( true ) {
        pFVar8 = pFVar6 + 1;
        pFVar10 = pFVar9 + 1;
        iVar2 = pFVar6->WidgetIndex;
        uVar3 = *(undefined4 *)&pFVar6->field_0xc;
        pFVar1 = pFVar9->Grid;
        iVar4 = pFVar9->WidgetIndex;
        uVar5 = *(undefined4 *)&pFVar9->field_0xc;
        pFVar9->Grid = pFVar6->Grid;
        pFVar9->WidgetIndex = iVar2;
        *(undefined4 *)&pFVar9->field_0xc = uVar3;
        pFVar6->Grid = pFVar1;
        pFVar6->WidgetIndex = iVar4;
        *(undefined4 *)&pFVar6->field_0xc = uVar5;
        pFVar9 = pFVar10;
        if (pFVar8 == param_1 + param_2) break;
        pFVar6 = pFVar8;
        if (pFVar10 == pFVar7) {
          pFVar7 = pFVar8;
        }
      }
      pFVar6 = pFVar7;
    } while (pFVar10 != pFVar7);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TTuple<int,int>,FIdentityFunctor,TDereferenceWrapper<TTuple<int,int>,`FSlateBatchData::MergeRenderBatches'::__l6::<lambda_1>_>_> @ 1424e8b50

void __cdecl
AlgoImpl::
StableSortInternal<TTuple<int,int>,FIdentityFunctor,TDereferenceWrapper<TTuple<int,int>,_FSlateBatchData::MergeRenderBatches_::__l6::<lambda_1>_>_>
          (TTuple<int,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<int,int>,_public:_void___cdecl_FSlateBatchData::MergeRenderBatches(void)_::_6_::<lambda_1>_>
          param_4)

{
  TTuple<int,int> *pTVar1;
  TTuple<int,int> TVar2;
  int iVar3;
  TTuple<int,int> *pTVar4;
  TTuple<int,int> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  TTuple<int,int> *pTVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  TTuple<int,int> *pTVar18;
  TTuple<int,int> *pTVar19;
  int iVar20;
  int iVar21;
  int local_68;
  TTuple<int,int> *pTVar5;
  
  uVar8 = (ulonglong)param_2;
  if (0 < param_2) {
    iVar14 = 1;
    pTVar13 = param_1 + 1;
    lVar17 = (uVar8 - 1 >> 1) + 1;
    do {
      if ((iVar14 < param_2) && (*(int *)&pTVar13->field_0x4 < *(int *)&pTVar13[-1].field_0x4)) {
        TVar2 = pTVar13[-1];
        pTVar13[-1] = *pTVar13;
        *pTVar13 = TVar2;
      }
      iVar14 = iVar14 + 2;
      pTVar13 = pTVar13 + 2;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  local_68 = 2;
  uVar9 = uVar8;
  if (2 < param_2) {
    do {
      iVar14 = local_68 * 2;
      lVar17 = 0;
      uVar9 = uVar9 & 0xffffffff;
      pTVar13 = param_1;
      do {
        iVar20 = (int)uVar9;
        iVar21 = iVar20;
        if (iVar14 <= iVar20) {
          iVar21 = iVar14;
        }
        iVar11 = 0;
        iVar10 = local_68;
        if (0 < local_68) {
          do {
            if (iVar21 <= iVar10) break;
            iVar15 = 0;
            if (0 < iVar10 - iVar11) {
              uVar12 = iVar10 - iVar11;
              do {
                iVar3 = (uVar12 >> 1) + iVar15;
                if (*(int *)&pTVar13[(longlong)iVar3 + (longlong)iVar11].field_0x4 <=
                    *(int *)&pTVar13[iVar10].field_0x4) {
                  iVar15 = iVar3 + (uVar12 & 1);
                }
                uVar16 = uVar12 >> 1;
                uVar12 = uVar12 >> 1;
              } while (uVar16 != 0);
            }
            iVar11 = iVar11 + iVar15;
            if (iVar10 <= iVar11) break;
            iVar15 = 0;
            pTVar1 = pTVar13 + iVar11;
            if (0 < iVar21 - iVar10) {
              uVar12 = iVar21 - iVar10;
              do {
                uVar16 = uVar12 >> 1;
                if (*(int *)&pTVar13[(longlong)(int)(uVar16 + iVar15) + (longlong)iVar10].field_0x4
                    < *(int *)&pTVar1->field_0x4) {
                  iVar15 = (uVar12 & 1) + uVar16 + iVar15;
                }
                uVar12 = uVar16;
              } while (uVar16 != 0);
            }
            iVar7 = (iVar15 - iVar11) + iVar10;
            iVar3 = iVar10 - iVar11;
            if ((iVar3 != 0) && (iVar3 < iVar7)) {
              pTVar4 = pTVar1 + iVar3;
              pTVar18 = pTVar1;
              pTVar5 = pTVar1 + iVar3;
              do {
                while( true ) {
                  pTVar6 = pTVar4 + 1;
                  pTVar19 = pTVar18 + 1;
                  TVar2 = *pTVar18;
                  *pTVar18 = *pTVar4;
                  *pTVar4 = TVar2;
                  pTVar18 = pTVar19;
                  if (pTVar6 == pTVar1 + iVar7) break;
                  pTVar4 = pTVar6;
                  if (pTVar19 == pTVar5) {
                    pTVar5 = pTVar6;
                  }
                }
                pTVar4 = pTVar5;
              } while (pTVar19 != pTVar5);
            }
            iVar10 = iVar10 + iVar15;
            iVar11 = iVar11 + 1 + iVar15;
          } while (iVar11 < iVar10);
        }
        uVar9 = (ulonglong)(uint)(iVar20 + local_68 * -2);
        lVar17 = lVar17 + (longlong)local_68 * 2;
        pTVar13 = pTVar13 + (longlong)local_68 * 2;
      } while (lVar17 < (longlong)uVar8);
      uVar9 = (ulonglong)(uint)param_2;
      local_68 = iVar14;
    } while (iVar14 < param_2);
  }
  return;
}

// StableSortInternal<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,`FHittestGrid::GetCollapsedWidgets'::__l10::<lambda_1>_>_> @ 1424e8dc0

void __cdecl
AlgoImpl::
StableSortInternal<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,_FHittestGrid::GetCollapsedWidgets_::__l10::<lambda_1>_>_>
          (FWidgetIndex *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FHittestGrid::FWidgetIndex,_private:_void___cdecl_FHittestGrid::GetCollapsedWidgets(TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>_&,int,int)const_::_10_::<lambda_1>_>
          param_4)

{
  int iVar1;
  FHittestGrid *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FWidgetData *pFVar5;
  FWidgetData *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FWidgetIndex *this;
  int iVar10;
  FWidgetIndex *this_00;
  
  iVar7 = 0;
  if (0 < param_2) {
    this_00 = param_1 + 1;
    this = param_1;
    do {
      if (iVar7 + 1 < param_2) {
        pFVar5 = FHittestGrid::FWidgetIndex::GetWidgetData(this_00);
        pFVar6 = FHittestGrid::FWidgetIndex::GetWidgetData(this);
        if ((pFVar5->PrimarySort < pFVar6->PrimarySort) ||
           ((pFVar5->PrimarySort == pFVar6->PrimarySort &&
            ((pFVar5->SecondarySort).Order < (pFVar6->SecondarySort).Order)))) {
          iVar1 = this[1].WidgetIndex;
          uVar3 = *(undefined4 *)&this[1].field_0xc;
          pFVar2 = this->Grid;
          iVar9 = this->WidgetIndex;
          uVar4 = *(undefined4 *)&this->field_0xc;
          this->Grid = this[1].Grid;
          this->WidgetIndex = iVar1;
          *(undefined4 *)&this->field_0xc = uVar3;
          this[1].Grid = pFVar2;
          this[1].WidgetIndex = iVar9;
          *(undefined4 *)&this[1].field_0xc = uVar4;
        }
      }
      iVar7 = iVar7 + 2;
      this_00 = this_00 + 2;
      this = this + 2;
    } while (iVar7 < param_2);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar7 * 2;
      iVar8 = 0;
      iVar9 = param_2;
      do {
        iVar10 = iVar9;
        if (iVar1 <= iVar9) {
          iVar10 = iVar1;
        }
        Merge<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,_FHittestGrid::GetCollapsedWidgets_::__l10::<lambda_1>_>_>
                  (param_1 + iVar8,iVar7,iVar10,param_3,param_4);
        iVar8 = iVar8 + iVar1;
        iVar9 = iVar9 + iVar7 * -2;
      } while (iVar8 < param_2);
      iVar7 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EFlowDirectionPreference> @ 1424e8ee0

UEnum * __cdecl StaticEnum<enum_EFlowDirectionPreference>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference,(UObject *)pUVar1,
                       L"EFlowDirectionPreference");
  }
  return Z_Registration_Info_UEnum_EFlowDirectionPreference.OuterSingleton;
}

// StaticEnum<enum_EFocusCause> @ 1424e8f20

UEnum * __cdecl StaticEnum<enum_EFocusCause>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFocusCause.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EFocusCause.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EFocusCause,(UObject *)pUVar1,L"EFocusCause");
  }
  return Z_Registration_Info_UEnum_EFocusCause.OuterSingleton;
}

// StaticEnum<enum_EWidgetClipping> @ 1424e8f60

UEnum * __cdecl StaticEnum<enum_EWidgetClipping>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetClipping,(UObject *)pUVar1,
                       L"EWidgetClipping");
  }
  return Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton;
}

// StaticEnum<enum_EWidgetNavigationRoutingPolicy> @ 1424e8fa0

UEnum * __cdecl StaticEnum<enum_EWidgetNavigationRoutingPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetNavigationRoutingPolicy,(UObject *)pUVar1,
                       L"EWidgetNavigationRoutingPolicy");
  }
  return Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.OuterSingleton;
}

// TransformRect<TTransform2<float>_> @ 1424e8fe0

FSlateRotatedRect * __cdecl
TransformRect<TTransform2<float>_>
          (FSlateRotatedRect *__return_storage_ptr__,TTransform2<float> *param_1,
          FSlateRotatedRect *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector2<float>_u_0_s_0 TVar4;
  TVector2<float>_u_0_s_0 TVar5;
  TVector2<float>_u_0 TVar6;
  TVector2<float>_u_0 TVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  
  fVar16 = (param_1->M).M[1][0];
  fVar1 = (param_1->M).M[1][1];
  TVar4 = (param_2->ExtentY).field0_0x0._s_0;
  local_res8._4_4_ = TVar4.Y;
  fVar8 = fVar16 * (float)local_res8._4_4_;
  TVar5 = (param_2->ExtentX).field0_0x0._s_0;
  fVar2 = (param_1->M).M[0][1];
  fVar3 = (param_1->M).M[0][0];
  local_res8._0_4_ = TVar4.X;
  fVar12 = fVar3 * (float)(undefined4)local_res8;
  fVar9 = fVar2 * (float)(undefined4)local_res8;
  fVar13 = fVar1 * (float)local_res8._4_4_;
  local_res8._0_4_ = TVar5.X;
  fVar14 = fVar3 * (float)(undefined4)local_res8;
  TVar4 = (param_2->TopLeft).field0_0x0._s_0;
  local_res8._4_4_ = TVar5.Y;
  fVar10 = fVar16 * (float)local_res8._4_4_;
  fVar11 = fVar2 * (float)(undefined4)local_res8;
  fVar15 = fVar1 * (float)local_res8._4_4_;
  local_res8._0_4_ = TVar4.X;
  local_res8._4_4_ = TVar4.Y;
  fVar16 = fVar16 * (float)local_res8._4_4_;
  local_res8._4_4_ =
       fVar2 * (float)(undefined4)local_res8 + fVar1 * (float)local_res8._4_4_ +
       (param_1->Trans).field0_0x0._s_0.Y;
  local_res8._0_4_ =
       fVar3 * (float)(undefined4)local_res8 + fVar16 + (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->TopLeft).field0_0x0 = local_res8;
  TVar6._s_0.Y = fVar15 + fVar11;
  TVar6._s_0.X = fVar14 + fVar10;
  (__return_storage_ptr__->ExtentX).field0_0x0 = TVar6;
  TVar7._s_0.Y = fVar13 + fVar9;
  TVar7._s_0.X = fVar12 + fVar8;
  (__return_storage_ptr__->ExtentY).field0_0x0 = TVar7;
  return __return_storage_ptr__;
}

// TransformRect<TTransform2<float>_> @ 1424e9100

FSlateRect * __cdecl
TransformRect<TTransform2<float>_>
          (FSlateRect *__return_storage_ptr__,TTransform2<float> *param_1,FSlateRect *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (param_1->M).M[0][0];
  fVar5 = (param_1->M).M[1][0] * param_2->Top + fVar3 * param_2->Left +
          (param_1->Trans).field0_0x0._s_0.X;
  fVar4 = (param_1->M).M[1][1] * param_2->Top + (param_1->M).M[0][1] * param_2->Left +
          (param_1->Trans).field0_0x0._s_0.Y;
  fVar2 = param_2->Bottom * (param_1->M).M[1][1] + param_2->Right * (param_1->M).M[0][1] +
          (param_1->Trans).field0_0x0._s_0.Y;
  fVar1 = param_2->Right * fVar3 + param_2->Bottom * (param_1->M).M[1][0] +
          (param_1->Trans).field0_0x0._s_0.X;
  fVar3 = fVar2;
  if (fVar2 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar6 = fVar5;
  if (fVar5 <= fVar1) {
    fVar6 = fVar1;
  }
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  __return_storage_ptr__->Bottom = fVar3;
  __return_storage_ptr__->Right = fVar6;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Left = fVar5;
  return __return_storage_ptr__;
}

// TransformRect<FSlateLayoutTransform> @ 1424e91e0

FSlateRotatedRect * __cdecl
TransformRect<FSlateLayoutTransform>
          (FSlateRotatedRect *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          FSlateRotatedRect *param_2)

{
  float fVar1;
  TVector2<float>_u_0_s_0 TVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float fStackX_c;
  
  fVar1 = param_1->Scale;
  TVar2 = (param_2->ExtentY).field0_0x0._s_0;
  local_res8 = TVar2.X;
  fVar7 = fVar1 * local_res8;
  TVar3 = (param_2->ExtentX).field0_0x0._s_0;
  fStackX_c = TVar2.Y;
  fVar9 = fVar1 * fStackX_c;
  TVar2 = (param_2->TopLeft).field0_0x0._s_0;
  local_res8 = TVar3.X;
  fVar8 = fVar1 * local_res8;
  fStackX_c = TVar3.Y;
  fVar10 = fVar1 * fStackX_c;
  local_res8 = TVar2.X;
  fStackX_c = TVar2.Y;
  TVar4._s_0.Y = fVar1 * fStackX_c + (param_1->Translation).field0_0x0._s_0.Y;
  TVar4._s_0.X = fVar1 * local_res8 + (param_1->Translation).field0_0x0._s_0.X;
  (__return_storage_ptr__->TopLeft).field0_0x0 = TVar4;
  TVar5._s_0.Y = fVar10;
  TVar5._s_0.X = fVar8;
  (__return_storage_ptr__->ExtentX).field0_0x0 = TVar5;
  TVar6._s_0.Y = fVar9;
  TVar6._s_0.X = fVar7;
  (__return_storage_ptr__->ExtentY).field0_0x0 = TVar6;
  return __return_storage_ptr__;
}

// TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 1424e9430

TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
* __thiscall
TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
::
TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined4 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined4 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined4 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined4 *)&this->field_0x140 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  return this;
}

// ~TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1> @ 1424ec250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNavigationMethodProximity::FindBestWidgetInCell_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 1424ec4f0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
           *this)

{
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x138);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x120);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x108);
  DestructItems<FSlateCustomVertsElement,int>
            (*(FSlateCustomVertsElement **)&this->field_0xf0,*(int *)&this->field_0x100);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0xf0);
  DestructItems<FSlateCustomDrawerElement,int>
            (*(FSlateCustomDrawerElement **)&this->field_0xd8,*(int *)&this->field_0xe8);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0xd8);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0xc0);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0xa8);
  DestructItems<FSlateGradientElement,int>
            (*(FSlateGradientElement **)&this->field_0x90,*(int *)&this->field_0xa0);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x90);
  DestructItems<FSlateLineElement,int>
            (*(FSlateLineElement **)&this->field_0x78,*(int *)&this->field_0x88);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x78);
  DestructItems<FSlateSplineElement,int>
            (*(FSlateSplineElement **)&this->field_0x60,*(int *)&this->field_0x70);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x60);
  DestructItems<FSlateShapedTextElement,int>
            (*(FSlateShapedTextElement **)&this->field_0x48,*(int *)&this->field_0x58);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x48);
  DestructItems<FSlateTextElement,int>
            (*(FSlateTextElement **)&this->field_0x30,*(int *)&this->field_0x40);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x30);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->field_0x18);
  FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)this);
  return;
}

// operator() @ 1424fa460

void __thiscall
``FSlateElementBatcher::AddBoxElements<FSlateBoxElement>'::__l2::<lambda_1>::operator()'::__l36::
<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,int param_2,int param_3,int param_4,int param_5)

{
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  
  pTVar1 = param_1->SourceIndices;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_3;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar2 = (pTVar1->AllocatorInstance)._padding_;
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)(lVar2 + (longlong)iVar3 * 4) = param_5;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  param_1->NumIndices = param_1->NumIndices + 1;
  return;
}

// operator() @ 1424fa5c0

void __thiscall
``FSlateElementBatcher::AddBoxElements<FSlateRoundedBoxElement>'::__l2::<lambda_1>::operator()'::
__l37::<lambda_1>::operator()
          (void *this,FSlateRenderBatch *param_1,int param_2,int param_3,int param_4,int param_5)

{
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  
  pTVar1 = param_1->SourceIndices;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_3;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_4;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  lVar2 = (pTVar1->AllocatorInstance)._padding_;
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)(lVar2 + (longlong)iVar3 * 4) = param_5;
  pTVar1 = param_1->SourceIndices;
  param_1->NumIndices = param_1->NumIndices + 1;
  iVar3 = pTVar1->ArrayNum;
  if (iVar3 == pTVar1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar3 + 1;
  *(int *)((pTVar1->AllocatorInstance)._padding_ + (longlong)iVar3 * 4) = param_2;
  param_1->NumIndices = param_1->NumIndices + 1;
  return;
}

// operator() @ 1424fa720

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
``FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()'::__l63::<lambda_1>::
operator()(void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  
  iVar10 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  uVar5 = *(int *)this * 6;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  if (0 < *(int *)this) {
    iVar9 = 1;
    do {
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_38 = iVar9 + -1;
      if (((piVar3 <= &local_38) && (&local_38 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_38;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_34 = iVar9;
      if (((piVar3 <= &local_34) && (&local_34 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar1 = iVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_34;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_30 = iVar1;
      if (((piVar3 <= &local_30) && (&local_30 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_30;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_2c = iVar9;
      if (((piVar3 <= &local_2c) && (&local_2c < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_2c;
      local_28 = iVar9 + 2;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      if (((piVar3 <= &local_28) && (&local_28 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_28;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_24[0] = iVar1;
      if (((piVar3 <= local_24) && (local_24 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar10 = iVar10 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      iVar9 = iVar9 + 4;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_24[0];
    } while (iVar10 < *(int *)this);
  }
  return __return_storage_ptr__;
}

// operator() @ 1424fab70

TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> * __thiscall
``FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()'::__l63::<lambda_1>::
operator()(void *this,
          TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  
  iVar10 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance)._padding_ = 0;
  (__return_storage_ptr__->AllocatorInstance).AllocatedSize = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar2 = 0;
  uVar5 = *(int *)this * 6;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  if (0 < *(int *)this) {
    iVar9 = 1;
    do {
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_38 = iVar9 + -1;
      if (((piVar3 <= &local_38) && (&local_38 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_38;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_34 = iVar9;
      if (((piVar3 <= &local_34) && (&local_34 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar1 = iVar9 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_34;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_30 = iVar1;
      if (((piVar3 <= &local_30) && (&local_30 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_30;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_2c = iVar9;
      if (((piVar3 <= &local_2c) && (&local_2c < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_2c;
      local_28 = iVar9 + 2;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      if (((piVar3 <= &local_28) && (&local_28 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_28;
      piVar3 = (int *)(__return_storage_ptr__->AllocatorInstance)._padding_;
      local_24[0] = iVar1;
      if (((piVar3 <= local_24) && (local_24 < piVar3 + *piVar2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      iVar10 = iVar10 + 1;
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      iVar9 = iVar9 + 4;
      *(int *)((__return_storage_ptr__->AllocatorInstance)._padding_ + (longlong)iVar7 * 4) =
           local_24[0];
    } while (iVar10 < *(int *)this);
  }
  return __return_storage_ptr__;
}

// operator() @ 1424fbac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall <lambda_5>::operator()(<lambda_5> *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  size_t sVar6;
  FOutputDeviceRedirector *pFVar7;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.Base = local_98;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.CurPos = local_98;
  local_b8.End = (wchar_t *)local_18;
  pvVar5 = FGenericPlatformString::Memcpy(local_98,L"SlateDebugger.Invalidate.Enable ",0x40);
  local_b8.CurPos = (wchar_t *)((longlong)pvVar5 + 0x40);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  _Str = L"false";
  if (cVar3 != '\0') {
    _Str = L"true";
  }
  sVar6 = wcslen(_Str);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b8,_Str,(int)sVar6);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xe8);
  pFVar7 = GetGlobalLogSingleton();
  (*pcVar1)(pIVar2,local_b8.Base,pFVar7,0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return;
}

// `scalar_deleting_destructor' @ 1424fbc00

void * __thiscall
IBaseDelegateInstance<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbc30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbc60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbc90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbcc0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FSlateDrawBuffer::Unlock'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbd30

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FSlateWindowElementList::StartMergeRenderBatches'::__l5::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbda0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`FSlateDrawBuffer::Unlock'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbde0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FSlateWindowElementList::StartMergeRenderBatches'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbe20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateWindowElementList::FDeferredPaint,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateWindowElementList::FDeferredPaint,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbee0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateCachedElementList,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateCachedElementList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbf20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateClippingState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateClippingState,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbf60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateWindowElementList,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateWindowElementList,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x9d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbfa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExternalDragOperation,SharedPointerInternals::DefaultDeleter<FExternalDragOperation>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FExternalDragOperation,SharedPointerInternals::DefaultDeleter<FExternalDragOperation>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fbfe0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateSharedHandleData,SharedPointerInternals::DefaultDeleter<FSlateSharedHandleData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSlateSharedHandleData,SharedPointerInternals::DefaultDeleter<FSlateSharedHandleData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc020

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetPath,SharedPointerInternals::DefaultDeleter<FWidgetPath>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWidgetPath,SharedPointerInternals::DefaultDeleter<FWidgetPath>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc060

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FDragDropOperation::_scalar_deleting_destructor_(FDragDropOperation *this,uint param_1)

{
  ~FDragDropOperation(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FExternalDragOperation::_scalar_deleting_destructor_(FExternalDragOperation *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->DraggedFileNames).AllocatorInstance.Data,
             (this->DraggedFileNames).ArrayNum);
  pFVar1 = (this->DraggedFileNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DraggedText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc110

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FGameDragDropOperation::_scalar_deleting_destructor_(FGameDragDropOperation *this,uint param_1)

{
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc150

void * __thiscall FKeyEvent::_scalar_deleting_destructor_(FKeyEvent *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FKeyEvent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc1b0

void * __thiscall
FSlateCachedFastPathRenderingData::_scalar_deleting_destructor_
          (FSlateCachedFastPathRenderingData *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSlateCachedClipState> FVar3;
  ForElementType<FSlateCachedClipState> FVar4;
  
  piVar1 = &(this->CachedClipStates).ArrayMax;
  FVar3 = (this->CachedClipStates).AllocatorInstance.SecondaryData;
  iVar2 = (this->CachedClipStates).ArrayNum;
  if ((this->CachedClipStates).ArrayMax < 0) {
    FVar4 = (ForElementType<FSlateCachedClipState>)this;
    if (FVar3 != (ForElementType<FSlateCachedClipState>)0x0) {
      FVar4 = FVar3;
    }
    DestructItems<FSlateCachedClipState,int>((FSlateCachedClipState *)FVar4,iVar2);
    (this->CachedClipStates).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_>
                (0x10,8,0,(ForElementType<FSlateCachedClipState> *)this,0,piVar1);
    }
  }
  else {
    FVar4 = (ForElementType<FSlateCachedClipState>)this;
    if (FVar3 != (ForElementType<FSlateCachedClipState>)0x0) {
      FVar4 = FVar3;
    }
    DestructItems<FSlateCachedClipState,int>((FSlateCachedClipState *)FVar4,iVar2);
    (this->CachedClipStates).ArrayNum = 0;
  }
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->Indices).AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->Vertices).AllocatorInstance);
  FVar3 = (this->CachedClipStates).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FSlateCachedClipState>)this;
  if (FVar3 != (ForElementType<FSlateCachedClipState>)0x0) {
    FVar4 = FVar3;
  }
  DestructItems<FSlateCachedClipState,int>
            ((FSlateCachedClipState *)FVar4,(this->CachedClipStates).ArrayNum);
  FVar3 = (this->CachedClipStates).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FSlateCachedClipState>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc280

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSlateDrawBuffer::_scalar_deleting_destructor_(FSlateDrawBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSlateDrawBuffer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GCLock);
  DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
            ((TSharedRef<FSlateWindowElementList,1> *)
             (this->WindowElementListsPool).AllocatorInstance.Data,
             (this->WindowElementListsPool).ArrayNum);
  pFVar1 = (this->WindowElementListsPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FSlateWindowElementList,1>,int>
            ((TSharedRef<FSlateWindowElementList,1> *)
             (this->WindowElementLists).AllocatorInstance.Data,(this->WindowElementLists).ArrayNum);
  pFVar1 = (this->WindowElementLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc310

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall FSlateRenderer::_scalar_deleting_destructor_(FSlateRenderer *this,uint param_1)

{
  FSlateFontServices *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSlateRenderer__6B_;
  pFVar1 = (this->SlateFontServices).Object;
  if (pFVar1 != (FSlateFontServices *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar1->OnReleaseResourcesDelegate,this);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x28,
             *(int *)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x30);
  pvVar2 = *(void **)&(this->OnAddBackBufferReadyToPresentPassDelegate).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnAddBackBufferReadyToPresentPassDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBackBufferReadyToPresentDelegate).field_0x28,
             *(int *)&(this->OnBackBufferReadyToPresentDelegate).field_0x30);
  pvVar2 = *(void **)&(this->OnBackBufferReadyToPresentDelegate).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnBackBufferReadyToPresentDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostResizeBackBufferDelegate).field_0x8,
             *(int *)&(this->PostResizeBackBufferDelegate).field_0x10);
  pvVar2 = *(void **)&(this->PostResizeBackBufferDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostResizeBackBufferDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreResizeBackBufferDelegate).field_0x8,
             *(int *)&(this->PreResizeBackBufferDelegate).field_0x10);
  pvVar2 = *(void **)&(this->PreResizeBackBufferDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreResizeBackBufferDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSlateWindowDestroyedDelegate).field_0x8,
             *(int *)&(this->OnSlateWindowDestroyedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnSlateWindowDestroyedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateWindowDestroyedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SlateWindowRendered).field_0x8,*(int *)&(this->SlateWindowRendered).field_0x10
            );
  pvVar2 = *(void **)&(this->SlateWindowRendered).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SlateWindowRendered);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlateFontServices).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc480

void * __thiscall
FSlateShaderResourceManager::_scalar_deleting_destructor_
          (FSlateShaderResourceManager *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSlateShaderResourceManager__6B_;
  ClearTextureMap(this);
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResourceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResourceMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc4f0

void * __thiscall
FSlateVectorGraphicsCache::_scalar_deleting_destructor_
          (FSlateVectorGraphicsCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FSlateVectorGraphicsCache::FRasterRequest,int>
            ((FRasterRequest *)(this->PendingRequests).AllocatorInstance.Data,
             (this->PendingRequests).ArrayNum);
  pFVar1 = (this->PendingRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AtlasFactory).SharedReferenceCount.ReferenceController);
  DestructItems<TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_>,int>
            ((TUniquePtr<FSlateShaderResource,TDefaultDelete<FSlateShaderResource>_> *)
             (this->NonAtlasedTextures).AllocatorInstance.Data,(this->NonAtlasedTextures).ArrayNum);
  pFVar1 = (this->NonAtlasedTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_>,int>
            ((TUniquePtr<FSlateTextureAtlas,TDefaultDelete<FSlateTextureAtlas>_> *)
             (this->Atlases).AllocatorInstance.Data,(this->Atlases).ArrayNum);
  pFVar1 = (this->Atlases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ResourceMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSlateVectorGraphicsCache::FVectorCacheKey,TUniquePtr<FSlateShaderResourceProxy,TDefaultDelete<FSlateShaderResourceProxy>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResourceMap);
  this->_padding_ = (longlong)&___7FSlateFlushableAtlasCache__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1424fc5d0

void * __thiscall
FSlateWidgetStyle::_scalar_deleting_destructor_(FSlateWidgetStyle *this,uint param_1)

{
  *this = (FSlateWidgetStyle)&___7FSlateWidgetStyle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CheckInvalidUMaterial @ 142503980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SlateDrawElement::CheckInvalidUMaterial(UObject *param_1,wchar_t *param_2)

{
  bool bVar1;
  wchar_t *local_res8;
  wchar_t **local_res18;
  FString local_18;
  
  if (((param_1 != (UObject *)0x0) && (GSlateCheckUObjectRenderResources)) &&
     ((bVar1 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false), !bVar1 ||
      (((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0 ||
       (*(FName *)(*(longlong *)&param_1->field_0x10 + 0x18) == MaterialInterfaceClassName)))))) {
    if (1 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if ((bVar1) && (1 < (byte)LogSlate._0_1_)) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    local_res8 = 
    L"We detected an invalid resource in FSlateDrawElement. Check the log for more detail.";
    if (GSlateCheckUObjectRenderResourcesShouldLogFatal != false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      return;
    }
    local_res18 = &local_res8;
    `SlateDrawElement::CheckInvalidUMaterial'::__l70::<lambda_1>::operator()(&local_res18);
  }
  return;
}

// CheckUObject @ 142503af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SlateElementBatcher::CheckUObject(FSlateTextElement *param_1,UObject *param_2)

{
  bool bVar1;
  
  if ((((param_2 != (UObject *)0x0) && (GSlateCheckUObjectRenderResources)) &&
      ((bVar1 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_2,false), !bVar1 ||
       (((*(uint *)&param_2->field_0x8 >> 0x1e & 1) != 0 ||
        (*(FName *)(*(longlong *)&param_2->field_0x10 + 0x18) == MaterialInterfaceClassName)))))) &&
     ((1 < (byte)LogSlate._0_1_ &&
      (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate),
      1 < (byte)LogSlate._0_1_)))) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  return;
}

// ClosestPointOnSlateRotatedRect @ 142504930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<float> __cdecl
ClosestPointOnSlateRotatedRect(TVector2<float> *param_1,FSlateRotatedRect *param_2)

{
  float fVar1;
  TVector2<float>_u_0_s_0 TVar2;
  bool bVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0_s_0 *in_R8;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  TVector2<float>_u_0 local_80;
  TVector2<float>_u_0 local_78;
  TVector2<float>_u_0 local_70;
  TVector2<float>_u_0 local_68;
  ulonglong local_60;
  
  TVar4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fVar12 = __real_7f7fffff;
  local_60 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar6 = in_R8[1].Y;
  fVar7 = in_R8[1].X;
  fVar13 = in_R8[2].X;
  fVar1 = in_R8[2].Y;
  TVar2 = (param_2->TopLeft).field0_0x0._s_0;
  local_88._0_4_ = TVar2.X;
  local_88._4_4_ = TVar2.Y;
  fVar9 = (float)(undefined4)local_88 - in_R8->X;
  fVar10 = (float)local_88._4_4_ - in_R8->Y;
  fVar11 = __real_3f800000 / (fVar1 * fVar7 - fVar13 * fVar6);
  fVar8 = (fVar6 * fVar9 - fVar7 * fVar10) * fVar11;
  if ((fVar8 <= __real_80000000) && (__real_bf800000 <= fVar8)) {
    fVar11 = (fVar1 * fVar9 - fVar13 * fVar10) * fVar11;
    if ((fVar11 < 0.0) || (__real_3f800000 < fVar11)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (param_1->field0_0x0)._s_0 = TVar2;
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
  }
  local_80._s_0 = *in_R8;
  local_88._0_4_ = fVar7 + local_80._s_0.X;
  local_88._4_4_ = fVar6 + local_80._s_0.Y;
  local_78 = local_88;
  local_88._4_4_ = fVar1 + fVar6 + local_80._s_0.Y;
  local_88._0_4_ = fVar13 + (float)(undefined4)local_88;
  local_70 = local_88;
  local_88._4_4_ = fVar1 + local_80._s_0.Y;
  local_88._0_4_ = fVar13 + local_80._s_0.X;
  local_68._s_0 = local_88;
  FMath::ClosestPointOnSegment2D<float>
            ((TVector2<float> *)&local_88,&param_2->TopLeft,(TVector2<float> *)&local_80._s_0);
  fVar7 = (float)local_88._4_4_ - (param_2->TopLeft).field0_0x0._s_0.Y;
  fVar6 = (float)(undefined4)local_88 - (param_2->TopLeft).field0_0x0._s_0.X;
  fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
  if (fVar6 < fVar12) {
    TVar4 = local_88;
    fVar12 = fVar6;
  }
  FMath::ClosestPointOnSegment2D<float>
            ((TVector2<float> *)&local_88,&param_2->TopLeft,(TVector2<float> *)&local_78._s_0);
  fVar7 = (float)local_88._4_4_ - (param_2->TopLeft).field0_0x0._s_0.Y;
  fVar6 = (float)(undefined4)local_88 - (param_2->TopLeft).field0_0x0._s_0.X;
  fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
  TVar5 = local_88;
  if (fVar12 <= fVar6) {
    fVar6 = fVar12;
    TVar5 = TVar4;
  }
  FMath::ClosestPointOnSegment2D<float>
            ((TVector2<float> *)&local_88,&param_2->TopLeft,(TVector2<float> *)&local_70._s_0);
  fVar13 = (float)local_88._4_4_ - (param_2->TopLeft).field0_0x0._s_0.Y;
  fVar7 = (float)(undefined4)local_88 - (param_2->TopLeft).field0_0x0._s_0.X;
  fVar7 = fVar13 * fVar13 + fVar7 * fVar7;
  if (fVar7 < fVar6) {
    TVar5 = local_88;
  }
  FMath::ClosestPointOnSegment2D<float>
            ((TVector2<float> *)&local_88,&param_2->TopLeft,(TVector2<float> *)&local_68._s_0);
  if (fVar6 <= fVar7) {
    fVar7 = fVar6;
  }
  fVar13 = (float)local_88._4_4_ - (param_2->TopLeft).field0_0x0._s_0.Y;
  fVar6 = (float)(undefined4)local_88 - (param_2->TopLeft).field0_0x0._s_0.X;
  if (fVar13 * fVar13 + fVar6 * fVar6 < fVar7) {
    TVar5 = local_88;
  }
  (param_1->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)TVar5;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// ComputePopupFitInRect @ 142505050

FDeprecateSlateVector2D __cdecl
ComputePopupFitInRect
          (FSlateRect *param_1,FSlateRect *param_2,EOrientation *param_3,FSlateRect *param_4,
          bool param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  EOrientation EVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined7 in_stack_00000029;
  char in_stack_00000030;
  float local_78;
  float fStack_74;
  
  bVar7 = param_5;
  fVar11 = (float)param_3[3];
  fVar9 = (float)param_3[1];
  fVar10 = (float)param_3[2];
  fStack_74 = _param_5[1];
  local_78 = *_param_5;
  fVar1 = (float)*param_3;
  EVar6 = param_3[1];
  fVar8 = local_78;
  if (local_78 <= fVar1) {
    fVar8 = fVar1;
  }
  fVar2 = _param_5[2];
  fVar3 = _param_5[3];
  fVar12 = fVar2;
  if (fVar10 <= fVar2) {
    fVar12 = fVar10;
  }
  fVar13 = fStack_74;
  if (fStack_74 <= fVar9) {
    fVar13 = fVar9;
  }
  fVar14 = fVar3;
  if (fVar11 <= fVar3) {
    fVar14 = fVar11;
  }
  if ((fVar14 < fVar13) || (fVar12 < fVar8)) {
    fVar8 = 0.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  if ((((fVar8 == fVar1) && (fVar13 == fVar9)) && (fVar12 == fVar10)) && (fVar14 == fVar11)) {
    param_1->Left = (float)param_3[0];
    param_1->Top = (float)EVar6;
    return (FDeprecateSlateVector2D)param_1;
  }
  fVar10 = fVar10 - fVar1;
  fVar11 = fVar11 - fVar9;
  if (in_stack_00000030 == '\0') {
    in_stack_00000029._3_4_ = param_2->Bottom;
  }
  else {
    if (param_4->Left == 0.0) {
      _param_5 = param_2->Right;
      fVar9 = param_2->Left - fVar10;
      if ((_param_5 + fVar10 < fVar2) || (fVar9 < local_78)) {
        in_stack_00000029._3_4_ = param_2->Top;
      }
      else {
        in_stack_00000029._3_4_ = param_2->Top;
        _param_5 = fVar9;
      }
      goto LAB_142505253;
    }
    fVar9 = param_2->Bottom;
    in_stack_00000029._3_4_ = param_2->Top - fVar11;
    bVar5 = fVar3 <= fVar9 + fVar11;
    bVar4 = in_stack_00000029._3_4_ < fStack_74;
    if ((!bVar5) || (bVar4)) {
      _param_5 = param_2->Left;
      in_stack_00000029._3_4_ = fVar9;
      if ((bVar5) && (bVar4)) {
        _param_5 = (float *)((ulonglong)(uint)fVar9 << 0x20);
        ComputePopupFitInRect(param_1,param_2,param_3,(FSlateRect *)&param_5,bVar7);
        return (FDeprecateSlateVector2D)param_1;
      }
      goto LAB_142505253;
    }
  }
  _param_5 = param_2->Left;
LAB_142505253:
  if (local_78 <= _param_5) {
    local_78 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  }
  else {
    local_78 = local_78 - _param_5;
  }
  if (fStack_74 <= in_stack_00000029._3_4_) {
    fStack_74 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  }
  else {
    fStack_74 = fStack_74 - in_stack_00000029._3_4_;
  }
  if (fVar2 < fVar10 + _param_5) {
    local_78 = fVar2 - (fVar10 + _param_5);
  }
  if (fVar3 < fVar11 + in_stack_00000029._3_4_) {
    fStack_74 = fVar3 - (fVar11 + in_stack_00000029._3_4_);
  }
  param_1->Left = _param_5 + local_78;
  param_1->Top = in_stack_00000029._3_4_ + fStack_74;
  return (FDeprecateSlateVector2D)param_1;
}

// ContainsInteractableWidget @ 142505520

bool __cdecl
ContainsInteractableWidget(TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x60;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      cVar4 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar7 + 0x38) + 0x1b0
                          ))();
      if (cVar4 != '\0') {
        return true;
      }
      lVar7 = lVar7 + -0x60;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return false;
}

// DoesThreadOwnSlateRendering @ 142508180

bool __cdecl DoesThreadOwnSlateRendering(void)

{
  bool bVar1;
  DWORD DVar2;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    return GSlateLoadingThreadId == 0;
  }
  DVar2 = GetCurrentThreadId();
  return DVar2 == GSlateLoadingThreadId;
}

// EmptyLinkFunctionForGeneratedCodeClipping @ 1425085c0

void __cdecl EmptyLinkFunctionForGeneratedCodeClipping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEvents @ 1425085d0

void __cdecl EmptyLinkFunctionForGeneratedCodeEvents(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFlowDirection @ 1425085e0

void __cdecl EmptyLinkFunctionForGeneratedCodeFlowDirection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometry @ 1425085f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationMethod @ 142508600

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationMethod(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationMethodOrthogonal @ 142508610

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationMethodOrthogonal(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationMethodProximity @ 142508620

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationMethodProximity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNavigationRouting @ 142508630

void __cdecl EmptyLinkFunctionForGeneratedCodeNavigationRouting(void)

{
  return;
}

// HandleApplyDisabledEffectOnWidgetsToggled @ 14250fe40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl HandleApplyDisabledEffectOnWidgetsToggled(IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    return;
  }
  if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CurrentBaseApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                       ,0x22a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateApplicationBase::InvalidateAllWidgets
            (FSlateApplicationBase::CurrentBaseApplication.Object,false);
  return;
}

// IsAxisAlignedRotation @ 142510f80

bool __cdecl IsAxisAlignedRotation(TMatrix2x2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->M[0][1];
  fVar2 = param_1->M[1][0];
  fVar3 = param_1->M[1][1];
  fVar4 = (float)((uint)param_1->M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((__real_38d1b717 < fVar4) ||
     (__real_38d1b717 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) &&
       ((((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717 &&
         ((float)((uint)(__real_3f800000 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_38d1b717)) &&
        ((float)((uint)(__real_3f800000 -
                       (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)))) {
      return true;
    }
  }
  else if (((float)((uint)(__real_3f800000 -
                          (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) &&
          ((float)((uint)(__real_3f800000 -
                         (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    return true;
  }
  return false;
}

// IsPointInTriangle @ 142511550

bool __cdecl
IsPointInTriangle(TVector2<float> *param_1,TVector2<float> *param_2,TVector2<float> *param_3,
                 TVector2<float> *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar6 = ((param_3->field0_0x0)._s_0.Y - fVar2) * (fVar5 - fVar4) -
          (fVar1 - fVar2) * ((param_3->field0_0x0)._s_0.X - fVar4);
  fVar8 = __real_3f800000;
  if ((fVar6 <= 0.0) && (fVar8 = __real_bf800000, 0.0 <= fVar6)) {
    fVar8 = 0.0;
  }
  fVar7 = ((param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) *
          (fVar5 - (param_3->field0_0x0)._s_0.X) -
          ((param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) *
          (fVar1 - (param_3->field0_0x0)._s_0.Y);
  fVar6 = __real_3f800000;
  if ((fVar7 <= 0.0) && (fVar6 = __real_bf800000, 0.0 <= fVar7)) {
    fVar6 = 0.0;
  }
  fVar4 = (fVar5 - (param_4->field0_0x0)._s_0.X) * (fVar2 - (param_4->field0_0x0)._s_0.Y) -
          (fVar4 - (param_4->field0_0x0)._s_0.X) * (fVar1 - (param_4->field0_0x0)._s_0.Y);
  fVar5 = __real_3f800000;
  if ((fVar4 <= 0.0) && (fVar5 = __real_bf800000, 0.0 <= fVar4)) {
    fVar5 = 0.0;
  }
  if ((fVar8 == fVar6) && (fVar6 == fVar5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// IsThreadSafeForSlateRendering @ 142511840

bool __cdecl IsThreadSafeForSlateRendering(void)

{
  bool bVar1;
  
  if (GSlateLoadingThreadId == 0) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// ShouldCull @ 14251f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ShouldCull(FSlateWindowElementList *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  SWindow *this;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  FSlateRect local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  uVar11 = FSlateClippingManager::GetClippingIndex(&param_1->ClippingManager);
  lVar13 = (longlong)(int)uVar11;
  if (uVar11 != 0xffffffff) {
    uVar12 = 0;
    if ((int)uVar11 < (param_1->ClippingManager).ClippingStates.ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    pFVar3 = (param_1->ClippingManager).ClippingStates.AllocatorInstance.Data;
    if (pFVar3[lVar13 * 0x48 + 0x34] == (FScriptContainerElement)0x0) {
      this = FSlateWindowElementList::GetPaintWindow(param_1);
      SWindow::GetClippingRectangleInWindow(this,&local_d8);
      if (0.0 < (local_d8.Bottom - local_d8.Top) * (local_d8.Right - local_d8.Left)) {
        iVar2 = *(int *)(pFVar3 + lVar13 * 0x48 + 8);
        puVar14 = *(undefined8 **)(pFVar3 + lVar13 * 0x48);
        puVar1 = (undefined8 *)((longlong)puVar14 + (longlong)iVar2 * 0x24);
        fVar17 = local_d8.Bottom;
        fVar18 = local_d8.Top;
        fVar19 = local_d8.Right;
        fVar20 = local_d8.Left;
        while( true ) {
          if (*(int *)(pFVar3 + lVar13 * 0x48 + 8) != iVar2) {
            `TCheckedPointerIterator<FSlateClippingZone_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
            fVar17 = local_d8.Bottom;
            fVar18 = local_d8.Top;
            fVar19 = local_d8.Right;
            fVar20 = local_d8.Left;
          }
          if (puVar14 == puVar1) {
            return false;
          }
          uVar4 = *puVar14;
          uVar5 = puVar14[1];
          local_c0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          uVar6 = puVar14[2];
          local_c0._0_4_ = (float)uVar5;
          local_b8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
          fVar16 = local_c0._4_4_;
          if (local_c0._4_4_ <= local_b8._4_4_) {
            fVar16 = local_b8._4_4_;
          }
          if (local_b8._4_4_ <= local_c0._4_4_) {
            local_c0._4_4_ = local_b8._4_4_;
          }
          local_b8._0_4_ = (float)uVar6;
          fVar15 = (float)local_c0;
          if ((float)local_c0 <= (float)local_b8) {
            fVar15 = (float)local_b8;
          }
          if ((float)local_b8 <= (float)local_c0) {
            local_c0._0_4_ = (float)local_b8;
          }
          uVar7 = puVar14[3];
          local_b0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
          if (fVar16 <= local_b0._4_4_) {
            fVar16 = local_b0._4_4_;
          }
          if (local_b0._4_4_ <= local_c0._4_4_) {
            local_c0._4_4_ = local_b0._4_4_;
          }
          local_b0._0_4_ = (float)uVar7;
          if (fVar15 <= (float)local_b0) {
            fVar15 = (float)local_b0;
          }
          if ((float)local_b0 <= (float)local_c0) {
            local_c0._0_4_ = (float)local_b0;
          }
          local_c8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          if (fVar16 <= local_c8._4_4_) {
            fVar16 = local_c8._4_4_;
          }
          if (local_c8._4_4_ <= local_c0._4_4_) {
            local_c0._4_4_ = local_c8._4_4_;
          }
          local_c8._0_4_ = (float)uVar4;
          if (fVar15 <= (float)local_c8) {
            fVar15 = (float)local_c8;
          }
          if ((float)local_c8 <= (float)local_c0) {
            local_c0._0_4_ = (float)local_c8;
          }
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
          if (local_c0._4_4_ <= fVar18) {
            local_c0._4_4_ = fVar18;
          }
          if (fVar19 <= fVar15) {
            fVar15 = fVar19;
          }
          if ((float)local_c0 <= fVar20) {
            local_c0._0_4_ = fVar20;
          }
          if (fVar16 < local_c0._4_4_) break;
          if (fVar15 < (float)local_c0) {
            return true;
          }
          if ((fVar15 - (float)local_c0) * (fVar16 - local_c0._4_4_) <= 0.0) {
            return true;
          }
          puVar14 = (undefined8 *)((longlong)puVar14 + 0x24);
          local_c8 = uVar4;
          local_c0 = uVar5;
          local_b8 = uVar6;
          local_b0 = uVar7;
        }
        return true;
      }
    }
    else if ((((byte)pFVar3[lVar13 * 0x48 + 0x30] & 1) != 0) &&
            (((float)((uint)(*(float *)(pFVar3 + lVar13 * 0x48 + 0x10) -
                            *(float *)(pFVar3 + lVar13 * 0x48 + 0x28)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77 ||
             ((float)((uint)(*(float *)(pFVar3 + lVar13 * 0x48 + 0x14) -
                            *(float *)(pFVar3 + lVar13 * 0x48 + 0x2c)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)))) {
      return true;
    }
  }
  return false;
}

// ShouldCull @ 14251fac0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ShouldCull(FSlateWindowElementList *param_1,FPaintGeometry *param_2,FSlateBrush *param_3,
          FLinearColor *param_4)

{
  float *pfVar1;
  UObject *pUVar2;
  float fVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  FUObjectItem *pFVar6;
  float fVar7;
  FName local_res20;
  FString local_28 [2];
  
  fVar3 = __real_38d1b717;
  pfVar1 = &(param_4->field0_0x0)._s_0.A;
  if (*pfVar1 <= __real_38d1b717 && __real_38d1b717 != *pfVar1) {
    if ((param_3->OutlineSettings).Color.ColorUseRule == UseColor_ColorTable) {
      pFVar5 = FSlateColor::GetColorFromTable(&(param_3->OutlineSettings).Color);
      fVar7 = (pFVar5->field0_0x0)._s_0.A;
    }
    else {
      fVar7 = (param_3->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A;
    }
    if (fVar7 < fVar3) {
      return true;
    }
    if ((param_3->OutlineSettings).bUseBrushTransparency != false) {
      return true;
    }
  }
  local_res20.ComparisonIndex.Value = (uint)*(float *)&(param_2->LocalSize).field0_0x0;
  local_res20.Number = *(uint *)((longlong)&(param_2->LocalSize).field0_0x0 + 4);
  if ((((0.0 < param_2->DrawScale * (float)local_res20.ComparisonIndex.Value) &&
       (0.0 < param_2->DrawScale * (float)local_res20.Number)) &&
      (bVar4 = ShouldCull(param_1), !bVar4)) && ((param_3->DrawAs).Value != '\0')) {
    pUVar2 = (param_3->ResourceObject).field0_0x0.DebugPtr;
    if ((pUVar2 == (UObject *)0x0) ||
       ((((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0 &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
        ((*(uint *)&pUVar2->field_0x8 >> 0xf & 1) == 0)))) {
      return false;
    }
    if (2 < (byte)LogSlate._0_1_) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res20.Number = *(uint *)&pUVar2->field_0x1c;
      FName::ToString(&local_res20,local_28);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Attempted_to_ac_15090a780,
                 (FLogCategoryBase *)&LogSlate);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// Z_Construct_UEnum_SlateCore_EFlowDirectionPreference @ 1425244d0

UEnum * __cdecl Z_Construct_UEnum_SlateCore_EFlowDirectionPreference(void)

{
  if (Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton,
               &Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFlowDirectionPreference.InnerSingleton;
}

// Z_Construct_UEnum_SlateCore_EFocusCause @ 142524510

UEnum * __cdecl Z_Construct_UEnum_SlateCore_EFocusCause(void)

{
  if (Z_Registration_Info_UEnum_EFocusCause.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFocusCause.InnerSingleton,
               &Z_Construct_UEnum_SlateCore_EFocusCause_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFocusCause.InnerSingleton;
}

// Z_Construct_UEnum_SlateCore_EWidgetClipping @ 142524550

UEnum * __cdecl Z_Construct_UEnum_SlateCore_EWidgetClipping(void)

{
  if (Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton,
               &Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton;
}

// Z_Construct_UEnum_SlateCore_EWidgetNavigationRoutingPolicy @ 142524590

UEnum * __cdecl Z_Construct_UEnum_SlateCore_EWidgetNavigationRoutingPolicy(void)

{
  if (Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.InnerSingleton,
               &Z_Construct_UEnum_SlateCore_EWidgetNavigationRoutingPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWidgetNavigationRoutingPolicy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnalogInputEvent @ 1425245d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnalogInputEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnalogInputEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnalogInputEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnalogInputEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnalogInputEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCaptureLostEvent @ 142524650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCaptureLostEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCaptureLostEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCaptureLostEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCaptureLostEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCaptureLostEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCharacterEvent @ 1425246d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCharacterEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCharacterEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCharacterEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FCharacterEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCharacterEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCharacterEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFocusEvent @ 142524750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFocusEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFocusEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFocusEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FFocusEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFocusEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFocusEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometry @ 1425247d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometry.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometry.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometry.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMotionEvent @ 142524850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMotionEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMotionEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMotionEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FMotionEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMotionEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMotionEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationEvent @ 1425248d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationEvent.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationMethodOrthogonal @ 142524950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationMethodOrthogonal(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationMethodOrthogonal_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationMethodOrthogonal.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNavigationMethodProximity @ 1425249d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNavigationMethodProximity(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.InnerSingleton,
               &Z_Construct_UScriptStruct_FNavigationMethodProximity_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNavigationMethodProximity.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPointerEvent @ 142524a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPointerEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPointerEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPointerEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FPointerEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPointerEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPointerEvent.InnerSingleton;
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

// Disabled'' @ 150359700

void __cdecl `dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::Disabled__(void)

{
  if (FNavigationMethod::FDebuggingText::Disabled.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035970f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::Disabled.TextData.Reference + 0x10))
              ();
    return;
  }
  return;
}

// DoesNotIntersect'' @ 150359720

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::DoesNotIntersect__(void)

{
  if (FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035972f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::DoesNotIntersect.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// DoesNotSuportKeyboardFocus'' @ 150359740

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus__
          (void)

{
  if (FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035974f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *FNavigationMethod::FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// EmptySet'' @ 150359760

void __cdecl `dynamic_atexit_destructor_for_'FTouchKeySet::EmptySet__(void)

{
  FTouchKeySet::EmptySet._72_4_ = 0;
  if (FTouchKeySet::EmptySet._64_8_ != 0) {
    FMemory::Free((void *)FTouchKeySet::EmptySet._64_8_);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FTouchKeySet::EmptySet);
  return;
}

// Invalid'' @ 1503597a0

void __cdecl `dynamic_atexit_destructor_for_'FSlateCachedElementsHandle::Invalid__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController;
  if (FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503597c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// NotADescendant'' @ 1503597d0

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::NotADescendant__(void)

{
  if (FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503597df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::NotADescendant.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// NotCompatibleWithUserIndex'' @ 1503597f0

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex__
          (void)

{
  if (FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503597ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *FNavigationMethod::FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// OnFindNextFocusableWidgetExecuted'' @ 150359810

void __cdecl `dynamic_atexit_destructor_for_'FHittestGrid::OnFindNextFocusableWidgetExecuted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FHittestGrid::OnFindNextFocusableWidgetExecuted._8_8_,
             FHittestGrid::OnFindNextFocusableWidgetExecuted._16_4_);
  if (FHittestGrid::OnFindNextFocusableWidgetExecuted._8_8_ != 0) {
    FMemory::Free((void *)FHittestGrid::OnFindNextFocusableWidgetExecuted._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FHittestGrid::OnFindNextFocusableWidgetExecuted);
  return;
}

// ParentDisabled'' @ 150359850

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::ParentDisabled__(void)

{
  if (FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035985f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::ParentDisabled.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// PreviousWidgetIsBetter'' @ 150359870

void __cdecl
`dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter__(void)

{
  if (FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035987f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *FNavigationMethod::FDebuggingText::PreviousWidgetIsBetter.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// StandardSet'' @ 150359890

void __cdecl `dynamic_atexit_destructor_for_'FTouchKeySet::StandardSet__(void)

{
  FTouchKeySet::StandardSet._72_4_ = 0;
  if (FTouchKeySet::StandardSet._64_8_ != 0) {
    FMemory::Free((void *)FTouchKeySet::StandardSet._64_8_);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FTouchKeySet::StandardSet);
  return;
}

// Valid'' @ 1503598d0

void __cdecl `dynamic_atexit_destructor_for_'FNavigationMethod::FDebuggingText::Valid__(void)

{
  if (FNavigationMethod::FDebuggingText::Valid.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503598df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FNavigationMethod::FDebuggingText::Valid.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyDisabledEffectOnWidgets'' @ 1503598f0

void __cdecl _dynamic_atexit_destructor_for__CVarApplyDisabledEffectOnWidgets__(void)

{
  CVarApplyDisabledEffectOnWidgets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApplyDisabledEffectOnWidgets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNavigationExperimental'' @ 150359910

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNavigationExperimental__(void)

{
  CVarEnableNavigationExperimental._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNavigationExperimental);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrowSVGAtlasFrameWindow'' @ 150359930

void __cdecl _dynamic_atexit_destructor_for__CVarGrowSVGAtlasFrameWindow__(void)

{
  CVarGrowSVGAtlasFrameWindow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrowSVGAtlasFrameWindow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGrowSVGNonAtlasFrameWindow'' @ 150359950

void __cdecl _dynamic_atexit_destructor_for__CVarGrowSVGNonAtlasFrameWindow__(void)

{
  CVarGrowSVGNonAtlasFrameWindow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGrowSVGNonAtlasFrameWindow);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHitTestGridDebugging'' @ 150359970

void __cdecl _dynamic_atexit_destructor_for__CVarHitTestGridDebugging__(void)

{
  CVarHitTestGridDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHitTestGridDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInvalidationDebugging'' @ 150359990

void __cdecl _dynamic_atexit_destructor_for__CVarInvalidationDebugging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInvalidationDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSVGAtlasPagesBeforeFlush'' @ 1503599b0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxSVGAtlasPagesBeforeFlush__(void)

{
  CVarMaxSVGAtlasPagesBeforeFlush._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSVGAtlasPagesBeforeFlush);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSVGNonAtlasPagesBeforeFlush'' @ 1503599d0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxSVGNonAtlasPagesBeforeFlush__(void)

{
  CVarMaxSVGNonAtlasPagesBeforeFlush._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSVGNonAtlasPagesBeforeFlush)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNavigationDebugging'' @ 1503599f0

void __cdecl _dynamic_atexit_destructor_for__CVarNavigationDebugging__(void)

{
  CVarNavigationDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNavigationDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNavigationIgnoreCustomRules'' @ 150359a10

void __cdecl _dynamic_atexit_destructor_for__CVarNavigationIgnoreCustomRules__(void)

{
  CVarNavigationIgnoreCustomRules._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNavigationIgnoreCustomRules);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNavigationSearchFromCorners'' @ 150359a30

void __cdecl _dynamic_atexit_destructor_for__CVarNavigationSearchFromCorners__(void)

{
  CVarNavigationSearchFromCorners._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNavigationSearchFromCorners);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateCheckUObjectRenderResources'' @ 150359a50

void __cdecl _dynamic_atexit_destructor_for__CVarSlateCheckUObjectRenderResources__(void)

{
  CVarSlateCheckUObjectRenderResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateCheckUObjectRenderResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateCheckUObjectShapedGlyphSequence'' @ 150359a70

void __cdecl _dynamic_atexit_destructor_for__CVarSlateCheckUObjectShapedGlyphSequence__(void)

{
  CVarSlateCheckUObjectShapedGlyphSequence._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateCheckUObjectShapedGlyphSequence);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateContrast'' @ 150359a90

void __cdecl _dynamic_atexit_destructor_for__CVarSlateContrast__(void)

{
  CVarSlateContrast._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateContrast);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateEnableLayoutLocalization'' @ 150359ab0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateEnableLayoutLocalization__(void)

{
  CVarSlateEnableLayoutLocalization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateEnableLayoutLocalization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateFastWidgetPath'' @ 150359ad0

void __cdecl _dynamic_atexit_destructor_for__CVarSlateFastWidgetPath__(void)

{
  CVarSlateFastWidgetPath._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateFastWidgetPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateFlowDirectionShouldFollowCultureByDefault'' @ 150359af0

void __cdecl
_dynamic_atexit_destructor_for__CVarSlateFlowDirectionShouldFollowCultureByDefault__(void)

{
  CVarSlateFlowDirectionShouldFollowCultureByDefault._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSlateFlowDirectionShouldFollowCultureByDefault);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateNewUpdateMethod'' @ 150359b10

void __cdecl _dynamic_atexit_destructor_for__CVarSlateNewUpdateMethod__(void)

{
  CVarSlateNewUpdateMethod._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateNewUpdateMethod);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlateSdfTextDebugVisual'' @ 150359b30

void __cdecl _dynamic_atexit_destructor_for__CVarSlateSdfTextDebugVisual__(void)

{
  CVarSlateSdfTextDebugVisual._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlateSdfTextDebugVisual);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseSharedBreakIterator'' @ 150359b50

void __cdecl _dynamic_atexit_destructor_for__CVarUseSharedBreakIterator__(void)

{
  CVarUseSharedBreakIterator._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseSharedBreakIterator);
  return;
}

// `dynamic_atexit_destructor_for_'CollapsedString'' @ 150359b70

void __cdecl `EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__CollapsedString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CollapsedString.Data.AllocatorInstance.Data;
  if (CollapsedString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CollapsedString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultBorderIndiciesArray'' @ 150359b90

void __cdecl
`FSlateElementBatcher::AddBorderElement<1>'::__l2::
_dynamic_atexit_destructor_for__DefaultBorderIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<1>(FSlateBoxElement_const&___ptr64)___ptr64'
                      ::__l2::DefaultBorderIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultBorderIndiciesArray'' @ 150359bb0

void __cdecl
`FSlateElementBatcher::AddBorderElement<0>'::__l2::
_dynamic_atexit_destructor_for__DefaultBorderIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`private:_void___cdecl_FSlateElementBatcher::AddBorderElement<0>(FSlateBoxElement_const&___ptr64)___ptr64'
                      ::__l2::DefaultBorderIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultShapedTextIndiciesArray'' @ 150359bd0

void __cdecl
`FSlateElementBatcher::BuildShapedTextSequence<1>'::__l121::
_dynamic_atexit_destructor_for__DefaultShapedTextIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<1>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                      ::__l121::DefaultShapedTextIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultShapedTextIndiciesArray'' @ 150359bf0

void __cdecl
`FSlateElementBatcher::BuildShapedTextSequence<0>'::__l121::
_dynamic_atexit_destructor_for__DefaultShapedTextIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`private:_int___cdecl_FSlateElementBatcher::BuildShapedTextSequence<0>(FSlateElementBatcher::FShapedTextBuildContext_const&___ptr64)___ptr64'
                      ::__l121::DefaultShapedTextIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultTextIndiciesArray'' @ 150359c10

void __cdecl
``FSlateElementBatcher::AddTextElement<1>'::__l2::<lambda_1>::operator()'::__l63::
_dynamic_atexit_destructor_for__DefaultTextIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<1>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                      ::__l63::DefaultTextIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultTextIndiciesArray'' @ 150359c30

void __cdecl
``FSlateElementBatcher::AddTextElement<0>'::__l2::<lambda_1>::operator()'::__l63::
_dynamic_atexit_destructor_for__DefaultTextIndiciesArray__(void)

{
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&`public:___cdecl_`private:_void___cdecl_FSlateElementBatcher::AddTextElement<0>(FSlateTextElement_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(FFontOutlineSettings_const&___ptr64,FColor_const&___ptr64,UObject_const*___ptr64,int,float)const___ptr64'
                      ::__l63::DefaultTextIndiciesArray.AllocatorInstance);
  return;
}

// `dynamic_atexit_destructor_for_'Disabled'' @ 150359c50

void __cdecl HittestGridDebuggingText::_dynamic_atexit_destructor_for__Disabled__(void)

{
  if (Disabled.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Disabled.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoesNotIntersect'' @ 150359c70

void __cdecl HittestGridDebuggingText::_dynamic_atexit_destructor_for__DoesNotIntersect__(void)

{
  if (DoesNotIntersect.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoesNotIntersect.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoesNotSuportKeyboardFocus'' @ 150359c90

void __cdecl
HittestGridDebuggingText::_dynamic_atexit_destructor_for__DoesNotSuportKeyboardFocus__(void)

{
  if (DoesNotSuportKeyboardFocus.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoesNotSuportKeyboardFocus.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GlobalGamepadScrollMultiplier'' @ 150359cb0

void __cdecl _dynamic_atexit_destructor_for__GlobalGamepadScrollMultiplier__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GlobalGamepadScrollMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalScrollAmount'' @ 150359cd0

void __cdecl _dynamic_atexit_destructor_for__GlobalScrollAmount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GlobalScrollAmount);
  return;
}

// `dynamic_atexit_destructor_for_'HiddenString'' @ 150359cf0

void __cdecl `EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__HiddenString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = HiddenString.Data.AllocatorInstance.Data;
  if (HiddenString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (HiddenString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'HitTestInvisibleString'' @ 150359d10

void __cdecl
`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__HitTestInvisibleString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = HitTestInvisibleString.Data.AllocatorInstance.Data;
  if (HitTestInvisibleString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (HitTestInvisibleString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogHittestDebug'' @ 150359d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHittestDebug__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHittestDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogPaintedTextRef'' @ 150359d50

void __cdecl UE::Slate::Private::_dynamic_atexit_destructor_for__LogPaintedTextRef__(void)

{
  LogPaintedTextRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&LogPaintedTextRef);
  return;
}

// `dynamic_atexit_destructor_for_'NotADescendant'' @ 150359d70

void __cdecl HittestGridDebuggingText::_dynamic_atexit_destructor_for__NotADescendant__(void)

{
  if (NotADescendant.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NotADescendant.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NotCompatibleWithUserIndex'' @ 150359d90

void __cdecl
HittestGridDebuggingText::_dynamic_atexit_destructor_for__NotCompatibleWithUserIndex__(void)

{
  if (NotCompatibleWithUserIndex.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*NotCompatibleWithUserIndex.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NullArrangedWidget'' @ 150359db0

void __cdecl
`FArrangedWidget::GetNullWidget'::__l2::_dynamic_atexit_destructor_for__NullArrangedWidget__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (NullArrangedWidget.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'ParentDisabled'' @ 150359dd0

void __cdecl HittestGridDebuggingText::_dynamic_atexit_destructor_for__ParentDisabled__(void)

{
  if (ParentDisabled.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ParentDisabled.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PreviousWidgetIsBetter'' @ 150359df0

void __cdecl
HittestGridDebuggingText::_dynamic_atexit_destructor_for__PreviousWidgetIsBetter__(void)

{
  if (PreviousWidgetIsBetter.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*PreviousWidgetIsBetter.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SelfHitTestInvisibleString'' @ 150359e10

void __cdecl
`EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__SelfHitTestInvisibleString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SelfHitTestInvisibleString.Data.AllocatorInstance.Data;
  if (SelfHitTestInvisibleString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SelfHitTestInvisibleString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Type'' @ 150359e30

void __cdecl `FExternalDragOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
      ::__l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
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

// `dynamic_atexit_destructor_for_'Type'' @ 150359e50

void __cdecl `FGameDragDropOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
      ::__l2::Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
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

// `dynamic_atexit_destructor_for_'Valid'' @ 150359e70

void __cdecl HittestGridDebuggingText::_dynamic_atexit_destructor_for__Valid__(void)

{
  if (Valid.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150359e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Valid.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'VisibleString'' @ 150359e90

void __cdecl `EVisibility::ToString'::__l2::_dynamic_atexit_destructor_for__VisibleString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VisibleString.Data.AllocatorInstance.Data;
  if (VisibleString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VisibleString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 15048f640

bool __thiscall
``FSlateDrawBuffer::Unlock'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1467977619424149421>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1467977619424149421>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048fa30

bool __thiscall `SlateDrawElement::CheckInvalidUMaterial'::__l70::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_150596886431006264>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_150596886431006264>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

