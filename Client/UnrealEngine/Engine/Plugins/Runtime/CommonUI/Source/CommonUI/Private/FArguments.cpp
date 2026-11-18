// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 12

// FArguments @ 14a7a91d0

FArguments * __thiscall SCommonButtonTableRow<UObject_*>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_bAllowDragging = true;
  *(undefined8 *)&this->_OnHovered = 0;
  *(undefined8 *)&(this->_OnHovered).field_0x8 = 0;
  *(undefined4 *)&(this->_OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->_OnUnhovered = 0;
  *(undefined8 *)&(this->_OnUnhovered).field_0x8 = 0;
  *(undefined4 *)&(this->_OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnRowCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowAcceptDrop = 0;
  *(undefined8 *)&(this->_OnRowAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragDetected = 0;
  *(undefined8 *)&(this->_OnRowDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragEnter = 0;
  *(undefined8 *)&(this->_OnRowDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragLeave = 0;
  *(undefined8 *)&(this->_OnRowDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragCancelled = 0;
  *(undefined8 *)&(this->_OnRowDragCancelled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragCancelled).field_0x10 = 0;
  this->_bAllowKeepPreselectedItems = true;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14a7a92d0

FArguments * __thiscall SWidgetCarousel<UPanelSlot_*>::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_MoveSpeed).Value = 1.0;
  *(undefined8 *)&this->_OnGenerateWidget = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x8 = 0;
  *(undefined4 *)&(this->_OnGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&this->_OnPageChanged = 0;
  *(undefined8 *)&(this->_OnPageChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPageChanged).field_0x10 = 0;
  this->_WidgetItemsSource = (TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->_MoveSpeed).bIsSet = true;
  *(undefined8 *)&(this->_MoveSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MoveSpeed).Getter = 0;
  *(undefined8 *)&(this->_MoveSpeed).Getter.field_0x8 = 0;
  (this->_SlideValueLeftLimit).Value = -1.0;
  (this->_SlideValueLeftLimit).bIsSet = true;
  *(undefined8 *)&(this->_SlideValueLeftLimit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SlideValueLeftLimit).Getter = 0;
  *(undefined8 *)&(this->_SlideValueLeftLimit).Getter.field_0x8 = 0;
  (this->_SlideValueRightLimit).Value = 1.0;
  (this->_SlideValueRightLimit).bIsSet = true;
  *(undefined8 *)&(this->_SlideValueRightLimit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SlideValueRightLimit).Getter = 0;
  *(undefined8 *)&(this->_SlideValueRightLimit).Getter.field_0x8 = 0;
  (this->_PeakValueLeftLimit).Value = -0.05;
  (this->_PeakValueLeftLimit).bIsSet = true;
  *(undefined8 *)&(this->_PeakValueLeftLimit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_PeakValueLeftLimit).Getter = 0;
  *(undefined8 *)&(this->_PeakValueLeftLimit).Getter.field_0x8 = 0;
  (this->_PeakValueRightLimit).Value = 0.05;
  (this->_PeakValueRightLimit).bIsSet = true;
  *(undefined8 *)&(this->_PeakValueRightLimit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_PeakValueRightLimit).Getter = 0;
  *(undefined8 *)&(this->_PeakValueRightLimit).Getter.field_0x8 = 0;
  (this->_FadeRate).Value = 1.0;
  (this->_FadeRate).bIsSet = true;
  *(undefined8 *)&(this->_FadeRate).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_FadeRate).Getter = 0;
  *(undefined8 *)&(this->_FadeRate).Getter.field_0x8 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14a7a9410

FArguments * __thiscall SAnalogSlider::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSliderStyle *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_IndentHandle).Value = true;
  (this->_IndentHandle).bIsSet = true;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter = 0;
  *(undefined8 *)&(this->_IndentHandle).Getter.field_0x8 = 0;
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  this->_Orientation = Orient_Horizontal;
  FVar1 = FLinearColor::White;
  (this->_SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_SliderBarColor).bIsSet = true;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_SliderHandleColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_SliderHandleColor).bIsSet = true;
  *(undefined8 *)&(this->_SliderHandleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderHandleColor).Getter = 0;
  *(undefined8 *)&(this->_SliderHandleColor).Getter.field_0x8 = 0;
  pIVar2 = FAppStyle::Get();
  pFVar3 = ::FName::FName(&local_res8,"Slider");
  pFVar4 = (FSliderStyle *)
           (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2,FSliderStyle::TypeName,*pFVar3,0,1);
  if (pFVar4 == (FSliderStyle *)0x0) {
    pFVar4 = FSliderStyle::GetDefault();
  }
  this->_Style = pFVar4;
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  (this->_Value).Value = 1.0;
  (this->_Value).bIsSet = true;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  this->_IsFocusable = true;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&this->_OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->_OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->_OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnAnalogCapture).field_0x10 = 0;
  *(undefined8 *)&this->_OnAnalogCapture = 0;
  *(undefined8 *)&(this->_OnAnalogCapture).field_0x8 = 0;
  return this;
}

// FArguments @ 14a7a9610

FArguments * __thiscall SCommonAnimatedSwitcher::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_TransitionType = FadeOnly;
  this->_TransitionCurveType = CubicInOut;
  this->_InitialIndex = 0;
  *(undefined8 *)&this->_OnActiveIndexChanged = 0;
  *(undefined8 *)&(this->_OnActiveIndexChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnActiveIndexChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsTransitioningChanged = 0;
  *(undefined8 *)&(this->_OnIsTransitioningChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnIsTransitioningChanged).field_0x10 = 0;
  this->_TransitionDuration = 0.4;
  this->_TransitionFallbackStrategy = Previous;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 14a7a9740

FArguments * __thiscall SCommonButton::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->_HAlign = HAlign_Fill;
  this->_VAlign = VAlign_Fill;
  *(undefined8 *)&(this->_OnSlateButtonDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnSlateButtonDragDetected = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragDetected).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnSlateButtonDragEnter = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragEnter).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnSlateButtonDragLeave = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragLeave).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragOver).field_0x10 = 0;
  *(undefined8 *)&this->_OnSlateButtonDragOver = 0;
  *(undefined8 *)&(this->_OnSlateButtonDragOver).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSlateButtonDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnSlateButtonDrop = 0;
  *(undefined8 *)&(this->_OnSlateButtonDrop).field_0x8 = 0;
  *(undefined8 *)&this->_OnClicked = 0;
  *(undefined8 *)&(this->_OnClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnDoubleClicked = 0;
  *(undefined8 *)&(this->_OnDoubleClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnPressed = 0;
  *(undefined8 *)&(this->_OnPressed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPressed).field_0x10 = 0;
  *(undefined8 *)&this->_OnReleased = 0;
  *(undefined8 *)&(this->_OnReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnReleased).field_0x10 = 0;
  this->_ClickMethod = DownAndUp;
  this->_TouchMethod = DownAndUp;
  this->_PressMethod = DownAndUp;
  *(undefined8 *)&this->_OnReceivedFocus = 0;
  *(undefined8 *)&(this->_OnReceivedFocus).field_0x8 = 0;
  *(undefined4 *)&(this->_OnReceivedFocus).field_0x10 = 0;
  *(undefined8 *)&this->_OnLostFocus = 0;
  *(undefined8 *)&(this->_OnLostFocus).field_0x8 = 0;
  *(undefined4 *)&(this->_OnLostFocus).field_0x10 = 0;
  this->_IsFocusable = true;
  this->_IsInteractionEnabled = true;
  return this;
}

// FArguments @ 14a7a9890

FArguments * __thiscall SCommonInlineIcon::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_DisplayMode = IconAndText;
  this->_IconScale = 0.75;
  this->_bTintIcon = false;
  this->_TransformPolicy = None;
  return this;
}

