// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 150

// SWindow @ 1425bfa80

/* WARNING: Enum "Type": Some values do not have unique names */

SWindow * __thiscall SWindow::SWindow(SWindow *this)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FWindowStyle *pFVar5;
  FHittestGrid *this_00;
  FHittestGrid *pFVar6;
  FName local_res8;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  FSlateInvalidationRoot::FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  (this->MoveResizeRect).Left = -1.0;
  this->_padding_ = (longlong)&_vftable__for__FSlateInvalidationRoot__;
  (this->MoveResizeRect).Top = -1.0;
  (this->MoveResizeRect).Right = -1.0;
  (this->MoveResizeRect).Bottom = -1.0;
  FText::FText(&(this->Title).Value);
  (this->Title).bIsSet = false;
  pFVar6 = (FHittestGrid *)0x0;
  *(undefined8 *)&(this->Title).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Title).Getter = 0;
  *(undefined8 *)&(this->Title).Getter.field_0x8 = 0;
  FText::FText(&(this->CloseButtonToolTipText).Value);
  (this->CloseButtonToolTipText).bIsSet = false;
  *(undefined8 *)&(this->CloseButtonToolTipText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CloseButtonToolTipText).Getter = 0;
  *(undefined8 *)&(this->CloseButtonToolTipText).Getter.field_0x8 = 0;
  this->bIsPopupWindow = false;
  this->bFocusWhenFirstShown = false;
  this->bHasEverBeenShown = false;
  this->bInitiallyMinimized = false;
  this->bInitiallyMaximized = false;
  this->bSizeWillChangeOften = false;
  this->bIsTopmostWindow = false;
  this->bShouldPreserveAspectRatio = false;
  this->bAllowFastUpdate = false;
  this->bManualManageDPI = false;
  this->bFocusWhenFirstShown = true;
  this->bAcceptsInput = true;
  this->bHasOSWindowBorder = false;
  this->bIsMirrorWindow = false;
  this->bIsModalWindow = false;
  this->bHasSizingFrame = false;
  this->bHasMaximizeButton = false;
  this->bHasMinimizeButton = false;
  this->bHasCloseButton = false;
  this->bDragAnywhere = false;
  this->Opacity = 1.0;
  this->SizingRule = UserSized;
  this->TransparencySupport = None;
  this->WindowActivationPolicy = Always;
  this->InitialDesiredScreenPosition =
       (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->InitialDesiredSize =
       (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->ScreenPosition = (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->PreFullscreenPosition =
       (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->Size = (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->ViewportSize = (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->Viewport).Object = (ISlateViewport *)0x0;
  (this->Viewport).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ViewportScaleUIOverride = -1.0;
  this->TitleBarSize = 34.0;
  (this->Morpher).StartingMorphShape.Left = 0.0;
  (this->Morpher).StartingMorphShape.Top = 0.0;
  (this->Morpher).StartingMorphShape.Right = 100.0;
  *(undefined8 *)&(this->Morpher).StartingMorphShape.Bottom = 0x42c80000;
  (this->Morpher).TargetMorphShape.Top = 0.0;
  (this->Morpher).TargetMorphShape.Right = 100.0;
  (this->Morpher).TargetMorphShape.Bottom = 100.0;
  FCurveSequence::FCurveSequence(&(this->Morpher).Sequence);
  (this->Morpher).bIsActive = false;
  (this->Morpher).bIsAnimatingWindowSize = false;
  (this->TitleArea).Object = (SWidget *)0x0;
  (this->TitleArea).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ContentSlot = (FSlot *)0x0;
  (this->WidgetToFocusOnActivate).Object = (SWidget *)0x0;
  (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WidgetFocusedOnDeactivate).Object = (SWidget *)0x0;
  (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"Window");
  pFVar5 = (FWindowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FWindowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FWindowStyle *)0x0) {
    pFVar5 = FWindowStyle::GetDefault();
  }
  this->Style = pFVar5;
  (this->WindowBackgroundImage).Object = (SImage *)0x0;
  this->WindowBackground = &pFVar5->BackgroundBrush;
  (this->WindowBackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowBorder).Object = (SImage *)0x0;
  (this->WindowBorder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->WindowOutline).Object = (SImage *)0x0;
  (this->WindowOutline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ContentAreaVBox).Object = (SWidget *)0x0;
  (this->ContentAreaVBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowContentVisibility).Value.Value = '\x19';
  (this->SizeLimits).MinWidth.bIsSet = false;
  (this->SizeLimits).MinHeight.bIsSet = false;
  (this->SizeLimits).MaxWidth.bIsSet = false;
  (this->SizeLimits).MaxHeight.bIsSet = false;
  (this->NativeWindow).Object = (FGenericWindow *)0x0;
  (this->NativeWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this_00 = ::operator_new(0xf8);
  if (this_00 != (FHittestGrid *)0x0) {
    pFVar6 = FHittestGrid::FHittestGrid(this_00);
  }
  (this->HittestGrid).Ptr = pFVar6;
  pFVar6 = (this->HittestGrid).Ptr;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->_padding_ = (longlong)pFVar6;
  *(undefined8 *)&this->OnWindowActivated = 0;
  *(undefined8 *)&(this->OnWindowActivated).field_0x8 = 0;
  *(undefined4 *)&(this->OnWindowActivated).field_0x10 = 0;
  *(undefined8 *)&this->WindowActivatedEvent = 0;
  *(undefined8 *)&(this->WindowActivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->WindowActivatedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnWindowDeactivated = 0;
  *(undefined8 *)&(this->OnWindowDeactivated).field_0x8 = 0;
  *(undefined4 *)&(this->OnWindowDeactivated).field_0x10 = 0;
  *(undefined8 *)&this->WindowDeactivatedEvent = 0;
  *(undefined8 *)&(this->WindowDeactivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->WindowDeactivatedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnWindowClosed = 0;
  *(undefined8 *)&(this->OnWindowClosed).field_0x8 = 0;
  *(undefined4 *)&(this->OnWindowClosed).field_0x10 = 0;
  *(undefined8 *)&this->WindowClosedEvent = 0;
  *(undefined8 *)&(this->WindowClosedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->WindowClosedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnWindowMoved = 0;
  *(undefined8 *)&(this->OnWindowMoved).field_0x8 = 0;
  *(undefined4 *)&(this->OnWindowMoved).field_0x10 = 0;
  *(undefined8 *)&this->RequestDestroyWindowOverride = 0;
  *(undefined8 *)&(this->RequestDestroyWindowOverride).field_0x8 = 0;
  *(undefined4 *)&(this->RequestDestroyWindowOverride).field_0x10 = 0;
  (this->WindowOverlay).Object = (SOverlay *)0x0;
  (this->WindowOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PopupLayer).Object = (SPopupLayer *)0x0;
  (this->PopupLayer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FullWindowOverlayWidget).Object = (SWidget *)0x0;
  (this->FullWindowOverlayWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ParentWindowPtr).Object = (SWindow *)0x0;
  (this->ParentWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChildWindows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildWindows).ArrayNum = 0;
  (this->ChildWindows).ArrayMax = 0;
  *(undefined8 *)&this->OnWorldSwitchHack = 0;
  *(undefined8 *)&(this->OnWorldSwitchHack).field_0x8 = 0;
  *(undefined4 *)&(this->OnWorldSwitchHack).field_0x10 = 0;
  this->bShouldShowWindowContentDuringOverlay = false;
  (this->TitleBar).Object = (IWindowTitleBar *)0x0;
  (this->TitleBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LayoutBorder).Left = 0.0;
  (this->LayoutBorder).Top = 0.0;
  (this->LayoutBorder).Right = 0.0;
  (this->LayoutBorder).Bottom = 0.0;
  (this->UserResizeBorder).Left = 0.0;
  (this->UserResizeBorder).Top = 0.0;
  (this->UserResizeBorder).Right = 0.0;
  (this->UserResizeBorder).Bottom = 0.0;
  (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->WindowActivatedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->WindowDeactivatedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->WindowClosedEvent).field_0x18 = 2;
  this->ExpectedMaxWidth = -1;
  this->ExpectedMaxHeight = -1;
  this->FocusUserIndex = -1;
  this->bIsDrawingEnabled = true;
  this->_padding_ = (longlong)this;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SWindow @ 1425c2420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::~SWindow(SWindow *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__FSlateInvalidationRoot__;
  bVar8 = IsInGameThread();
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                       ,0x826,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TitleBar).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWorldSwitchHack);
  pvVar4 = *(void **)&(this->OnWorldSwitchHack).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWorldSwitchHack);
  DestructItems<TSharedRef<SWindow,1>,int>
            ((TSharedRef<SWindow,1> *)(this->ChildWindows).AllocatorInstance.Data,
             (this->ChildWindows).ArrayNum);
  pFVar5 = (this->ChildWindows).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
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
            ((this->FullWindowOverlayWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PopupLayer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowOverlay).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestDestroyWindowOverride);
  pvVar4 = *(void **)&(this->RequestDestroyWindowOverride).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestDestroyWindowOverride);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWindowMoved);
  pvVar4 = *(void **)&(this->OnWindowMoved).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWindowMoved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WindowClosedEvent).field_0x8,*(int *)&(this->WindowClosedEvent).field_0x10);
  pvVar4 = *(void **)&(this->WindowClosedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WindowClosedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWindowClosed);
  pvVar4 = *(void **)&(this->OnWindowClosed).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWindowClosed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WindowDeactivatedEvent).field_0x8,
             *(int *)&(this->WindowDeactivatedEvent).field_0x10);
  pvVar4 = *(void **)&(this->WindowDeactivatedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WindowDeactivatedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWindowDeactivated);
  pvVar4 = *(void **)&(this->OnWindowDeactivated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWindowDeactivated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WindowActivatedEvent).field_0x8,
             *(int *)&(this->WindowActivatedEvent).field_0x10);
  pvVar4 = *(void **)&(this->WindowActivatedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WindowActivatedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWindowActivated);
  pvVar4 = *(void **)&(this->OnWindowActivated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWindowActivated);
  TDefaultDelete<FHittestGrid>::operator()
            ((TDefaultDelete<FHittestGrid> *)&this->HittestGrid,(this->HittestGrid).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NativeWindow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentAreaVBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowOutline).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowBackgroundImage).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
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
            ((this->TitleArea).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&(this->Morpher).Sequence);
  pTVar3 = (this->Viewport).WeakReferenceCount.ReferenceController;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseButtonToolTipText).Getter);
  pvVar4 = *(void **)&(this->CloseButtonToolTipText).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseButtonToolTipText).Getter);
  pIVar6 = (this->CloseButtonToolTipText).Value.TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Title).Getter);
  pvVar4 = *(void **)&(this->Title).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Title).Getter);
  pIVar6 = (this->Title).Value.TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  FSlateInvalidationRoot::~FSlateInvalidationRoot((FSlateInvalidationRoot *)&this->_padding_);
  this->_padding_ = (longlong)&___7SCompoundWidget__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&this->_padding_);
  FChildren::~FChildren((FChildren *)&this->_padding_);
  SWidget::~SWidget((SWidget *)this);
  return;
}

// AcceptsInput @ 1425c72a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWindow::AcceptsInput(SWindow *this)

{
  code *pcVar1;
  char cVar2;
  FSlateApplicationBase *pFVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  bool bVar5;
  bool bVar6;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget_const_,1> local_18;
  
  bVar6 = false;
  if ((this->bAcceptsInput) && (bVar6 = false, this->Type != CursorDecorator)) {
    bVar6 = false;
    if (this->Type == ToolTip) {
      pFVar3 = FSlateApplicationBase::Get();
      pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x118);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      local_28 = pTVar4->Object;
      local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      bVar6 = true;
      cVar2 = (*pcVar1)(pFVar3,&local_28);
      if (cVar2 != '\0') goto LAB_1425c733c;
    }
    bVar5 = true;
  }
  else {
LAB_1425c733c:
    bVar5 = false;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return bVar5;
}

// ActivationPolicy @ 1425c7370

/* WARNING: Enum "Type": Some values do not have unique names */

EWindowActivationPolicy __thiscall SWindow::ActivationPolicy(SWindow *this)

{
  return this->WindowActivationPolicy;
}