// FArguments @ 14a7a98d0

FArguments * __thiscall SCustomNavBorder::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->_OnHandleNavigation = 0;
  *(undefined8 *)&(this->_OnHandleNavigation).field_0x8 = 0;
  *(undefined4 *)&(this->_OnHandleNavigation).field_0x10 = 0;
  return this;
}

// FArguments @ 14a7a9930

FArguments * __thiscall SLoadGuard::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->_ThrobberHAlign = HAlign_Center;
  (this->_Throbber).Object = (SWidget *)0x0;
  (this->_Throbber).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&this->_GuardText);
  (this->_GuardTextStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_GuardBackgroundBrush = (FSlateBrush *)0x0;
  *(undefined8 *)&this->_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnLoadingStateChanged).field_0x10 = 0;
  return this;
}

// FArguments @ 14a7a99d0

FArguments * __thiscall STextScroller::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ScrollOptions).Speed = 25.0;
  *(undefined8 *)&(this->_ScrollOptions).FadeOutDelay = 0;
  (this->_ScrollOptions).StartDelay = 0.5;
  (this->_ScrollOptions).EndDelay = 0.5;
  (this->_ScrollOptions).FadeInDelay = 0.0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  return this;
}

// ~FArguments @ 14a7b0ef0

void __thiscall SObjectTableRow<UObject_*>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowDragCancelled);
  pvVar1 = *(void **)&(this->_OnRowDragCancelled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowDragCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowDragLeave);
  pvVar1 = *(void **)&(this->_OnRowDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowDragEnter);
  pvVar1 = *(void **)&(this->_OnRowDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowDragDetected);
  pvVar1 = *(void **)&(this->_OnRowDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowAcceptDrop);
  pvVar1 = *(void **)&(this->_OnRowAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnRowCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowCanAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnUnhovered);
  pvVar1 = *(void **)&(this->_OnUnhovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnUnhovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnHovered);
  pvVar1 = *(void **)&(this->_OnHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnHovered);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14a7b1070

void __thiscall SAnalogSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAnalogCapture);
  pvVar1 = *(void **)&(this->_OnAnalogCapture).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAnalogCapture);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->_OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->_OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderHandleColor).Getter);
  pvVar1 = *(void **)&(this->_SliderHandleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderHandleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->_SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IndentHandle).Getter);
  pvVar1 = *(void **)&(this->_IndentHandle).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IndentHandle).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14a7b1290

void __thiscall SCommonButton::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnLostFocus);
  pvVar1 = *(void **)&(this->_OnLostFocus).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnReceivedFocus);
  pvVar1 = *(void **)&(this->_OnReceivedFocus).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnReceivedFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnReleased);
  pvVar1 = *(void **)&(this->_OnReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPressed);
  pvVar1 = *(void **)&(this->_OnPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDoubleClicked);
  pvVar1 = *(void **)&(this->_OnDoubleClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDoubleClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked);
  pvVar1 = *(void **)&(this->_OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlateButtonDrop);
  pvVar1 = *(void **)&(this->_OnSlateButtonDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlateButtonDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlateButtonDragOver);
  pvVar1 = *(void **)&(this->_OnSlateButtonDragOver).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlateButtonDragOver);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlateButtonDragLeave);
  pvVar1 = *(void **)&(this->_OnSlateButtonDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlateButtonDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlateButtonDragEnter);
  pvVar1 = *(void **)&(this->_OnSlateButtonDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlateButtonDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSlateButtonDragDetected);
  pvVar1 = *(void **)&(this->_OnSlateButtonDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSlateButtonDragDetected);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