// AddChildWindow @ 1425c7380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::AddChildWindow(SWindow *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWindow *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWindow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  atomic<int> aVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FSlateApplicationBase *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedRef<SWidget,1> local_28;
  
  pSVar3 = param_1->Object;
  pTVar11 = (pSVar3->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c73d4;
      }
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar12 = aVar2 == aVar8;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar12);
    pSVar3 = (pSVar3->ParentWindowPtr).Object;
    if (((pSVar3 != (SWindow *)0x0) && (bVar12 = RemoveDescendantWindow(pSVar3,param_1), !bVar12))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("bRemovedSuccessfully",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                               ,0x747,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
LAB_1425c73d4:
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar3 = (SWindow *)pTVar9->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pSVar5 = param_1->Object;
  (pSVar5->ParentWindowPtr).Object = pSVar3;
  if (pTVar4 != (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SetWindowBackground(param_1->Object,&this->Style->ChildBackgroundBrush);
  pFVar10 = FSlateApplicationBase::Get();
  (**(code **)(*(longlong *)pFVar10 + 0x18))(pFVar10,&this->ChildWindows,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// AddOverlaySlot @ 1425c8d40

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedWidgetSlotArguments * __thiscall
SWindow::AddOverlaySlot
          (SWindow *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  TSharedPtr<SOverlay,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FArguments *pFVar4;
  TSharedRef<SOverlay,1> *pTVar5;
  FScopedWidgetSlotArguments *pFVar6;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  undefined1 local_2b0 [8];
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  SOverlay *local_298;
  FSharedReferencer<1> local_290;
  FName local_288;
  FMemScope local_280;
  FDestructionSentinel local_278;
  TSharedRef<SOverlay,1> local_260;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_250;
  FArguments local_238;
  
  pTVar1 = &this->WindowOverlay;
  if (pTVar1->Object == (SOverlay *)0x0) {
    local_res8[0] = 0;
    `SWindow::AddOverlaySlot'::__l5::<lambda_1>::operator()(local_res8);
    pFVar4 = SOverlay::FArguments::FArguments(&local_238);
    local_2a0 = 0;
    local_2b0 = (undefined1  [8])0x0;
    FStack_2a8.Data = (FScriptContainerElement *)0x0;
    *(TEnumAsByte<EVisibility::Private> *)&pFVar4->_padding_ =
         EVisibility::HitTestInvisible.Value.Value;
    *(undefined1 *)((longlong)&pFVar4->_padding_ + 1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
               (FWriteAccessScope *)&local_278);
    if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
      local_2a0 = local_2a0 & 0xffffffff00000000;
    }
    if (local_278.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
    }
    if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2b0);
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_288 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_280,&local_288,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_250,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
               ,0x523,local_res10);
    FMemScope::~FMemScope(&local_280);
    FLLMScope::~FLLMScope(local_res20);
    pTVar5 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_250,&local_260,pFVar4);
    local_290.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_298 = pTVar5->Object;
    if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_290.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_290.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<SOverlay,1> *)&local_298) {
      pTVar1->Object = local_298;
      local_298 = (SOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WindowOverlay).SharedReferenceCount,&local_290);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_290.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_250._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data,local_238._Slots.ArrayNum);
    if ((FSlotArguments *)local_238._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_238._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
    if (pTVar1->Object == (SOverlay *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FScopedWidgetSlotArguments *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  SOverlay::AddSlot(pTVar1->Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AddPopupLayerSlot @ 1425c8fc0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedWidgetSlotArguments * __thiscall
SWindow::AddPopupLayerSlot(SWindow *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  SPopupLayer *pSVar1;
  code *pcVar2;
  bool bVar3;
  FScopedWidgetSlotArguments *pFVar4;
  FPopupLayerSlot *pFVar5;
  
  if (((this->PopupLayer).Object == (SPopupLayer *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5910581319552730432>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x540,"PopupLayer.IsValid()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar2)();
    return pFVar4;
  }
  if (((this->PopupLayer).Object == (SPopupLayer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar2)();
    return pFVar4;
  }
  pSVar1 = (this->PopupLayer).Object;
  pFVar5 = ::operator_new(0x100);
  if (pFVar5 == (FPopupLayerSlot *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  else {
    pFVar5 = FPopupLayerSlot::FPopupLayerSlot(pFVar5);
    __return_storage_ptr__->_padding_ = (longlong)pFVar5;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    if (pFVar5 != (FPopupLayerSlot *)0x0) goto LAB_1425c90a1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar2)();
    return pFVar4;
  }
LAB_1425c90a1:
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
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
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Children = &pSVar1->Children;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// Advanced_AsInvalidationRoot @ 1425caac0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateInvalidationRoot * __thiscall SWindow::Advanced_AsInvalidationRoot(SWindow *this)

{
  char cVar1;
  SWindow *pSVar2;
  SWindow *pSVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x210))();
  pSVar3 = (SWindow *)0x0;
  if (cVar1 != '\0') {
    pSVar3 = this;
  }
  pSVar2 = (SWindow *)&pSVar3->_padding_;
  if (pSVar3 == (SWindow *)0x0) {
    pSVar2 = (SWindow *)0x0;
  }
  return (FSlateInvalidationRoot *)pSVar2;
}

// Advanced_IsInvalidationRoot @ 1425cab00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::Advanced_IsInvalidationRoot(SWindow *this)

{
  if ((this->bAllowFastUpdate) && (GSlateEnableGlobalInvalidation)) {
    return true;
  }
  return false;
}

// Advanced_IsWindow @ 1425cab20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::Advanced_IsWindow(SWindow *this)

{
  return true;
}

// AppearsInTaskbar @ 1425cac10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::AppearsInTaskbar(SWindow *this)

{
  if (((!this->bIsPopupWindow) && (this->Type != ToolTip)) && (this->Type != CursorDecorator)) {
    return true;
  }
  return false;
}

// BeginFullWindowOverlayTransition @ 1425ce4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::BeginFullWindowOverlayTransition(SWindow *this)

{
  this->bShouldShowWindowContentDuringOverlay = true;
  UpdateWindowContentVisibility(this);
  return;
}

// BringToFront @ 1425ce4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::BringToFront(SWindow *this,bool param_1)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425ce4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x20))();
    return;
  }
  return;
}

// ComputeDesiredSize @ 1425d2260

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SWindow::ComputeDesiredSize(SWindow *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  TVector2<float>_u_0 TVar2;
  double dVar3;
  double dVar4;
  float local_res8;
  float fStackX_c;
  
  lVar1 = this->_padding_;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar1 + 0x39) ==
      EVisibility::Collapsed.Value.Value) {
    dVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    TVar2 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    if ((*(byte *)(lVar1 + 0x31) & 0x20) != 0) {
      TVar2._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar1 + 0x170))->_s_0;
    }
    fStackX_c = TVar2._s_0.Y;
    local_res8 = TVar2._s_0.X;
    dVar4 = (double)(fStackX_c +
                    *(float *)((longlong)&this->_padding_ + 4) +
                    *(float *)((longlong)&this->_padding_ + 4));
    dVar3 = (double)(local_res8 + *(float *)&this->_padding_ + *(float *)&this->_padding_);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)param_1 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)param_1 * dVar3;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1425d2330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::ComputeVolatility(SWindow *this)

{
  (**(code **)(this->_padding_ + 0x210))();
  return false;
}

// ComputeWindowSizeForContent @ 1425d2350

FDeprecateSlateVector2D __cdecl
SWindow::ComputeWindowSizeForContent(FDeprecateVector2DParameter param_1)

{
  undefined8 in_RDX;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uStackX_14 = (float)((ulonglong)in_RDX >> 0x20);
  local_res10 = (undefined4)in_RDX;
  *(ulonglong *)param_1 = CONCAT44(uStackX_14 + __real_42080000,local_res10);
  return (FDeprecateSlateVector2D)param_1;
}

// Construct @ 1425d4da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::Construct(SWindow *this,FArguments *param_1)

{
  TOptional<float> *pTVar1;
  EWidgetUpdateFlags EVar2;
  SWidget *pSVar3;
  FSlot *this_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  byte bVar9;
  EAutoCenter EVar10;
  char cVar11;
  FSlateApplicationBase *pFVar12;
  FPlatformRect *pFVar13;
  float *pfVar14;
  FDeprecateSlateVector2D FVar15;
  byte bVar16;
  FSharedReferencer<1> FVar17;
  EWidgetUpdateFlags EVar18;
  int iVar19;
  atomic<int> *paVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_res8;
  float local_res10;
  float fStackX_14;
  undefined1 local_res20 [8];
  code *local_1c8 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FWindowSizeLimits local_1a8;
  TSharedRef<SWidget,1> local_188;
  FDisplayMetrics local_178;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  longlong lStack_d8;
  code *local_c8;
  double dStack_c0;
  SWidget *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FPlatformRect local_a8;
  undefined1 local_98 [96];
  
  if ((param_1->_Style == (FWindowStyle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0xed,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Type = param_1->_Type;
  this->Style = param_1->_Style;
  this->WindowBackground = &param_1->_Style->BackgroundBrush;
  TAttribute<FText>::operator=(&this->Title,&param_1->_Title);
  TAttribute<FText>::operator=(&this->CloseButtonToolTipText,&param_1->_CloseButtonToolTipText);
  this->bDragAnywhere = param_1->_bDragAnywhere;
  this->TransparencySupport = (param_1->_SupportsTransparency).Value;
  this->Opacity = param_1->_InitialOpacity;
  bVar16 = (param_1->_IsInitiallyMaximized << 4 ^ this->field_0x3e8) & 0x10U ^ this->field_0x3e8;
  this->field_0x3e8 = bVar16;
  bVar16 = (param_1->_IsInitiallyMinimized << 5 ^ bVar16) & 0x20 ^ bVar16;
  this->field_0x3e8 = bVar16;
  this->SizingRule = param_1->_SizingRule;
  bVar16 = (param_1->_IsPopupWindow * '\x02' ^ bVar16) & 2 ^ bVar16;
  this->field_0x3e8 = bVar16;
  bVar16 = (param_1->_IsTopmostWindow << 2 ^ bVar16) & 4 ^ bVar16;
  this->field_0x3e8 = bVar16;
  this->field_0x3e8 = param_1->_FocusWhenFirstShown << 7 | bVar16 & 0x7f;
  this->FocusUserIndex = param_1->_FocusUserIndex;
  bVar16 = (this->bHasOSWindowBorder ^ param_1->_UseOSWindowBorder) & 1U ^ this->field_0x3e9;
  this->field_0x3e9 = bVar16;
  bVar16 = (param_1->_HasCloseButton << 2 ^ bVar16) & 4 ^ bVar16;
  this->field_0x3e9 = bVar16;
  bVar16 = (param_1->_SupportsMinimize << 3 ^ bVar16) & 8 ^ bVar16;
  this->field_0x3e9 = bVar16;
  bVar16 = (param_1->_SupportsMaximize << 4 ^ bVar16) & 0x10 ^ bVar16;
  this->field_0x3e9 = bVar16;
  if ((param_1->_IsPopupWindow == false) && (param_1->_SizingRule == UserSized)) {
    bVar9 = 0x20;
  }
  else {
    bVar9 = 0;
  }
  this->field_0x3e9 = bVar16 & 0xdf | bVar9;
  this->field_0x3ea =
       (this->bShouldPreserveAspectRatio ^ param_1->_ShouldPreserveAspectRatio) & 1U ^
       this->field_0x3ea;
  this->WindowActivationPolicy = param_1->_ActivationPolicy;
  fVar21 = (param_1->_LayoutBorder).Top;
  fVar22 = (param_1->_LayoutBorder).Right;
  fVar23 = (param_1->_LayoutBorder).Bottom;
  (this->LayoutBorder).Left = (param_1->_LayoutBorder).Left;
  (this->LayoutBorder).Top = fVar21;
  (this->LayoutBorder).Right = fVar22;
  (this->LayoutBorder).Bottom = fVar23;
  fVar21 = (param_1->_UserResizeBorder).Left;
  fVar22 = (param_1->_UserResizeBorder).Top;
  fVar23 = (param_1->_UserResizeBorder).Right;
  fVar24 = (param_1->_UserResizeBorder).Bottom;
  this->field_0x3e9 = bVar16 & 0xdd | bVar9;
  (this->UserResizeBorder).Left = fVar21;
  (this->UserResizeBorder).Top = fVar22;
  (this->UserResizeBorder).Right = fVar23;
  (this->UserResizeBorder).Bottom = fVar24;
  local_1a8.MinWidth.TypedValue = 0.0;
  local_1a8.MinWidth.bIsSet = false;
  local_1a8.MinWidth._5_3_ = 0;
  local_1a8.MinHeight.TypedValue = 0.0;
  local_1a8.MinHeight.bIsSet = false;
  local_1a8.MinHeight._5_3_ = 0;
  local_1a8.MaxWidth.TypedValue = 0.0;
  local_1a8.MaxWidth.bIsSet = false;
  local_1a8.MaxWidth._5_3_ = 0;
  local_1a8.MaxHeight.TypedValue = 0.0;
  local_1a8.MaxHeight.bIsSet = false;
  local_1a8.MaxHeight._5_3_ = 0;
  if ((param_1->_MinWidth).bIsSet != false) {
    local_1a8.MinWidth.bIsSet = true;
    local_1a8.MinWidth.TypedValue = (param_1->_MinWidth).TypedValue;
    local_1a8.MinWidth._5_3_ = 0;
  }
  if ((param_1->_MinHeight).bIsSet != false) {
    local_1a8.MinHeight.bIsSet = true;
    local_1a8.MinHeight.TypedValue = (param_1->_MinHeight).TypedValue;
    local_1a8.MinHeight._5_3_ = 0;
  }
  if ((param_1->_MaxWidth).bIsSet != false) {
    local_1a8.MaxWidth.bIsSet = true;
    local_1a8.MaxWidth.TypedValue = (param_1->_MaxWidth).TypedValue;
    local_1a8.MaxWidth._5_3_ = 0;
  }
  if ((param_1->_MaxHeight).bIsSet != false) {
    local_1a8.MaxHeight.bIsSet = true;
    local_1a8.MaxHeight.TypedValue = (param_1->_MaxHeight).TypedValue;
    local_1a8.MaxHeight._5_3_ = 0;
  }
  FWindowSizeLimits::operator=(&this->SizeLimits,&local_1a8);
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar18 = EVar2 & ~NeedsTick;
  this->field_0x3ea = (param_1->_bManualManageDPI << 2 ^ this->field_0x3ea) & 4U ^ this->field_0x3ea
  ;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar18;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar18);
  if ((((param_1->_CreateTitleBar == false) || (this->bIsPopupWindow)) ||
      (this->Type == CursorDecorator)) || (this->bHasOSWindowBorder)) {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  this->bCreateTitleBar = false;
  this->field_0x3e8 = this->field_0x3e8 | bVar16;
  fStackX_14 = SUB84(param_1->_ScreenPosition,4);
  local_res10 = SUB84(param_1->_ScreenPosition,0);
  if ((param_1->_AdjustInitialSizeAndPositionForDPIScale != false) &&
     ((local_res10 != 0.0 || (fStackX_14 != 0.0)))) {
    fVar21 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(local_res10,fStackX_14);
    local_res10 = local_res10 * fVar21;
    fStackX_14 = fStackX_14 * fVar21;
  }
  local_178._16_12_ = ZEXT812(0);
  local_178.PrimaryDisplayWorkAreaRect.Top = 0;
  this->AutoCenterRule = param_1->_AutoCenter;
  local_178.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.PrimaryDisplayWorkAreaRect.Right = 0;
  local_178.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_178.VirtualDisplayRect.Left = 0;
  local_178.VirtualDisplayRect.Top = 0;
  local_178.VirtualDisplayRect.Right = 0;
  local_178.VirtualDisplayRect.Bottom = 0;
  local_178.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_178.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_178.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_178.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_178.TitleSafePaddingSize.field0_0x0._0_16_ = (undefined1  [16])local_178._16_16_;
  local_178.ActionSafePaddingSize.field0_0x0._0_16_ = (undefined1  [16])local_178._16_16_;
  pFVar12 = FSlateApplicationBase::Get();
  FSlateApplicationBase::GetCachedDisplayMetrics(pFVar12,&local_178);
  auVar7 = (undefined1  [16])local_178._16_16_;
  if (this->AutoCenterRule == PrimaryWorkArea) {
    pFVar13 = (FPlatformRect *)(local_e8 + 8);
    local_e8._8_4_ = local_178.PrimaryDisplayWorkAreaRect.Left;
    local_e8._12_4_ = local_178.PrimaryDisplayWorkAreaRect.Top;
    lStack_d8._0_4_ = local_178.PrimaryDisplayWorkAreaRect.Right;
    lStack_d8._4_4_ = local_178.PrimaryDisplayWorkAreaRect.Bottom;
    local_178._16_16_ = auVar7;
  }
  else {
    local_1c8[0] = (code *)(double)local_res10;
    local_1c8[1] = (code *)(double)fStackX_14;
    pFVar13 = FDisplayMetrics::GetMonitorWorkAreaFromPoint
                        (&local_178,&local_a8,(TVector2<double> *)local_1c8);
  }
  iVar19 = pFVar13->Left;
  local_1c8[0] = *(code **)pFVar13;
  local_1c8[1]._0_4_ = pFVar13->Right;
  local_1c8[1]._4_4_ = pFVar13->Bottom;
  if (((iVar19 == 0) && (pFVar13->Top == 0)) &&
     ((local_1c8[1]._0_4_ == 0 && (local_1c8[1]._4_4_ == 0)))) {
    local_1c8[0] = (code *)local_178.VirtualDisplayRect._0_8_;
    local_1c8[1]._0_4_ = local_178.VirtualDisplayRect.Right;
    local_1c8[1]._4_4_ = local_178.VirtualDisplayRect.Bottom;
    iVar19 = local_178.VirtualDisplayRect.Left;
  }
  uVar6 = local_1c8[1]._4_4_;
  uVar5 = local_1c8[1]._0_4_;
  if (this->bIsPopupWindow) {
    if ((this->SizeLimits).MaxWidth.bIsSet == false) {
      pTVar1 = &(this->SizeLimits).MaxWidth;
      if ((TOptional<float> *)local_f8 != pTVar1) {
        pTVar1->TypedValue = (float)(local_1c8[1]._0_4_ - iVar19);
        (this->SizeLimits).MaxWidth.bIsSet = true;
      }
    }
    if ((this->SizeLimits).MaxHeight.bIsSet == false) {
      pTVar1 = &(this->SizeLimits).MaxHeight;
      if ((TOptional<float> *)local_f0 != pTVar1) {
        pTVar1->TypedValue = (float)(int)(local_1c8[1]._4_4_ - local_1c8[0]._4_4_);
        (this->SizeLimits).MaxHeight.bIsSet = true;
      }
    }
  }
  EVar10 = this->AutoCenterRule;
  if (((EVar10 != None) || (param_1->_SaneWindowPlacement == false)) ||
     (((float)local_178.VirtualDisplayRect.Left <= local_res10 &&
      (((local_res10 < (float)local_178.VirtualDisplayRect.Right &&
        ((float)local_178.VirtualDisplayRect.Top <= fStackX_14)) &&
       (fStackX_14 < (float)local_178.VirtualDisplayRect.Bottom)))))) {
    local_1b8 = 0;
    uStack_1b0 = 0;
    if (EVar10 == None) {
      fVar23 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(local_res10,fStackX_14);
      fVar21 = (float)local_1b8;
      fVar22 = local_1b8._4_4_;
      goto LAB_1425d539d;
    }
  }
  else {
    this->AutoCenterRule = PreferredWorkArea;
    EVar10 = PreferredWorkArea;
  }
  uStack_1b0 = 0;
  local_1b8 = 0;
  if ((EVar10 == PrimaryWorkArea) || (EVar10 != PreferredWorkArea)) {
    fVar22 = (float)(int)local_1c8[0]._4_4_;
    fVar21 = (float)iVar19;
    fVar23 = (float)(int)local_1c8[1]._0_4_;
    fVar24 = (float)(int)local_1c8[1]._4_4_;
  }
  else {
    pFVar12 = FSlateApplicationBase::Get();
    pfVar14 = (float *)(**(code **)(*(longlong *)pFVar12 + 0xe8))(pFVar12,local_98);
    fVar21 = *pfVar14;
    fVar22 = pfVar14[1];
    fVar23 = pfVar14[2];
    fVar24 = pfVar14[3];
  }
  local_1b8 = CONCAT44(fVar22,fVar21);
  uStack_1b0 = CONCAT44(fVar24,fVar23);
  fVar23 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(fVar21,fVar22);
LAB_1425d539d:
  if (param_1->_AdjustInitialSizeAndPositionForDPIScale == false) {
    local_res8 = *(TVector2<float>_u_0 *)&param_1->_ClientSize;
  }
  else {
    local_res8._4_4_ = fVar23 * *(float *)&(param_1->_ClientSize).field_0x4;
    local_res8._0_4_ = fVar23 * *(float *)&param_1->_ClientSize;
  }
  FVar15 = GetWindowSizeFromClientSize
                     (this,(FDeprecateVector2DParameter)local_res20,(TOptional<float>)local_res8);
  local_res8 = *(TVector2<float>_u_0 *)FVar15;
  fVar23 = (float)(undefined4)local_res8;
  fVar24 = (float)local_res8._4_4_;
  if (this->AutoCenterRule == None) {
    if (param_1->_SaneWindowPlacement != false) {
      fVar23 = (float)(local_178.VirtualDisplayRect.Right - local_178.VirtualDisplayRect.Left) -
               (float)((local_178.PrimaryDisplayWidth - uVar5) + iVar19);
      if ((float)(undefined4)local_res8 <= fVar23) {
        fVar23 = (float)(undefined4)local_res8;
      }
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar24 = (float)(local_178.VirtualDisplayRect.Bottom - local_178.VirtualDisplayRect.Top) -
               (float)((local_178.PrimaryDisplayHeight - uVar6) + local_1c8[0]._4_4_);
      if ((float)local_res8._4_4_ <= fVar24) {
        fVar24 = (float)local_res8._4_4_;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      local_res8._4_4_ = fVar24;
      local_res8._0_4_ = fVar23;
    }
  }
  else {
    if (param_1->_SaneWindowPlacement != false) {
      fVar23 = (float)uStack_1b0 - fVar21;
      if ((float)(undefined4)local_res8 <= (float)uStack_1b0 - fVar21) {
        fVar23 = (float)(undefined4)local_res8;
      }
      fVar24 = uStack_1b0._4_4_ - fVar22;
      if ((float)local_res8._4_4_ <= uStack_1b0._4_4_ - fVar22) {
        fVar24 = (float)local_res8._4_4_;
      }
      local_res8._4_4_ = fVar24;
      local_res8._0_4_ = fVar23;
    }
    fVar26 = (((float)uStack_1b0 - fVar21) - fVar23) * __real_3f000000 + fVar21;
    fVar25 = ((uStack_1b0._4_4_ - fVar22) - fVar24) * __real_3f000000 + fVar22;
    local_res10 = fVar21;
    if (fVar21 <= fVar26) {
      local_res10 = fVar26;
    }
    fStackX_14 = fVar22;
    if (fVar22 <= fVar25) {
      fStackX_14 = fVar25;
    }
  }
  local_1c8[1] = (code *)((ulonglong)(uint)local_1c8[1]._4_4_ << 0x20);
  local_1c8[0] = OnGlobalInvalidationToggled;
  local_c8 = OnGlobalInvalidationToggled;
  dStack_c0 = (double)local_1c8[1];
  *(float *)&this->InitialDesiredScreenPosition = local_res10;
  *(float *)&(this->InitialDesiredScreenPosition).field_0x4 = fStackX_14;
  *(float *)&this->InitialDesiredSize = fVar23;
  *(float *)&(this->InitialDesiredSize).field_0x4 = fVar24;
  pFVar12 = FSlateApplicationBase::Get();
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::AddSP<SWindow>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pFVar12->OnGlobalInvalidationToggledEvent,(SWindow *)local_e8,(pmf_56a4a48d *)this);
  ResizeWindowSize(this,(TVector2<float>)local_res8);
  ConstructWindowInternals(this);
  pSVar3 = (param_1->_Content).Widget.Object;
  FVar17.ReferenceController = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (FVar17.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar20 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar20 = &(FVar17.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  this_00 = this->ContentSlot;
  local_188.Object = pSVar3;
  local_188.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
  if (this_00 == (FSlot *)0x0) {
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_188);
  }
  else {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar20 = (atomic<int>)((int)*paVar20 + 1);
      UNLOCK();
    }
    local_b8 = ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object;
    pTStack_b0 = ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
    ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = pSVar3;
    ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController = FVar17.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    FVar17.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
  }
  cVar11 = (**(code **)(this->_padding_ + 0x210))(this);
  if (cVar11 != '\0') {
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  }
  SWidget::Invalidate((SWidget *)this,ChildOrder);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data,
             local_178.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_178.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_178.MonitorInfo.AllocatorInstance.Data);
  }
  return;
}

// ConstructWindowInternals @ 1425d5970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::ConstructWindowInternals(SWindow *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TSharedPtr<SImage,1> *this_00;
  TSharedPtr<SImage,1> *this_01;
  TSharedPtr<SImage,1> *this_02;
  atomic<int> aVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  ITextData *pIVar7;
  FWindowStyle *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  SOverlay *pSVar13;
  longlong lVar14;
  longlong lVar15;
  SVerticalBox *this_03;
  TRefCountPtr<ITextData> TVar16;
  bool bVar17;
  int iVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  undefined8 *puVar21;
  FArguments *pFVar22;
  TSharedRef<SWidget,1> *pTVar23;
  FSlateApplicationBase *pFVar24;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar25;
  FSizeParam *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  FSlotArguments *pFVar29;
  TSharedRef<SImage,1> *pTVar30;
  FSlotArguments *pFVar31;
  TSharedRef<SWidget_const_,1> *pTVar32;
  ulong64 uVar33;
  FSlot *this_04;
  FSlot *pFVar34;
  FSlotArguments *pFVar35;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SVerticalBox,1> *pTVar36;
  FArguments *pFVar37;
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *pTVar38;
  TSharedRef<SPopupLayer,1> *pTVar39;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar40;
  TSharedRef<SOverlay,1> *pTVar41;
  FOverlaySlot *this_06;
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar42;
  longlong *this_07;
  FSharedReferencer<1> FVar43;
  FOverlaySlot *pFVar44;
  FSlotArguments *this_08;
  FArguments *local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  TReferenceControllerBase<1> *local_res20;
  FLLMScope local_1a88;
  FLLMScope local_1a84;
  FLLMScope local_1a80 [2];
  FOverlaySlot *local_1a78;
  SOverlay *local_1a70;
  TReferenceControllerBase<1> *pTStack_1a68;
  uchar local_1a60;
  undefined1 local_1a5f;
  undefined1 local_1a58 [8];
  ForAnyElementType FStack_1a50;
  ulonglong local_1a48;
  FSlotArguments *local_1a40;
  TEnumAsByte<EVisibility::Private> local_1a38;
  undefined1 local_1a37;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a30;
  ForAnyElementType FStack_1a28;
  ulonglong local_1a20;
  TSharedRef<SVerticalBox,1> local_1a18;
  undefined1 local_1a08 [8];
  FDelegateAllocation local_1a00;
  FSlateBrush *local_19f0;
  undefined1 local_19e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_19e0;
  ForAnyElementType FStack_19d8;
  ulonglong local_19d0;
  SWidget *local_19c8;
  TReferenceControllerBase<1> *local_19c0;
  undefined8 local_19b8;
  TReferenceControllerBase<1> *pTStack_19b0;
  undefined4 local_19a8;
  FText local_19a0;
  undefined1 local_1990;
  undefined1 local_1988 [8];
  ForAnyElementType FStack_1980;
  ulonglong local_1978;
  longlong local_1970;
  FSharedReferencer<1> local_1968;
  SWidget *local_1960;
  FSharedReferencer<1> local_1958;
  TSharedPtr<SImage,1> local_1950;
  TSharedPtr<SImage,1> local_1940;
  TSharedPtr<SImage,1> local_1930;
  SVerticalBox *local_1920;
  FSharedReferencer<1> local_1918;
  FLinearColor_u_0 local_1910;
  undefined4 local_1900;
  undefined1 local_18fc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_18f8;
  ForAnyElementType FStack_18f0;
  ulonglong local_18e8;
  undefined8 local_18e0;
  undefined8 uStack_18d8;
  undefined4 local_18d0;
  undefined1 local_18cc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_18c8;
  ForAnyElementType FStack_18c0;
  ulonglong local_18b8;
  undefined8 local_18b0;
  FSharedReferencer<1> local_18a8;
  undefined8 local_18a0;
  FSharedReferencer<1> local_1898;
  TEnumAsByte<EVisibility::Private> local_1890;
  undefined1 local_188f;
  undefined1 local_1888 [8];
  void *pvStack_1880;
  undefined8 local_1878;
  TEnumAsByte<EVisibility::Private> local_1870;
  undefined1 local_186f;
  undefined1 local_1868 [8];
  void *pvStack_1860;
  undefined8 local_1858;
  FSlotArguments local_1850;
  FName local_17f0;
  FMemScope local_17e8;
  T1RequiredArgs<TSharedRef<SWindow,1>_&&> local_17e0;
  TSharedRef<SWidget,1> local_17d8;
  TSharedRef<SWidget,1> local_17c8;
  TSharedRef<SWidget,1> local_17b8;
  TSharedRef<SWindow,1> local_17a8;
  TSharedRef<SWindow,1> local_1798;
  longlong local_1788;
  TReferenceControllerBase<1> *local_1780;
  FArguments *local_1778;
  undefined1 local_1770 [4];
  FName local_176c;
  FMemScope local_1760;
  FArguments *local_1758;
  FOverlaySlot *local_1750;
  FSlateBrush *local_1748;
  undefined1 local_1740;
  undefined1 local_1738 [8];
  void *pvStack_1730;
  undefined8 local_1728;
  T1RequiredArgs<TSharedRef<SWindow,1>_&&> local_1720;
  FName local_1718;
  FMemScope local_1710;
  FSlateBrush *local_1708;
  undefined1 local_1700;
  undefined1 local_16f8 [8];
  void *pvStack_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined4 local_16d0;
  undefined1 local_16cc;
  undefined1 local_16c8 [8];
  void *pvStack_16c0;
  undefined8 local_16b8;
  undefined8 local_16b0;
  undefined8 uStack_16a8;
  undefined4 local_16a0;
  undefined1 local_169c;
  undefined1 local_1698 [8];
  void *pvStack_1690;
  undefined8 local_1688;
  TAttribute<float> local_1680;
  TAttribute<EVisibility> local_1660;
  TAttribute<float> local_1640;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1620;
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> local_1608;
  longlong local_15f0;
  longlong lStack_15e8;
  undefined1 local_15e0;
  undefined1 local_15d8 [8];
  void *pvStack_15d0;
  undefined8 local_15c8;
  TSharedRef<SWidget,1> local_15c0;
  TSharedRef<SWidget,1> local_15b0;
  TSharedRef<SWidget,1> local_15a0;
  TSharedRef<SPopupLayer,1> local_1590;
  TSharedRef<SWidget,1> local_1578;
  TSharedRef<SWidget,1> local_1568;
  longlong local_1558;
  longlong lStack_1550;
  undefined1 local_1548;
  undefined1 local_1540 [24];
  FDestructionSentinel local_1528;
  FDestructionSentinel local_1510;
  FDestructionSentinel local_14f8;
  FDestructionSentinel local_14e0;
  FDestructionSentinel local_14c8;
  FDestructionSentinel local_14b0;
  FDestructionSentinel local_1498;
  FDestructionSentinel local_1480;
  FDelegateAllocation *local_1468;
  SPopupLayer *local_1460;
  TReferenceControllerBase<1> *pTStack_1458;
  SOverlay *local_1450;
  TReferenceControllerBase<1> *pTStack_1448;
  TSharedRef<SOverlay,1> local_1440;
  FName local_1430;
  undefined1 local_1428 [8];
  TReferenceControllerBase<1> *local_1420;
  undefined1 local_1418 [8];
  TReferenceControllerBase<1> *local_1410;
  undefined1 local_1408 [8];
  TReferenceControllerBase<1> *local_1400;
  TSharedRef<SWidget_const_,1> local_13f8;
  TSharedRef<SWidget,1> local_13e8;
  TSharedRef<SOverlay,1> local_13d8;
  TSharedRef<SPopupLayer,1> local_13c8;
  TSharedRef<SVerticalBox,1> local_13b8;
  TSharedRef<SImage,1> local_13a8;
  TSharedRef<SImage,1> local_1398;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1388;
  TSharedRef<SImage,1> local_1370;
  TSharedRef<SWidget,1> local_1360;
  undefined1 local_1350 [16];
  undefined1 local_1340 [32];
  undefined1 local_1320 [24];
  undefined1 local_1308 [56];
  void *local_12d0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_12a8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1290;
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> local_1278;
  undefined1 local_1260 [24];
  FSlotArguments local_1248;
  FSlotArguments local_11e8;
  FSlotArguments local_1188;
  FSlotArguments local_1128;
  FSlotArguments local_10c8;
  FSlotArguments local_1068;
  FArguments local_f80;
  FArguments local_d78;
  FArguments local_b70;
  FArguments local_968;
  FArguments local_760;
  FArguments local_558;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_350;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_250;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_150;
  
  pFVar44 = (FOverlaySlot *)0x0;
  local_res8 = (FArguments *)((ulonglong)local_res8 & 0xffffffff00000000);
  pIVar19 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar19 + 0x40);
  pFVar20 = ::FName::FName(&local_1430,"DefaultForeground");
  puVar21 = (undefined8 *)
            (*pcVar4)(pIVar19,local_1260,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
  local_1910._0_8_ = *puVar21;
  local_1910._8_8_ = puVar21[1];
  local_1900 = *(undefined4 *)(puVar21 + 2);
  local_18e8 = 0;
  local_18fc = 1;
  local_18f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18f0.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateColor> *)&local_1910._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_18f8,(FWriteAccessScope *)&local_14c8);
  if (((int)local_18e8 != 0) && (FStack_18f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18f0,0,0,0x10);
    local_18e8 = local_18e8 & 0xffffffff00000000;
  }
  if (local_14c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14c8.Accessor,&local_14c8);
  }
  if (FStack_18f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_18f8.AccessDetector);
  pFVar22 = SVerticalBox::FArguments::FArguments(&local_f80);
  local_1a60 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_1a5f = 1;
  local_1a48 = 0;
  local_1a58 = (undefined1  [8])0x0;
  FStack_1a50.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar22->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar22->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a58,
             (FWriteAccessScope *)&local_14b0);
  if (((int)local_1a48 != 0) && (FStack_1a50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a50,0,0,0x10);
    local_1a48 = local_1a48 & 0xffffffff00000000;
  }
  if (local_14b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b0.Accessor,&local_14b0);
  }
  if (FStack_1a50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a58);
  FLLMScope::FLLMScope(&local_1a88,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_176c = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1760,&local_176c,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1388,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x21f,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1760);
  FLLMScope::~FLLMScope(&local_1a88);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_1388,&local_1a18,pFVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1388._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_f80._Slots.AllocatorInstance.Data,local_f80._Slots.ArrayNum);
  if ((FSlotArguments *)local_f80._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_f80._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_f80);
  pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1568);
  pTVar5 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar23->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1568.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1568.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19a8 = 0;
  local_19b8 = 0;
  pTStack_19b0 = (TReferenceControllerBase<1> *)0x0;
  local_19c8 = pSVar6;
  local_19c0 = pTVar5;
  FText::FText(&local_19a0);
  local_1990 = 0;
  local_1978 = 0;
  local_1988 = (undefined1  [8])0x0;
  FStack_1980.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = pTStack_19b0;
  local_19b8 = 0;
  if (pTStack_19b0 != (TReferenceControllerBase<1> *)0x0) {
    pTStack_19b0 = (TReferenceControllerBase<1> *)0x0;
    LOCK();
    paVar1 = &pTVar5->SharedReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)pTVar5->_padding_)();
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_19a8 = (**(code **)(this->_padding_ + 600))(this);
  TVar16.Reference = local_19a0.TextData.Reference;
  pIVar7 = (this->CloseButtonToolTipText).Value.TextData.Reference;
  if (local_19a0.TextData.Reference != pIVar7) {
    local_19a0.TextData.Reference = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_1770);
    }
    if (TVar16.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar16.Reference + 0x10))(TVar16.Reference);
    }
  }
  local_19a0.Flags = (this->CloseButtonToolTipText).Value.Flags;
  local_1990 = (this->CloseButtonToolTipText).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1988,
             &(this->CloseButtonToolTipText).Getter);
  pFVar24 = FSlateApplicationBase::Get();
  (**(code **)(*(longlong *)pFVar24 + 0x138))(pFVar24,&local_1788);
  this_03 = local_1a18.Object;
  if (this->bCreateTitleBar) {
    this->TitleBarSize = 34.0;
    pFVar25 = SVerticalBox::AddSlot(local_1a18.Object,&local_350);
    pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1350);
    TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar25->_padding_,pFVar26);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1320);
    if ((void *)local_1320._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1320._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1320);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1340);
    if ((void *)local_1340._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1340._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1340);
    local_1970 = local_1788;
    local_1968.ReferenceController = local_1780;
    if (local_1780 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1780->SharedReferenceCount = (atomic<int>)((int)local_1780->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar25->_padding_ != &local_1970) {
      pFVar25->_padding_ = local_1788;
      local_1970 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar25->_padding_,&local_1968);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1968.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_350);
  }
  else {
    this->TitleBarSize = 0.0;
  }
  UpdateWindowContentVisibility(this);
  if ((((this->Type == Normal) || (this->Type == GameWindow)) && (!this->bHasOSWindowBorder)) &&
     (!this->bVirtualWindow)) {
    pFVar25 = SVerticalBox::AddSlot(this_03,&local_250);
    local_1680.Value = 1.0;
    local_1680.bIsSet = true;
    local_1680.Getter._0_8_ = 0;
    local_1680.Getter._8_8_ = 0;
    local_1680.Getter._16_8_ = 0;
    pFVar27 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                        ((FSlotArguments *)&pFVar25->_padding_,&local_1680);
    this->ContentSlot = *(FSlot **)pFVar27;
    pSVar6 = SNullWidget::NullWidget.Object;
    local_1960 = SNullWidget::NullWidget.Object;
    local_1958.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar27->field_0x8 != &local_1960) {
      *(SWidget **)&pFVar27->field_0x8 = pSVar6;
      local_1960 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar27->field_0x10,&local_1958);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1958.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_250);
    pFVar24 = FSlateApplicationBase::Get();
    pFVar8 = this->Style;
    local_1a37 = 1;
    local_1a38.Value = (this->WindowContentVisibility).Value.Value;
    local_1a30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1a28.Data = (FScriptContainerElement *)0x0;
    local_1a20 = 0;
    local_18e0 = *(undefined8 *)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0;
    uStack_18d8 = *(undefined8 *)
                   ((longlong)&(pFVar8->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_18d0._0_1_ = (pFVar8->BackgroundColor).ColorUseRule;
    local_18d0._1_1_ = (pFVar8->BackgroundColor).ColorTableId;
    local_18d0._2_2_ = *(undefined2 *)&(pFVar8->BackgroundColor).field_0x12;
    local_19f0 = this->WindowBackground;
    local_18cc = 1;
    local_18c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18c0.Data = (FScriptContainerElement *)0x0;
    local_18b8 = 0;
    local_19e8 = 1;
    local_19e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_19d8.Data = (FScriptContainerElement *)0x0;
    local_19d0 = 0;
    puVar21 = (undefined8 *)
              (**(code **)(*(longlong *)pFVar24 + 0x120))
                        (pFVar24,local_1428,&local_19f0,&local_18e0,&local_1a38);
    local_1950.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
    local_1950.Object = (SImage *)*puVar21;
    if (local_1950.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1950.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1950.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = &this->WindowBackgroundImage;
    if (this_00 != &local_1950) {
      this_00->Object = local_1950.Object;
      local_1950.Object = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WindowBackgroundImage).SharedReferenceCount,
                 &local_1950.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1950.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1420);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_19e0,(FWriteAccessScope *)&local_1498);
    if (((int)local_19d0 != 0) && (FStack_19d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_19d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19d8,0,0,0x10);
      local_19d0 = local_19d0 & 0xffffffff00000000;
    }
    if (local_1498.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1498.Accessor,&local_1498);
    }
    if (FStack_19d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_19d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_19e0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_18c8,(FWriteAccessScope *)&local_1528);
    if (((int)local_18b8 != 0) && (FStack_18c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18c0,0,0,0x10);
      local_18b8 = local_18b8 & 0xffffffff00000000;
    }
    if (local_1528.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1528.Accessor,&local_1528);
    }
    if (FStack_18c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_18c8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1a30,(FWriteAccessScope *)&local_1510);
    if (((int)local_1a20 != 0) && (FStack_1a28.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1a28.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a28,0,0,0x10);
      local_1a20 = local_1a20 & 0xffffffff00000000;
    }
    if (local_1510.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1510.Accessor,&local_1510);
    }
    if (FStack_1a28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a28.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a30.AccessDetector);
    pFVar24 = FSlateApplicationBase::Get();
    local_188f = 1;
    local_1888 = (undefined1  [8])0x0;
    pvStack_1880 = (void *)0x0;
    local_1890.Value = (this->WindowContentVisibility).Value.Value;
    pFVar8 = this->Style;
    local_1878 = 0;
    local_16e0 = *(undefined8 *)&(pFVar8->BorderColor).SpecifiedColor.field0_0x0;
    uStack_16d8 = *(undefined8 *)((longlong)&(pFVar8->BorderColor).SpecifiedColor.field0_0x0 + 8);
    local_16d0._0_1_ = (pFVar8->BorderColor).ColorUseRule;
    local_16d0._1_1_ = (pFVar8->BorderColor).ColorTableId;
    local_16d0._2_2_ = *(undefined2 *)&(pFVar8->BorderColor).field_0x12;
    local_1748 = &pFVar8->BorderBrush;
    local_16cc = 1;
    local_16c8 = (undefined1  [8])0x0;
    pvStack_16c0 = (void *)0x0;
    local_16b8 = 0;
    local_1740 = 1;
    local_1738 = (undefined1  [8])0x0;
    pvStack_1730 = (void *)0x0;
    local_1728 = 0;
    puVar21 = (undefined8 *)
              (**(code **)(*(longlong *)pFVar24 + 0x120))
                        (pFVar24,local_1418,&local_1748,&local_16e0,&local_1890);
    local_1940.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
    local_1940.Object = (SImage *)*puVar21;
    if (local_1940.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1940.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1940.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = &this->WindowBorder;
    if (this_01 != &local_1940) {
      this_01->Object = local_1940.Object;
      local_1940.Object = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WindowBorder).SharedReferenceCount,&local_1940.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1940.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1410);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1738);
    if (pvStack_1730 != (void *)0x0) {
      FMemory::Free(pvStack_1730);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1738);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16c8);
    if (pvStack_16c0 != (void *)0x0) {
      FMemory::Free(pvStack_16c0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_16c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1888);
    if (pvStack_1880 != (void *)0x0) {
      FMemory::Free(pvStack_1880);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1888);
    pFVar24 = FSlateApplicationBase::Get();
    local_186f = 1;
    local_1868 = (undefined1  [8])0x0;
    pvStack_1860 = (void *)0x0;
    local_1870.Value = (this->WindowContentVisibility).Value.Value;
    pFVar8 = this->Style;
    local_1858 = 0;
    local_16b0 = *(undefined8 *)&(pFVar8->OutlineColor).SpecifiedColor.field0_0x0;
    uStack_16a8 = *(undefined8 *)((longlong)&(pFVar8->OutlineColor).SpecifiedColor.field0_0x0 + 8);
    local_16a0._0_1_ = (pFVar8->OutlineColor).ColorUseRule;
    local_16a0._1_1_ = (pFVar8->OutlineColor).ColorTableId;
    local_16a0._2_2_ = *(undefined2 *)&(pFVar8->OutlineColor).field_0x12;
    local_1708 = &pFVar8->OutlineBrush;
    local_169c = 1;
    local_1698 = (undefined1  [8])0x0;
    pvStack_1690 = (void *)0x0;
    local_1688 = 0;
    local_1700 = 1;
    local_16f8 = (undefined1  [8])0x0;
    pvStack_16f0 = (void *)0x0;
    local_16e8 = 0;
    puVar21 = (undefined8 *)
              (**(code **)(*(longlong *)pFVar24 + 0x120))
                        (pFVar24,local_1408,&local_1708,&local_16b0,&local_1870);
    local_1930.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar21[1];
    local_1930.Object = (SImage *)*puVar21;
    if (local_1930.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1930.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1930.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_02 = &this->WindowOutline;
    if (this_02 != &local_1930) {
      this_02->Object = local_1930.Object;
      local_1930.Object = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WindowOutline).SharedReferenceCount,&local_1930.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1930.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1400);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16f8);
    if (pvStack_16f0 != (void *)0x0) {
      FMemory::Free(pvStack_16f0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_16f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1698);
    if (pvStack_1690 != (void *)0x0) {
      FMemory::Free(pvStack_1690);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1698);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1868);
    if (pvStack_1860 != (void *)0x0) {
      FMemory::Free(pvStack_1860);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1868);
    pFVar28 = SOverlay::FArguments::FArguments(&local_968);
    pFVar29 = SOverlay::Slot(&local_10c8,0);
    pTVar30 = TSharedPtr<SImage,1>::ToSharedRef(this_00,&local_1370);
    local_17d8.Object = (SWidget *)pTVar30->Object;
    local_res20 = (pTVar30->SharedReferenceCount).ReferenceController;
    if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_17d8.SharedReferenceCount.ReferenceController = local_res20;
    pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar29,&local_17d8);
    pFVar28 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
    pFVar29 = SOverlay::Slot(&local_1128,0);
    pTVar30 = TSharedPtr<SImage,1>::ToSharedRef(this_01,&local_1398);
    local_17c8.Object = (SWidget *)pTVar30->Object;
    local_1a78 = (FOverlaySlot *)(pTVar30->SharedReferenceCount).ReferenceController;
    if (local_1a78 != (FOverlaySlot *)0x0) {
      LOCK();
      *(atomic<int> *)&local_1a78->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&local_1a78->_padding_ + 1);
      UNLOCK();
    }
    local_17c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_1a78;
    pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar29,&local_17c8);
    pFVar28 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
    pFVar29 = SOverlay::Slot(&local_1188,0);
    lVar15 = _UNK_15076ba38;
    lVar14 = ___xmm_40000000400000004000000040000000;
    local_15e0 = 1;
    local_15f0 = ___xmm_40000000400000004000000040000000;
    lStack_15e8 = _UNK_15076ba38;
    local_15c8 = 0;
    local_15d8 = (undefined1  [8])0x0;
    pvStack_15d0 = (void *)0x0;
    *(undefined1 *)&pFVar29->_padding_ = 1;
    pFVar29->_padding_ = lVar14;
    pFVar29->_padding_ = lVar15;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar29->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d8);
    if (pvStack_15d0 != (void *)0x0) {
      FMemory::Free(pvStack_15d0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_15d8);
    pTVar30 = TSharedPtr<SImage,1>::ToSharedRef(this_02,&local_13a8);
    pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
    local_17b8.Object = (SWidget *)pTVar30->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_17b8.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar29,&local_17b8);
    local_1758 = SOverlay::FArguments::operator+(pFVar28,pFVar29);
    pFVar31 = SOverlay::Slot(&local_11e8,0);
    local_1a08 = (undefined1  [8])0x0;
    local_1a00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a00.DelegateSize = 0;
    local_1a40 = pFVar31;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a08,
               (FWriteAccessScope *)&local_1480);
    local_1468 = &local_1a00;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,&local_1a00);
    pFVar29 = pFVar31;
    pFVar28 = local_res8;
    if (puVar21 != (undefined8 *)0x0) {
      local_1a70 = (SOverlay *)GetWindowBorderSize;
      pTStack_1a68 = (TReferenceControllerBase<1> *)
                     ((ulonglong)local_1590.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13f8);
      pFVar28 = (FArguments *)(pTVar32->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar32->Object;
      if (pFVar28 != (FArguments *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar28->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar28->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar28->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar28->_padding_ + 1);
        UNLOCK();
      }
      *puVar21 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar21 + 1) = 0;
      uVar33 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar33;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSWindow___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy___N__6B_
      ;
      puVar21[3] = pSVar6;
      puVar21[4] = pFVar28;
      if (pFVar28 != (FArguments *)0x0) {
        LOCK();
        ((atomic<int> *)&pFVar28->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pFVar28->_padding_)[1] + 1);
        UNLOCK();
      }
      pFVar44 = (FOverlaySlot *)&DAT_00000007;
      puVar21[5] = local_1a70;
      puVar21[6] = pTStack_1a68;
      pFVar29 = local_1a40;
    }
    if (((ulonglong)pFVar44 & 4) != 0) {
      pFVar44 = (FOverlaySlot *)(ulonglong)((uint)pFVar44 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar28);
    }
    if (((ulonglong)pFVar44 & 2) != 0) {
      pFVar44 = (FOverlaySlot *)(ulonglong)((uint)pFVar44 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar28);
    }
    if (((ulonglong)pFVar44 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_13f8.SharedReferenceCount.ReferenceController);
    }
    if (local_1480.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1480.Accessor,&local_1480);
    }
    local_1548 = 1;
    local_1558 = 0;
    lStack_1550 = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a08);
    pFVar31->_padding_ = local_1558;
    pFVar31->_padding_ = lStack_1550;
    *(undefined1 *)&pFVar31->_padding_ = local_1548;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar31->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
    this_08 = (FSlotArguments *)0x0;
    if (&pFVar31->_padding_ != (longlong *)0x0) {
      this_08 = pFVar29;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
    if ((void *)local_1540._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1540._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1540);
    pFVar22 = SVerticalBox::FArguments::FArguments(&local_b70);
    local_1660.Value.Value.Value =
         (TEnumAsByte<EVisibility::Private>)(this->WindowContentVisibility).Value.Value;
    local_1660.bIsSet = true;
    local_1660.Getter._16_8_ = 0;
    local_1660.Getter._0_8_ = 0;
    local_1660.Getter._8_8_ = 0;
    pFVar22 = TSlateBaseNamedArgs<SVerticalBox>::Visibility
                        ((TSlateBaseNamedArgs<SVerticalBox> *)pFVar22,&local_1660);
    local_1778 = pFVar22;
    this_04 = ::operator_new(0x58);
    pFVar34 = (FSlot *)0x0;
    if (this_04 != (FSlot *)0x0) {
      *(undefined8 *)this_04 = 0;
      *(undefined8 *)&this_04->field_0x8 = 0;
      *(undefined8 *)&this_04->field_0x10 = 0;
      *(undefined8 *)&this_04->field_0x18 = 0;
      *(undefined8 *)&this_04->field_0x20 = 0;
      *(undefined8 *)&this_04->field_0x28 = 0;
      *(undefined8 *)&this_04->field_0x30 = 0;
      *(undefined8 *)&this_04->field_0x38 = 0;
      *(undefined8 *)&this_04->field_0x40 = 0;
      *(undefined8 *)&this_04->field_0x48 = 0;
      *(undefined8 *)&this_04->field_0x50 = 0;
      pFVar34 = SVerticalBox::FSlot::FSlot(this_04);
    }
    local_1a40 = (FSlotArguments *)pFVar34;
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_1068,(FSlot *)&local_1a40);
    local_1578.Object = (SWidget *)local_1a18.Object;
    local_1578.SharedReferenceCount.ReferenceController =
         local_1a18.SharedReferenceCount.ReferenceController;
    if (local_1a18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar35 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)&local_1068,&local_1578);
    pTVar42 = &pFVar22->_Slots;
    pFVar27 = (FSlotArguments *)(pTVar42->AllocatorInstance).Data;
    if (((pFVar27 <= pFVar35) && (pFVar35 < pFVar27 + (pFVar22->_Slots).ArrayMax)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar12 = local_res20;
    iVar18 = (pFVar22->_Slots).ArrayNum;
    piVar2 = &(pFVar22->_Slots).ArrayMax;
    if (iVar18 == *piVar2) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8e8,&pTVar42->AllocatorInstance,piVar2);
    }
    (pFVar22->_Slots).ArrayNum = iVar18 + 1;
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)((pTVar42->AllocatorInstance).Data + (longlong)iVar18 * 0xe8),
               pFVar35);
    this_05 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_12a8,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x275,local_res10);
    local_1920 = (this_05->_Widget).Object;
    local_1918.ReferenceController = (this_05->_Widget).SharedReferenceCount.ReferenceController;
    if (local_1918.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1918.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1918.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->ContentAreaVBox != (TSharedPtr<SWidget,1> *)&local_1920) {
      (this->ContentAreaVBox).Object = (SWidget *)local_1920;
      local_1920 = (SVerticalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ContentAreaVBox).SharedReferenceCount,&local_1918);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1918.ReferenceController);
    pTVar36 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_05,&local_13b8,local_1778);
    pTVar9 = (pTVar36->SharedReferenceCount).ReferenceController;
    local_15c0.Object = (SWidget *)pTVar36->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15c0.SharedReferenceCount.ReferenceController = pTVar9;
    pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)this_08,&local_15c0);
    local_res8 = SOverlay::FArguments::operator+(local_1758,pFVar29);
    pFVar44 = ::operator_new(0x48);
    local_1750 = (FOverlaySlot *)0x0;
    if (pFVar44 != (FOverlaySlot *)0x0) {
      local_1750 = SOverlay::FOverlaySlot::FOverlaySlot(pFVar44,0);
    }
    SOverlay::FOverlaySlot::FSlotArguments::FSlotArguments(&local_1248,(FOverlaySlot *)&local_1750);
    pFVar37 = SPopupLayer::FArguments::FArguments(&local_d78);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13e8);
    local_17a8.Object = (SWindow *)pTVar23->Object;
    local_17a8.SharedReferenceCount.ReferenceController =
         (pTVar23->SharedReferenceCount).ReferenceController;
    if (local_17a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_17a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_17a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13e8.SharedReferenceCount.ReferenceController);
    local_1720.Arg0 = &local_17a8;
    pTVar38 = MakeTDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
                        (&local_1278,"SPopupLayer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x280,&local_1720);
    pTVar38 = TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
              Expose<SPopupLayer>(pTVar38,&this->PopupLayer);
    pTVar39 = TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
              operator<<=(pTVar38,&local_13c8,pFVar37);
    pTVar10 = (pTVar39->SharedReferenceCount).ReferenceController;
    local_15b0.Object = (SWidget *)pTVar39->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15b0.SharedReferenceCount.ReferenceController = pTVar10;
    pFVar29 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)&local_1248,&local_15b0);
    pFVar28 = SOverlay::FArguments::operator+(local_res8,pFVar29);
    pTVar40 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                        (&local_1290,"SOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x25d,local_res18);
    pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::Expose<SOverlay>
                        (pTVar40,&this->WindowOverlay);
    pTVar41 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar40,&local_13d8,pFVar28);
    pTVar11 = (pTVar41->SharedReferenceCount).ReferenceController;
    local_15a0.Object = (SWidget *)pTVar41->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15a0.SharedReferenceCount.ReferenceController = pTVar11;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_15a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1290._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1278._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17a8.SharedReferenceCount.ReferenceController);
    DestructItems<FPopupLayerSlot::FSlotArguments,int>
              ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data,local_d78._Slots.ArrayNum);
    if ((FSlotArguments *)local_d78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_d78._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d78);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1248);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12a8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1578.SharedReferenceCount.ReferenceController);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1068);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_b70._Slots.AllocatorInstance.Data,local_b70._Slots.ArrayNum);
    if ((FSlotArguments *)local_b70._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_b70._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_b70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a08);
    if (local_1a00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1a00.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a08);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_11e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13a8.SharedReferenceCount.ReferenceController);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1398.SharedReferenceCount.ReferenceController);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1370.SharedReferenceCount.ReferenceController);
    SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_10c8);
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_968._Slots.AllocatorInstance.Data,local_968._Slots.ArrayNum);
    if ((FSlotArguments *)local_968._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_968._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_968);
    FVar43.ReferenceController = local_1a18.SharedReferenceCount.ReferenceController;
    goto LAB_1425d74e9;
  }
  FVar43.ReferenceController = local_1a18.SharedReferenceCount.ReferenceController;
  if (!this->bHasOSWindowBorder && !this->bVirtualWindow) goto LAB_1425d74e9;
  pFVar25 = SVerticalBox::AddSlot(this_03,&local_150);
  local_1640.Value = 1.0;
  local_1640.bIsSet = true;
  local_1640.Getter._0_8_ = 0;
  local_1640.Getter._8_8_ = 0;
  local_1640.Getter._16_8_ = 0;
  pFVar27 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)&pFVar25->_padding_,&local_1640);
  this->ContentSlot = *(FSlot **)pFVar27;
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)pFVar27,&SNullWidget::NullWidget);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_150);
  pFVar28 = SOverlay::FArguments::FArguments(&local_558);
  this_06 = ::operator_new(0x48);
  if (this_06 != (FOverlaySlot *)0x0) {
    pFVar44 = SOverlay::FOverlaySlot::FOverlaySlot(this_06,0);
  }
  local_1a78 = pFVar44;
  SOverlay::FOverlaySlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1308,(FOverlaySlot *)&local_1a78);
  FVar43.ReferenceController = local_1a18.SharedReferenceCount.ReferenceController;
  local_1898.ReferenceController = local_1a18.SharedReferenceCount.ReferenceController;
  if (local_1a18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1308._8_8_ = this_03;
  local_18a0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1308 + 0x10),&local_1898);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1898.ReferenceController);
  pFVar28 = SOverlay::FArguments::operator+(pFVar28,(FSlotArguments *)local_1308);
  pFVar44 = ::operator_new(0x48);
  if (pFVar44 == (FOverlaySlot *)0x0) {
    local_1850._padding_ = 0;
LAB_1425d7015:
    local_1850._padding_ = 0;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Slot.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                        ,0x9b,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_1850._padding_ = (longlong)SOverlay::FOverlaySlot::FOverlaySlot(pFVar44,0);
    local_1850._padding_ = 0;
    if ((FOverlaySlot *)local_1850._padding_ == (FOverlaySlot *)0x0) goto LAB_1425d7015;
  }
  local_1850._padding_._0_1_ = 0;
  local_1850._padding_ = 0;
  local_1850._padding_ = 0;
  local_1850._padding_ = 0;
  local_1850._padding_._4_1_ = 0;
  local_1850._padding_ = 0;
  local_1850._padding_ = 0;
  local_1850._padding_._4_1_ = 0;
  local_1850._ZOrder.bIsSet = false;
  pFVar37 = SPopupLayer::FArguments::FArguments(&local_760);
  pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1360);
  local_1798.Object = (SWindow *)pTVar23->Object;
  local_1798.SharedReferenceCount.ReferenceController =
       (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_1798.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1798.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1360.SharedReferenceCount.ReferenceController);
  local_17e0.Arg0 = &local_1798;
  FLLMScope::FLLMScope(&local_1a84,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1718 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1710,&local_1718,true);
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
            (&local_1608,"SPopupLayer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x298,&local_17e0);
  FMemScope::~FMemScope(&local_1710);
  FLLMScope::~FLLMScope(&local_1a84);
  if (local_1608._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1608._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1608._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1460 = (this->PopupLayer).Object;
  pTStack_1458 = (this->PopupLayer).SharedReferenceCount.ReferenceController;
  (this->PopupLayer).Object = local_1608._Widget.Object;
  (this->PopupLayer).SharedReferenceCount.ReferenceController =
       local_1608._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1458);
  pTVar39 = TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
            operator<<=(&local_1608,&local_1590,pFVar37);
  pTVar5 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_1850._padding_ = (longlong)pTVar39->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18b0 = 0;
  local_18a8.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)&local_1850._padding_,&local_18a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18a8.ReferenceController);
  pFVar28 = SOverlay::FArguments::operator+(pFVar28,&local_1850);
  FLLMScope::FLLMScope(local_1a80,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_17f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_17e8,&local_17f0,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1620,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x291,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_17e8);
  FLLMScope::~FLLMScope(local_1a80);
  if (local_1620._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1620._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1620._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1450 = (this->WindowOverlay).Object;
  pTStack_1448 = (this->WindowOverlay).SharedReferenceCount.ReferenceController;
  (this->WindowOverlay).Object = local_1620._Widget.Object;
  (this->WindowOverlay).SharedReferenceCount.ReferenceController =
       local_1620._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1448);
  pTVar41 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1620,&local_1440,pFVar28);
  this_07 = &this->_padding_;
  pTVar12 = (pTVar41->SharedReferenceCount).ReferenceController;
  pSVar13 = pTVar41->Object;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_07);
  }
  else {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_07);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar13;
  this->_padding_ = (longlong)pTVar12;
  local_1a70 = pSVar13;
  pTStack_1a68 = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_07);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1440.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1620._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1590.SharedReferenceCount.ReferenceController._4_4_,
                      local_1590.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1608._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1798.SharedReferenceCount.ReferenceController);
  DestructItems<FPopupLayerSlot::FSlotArguments,int>
            ((FSlotArguments *)local_760._Slots.AllocatorInstance.Data,local_760._Slots.ArrayNum);
  if ((FSlotArguments *)local_760._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_760._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_760);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_1850._padding_,
             (FWriteAccessScope *)&local_14f8);
  if (((int)local_1850._padding_ != 0) && ((undefined8 *)local_1850._padding_ != (undefined8 *)0x0))
  {
    (*(code *)**(undefined8 **)local_1850._padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1850._padding_,0,0,0x10);
    local_1850._padding_ = local_1850._padding_ & 0xffffffff00000000;
  }
  if (local_14f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14f8.Accessor,&local_14f8);
  }
  if ((undefined8 *)local_1850._padding_ != (undefined8 *)0x0) {
    FMemory::Free((void *)local_1850._padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_1850._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1850._padding_);
  if ((FOverlaySlot *)local_1850._padding_ != (FOverlaySlot *)0x0) {
    (**(code **)*(longlong *)local_1850._padding_)(local_1850._padding_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar43.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1308 + 0x30));
  if (local_12d0 != (void *)0x0) {
    FMemory::Free(local_12d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1308 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1308._16_8_);
  if ((undefined8 *)local_1308._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1308._0_8_)(local_1308._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_558._Slots.AllocatorInstance.Data,local_558._Slots.ArrayNum);
  if ((FSlotArguments *)local_558._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_558._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_558);
  FVar43.ReferenceController = local_1a18.SharedReferenceCount.ReferenceController;
LAB_1425d74e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1780);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1988,
             (FWriteAccessScope *)&local_14e0);
  if (((int)local_1978 != 0) && (FStack_1980.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1980.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1980,0,0,0x10);
    local_1978 = local_1978 & 0xffffffff00000000;
  }
  if (local_14e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e0.Accessor,&local_14e0);
  }
  if (FStack_1980.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1980.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1988);
  if (local_19a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_19a0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_19b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar43.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 1425d8eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SWindow::CreateAccessibleWidget
          (SWindow *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Window);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleWindow::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleWindow::_vftable__for__IAccessibleWindow__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Window);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleWindow::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleWindow::_vftable__for__IAccessibleWindow__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// CustomPrepass @ 1425d9b10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::CustomPrepass(SWindow *this,float param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x210))();
  if (cVar1 != '\0') {
    return (bool)((byte)this->_padding_ >> 7);
  }
  return true;
}

// DestroyWindowImmediately @ 1425da600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::DestroyWindowImmediately(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425da60f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))();
    return;
  }
  return;
}

// DrawAttention @ 1425da800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::DrawAttention(SWindow *this,FWindowDrawAttentionParameters *param_1)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425da80f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x118))();
    return;
  }
  return;
}

// EnableWindow @ 1425dac40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::EnableWindow(SWindow *this,bool param_1)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0xa0))();
  }
  uVar5 = 0;
  if (0 < (this->ChildWindows).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ChildWindows).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnableWindow(*(SWindow **)((this->ChildWindows).AllocatorInstance.Data + lVar6),param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->ChildWindows).ArrayNum);
  }
  return;
}

// EndFullWindowOverlayTransition @ 1425dad10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::EndFullWindowOverlayTransition(SWindow *this)

{
  this->bShouldShowWindowContentDuringOverlay = false;
  UpdateWindowContentVisibility(this);
  return;
}

// FlashWindow @ 1425dcd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::FlashWindow(SWindow *this)

{
  IWindowTitleBar *pIVar1;
  
  pIVar1 = (this->TitleBar).Object;
  if (pIVar1 != (IWindowTitleBar *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425dcd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)();
    return;
  }
  return;
}

// GetChildWindows @ 1425dfc70

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> * __thiscall
SWindow::GetChildWindows(SWindow *this)

{
  return &this->ChildWindows;
}

// GetChildWindows @ 1425dfc80

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> * __thiscall
SWindow::GetChildWindows(SWindow *this)

{
  return &this->ChildWindows;
}

// GetClientRectInScreen @ 1425dfdf0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
SWindow::GetClientRectInScreen(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FDeprecateSlateVector2D FVar10;
  FGenericWindow *pFVar11;
  FMargin *pFVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float fStackX_c;
  FMargin local_68 [6];
  
  if (this->bVirtualWindow) {
    fVar1 = *(float *)&(this->Size).field_0x4;
    __return_storage_ptr__->Right = *(float *)&this->Size;
    __return_storage_ptr__->Bottom = fVar1;
    __return_storage_ptr__->Left = 0.0;
    __return_storage_ptr__->Top = 0.0;
  }
  else if (this->bHasOSWindowBorder) {
    GetRectInScreen(this,__return_storage_ptr__);
  }
  else {
    FVar10 = this->ScreenPosition;
    fVar1 = *(float *)&this->ScreenPosition;
    fVar2 = *(float *)&this->Size;
    fVar3 = *(float *)&(this->ScreenPosition).field_0x4;
    fVar4 = *(float *)&(this->Size).field_0x4;
    pFVar12 = GetWindowBorderSize(this,local_68,false);
    fVar14 = __real_3f800000;
    pFVar11 = (this->NativeWindow).Object;
    fVar13 = __real_3f800000;
    if (pFVar11 != (FGenericWindow *)0x0) {
      fVar13 = (float)(**(code **)(pFVar11->_padding_ + 0xf8))();
    }
    pFVar11 = (this->NativeWindow).Object;
    fVar5 = pFVar12->Left;
    fVar6 = pFVar12->Top;
    fVar7 = pFVar12->Right;
    fVar8 = pFVar12->Bottom;
    local_res8 = FVar10._0_4_;
    fStackX_c = FVar10._4_4_;
    if (pFVar11 != (FGenericWindow *)0x0) {
      fVar14 = (float)(**(code **)(pFVar11->_padding_ + 0xf8))();
    }
    fVar9 = this->TitleBarSize;
    __return_storage_ptr__->Left = fVar13 * fVar5 + local_res8;
    __return_storage_ptr__->Right = (fVar1 + fVar2) - fVar13 * fVar7;
    __return_storage_ptr__->Bottom = (fVar3 + fVar4) - fVar13 * fVar8;
    __return_storage_ptr__->Top = fVar13 * fVar6 + fStackX_c + fVar14 * fVar9;
  }
  return __return_storage_ptr__;
}

// GetClientSizeInScreen @ 1425dff80

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetClientSizeInScreen(SWindow *this)

{
  FSlateRect *pFVar1;
  FDeprecateSlateVector2D in_RDX;
  FSlateRect local_18;
  
  pFVar1 = GetClientRectInScreen(this,&local_18);
  *(ulonglong *)in_RDX = CONCAT44(pFVar1->Bottom - pFVar1->Top,pFVar1->Right - pFVar1->Left);
  return in_RDX;
}

// GetClippingRectangleInWindow @ 1425dffd0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
SWindow::GetClippingRectangleInWindow(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  FDeprecateSlateVector2D *pFVar1;
  float local_res8;
  float fStackX_c;
  
  pFVar1 = &this->ViewportSize;
  if (*(float *)pFVar1 == 0.0) {
    pFVar1 = &this->Size;
  }
  local_res8 = SUB84(*pFVar1,0);
  fStackX_c = SUB84(*pFVar1,4);
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = local_res8;
  __return_storage_ptr__->Bottom = fStackX_c;
  return __return_storage_ptr__;
}

// GetContent @ 1425e02d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWindow::GetContent(SWindow *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FSlot *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = this->ContentSlot;
  if (pFVar1 == (FSlot *)0x0) {
    (**(code **)(this->_padding_ + 0x10))(&this->_padding_,__return_storage_ptr__,0);
  }
  else {
    __return_storage_ptr__->Object = *(SWidget **)&pFVar1->field_0x10;
    pTVar2 = *(TReferenceControllerBase<1> **)&pFVar1->field_0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetCornerRadius @ 1425e0330

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SWindow::GetCornerRadius(SWindow *this)

{
  return this->Style->WindowCornerRadius;
}

// GetCurrentWindowZone @ 1425e03b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

Type __thiscall SWindow::GetCurrentWindowZone(SWindow *this,FDeprecateVector2DParameter param_1)

{
  TSharedPtr<FGenericWindow,1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  ICursor *pIVar2;
  SWidget *pSVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  Type TVar10;
  int iVar11;
  Type TVar12;
  FSlateApplicationBase *pFVar13;
  FGenericWindow *pFVar14;
  FHitTesting *this_01;
  TSharedRef<SWidget,1> *pTVar15;
  TVector2<float>_u_0 *pTVar16;
  FArrangedWidget *pFVar17;
  ForElementType<FArrangedWidget> FVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10;
  float fStackX_14;
  undefined1 auStackY_268 [32];
  TSharedRef<SWindow,1> local_238;
  undefined1 local_228 [8];
  TSharedRef<SWidget,1> local_220;
  TSharedRef<SWidget,1> local_210;
  FWidgetPath local_200;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = &this->NativeWindow;
  if ((this_00->Object == (FGenericWindow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    TVar10 = (*pcVar5)();
    return TVar10;
  }
  iVar11 = (**(code **)(this_00->Object->_padding_ + 0x68))();
  if (iVar11 != 1) {
    if ((this_00->Object == (FGenericWindow *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar10 = (*pcVar5)();
      return TVar10;
    }
    iVar11 = (**(code **)(this_00->Object->_padding_ + 0x68))();
    if (iVar11 != 0) {
      bVar7 = false;
      goto LAB_1425e047e;
    }
  }
  bVar7 = true;
LAB_1425e047e:
  if ((this->Type != GameWindow) || (this->bHasOSWindowBorder)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  fVar22 = __real_3f800000;
  if (this_00->Object != (FGenericWindow *)0x0) {
    fVar22 = (float)(**(code **)(this_00->Object->_padding_ + 0xf8))();
  }
  pFVar13 = FSlateApplicationBase::Get();
  fVar23 = (float)(**(code **)(*(longlong *)pFVar13 + 0x58))(pFVar13);
  fVar23 = fVar23 * fVar22;
  fVar24 = fVar23 * (this->UserResizeBorder).Left;
  fVar22 = fVar23 * (this->UserResizeBorder).Top;
  fVar25 = fVar23 * (this->UserResizeBorder).Right;
  fVar26 = fVar23 * (this->UserResizeBorder).Bottom;
  FSlateApplicationBase::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar10 = (*pcVar5)();
    return TVar10;
  }
  pTVar1 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar2 == (ICursor *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar10 = (*pcVar5)();
    return TVar10;
  }
  iVar11 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (((bVar7) && (!bVar6)) || (iVar11 == 0)) {
    TVar10 = ClientArea;
  }
  else {
    local_res10 = param_1._0_4_;
    if (((local_res10 < 0.0) || (*(float *)&this->Size <= local_res10)) ||
       ((fStackX_14 = param_1._4_4_, fStackX_14 < 0.0 ||
        (*(float *)&(this->Size).field_0x4 <= fStackX_14)))) {
      TVar10 = NotInWindow;
    }
    else {
      lVar21 = 1;
      lVar19 = 1;
      lVar20 = 1;
      if ((this->SizingRule == UserSized) && (lVar20 = lVar19, !bVar7)) {
        pFVar14 = TSharedPtr<FGenericWindow,1>::operator->(this_00);
        cVar9 = (**(code **)(pFVar14->_padding_ + 0x70))(pFVar14);
        if (cVar9 == '\0') {
          lVar21 = 0;
          lVar20 = lVar21;
          if ((fVar24 + __real_40a00000 <= local_res10) &&
             (lVar20 = lVar19, *(float *)&this->Size - (fVar25 + __real_40a00000) <= local_res10)) {
            lVar20 = 2;
          }
          if ((fVar22 + __real_40a00000 <= fStackX_14) &&
             (lVar21 = 1,
             *(float *)&(this->Size).field_0x4 - (fVar26 + __real_40a00000) <= fStackX_14)) {
            lVar21 = 2;
          }
          if ((((fVar24 <= local_res10) && (local_res10 < *(float *)&this->Size - fVar25)) &&
              (fVar22 <= fStackX_14)) && (fStackX_14 < *(float *)&(this->Size).field_0x4 - fVar26))
          {
            lVar21 = 1;
            lVar20 = 1;
          }
        }
      }
      TVar10 = TypeZones[lVar21][lVar20];
      pFVar13 = FSlateApplicationBase::Get();
      if (TVar10 == ClientArea) {
        this_01 = FSlateApplicationBase::GetHitTesting(pFVar13);
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_220);
        local_238.Object = (SWindow *)pTVar15->Object;
        local_238.SharedReferenceCount.ReferenceController =
             (pTVar15->SharedReferenceCount).ReferenceController;
        if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_220.SharedReferenceCount.ReferenceController);
        pFVar13 = FSlateApplicationBase::Get();
        pTVar16 = (TVector2<float>_u_0 *)
                  (**(code **)(*(longlong *)pFVar13 + 0x68))(pFVar13,local_228);
        FHitTesting::LocateWidgetInWindow
                  (this_01,&local_200,(TVector2<float>)pTVar16->_s_0,&local_238,false,-1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_238.SharedReferenceCount.ReferenceController);
        TVar10 = ClientArea;
        TVar12 = TVar10;
        if (0 < local_200.Widgets.Array.ArrayNum) {
          pFVar17 = FArrangedChildren::Last(&local_200.Widgets);
          TVar12 = (**(code **)(((pFVar17->Widget).Object)->_padding_ + 0x148))();
          if (TVar12 == NotInWindow) {
            pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                                ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_210);
            pFVar17 = FArrangedChildren::Last(&local_200.Widgets);
            pSVar3 = pTVar15->Object;
            pSVar4 = (pFVar17->Widget).Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_210.SharedReferenceCount.ReferenceController);
            TVar12 = TVar10;
            if ((pSVar4 == pSVar3) && (fStackX_14 - fVar22 < fVar23 * this->TitleBarSize)) {
              TVar12 = TitleBar;
            }
          }
        }
        this->WindowZone = TVar12;
        if (local_200.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_200.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar18 = (ForElementType<FArrangedWidget>)&local_200.Widgets.Array;
        if (local_200.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar18 = local_200.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar18,local_200.Widgets.Array.ArrayNum);
        if (local_200.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_200.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        return this->WindowZone;
      }
      cVar9 = (**(code **)(*(longlong *)pFVar13 + 0xc0))(pFVar13);
      if (cVar9 != '\0') {
        TVar10 = ClientArea;
      }
    }
    this->WindowZone = TVar10;
  }
  return TVar10;
}

// GetDPIScaleFactor @ 1425e0970

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SWindow::GetDPIScaleFactor(SWindow *this)

{
  FGenericWindow *pFVar1;
  float fVar2;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e097f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(pFVar1->_padding_ + 0xf8))();
    return fVar2;
  }
  return __real_3f800000;
}

// GetDefaultAccessibleText @ 1425e09c0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FText> * __thiscall
SWindow::GetDefaultAccessibleText
          (SWindow *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar3 = TAttribute<FText>::Get(&this->Title);
  local_18.TextData.Reference = (pFVar3->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = pFVar3->Flags;
  FText::FText((FText *)__return_storage_ptr__,&local_18);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDesiredSizeDesktopPixels @ 1425e0e50

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetDesiredSizeDesktopPixels(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  if ((this->_padding_ & 0x2000) != 0) {
    *(longlong *)in_RDX = this->_padding_;
    return in_RDX;
  }
  *(TVector2<float>_u_0 *)in_RDX =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return in_RDX;
}

// GetFullScreenInfo @ 1425e11a0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall SWindow::GetFullScreenInfo(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  FGenericWindow *pFVar1;
  char cVar2;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  int local_18 [4];
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x10))
                      (pFVar1,local_res8,local_res18,local_res20,local_18);
    if (cVar2 != '\0') {
      __return_storage_ptr__->Left = (float)local_res8[0];
      __return_storage_ptr__->Right = (float)(local_res8[0] + local_res20[0]);
      __return_storage_ptr__->Top = (float)local_res18[0];
      __return_storage_ptr__->Bottom = (float)(local_18[0] + local_res18[0]);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Left = -1.0;
  __return_storage_ptr__->Top = -1.0;
  __return_storage_ptr__->Right = -1.0;
  __return_storage_ptr__->Bottom = -1.0;
  return __return_storage_ptr__;
}

// GetHittestGrid @ 1425e1460

/* WARNING: Enum "Type": Some values do not have unique names */

FHittestGrid * __thiscall SWindow::GetHittestGrid(SWindow *this)

{
  return (this->HittestGrid).Ptr;
}

// GetInitialDesiredPositionInScreen @ 1425e1520

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetInitialDesiredPositionInScreen(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = this->InitialDesiredScreenPosition;
  return in_RDX;
}

// GetInitialDesiredSizeInScreen @ 1425e1540

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetInitialDesiredSizeInScreen(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = this->InitialDesiredSize;
  return in_RDX;
}

// GetLocalToScreenTransform @ 1425e15e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateLayoutTransform * __thiscall
SWindow::GetLocalToScreenTransform(SWindow *this,FSlateLayoutTransform *__return_storage_ptr__)

{
  TVector2<float>_u_0 TVar1;
  FGenericWindow *pFVar2;
  FSlateApplicationBase *pFVar3;
  float fVar4;
  float fVar5;
  
  TVar1 = *(TVector2<float>_u_0 *)&this->ScreenPosition;
  pFVar3 = FSlateApplicationBase::Get();
  pFVar2 = (this->NativeWindow).Object;
  fVar4 = __real_3f800000;
  if (pFVar2 != (FGenericWindow *)0x0) {
    fVar4 = (float)(**(code **)(pFVar2->_padding_ + 0xf8))();
  }
  fVar5 = (float)(**(code **)(*(longlong *)pFVar3 + 0x58))(pFVar3);
  (__return_storage_ptr__->Translation).field0_0x0 = TVar1;
  __return_storage_ptr__->Scale = fVar5 * fVar4;
  return __return_storage_ptr__;
}

// GetLocalToWindowTransform @ 1425e1670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateLayoutTransform * __thiscall
SWindow::GetLocalToWindowTransform(SWindow *this,FSlateLayoutTransform *__return_storage_ptr__)

{
  FGenericWindow *pFVar1;
  FSlateApplicationBase *pFVar2;
  float fVar3;
  float fVar4;
  
  pFVar2 = FSlateApplicationBase::Get();
  pFVar1 = (this->NativeWindow).Object;
  fVar3 = __real_3f800000;
  if (pFVar1 != (FGenericWindow *)0x0) {
    fVar3 = (float)(**(code **)(pFVar1->_padding_ + 0xf8))();
  }
  fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 0x58))(pFVar2);
  (__return_storage_ptr__->Translation).field0_0x0 = (TVector2<float>_u_0)0x0;
  __return_storage_ptr__->Scale = fVar4 * fVar3;
  return __return_storage_ptr__;
}

// GetMorphTargetPosition @ 1425e16f0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetMorphTargetPosition(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&(this->Morpher).TargetMorphShape;
  return in_RDX;
}

// GetMorphTargetShape @ 1425e1720

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
SWindow::GetMorphTargetShape(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Morpher).TargetMorphShape.Top;
  fVar2 = (this->Morpher).TargetMorphShape.Right;
  fVar3 = (this->Morpher).TargetMorphShape.Bottom;
  __return_storage_ptr__->Left = (this->Morpher).TargetMorphShape.Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetNativeWindow @ 1425e1840

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FGenericWindow,1> * __thiscall
SWindow::GetNativeWindow(SWindow *this,TSharedPtr<FGenericWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NativeWindow).Object;
  pTVar1 = (this->NativeWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNativeWindow @ 1425e1870

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FGenericWindow_const_,1> * __thiscall
SWindow::GetNativeWindow(SWindow *this,TSharedPtr<FGenericWindow_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NativeWindow).Object;
  pTVar1 = (this->NativeWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNonMaximizedRectInScreen @ 1425e1d40

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
SWindow::GetNonMaximizedRectInScreen(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  FGenericWindow *pFVar1;
  char cVar2;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_18 [4];
  
  pFVar1 = (this->NativeWindow).Object;
  local_res8[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_18[0] = 0;
  if (pFVar1 != (FGenericWindow *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x88))
                      (pFVar1,local_res8,local_res18,local_res20,local_18);
    if (cVar2 != '\0') {
      __return_storage_ptr__->Left = (float)local_res8[0];
      __return_storage_ptr__->Right = (float)(local_res8[0] + local_res20[0]);
      __return_storage_ptr__->Top = (float)local_res18[0];
      __return_storage_ptr__->Bottom = (float)(local_18[0] + local_res18[0]);
      return __return_storage_ptr__;
    }
  }
  GetRectInScreen(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNonMaximizedWindowBorderSize @ 1425e1e10

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SWindow::GetNonMaximizedWindowBorderSize(SWindow *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->LayoutBorder).Top;
  fVar2 = (this->LayoutBorder).Right;
  fVar3 = (this->LayoutBorder).Bottom;
  __return_storage_ptr__->Left = (this->LayoutBorder).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetOpacity @ 1425e1fc0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SWindow::GetOpacity(SWindow *this)

{
  return this->Opacity;
}

// GetParentWindow @ 1425e2180

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
SWindow::GetParentWindow(SWindow *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWindow *)0x0;
  pTVar1 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->ParentWindowPtr).Object;
  }
  return __return_storage_ptr__;
}

// GetPositionInScreen @ 1425e21d0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetPositionInScreen(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = this->ScreenPosition;
  return in_RDX;
}

// GetRectInScreen @ 1425e2f80

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall SWindow::GetRectInScreen(SWindow *this,FSlateRect *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  
  fVar1 = *(float *)&this->Size;
  if (this->bVirtualWindow) {
    __return_storage_ptr__->Right = fVar1;
    __return_storage_ptr__->Left = 0.0;
    __return_storage_ptr__->Top = 0.0;
    __return_storage_ptr__->Bottom = *(float *)&(this->Size).field_0x4;
    return __return_storage_ptr__;
  }
  fVar2 = *(float *)&this->ScreenPosition;
  local_res8 = SUB84(this->ScreenPosition,0);
  fStackX_c = SUB84(this->ScreenPosition,4);
  __return_storage_ptr__->Left = local_res8;
  fVar3 = *(float *)&(this->ScreenPosition).field_0x4;
  fVar4 = *(float *)&(this->Size).field_0x4;
  __return_storage_ptr__->Top = fStackX_c;
  __return_storage_ptr__->Right = fVar1 + fVar2;
  __return_storage_ptr__->Bottom = fVar3 + fVar4;
  return __return_storage_ptr__;
}

// GetRootWidget @ 1425e3010

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWindow::GetRootWidget(SWindow *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this[-1].Morpher.Sequence.Curves,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// GetSizeInScreen @ 1425e3040

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SWindow::GetSizeInScreen(SWindow *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(FDeprecateSlateVector2D *)in_RDX = this->Size;
  return in_RDX;
}

// GetSizeLimits @ 1425e3060

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowSizeLimits * __thiscall
SWindow::GetSizeLimits(SWindow *this,FWindowSizeLimits *__return_storage_ptr__)

{
  bool bVar1;
  
  (__return_storage_ptr__->MinWidth).bIsSet = false;
  bVar1 = (this->SizeLimits).MinWidth.bIsSet;
  (__return_storage_ptr__->MinWidth).bIsSet = bVar1;
  if (bVar1 != false) {
    (__return_storage_ptr__->MinWidth).TypedValue = (this->SizeLimits).MinWidth.TypedValue;
  }
  (__return_storage_ptr__->MinHeight).bIsSet = false;
  bVar1 = (this->SizeLimits).MinHeight.bIsSet;
  (__return_storage_ptr__->MinHeight).bIsSet = bVar1;
  if (bVar1 != false) {
    (__return_storage_ptr__->MinHeight).TypedValue = (this->SizeLimits).MinHeight.TypedValue;
  }
  (__return_storage_ptr__->MaxWidth).bIsSet = false;
  bVar1 = (this->SizeLimits).MaxWidth.bIsSet;
  (__return_storage_ptr__->MaxWidth).bIsSet = bVar1;
  if (bVar1 != false) {
    (__return_storage_ptr__->MaxWidth).TypedValue = (this->SizeLimits).MaxWidth.TypedValue;
  }
  (__return_storage_ptr__->MaxHeight).bIsSet = false;
  bVar1 = (this->SizeLimits).MaxHeight.bIsSet;
  (__return_storage_ptr__->MaxHeight).bIsSet = bVar1;
  if (bVar1 != false) {
    (__return_storage_ptr__->MaxHeight).TypedValue = (this->SizeLimits).MaxHeight.TypedValue;
  }
  return __return_storage_ptr__;
}

// GetTitleAlignment @ 1425e3b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EHorizontalAlignment __thiscall SWindow::GetTitleAlignment(SWindow *this)

{
  code *pcVar1;
  GenericApplication *pGVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  EHorizontalAlignment EVar5;
  int iVar6;
  
  FSlateApplicationBase::Get();
  FVar3 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
  pGVar2 = FSlateApplicationBase::PlatformApplication.Object;
  if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pGVar2 == (GenericApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      EVar5 = (*pcVar1)();
      return EVar5;
    }
  }
  iVar6 = (**(code **)(pGVar2->_padding_ + 200))(pGVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  if (iVar6 == 0) {
    return HAlign_Left;
  }
  return (iVar6 != 1) + HAlign_Center;
}

// GetTitleBarSize @ 1425e3be0

/* WARNING: Enum "Type": Some values do not have unique names */

FOptionalSize __thiscall SWindow::GetTitleBarSize(SWindow *this)

{
  float *in_RDX;
  
  *in_RDX = this->TitleBarSize;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// GetTopmostAncestor @ 1425e3cc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
SWindow::GetTopmostAncestor(SWindow *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedPtr<SWindow,1> *pTVar8;
  TSharedPtr<SWindow,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pSVar2 = (SWindow *)pTVar7->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  do {
    if ((__return_storage_ptr__->Object == (SWindow *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<SWindow,1> *)(*pcVar3)();
      return pTVar8;
    }
    if ((((__return_storage_ptr__->Object->ParentWindowPtr).Object == (SWindow *)0x0) ||
        (pTVar1 = (__return_storage_ptr__->Object->ParentWindowPtr).WeakReferenceCount.
                  ReferenceController, pTVar1 == (TReferenceControllerBase<1> *)0x0)) ||
       ((int)pTVar1->SharedReferenceCount < 1)) {
      return __return_storage_ptr__;
    }
    if ((__return_storage_ptr__->Object == (SWindow *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<SWindow,1> *)(*pcVar3)();
      return pTVar8;
    }
    pSVar2 = __return_storage_ptr__->Object;
    local_28.Object = (SWindow *)0x0;
    local_28.SharedReferenceCount.ReferenceController =
         (pSVar2->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1425e3de6;
        }
        LOCK();
        aVar6 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      local_28.Object = (pSVar2->ParentWindowPtr).Object;
    }
LAB_1425e3de6:
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  } while( true );
}

// GetTransparencySupport @ 1425e3e50

/* WARNING: Enum "Type": Some values do not have unique names */

EWindowTransparency __thiscall SWindow::GetTransparencySupport(SWindow *this)

{
  return this->TransparencySupport;
}

// GetWindowBorderSize @ 1425e50e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FMargin * __thiscall
SWindow::GetWindowBorderSize(SWindow *this,FMargin *__return_storage_ptr__,bool param_1)

{
  TSharedPtr<FGenericWindow,1> *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FSlateApplicationBase *pFVar5;
  FMargin *pFVar6;
  FGenericWindow *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  this_00 = &this->NativeWindow;
  if ((this_00->Object == (FGenericWindow *)0x0) ||
     (cVar2 = (**(code **)(this_00->Object->_padding_ + 0x70))(), cVar2 == '\0')) {
    fVar10 = (this->LayoutBorder).Top;
    fVar8 = (this->LayoutBorder).Right;
    fVar9 = (this->LayoutBorder).Bottom;
    __return_storage_ptr__->Left = (this->LayoutBorder).Left;
    __return_storage_ptr__->Top = fVar10;
    __return_storage_ptr__->Right = fVar8;
    __return_storage_ptr__->Bottom = fVar9;
  }
  else {
    pFVar5 = FSlateApplicationBase::Get();
    fVar10 = __real_3f800000;
    fVar8 = __real_3f800000;
    if (this_00->Object != (FGenericWindow *)0x0) {
      fVar8 = (float)(**(code **)(this_00->Object->_padding_ + 0xf8))();
    }
    fVar9 = (float)(**(code **)(*(longlong *)pFVar5 + 0x58))(pFVar5);
    fVar10 = fVar10 / (fVar9 * fVar8);
    if ((this_00->Object == (FGenericWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMargin *)(*pcVar1)();
      return pFVar6;
    }
    iVar4 = (**(code **)(this_00->Object->_padding_ + 0xb0))();
    fVar9 = (float)iVar4 * fVar10;
    fVar8 = fVar9;
    if (param_1) {
      pFVar7 = TSharedPtr<FGenericWindow,1>::operator->(this_00);
      iVar4 = (**(code **)(pFVar7->_padding_ + 0xb8))(pFVar7);
      fVar8 = (float)iVar4 * fVar10 + fVar9;
    }
    __return_storage_ptr__->Left = fVar9;
    __return_storage_ptr__->Top = fVar8;
    __return_storage_ptr__->Right = fVar9;
    __return_storage_ptr__->Bottom = fVar9;
  }
  return __return_storage_ptr__;
}

// GetWindowCloseButtonToolTipText @ 1425e5220

/* WARNING: Enum "Type": Some values do not have unique names */

TAttribute<FText> * __thiscall
SWindow::GetWindowCloseButtonToolTipText(SWindow *this,TAttribute<FText> *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Value).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (this->CloseButtonToolTipText).Value.TextData.Reference;
  (__return_storage_ptr__->Value).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->Value).Flags = (this->CloseButtonToolTipText).Value.Flags;
  __return_storage_ptr__->bIsSet = (this->CloseButtonToolTipText).bIsSet;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->Getter,&(this->CloseButtonToolTipText).Getter);
  return __return_storage_ptr__;
}

// GetWindowGeometryInScreen @ 1425e52a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FGeometry * __thiscall
SWindow::GetWindowGeometryInScreen(SWindow *this,FGeometry *__return_storage_ptr__)

{
  TVector2<float>_u_0 TVar1;
  FGenericWindow *pFVar2;
  float fVar3;
  FSlateApplicationBase *pFVar4;
  float fVar5;
  float fVar6;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  TTransform2<float> local_78;
  TTransform2<float> local_60 [3];
  
  TVar1 = *(TVector2<float>_u_0 *)&this->ScreenPosition;
  pFVar4 = FSlateApplicationBase::Get();
  fVar3 = __real_3f800000;
  pFVar2 = (this->NativeWindow).Object;
  fVar5 = __real_3f800000;
  if (pFVar2 != (FGenericWindow *)0x0) {
    fVar5 = (float)(**(code **)(pFVar2->_padding_ + 0xf8))();
  }
  fVar6 = (float)(**(code **)(*(longlong *)pFVar4 + 0x58))(pFVar4);
  local_60[0].Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  fVar6 = fVar6 * fVar5;
  local_78.M.M[0][1] = 0.0;
  local_78.M.M[1][0] = 0.0;
  local_60[0].M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_60[0].M.M[0][1] = _UNK_15076b184;
  local_60[0].M.M[1][0] = _UNK_15076b188;
  local_60[0].M.M[1][1] = _UNK_15076b18c;
  local_88 = SUB84(this->Size,0);
  fStack_84 = SUB84(this->Size,4);
  local_80._4_4_ = (fVar3 / fVar6) * fStack_84;
  local_80._0_4_ = (fVar3 / fVar6) * local_88;
  __return_storage_ptr__->Size = local_80;
  *(undefined8 *)&__return_storage_ptr__->Scale = 0x3f800000;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_78.M.M[0][0] = fVar6;
  local_78.M.M[1][1] = fVar6;
  local_78.Trans.field0_0x0 = TVar1;
  Concatenate<TTransform2<float>_>
            (&__return_storage_ptr__->AccumulatedRenderTransform,&local_78,local_60);
  __return_storage_ptr__->bHasRenderTransform = '\0';
  __return_storage_ptr__->Scale = fVar6;
  (__return_storage_ptr__->Position).field0_0x0 = TVar1;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// GetWindowGeometryInWindow @ 1425e5400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FGeometry * __thiscall
SWindow::GetWindowGeometryInWindow(SWindow *this,FGeometry *__return_storage_ptr__)

{
  FGenericWindow *pFVar1;
  float fVar2;
  float afVar3 [2];
  float afVar4 [2];
  float afVar5 [2];
  float afVar6 [2];
  FSlateApplicationBase *pFVar7;
  FDeprecateSlateVector2D *pFVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  TTransform2<float> local_68;
  TTransform2<float> local_50 [3];
  
  pFVar7 = FSlateApplicationBase::Get();
  fVar2 = __real_3f800000;
  pFVar1 = (this->NativeWindow).Object;
  fVar9 = __real_3f800000;
  if (pFVar1 != (FGenericWindow *)0x0) {
    fVar9 = (float)(**(code **)(pFVar1->_padding_ + 0xf8))();
  }
  fVar10 = (float)(**(code **)(*(longlong *)pFVar7 + 0x58))(pFVar7);
  afVar5 = _UNK_15076b188;
  afVar3 = ___xmm_3f80000000000000000000003f800000;
  pFVar8 = &this->ViewportSize;
  fVar10 = fVar10 * fVar9;
  if (*(float *)pFVar8 == 0.0) {
    pFVar8 = &this->Size;
  }
  local_50[0].Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_68.M.M[0][1] = 0.0;
  local_68.M.M[1][0] = 0.0;
  local_68.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_88 = SUB84(*pFVar8,0);
  fStack_84 = SUB84(*pFVar8,4);
  local_80._4_4_ = (fVar2 / fVar10) * fStack_84;
  local_80._0_4_ = (fVar2 / fVar10) * local_88;
  __return_storage_ptr__->Size = local_80;
  *(undefined8 *)&__return_storage_ptr__->Scale = 0x3f800000;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  afVar6 = _UNK_15076b188;
  afVar4 = ___xmm_3f80000000000000000000003f800000;
  ___xmm_3f80000000000000000000003f800000 = afVar3[0];
  _UNK_15076b184 = afVar3[1];
  local_50[0].M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_50[0].M.M[0][1] = _UNK_15076b184;
  _UNK_15076b188 = afVar5[0];
  _UNK_15076b18c = afVar5[1];
  local_50[0].M.M[1][0] = _UNK_15076b188;
  local_50[0].M.M[1][1] = _UNK_15076b18c;
  ___xmm_3f80000000000000000000003f800000 = afVar4;
  _UNK_15076b188 = afVar6;
  local_68.M.M[0][0] = fVar10;
  local_68.M.M[1][1] = fVar10;
  Concatenate<TTransform2<float>_>
            (&__return_storage_ptr__->AccumulatedRenderTransform,&local_68,local_50);
  __return_storage_ptr__->bHasRenderTransform = '\0';
  __return_storage_ptr__->Scale = fVar10;
  (__return_storage_ptr__->Position).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->AbsolutePosition).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// GetWindowSizeFromClientSize @ 1425e5580

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
SWindow::GetWindowSizeFromClientSize
          (SWindow *this,FDeprecateVector2DParameter param_1,TOptional<float> param_2)

{
  FGenericWindow *pFVar1;
  char cVar2;
  TOptional<float> *pTVar3;
  float *pfVar4;
  TOptional<float> *in_R9;
  float fVar5;
  undefined8 local_res18;
  undefined1 local_38 [8];
  FMargin local_30 [2];
  
  local_res18 = param_2;
  if ((((this->bIsPopupWindow) || (this->Type == ToolTip)) || (this->Type == CursorDecorator)) ||
     ((this->bHasOSWindowBorder || (this->SizingRule == Autosized)))) goto LAB_1425e56fd;
  GetWindowBorderSize(this,local_30,false);
  if (in_R9->bIsSet == false) {
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      fVar5 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint
                        (*(float *)&this->InitialDesiredScreenPosition,
                         *(float *)&(this->InitialDesiredScreenPosition).field_0x4);
      pTVar3 = (TOptional<float> *)(local_38 + 4);
    }
    else {
      fVar5 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint
                        (*(float *)&this->ScreenPosition,*(float *)&(this->ScreenPosition).field_0x4
                        );
      pTVar3 = (TOptional<float> *)local_38;
    }
    if (pTVar3 != in_R9) {
      in_R9->TypedValue = fVar5;
      in_R9->bIsSet = true;
    }
  }
  pFVar1 = (this->NativeWindow).Object;
  local_res18._0_4_ = param_2.TypedValue;
  local_res18._4_4_ = param_2._4_4_;
  if (pFVar1 == (FGenericWindow *)0x0) {
LAB_1425e5681:
    pfVar4 = TOptional<float>::GetValue(in_R9);
    fVar5 = (local_30[0].Right + local_30[0].Left) * *pfVar4;
    pfVar4 = TOptional<float>::GetValue(in_R9);
    local_30[0].Top = (local_30[0].Top + local_30[0].Bottom) * *pfVar4;
  }
  else {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x70))();
    if (cVar2 == '\0') goto LAB_1425e5681;
    fVar5 = local_30[0].Right + local_30[0].Left;
    local_30[0].Top = local_30[0].Top + local_30[0].Bottom;
  }
  local_res18._0_4_ = (float)local_res18 + fVar5;
  local_res18._4_4_ = local_res18._4_4_ + local_30[0].Top;
  if (this->bCreateTitleBar) {
    pfVar4 = TOptional<float>::GetValue(in_R9);
    local_res18._4_4_ = local_res18._4_4_ + *pfVar4 * __real_42080000;
  }
LAB_1425e56fd:
  *(TOptional<float> *)param_1 = local_res18;
  return (FDeprecateSlateVector2D)param_1;
}

// GetWindowVisibility @ 1425e5720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall SWindow::GetWindowVisibility(SWindow *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EVisibility EVar4;
  FSlateApplicationBase *pFVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  uchar *in_RDX;
  bool bVar7;
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget_const_,1> local_28;
  
  bVar7 = false;
  bVar2 = bVar7;
  if ((this->bAcceptsInput) && (bVar2 = false, this->Type != CursorDecorator)) {
    if (this->Type == ToolTip) {
      pFVar5 = FSlateApplicationBase::Get();
      pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x118);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
      local_48 = pTVar6->Object;
      local_40 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      bVar7 = true;
      cVar3 = (*pcVar1)(pFVar5,&local_48);
      bVar2 = bVar7;
      if (cVar3 != '\0') goto LAB_1425e57c8;
    }
    bVar2 = true;
  }
  else {
LAB_1425e57c8:
    bVar7 = bVar2;
    bVar2 = false;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  bVar7 = false;
  if (!bVar2) {
    pFVar5 = FSlateApplicationBase::Get();
    bVar7 = true;
    pcVar1 = *(code **)(*(longlong *)pFVar5 + 0x118);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    local_38 = pTVar6->Object;
    local_30 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    cVar3 = (*pcVar1)(pFVar5,&local_38);
    EVar4 = EVisibility::HitTestInvisible;
    if (cVar3 == '\0') goto LAB_1425e5848;
  }
  EVar4.Value.Value = EVisibility::Visible.Value.Value;
LAB_1425e5848:
  *in_RDX = (uchar)EVar4.Value.Value;
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return (EVisibility)SUB81(in_RDX,0);
}

// HACK_ForceToFront @ 1425e58a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::HACK_ForceToFront(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e58af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))();
    return;
  }
  return;
}

// HasActiveChildren @ 1425e5c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWindow::HasActiveChildren(SWindow *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FSlateApplicationBase *pFVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  uVar9 = 0;
  if (0 < (this->ChildWindows).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->ChildWindows).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)((this->ChildWindows).AllocatorInstance.Data + lVar10);
      pFVar7 = FSlateApplicationBase::Get();
      plVar8 = (longlong *)(**(code **)(*(longlong *)pFVar7 + 0x30))(pFVar7,local_28);
      lVar2 = *plVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      if (lVar2 == lVar1) {
        return true;
      }
      uVar6 = 0;
      if ((int)uVar9 < (this->ChildWindows).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = HasActiveChildren(*(SWindow **)((this->ChildWindows).AllocatorInstance.Data + lVar10))
      ;
      if (bVar4) {
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->ChildWindows).ArrayNum);
  }
  return false;
}

// HasActiveParent @ 1425e5d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWindow::HasActiveParent(SWindow *this)

{
  SWindow *this_00;
  SWindow *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateApplicationBase *pFVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar6 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425e5da5;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = (this->ParentWindowPtr).Object;
    if (this_00 != (SWindow *)0x0) {
      pFVar4 = FSlateApplicationBase::Get();
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,local_18);
      pSVar1 = (SWindow *)*puVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      if (pSVar1 == this_00) {
        bVar7 = true;
      }
      else {
        bVar7 = HasActiveParent(this_00);
      }
      goto LAB_1425e5da7;
    }
  }
LAB_1425e5da5:
  bVar7 = false;
LAB_1425e5da7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar7;
}

// HasCloseBox @ 1425e5fe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasCloseBox(SWindow *this)

{
  return this->bHasCloseButton;
}

// HasFullWindowOverlayContent @ 1425e6090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasFullWindowOverlayContent(SWindow *this)

{
  return (this->FullWindowOverlayWidget).Object != (SWidget *)0x0;
}

// HasMaximizeBox @ 1425e6100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasMaximizeBox(SWindow *this)

{
  return this->bHasMaximizeButton;
}

// HasMinimizeBox @ 1425e6120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasMinimizeBox(SWindow *this)

{
  return this->bHasMinimizeButton;
}

// HasOverlay @ 1425e62c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasOverlay(SWindow *this)

{
  return (this->WindowOverlay).Object != (SOverlay *)0x0;
}

// HasSizingFrame @ 1425e6420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::HasSizingFrame(SWindow *this)

{
  return this->bHasSizingFrame;
}

// HideWindow @ 1425e67c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::HideWindow(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e67cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x58))();
    return;
  }
  return;
}

// InitialMaximize @ 1425e6d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::InitialMaximize(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if ((pFVar1 != (FGenericWindow *)0x0) && (this->bInitiallyMaximized)) {
                    /* WARNING: Could not recover jumptable at 0x0001425e6d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x40))();
    return;
  }
  return;
}

// InitialMinimize @ 1425e6da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::InitialMinimize(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if ((pFVar1 != (FGenericWindow *)0x0) && (this->bInitiallyMinimized)) {
                    /* WARNING: Could not recover jumptable at 0x0001425e6dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// IsActive @ 1425e8fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWindow::IsActive(SWindow *this)

{
  SWindow *pSVar1;
  FSlateApplicationBase *pFVar2;
  longlong *plVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar2 = FSlateApplicationBase::Get();
  plVar3 = (longlong *)(**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2,local_18);
  pSVar1 = (SWindow *)*plVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pSVar1 == this;
}

// IsAutosized @ 1425e9060

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsAutosized(SWindow *this)

{
  return this->SizingRule == Autosized;
}

// IsDescendantOf @ 1425e9340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsDescendantOf(SWindow *this,TSharedPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  SWindow *pSVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWindow *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  
  pTVar10 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425e9383;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
    pSVar4 = (this->ParentWindowPtr).Object;
    while (pSVar4 != (SWindow *)0x0) {
      if (pSVar4 == param_1->Object) {
        bVar12 = true;
        goto LAB_1425e9385;
      }
      if ((pSVar4 == (SWindow *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pSVar9 = (SWindow *)0x0;
      pTVar7 = (pSVar4->ParentWindowPtr).WeakReferenceCount.ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar7->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425e9414;
          }
          LOCK();
          aVar6 = pTVar7->SharedReferenceCount;
          bVar12 = aVar2 == aVar6;
          if (bVar12) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar6;
        } while (!bVar12);
        pSVar9 = (pSVar4->ParentWindowPtr).Object;
      }
LAB_1425e9414:
      pTVar8 = pTVar7;
      pTVar11 = pTVar10;
      if (pTVar7 != pTVar10) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        pTVar11 = pTVar7;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar10->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar10->_padding_)(pTVar10);
            LOCK();
            paVar1 = &pTVar10->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
              pTVar8 = (TReferenceControllerBase<1> *)0x0;
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pTVar10 = pTVar11;
      pSVar4 = pSVar9;
    }
  }
LAB_1425e9383:
  bVar12 = false;
LAB_1425e9385:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar12;
}

// IsMorphing @ 1425e97c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsMorphing(SWindow *this)

{
  bool bVar1;
  
  if ((this->Morpher).bIsActive) {
    bVar1 = FCurveSequence::IsPlaying(&(this->Morpher).Sequence);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsMorphingSize @ 1425e9800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsMorphingSize(SWindow *this)

{
  bool bVar1;
  
  if ((this->Morpher).bIsActive) {
    bVar1 = FCurveSequence::IsPlaying(&(this->Morpher).Sequence);
    if ((bVar1) && ((this->Morpher).bIsAnimatingWindowSize)) {
      return true;
    }
  }
  return false;
}

// IsRegularWindow @ 1425e99d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsRegularWindow(SWindow *this)

{
  if (((!this->bIsPopupWindow) && (this->Type != ToolTip)) && (this->Type != CursorDecorator)) {
    return true;
  }
  return false;
}

// IsScreenspaceMouseWithin @ 1425e9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsScreenspaceMouseWithin(SWindow *this,FDeprecateVector2DParameter param_1)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  float local_res10;
  float fStackX_14;
  
  fStackX_14 = param_1._4_4_;
  fStackX_14 = fStackX_14 - *(float *)&(this->ScreenPosition).field_0x4;
  local_res10 = param_1._0_4_;
  local_res10 = local_res10 - *(float *)&this->ScreenPosition;
  iVar6 = _finite((double)local_res10);
  if (iVar6 != 0) {
    iVar6 = _finite((double)fStackX_14);
    if (iVar6 != 0) {
      if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar1 = (this->NativeWindow).Object;
      cVar5 = (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1,(int)local_res10,(int)fStackX_14);
      if (cVar5 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsTopmostWindow @ 1425e9b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsTopmostWindow(SWindow *this)

{
  return this->bIsTopmostWindow;
}

// IsUserSized @ 1425e9ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsUserSized(SWindow *this)

{
  return this->SizingRule == UserSized;
}

// IsVisible @ 1425e9c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsVisible(SWindow *this)

{
  FGenericWindow *pFVar1;
  char cVar2;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x80))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsWindowMaximized @ 1425e9c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsWindowMaximized(SWindow *this)

{
  FGenericWindow *pFVar1;
  undefined1 uVar2;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e9c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x70))();
    return (bool)uVar2;
  }
  return false;
}

// IsWindowMinimized @ 1425e9c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::IsWindowMinimized(SWindow *this)

{
  FGenericWindow *pFVar1;
  undefined1 uVar2;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e9c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x78))();
    return (bool)uVar2;
  }
  return false;
}

// MakeCursorDecorator @ 1425ea730

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
SWindow::MakeCursorDecorator(TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  FArguments *pFVar1;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_328;
  FArguments local_310;
  
  pFVar1 = FArguments::FArguments(&local_310);
  pFVar1->_Type = CursorDecorator;
  pFVar1->_IsPopupWindow = true;
  pFVar1->_IsTopmostWindow = true;
  pFVar1->_SizingRule = Autosized;
  (pFVar1->_SupportsTransparency).Value = PerWindow;
  pFVar1->_FocusWhenFirstShown = false;
  pFVar1->_ActivationPolicy = Never;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_328,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x1d5,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_328,__return_storage_ptr__,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328._Widget.SharedReferenceCount.ReferenceController);
  FArguments::~FArguments(&local_310);
  __return_storage_ptr__->Object->Opacity = 1.0;
  return __return_storage_ptr__;
}

// MakeNotificationWindow @ 1425ea860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
SWindow::MakeNotificationWindow(TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FArguments *pFVar2;
  ISlateStyle *pIVar3;
  FWindowStyle *pFVar4;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FName local_res20;
  FMemScope local_338;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_330;
  FArguments local_318;
  
  pFVar2 = FArguments::FArguments(&local_318);
  ::FName::FName(&local_res18,"NotificationWindow");
  pIVar3 = FAppStyle::Get();
  pFVar4 = (FWindowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FWindowStyle::TypeName,local_res18,0,1);
  if (pFVar4 == (FWindowStyle *)0x0) {
    pFVar4 = FWindowStyle::GetDefault();
  }
  pFVar2->_Style = pFVar4;
  pFVar2->_Type = Notification;
  pFVar2->_SupportsMaximize = false;
  pFVar2->_SupportsMinimize = false;
  pFVar2->_SizingRule = Autosized;
  pFVar2->_IsPopupWindow = true;
  pFVar2->_CreateTitleBar = false;
  pFVar2->_SupportsTransparency = PerWindow;
  pFVar2->_InitialOpacity = 0.0;
  pFVar2->_FocusWhenFirstShown = false;
  pFVar2->_ActivationPolicy = Never;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_338,&local_res20,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_330,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x1a7,local_res8);
  FMemScope::~FMemScope(&local_338);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_330,__return_storage_ptr__,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330._Widget.SharedReferenceCount.ReferenceController);
  FArguments::~FArguments(&local_318);
  __return_storage_ptr__->Object->bSizeWillChangeOften = true;
  __return_storage_ptr__->Object->ExpectedMaxWidth = 0x400;
  __return_storage_ptr__->Object->ExpectedMaxHeight = 0x100;
  return __return_storage_ptr__;
}

// MakeStyledCursorDecorator @ 1425ea9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
SWindow::MakeStyledCursorDecorator
          (TSharedRef<SWindow,1> *__return_storage_ptr__,FWindowStyle *param_1)

{
  FArguments *pFVar1;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_328;
  FArguments local_310;
  
  pFVar1 = FArguments::FArguments(&local_310);
  pFVar1->_Style = param_1;
  pFVar1->_Type = CursorDecorator;
  pFVar1->_IsPopupWindow = true;
  pFVar1->_IsTopmostWindow = true;
  pFVar1->_SizingRule = Autosized;
  (pFVar1->_SupportsTransparency).Value = PerWindow;
  pFVar1->_FocusWhenFirstShown = false;
  pFVar1->_ActivationPolicy = Never;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_328,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x1e4,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_328,__return_storage_ptr__,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328._Widget.SharedReferenceCount.ReferenceController);
  FArguments::~FArguments(&local_310);
  __return_storage_ptr__->Object->Opacity = 1.0;
  return __return_storage_ptr__;
}

// MakeToolTipWindow @ 1425eab20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
SWindow::MakeToolTipWindow(TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FArguments *pFVar2;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_328;
  FArguments local_310;
  
  pFVar2 = FArguments::FArguments(&local_310);
  pFVar2->_Type = ToolTip;
  pFVar2->_IsPopupWindow = true;
  pFVar2->_IsTopmostWindow = true;
  pFVar2->_AdjustInitialSizeAndPositionForDPIScale = false;
  pFVar2->_SizingRule = Autosized;
  (pFVar2->_SupportsTransparency).Value = PerWindow;
  pFVar2->_FocusWhenFirstShown = false;
  pFVar2->_ActivationPolicy = Never;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_328,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
             ,0x1bf,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_328,__return_storage_ptr__,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328._Widget.SharedReferenceCount.ReferenceController);
  FArguments::~FArguments(&local_310);
  __return_storage_ptr__->Object->Opacity = 0.0;
  __return_storage_ptr__->Object->bSizeWillChangeOften = true;
  __return_storage_ptr__->Object->ExpectedMaxWidth = 0x200;
  __return_storage_ptr__->Object->ExpectedMaxHeight = 0x100;
  return __return_storage_ptr__;
}

// MakeWindowTitleBar @ 1425eac70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWindow::MakeWindowTitleBar
          (SWindow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWindow,1> *param_1,TSharedPtr<SWidget,1> *param_2,EHorizontalAlignment param_3
          )

{
  ITextData *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TRefCountPtr<ITextData> TVar3;
  FSlateApplicationBase *pFVar4;
  FDestructionSentinel local_78;
  SWindow *local_60;
  TReferenceControllerBase<1> *local_58;
  SWidget *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  EHorizontalAlignment local_40;
  FText local_38;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_60 = param_1->Object;
  local_58 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = 0;
  local_50 = (SWidget *)0x0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&local_38);
  pTVar2 = pTStack_48;
  local_50 = param_2->Object;
  local_10 = 0;
  pTStack_48 = (param_2->SharedReferenceCount).ReferenceController;
  local_28 = 0;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_48->SharedReferenceCount = (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TVar3.Reference = local_38.TextData.Reference;
  pIVar1 = (this->CloseButtonToolTipText).Value.TextData.Reference;
  local_40 = param_3;
  if (local_38.TextData.Reference != pIVar1) {
    local_38.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_3);
    }
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
    }
  }
  local_38.Flags = (this->CloseButtonToolTipText).Value.Flags;
  local_28 = (this->CloseButtonToolTipText).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
             &(this->CloseButtonToolTipText).Getter);
  pFVar4 = FSlateApplicationBase::Get();
  (**(code **)(*(longlong *)pFVar4 + 0x138))
            (pFVar4,__return_storage_ptr__,&local_60,&this->TitleBar);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_78);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  return __return_storage_ptr__;
}

// Maximize @ 1425eaee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::Maximize(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425eaeef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x40))();
    return;
  }
  return;
}

// Minimize @ 1425eaf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::Minimize(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425eaf0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// MorphToPosition @ 1425eaf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::MorphToPosition
          (SWindow *this,FCurveSequence *param_1,float param_2,FDeprecateVector2DParameter *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  
  (this->Morpher).bIsAnimatingWindowSize = false;
  FCurveSequence::operator=(&(this->Morpher).Sequence,param_1);
  (this->Morpher).TargetOpacity = param_2;
  fVar2 = *(float *)param_3;
  (this->Morpher).TargetMorphShape.Right = fVar2;
  (this->Morpher).TargetMorphShape.Left = fVar2;
  fVar2 = *(float *)&param_3->field_0x4;
  (this->Morpher).TargetMorphShape.Bottom = fVar2;
  (this->Morpher).TargetMorphShape.Top = fVar2;
  StartMorph(this);
  return;
}

// MorphToShape @ 1425eafa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::MorphToShape(SWindow *this,FCurveSequence *param_1,float param_2,FSlateRect *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->Morpher).bIsAnimatingWindowSize = true;
  FCurveSequence::operator=(&(this->Morpher).Sequence,param_1);
  (this->Morpher).TargetOpacity = param_2;
  fVar2 = param_3->Top;
  fVar3 = param_3->Right;
  fVar4 = param_3->Bottom;
  (this->Morpher).TargetMorphShape.Left = param_3->Left;
  (this->Morpher).TargetMorphShape.Top = fVar2;
  (this->Morpher).TargetMorphShape.Right = fVar3;
  (this->Morpher).TargetMorphShape.Bottom = fVar4;
  StartMorph(this);
  return;
}

// MoveWindowTo @ 1425eb4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::MoveWindowTo(SWindow *this,FDeprecateVector2DParameter param_1)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float local_res10;
  float fStackX_14;
  
  local_res10 = param_1._0_4_;
  fStackX_14 = param_1._4_4_;
  if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
    *(float *)&this->InitialDesiredScreenPosition = local_res10;
    *(float *)&(this->InitialDesiredScreenPosition).field_0x4 = fStackX_14;
    return;
  }
  auVar5 = roundps(in_XMM0,ZEXT416((uint)local_res10),3);
  auVar6 = roundps(in_XMM1,ZEXT416((uint)fStackX_14),3);
  FVar3._4_4_ = auVar6._0_4_;
  FVar3._0_4_ = auVar5._0_4_;
  SetCachedScreenPosition(this,FVar3);
  if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->NativeWindow).Object;
                    /* WARNING: Could not recover jumptable at 0x0001425eb595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,(int)local_res10,(int)fStackX_14);
  return;
}

// NotifyWindowBeingDestroyed @ 1425eb5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::NotifyWindowBeingDestroyed(SWindow *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FText *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  SWidget *local_98;
  TReferenceControllerBase<1> *local_90;
  SWidget *local_88;
  TReferenceControllerBase<1> *local_80;
  FText local_78;
  FDestructionSentinel local_68;
  TSharedRef<SWidget,1> local_50;
  TSharedRef<SWidget,1> local_40;
  FReadAccessScope local_30;
  
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
  local_98 = pTVar9->Object;
  local_90 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWindowClosed,
             &local_30);
  if ((*(int *)&(this->OnWindowClosed).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnWindowClosed).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40);
  local_88 = pTVar9->Object;
  local_80 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->WindowClosedEvent,
             (FWriteAccessScope *)&local_68);
  puVar1 = &(this->WindowClosedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->WindowClosedEvent).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&(this->WindowClosedEvent).field_0x10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&(this->WindowClosedEvent).field_0x8;
      if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
          (plVar2 = *(longlong **)(lVar12 + lVar3), plVar2 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar2 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->WindowClosedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->WindowClosedEvent,false)
    ;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (((!this->bIsPopupWindow) && (this->Type != ToolTip)) &&
     ((this->Type != CursorDecorator && (4 < (byte)LogSlate._0_1_)))) {
    pFVar10 = TAttribute<FText>::Get(&this->Title);
    local_78.TextData.Reference = (pFVar10->TextData).Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    local_78.Flags = pFVar10->Flags;
    FText::ToString(&local_78);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnCursorQuery @ 1425ecdc0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SWindow::OnCursorQuery
          (SWindow *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  Type TVar1;
  
  if ((!this->bHasOSWindowBorder) && (this->bHasSizingFrame)) {
    TVar1 = this->WindowZone;
    if ((TVar1 == TopLeftBorder) || (TVar1 == BottomRightBorder)) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeSouthEast;
      return __return_storage_ptr__;
    }
    if ((TVar1 - TopRightBorder & 0xfffffffb) == 0) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeSouthWest;
      return __return_storage_ptr__;
    }
    if ((TVar1 == TopBorder) || (TVar1 == BottomBorder)) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeUpDown;
      return __return_storage_ptr__;
    }
    if ((TVar1 - LeftBorder & 0xfffffffd) == 0) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = ResizeLeftRight;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnFocusReceived @ 1425edc80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindow::OnFocusReceived
          (SWindow *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnGlobalInvalidationToggled @ 1425edcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::OnGlobalInvalidationToggled(SWindow *this,bool param_1)

{
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    return;
  }
  return;
}

// OnIsActiveChanged @ 1425edd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall SWindow::OnIsActiveChanged(SWindow *this,FWindowActivateEvent *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<SWidget,1> *this_00;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  EVisibility EVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  atomic<int> aVar13;
  FSlateApplicationBase *pFVar14;
  TSharedPtr<SWidget,1> *pTVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ForElementType<FArrangedWidget> FVar17;
  SWidget *pSVar18;
  SWidget *pSVar19;
  SWidget *pSVar20;
  ForAnyElementType FVar21;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  SWidget *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_3f8;
  undefined1 local_3e8 [24];
  FSlateInvalidationRoot *local_3d0;
  TSharedRef<SWidget_const_,1> local_3c8;
  TSharedRef<SWidget_const_,1> local_3b8;
  undefined1 local_3a8 [8];
  FWeakReferencer<1> local_3a0;
  undefined1 local_398 [8];
  TReferenceControllerBase<1> *local_390;
  undefined1 local_388 [8];
  TVector2<float>_u_0 local_380;
  TSharedRef<SWidget,1> local_378;
  TSharedRef<SWidget,1> local_368;
  TSharedRef<SWidget,1> local_358;
  FReadAccessScope local_348;
  FReadAccessScope local_330;
  TWeakPtr<SWidget,1> local_318;
  undefined8 local_308 [2];
  FWidgetPath local_2f8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_448;
  pSVar18 = (SWidget *)0x0;
  bVar8 = false;
  local_3f8.AllocatorInstance.Data = local_3f8.AllocatorInstance.Data & 0xffffffff00000000;
  if (param_1->ActivationType != EA_Deactivate) {
    if (param_1->ActivationType != EA_Activate) goto LAB_1425ee422;
    local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f8.ArrayNum = 0;
    local_3f8.ArrayMax = 0;
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_378);
    local_3e8._0_8_ = pTVar16->Object;
    local_3e8._8_8_ = (pTVar16->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_3e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_3e8._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_3e8._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.SharedReferenceCount.ReferenceController);
    if (local_3f8.AllocatorInstance.Data <= (SWidget *)local_3e8) {
      if ((FScriptContainerElement *)local_3e8 <
          local_3f8.AllocatorInstance.Data + (longlong)local_3f8.ArrayMax * 0x10) {
        local_410 = (longlong)local_3f8.ArrayNum;
        local_408 = 0x10;
        local_428 = local_3e8;
        local_420 = (SWidget *)local_3f8.AllocatorInstance.Data;
        local_418 = (longlong)local_3f8.ArrayMax;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
    }
    iVar12 = local_3f8.ArrayNum;
    if (local_3f8.ArrayNum == local_3f8.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_3f8.AllocatorInstance,&local_3f8.ArrayMax);
    }
    local_3f8.ArrayNum = iVar12 + 1;
    *(undefined8 *)&local_3f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
         local_3e8._0_8_;
    *(undefined8 *)(local_3f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
         local_3e8._8_8_;
    if ((TReferenceControllerBase<1> *)local_3e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_3e8._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_3e8._8_8_ + 8) + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3e8._8_8_);
    pSVar20 = (SWidget *)(this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
    pSVar19 = pSVar20;
    if (pSVar20 == (SWidget *)0x0) {
LAB_1425ee145:
      cVar10 = (**(code **)(this->_padding_ + 0x198))(this);
      if (cVar10 != '\0') {
        FWidgetPath::FWidgetPath(&local_198);
        if ((((this->WidgetFocusedOnDeactivate).Object == (SWidget *)0x0) ||
            (pTVar4 = (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController,
            pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
           ((int)pTVar4->SharedReferenceCount < 1)) {
          pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_368);
          bVar11 = false;
          bVar8 = true;
        }
        else {
          local_3d0 = (FSlateInvalidationRoot *)
                      (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController;
          local_3e8._16_8_ = (SWidget *)0x0;
          if (local_3d0 != (FSlateInvalidationRoot *)0x0) {
            aVar2 = *(atomic<int> *)&local_3d0->_padding_;
            do {
              if (aVar2 == (atomic<int>)0x0) {
                local_3d0 = (FSlateInvalidationRoot *)0x0;
                goto LAB_1425ee1c7;
              }
              LOCK();
              aVar13 = *(atomic<int> *)&local_3d0->_padding_;
              bVar11 = aVar2 == aVar13;
              if (bVar11) {
                *(atomic<int> *)&local_3d0->_padding_ = (atomic<int>)((int)aVar2 + 1);
                aVar13 = aVar2;
              }
              UNLOCK();
              aVar2 = aVar13;
            } while (!bVar11);
            local_3e8._16_8_ = (this->WidgetFocusedOnDeactivate).Object;
          }
LAB_1425ee1c7:
          pTVar16 = TSharedPtr<SWidget,1>::ToSharedRef
                              ((TSharedPtr<SWidget,1> *)(local_3e8 + 0x10),&local_358);
          bVar11 = true;
          pSVar18 = (SWidget *)&DAT_00000010;
        }
        pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
        pSVar20 = pTVar16->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (bVar8) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_368.SharedReferenceCount.ReferenceController);
        }
        if ((int)pSVar18 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_358.SharedReferenceCount.ReferenceController);
        }
        if (bVar11) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_3d0);
        }
        EVar7.Value.Value = EVisibility::Visible.Value.Value;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3b8.Object = pSVar20;
        local_3b8.SharedReferenceCount.ReferenceController = pTVar4;
        bVar8 = FSlateWindowHelper::FindPathToWidget(&local_3f8,&local_3b8,&local_198,EVar7);
        if (bVar8) {
          if (this->FocusUserIndex == -1) {
            pFVar14 = FSlateApplicationBase::Get();
            (**(code **)(*(longlong *)pFVar14 + 0x168))(pFVar14,&local_198,5);
          }
          else {
            pFVar14 = FSlateApplicationBase::Get();
            (**(code **)(*(longlong *)pFVar14 + 0x158))(pFVar14,this->FocusUserIndex,&local_198,5);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (local_198.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar17 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
        if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar17 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar17,local_198.Widgets.Array.ArrayNum);
        goto LAB_1425ee3f3;
      }
    }
    else {
      aVar2 = *(atomic<int> *)&pSVar20->_padding_;
      do {
        pSVar19 = pSVar18;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1425ee145;
        LOCK();
        aVar13 = *(atomic<int> *)&pSVar20->_padding_;
        bVar11 = aVar2 == aVar13;
        if (bVar11) {
          *(atomic<int> *)&pSVar20->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar13;
      } while (!bVar11);
      pSVar5 = (this->WidgetToFocusOnActivate).Object;
      pSVar19 = pSVar20;
      if (pSVar5 == (SWidget *)0x0) goto LAB_1425ee145;
      FWidgetPath::FWidgetPath(&local_2f8);
      EVar7 = EVisibility::Visible;
      LOCK();
      *(atomic<int> *)&pSVar20->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar20->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
      UNLOCK();
      local_3c8.Object = pSVar5;
      local_3c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar20;
      bVar8 = FSlateWindowHelper::FindPathToWidget(&local_3f8,&local_3c8,&local_2f8,EVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar20);
      if (bVar8) {
        if (this->FocusUserIndex == -1) {
          pFVar14 = FSlateApplicationBase::Get();
          (**(code **)(*(longlong *)pFVar14 + 0x160))(pFVar14,&local_2f8,5);
        }
        else {
          pFVar14 = FSlateApplicationBase::Get();
          (**(code **)(*(longlong *)pFVar14 + 0x150))(pFVar14,this->FocusUserIndex,&local_2f8,5);
        }
      }
      if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar17 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
      if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar17 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_2f8.Widgets.Array.ArrayNum)
      ;
      local_198.Widgets.Array.AllocatorInstance.SecondaryData =
           local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
LAB_1425ee3f3:
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_3f8.AllocatorInstance.Data,local_3f8.ArrayNum);
    if ((SWidget *)local_3f8.AllocatorInstance.Data != (SWidget *)0x0) {
      FMemory::Free(local_3f8.AllocatorInstance.Data);
    }
LAB_1425ee422:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWindowActivated,
               &local_330);
    if ((*(int *)&(this->OnWindowActivated).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnWindowActivated).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_330);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->WindowActivatedEvent);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWindowDeactivated,
             &local_348);
  if ((*(int *)&(this->OnWindowDeactivated).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnWindowDeactivated).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_348);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->WindowDeactivatedEvent);
  this_00 = &this->WidgetFocusedOnDeactivate;
  if (this_00 != &local_318) {
    pTVar4 = (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController;
    this_00->Object = (SWidget *)0x0;
    (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  if (((this->NativeWindow).Object == (FGenericWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar12 = (**(code **)(((this->NativeWindow).Object)->_padding_ + 0x68))();
  FVar21.Data = local_3f8.AllocatorInstance.Data;
  if ((((iVar12 != 0) && ((this->WidgetToFocusOnActivate).Object != (SWidget *)0x0)) &&
      (pTVar4 = (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    FVar21.Data = (FScriptContainerElement *)
                  (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
    pSVar20 = pSVar18;
    pSVar19 = (SWidget *)FVar21.Data;
    if ((SWidget *)FVar21.Data == (SWidget *)0x0) {
LAB_1425ede62:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      FVar21.Data = (FScriptContainerElement *)pSVar19;
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else {
      aVar2 = *(atomic<int> *)&((SWidget *)FVar21.Data)->_padding_;
      do {
        pSVar19 = pSVar18;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1425ede62;
        LOCK();
        aVar13 = *(atomic<int> *)&((SWidget *)FVar21.Data)->_padding_;
        bVar8 = aVar2 == aVar13;
        if (bVar8) {
          *(atomic<int> *)&((SWidget *)FVar21.Data)->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar13;
      } while (!bVar8);
      pSVar20 = (this->WidgetToFocusOnActivate).Object;
      pSVar19 = (SWidget *)FVar21.Data;
      if (pSVar20 == (SWidget *)0x0) goto LAB_1425ede62;
    }
    pSVar18 = (SWidget *)&DAT_00000001;
    bVar8 = SWidget::HasMouseCapture(pSVar20);
    if (bVar8) {
      pFVar14 = FSlateApplicationBase::Get();
      cVar10 = (**(code **)(*(longlong *)pFVar14 + 0x100))(pFVar14);
      if (cVar10 == '\0') {
        bVar8 = true;
        goto LAB_1425eded0;
      }
    }
  }
  bVar8 = false;
LAB_1425eded0:
  if (pSVar18 != (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar21.Data);
  }
  if (bVar8) {
    if (&this->WidgetToFocusOnActivate != (TWeakPtr<SWidget,1> *)local_308) {
      pTVar4 = (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController;
      (this->WidgetToFocusOnActivate).Object = (SWidget *)0x0;
      (this->WidgetToFocusOnActivate).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
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
    }
  }
  else {
    cVar10 = (**(code **)(this->_padding_ + 0x198))(this);
    if (cVar10 != '\0') {
      bVar8 = this->FocusUserIndex != -1;
      if (bVar8) {
        pFVar14 = FSlateApplicationBase::Get();
        pTVar15 = (TSharedPtr<SWidget,1> *)
                  (**(code **)(*(longlong *)pFVar14 + 0x170))
                            (pFVar14,local_3a8,this->FocusUserIndex);
      }
      else {
        pFVar14 = FSlateApplicationBase::Get();
        pTVar15 = (TSharedPtr<SWidget,1> *)
                  (**(code **)(*(longlong *)pFVar14 + 0x98))(pFVar14,local_398);
      }
      TWeakPtr<SWidget,1>::operator=<SWidget>(this_00,pTVar15);
      if (bVar8) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a0.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_390);
      }
      if (((this_00->Object == (SWidget *)0x0) ||
          (pTVar4 = (this->WidgetFocusedOnDeactivate).WeakReferenceCount.ReferenceController,
          pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
      {
        pFVar14 = FSlateApplicationBase::Get();
        pTVar15 = (TSharedPtr<SWidget,1> *)
                  (**(code **)(*(longlong *)pFVar14 + 0x170))(pFVar14,local_388,0);
        TWeakPtr<SWidget,1>::operator=<SWidget>(this_00,pTVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_380);
      }
    }
  }
  return true;
}

// OnMouseButtonDown @ 1425eea80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindow::OnMouseButtonDown
          (SWindow *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  SWidget *pSVar4;
  bool bVar5;
  FWeakReferencer<1> FVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  bVar9 = false;
  if (this->bDragAnywhere == false) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (param_2->EffectingButton).KeyName;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    if (FVar3 == EKeys::LeftMouseButton.KeyName) {
      bVar5 = true;
      goto LAB_1425eeadc;
    }
  }
  bVar5 = false;
LAB_1425eeadc:
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar5) {
    this->MoveResizeZone = this->WindowZone;
    FReply::FReply(&local_c8,true);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar7->Object;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.MouseCaptor.Object = pSVar4;
    FVar6.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    if (pTVar8 != local_c8.MouseCaptor.WeakReferenceCount.ReferenceController) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar6.ReferenceController = pTVar8;
      if (local_c8.MouseCaptor.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_c8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_c8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8)
          )(local_c8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = FVar6.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1425eed30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindow::OnMouseButtonUp
          (SWindow *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  FWeakReferencer<1> FVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uStackX_c;
  FReply local_c8;
  
  bVar7 = false;
  if (this->bDragAnywhere == false) {
LAB_1425eed90:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    bVar5 = SWidget::HasMouseCapture((SWidget *)this);
    if (!bVar5) goto LAB_1425eed90;
    pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (param_2->EffectingButton).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (FVar3 == EKeys::LeftMouseButton.KeyName) {
      bVar5 = true;
      goto LAB_1425eed9b;
    }
  }
  bVar5 = false;
LAB_1425eed9b:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar5) {
    this->MoveResizeZone = NotInWindow;
    FReply::FReply(&local_c8,true);
    FVar4.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 1425ef260

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindow::OnMouseMove
          (SWindow *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar1;
  FDeprecateVector2DParameter FVar2;
  FName FVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  if (this->bDragAnywhere != false) {
    bVar5 = SWidget::HasMouseCapture((SWidget *)this);
    FVar4 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
    FVar3 = EKeys::LeftMouseButton.KeyName;
    if (bVar5) {
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
      pTVar1 = param_2->PressedButtons;
      uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
        FVar7 = (pTVar1->Hash).SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&pTVar1->Hash;
        }
        iVar8 = *(int *)((longlong)FVar7 +
                        (ulonglong)(pTVar1->HashSize - 1U & FVar3.Number + uVar6) * 4);
        if (iVar8 != -1) {
          do {
            if (*(FName *)((longlong)iVar8 * 0x20 + *(longlong *)&pTVar1->Elements) == FVar3) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar4.ReferenceController);
              if ((iVar8 == -1) || (this->MoveResizeZone == TitleBar)) goto LAB_1425ef30f;
              FVar2._4_4_ = *(float *)&(param_2->CursorDelta).field_0x4 +
                            *(float *)&(this->ScreenPosition).field_0x4;
              FVar2._0_4_ = *(float *)&param_2->CursorDelta + *(float *)&this->ScreenPosition;
              MoveWindowTo(this,FVar2);
              bVar5 = true;
              goto LAB_1425ef311;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&pTVar1->Elements);
          } while (iVar8 != -1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
  }
LAB_1425ef30f:
  bVar5 = false;
LAB_1425ef311:
  FReply::FReply(__return_storage_ptr__,bVar5);
  return __return_storage_ptr__;
}

// OnPaint @ 1425f05d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SWindow::OnPaint(SWindow *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  return iVar1;
}

// OnVisualizePopup @ 1425f09e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FPopupLayer,1> * __thiscall
SWindow::OnVisualizePopup
          (SWindow *this,TSharedPtr<FPopupLayer,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOverlayPopupLayer *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedPtr<FPopupLayer,1> *pTVar5;
  bool bVar6;
  TRawPtrProxy<FOverlayPopupLayer> local_res8;
  TSharedRef<SWindow,1> local_48;
  TSharedPtr<SOverlay,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  bVar6 = false;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if ((this->WindowOverlay).Object == (SOverlay *)0x0) {
    __return_storage_ptr__->Object = (FPopupLayer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar3 = ::operator_new(0x58);
    if (pFVar3 == (FOverlayPopupLayer *)0x0) {
      pFVar3 = (FOverlayPopupLayer *)0x0;
    }
    else {
      local_38.Object = (this->WindowOverlay).Object;
      local_38.SharedReferenceCount.ReferenceController =
           (this->WindowOverlay).SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
      local_48.Object = (SWindow *)pTVar4->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar3 = FOverlayPopupLayer::FOverlayPopupLayer(pFVar3,&local_48,param_1,&local_38);
      bVar6 = true;
      if ((((pFVar3 != (FOverlayPopupLayer *)0x0) && (pFVar3->_padding_ != 0)) &&
          (pFVar3->_padding_ != 0)) && (0 < *(int *)(pFVar3->_padding_ + 8))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FPopupLayer,1> *)(*pcVar1)();
          return pTVar5;
        }
      }
    }
    local_res8.Object = pFVar3;
    TSharedPtr<FPopupLayer,1>::TSharedPtr<FPopupLayer,1><FOverlayPopupLayer>
              (__return_storage_ptr__,&local_res8);
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// PaintSlowPath @ 1425f3a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SWindow::PaintSlowPath(SWindow *this,FSlateInvalidationContext *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStackY_a8 [32];
  float local_68;
  float fStack_64;
  FSlateRect local_60;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FHittestGrid::Clear((FHittestGrid *)this->_padding_);
  plVar2 = &this->_padding_;
  if (*(float *)plVar2 == 0.0) {
    plVar2 = &this->_padding_;
  }
  local_68 = (float)*plVar2;
  fStack_64 = (float)((ulonglong)*plVar2 >> 0x20);
  local_60.Right = local_68;
  local_60.Bottom = fStack_64;
  local_60.Left = 0.0;
  local_60.Top = 0.0;
  GetWindowGeometryInWindow
            ((SWindow *)&this[-1].Morpher.Sequence.TickerHandle.WeakReferenceCount,&local_50);
  iVar1 = SWidget::Paint((SWidget *)&this[-1].Morpher.Sequence.TickerHandle.WeakReferenceCount,
                         param_1->PaintArgs,&local_50,&local_60,param_1->WindowElementList,0,
                         param_1->WidgetStyle,param_1->bParentEnabled);
  return iVar1;
}

// PaintWindow @ 1425f3af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SWindow::PaintWindow
          (SWindow *this,double param_1,float param_2,FSlateWindowElementList *param_3,
          FWidgetStyle *param_4,bool param_5)

{
  SWidget *this_00;
  atomic<int> *paVar1;
  FDeprecateSlateVector2D *pFVar2;
  atomic<int> aVar3;
  FGenericWindow *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  atomic<int> aVar12;
  uint uVar13;
  FSlateApplicationBase *pFVar14;
  FDeprecateSlateVector2D *pFVar15;
  FGeometry *pFVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  bool bVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  FDeprecateSlateVector2D *pFVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStackY_2f8 [32];
  float local_2c0;
  float fStack_2bc;
  undefined4 local_2b8 [2];
  FSlateInvalidationResult local_2b0;
  uchar local_2a0;
  undefined1 local_29f;
  undefined1 local_298 [8];
  void *pvStack_290;
  undefined8 local_288;
  FSlateInvalidationContext local_278;
  TVector2<float>_u_0 local_238;
  FDeprecateSlateVector2D local_230;
  FDeprecateSlateVector2D local_228 [3];
  SWidget *local_210;
  TReferenceControllerBase<1> *local_208;
  SWidget *local_200;
  TReferenceControllerBase<1> *local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [24];
  FPaintArgs local_1d0;
  TSharedRef<SWidget_const_,1> local_1a0;
  FDestructionSentinel local_190;
  TSharedRef<SWidget_const_,1> local_178;
  TSharedRef<SWidget_const_,1> local_168;
  FGeometry local_158;
  FGeometry local_120;
  FGeometry local_e8;
  FGeometry local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar23 = false;
  local_2b8[0] = 0;
  UE::Slate::FSlateCrashReporterScope::FSlateCrashReporterScope
            ((FSlateCrashReporterScope *)local_2b8,(SWidget *)this,
             UE::Slate::FSlateCrashReporterScope::NAME_Paint);
  FSlateWindowElementList::BeginDeferredGroup(param_3);
  pFVar2 = &this->ViewportSize;
  pFVar21 = &this->Size;
  local_238 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar15 = pFVar21;
  if (*(float *)pFVar2 != 0.0) {
    pFVar15 = pFVar2;
  }
  local_230 = *pFVar15;
  local_228[0] = this->ScreenPosition;
  FHittestGrid::SetHittestArea
            ((this->HittestGrid).Ptr,(FDeprecateVector2DParameter *)local_228,
             (FDeprecateVector2DParameter *)&local_230,
             (FDeprecateVector2DParameter *)&local_238._s_0);
  local_1d0.RootGrid = (this->HittestGrid).Ptr;
  local_1d0.WindowOffset.field0_0x0 = *(TVector2<float>_u_0 *)&this->ScreenPosition;
  local_1d0.bDeferredPainting = '\0';
  local_1d0.bInheritedHittestability = '\x01';
  local_278.WidgetStyle = param_4;
  local_278.bParentEnabled = param_5;
  local_1d0.PaintParentPtr = (SWidget *)0x0;
  local_278.ViewOffset = (FDeprecateSlateVector2D)0x0;
  local_278.WindowElementList = param_3;
  local_1d0.CurrentGrid = local_1d0.RootGrid;
  local_1d0.CurrentTime = param_1;
  local_1d0.DeltaTime = param_2;
  local_278.bAllowFastPathUpdate = (bool)(**(code **)(this->_padding_ + 0x210))(this);
  pFVar14 = FSlateApplicationBase::Get();
  pFVar4 = (this->NativeWindow).Object;
  fVar24 = __real_3f800000;
  if (pFVar4 != (FGenericWindow *)0x0) {
    fVar24 = (float)(**(code **)(pFVar4->_padding_ + 0xf8))(pFVar4);
  }
  local_278.LayoutScaleMultiplier = (float)(**(code **)(*(longlong *)pFVar14 + 0x58))(pFVar14);
  local_278.PaintArgs = &local_1d0;
  local_278.IncomingLayerId = 0;
  local_278.CullingRect.Left = 0.0;
  local_278.CullingRect.Top = 0.0;
  local_278.LayoutScaleMultiplier = local_278.LayoutScaleMultiplier * fVar24;
  pFVar15 = pFVar21;
  if (*(float *)pFVar2 != 0.0) {
    pFVar15 = pFVar2;
  }
  local_2c0 = SUB84(*pFVar15,0);
  fStack_2bc = SUB84(*pFVar15,4);
  local_278.CullingRect.Right = local_2c0;
  local_278.CullingRect.Bottom = fStack_2bc;
  pFVar16 = GetWindowGeometryInWindow(this,&local_e8);
  FGeometry::operator=((FGeometry *)&this->_padding_,pFVar16);
  if (*(float *)pFVar2 != 0.0) {
    pFVar21 = pFVar2;
  }
  local_2c0 = SUB84(*pFVar21,0);
  fStack_2bc = SUB84(*pFVar21,4);
  this->_padding_ = 0;
  *(float *)&this->_padding_ = local_2c0;
  *(float *)((longlong)&this->_padding_ + 4) = fStack_2bc;
  pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1a0);
  pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar17->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (SWidget *)((longlong)&this->_padding_ + 1);
  if (((this_00 < pSVar6) || (pSVar6 + 1 <= this_00)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,99,L"The attribute is not a member of the widget."), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar11 = (*pcVar8)();
    return iVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar20 = pTVar5;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425f3d84:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    bVar18 = false;
    bVar9 = false;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425f3d93;
  }
  else {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425f3d84;
      }
      LOCK();
      aVar12 = pTVar5->SharedReferenceCount;
      bVar9 = aVar3 == aVar12;
      if (bVar9) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar12 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar12;
    } while (!bVar9);
    if (pSVar6 == (SWidget *)0x0) goto LAB_1425f3d84;
    bVar9 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsBound
                      ((FSlateAttributeImpl *)this_00,pSVar6,Member);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_1425f3d93:
    bVar18 = bVar9;
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  if (bVar18 != false) goto LAB_1425f3f89;
  if ((this->bAcceptsInput) && (this->Type != CursorDecorator)) {
    if (this->Type == ToolTip) {
      pFVar14 = FSlateApplicationBase::Get();
      pcVar8 = *(code **)(*(longlong *)pFVar14 + 0x118);
      pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_178);
      local_210 = pTVar17->Object;
      local_208 = (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_208 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_208->SharedReferenceCount = (atomic<int>)((int)local_208->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      bVar23 = true;
      cVar10 = (*pcVar8)(pFVar14,&local_210);
      if (cVar10 != '\0') goto LAB_1425f3e76;
      bVar9 = true;
    }
    else {
      bVar9 = true;
    }
  }
  else {
LAB_1425f3e76:
    bVar9 = false;
  }
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  }
  bVar23 = false;
  if (bVar9) {
LAB_1425f3eec:
    local_2a0 = (uchar)EVisibility::Visible.Value.Value;
  }
  else {
    pFVar14 = FSlateApplicationBase::Get();
    bVar23 = true;
    pcVar8 = *(code **)(*(longlong *)pFVar14 + 0x118);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_168);
    local_200 = pTVar17->Object;
    local_1f8 = (pTVar17->SharedReferenceCount).ReferenceController;
    if (local_1f8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1f8->SharedReferenceCount = (atomic<int>)((int)local_1f8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    cVar10 = (*pcVar8)(pFVar14,&local_200);
    local_2a0 = (uchar)EVisibility::HitTestInvisible;
    if (cVar10 != '\0') goto LAB_1425f3eec;
  }
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f8);
  }
  local_288 = 0;
  local_29f = 1;
  local_298 = (undefined1  [8])0x0;
  pvStack_290 = (void *)0x0;
  local_1f0[1] = true;
  local_1f0[0] = (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)local_2a0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_00,(SWidget *)this,(TAttribute<EVisibility> *)local_1f0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
  if ((void *)local_1e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
  if (pvStack_290 != (void *)0x0) {
    FMemory::Free(pvStack_290);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_298);
LAB_1425f3f89:
  FSlateInvalidationRoot::PaintInvalidationRoot
            ((FSlateInvalidationRoot *)&this->_padding_,&local_2b0,&local_278);
  if (GSlateHitTestGridDebugging != false) {
    GetWindowGeometryInWindow(this,&local_158);
    FHittestGrid::DisplayGrid((this->HittestGrid).Ptr,0x7fffffff,&local_158,param_3,UseFocusBrush);
  }
  if (GSlateNavigationDebugging != false) {
    GetWindowGeometryInWindow(this,&local_120);
    FHittestGrid::DisplayNavigation((this->HittestGrid).Ptr,0x7fffffff,&local_120,param_3);
  }
  FSlateWindowElementList::EndDeferredGroup(param_3);
  if (local_278.bAllowFastPathUpdate != false) {
    FSlateWindowElementList::PushCachedElementData
              (param_3,(FSlateCachedElementData *)this->_padding_);
  }
  if (param_3->bNeedsDeferredResolve != false) {
    local_2b0.MaxLayerIdPainted =
         FSlateWindowElementList::PaintDeferred
                   (param_3,local_2b0.MaxLayerIdPainted,&local_278.CullingRect);
  }
  if (local_278.bAllowFastPathUpdate != false) {
    FSlateWindowElementList::PopCachedElementData(param_3);
  }
  pFVar16 = GetWindowGeometryInWindow(this,&local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FSlateDebugging::PaintDebugElements,(FWriteAccessScope *)&local_190);
  bVar23 = false;
  FSlateDebugging::PaintDebugElements._28_4_ = FSlateDebugging::PaintDebugElements._28_4_ + 1;
  uVar19 = FSlateDebugging::PaintDebugElements._16_4_ - 1;
  if (-1 < (int)uVar19) {
    lVar22 = (longlong)(int)uVar19 << 4;
    bVar23 = false;
    do {
      uVar13 = 0;
      if ((int)uVar19 < (int)FSlateDebugging::PaintDebugElements._16_4_) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return iVar11;
      }
      if (((*(int *)(lVar22 + 8 + FSlateDebugging::PaintDebugElements._8_8_) == 0) ||
          (plVar7 = *(longlong **)(lVar22 + FSlateDebugging::PaintDebugElements._8_8_),
          plVar7 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar7 + 0x68))(plVar7,&local_1d0,pFVar16,param_3), cVar10 == '\0')
         ) {
        bVar23 = true;
      }
      lVar22 = lVar22 + -0x10;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  FSlateDebugging::PaintDebugElements._28_4_ = FSlateDebugging::PaintDebugElements._28_4_ + -1;
  if (bVar23) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::PaintDebugElements,false);
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  iVar11 = local_2b0.MaxLayerIdPainted;
  UE::Slate::FSlateCrashReporterScope::~FSlateCrashReporterScope
            ((FSlateCrashReporterScope *)local_2b8);
  return iVar11;
}

// ProcessWindowInvalidation @ 1425f5440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::ProcessWindowInvalidation(SWindow *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x210))();
  if (cVar1 != '\0') {
    FSlateInvalidationRoot::ProcessInvalidation((FSlateInvalidationRoot *)&this->_padding_);
    return;
  }
  return;
}

// RemoveDescendantWindow @ 1425f8470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::RemoveDescendantWindow(SWindow *this,TSharedRef<SWindow,1> *param_1)

{
  TSharedRef<SWindow,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  pTVar1 = (TSharedRef<SWindow,1> *)(this->ChildWindows).AllocatorInstance.Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->ChildWindows).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar12 = (this->ChildWindows).ArrayNum;
  lVar7 = (longlong)iVar12;
  if (iVar12 != 0) {
    iVar14 = 0;
    pFVar2 = (this->ChildWindows).AllocatorInstance.Data;
    bVar4 = *(SWindow **)pFVar2 != param_1->Object;
    lVar10 = 0;
    iVar12 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar13 = iVar12 + 1;
      if (lVar10 < lVar7) {
        pFVar8 = pFVar2 + lVar10 * 0x10;
        do {
          if (bVar4 != (*(SWindow **)pFVar8 != param_1->Object)) break;
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 1;
          pFVar8 = pFVar8 + 0x10;
        } while (lVar10 < lVar7);
      }
      iVar11 = iVar13 - iVar12;
      if (bVar4 == false) {
        DestructItems<TSharedRef<SWindow,1>,int>
                  ((TSharedRef<SWindow,1> *)(pFVar2 + (longlong)iVar12 * 0x10),iVar11);
      }
      else {
        if (iVar14 != iVar12) {
          memmove(pFVar2 + (longlong)iVar14 * 0x10,pFVar2 + (longlong)iVar12 * 0x10,
                  (longlong)iVar11 << 4);
        }
        iVar14 = iVar14 + iVar11;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar12 = iVar13;
    } while (lVar10 < lVar7);
    (this->ChildWindows).ArrayNum = iVar14;
  }
  uVar9 = 0;
  if (0 < (this->ChildWindows).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->ChildWindows).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->ChildWindows).AllocatorInstance.Data;
      bVar4 = RemoveDescendantWindow(*(SWindow **)(pFVar2 + lVar7),param_1);
      if (bVar4) {
        SetWindowBackground(*(SWindow **)(pFVar2 + lVar7),&this->Style->BackgroundBrush);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar9 < (this->ChildWindows).ArrayNum);
  }
  return false;
}

// RemoveOverlaySlot @ 1425f87b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::RemoveOverlaySlot(SWindow *this,TSharedRef<SWidget,1> *param_1)

{
  SOverlay *this_00;
  bool bVar1;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->WindowOverlay).Object;
  if (this_00 != (SOverlay *)0x0) {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = SOverlay::RemoveSlot(this_00,&local_18);
    return bVar1;
  }
  return false;
}

// RemovePopupLayerSlot @ 1425f8800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::RemovePopupLayerSlot(SWindow *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PopupLayer).Object == (SPopupLayer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SPopupLayer::RemoveSlot((this->PopupLayer).Object,param_1);
  return;
}

// RequestDestroyWindow @ 1425f92e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::RequestDestroyWindow(SWindow *this)

{
  code *pcVar1;
  char cVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FSlateApplicationBase *pFVar4;
  longlong *plVar5;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->RequestDestroyWindowOverride,&local_28);
  if ((*(int *)&(this->RequestDestroyWindowOverride).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->RequestDestroyWindowOverride).field_0x8,
     plVar5 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar5 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_28);
      local_38 = pTVar3->Object;
      local_30 = (pTVar3->SharedReferenceCount).ReferenceController;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->RequestDestroyWindowOverride,&local_28);
      if (*(int *)&(this->RequestDestroyWindowOverride).field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->RequestDestroyWindowOverride).field_0x8;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar4 = FSlateApplicationBase::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar4 + 0x140);
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)&local_28);
  local_38 = pTVar3->Object;
  local_30 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
  (*pcVar1)(pFVar4,&local_38);
  return;
}

// ReshapeWindow @ 1425f9450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::ReshapeWindow(SWindow *this,FSlateRect *param_1)

{
  FDeprecateVector2DParameter FVar1;
  
  FVar1._4_4_ = param_1->Bottom - param_1->Top;
  FVar1._0_4_ = param_1->Right - param_1->Left;
  ReshapeWindow(this,*(FDeprecateVector2DParameter *)param_1,FVar1);
  return;
}

// ReshapeWindow @ 1425f94a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::ReshapeWindow
          (SWindow *this,FDeprecateVector2DParameter param_1,FDeprecateVector2DParameter param_2)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  
  local_res8._0_4_ = SUB84(this->Size,0);
  local_res8._4_4_ = SUB84(this->Size,4);
  fVar6 = (float)local_res8 - __real_38d1b717;
  fStackX_24 = SUB84(this->ScreenPosition,4);
  fVar5 = local_res8._4_4_ - __real_38d1b717;
  local_res18 = param_2._0_4_;
  local_res10 = param_1._0_4_;
  fStackX_14 = param_1._4_4_;
  local_res8._0_4_ = (float)(int)local_res10;
  fStackX_1c = param_2._4_4_;
  local_res8._4_4_ = (float)(int)fStackX_14;
  fVar8 = (float)-((int)ROUND(__real_bf000000 -
                              ((local_res18 - __real_38d1b717) + (local_res18 - __real_38d1b717)))
                  >> 1);
  local_res20 = SUB84(this->ScreenPosition,0);
  fVar7 = (float)-((int)ROUND(__real_bf000000 -
                              ((fStackX_1c - __real_38d1b717) + (fStackX_1c - __real_38d1b717))) >>
                  1);
  if (((((float)(int)local_res20 != (float)local_res8) ||
       ((float)(int)fStackX_24 != local_res8._4_4_)) ||
      ((float)-((int)ROUND(__real_bf000000 - (fVar6 + fVar6)) >> 1) != fVar8)) ||
     ((float)-((int)ROUND(__real_bf000000 - (fVar5 + fVar5)) >> 1) != fVar7)) {
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      *(float *)&this->InitialDesiredScreenPosition = (float)local_res8;
      *(float *)&(this->InitialDesiredScreenPosition).field_0x4 = local_res8._4_4_;
      *(float *)&this->InitialDesiredSize = fVar8;
      *(float *)&(this->InitialDesiredSize).field_0x4 = fVar7;
    }
    else {
      SetCachedScreenPosition(this,local_res8);
      if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (this->NativeWindow).Object;
      (**(code **)(pFVar1->_padding_ + 8))
                (pFVar1,(int)(float)local_res8,(int)local_res8._4_4_,(int)fVar8,(int)fVar7);
    }
    FVar3._4_4_ = fVar7;
    FVar3._0_4_ = fVar8;
    SetCachedSize(this,FVar3);
  }
  return;
}

// Resize @ 1425f96e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::Resize(SWindow *this,FDeprecateVector2DParameter param_1)

{
  FDeprecateSlateVector2D FVar1;
  undefined1 local_res20 [8];
  
  FVar1 = GetWindowSizeFromClientSize
                    (this,(FDeprecateVector2DParameter)local_res20,(TOptional<float>)param_1);
  ResizeWindowSize(this,(TVector2<float>)*(TVector2<float>_u_0 *)FVar1);
  return;
}

// ResizeWindowSize @ 1425f9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::ResizeWindowSize(SWindow *this,TVector2<float> param_1)

{
  float fVar1;
  FGenericWindow *pFVar2;
  FDeprecateVector2DParameter FVar3;
  TOptional<float> *pTVar4;
  FWindowSizeLimits *pFVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined8 local_res10;
  
  local_res10 = param_1.field0_0x0;
  pFVar5 = (FWindowSizeLimits *)&local_res10;
  if ((this->SizeLimits).MinWidth.bIsSet != false) {
    pFVar5 = &this->SizeLimits;
  }
  fVar1 = (pFVar5->MinWidth).TypedValue;
  local_res10._0_4_ = param_1.field0_0x0._0_4_;
  if (fVar1 <= (float)local_res10) {
    fVar1 = (float)local_res10;
  }
  local_res10._0_4_ = fVar1;
  if ((this->SizeLimits).MaxWidth.bIsSet != false) {
    local_res10._0_4_ = (this->SizeLimits).MaxWidth.TypedValue;
  }
  if (fVar1 <= (float)local_res10) {
    local_res10._0_4_ = fVar1;
  }
  pTVar4 = (TOptional<float> *)((longlong)&local_res10 + 4);
  if ((this->SizeLimits).MinHeight.bIsSet != false) {
    pTVar4 = &(this->SizeLimits).MinHeight;
  }
  local_res10._4_4_ = param_1.field0_0x0._4_4_;
  fVar1 = pTVar4->TypedValue;
  if (pTVar4->TypedValue <= local_res10._4_4_) {
    fVar1 = local_res10._4_4_;
  }
  local_res10._4_4_ = fVar1;
  fVar8 = fVar1;
  if ((this->SizeLimits).MaxHeight.bIsSet != false) {
    fVar8 = (this->SizeLimits).MaxHeight.TypedValue;
  }
  if (fVar1 <= fVar8) {
    fVar8 = fVar1;
  }
  fVar1 = *(float *)&(this->Size).field_0x4;
  iVar7 = -((int)ROUND(__real_bf000000 -
                       (((float)local_res10 + (float)local_res10) - __real_3951b717)) >> 1);
  iVar6 = -((int)ROUND(__real_bf000000 - ((fVar8 + fVar8) - __real_3951b717)) >> 1);
  if ((-((int)ROUND(__real_bf000000 -
                    (((*(float *)&this->Size - __real_38d1b717) + *(float *)&this->Size) -
                    __real_38d1b717)) >> 1) != iVar7) ||
     (-((int)ROUND(__real_bf000000 - (((fVar1 - __real_38d1b717) + fVar1) - __real_38d1b717)) >> 1)
      != iVar6)) {
    FCurveSequence::JumpToEnd(&(this->Morpher).Sequence);
    pFVar2 = (this->NativeWindow).Object;
    if (pFVar2 == (FGenericWindow *)0x0) {
      *(float *)&this->InitialDesiredSize = (float)iVar7;
      *(float *)&(this->InitialDesiredSize).field_0x4 = (float)iVar6;
    }
    else {
      (**(code **)(pFVar2->_padding_ + 8))
                (pFVar2,(int)*(float *)&this->ScreenPosition,
                 (int)*(float *)&(this->ScreenPosition).field_0x4,iVar7,iVar6);
    }
  }
  FVar3._4_4_ = (float)iVar6;
  FVar3._0_4_ = (float)iVar7;
  SetCachedSize(this,FVar3);
  return;
}

// Restore @ 1425f9e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::Restore(SWindow *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425f9e0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x48))();
    return;
  }
  return;
}

// SetAllowFastUpdate @ 1425fb840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetAllowFastUpdate(SWindow *this,bool param_1)

{
  if ((this->bAllowFastUpdate != param_1) &&
     (this->field_0x3ea = this->field_0x3ea & 0xf7 | param_1 << 3, param_1)) {
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
    return;
  }
  return;
}

// SetCachedScreenPosition @ 1425fb930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetCachedScreenPosition(SWindow *this,FDeprecateVector2DParameter param_1)

{
  longlong *plVar1;
  TSharedRef<SWidget,1> *pTVar2;
  undefined4 local_res10;
  undefined4 uStackX_14;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  local_res10 = param_1._0_4_;
  uStackX_14 = param_1._4_4_;
  *(undefined4 *)&this->ScreenPosition = local_res10;
  *(undefined4 *)&(this->ScreenPosition).field_0x4 = uStackX_14;
  FSlateInvalidationRoot::InvalidateScreenPosition
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)&local_28);
  local_38 = pTVar2->Object;
  local_30 = (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWindowMoved,
             &local_28);
  if ((*(int *)&(this->OnWindowMoved).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnWindowMoved).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// SetCachedSize @ 1425fba00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetCachedSize(SWindow *this,FDeprecateVector2DParameter param_1)

{
  FGenericWindow *pFVar1;
  float local_res10;
  float fStackX_14;
  
  pFVar1 = (this->NativeWindow).Object;
  local_res10 = param_1._0_4_;
  fStackX_14 = param_1._4_4_;
  if (pFVar1 != (FGenericWindow *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0xf0))();
  }
  if ((local_res10 == *(float *)&this->Size) && (fStackX_14 == *(float *)&(this->Size).field_0x4)) {
    return;
  }
  *(float *)&this->Size = local_res10;
  *(float *)&(this->Size).field_0x4 = fStackX_14;
  FSlateInvalidationRoot::InvalidateRootChildOrder
            ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  return;
}

// SetContent @ 1425fbbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetContent(SWindow *this,TSharedRef<SWidget,1> *param_1)

{
  FSlot *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  
  this_00 = this->ContentSlot;
  if (this_00 == (FSlot *)0x0) {
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,param_1);
  }
  else {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
    ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = pSVar2;
    ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  }
  cVar4 = (**(code **)(this->_padding_ + 0x210))(this);
  if (cVar4 != '\0') {
    FSlateInvalidationRoot::InvalidateRootChildOrder
              ((FSlateInvalidationRoot *)&this->_padding_,(SWidget *)0x0);
  }
  SWidget::Invalidate((SWidget *)this,ChildOrder);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDPIScaleFactor @ 1425fc130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetDPIScaleFactor(SWindow *this,float param_1)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425fc13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x100))();
    return;
  }
  return;
}

// SetFullWindowOverlayContent @ 1425fc940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetFullWindowOverlayContent(SWindow *this,TSharedPtr<SWidget,1> *param_1)

{
  TSharedPtr<SWidget,1> *this_00;
  SOverlay *this_01;
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FScopedWidgetSlotArguments *pFVar6;
  undefined1 auStack_128 [32];
  SWidget *local_108;
  FSharedReferencer<1> local_100;
  TSharedPtr<SWidget,1> local_f8;
  SWidget *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TSharedRef<SWidget,1> local_d8;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = &this->FullWindowOverlayWidget;
  if (this_00->Object != (SWidget *)0x0) {
    if ((this->WindowOverlay).Object == (SOverlay *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_01 = (this->WindowOverlay).Object;
    pTVar5 = TSharedPtr<SWidget,1>::ToSharedRef(this_00,&local_d8);
    SOverlay::RemoveSlot(this_01,pTVar5);
    local_f8.Object = (SWidget *)0x0;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != &local_f8) {
      this_00->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FullWindowOverlayWidget).SharedReferenceCount,
                 &local_f8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  pSVar1 = param_1->Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = this_00->Object;
    pTStack_e0 = (this->FullWindowOverlayWidget).SharedReferenceCount.ReferenceController;
    this_00->Object = pSVar1;
    (this->FullWindowOverlayWidget).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    if ((this->WindowOverlay).Object == (SOverlay *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = SOverlay::AddSlot((this->WindowOverlay).Object,&local_c8,1);
    if (param_1->Object == (SWidget *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar1 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar1 == (SWidget *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108 = pSVar1;
    local_100.ReferenceController = pTVar2;
    if ((SWidget **)&pFVar6->_padding_ != &local_108) {
      pFVar6->_padding_ = (longlong)pSVar1;
      local_108 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar6->_padding_,&local_100);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_c8);
  }
  UpdateWindowContentVisibility(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetManualManageDPIChanges @ 1425fcf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetManualManageDPIChanges(SWindow *this,bool param_1)

{
  FGenericWindow *pFVar1;
  
  this->bManualManageDPI = false;
  this->field_0x3ea = this->field_0x3ea | param_1 << 2;
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425fcf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x110))(pFVar1,this->bManualManageDPI);
    return;
  }
  return;
}

// SetNativeWindow @ 1425fcf40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetNativeWindow(SWindow *this,TSharedRef<FGenericWindow,1> *param_1)

{
  TSharedPtr<FGenericWindow,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FGenericWindow *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->NativeWindow;
  if (pTVar1->Object != (FGenericWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("! NativeWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                       ,0x4f6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FGenericWindow,1> *)&local_18) {
    pTVar1->Object = local_18;
    local_18 = (FGenericWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NativeWindow).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNativeWindowButtonsVisibility @ 1425fcff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetNativeWindowButtonsVisibility(SWindow *this,bool param_1)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = (this->NativeWindow).Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425fcfff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x120))();
    return;
  }
  return;
}

// SetOnWindowClosed @ 1425fd5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::SetOnWindowClosed
          (SWindow *this,
          TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnWindowClosed,param_1);
  return;
}

// SetOnWindowMoved @ 1425fd5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::SetOnWindowMoved
          (SWindow *this,
          TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnWindowMoved,param_1);
  return;
}

// SetOnWorldSwitchHack @ 1425fd5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::SetOnWorldSwitchHack
          (SWindow *this,TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->OnWorldSwitchHack) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWorldSwitchHack,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// SetOpacity @ 1425fd6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetOpacity(SWindow *this,float param_1)

{
  FGenericWindow *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 != this->Opacity) {
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NativeWindow.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x605,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->Opacity = param_1;
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NativeWindow).Object;
    (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,this->Opacity);
  }
  return;
}

// SetRequestDestroyWindowOverride @ 1425fdac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::SetRequestDestroyWindowOverride
          (SWindow *this,
          TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->RequestDestroyWindowOverride,param_1);
  return;
}

// SetSizeLimits @ 1425fdae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetSizeLimits(SWindow *this,FWindowSizeLimits *param_1)

{
  FWindowSizeLimits::operator=(&this->SizeLimits,param_1);
  return;
}

// SetSizingRule @ 1425fdb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetSizingRule(SWindow *this,ESizingRule param_1)

{
  this->SizingRule = param_1;
  return;
}

// SetWindowBackground @ 1425fe900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::SetWindowBackground(SWindow *this,FSlateBrush *param_1)

{
  SImage *pSVar1;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->WindowBackground = param_1;
  pSVar1 = (this->WindowBackgroundImage).Object;
  if (pSVar1 != (SImage *)0x0) {
    local_30[8] = true;
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    local_30._0_8_ = param_1;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->ImageAttribute,(SWidget *)pSVar1,
             (TAttribute<FSlateBrush_const_*> *)local_30,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetWindowMode @ 1425fe9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::SetWindowMode(SWindow *this,Type param_1)

{
  FGenericWindow *pFVar1;
  FDeprecateSlateVector2D FVar2;
  FSlateRenderer *pFVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  FDeprecateSlateVector2D *pFVar8;
  FSlateApplicationBase *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  float local_res8;
  float fStackX_c;
  SWidget *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<SWidget,1> local_48;
  uchar local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TVar7 = (**(code **)(((this->NativeWindow).Object)->_padding_ + 0x68))();
  if (TVar7 != param_1) {
    if (param_1 != Windowed) {
      this->PreFullscreenPosition = this->ScreenPosition;
    }
    this->bIsDrawingEnabled = false;
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = (this->NativeWindow).Object;
    (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,param_1);
    if ((this->bIsMirrorWindow) || (pFVar8 = &this->ViewportSize, *(float *)pFVar8 == 0.0)) {
      pFVar8 = &this->Size;
    }
    FVar2 = *pFVar8;
    pFVar9 = FSlateApplicationBase::Get();
    pFVar3 = (pFVar9->Renderer).Object;
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x40);
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
    local_58 = pTVar10->Object;
    local_50 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    fStackX_c = FVar2._4_4_;
    local_res8 = FVar2._0_4_;
    (*pcVar5)(pFVar3,&local_58,(longlong)local_res8,(longlong)fStackX_c);
    pSVar4 = (this->TitleArea).Object;
    if (pSVar4 != (SWidget *)0x0) {
      local_38[1] = 1;
      local_30 = 0;
      uStack_28 = 0;
      local_38[0] = (uchar)EVisibility::Collapsed;
      if (WindowedFullscreen < param_1) {
        local_38[0] = (uchar)EVisibility::Visible;
      }
      local_20 = 0;
      (**(code **)(pSVar4->_padding_ + 0x1c8))(pSVar4,local_38);
    }
    if (TVar7 != Windowed) {
      MoveWindowTo(this,*(FDeprecateVector2DParameter *)&this->PreFullscreenPosition);
    }
    this->bIsDrawingEnabled = true;
  }
  return;
}

// ShowWindow @ 1425fee00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindow::ShowWindow(SWindow *this)

{
  FSlateRenderer *pFVar1;
  FGenericWindow *pFVar2;
  code *pcVar3;
  FDeprecateVector2DParameter FVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FSlateApplicationBase *pFVar7;
  TVector2<float>_u_0 TVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float fStackX_c;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget,1> local_28 [2];
  
  if (!this->bHasEverBeenShown) {
    if ((this->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5910581319552730515>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                         ,0x593,"NativeWindow.IsValid()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pFVar7 = FSlateApplicationBase::Get();
      pFVar1 = (pFVar7->Renderer).Object;
      pcVar3 = *(code **)(pFVar1->_padding_ + 0x30);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,local_28);
      local_38 = pTVar6->Object;
      local_30 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      (*pcVar3)(pFVar1,&local_38);
    }
    if ((this->SizingRule == Autosized) && (this->AutoCenterRule != None)) {
      pFVar7 = FSlateApplicationBase::Get();
      pFVar2 = (this->NativeWindow).Object;
      fVar9 = __real_3f800000;
      if (pFVar2 != (FGenericWindow *)0x0) {
        fVar9 = (float)(**(code **)(pFVar2->_padding_ + 0xf8))();
      }
      fVar10 = (float)(**(code **)(*(longlong *)pFVar7 + 0x58))(pFVar7);
      SWidget::SlatePrepass((SWidget *)this,fVar10 * fVar9);
      TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if ((this->_padding_ & 0x2000) != 0) {
        TVar8 = (TVector2<float>_u_0)this->_padding_;
      }
      local_res8 = TVar8._s_0.X;
      fStackX_c = TVar8._s_0.Y;
      FVar4._4_4_ = *(float *)&(this->InitialDesiredScreenPosition).field_0x4 -
                    fStackX_c * __real_3f000000;
      FVar4._0_4_ = *(float *)&this->InitialDesiredScreenPosition - local_res8 * __real_3f000000;
      ReshapeWindow(this,FVar4,(FDeprecateVector2DParameter)TVar8._s_0);
    }
    pFVar2 = (this->NativeWindow).Object;
    if ((pFVar2 != (FGenericWindow *)0x0) && (this->bInitiallyMaximized)) {
      (**(code **)(pFVar2->_padding_ + 0x40))();
    }
    pFVar2 = (this->NativeWindow).Object;
    if ((pFVar2 != (FGenericWindow *)0x0) && (this->bInitiallyMinimized)) {
      (**(code **)(pFVar2->_padding_ + 0x38))();
    }
  }
  this->bHasEverBeenShown = true;
  pFVar2 = (this->NativeWindow).Object;
  if ((pFVar2 != (FGenericWindow *)0x0) &&
     ((**(code **)(pFVar2->_padding_ + 0x50))(), this->bIsTopmostWindow)) {
    if (((this->NativeWindow).Object == (FGenericWindow *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->NativeWindow).Object;
                    /* WARNING: Could not recover jumptable at 0x0001425ff022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0);
    return;
  }
  return;
}

// StartMorph @ 1425ff690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::StartMorph(SWindow *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  atomic<int> aVar7;
  EWidgetUpdateFlags EVar8;
  SWidget *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  TSharedRef<FActiveTimerHandle,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  EWidgetUpdateFlags EVar20;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<FActiveTimerHandle,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  fVar3 = *(float *)&this->ScreenPosition;
  fVar4 = *(float *)&(this->ScreenPosition).field_0x4;
  fVar5 = *(float *)&this->Size;
  fVar6 = *(float *)&(this->Size).field_0x4;
  (this->Morpher).StartingOpacity = this->Opacity;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  (this->Morpher).StartingMorphShape.Left = fVar3;
  (this->Morpher).StartingMorphShape.Top = fVar4;
  (this->Morpher).StartingMorphShape.Right = fVar3 + fVar5;
  (this->Morpher).StartingMorphShape.Bottom = fVar4 + fVar6;
  (this->Morpher).bIsActive = true;
  FCurveSequence::JumpToStart(&(this->Morpher).Sequence);
  EVar8 = (EWidgetUpdateFlags)this->_padding_;
  EVar20 = EVar8 | NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar20;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar8,EVar20);
  if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar19 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar19 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar19->SharedReferenceCount < 1)) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_50);
    uVar14 = local_68.SharedReferenceCount.ReferenceController._4_4_;
    if (puVar15 == (undefined8 *)0x0) {
      pTVar19 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_78);
      pTVar19 = (pTVar16->SharedReferenceCount).ReferenceController;
      pSVar9 = pTVar16->Object;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar17;
      *puVar15 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSWindow___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar15[3] = pSVar9;
      puVar15[4] = pTVar19;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->WeakReferenceCount = (atomic<int>)((int)pTVar19->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar13 = true;
      bVar12 = true;
      bVar11 = true;
      puVar15[5] = TriggerPlayMorphSequence;
      puVar15[6] = (ulonglong)uVar14 << 0x20;
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar18 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_68,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_58);
    (this->ActiveTimerHandle).Object = pTVar18->Object;
    pTVar19 = (pTVar18->SharedReferenceCount).ReferenceController;
    if (pTVar19 != (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController) {
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->WeakReferenceCount = (atomic<int>)((int)pTVar19->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar10->WeakReferenceCount;
        aVar7 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar7 == (atomic<int>)0x1) {
          (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
        }
      }
      (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar19;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                        local_68.SharedReferenceCount.ReferenceController._0_4_));
  }
  return;
}

// SupportsKeyboardFocus @ 142600cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWindow::SupportsKeyboardFocus(SWindow *this)

{
  if ((this->Type != ToolTip) && (this->Type != CursorDecorator)) {
    return true;
  }
  return false;
}

// SwitchWorlds @ 142600cd0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SWindow::SwitchWorlds(SWindow *this,int param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWorldSwitchHack,
             &local_28);
  if ((*(int *)&(this->OnWorldSwitchHack).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnWorldSwitchHack).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWorldSwitchHack,
                 &local_28);
      if (*(int *)&(this->OnWorldSwitchHack).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnWorldSwitchHack).field_0x8;
      }
      iVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return iVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return 0;
}

// Tick @ 142601800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::Tick(SWindow *this,FGeometry *param_1,double param_2,float param_3)

{
  FSlateRect *pFVar1;
  undefined1 *puVar2;
  EWidgetUpdateFlags EVar3;
  code *pcVar4;
  FDeprecateVector2DParameter FVar5;
  FDeprecateVector2DParameter FVar6;
  bool bVar7;
  EWidgetUpdateFlags EVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res8;
  float local_80;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  
  if ((this->Morpher).bIsActive) {
    pFVar1 = &(this->Morpher).TargetMorphShape;
    bVar7 = FCurveSequence::IsPlaying(&(this->Morpher).Sequence);
    if (bVar7) {
      fVar9 = FCurveSequence::GetLerp(&(this->Morpher).Sequence);
      fVar12 = (this->Morpher).StartingMorphShape.Left;
      fVar15 = (this->Morpher).StartingMorphShape.Top;
      fVar12 = (pFVar1->Left - fVar12) * fVar9 + fVar12;
      if ((this->Morpher).bIsAnimatingWindowSize) {
        fVar14 = (this->Morpher).StartingMorphShape.Right;
        fVar13 = (this->Morpher).StartingMorphShape.Bottom;
        fVar15 = ((this->Morpher).TargetMorphShape.Top - fVar15) * fVar9 + fVar15;
        fVar14 = ((this->Morpher).TargetMorphShape.Right - fVar14) * fVar9 + fVar14;
        fVar13 = ((this->Morpher).TargetMorphShape.Bottom - fVar13) * fVar9 + fVar13;
        if (this->bVirtualWindow) {
          fVar11 = *(float *)&this->Size;
          local_res8._4_4_ = 0.0;
          fVar10 = *(float *)&(this->Size).field_0x4;
          local_res8._0_4_ = 0.0;
        }
        else {
          fVar11 = *(float *)&this->ScreenPosition + *(float *)&this->Size;
          fVar10 = *(float *)&(this->ScreenPosition).field_0x4 + *(float *)&(this->Size).field_0x4;
          local_res8._4_4_ = SUB84(this->ScreenPosition,4);
          local_res8._0_4_ = SUB84(this->ScreenPosition,0);
        }
        if ((((fVar12 != (float)local_res8) || (fVar15 != local_res8._4_4_)) || (fVar14 != fVar11))
           || (fVar13 != fVar10)) {
          if ((this->SizingRule == Autosized) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("SizingRule != ESizingRule::Autosized",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                                 ,0x2eb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar5._4_4_ = fVar15;
          FVar5._0_4_ = fVar12;
          local_res8._4_4_ = fVar13 - fVar15;
          local_res8._0_4_ = fVar14 - fVar12;
          ReshapeWindow(this,FVar5,local_res8);
        }
      }
      else {
        local_80 = SUB84(this->ScreenPosition,0);
        fVar15 = ((this->Morpher).TargetMorphShape.Top - fVar15) * fVar9 + fVar15;
        if ((fVar12 != local_80) || (fStack_7c = SUB84(this->ScreenPosition,4), fVar15 != fStack_7c)
           ) {
          FVar6._4_4_ = fVar15;
          FVar6._0_4_ = fVar12;
          MoveWindowTo(this,FVar6);
        }
      }
      fVar12 = (this->Morpher).StartingOpacity;
      SetOpacity(this,((this->Morpher).TargetOpacity - fVar12) * fVar9 + fVar12);
    }
    else {
      if ((this->Morpher).bIsAnimatingWindowSize) {
        fVar12 = *(float *)&this->Size;
        if (this->bVirtualWindow) {
          fVar15 = *(float *)&(this->Size).field_0x4;
          local_res8._4_4_ = 0.0;
          local_res8._0_4_ = 0.0;
        }
        else {
          fVar12 = fVar12 + *(float *)&this->ScreenPosition;
          fVar15 = *(float *)&(this->ScreenPosition).field_0x4 + *(float *)&(this->Size).field_0x4;
          local_res8._4_4_ = SUB84(this->ScreenPosition,4);
          local_res8._0_4_ = SUB84(this->ScreenPosition,0);
        }
        if (((((float)local_res8 != pFVar1->Left) ||
             (local_res8._4_4_ != (this->Morpher).TargetMorphShape.Top)) ||
            (fVar12 != (this->Morpher).TargetMorphShape.Right)) ||
           (fVar15 != (this->Morpher).TargetMorphShape.Bottom)) {
          if ((this->SizingRule == Autosized) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("SizingRule != ESizingRule::Autosized",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SWindow.cpp"
                                 ,0x304,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ReshapeWindow(this,pFVar1);
        }
      }
      else {
        local_70 = SUB84(this->ScreenPosition,0);
        if ((pFVar1->Left != local_70) ||
           (fStack_6c = SUB84(this->ScreenPosition,4),
           (this->Morpher).TargetMorphShape.Top != fStack_6c)) {
          MoveWindowTo(this,*(FDeprecateVector2DParameter *)pFVar1);
        }
      }
      SetOpacity(this,(this->Morpher).TargetOpacity);
      EVar3 = (EWidgetUpdateFlags)this->_padding_;
      (this->Morpher).bIsActive = false;
      EVar8 = EVar3 & ~NeedsTick;
      *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
      FWidgetProxyHandle::UpdateWidgetFlags
                ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar8);
    }
  }
  return;
}

// ToString @ 1426020a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall SWindow::ToString(SWindow *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  pFVar3 = TAttribute<FText>::Get(&this->Title);
  local_78.TextData.Reference = (pFVar3->TextData).Reference;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 8))
              (local_78.TextData.Reference,local_res8);
  }
  local_78.Flags = pFVar3->Flags;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"SWindow",L"Window_TitleFmt",L" Window : {0} ");
  pFVar4 = FTextFormat::FTextFormat(&local_38,pFVar3,Default);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,&local_78);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_88.AllocatorInstance.Data,&local_28,1);
  local_68.TextFormatData.Object = (pFVar4->TextFormatData).Object;
  local_68.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_68.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_58,&local_68,&local_88);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FFormatArgumentValue *)local_88.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::ToString(&local_58);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TriggerPlayMorphSequence @ 142602280

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SWindow::TriggerPlayMorphSequence(SWindow *this,double param_1,float param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FCurveSequence::Play(&(this->Morpher).Sequence,pTVar1,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return Stop;
}

// UpdateMorphTargetPosition @ 142605000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindow::UpdateMorphTargetPosition(SWindow *this,FDeprecateVector2DParameter *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  (this->Morpher).TargetMorphShape.Right = fVar1;
  (this->Morpher).TargetMorphShape.Left = fVar1;
  fVar1 = *(float *)&param_1->field_0x4;
  (this->Morpher).TargetMorphShape.Bottom = fVar1;
  (this->Morpher).TargetMorphShape.Top = fVar1;
  return;
}

// UpdateMorphTargetShape @ 142605030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::UpdateMorphTargetShape(SWindow *this,FSlateRect *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Morpher).TargetMorphShape.Left = param_1->Left;
  (this->Morpher).TargetMorphShape.Top = fVar1;
  (this->Morpher).TargetMorphShape.Right = fVar2;
  (this->Morpher).TargetMorphShape.Bottom = fVar3;
  return;
}

// UpdateWindowContentVisibility @ 1426059f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindow::UpdateWindowContentVisibility(SWindow *this)

{
  SImage *pSVar1;
  SWidget *pSVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->bShouldShowWindowContentDuringOverlay == true) ||
     (local_28.Value.Value.Value = EVisibility::Hidden.Value.Value,
     (this->FullWindowOverlayWidget).Object == (SWidget *)0x0)) {
    local_28.Value.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  }
  (this->WindowContentVisibility).Value.Value = (uchar)local_28.Value.Value.Value;
  pSVar1 = (this->WindowBackgroundImage).Object;
  if (pSVar1 != (SImage *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)pSVar1,&local_28);
  }
  pSVar1 = (this->WindowBorder).Object;
  if (pSVar1 != (SImage *)0x0) {
    local_28.Value.Value.Value =
         (TEnumAsByte<EVisibility::Private>)(this->WindowContentVisibility).Value.Value;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)pSVar1,&local_28);
  }
  pSVar1 = (this->WindowOutline).Object;
  if (pSVar1 != (SImage *)0x0) {
    local_28.Value.Value.Value =
         (TEnumAsByte<EVisibility::Private>)(this->WindowContentVisibility).Value.Value;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)pSVar1,&local_28);
  }
  pSVar2 = (this->ContentAreaVBox).Object;
  if (pSVar2 != (SWidget *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value.Value.Value =
         (TEnumAsByte<EVisibility::Private>)(this->WindowContentVisibility).Value.Value;
    local_28.Getter._16_8_ = 0;
    (**(code **)(pSVar2->_padding_ + 0x1c8))(pSVar2,&local_28);
  }
  return;
}

// operator() @ 150490810

bool __thiscall `SWindow::AddOverlaySlot'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5910581319552730402>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5910581319552730402>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

