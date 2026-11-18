// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 233

// SetPressedSlateSoundOverride_WrapperImpl @ 14a7858e0

void __cdecl
UCommonButtonBase::SetPressedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x3f8));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x3f8),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetClickedSlateSoundOverride_WrapperImpl @ 14a785960

void __cdecl
UCommonButtonBase::SetClickedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x410));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x410),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetHoveredSlateSoundOverride_WrapperImpl @ 14a7859e0

void __cdecl
UCommonButtonBase::SetHoveredSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x428));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x428),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetSelectedPressedSlateSoundOverride_WrapperImpl @ 14a785aa0

void __cdecl
UCommonButtonBase::SetSelectedPressedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x440));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x440),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetSelectedClickedSlateSoundOverride_WrapperImpl @ 14a785b30

void __cdecl
UCommonButtonBase::SetSelectedClickedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x458));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x458),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetSelectedHoveredSlateSoundOverride_WrapperImpl @ 14a785bc0

void __cdecl
UCommonButtonBase::SetSelectedHoveredSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x470));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x470),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetLockedPressedSlateSoundOverride_WrapperImpl @ 14a785c40

void __cdecl
UCommonButtonBase::SetLockedPressedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x488));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x488),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetLockedClickedSlateSoundOverride_WrapperImpl @ 14a785cd0

void __cdecl
UCommonButtonBase::SetLockedClickedSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x4a0));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x4a0),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// SetLockedHoveredSlateSoundOverride_WrapperImpl @ 14a785d50

void __cdecl
UCommonButtonBase::SetLockedHoveredSlateSoundOverride_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_2);
  pUVar2 = FSlateSound::GetResourceObject((FSlateSound *)((longlong)param_1 + 0x4b8));
  FSlateSound::operator=((FSlateSound *)((longlong)param_1 + 0x4b8),param_2);
  if (pUVar1 != pUVar2) {
    BuildStyles(param_1);
  }
  return;
}

// StaticClass @ 14a785dd0

UClass * __cdecl UCommonButtonBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonBase",
               &Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonBase,0x1750,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonBase>,
               InternalVTableHelperCtorCaller<UCommonButtonBase>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton;
}

// UCommonButtonBase @ 14a7ac3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonButtonBase * __thiscall
UCommonButtonBase::UCommonButtonBase(UCommonButtonBase *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonButtonBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FSlateSound::FSlateSound(&this->PressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->ClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->HoveredSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedPressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedHoveredSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedPressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedHoveredSlateSoundOverride);
  (this->HoldData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bSimulateHoverOnTouchInput = true;
  (this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->TriggeringInputAction).RowName.ComparisonIndex = 0;
  (this->TriggeringInputAction).RowName.Number = 0;
  (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->TriggeredInputAction).RowName.ComparisonIndex = 0;
  (this->TriggeredInputAction).RowName.Number = 0;
  *(undefined8 *)&this->OnSelectedChangedBase = 0;
  *(undefined8 *)&(this->OnSelectedChangedBase).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChangedBase).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseHovered = 0;
  *(undefined8 *)&(this->OnButtonBaseHovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnhovered = 0;
  *(undefined8 *)&(this->OnButtonBaseUnhovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseFocused = 0;
  *(undefined8 *)&(this->OnButtonBaseFocused).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseFocused).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnfocused = 0;
  *(undefined8 *)&(this->OnButtonBaseUnfocused).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnfocused).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseSelected = 0;
  *(undefined8 *)&(this->OnButtonBaseSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseSelected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnselected = 0;
  *(undefined8 *)&(this->OnButtonBaseUnselected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnselected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragDetected = 0;
  *(undefined8 *)&(this->OnButtonBaseDragDetected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragEnter = 0;
  *(undefined8 *)&(this->OnButtonBaseDragEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragLeave = 0;
  *(undefined8 *)&(this->OnButtonBaseDragLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragOver = 0;
  *(undefined8 *)&(this->OnButtonBaseDragOver).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragOver).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDrop = 0;
  *(undefined8 *)&(this->OnButtonBaseDrop).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDrop).field_0x10 = 0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->TriggeringBindingHandle).RegistrationId = -1;
  (this->HoldTickerHandle).Object = (FElement *)0x0;
  (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HoldProgressRollbackTickerHandle).Object = (FElement *)0x0;
  (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsPersistentBinding = false;
  this->InputModeOverride = Menu;
  FText::FText(&this->EnabledTooltipText);
  FText::FText(&this->DisabledTooltipText);
  (this->SingleMaterialStyleMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  FButtonStyle::FButtonStyle(&this->NormalStyle);
  FButtonStyle::FButtonStyle(&this->SelectedStyle);
  FButtonStyle::FButtonStyle(&this->DisabledStyle);
  FButtonStyle::FButtonStyle(&this->LockedStyle);
  (this->RootButton).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnClickedEvent = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPressedEvent = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnReleasedEvent = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnHoveredEvent = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnUnhoveredEvent = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFocusReceivedEvent = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFocusLostEvent = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnLockClickedEvent = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnLockDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDragDetectedEvent = 0;
  *(undefined8 *)&(this->OnDragDetectedEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragDetectedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragEnterEvent = 0;
  *(undefined8 *)&(this->OnDragEnterEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragEnterEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragLeaveEvent = 0;
  *(undefined8 *)&(this->OnDragLeaveEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragLeaveEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragOverEvent = 0;
  *(undefined8 *)&(this->OnDragOverEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragOverEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDropEvent = 0;
  *(undefined8 *)&(this->OnDropEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectedChangedEvent = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x18 = 2;
  (this->InputActionWidget).field0_0x0.DebugPtr = (UCommonActionWidget *)0x0;
  return this;
}

// UCommonButtonBase @ 14a7ac870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonButtonBase * __thiscall
UCommonButtonBase::UCommonButtonBase(UCommonButtonBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  UButton *this_00;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonButtonBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->MinWidth = 0;
  this->MinHeight = 0;
  this->MaxWidth = 0;
  this->MaxHeight = 0;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FSlateSound::FSlateSound(&this->PressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->ClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->HoveredSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedPressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->SelectedHoveredSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedPressedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedClickedSlateSoundOverride);
  FSlateSound::FSlateSound(&this->LockedHoveredSlateSoundOverride);
  this->bSelected = '\0';
  this->bButtonEnabled = '\x01';
  this->bInteractionEnabled = '\x01';
  puVar2 = &this->field_0x4d0;
  this->bApplyAlphaOnDisable = '\x01';
  this->bDisplayInputActionWhenNotInteractable = '\x01';
  this->bTriggerClickedAfterSelection = '\0';
  this->bToggleable = '\0';
  this->bShouldSelectUponReceivingFocus = '\0';
  this->bSelectable = '\0';
  this->bLocked = '\0';
  (this->HoldData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  this->bShouldUseFallbackDefaultInputAction = '\x01';
  this->bRequiresHold = '\0';
  this->bSimulateHoverOnTouchInput = true;
  (this->TriggeringInputAction).RowName.ComparisonIndex = 0;
  (this->TriggeringInputAction).RowName.Number = 0;
  (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->TriggeredInputAction).RowName.ComparisonIndex = 0;
  (this->TriggeredInputAction).RowName.Number = 0;
  this->bNavigateToNextWidgetOnDisable = '\0';
  *(undefined8 *)&this->OnSelectedChangedBase = 0;
  *(undefined8 *)&(this->OnSelectedChangedBase).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChangedBase).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseHovered = 0;
  *(undefined8 *)&(this->OnButtonBaseHovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnhovered = 0;
  *(undefined8 *)&(this->OnButtonBaseUnhovered).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseFocused = 0;
  *(undefined8 *)&(this->OnButtonBaseFocused).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseFocused).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnfocused = 0;
  *(undefined8 *)&(this->OnButtonBaseUnfocused).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnfocused).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseLockDoubleClicked = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseLockDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseSelected = 0;
  *(undefined8 *)&(this->OnButtonBaseSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseSelected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseUnselected = 0;
  *(undefined8 *)&(this->OnButtonBaseUnselected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseUnselected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragDetected = 0;
  *(undefined8 *)&(this->OnButtonBaseDragDetected).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragEnter = 0;
  *(undefined8 *)&(this->OnButtonBaseDragEnter).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragLeave = 0;
  *(undefined8 *)&(this->OnButtonBaseDragLeave).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDragOver = 0;
  *(undefined8 *)&(this->OnButtonBaseDragOver).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDragOver).field_0x10 = 0;
  *(undefined8 *)&this->OnButtonBaseDrop = 0;
  *(undefined8 *)&(this->OnButtonBaseDrop).field_0x8 = 0;
  *(undefined8 *)&(this->OnButtonBaseDrop).field_0x10 = 0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->TriggeringBindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->TriggeringBindingHandle).RegistrationId = -1;
  this->HoldTime = 0.0;
  this->HoldRollbackTime = 0.0;
  this->CurrentHoldTime = 0.0;
  this->CurrentHoldProgress = 0.0;
  (this->HoldTickerHandle).Object = (FElement *)0x0;
  (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HoldProgressRollbackTickerHandle).Object = (FElement *)0x0;
  (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIsPersistentBinding = false;
  this->InputModeOverride = Menu;
  FText::FText(&this->EnabledTooltipText);
  FText::FText(&this->DisabledTooltipText);
  (this->SingleMaterialStyleMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  FButtonStyle::FButtonStyle(&this->NormalStyle);
  FButtonStyle::FButtonStyle(&this->SelectedStyle);
  FButtonStyle::FButtonStyle(&this->DisabledStyle);
  FButtonStyle::FButtonStyle(&this->LockedStyle);
  (this->RootButton).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnClickedEvent = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnPressedEvent = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnPressedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnReleasedEvent = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnReleasedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnHoveredEvent = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnHoveredEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnUnhoveredEvent = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFocusReceivedEvent = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFocusReceivedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFocusLostEvent = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFocusLostEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnLockClickedEvent = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLockClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnLockDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLockDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDragDetectedEvent = 0;
  *(undefined8 *)&(this->OnDragDetectedEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragDetectedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragEnterEvent = 0;
  *(undefined8 *)&(this->OnDragEnterEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragEnterEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragLeaveEvent = 0;
  *(undefined8 *)&(this->OnDragLeaveEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragLeaveEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDragOverEvent = 0;
  *(undefined8 *)&(this->OnDragOverEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragOverEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnDropEvent = 0;
  *(undefined8 *)&(this->OnDropEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnDropEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectedChangedEvent = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnIsSelectedChangedEvent).field_0x18 = 2;
  (this->InputActionWidget).field0_0x0.DebugPtr = (UCommonActionWidget *)0x0;
  UUserWidget::SetIsFocusable((UUserWidget *)this,true);
  bVar5 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar5) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::InitIsFocusable(this_00,true);
    if (this_00[1]._padding_ != 0) {
      pbVar3 = (byte *)(this_00[1]._padding_ + 0x464);
      *pbVar3 = *pbVar3 | 1;
    }
  }
  return this;
}

// ~UCommonButtonBase @ 14a7b2170

void __thiscall UCommonButtonBase::~UCommonButtonBase(UCommonButtonBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  ITextData *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonButtonBase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnIsSelectedChangedEvent).field_0x8,
             *(int *)&(this->OnIsSelectedChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnIsSelectedChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsSelectedChangedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropEvent);
  pvVar3 = *(void **)&(this->OnDropEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragOverEvent);
  pvVar3 = *(void **)&(this->OnDragOverEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragOverEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeaveEvent);
  pvVar3 = *(void **)&(this->OnDragLeaveEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragLeaveEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnterEvent);
  pvVar3 = *(void **)&(this->OnDragEnterEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragEnterEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetectedEvent);
  pvVar3 = *(void **)&(this->OnDragDetectedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragDetectedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLockDoubleClickedEvent).field_0x8,
             *(int *)&(this->OnLockDoubleClickedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnLockDoubleClickedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLockDoubleClickedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLockClickedEvent).field_0x8,*(int *)&(this->OnLockClickedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnLockClickedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLockClickedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFocusLostEvent).field_0x8,*(int *)&(this->OnFocusLostEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnFocusLostEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFocusLostEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFocusReceivedEvent).field_0x8,
             *(int *)&(this->OnFocusReceivedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnFocusReceivedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFocusReceivedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnhoveredEvent).field_0x8,*(int *)&(this->OnUnhoveredEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnUnhoveredEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnhoveredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHoveredEvent).field_0x8,*(int *)&(this->OnHoveredEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnHoveredEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoveredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReleasedEvent).field_0x8,*(int *)&(this->OnReleasedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnReleasedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleasedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPressedEvent).field_0x8,*(int *)&(this->OnPressedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnPressedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDoubleClickedEvent).field_0x8,
             *(int *)&(this->OnDoubleClickedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnDoubleClickedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedEvent).field_0x8,*(int *)&(this->OnClickedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnClickedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedEvent);
  FButtonStyle::~FButtonStyle(&this->LockedStyle);
  FButtonStyle::~FButtonStyle(&this->DisabledStyle);
  FButtonStyle::~FButtonStyle(&this->SelectedStyle);
  FButtonStyle::~FButtonStyle(&this->NormalStyle);
  pIVar4 = (this->DisabledTooltipText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->EnabledTooltipText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pTVar5 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar6 = (this->TriggeringBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pvVar3 = *(void **)&(this->OnButtonBaseDrop).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDrop);
  pvVar3 = *(void **)&(this->OnButtonBaseDragOver).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDragOver);
  pvVar3 = *(void **)&(this->OnButtonBaseDragLeave).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDragLeave);
  pvVar3 = *(void **)&(this->OnButtonBaseDragEnter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDragEnter);
  pvVar3 = *(void **)&(this->OnButtonBaseDragDetected).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDragDetected);
  pvVar3 = *(void **)&(this->OnButtonBaseUnselected).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseUnselected);
  pvVar3 = *(void **)&(this->OnButtonBaseSelected).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseSelected);
  pvVar3 = *(void **)&(this->OnButtonBaseLockDoubleClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseLockDoubleClicked);
  pvVar3 = *(void **)&(this->OnButtonBaseLockClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseLockClicked);
  pvVar3 = *(void **)&(this->OnButtonBaseUnfocused).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseUnfocused);
  pvVar3 = *(void **)&(this->OnButtonBaseFocused).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseFocused);
  pvVar3 = *(void **)&(this->OnButtonBaseUnhovered).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseUnhovered);
  pvVar3 = *(void **)&(this->OnButtonBaseHovered).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseHovered);
  pvVar3 = *(void **)&(this->OnButtonBaseDoubleClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseDoubleClicked);
  pvVar3 = *(void **)&(this->OnButtonBaseClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonBaseClicked);
  pvVar3 = *(void **)&(this->OnSelectedChangedBase).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedChangedBase);
  UCommonUserWidget::~UCommonUserWidget((UCommonUserWidget *)this);
  return;
}

// operator() @ 14a7b5f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UCommonButtonBase::HandleImplicitFocusLost'::__l2::<lambda_1>::operator()
          (void *this,FSlateUser *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  EUINavigation EVar4;
  FSlateApplication *this_00;
  ULocalPlayer *this_01;
  UCommonUIActionRouterBase *this_02;
  TSharedPtr<FActivatableTreeRoot,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FActivatableTreeRoot *this_03;
  undefined4 local_res8 [2];
  TArray<EUINavigation,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<SWidget_const_,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  TSharedPtr<FActivatableTreeRoot,1> local_28;
  
  if ((*(longlong *)this == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pSVar1 = *(SWidget **)this;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar1 == (SWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pSVar1;
  local_48.SharedReferenceCount.ReferenceController = pTVar6;
  bVar3 = FSlateUser::IsWidgetInFocusPath(param_1,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (!bVar3) {
    return;
  }
  local_res8[0] = 0x2000301;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_58.AllocatorInstance,4,&local_58.ArrayMax);
  memcpy(local_58.AllocatorInstance.Data,local_res8,4);
  this_00 = FSlateApplication::Get();
  local_38.Object = *(SWidget **)this;
  local_38.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar4 = FSlateApplication::NavigateFromWidget(this_00,param_1->UserIndex,&local_38,&local_58);
  if (((EVar4 != Invalid) ||
      (this_01 = (ULocalPlayer *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x2e0))(),
      this_01 == (ULocalPlayer *)0x0)) ||
     (this_02 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_01),
     this_02 == (UCommonUIActionRouterBase *)0x0)) goto LAB_14a7b6126;
  this_03 = (this_02->ActiveRootNode).Object;
  if (this_03 == (FActivatableTreeRoot *)0x0) {
    pTVar5 = UCommonUIActionRouterBase::FindActiveActionDomainRootNode(this_02,&local_28);
    this_03 = pTVar5->Object;
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5->Object = (FActivatableTreeRoot *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (this_03 != (FActivatableTreeRoot *)0x0) goto LAB_14a7b6116;
  }
  else {
    pTVar6 = (this_02->ActiveRootNode).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14a7b6116:
    FActivatableTreeRoot::FocusLeafmostNode(this_03);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14a7b6126:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// BP_OnClicked @ 14a7c0ce0

void __thiscall UCommonButtonBase::BP_OnClicked(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnClicked);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnDeselected @ 14a7c0d60

void __thiscall UCommonButtonBase::BP_OnDeselected(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDeselected);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnDisabled @ 14a7c0da0

void __thiscall UCommonButtonBase::BP_OnDisabled(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDisabled);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnDoubleClicked @ 14a7c0de0

void __thiscall UCommonButtonBase::BP_OnDoubleClicked(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDoubleClicked);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnEnabled @ 14a7c0e20

void __thiscall UCommonButtonBase::BP_OnEnabled(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnEnabled);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnFocusLost @ 14a7c0e60

void __thiscall UCommonButtonBase::BP_OnFocusLost(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnFocusLost);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnFocusReceived @ 14a7c0ea0

void __thiscall UCommonButtonBase::BP_OnFocusReceived(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnFocusReceived);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnHovered @ 14a7c0f30

void __thiscall UCommonButtonBase::BP_OnHovered(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnHovered);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnInputActionTriggered @ 14a7c0f70

void __thiscall UCommonButtonBase::BP_OnInputActionTriggered(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_BP_OnInputActionTriggered);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnInputMethodChanged @ 14a7c0fb0

void __thiscall
UCommonButtonBase::BP_OnInputMethodChanged(UCommonButtonBase *this,ECommonInputType param_1)

{
  UFunction *pUVar1;
  ECommonInputType local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_BP_OnInputMethodChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// BP_OnLockClicked @ 14a7c0ff0

void __thiscall UCommonButtonBase::BP_OnLockClicked(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnLockClicked);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c101d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnLockDoubleClicked @ 14a7c1030

void __thiscall UCommonButtonBase::BP_OnLockDoubleClicked(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_BP_OnLockDoubleClicked);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c105d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnLockedChanged @ 14a7c1070

void __thiscall UCommonButtonBase::BP_OnLockedChanged(UCommonButtonBase *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnLockedChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// BP_OnPressed @ 14a7c1130

void __thiscall UCommonButtonBase::BP_OnPressed(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnPressed);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c115d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnReleased @ 14a7c1170

void __thiscall UCommonButtonBase::BP_OnReleased(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnReleased);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c119d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnRequiresHoldChanged @ 14a7c11b0

void __thiscall UCommonButtonBase::BP_OnRequiresHoldChanged(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_BP_OnRequiresHoldChanged);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c11dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnSelected @ 14a7c11f0

void __thiscall UCommonButtonBase::BP_OnSelected(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnSelected);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c121d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnUnhovered @ 14a7c1230

void __thiscall UCommonButtonBase::BP_OnUnhovered(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnUnhovered);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c125d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BindInputMethodChangedDelegate @ 14a7c17f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::BindInputMethodChangedDelegate(UCommonButtonBase *this)

{
  code *pcVar1;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  
  pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar3);
  if (this_00 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonButtonBase>
              (&this_00->OnInputMethodChangedNative,(UCommonButtonBase *)&stack0x00000008,
               (pmf_b10976d8 *)this);
    pcVar1 = *(code **)(this->_padding_ + 0x500);
    EVar2 = UCommonInputSubsystem::GetDefaultInputType(this_00);
    (*pcVar1)(this,EVar2);
  }
  return;
}

// BindTriggeringInputActionToClick @ 14a7c1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCommonButtonBase::BindTriggeringInputActionToClick(UCommonButtonBase *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FUIActionBindingHandle *pFVar4;
  undefined1 auStack_1b8 [32];
  UCommonButtonBase *local_198 [2];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  FDestructionSentinel local_150;
  FDelegateAllocation *local_138;
  undefined1 local_130 [184];
  FDelegateAllocation local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (((this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) &&
     ((this->TriggeredInputAction).RowName == (FName)0x0)) {
    bVar1 = CommonUI::IsEnhancedInputSupportEnabled();
    if ((!bVar1) ||
       (((this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr == (UInputAction *)0x0 ||
        (bVar1 = FUIActionBindingHandle::IsValid(&this->TriggeringBindingHandle), bVar1)))) {
      if (((this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) &&
         ((this->TriggeringInputAction).RowName == (FName)0x0)) {
        return;
      }
      bVar1 = FUIActionBindingHandle::IsValid(&this->TriggeringBindingHandle);
      if (bVar1) {
        return;
      }
      local_188 = _vcall__1304__flat______;
      uStack_180 = 0;
      local_168 = (undefined1  [8])0x0;
      local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_160.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
                 (FWriteAccessScope *)&local_150);
      local_138 = &local_160;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_160);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      FBindUIActionArgs::FBindUIActionArgs
                ((FBindUIActionArgs *)local_130,&this->TriggeringInputAction,false,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_168);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
                 (FWriteAccessScope *)&local_188);
      if ((local_160.DelegateSize != 0) &&
         (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_160,0,0,0x10);
        local_160.DelegateSize = 0;
      }
      if (local_178 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                   (FDestructionSentinel *)&local_188);
      }
      if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_160.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_168);
      uStack_180 = 0;
      local_188 = _vcall__1520__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_130 + 0xb0),
                 (FWriteAccessScope *)&local_150);
      local_138 = &local_78;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      uStack_180 = 0;
      local_188 = _vcall__1472__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_150);
      local_138 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      uStack_180 = 0;
      local_188 = _vcall__1480__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_50,(FWriteAccessScope *)&local_150);
      local_138 = &local_48;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UCommonButtonBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      local_130[0x78] = this->bIsPersistentBinding;
      local_130[0x7b] = (**(code **)(this->_padding_ + 0x5e8))(this);
      local_130[0x20] = this->InputModeOverride;
      pFVar4 = UCommonUserWidget::RegisterUIActionBinding
                         ((UCommonUserWidget *)this,(FUIActionBindingHandle *)local_168,
                          (FBindUIActionArgs *)local_130);
    }
    else {
      local_188 = _vcall__1304__flat______;
      uStack_180 = 0;
      local_168 = (undefined1  [8])0x0;
      local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_160.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
                 (FWriteAccessScope *)&local_150);
      local_138 = &local_160;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_160);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      FBindUIActionArgs::FBindUIActionArgs
                ((FBindUIActionArgs *)local_130,
                 (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr,false,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_168);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
                 (FWriteAccessScope *)&local_188);
      if ((local_160.DelegateSize != 0) &&
         (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_160,0,0,0x10);
        local_160.DelegateSize = 0;
      }
      if (local_178 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                   (FDestructionSentinel *)&local_188);
      }
      if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_160.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_168);
      uStack_180 = 0;
      local_188 = _vcall__1520__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_130 + 0xb0),
                 (FWriteAccessScope *)&local_150);
      local_138 = &local_78;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      uStack_180 = 0;
      local_188 = _vcall__1472__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_150);
      local_138 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      uStack_180 = 0;
      local_188 = _vcall__1480__flat______;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_50,(FWriteAccessScope *)&local_150);
      local_138 = &local_48;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_198[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
        puVar2[4] = local_188;
        puVar2[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_150.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
      }
      local_130[0x78] = this->bIsPersistentBinding;
      local_130[0x20] = this->InputModeOverride;
      pFVar4 = UCommonUserWidget::RegisterUIActionBinding
                         ((UCommonUserWidget *)this,(FUIActionBindingHandle *)local_168,
                          (FBindUIActionArgs *)local_130);
    }
    FUIActionBindingHandle::operator=(&this->TriggeringBindingHandle,pFVar4);
    if ((atomic<unsigned___int64>)local_168 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_168);
    }
    FBindUIActionArgs::~FBindUIActionArgs((FBindUIActionArgs *)local_130);
  }
  return;
}

// BuildStyles @ 14a7c2f60

void __thiscall UCommonButtonBase::BuildStyles(UCommonButtonBase *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UCommonButtonStyle *pUVar5;
  UClass *pUVar6;
  UMaterialInstanceDynamic *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  FSlateBrush *pFVar12;
  FSlateSound *this_00;
  FSlateSound *pFVar13;
  FSlateSound *this_01;
  FSlateBrush local_e8;
  
  pUVar5 = GetStyleCDO(this);
  if (pUVar5 == (UCommonButtonStyle *)0x0) {
    return;
  }
  FSlateBrush::FSlateBrush(&local_e8);
  if (pUVar5->bSingleMaterial == false) {
    (this->SingleMaterialStyleMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    goto LAB_14a7c3073;
  }
  FSlateBrush::operator=(&local_e8,&pUVar5->SingleMaterialBrush);
  if (local_e8.ResourceObject.field0_0x0.DebugPtr == (TObjectPtr<UObject>_u_0)0x0) {
LAB_14a7c3021:
    pUVar7 = (UMaterialInstanceDynamic *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)local_e8.ResourceObject.field0_0x0 + 0x10) + 0x38) < iVar1
        ) || ((longlong *)
              *(undefined1 **)
               (*(longlong *)
                 (*(longlong *)((longlong)local_e8.ResourceObject.field0_0x0 + 0x10) + 0x30) +
               (longlong)iVar1 * 8) != &pUVar6->_padding_)) goto LAB_14a7c3021;
    pUVar7 = UMaterialInstanceDynamic::Create
                       ((UMaterialInterface *)local_e8.ResourceObject.field0_0x0,(UObject *)this,
                        (FName)0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar7 == (UMaterialInstanceDynamic *)0x0)) {
    (this->SingleMaterialStyleMID).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 != (UMaterialInstanceDynamic *)0x0) {
      FSlateBrush::SetResourceObject(&local_e8,(UObject *)pUVar7);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->SingleMaterialStyleMID).field0_0x0.DebugPtr = pUVar7;
    FSlateBrush::SetResourceObject(&local_e8,(UObject *)pUVar7);
  }
LAB_14a7c3073:
  pFVar13 = &this->PressedSlateSoundOverride;
  pUVar8 = FSlateSound::GetResourceObject(pFVar13);
  this_00 = &this->ClickedSlateSoundOverride;
  pUVar9 = FSlateSound::GetResourceObject(this_00);
  this_01 = &this->HoveredSlateSoundOverride;
  pUVar10 = FSlateSound::GetResourceObject(this_01);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->NormalBase;
  }
  FSlateBrush::operator=(&(this->NormalStyle).Normal,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->NormalHovered;
  }
  FSlateBrush::operator=(&(this->NormalStyle).Hovered,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->NormalPressed;
  }
  FSlateBrush::operator=(&(this->NormalStyle).Pressed,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->Disabled;
  }
  FSlateBrush::operator=(&(this->NormalStyle).Disabled,pFVar12);
  fVar2 = (pUVar5->ButtonPadding).Top;
  fVar3 = (pUVar5->ButtonPadding).Right;
  fVar4 = (pUVar5->ButtonPadding).Bottom;
  (this->NormalStyle).NormalPadding.Left = (pUVar5->ButtonPadding).Left;
  (this->NormalStyle).NormalPadding.Top = fVar2;
  (this->NormalStyle).NormalPadding.Right = fVar3;
  (this->NormalStyle).NormalPadding.Bottom = fVar4;
  fVar2 = (pUVar5->ButtonPadding).Top;
  fVar3 = (pUVar5->ButtonPadding).Right;
  fVar4 = (pUVar5->ButtonPadding).Bottom;
  (this->NormalStyle).PressedPadding.Left = (pUVar5->ButtonPadding).Left;
  (this->NormalStyle).PressedPadding.Top = fVar2;
  (this->NormalStyle).PressedPadding.Right = fVar3;
  (this->NormalStyle).PressedPadding.Bottom = fVar4;
  if (pUVar8 == (UObject *)0x0) {
    pFVar13 = &pUVar5->PressedSlateSound;
  }
  FSlateSound::operator=(&(this->NormalStyle).PressedSlateSound,pFVar13);
  if (pUVar9 == (UObject *)0x0) {
    this_00 = &pUVar5->ClickedSlateSound;
  }
  FSlateSound::operator=(&(this->NormalStyle).ClickedSlateSound,this_00);
  if (pUVar10 == (UObject *)0x0) {
    this_01 = &pUVar5->HoveredSlateSound;
  }
  FSlateSound::operator=(&(this->NormalStyle).HoveredSlateSound,this_01);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->SelectedBase;
  }
  FSlateBrush::operator=(&(this->SelectedStyle).Normal,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->SelectedHovered;
  }
  FSlateBrush::operator=(&(this->SelectedStyle).Hovered,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->SelectedPressed;
  }
  FSlateBrush::operator=(&(this->SelectedStyle).Pressed,pFVar12);
  pFVar12 = &local_e8;
  if (pUVar5->bSingleMaterial == false) {
    pFVar12 = &pUVar5->Disabled;
  }
  FSlateBrush::operator=(&(this->SelectedStyle).Disabled,pFVar12);
  fVar2 = (pUVar5->ButtonPadding).Top;
  fVar3 = (pUVar5->ButtonPadding).Right;
  fVar4 = (pUVar5->ButtonPadding).Bottom;
  (this->SelectedStyle).NormalPadding.Left = (pUVar5->ButtonPadding).Left;
  (this->SelectedStyle).NormalPadding.Top = fVar2;
  (this->SelectedStyle).NormalPadding.Right = fVar3;
  (this->SelectedStyle).NormalPadding.Bottom = fVar4;
  fVar2 = (pUVar5->ButtonPadding).Top;
  fVar3 = (pUVar5->ButtonPadding).Right;
  fVar4 = (pUVar5->ButtonPadding).Bottom;
  (this->SelectedStyle).PressedPadding.Left = (pUVar5->ButtonPadding).Left;
  (this->SelectedStyle).PressedPadding.Top = fVar2;
  (this->SelectedStyle).PressedPadding.Right = fVar3;
  (this->SelectedStyle).PressedPadding.Bottom = fVar4;
  FButtonStyle::operator=(&this->DisabledStyle,&this->NormalStyle);
  pFVar13 = &this->SelectedPressedSlateSoundOverride;
  pUVar11 = FSlateSound::GetResourceObject(pFVar13);
  if ((pUVar11 == (UObject *)0x0) &&
     ((pUVar8 != (UObject *)0x0 ||
      (pFVar13 = &(pUVar5->SelectedPressedSlateSound).Sound,
      (pUVar5->SelectedPressedSlateSound).bHasSound == false)))) {
    pFVar13 = &(this->NormalStyle).PressedSlateSound;
  }
  FSlateSound::operator=(&(this->SelectedStyle).PressedSlateSound,pFVar13);
  pFVar13 = &this->SelectedClickedSlateSoundOverride;
  pUVar8 = FSlateSound::GetResourceObject(pFVar13);
  if ((pUVar8 == (UObject *)0x0) &&
     ((pUVar9 != (UObject *)0x0 ||
      (pFVar13 = &(pUVar5->SelectedClickedSlateSound).Sound,
      (pUVar5->SelectedClickedSlateSound).bHasSound == false)))) {
    pFVar13 = &(this->NormalStyle).ClickedSlateSound;
  }
  FSlateSound::operator=(&(this->SelectedStyle).ClickedSlateSound,pFVar13);
  pFVar13 = &this->SelectedHoveredSlateSoundOverride;
  pUVar8 = FSlateSound::GetResourceObject(pFVar13);
  if ((pUVar8 == (UObject *)0x0) &&
     ((pUVar10 != (UObject *)0x0 ||
      (pFVar13 = &(pUVar5->SelectedHoveredSlateSound).Sound,
      (pUVar5->SelectedHoveredSlateSound).bHasSound == false)))) {
    pFVar13 = &(this->NormalStyle).HoveredSlateSound;
  }
  FSlateSound::operator=(&(this->SelectedStyle).HoveredSlateSound,pFVar13);
  FButtonStyle::operator=(&this->LockedStyle,&this->NormalStyle);
  pFVar13 = &this->LockedPressedSlateSoundOverride;
  if (((pUVar5->LockedPressedSlateSound).bHasSound != false) ||
     (pUVar8 = FSlateSound::GetResourceObject(pFVar13), pUVar8 != (UObject *)0x0)) {
    pUVar8 = FSlateSound::GetResourceObject(pFVar13);
    if (pUVar8 == (UObject *)0x0) {
      pFVar13 = &(pUVar5->LockedPressedSlateSound).Sound;
    }
    FSlateSound::operator=(&(this->LockedStyle).PressedSlateSound,pFVar13);
  }
  pFVar13 = &this->LockedClickedSlateSoundOverride;
  if (((pUVar5->LockedClickedSlateSound).bHasSound != false) ||
     (pUVar8 = FSlateSound::GetResourceObject(pFVar13), pUVar8 != (UObject *)0x0)) {
    pUVar8 = FSlateSound::GetResourceObject(pFVar13);
    if (pUVar8 == (UObject *)0x0) {
      pFVar13 = &(pUVar5->LockedClickedSlateSound).Sound;
    }
    FSlateSound::operator=(&(this->LockedStyle).ClickedSlateSound,pFVar13);
  }
  pFVar13 = &this->LockedHoveredSlateSoundOverride;
  if (((pUVar5->LockedHoveredSlateSound).bHasSound != false) ||
     (pUVar8 = FSlateSound::GetResourceObject(pFVar13), pUVar8 != (UObject *)0x0)) {
    pUVar8 = FSlateSound::GetResourceObject(pFVar13);
    if (pUVar8 == (UObject *)0x0) {
      pFVar13 = &(pUVar5->LockedHoveredSlateSound).Sound;
    }
    FSlateSound::operator=(&(this->LockedStyle).HoveredSlateSound,pFVar13);
  }
  SetButtonStyle(this);
  RefreshDimensions(this);
  local_e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// ClearSelection @ 14a7c4760

void __thiscall UCommonButtonBase::ClearSelection(UCommonButtonBase *this)

{
  SetSelectedInternal(this,false,false,true);
  return;
}

// ConstructInternalButton @ 14a7c7890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCommonButtonInternalBase * __thiscall
UCommonButtonBase::ConstructInternalButton(UCommonButtonBase *this)

{
  int iVar1;
  UObject *pUVar2;
  FName FVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UCommonButtonInternalBase *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = (UObject *)this->_padding_;
  pFVar5 = ::FName::FName(local_a8,L"InternalRootButtonBase");
  FVar3 = *pFVar5;
  pUVar6 = UCommonButtonInternalBase::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) {
      return (UCommonButtonInternalBase *)0x0;
    }
  }
  else {
    if (pUVar6 == (UClass *)0x0) {
      return (UCommonButtonInternalBase *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = UCommonButtonInternalBase::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
    return (UCommonButtonInternalBase *)0x0;
  }
  iVar1 = (int)pUVar7->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return (UCommonButtonInternalBase *)0x0;
  }
  pUVar7 = UCommonButtonInternalBase::StaticClass();
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a7c7962;
  }
  pUVar6 = (UClass *)0x0;
LAB_14a7c7962:
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = UCommonButtonInternalBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar2;
  local_98._16_8_ = FVar3;
  pUVar8 = (UCommonButtonInternalBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
    return pUVar8;
  }
  return pUVar8;
}

// DisableButton @ 14a7d3c30

void __thiscall UCommonButtonBase::DisableButton(UCommonButtonBase *this)

{
  longlong lVar1;
  UCommonActionWidget *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  
  if (this->bButtonEnabled != '\0') {
    this->field_0x4e1 = this->field_0x4e1 & 0xfd;
    bVar3 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      lVar1 = *(longlong *)&pUVar4[0x2d].field_0x10;
      pUVar4[0x2c].field_0x20 = 0;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x4c8) = 0;
      }
    }
    SetButtonStyle(this);
    (**(code **)(this->_padding_ + 0x5d8))(this);
    if ((this->InputActionWidget).field0_0x0.DebugPtr != (UCommonActionWidget *)0x0) {
      (**(code **)(this->_padding_ + 0x530))(this);
      pUVar2 = (this->InputActionWidget).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014a7d3cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,this->bButtonEnabled);
      return;
    }
  }
  return;
}

// DisableButtonWithReason @ 14a7d3cf0

void __thiscall UCommonButtonBase::DisableButtonWithReason(UCommonButtonBase *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DisabledTooltipText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisabledTooltipText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisabledTooltipText).Flags = param_1->Flags;
                    /* WARNING: Could not recover jumptable at 0x00014a7d3d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,0);
  return;
}

// EnableButton @ 14a7d4a70

void __thiscall UCommonButtonBase::EnableButton(UCommonButtonBase *this)

{
  longlong lVar1;
  UCommonActionWidget *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  
  if (this->bButtonEnabled == '\0') {
    this->field_0x4e1 = this->field_0x4e1 | 2;
    bVar3 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      lVar1 = *(longlong *)&pUVar4[0x2d].field_0x10;
      pUVar4[0x2c].field_0x20 = 1;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x4c8) = 1;
      }
    }
    SetButtonStyle(this);
    (**(code **)(this->_padding_ + 0x5d0))(this);
    if ((this->InputActionWidget).field0_0x0.DebugPtr != (UCommonActionWidget *)0x0) {
      (**(code **)(this->_padding_ + 0x530))(this);
      pUVar2 = (this->InputActionWidget).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014a7d4b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,this->bButtonEnabled);
      return;
    }
  }
  return;
}

// ExecuteTriggeredInput @ 14a7daff0

void __thiscall UCommonButtonBase::ExecuteTriggeredInput(UCommonButtonBase *this)

{
  return;
}

// GetButtonAnalyticInfo @ 14a7e0d20

bool __thiscall
UCommonButtonBase::GetButtonAnalyticInfo
          (UCommonButtonBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  FName local_res8;
  
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,param_1);
  ::FString::operator=(param_2,L"None");
  ::FString::operator=(param_3,L"None");
  return true;
}

// GetConvertInputActionToHold @ 14a7e1610

bool __thiscall UCommonButtonBase::GetConvertInputActionToHold(UCommonButtonBase *this)

{
  return this->bRequiresHold;
}

// GetCurrentButtonPadding @ 14a7e1630

void __thiscall UCommonButtonBase::GetCurrentButtonPadding(UCommonButtonBase *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UCommonButtonStyle *pUVar4;
  
  pUVar4 = GetStyleCDO(this);
  if (pUVar4 != (UCommonButtonStyle *)0x0) {
    fVar1 = (pUVar4->ButtonPadding).Top;
    fVar2 = (pUVar4->ButtonPadding).Right;
    fVar3 = (pUVar4->ButtonPadding).Bottom;
    param_1->Left = (pUVar4->ButtonPadding).Left;
    param_1->Top = fVar1;
    param_1->Right = fVar2;
    param_1->Bottom = fVar3;
  }
  return;
}

// GetCurrentCustomPadding @ 14a7e1660

void __thiscall UCommonButtonBase::GetCurrentCustomPadding(UCommonButtonBase *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UCommonButtonStyle *pUVar4;
  
  pUVar4 = GetStyleCDO(this);
  if (pUVar4 != (UCommonButtonStyle *)0x0) {
    fVar1 = (pUVar4->CustomPadding).Top;
    fVar2 = (pUVar4->CustomPadding).Right;
    fVar3 = (pUVar4->CustomPadding).Bottom;
    param_1->Left = (pUVar4->CustomPadding).Left;
    param_1->Top = fVar1;
    param_1->Right = fVar2;
    param_1->Bottom = fVar3;
  }
  return;
}

// GetCurrentTextStyle @ 14a7e1810

UCommonTextStyle * __thiscall UCommonButtonBase::GetCurrentTextStyle(UCommonButtonBase *this)

{
  char cVar1;
  UCommonButtonStyle *this_00;
  UCommonTextStyle *pUVar2;
  
  this_00 = GetStyleCDO(this);
  if (this_00 == (UCommonButtonStyle *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  if (this->bButtonEnabled == '\0') {
    pUVar2 = UCommonButtonStyle::GetDisabledTextStyle(this_00);
  }
  else {
    if (this->bSelected == 0) goto LAB_14a7e186d;
    cVar1 = (**(code **)(this->_padding_ + 0x2c8))(this);
    if ((cVar1 != '\0') &&
       (pUVar2 = UCommonButtonStyle::GetSelectedHoveredTextStyle(this_00),
       pUVar2 != (UCommonTextStyle *)0x0)) {
      return pUVar2;
    }
    pUVar2 = UCommonButtonStyle::GetSelectedTextStyle(this_00);
  }
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    return pUVar2;
  }
LAB_14a7e186d:
  cVar1 = (**(code **)(this->_padding_ + 0x2c8))(this);
  if ((cVar1 != '\0') &&
     (pUVar2 = UCommonButtonStyle::GetNormalHoveredTextStyle(this_00),
     pUVar2 != (UCommonTextStyle *)0x0)) {
    return pUVar2;
  }
  pUVar2 = UCommonButtonStyle::GetNormalTextStyle(this_00);
  return pUVar2;
}

// GetCurrentTextStyleClass @ 14a7e18b0

TSubclassOf<UCommonTextStyle> __thiscall
UCommonButtonBase::GetCurrentTextStyleClass(UCommonButtonBase *this)

{
  UObject *pUVar1;
  UCommonTextStyle *pUVar2;
  TObjectPtr<UClass> in_RDX;
  
  pUVar2 = GetCurrentTextStyle(this);
  if (pUVar2 == (UCommonTextStyle *)0x0) {
    *(undefined8 *)in_RDX.field0_0x0 = 0;
  }
  else {
    pUVar1 = *(UObject **)&pUVar2->field_0x10;
    *(UObject **)in_RDX.field0_0x0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TSubclassOf<UCommonTextStyle>)in_RDX.field0_0x0;
    }
  }
  return (TSubclassOf<UCommonTextStyle>)in_RDX.field0_0x0.DebugPtr;
}

// GetEnhancedInputAction @ 14a7e2240

UInputAction * __thiscall UCommonButtonBase::GetEnhancedInputAction(UCommonButtonBase *this)

{
  return (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr;
}

// GetFieldNotificationDescriptor @ 14a7e23d0

IClassDescriptor * __thiscall
UCommonButtonBase::GetFieldNotificationDescriptor(UCommonButtonBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UCommonButtonBase::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetInputAction @ 14a7e2d50

bool __thiscall
UCommonButtonBase::GetInputAction(UCommonButtonBase *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  bool bVar2;
  bool bVar3;
  
  pUVar1 = (this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr;
  if ((pUVar1 == (UDataTable *)0x0) && ((this->TriggeringInputAction).RowName == (FName)0x0)) {
    bVar2 = false;
  }
  else if (((this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) &&
          ((this->TriggeredInputAction).RowName == (FName)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((pUVar1 == (UDataTable *)0x0) && ((this->TriggeringInputAction).RowName == (FName)0x0)) &&
      ((this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0)) &&
     ((this->TriggeredInputAction).RowName == (FName)0x0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar2) && (!bVar3)) {
    if ((pUVar1 == (UDataTable *)0x0) && ((this->TriggeringInputAction).RowName == (FName)0x0)) {
      FDataTableRowHandle::operator=(param_1,&this->TriggeredInputAction);
      return true;
    }
    FDataTableRowHandle::operator=(param_1,&this->TriggeringInputAction);
    return true;
  }
  return false;
}

// GetIsFocusable @ 14a7e3200

bool __thiscall UCommonButtonBase::GetIsFocusable(UCommonButtonBase *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 4) & 1);
}

// GetLocked @ 14a7e33d0

bool __thiscall UCommonButtonBase::GetLocked(UCommonButtonBase *this)

{
  return this->bLocked;
}

// GetPrivateStaticClass @ 14a7e50b0

UClass * __cdecl UCommonButtonBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonButtonBase",
               &Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton,
               StaticRegisterNativesUCommonButtonBase,0x1750,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonButtonBase>,
               InternalVTableHelperCtorCaller<UCommonButtonBase>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonButtonBase.InnerSingleton;
}

// GetSelected @ 14a7e76b0

bool __thiscall UCommonButtonBase::GetSelected(UCommonButtonBase *this)

{
  return this->bSelected;
}

// GetShouldSelectUponReceivingFocus @ 14a7e7d20

bool __thiscall UCommonButtonBase::GetShouldSelectUponReceivingFocus(UCommonButtonBase *this)

{
  return this->bShouldSelectUponReceivingFocus;
}

// GetSingleMaterialStyleMID @ 14a7e86d0

UMaterialInstanceDynamic * __thiscall
UCommonButtonBase::GetSingleMaterialStyleMID(UCommonButtonBase *this)

{
  return (this->SingleMaterialStyleMID).field0_0x0.DebugPtr;
}

// GetStyle @ 14a7e88a0

UCommonButtonStyle * __thiscall UCommonButtonBase::GetStyle(UCommonButtonBase *this)

{
  int iVar1;
  UCommonButtonStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar4 = UCommonButtonStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar4 = UCommonButtonStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e8a34;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e8a34:
  pUVar2 = (UCommonButtonStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonButtonStyle *)0x0) {
    pUVar5 = UCommonButtonStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonButtonStyle *)0x0;
}

// GetStyleCDO @ 14a7e89a0

UCommonButtonStyle * __thiscall UCommonButtonBase::GetStyleCDO(UCommonButtonBase *this)

{
  int iVar1;
  UCommonButtonStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar4 = UCommonButtonStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonButtonStyle *)0x0;
  }
  pUVar4 = UCommonButtonStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e8a34;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e8a34:
  pUVar2 = (UCommonButtonStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonButtonStyle *)0x0) {
    pUVar5 = UCommonButtonStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonButtonStyle *)0x0;
}

// HandleButtonClicked @ 14a7ea8a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::HandleButtonClicked(UCommonButtonBase *this)

{
  undefined1 *puVar1;
  ESlateVisibility EVar2;
  bool bVar3;
  
  EVar2 = UWidget::GetVisibility((UWidget *)this);
  bVar3 = UWidget::GetIsEnabled((UWidget *)this);
  if (bVar3) {
    if (((this->bButtonEnabled == '\x01' && this->bInteractionEnabled == '\x01') &&
        (1 < (byte)(EVar2 - Collapsed))) &&
       ((this->bRequiresHold == '\0' ||
        (__real_3f800000 < this->CurrentHoldProgress || __real_3f800000 == this->CurrentHoldProgress
        )))) {
      if (this->bTriggerClickedAfterSelection == '\0') {
        (**(code **)(this->_padding_ + 0x5b0))();
        SetIsSelected(this,(bool)(~this->bSelected & 1),false);
      }
      else {
        SetIsSelected(this,(bool)(~this->bSelected & 1),false);
        (**(code **)(this->_padding_ + 0x5b0))(this);
      }
      (**(code **)(this->_padding_ + 0x528))(this);
      (**(code **)(this->_padding_ + 0x610))(this);
    }
  }
  return;
}

// HandleButtonDoubleClicked @ 14a7eab60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonBase::HandleButtonDoubleClicked(UCommonButtonBase *this,FReply *__return_storage_ptr__)

{
  uint uVar1;
  FReply *this_00;
  uint uVar2;
  FReply local_178;
  FReply local_c0;
  
  this->bStopDoubleClickPropagation = 0;
  (**(code **)(this->_padding_ + 0x5b8))();
  uVar1 = this->bStopDoubleClickPropagation;
  uVar2 = (uVar1 ^ 1) + 1;
  this_00 = &local_178;
  if (uVar1 != 0) {
    this_00 = &local_c0;
  }
  FReply::FReply(this_00,SUB41(uVar1,0));
  FReply::FReply(__return_storage_ptr__,this_00);
  if ((uVar2 & 2) != 0) {
    FReply::~FReply(&local_178);
  }
  if ((uVar2 & 1) != 0) {
    FReply::~FReply(&local_c0);
  }
  return __return_storage_ptr__;
}

// HandleButtonDragDetected @ 14a7eac00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UCommonButtonBase::HandleButtonDragDetected
          (UCommonButtonBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res8;
  FReadAccessScope local_28;
  
  local_res8 = 0;
  (**(code **)(this->_padding_ + 0x438))(this,param_1,param_2,&local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetectedEvent,
             &local_28);
  if (((*(int *)&(this->OnDragDetectedEvent).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnDragDetectedEvent).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnDragDetectedEvent,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// HandleButtonDragEnter @ 14a7eacc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonButtonBase::HandleButtonDragEnter
          (UCommonButtonBase *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  TSharedPtr<FUMGDragDropOp,1> local_38;
  FReadAccessScope local_28;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_2,&local_38);
  if (local_38.Object != (FUMGDragDropOp *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x440);
    if (local_38.Object == (FUMGDragDropOp *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*pcVar1)(this,param_1,param_2,((local_38.Object)->DragOperation).field0_0x0.DebugPtr);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnterEvent,
             &local_28);
  if ((*(int *)&(this->OnDragEnterEvent).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDragEnterEvent).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// HandleButtonDragLeave @ 14a7eadb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonButtonBase::HandleButtonDragLeave(UCommonButtonBase *this,FDragDropEvent *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  TSharedPtr<FUMGDragDropOp,1> local_38;
  FReadAccessScope local_28;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_1,&local_38);
  if (local_38.Object != (FUMGDragDropOp *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x448);
    if (local_38.Object == (FUMGDragDropOp *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*pcVar1)(this,param_1,((local_38.Object)->DragOperation).field0_0x0.DebugPtr);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeaveEvent,
             &local_28);
  if ((*(int *)&(this->OnDragLeaveEvent).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDragLeaveEvent).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// HandleButtonDragOver @ 14a7eae90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonButtonBase::HandleButtonDragOver
          (UCommonButtonBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FUMGDragDropOp,1> local_48;
  FReadAccessScope local_38;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_2,&local_48);
  if (local_48.Object == (FUMGDragDropOp *)0x0) {
LAB_14a7eaf26:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDragOverEvent,
               &local_38);
    if ((*(int *)&(this->OnDragOverEvent).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnDragOverEvent).field_0x8, plVar2 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar2 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
        ::Execute(&this->OnDragOverEvent,__return_storage_ptr__,param_1,param_2);
        goto LAB_14a7eaf8b;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    bVar3 = false;
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x450);
    if (local_48.Object == (FUMGDragDropOp *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar1)();
        return pFVar5;
      }
    }
    cVar4 = (*pcVar1)(this,param_1,param_2,((local_48.Object)->DragOperation).field0_0x0.DebugPtr);
    if (cVar4 == '\0') goto LAB_14a7eaf26;
    bVar3 = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
LAB_14a7eaf8b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleButtonDrop @ 14a7eafc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonButtonBase::HandleButtonDrop
          (UCommonButtonBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  FReply *pFVar5;
  TSharedPtr<FUMGDragDropOp,1> local_48;
  FReadAccessScope local_38;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_2,&local_48);
  if (local_48.Object == (FUMGDragDropOp *)0x0) {
LAB_14a7eb056:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDropEvent,
               &local_38);
    if ((*(int *)&(this->OnDropEvent).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnDropEvent).field_0x8, plVar2 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar2 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
        ::Execute(&this->OnDropEvent,__return_storage_ptr__,param_1,param_2);
        goto LAB_14a7eb0bb;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    bVar3 = false;
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x458);
    if (local_48.Object == (FUMGDragDropOp *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar1)();
        return pFVar5;
      }
    }
    cVar4 = (*pcVar1)(this,param_1,param_2,((local_48.Object)->DragOperation).field0_0x0.DebugPtr);
    if (cVar4 == '\0') goto LAB_14a7eb056;
    bVar3 = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
LAB_14a7eb0bb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleButtonPressed @ 14a7eb150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::HandleButtonPressed(UCommonButtonBase *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  char cVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  ECommonInputType EVar8;
  bool bVar9;
  ULocalPlayer *pUVar10;
  UCommonInputSubsystem *this_00;
  FTSTicker *this_01;
  undefined8 *puVar11;
  ulong64 uVar12;
  TWeakPtr<FTSTicker::FElement,1> *pTVar13;
  UCommonButtonBase *local_res8;
  FElement *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  bool local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  longlong local_78 [2];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  (**(code **)(this->_padding_ + 0x5c0))();
  pUVar10 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  UCommonInputSubsystem::Get(pUVar10);
  pUVar10 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_00 = UCommonInputSubsystem::Get(pUVar10);
  if (((this_00 == (UCommonInputSubsystem *)0x0) ||
      (EVar8 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar8 != Touch)) ||
     (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 0)) goto LAB_14a7eb1d8;
  if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 2) {
    cVar5 = this->bSimulateHoverOnTouchInput;
joined_r0x00014a7eb1ca:
    if (cVar5 == '\0') goto LAB_14a7eb1d8;
  }
  else if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1) {
    cVar5 = this->bSimulateHoverOnTouchInput;
    goto joined_r0x00014a7eb1ca;
  }
  (**(code **)(this->_padding_ + 0x5a0))(this);
LAB_14a7eb1d8:
  if ((this->bRequiresHold != '\0') && (0.0 < this->HoldTime)) {
    this_01 = FTSTicker::GetCoreTicker();
    pTStack_a0 = (TReferenceControllerBase<1> *)
                 ((ulonglong)local_88.WeakReferenceCount.ReferenceController._4_4_ << 0x20);
    local_68 = (undefined1  [8])0x0;
    local_a8 = (FElement *)_vcall__1528__flat______;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res8);
      puVar11[4] = local_a8;
      puVar11[5] = pTStack_a0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar13 = FTSTicker::AddTicker
                        (this_01,&local_88,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
    if (&this->HoldTickerHandle != pTVar13) {
      (this->HoldTickerHandle).Object = pTVar13->Object;
      pTVar13->Object = (FElement *)0x0;
      pTVar6 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
      (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
           (pTVar13->WeakReferenceCount).ReferenceController;
      (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    }
    plVar7 = (longlong *)
             CONCAT44(local_88.WeakReferenceCount.ReferenceController._4_4_,
                      local_88.WeakReferenceCount.ReferenceController._0_4_);
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
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_a8);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_98 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_a0,(FDestructionSentinel *)&local_a8);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    pTVar13 = &this->HoldProgressRollbackTickerHandle;
    if (((pTVar13->Object != (FElement *)0x0) &&
        (pTVar6 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController,
        pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
      local_a8 = pTVar13->Object;
      pTStack_a0 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_a0->WeakReferenceCount = (atomic<int>)((int)pTStack_a0->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&local_a8);
      if (pTVar13 != (TWeakPtr<FTSTicker::FElement,1> *)local_78) {
        pTVar6 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
        pTVar13->Object = (FElement *)0x0;
        (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
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
      }
    }
  }
  bVar9 = FUIActionBindingHandle::IsValid(&this->TriggeringBindingHandle);
  if (bVar9) {
    FUIActionBindingHandle::ResetHold(&this->TriggeringBindingHandle);
  }
  return;
}

// HandleButtonReleased @ 14a7eb490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::HandleButtonReleased(UCommonButtonBase *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  char cVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  ECommonInputType EVar8;
  ULocalPlayer *pUVar9;
  UCommonInputSubsystem *this_00;
  FTSTicker *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<FTSTicker::FElement,1> *pTVar12;
  UCommonButtonBase *local_res8;
  FElement *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  bool local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  undefined8 local_78 [2];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  (**(code **)(this->_padding_ + 0x5c8))();
  pUVar9 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  UCommonInputSubsystem::Get(pUVar9);
  pUVar9 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_00 = UCommonInputSubsystem::Get(pUVar9);
  if (((this_00 == (UCommonInputSubsystem *)0x0) ||
      (EVar8 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar8 != Touch)) ||
     (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 0)) goto LAB_14a7eb518;
  if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 2) {
    cVar5 = this->bSimulateHoverOnTouchInput;
joined_r0x00014a7eb50a:
    if (cVar5 == '\0') goto LAB_14a7eb518;
  }
  else if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1) {
    cVar5 = this->bSimulateHoverOnTouchInput;
    goto joined_r0x00014a7eb50a;
  }
  (**(code **)(this->_padding_ + 0x5a8))(this);
LAB_14a7eb518:
  if ((this->bRequiresHold != '\0') && (0.0 < this->HoldTime)) {
    if (this->HoldRollbackTime <= __real_322bcc77) {
                    /* WARNING: Could not recover jumptable at 0x00014a7eb565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x610))(this);
      return;
    }
    this_01 = FTSTicker::GetCoreTicker();
    pTStack_a0 = (TReferenceControllerBase<1> *)
                 ((ulonglong)local_88.WeakReferenceCount.ReferenceController._4_4_ << 0x20);
    local_68 = (undefined1  [8])0x0;
    local_a8 = (FElement *)_vcall__1536__flat______;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
      puVar10[4] = local_a8;
      puVar10[5] = pTStack_a0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar12 = FTSTicker::AddTicker
                        (this_01,&local_88,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
    TWeakPtr<FTSTicker::FElement,1>::operator=(&this->HoldProgressRollbackTickerHandle,pTVar12);
    plVar7 = (longlong *)
             CONCAT44(local_88.WeakReferenceCount.ReferenceController._4_4_,
                      local_88.WeakReferenceCount.ReferenceController._0_4_);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_a8);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_98 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_a0,(FDestructionSentinel *)&local_a8);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    pTVar12 = &this->HoldTickerHandle;
    local_a8 = pTVar12->Object;
    pTStack_a0 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
    if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_a0->WeakReferenceCount = (atomic<int>)((int)pTStack_a0->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker((TWeakPtr<FTSTicker::FElement,1> *)&local_a8);
    if (pTVar12 != (TWeakPtr<FTSTicker::FElement,1> *)local_78) {
      pTVar6 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar12->Object = (FElement *)0x0;
      (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
  }
  return;
}

// HandleFocusLost @ 14a7eca10

void __thiscall UCommonButtonBase::HandleFocusLost(UCommonButtonBase *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  UFunction *pUVar5;
  FMRSWRecursiveAccessDetector local_res8;
  FReadAccessScope local_28;
  
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnFocusLostEvent);
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
    puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_28.DestructionSentinel.Accessor = &local_res8;
    local_28.DestructionSentinel._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar3);
    if (*(char *)(pFVar4 + 4) == '\0') {
      pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnFocusLost);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar5,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnButtonBaseUnfocused,&local_28);
      iVar1 = *(int *)&(this->OnButtonBaseUnfocused).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar1) {
        local_res8.State = (atomic<unsigned___int64>)this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnButtonBaseUnfocused,&local_res8);
      }
    }
  }
  return;
}

// HandleFocusReceived @ 14a7ecb00

void __thiscall UCommonButtonBase::HandleFocusReceived(UCommonButtonBase *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  UFunction *pUVar5;
  FMRSWRecursiveAccessDetector local_res8;
  FReadAccessScope local_28;
  
  if ((this->bShouldSelectUponReceivingFocus != '\0') && (this->bSelected == 0)) {
    SetIsSelected(this,true,false);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnFocusReceivedEvent);
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
    puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_28.DestructionSentinel.Accessor = &local_res8;
    local_28.DestructionSentinel._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar3);
    if (*(char *)(pFVar4 + 4) == '\0') {
      pUVar5 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UCommonButtonBase_BP_OnFocusReceived);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar5,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnButtonBaseFocused,&local_28);
      iVar1 = *(int *)&(this->OnButtonBaseFocused).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar1) {
        local_res8.State = (atomic<unsigned___int64>)this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnButtonBaseFocused,&local_res8);
      }
    }
  }
  return;
}

// HandleImplicitFocusLost @ 14a7ecc00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::HandleImplicitFocusLost(UCommonButtonBase *this)

{
  bool bVar1;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_48;
  code *local_38;
  SWidget **local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  UCommonButtonBase *local_18;
  
  if (this->bNavigateToNextWidgetOnDisable != 0) {
    bVar1 = UWidget::GetIsEnabled((UWidget *)this);
    if ((bVar1) && (bVar1 = UWidget::IsVisible((UWidget *)this), bVar1)) {
      return;
    }
    UWidget::GetCachedWidget((UWidget *)this,&local_48);
    if ((local_48.Object != (SWidget *)0x0) &&
       (bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr), bVar1)) {
      this_00 = FSlateApplication::Get();
      local_28 = local_48.Object;
      local_20 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = &local_28;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UCommonButtonBase::HandleImplicitFocusLost'::__l2::<lambda_1>,void,FSlateUser_&>
                 ::Call;
      local_18 = this;
      FSlateApplication::ForEachUser
                (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_38,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// HandleTriggeringActionCommited @ 14a7f05c0

void __thiscall
UCommonButtonBase::HandleTriggeringActionCommited(UCommonButtonBase *this,bool *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7f05c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x518))();
  return;
}

// HandleTriggeringActionCommited @ 14a7f05d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::HandleTriggeringActionCommited(UCommonButtonBase *this)

{
  ESlateVisibility EVar1;
  bool bVar2;
  FSlateApplication *this_00;
  UFunction *pUVar3;
  
  EVar1 = UWidget::GetVisibility((UWidget *)this);
  bVar2 = UWidget::GetIsEnabled((UWidget *)this);
  if (((bVar2) && (this->bButtonEnabled == '\x01' && this->bInteractionEnabled == '\x01')) &&
     (1 < (byte)(EVar1 - Collapsed))) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&(this->NormalStyle).PressedSlateSound,0);
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonButtonBase_BP_OnInputActionTriggered);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a7f0655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x538))(this);
  return;
}

// HoldReset @ 14a7f22c0

void __thiscall UCommonButtonBase::HoldReset(UCommonButtonBase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  longlong local_28 [2];
  longlong local_18 [2];
  
  pTVar2 = &this->HoldTickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_38.Object = pTVar2->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
      pTVar4 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  pTVar2 = &this->HoldProgressRollbackTickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_38.Object = pTVar2->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  this->CurrentHoldTime = 0.0;
  this->CurrentHoldProgress = 0.0;
  return;
}

// Initialize @ 14a7f2870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UCommonButtonBase::Initialize(UCommonButtonBase *this)

{
  char *pcVar1;
  int iVar2;
  SCommonButton *pSVar3;
  UWidget *pUVar4;
  longlong lVar5;
  code *pcVar6;
  UButtonSlot *pUVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  UCommonButtonInternalBase *this_00;
  FName FVar13;
  UButtonSlot *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  UButtonSlot *pUVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  UButtonSlot *pUVar20;
  UCommonButtonInternalBase *local_res10;
  FName local_res18;
  UCommonButtonBase *local_res20;
  uint uStack_1cc;
  code *local_1c8;
  undefined8 uStack_1c0;
  UCommonButtonBase *local_1b8;
  UCommonButtonBase *local_1b0;
  FName local_1a8;
  FName local_1a0;
  UCommonButtonBase *local_198;
  UCommonButtonBase *local_190;
  UCommonButtonBase *local_188;
  UCommonButtonBase *local_180;
  UCommonButtonBase *local_178;
  FDestructionSentinel local_170;
  undefined1 *local_158;
  FDestructionSentinel local_150;
  undefined1 *local_138;
  FDestructionSentinel local_130;
  undefined1 *local_118;
  FDestructionSentinel local_110;
  undefined1 *local_f8;
  FDestructionSentinel local_f0;
  undefined1 *local_d8;
  FDestructionSentinel local_d0;
  undefined1 *local_b8;
  FDestructionSentinel local_b0;
  undefined1 *local_98;
  FDestructionSentinel local_90;
  UObject *local_78;
  FMargin local_68;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  
  bVar10 = UUserWidget::Initialize((UUserWidget *)this);
  if (!bVar10) {
    return bVar10;
  }
  this_00 = (UCommonButtonInternalBase *)(**(code **)(this->_padding_ + 0x4e0))(this);
  UButton::SetClickMethod((UButton *)this_00,(uint)(this->ClickMethod).Value);
  UButton::SetTouchMethod((UButton *)this_00,(uint)(this->TouchMethod).Value);
  UButton::SetPressMethod((UButton *)this_00,(uint)(this->PressMethod).Value);
  FVar13 = UUserWidget::GetDesiredFocusWidgetName((UUserWidget *)this);
  if ((*(longlong *)FVar13 == 0) && (bVar11 = UUserWidget::IsFocusable((UUserWidget *)this), bVar11)
     ) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  UButton::InitIsFocusable((UButton *)this_00,bVar11);
  if ((this_00->MyCommonButton).Object != (SCommonButton *)0x0) {
    pSVar3 = (this_00->MyCommonButton).Object;
    *(byte *)((longlong)&pSVar3->_padding_ + 4) =
         *(byte *)((longlong)&pSVar3->_padding_ + 4) & 0xfe | bVar11;
  }
  bVar11 = this->bButtonEnabled;
  pSVar3 = (this_00->MyCommonButton).Object;
  this_00->bButtonEnabled = bVar11;
  if (pSVar3 != (SCommonButton *)0x0) {
    ((this_00->MyCommonButton).Object)->bIsButtonEnabled = bVar11;
  }
  UCommonButtonInternalBase::SetInteractionEnabled(this_00,this->bInteractionEnabled);
  local_res10 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&(this->RootButton).WeakPtr,(FObjectPtr)&local_res10);
  pUVar4 = *(UWidget **)(this->_padding_ + 0x30);
  if (pUVar4 == (UWidget *)0x0) {
    return bVar10;
  }
  pUVar14 = (UButtonSlot *)UPanelWidget::AddChild((UPanelWidget *)this_00,pUVar4);
  pUVar20 = (UButtonSlot *)0x0;
  if (pUVar14 != (UButtonSlot *)0x0) {
    pUVar15 = Z_Construct_UClass_UButtonSlot_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((iVar2 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar15->_padding_)) goto LAB_14a7f2a0a;
  }
  pUVar14 = pUVar20;
LAB_14a7f2a0a:
  local_68.Left = 0.0;
  local_68.Top = 0.0;
  local_68.Right = 0.0;
  local_68.Bottom = 0.0;
  UButtonSlot::SetPadding(pUVar14,&local_68);
  UButtonSlot::SetHorizontalAlignment(pUVar14,HAlign_Fill);
  UButtonSlot::SetVerticalAlignment(pUVar14,VAlign_Fill);
  lVar5 = this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  *(UCommonButtonInternalBase **)(lVar5 + 0x30) = this_00;
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  pUVar17 = (UButtonSlot *)strstr("&UCommonButtonBase::HandleButtonClicked","::");
  pUVar14 = pUVar20;
  while (pUVar7 = pUVar17, pUVar7 != (UButtonSlot *)0x0) {
    pUVar17 = (UButtonSlot *)strstr((char *)((longlong)&pUVar7->_padding_ + 1),"::");
    pUVar14 = pUVar7;
  }
  pcVar1 = (char *)((longlong)&pUVar14->_padding_ + 2);
  if (((pUVar14 == (UButtonSlot *)0x0) || (*pcVar1 == '0')) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result && Result[2] != \'0\'",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                          ,0x1da,L"\'%hs\' does not look like a member function"), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  ::FName::FName(&local_res18,pcVar1);
  lStack_50 = (ulonglong)uStack_1cc << 0x20;
  local_58 = _vcall__1336__flat______;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UCommonButtonBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
             &pUVar16[0x23].field_0x10,this,(pmf_6dc84f8f *)&local_58,local_res18);
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar8 = uStack_1c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x2b].field_0x8,
             (FWriteAccessScope *)&local_170);
  local_158 = &pUVar16[0x2b].field_0x10;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_158);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_res20);
    puVar18[4] = _vcall__1344__flat______;
    puVar18[5] = uVar8 & 0xffffffff00000000;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar8 = uStack_1c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x29].field_0x10,
             (FWriteAccessScope *)&local_150);
  local_138 = &pUVar16[0x29].field_0x18;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_138);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_1b8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_1b8);
    puVar18[4] = _vcall__1352__flat______;
    puVar18[5] = uVar8 & 0xffffffff00000000;
  }
  if (local_150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar16 + 0x2a),
             (FWriteAccessScope *)&local_130);
  local_118 = &pUVar16[0x2a].field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_118);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_1b0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_1b0);
    puVar18[4] = _vcall__1360__flat______;
    puVar18[5] = (ulonglong)uStack_1c0._4_4_ << 0x20;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  pUVar17 = (UButtonSlot *)strstr("&UCommonButtonBase::HandleButtonPressed","::");
  pUVar14 = pUVar20;
  while (pUVar7 = pUVar17, pUVar7 != (UButtonSlot *)0x0) {
    pUVar17 = (UButtonSlot *)strstr((char *)((longlong)&pUVar7->_padding_ + 1),"::");
    pUVar14 = pUVar7;
  }
  pcVar1 = (char *)((longlong)&pUVar14->_padding_ + 2);
  if (((pUVar14 == (UButtonSlot *)0x0) || (*pcVar1 == '0')) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result && Result[2] != \'0\'",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                          ,0x1da,L"\'%hs\' does not look like a member function"), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  ::FName::FName(&local_1a8,pcVar1);
  lStack_40 = (ulonglong)uStack_1c0._4_4_ << 0x20;
  local_48 = _vcall__1368__flat______;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UCommonButtonBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)(pUVar16 + 0x24),this
             ,(pmf_6dc84f8f *)&local_48,local_1a8);
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  pUVar14 = (UButtonSlot *)strstr("&UCommonButtonBase::HandleButtonReleased","::");
  while (pUVar17 = pUVar14, pUVar17 != (UButtonSlot *)0x0) {
    pUVar14 = (UButtonSlot *)strstr((char *)((longlong)&pUVar17->_padding_ + 1),"::");
    pUVar20 = pUVar17;
  }
  pcVar1 = (char *)((longlong)&pUVar20->_padding_ + 2);
  if (((pUVar20 == (UButtonSlot *)0x0) || (*pcVar1 == '0')) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result && Result[2] != \'0\'",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                          ,0x1da,L"\'%hs\' does not look like a member function"), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  ::FName::FName(&local_1a0,pcVar1);
  uStack_1c0._0_4_ = 0;
  local_1c8 = _vcall__1376__flat______;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UCommonButtonBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
             &pUVar16[0x24].field_0x18,this,(pmf_6dc84f8f *)&local_1c8,local_1a0);
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar9 = uStack_1c0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x26].field_0x10,
             (FWriteAccessScope *)&local_110);
  local_f8 = &pUVar16[0x26].field_0x18;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_f8);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_198 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_198);
    puVar18[4] = _vcall__1384__flat______;
    puVar18[5] = (ulonglong)uVar9 << 0x20;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar9 = uStack_1c0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar16 + 0x27),
             (FWriteAccessScope *)&local_f0);
  local_d8 = &pUVar16[0x27].field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d8);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_190 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_190);
    puVar18[4] = _vcall__1392__flat______;
    puVar18[5] = (ulonglong)uVar9 << 0x20;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar9 = uStack_1c0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x27].field_0x18,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &pUVar16[0x27].field_0x20;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b8);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_188 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_188);
    puVar18[4] = _vcall__1400__flat______;
    puVar18[5] = (ulonglong)uVar9 << 0x20;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar9 = uStack_1c0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x28].field_0x8,
             (FWriteAccessScope *)&local_b0);
  local_98 = &pUVar16[0x28].field_0x10;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_98);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_180 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_180);
    puVar18[4] = _vcall__1408__flat______;
    puVar18[5] = (ulonglong)uVar9 << 0x20;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  uVar9 = uStack_1c0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[0x28].field_0x20,
             (FWriteAccessScope *)&local_90);
  local_78 = pUVar16 + 0x29;
  puVar18 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_78);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar18[3] = 0;
    local_178 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_178);
    puVar18[4] = _vcall__1416__flat______;
    puVar18[5] = (ulonglong)uVar9 << 0x20;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  return bVar10;
}

// IsHoverSimulationOnTouchAvailable @ 14a7f5aa0

bool __thiscall UCommonButtonBase::IsHoverSimulationOnTouchAvailable(UCommonButtonBase *this)

{
  return UE::CommonUI::Private::EnableSimulateHoverOnTouchInput != 0;
}

// IsHovered @ 14a7f5ac0

bool __thiscall UCommonButtonBase::IsHovered(UCommonButtonBase *this)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsInteractionEnabled @ 14a7f5ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonButtonBase::IsInteractionEnabled(UCommonButtonBase *this)

{
  ESlateVisibility EVar1;
  bool bVar2;
  
  EVar1 = UWidget::GetVisibility((UWidget *)this);
  bVar2 = UWidget::GetIsEnabled((UWidget *)this);
  if (((bVar2) && (this->bButtonEnabled == '\x01' && this->bInteractionEnabled == '\x01')) &&
     (1 < (byte)(EVar1 - Collapsed))) {
    return true;
  }
  return false;
}

// IsPressed @ 14a7f65f0

bool __thiscall UCommonButtonBase::IsPressed(UCommonButtonBase *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    lVar1 = *(longlong *)&pUVar3[0x2d].field_0x10;
    if (lVar1 != 0) {
      if (((*(byte *)(lVar1 + 0x464) & 2) == 0) && (*(char *)(lVar1 + 0x4ac) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// NativeConstruct @ 14a7f9540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonButtonBase::NativeConstruct(UCommonButtonBase *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UCommonInputSettings *pUVar5;
  TSubclassOf<UCommonUIHoldData> TVar6;
  UClass *pUVar7;
  
  pUVar7 = (this->HoldData).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UCommonUIHoldData_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((this->HoldData).Class.field0_0x0.DebugPtr != (UClass *)0x0))
    goto LAB_14a7f9622;
  }
  pUVar5 = ICommonInputModule::GetSettings();
  TVar6 = UCommonInputSettings::GetDefaultHoldData(pUVar5);
  lVar2 = *(longlong *)TVar6.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UCommonUIHoldData_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)TVar6.Class.field0_0x0 != 0)) {
      pUVar5 = ICommonInputModule::GetSettings();
      TVar6 = UCommonInputSettings::GetDefaultHoldData(pUVar5);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)TVar6.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)TVar6.Class.field0_0x0);
      }
      (this->HoldData).Class.field0_0x0.DebugPtr = *(UClass **)TVar6.Class.field0_0x0;
    }
  }
LAB_14a7f9622:
  (**(code **)(this->_padding_ + 0x508))(this);
  (**(code **)(this->_padding_ + 0x4e8))(this);
  (**(code **)(this->_padding_ + 0x530))(this);
  UUserWidget::NativeConstruct((UUserWidget *)this);
  return;
}

// NativeDestruct @ 14a7f9730

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

void __thiscall UCommonButtonBase::NativeDestruct(UCommonButtonBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  TWeakPtr<FTSTicker::FElement,1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (0 < (int)this->_padding_) {
    this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
    if (this_00 != (ULocalPlayer *)0x0) {
      this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
      if (this_01 != (UCommonUIActionRouterBase *)0x0) {
        UCommonUIActionRouterBase::NotifyUserWidgetDestructed(this_01,(UCommonUserWidget *)this);
      }
    }
  }
  UUserWidget::NativeDestruct((UUserWidget *)this);
  (**(code **)(this->_padding_ + 0x510))(this);
  (**(code **)(this->_padding_ + 0x4f0))(this);
  pTVar4 = &this->HoldTickerHandle;
  if (((pTVar4->Object != (FElement *)0x0) &&
      (pTVar3 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    local_38.Object = pTVar4->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar4 != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
      pTVar3 = (this->HoldTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar4->Object = (FElement *)0x0;
      (this->HoldTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
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
    }
  }
  pTVar4 = &this->HoldProgressRollbackTickerHandle;
  if (((pTVar4->Object != (FElement *)0x0) &&
      (pTVar3 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    local_38.Object = pTVar4->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar4 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar3 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar4->Object = (FElement *)0x0;
      (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
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
    }
  }
  return;
}

// NativeIsInteractable @ 14a7f9a90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonButtonBase::NativeIsInteractable(UCommonButtonBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  TSharedPtr<SWidget,1> TStack_18;
  
  UWidget::GetCachedWidget((UWidget *)this,&TStack_18);
  if (TStack_18.Object == (SWidget *)0x0) {
    TVar4 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            (*(byte *)((longlong)&this->_padding_ + 1) >> 2 & 1);
  }
  else {
    if (TStack_18.Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    TVar4 = (TStack_18.Object)->EnabledStateAttribute;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return (bool)TVar4;
}

// NativeOnActionComplete @ 14a7f9ab0

void __thiscall UCommonButtonBase::NativeOnActionComplete(UCommonButtonBase *this)

{
  UCommonActionWidget *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar2;
  
  pUVar1 = (this->InputActionWidget).field0_0x0.DebugPtr;
  if (pUVar1 != (UCommonActionWidget *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x348))();
  }
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_OnActionComplete);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7f9af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

// NativeOnActionProgress @ 14a7f9b00

void __thiscall UCommonButtonBase::NativeOnActionProgress(UCommonButtonBase *this,float param_1)

{
  UCommonActionWidget *pUVar1;
  UFunction *pUVar2;
  float local_res10 [6];
  
  pUVar1 = (this->InputActionWidget).field0_0x0.DebugPtr;
  if (pUVar1 != (UCommonActionWidget *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x340))();
  }
  local_res10[0] = param_1;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_OnActionProgress);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_res10);
  this->CurrentHoldProgress = param_1;
  return;
}

// NativeOnClicked @ 14a7f9de0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::NativeOnClicked(UCommonButtonBase *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UFunction *pUVar5;
  UCommonUISubsystemBase *pUVar6;
  UGameInstance *pUVar7;
  UCommonButtonBase *local_res8;
  UCommonButtonBase *local_res10;
  FFieldId local_88;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  if (this->bLocked == '\0') {
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnClicked);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnClickedEvent);
    local_88.FieldName = FFieldNotificationClassDescriptor::ClickEvent.FieldName;
    local_88.BitNumber = FFieldNotificationClassDescriptor::ClickEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseClicked,
               &local_48);
    iVar1 = *(int *)&(this->OnButtonBaseClicked).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (0 < iVar1) {
      local_res8 = this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseClicked,
                 &local_res8);
    }
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    cVar3 = (**(code **)(this->_padding_ + 0x618))(this,&local_58,&local_68,&local_78);
    if (cVar3 != '\0') {
      pUVar6 = UCommonUserWidget::GetUISubsystem((UCommonUserWidget *)this);
      pUVar7 = UWidget::GetGameInstance((UWidget *)this);
      if ((pUVar7 != (UGameInstance *)0x0) && (pUVar6 == (UCommonUISubsystemBase *)0x0)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CommonUISubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonButtonBase.cpp"
                           ,0x6ea,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else {
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnLockClicked);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnLockClickedEvent);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseLockClicked,&local_30);
    iVar1 = *(int *)&(this->OnButtonBaseLockClicked).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    if (0 < iVar1) {
      local_res10 = this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnButtonBaseLockClicked,&local_res10);
    }
  }
  return;
}

// NativeOnCurrentTextStyleChanged @ 14a7fa050

void __thiscall UCommonButtonBase::NativeOnCurrentTextStyleChanged(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnCurrentTextStyleChanged);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7fa07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// NativeOnDeselected @ 14a7fa3e0

void __thiscall UCommonButtonBase::NativeOnDeselected(UCommonButtonBase *this,bool param_1)

{
  UFunction *pUVar1;
  UCommonButtonBase *local_res8;
  UCommonButtonBase *local_18;
  undefined1 local_10;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDeselected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
  if (param_1) {
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &this->OnIsSelectedChangedEvent,false);
    local_10 = 0;
    local_18 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectedChangedBase,
               &local_18);
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseUnselected
               ,&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a7fa465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5e0))(this);
  return;
}

// NativeOnDisabled @ 14a7fa480

void __thiscall UCommonButtonBase::NativeOnDisabled(UCommonButtonBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDisabled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014a7fa4b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5e0))(this);
  return;
}

// NativeOnDoubleClicked @ 14a7fa4d0

void __thiscall UCommonButtonBase::NativeOnDoubleClicked(UCommonButtonBase *this)

{
  int iVar1;
  UFunction *pUVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  UCommonButtonBase *local_res8;
  FReadAccessScope local_28;
  
  if (this->bLocked == '\0') {
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnDoubleClicked)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnDoubleClickedEvent);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseDoubleClicked,&local_28);
    iVar1 = *(int *)&(this->OnButtonBaseDoubleClicked).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (iVar1 < 1) {
      return;
    }
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
              &this->OnButtonBaseDoubleClicked;
  }
  else {
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonButtonBase_BP_OnLockDoubleClicked);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->OnLockDoubleClickedEvent);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnButtonBaseLockDoubleClicked,&local_28);
    iVar1 = *(int *)&(this->OnButtonBaseLockDoubleClicked).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (iVar1 < 1) {
      return;
    }
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
              &this->OnButtonBaseLockDoubleClicked;
  }
  local_res8 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,&local_res8);
  return;
}

// NativeOnDragDetected @ 14a7fa5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonBase::NativeOnDragDetected
          (UCommonButtonBase *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  int iVar1;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnButtonBaseDragDetected,&local_38);
  iVar1 = *(int *)&(this->OnButtonBaseDragDetected).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    FOnButtonBaseGeoOperationDynamic::Broadcast
              (&this->OnButtonBaseDragDetected,this,param_1,*param_3);
  }
  UUserWidget::NativeOnDragDetected((UUserWidget *)this,param_1,param_2,param_3);
  return;
}

// NativeOnDragEnter @ 14a7fa660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonBase::NativeOnDragEnter
          (UCommonButtonBase *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  int iVar1;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseDragEnter,
             &local_38);
  iVar1 = *(int *)&(this->OnButtonBaseDragEnter).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    FOnButtonBaseGeoOperationDynamic::Broadcast(&this->OnButtonBaseDragEnter,this,param_1,param_3);
  }
  UUserWidget::NativeOnDragEnter((UUserWidget *)this,param_1,param_2,param_3);
  return;
}

// NativeOnDragLeave @ 14a7fa6f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonButtonBase::NativeOnDragLeave
          (UCommonButtonBase *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  int iVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseDragLeave,
             &local_28);
  iVar1 = *(int *)&(this->OnButtonBaseDragLeave).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_28.DestructionSentinel._0_8_ = this;
    local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseDragLeave,
               &local_28);
  }
  UUserWidget::NativeOnDragLeave((UUserWidget *)this,param_1,param_2);
  return;
}

// NativeOnDragOver @ 14a7fa790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonButtonBase::NativeOnDragOver
          (UCommonButtonBase *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  int iVar1;
  bool bVar2;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseDragOver,
             &local_38);
  iVar1 = *(int *)&(this->OnButtonBaseDragOver).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    FOnButtonBaseGeoOperationDynamic::Broadcast(&this->OnButtonBaseDragOver,this,param_1,param_3);
  }
  bVar2 = UUserWidget::NativeOnDragOver((UUserWidget *)this,param_1,param_2,param_3);
  return bVar2;
}

// NativeOnDrop @ 14a7fa820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonButtonBase::NativeOnDrop
          (UCommonButtonBase *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  int iVar1;
  bool bVar2;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseDrop,
             &local_38);
  iVar1 = *(int *)&(this->OnButtonBaseDrop).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    FOnButtonBaseGeoOperationDynamic::Broadcast(&this->OnButtonBaseDrop,this,param_1,param_3);
  }
  bVar2 = UUserWidget::NativeOnDrop((UUserWidget *)this,param_1,param_2,param_3);
  return bVar2;
}

// NativeOnEnabled @ 14a7fa8b0

void __thiscall UCommonButtonBase::NativeOnEnabled(UCommonButtonBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnEnabled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014a7fa8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5e0))(this);
  return;
}

// NativeOnFocusReceived @ 14a7fa900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonButtonBase::NativeOnFocusReceived
          (UCommonButtonBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  EFocusCause EVar1;
  longlong lVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  FReply *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_14;
  TSharedRef<SWidget,1> local_e8;
  FReply local_d8;
  
  bVar6 = false;
  UUserWidget::NativeOnFocusReceived((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ == '\0') {
    bVar5 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (!bVar5) goto LAB_14a7fa97a;
    pUVar7 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    pTVar9 = *(TReferenceControllerBase<1> **)&pUVar7[0x2d].field_0x18;
    lVar2 = *(longlong *)&pUVar7[0x2d].field_0x10;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (lVar2 != 0) {
      bVar5 = true;
      goto LAB_14a7fa98c;
    }
  }
  else {
LAB_14a7fa97a:
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_14a7fa98c:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar5) {
    FReply::FReply(&local_d8,true);
    EVar1 = param_2->Cause;
    pUVar7 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    pTVar9 = *(TReferenceControllerBase<1> **)&pUVar7[0x2d].field_0x18;
    pSVar3 = *(SWidget **)&pUVar7[0x2d].field_0x10;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SWidget *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar4)();
        return pFVar8;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.Object = pSVar3;
    local_e8.SharedReferenceCount.ReferenceController = pTVar9;
    pFVar8 = FReply::SetUserFocus(&local_d8,&local_e8,EVar1,false);
    FReply::operator=(__return_storage_ptr__,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FReply::~FReply(&local_d8);
  }
  return __return_storage_ptr__;
}

// NativeOnHoldProgress @ 14a7fab70

bool __thiscall UCommonButtonBase::NativeOnHoldProgress(UCommonButtonBase *this,float param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar2 = __real_3f800000;
  fVar1 = this->HoldTime;
  lVar3 = this->_padding_;
  if (__real_322bcc77 < fVar1) {
    fVar4 = fVar1;
    if (param_1 <= fVar1) {
      fVar4 = param_1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar4 = fVar4 + this->CurrentHoldTime;
    this->CurrentHoldTime = fVar4;
    fVar4 = fVar4 / fVar1;
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    this->CurrentHoldProgress = fVar4;
    (**(code **)(lVar3 + 0x5f0))();
    if (this->CurrentHoldProgress <= fVar2 && fVar2 != this->CurrentHoldProgress) {
      return true;
    }
    (**(code **)(this->_padding_ + 0x518))(this);
    lVar3 = this->_padding_;
  }
  (**(code **)(lVar3 + 0x610))(this);
  return false;
}

// NativeOnHoldProgressRollback @ 14a7fac20

bool __thiscall
UCommonButtonBase::NativeOnHoldProgressRollback(UCommonButtonBase *this,float param_1)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> *pTVar5;
  float fVar6;
  float fVar7;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  undefined8 local_28 [4];
  
  fVar2 = this->HoldTime;
  if ((fVar2 <= __real_322bcc77) || (fVar7 = this->HoldRollbackTime, fVar7 <= __real_322bcc77)) {
    (**(code **)(this->_padding_ + 0x610))();
  }
  else {
    fVar6 = this->CurrentHoldTime - (fVar2 / fVar7) * param_1;
    if (fVar7 <= fVar6) {
      fVar6 = fVar7;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    this->CurrentHoldTime = fVar6;
    fVar7 = fVar6 / fVar2;
    if (__real_3f800000 <= fVar6 / fVar2) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    this->CurrentHoldProgress = fVar7;
    (**(code **)(this->_padding_ + 0x5f0))();
    if (0.0 < this->CurrentHoldProgress) {
      return true;
    }
    pTVar5 = &this->HoldProgressRollbackTickerHandle;
    local_38.Object = pTVar5->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar5 != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
      pTVar4 = (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar5->Object = (FElement *)0x0;
      (this->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return false;
        }
      }
    }
  }
  return false;
}

// NativeOnHovered @ 14a7fad40

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

void __thiscall UCommonButtonBase::NativeOnHovered(UCommonButtonBase *this)

{
  int iVar1;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  UFunction *pUVar4;
  UCommonButtonBase *local_res8;
  FReadAccessScope local_28;
  
  pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar3);
  if ((((this_00 != (UCommonInputSubsystem *)0x0) &&
       (EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar2 == Touch)) &&
      (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1)) &&
     (this->bSimulateHoverOnTouchInput == false)) {
    return;
  }
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnHovered);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnHoveredEvent);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseHovered,
             &local_28);
  iVar1 = *(int *)&(this->OnButtonBaseHovered).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseHovered,
               &local_res8);
  }
  UUserWidget::Invalidate((UUserWidget *)this,Layout);
  (**(code **)(this->_padding_ + 0x5e0))(this);
  (**(code **)(this->_padding_ + 0x530))(this);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetHoveredStateRegistration::Bit,true);
  return;
}

// NativeOnMouseEnter @ 14a7fb240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonButtonBase::NativeOnMouseEnter
          (UCommonButtonBase *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  
  if (param_2->bIsTouchEvent == false) {
    UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
    bVar1 = UWidget::GetIsEnabled((UWidget *)this);
    if ((bVar1) && (this->bInteractionEnabled != '\0')) {
      pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
      this_00 = UCommonInputSubsystem::Get(pUVar3);
      if ((this_00 != (UCommonInputSubsystem *)0x0) &&
         (((EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar2 == Touch &&
           (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1)) &&
          (this->bSimulateHoverOnTouchInput == false)))) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014a7fb2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x5a0))(this);
      return;
    }
  }
  return;
}

// NativeOnMouseLeave @ 14a7fb2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonButtonBase::NativeOnMouseLeave(UCommonButtonBase *this,FPointerEvent *param_1)

{
  bool bVar1;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  
  if (param_1->bIsTouchEvent == false) {
    UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
    bVar1 = UWidget::GetIsEnabled((UWidget *)this);
    if ((bVar1) && (this->bInteractionEnabled != '\0')) {
      pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
      this_00 = UCommonInputSubsystem::Get(pUVar3);
      if ((this_00 != (UCommonInputSubsystem *)0x0) &&
         (((EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar2 == Touch &&
           (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1)) &&
          (this->bSimulateHoverOnTouchInput == false)))) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014a7fb32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x5a8))(this);
      return;
    }
  }
  return;
}

// NativeOnPressed @ 14a7fb490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::NativeOnPressed(UCommonButtonBase *this)

{
  UFunction *pUVar1;
  
  (**(code **)(this->_padding_ + 0x610))();
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnPressed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnPressedEvent);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,true);
  return;
}

// NativeOnReleased @ 14a7fb4f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::NativeOnReleased(UCommonButtonBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnReleased);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnReleasedEvent);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetPressedStateRegistration::Bit,false);
  return;
}

// NativeOnSelected @ 14a7fb550

void __thiscall UCommonButtonBase::NativeOnSelected(UCommonButtonBase *this,bool param_1)

{
  UFunction *pUVar1;
  UCommonButtonBase *local_res8;
  UCommonButtonBase *local_18;
  undefined1 local_10;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnSelected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
  if (param_1) {
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &this->OnIsSelectedChangedEvent,true);
    local_10 = 1;
    local_18 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSelectedChangedBase,
               &local_18);
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseSelected,
               &local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a7fb5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5e0))(this);
  return;
}

// NativeOnUnhovered @ 14a7fb7f0

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

void __thiscall UCommonButtonBase::NativeOnUnhovered(UCommonButtonBase *this)

{
  int iVar1;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  UFunction *pUVar4;
  UCommonButtonBase *local_res8;
  FReadAccessScope local_28;
  
  pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar3);
  if ((((this_00 != (UCommonInputSubsystem *)0x0) &&
       (EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar2 == Touch)) &&
      (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1)) &&
     (this->bSimulateHoverOnTouchInput == false)) {
    return;
  }
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnUnhovered);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnUnhoveredEvent);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseUnhovered,
             &local_28);
  iVar1 = *(int *)&(this->OnButtonBaseUnhovered).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnButtonBaseUnhovered,
               &local_res8);
  }
  UUserWidget::Invalidate((UUserWidget *)this,Layout);
  (**(code **)(this->_padding_ + 0x5e0))(this);
  (**(code **)(this->_padding_ + 0x530))(this);
  UWidget::BroadcastBinaryPostStateChange
            ((UWidget *)this,&UWidgetHoveredStateRegistration::Bit,false);
  return;
}

// OnActionComplete @ 14a7fbdb0

void __thiscall UCommonButtonBase::OnActionComplete(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_OnActionComplete);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7fbddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnActionProgress @ 14a7fbe20

void __thiscall UCommonButtonBase::OnActionProgress(UCommonButtonBase *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_OnActionProgress);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnCurrentTextStyleChanged @ 14a7fc430

void __thiscall UCommonButtonBase::OnCurrentTextStyleChanged(UCommonButtonBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnCurrentTextStyleChanged);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7fc45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnInputMethodChanged @ 14a7fcfc0

void __thiscall
UCommonButtonBase::OnInputMethodChanged(UCommonButtonBase *this,ECommonInputType param_1)

{
  bool bVar1;
  UFunction *pUVar2;
  ECommonInputType local_res10 [24];
  
  (**(code **)(this->_padding_ + 0x530))();
  (**(code **)(this->_padding_ + 0x500))(this,param_1);
  (**(code **)(this->_padding_ + 0x610))(this);
  (**(code **)(this->_padding_ + 0x5f0))(this,0);
  local_res10[0] = param_1;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_BP_OnInputMethodChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_res10);
  bVar1 = FUIActionBindingHandle::IsValid(&this->TriggeringBindingHandle);
  if (bVar1) {
    FUIActionBindingHandle::ResetHold(&this->TriggeringBindingHandle);
  }
  return;
}

// OnTriggeredInputActionChanged @ 14a7ffbb0

void __thiscall
UCommonButtonBase::OnTriggeredInputActionChanged
          (UCommonButtonBase *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  UFunction *pUVar2;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  FName local_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_18 = (param_1->DataTable).field0_0x0;
  local_10 = param_1->RowName;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnTriggeredInputActionChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  return;
}

// OnTriggeringEnhancedInputActionChanged @ 14a7ffc20

void __thiscall
UCommonButtonBase::OnTriggeringEnhancedInputActionChanged
          (UCommonButtonBase *this,UInputAction *param_1)

{
  UFunction *pUVar1;
  UInputAction *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnTriggeringInputActionChanged @ 14a7ffc60

void __thiscall
UCommonButtonBase::OnTriggeringInputActionChanged
          (UCommonButtonBase *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  UFunction *pUVar2;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  FName local_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_18 = (param_1->DataTable).field0_0x0;
  local_10 = param_1->RowName;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnTriggeringInputActionChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  return;
}

// OnWidgetRebuilt @ 14a800ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::OnWidgetRebuilt(UCommonButtonBase *this)

{
  SWidget *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  UCommonButtonBase *local_res10;
  TSharedRef<ISlateMetaData,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  UCommonUserWidget::OnWidgetRebuilt((UCommonUserWidget *)this);
  pTVar3 = UWidget::GetCachedWidget((UWidget *)this,&local_28);
  if (pTVar3->Object == (SWidget *)0x0) {
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
  this_00 = pTVar3->Object;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_38.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
    local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCommonButtonMetaData___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FCommonButtonMetaData__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonButtonBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonButtonBase *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar4[1].SharedReferenceCount,(FObjectPtr)&local_res10);
    local_38.Object = (ISlateMetaData *)(pTVar4 + 1);
    if ((TReferenceControllerBase<1> *)local_38.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_38.SharedReferenceCount.ReferenceController = pTVar4;
  }
  SWidget::AddMetadataInternal(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// PostLoad @ 14a802600

void __thiscall UCommonButtonBase::PostLoad(UCommonButtonBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  UObject::PostLoad((UObject *)this);
  plVar6 = &this->_padding_;
  for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < (int)this->_padding_)); uVar5 = uVar5 + 1) {
    if ((int)uVar5 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(longlong *)((longlong)(int)uVar5 * 8 + *plVar6) == 0) {
      uVar3 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      _Dst = (void *)(*plVar6 + (longlong)(int)uVar5 * 8);
      iVar4 = (int)this->_padding_ + ~uVar5;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)plVar6,(int)this->_padding_,
                 (int *)((longlong)&this->_padding_ + 4));
      uVar5 = uVar5 - 1;
    }
  }
  return;
}

// RefreshDimensions @ 14a80d360

void __thiscall UCommonButtonBase::RefreshDimensions(UCommonButtonBase *this)

{
  TWeakObjectPtr<UCommonButtonInternalBase,FWeakObjectPtr> *this_00;
  SBox *pSVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UCommonButtonStyle *pUVar5;
  UObject *pUVar6;
  UCommonButtonInternalBase *pUVar7;
  int iVar8;
  TAttribute<FOptionalSize> local_28;
  
  this_00 = &this->RootButton;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar5 = GetStyleCDO(this);
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar5 == (UCommonButtonStyle *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = pUVar5->MinWidth;
    }
    if (iVar8 < this->MinWidth) {
      iVar8 = this->MinWidth;
    }
    pSVar1 = *(SBox **)(pUVar6 + 0x2d);
    *(int *)&pUVar6[0x2c].field_0x10 = iVar8;
    if (pSVar1 != (SBox *)0x0) {
      local_28.bIsSet = true;
      local_28.Value.Size = (float)iVar8;
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMinDesiredWidth(pSVar1,&local_28);
    }
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar5 == (UCommonButtonStyle *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = pUVar5->MinHeight;
    }
    if (iVar8 < this->MinHeight) {
      iVar8 = this->MinHeight;
    }
    pSVar1 = *(SBox **)(pUVar6 + 0x2d);
    *(int *)&pUVar6[0x2c].field_0x14 = iVar8;
    if (pSVar1 != (SBox *)0x0) {
      local_28.bIsSet = true;
      local_28.Value.Size = (float)iVar8;
      local_28.Getter._16_8_ = 0;
      local_28.Getter._0_8_ = 0;
      local_28.Getter._8_8_ = 0;
      SBox::SetMinDesiredHeight(pSVar1,&local_28);
    }
    if (pUVar5 == (UCommonButtonStyle *)0x0) {
      pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UCommonButtonInternalBase::SetMaxDesiredWidth(pUVar7,this->MaxWidth);
      pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar8 = this->MaxHeight;
    }
    else {
      if ((this->MaxWidth < 1) || (pUVar5->MaxWidth < 1)) {
        pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar8 = pUVar5->MaxWidth;
        iVar4 = this->MaxWidth;
        bVar3 = SBORROW4(iVar8,iVar4);
        iVar2 = iVar8 - iVar4;
      }
      else {
        pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar8 = pUVar5->MaxWidth;
        iVar4 = this->MaxWidth;
        bVar3 = SBORROW4(iVar4,iVar8);
        iVar2 = iVar4 - iVar8;
      }
      if (bVar3 != iVar2 < 0) {
        iVar8 = iVar4;
      }
      UCommonButtonInternalBase::SetMaxDesiredWidth(pUVar7,iVar8);
      if ((this->MaxHeight < 1) || (pUVar5->MaxHeight < 1)) {
        pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
        iVar8 = pUVar5->MaxHeight;
        iVar4 = this->MaxHeight;
        bVar3 = SBORROW4(iVar8,iVar4);
        iVar2 = iVar8 - iVar4;
      }
      else {
        pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
        iVar8 = pUVar5->MaxHeight;
        iVar4 = this->MaxHeight;
        bVar3 = SBORROW4(iVar4,iVar8);
        iVar2 = iVar4 - iVar8;
      }
      if (bVar3 != iVar2 < 0) {
        iVar8 = iVar4;
      }
    }
    UCommonButtonInternalBase::SetMaxDesiredHeight(pUVar7,iVar8);
  }
  return;
}

// SetAllowDragDrop @ 14a816f20

void __thiscall UCommonButtonBase::SetAllowDragDrop(UCommonButtonBase *this,bool param_1)

{
  bool bVar1;
  UButton *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::SetAllowDragDrop(this_00,param_1);
  }
  return;
}

// SetButtonStyle @ 14a817540

void __thiscall UCommonButtonBase::SetButtonStyle(UCommonButtonBase *this)

{
  UButton *this_00;
  longlong lVar1;
  
  this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
  if (this_00 != (UButton *)0x0) {
    if (this->bLocked == '\0') {
      if (this->bSelected == 0) {
        lVar1 = 0xe40;
        if (this->bButtonEnabled != '\0') {
          lVar1 = 0x720;
        }
      }
      else {
        lVar1 = 0xab0;
      }
    }
    else {
      lVar1 = 0x11d0;
    }
    UButton::SetStyle(this_00,(FButtonStyle *)((longlong)&this->_padding_ + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00014a8175a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x5e0))(this);
    return;
  }
  return;
}

// SetClickMethod @ 14a817a70

void __thiscall UCommonButtonBase::SetClickMethod(UCommonButtonBase *this,Type param_1)

{
  bool bVar1;
  UButton *this_00;
  
  (this->ClickMethod).Value = (uchar)param_1;
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::SetClickMethod(this_00,(uint)(this->ClickMethod).Value);
  }
  return;
}

// SetClickedSlateSoundOverride @ 14a817ac0

void __thiscall
UCommonButtonBase::SetClickedSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->ClickedSlateSoundOverride);
  FSlateSound::operator=(&this->ClickedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetClickedSoundOverride @ 14a817b40

void __thiscall
UCommonButtonBase::SetClickedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->ClickedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ClickedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetHideInputAction @ 14a8183f0

void __thiscall UCommonButtonBase::SetHideInputAction(UCommonButtonBase *this,bool param_1)

{
  this->bHideInputAction = param_1;
  UpdateInputActionWidgetVisibility(this);
  return;
}

// SetHoveredSlateSoundOverride @ 14a818570

void __thiscall
UCommonButtonBase::SetHoveredSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->HoveredSlateSoundOverride);
  FSlateSound::operator=(&this->HoveredSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetHoveredSoundOverride @ 14a8185f0

void __thiscall
UCommonButtonBase::SetHoveredSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->HoveredSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->HoveredSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetInputActionProgressMaterial @ 14a818ad0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UCommonButtonBase::SetInputActionProgressMaterial
          (UCommonButtonBase *this,FSlateBrush *param_1,FName *param_2)

{
  FSlateBrush *this_00;
  int iVar1;
  UCommonActionWidget *pUVar2;
  UMaterialInterface *pUVar3;
  UClass *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  TAttribute<FSlateBrush_const_*> local_38;
  
  pUVar2 = (this->InputActionWidget).field0_0x0.DebugPtr;
  if (pUVar2 == (UCommonActionWidget *)0x0) {
    return;
  }
  this_00 = &pUVar2->ProgressMaterialBrush;
  FSlateBrush::operator=(this_00,param_1);
  pUVar3 = (UMaterialInterface *)(pUVar2->ProgressMaterialBrush).ResourceObject.field0_0x0.DebugPtr;
  pUVar2->ProgressMaterialParam = *param_2;
  if (pUVar3 != (UMaterialInterface *)0x0) {
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar5 = UMaterialInstanceDynamic::Create(pUVar3,(UObject *)0x0,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (pUVar2->ProgressDynamicMaterial).field0_0x0.DebugPtr = pUVar5;
      FSlateBrush::SetResourceObject(this_00,(UObject *)pUVar5);
      goto LAB_14a818b8a;
    }
  }
  (pUVar2->ProgressDynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
LAB_14a818b8a:
  if ((pUVar2->MyProgressImage).Object != (SImage *)0x0) {
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Value = this_00;
    SImage::SetImage((pUVar2->MyProgressImage).Object,&local_38);
  }
  return;
}

// SetIsEnabled @ 14a818f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetIsEnabled(UCommonButtonBase *this,bool param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong lVar4;
  UCommonActionWidget *pUVar5;
  bool bVar6;
  UObject *pUVar7;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xbf;
  if (param_1) {
    UWidget::SetIsEnabled((UWidget *)this,param_1);
    if (this->bButtonEnabled != '\0') goto LAB_14a8190ac;
    this->field_0x4e1 = this->field_0x4e1 | 2;
    bVar6 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      lVar4 = *(longlong *)&pUVar7[0x2d].field_0x10;
      pUVar7[0x2c].field_0x20 = 1;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x4c8) = 1;
      }
    }
    SetButtonStyle(this);
    (**(code **)(this->_padding_ + 0x5d0))(this);
  }
  else {
    UWidget::SetIsEnabled((UWidget *)this,false);
    if (this->bButtonEnabled == '\0') goto LAB_14a8190ac;
    this->field_0x4e1 = this->field_0x4e1 & 0xfd;
    bVar6 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      lVar4 = *(longlong *)&pUVar7[0x2d].field_0x10;
      pUVar7[0x2c].field_0x20 = 0;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x4c8) = 0;
      }
    }
    SetButtonStyle(this);
    (**(code **)(this->_padding_ + 0x5d8))(this);
  }
  if ((this->InputActionWidget).field0_0x0.DebugPtr != (UCommonActionWidget *)0x0) {
    (**(code **)(this->_padding_ + 0x530))(this);
    pUVar5 = (this->InputActionWidget).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,this->bButtonEnabled);
  }
LAB_14a8190ac:
  bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = (bVar1 & 0xc0 ^ bVar3) & 0x40 ^ bVar3;
  if (this->bButtonEnabled != param_1) {
    UWidget::BroadcastBinaryPostStateChange
              ((UWidget *)this,&UWidgetDisabledStateRegistration::Bit,!param_1);
    HandleImplicitFocusLost(this);
    return;
  }
  return;
}

// SetIsFocusable @ 14a819120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetIsFocusable(UCommonButtonBase *this,bool param_1)

{
  longlong lVar1;
  bool bVar2;
  UButton *this_00;
  
  UUserWidget::SetIsFocusable((UUserWidget *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar2) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::InitIsFocusable(this_00,param_1);
    lVar1 = this_00[1]._padding_;
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x464) = *(byte *)(lVar1 + 0x464) & 0xfe;
      *(byte *)(lVar1 + 0x464) = *(byte *)(lVar1 + 0x464) | param_1;
    }
  }
  return;
}

// SetIsInteractableWhenSelected @ 14a819190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonButtonBase::SetIsInteractableWhenSelected(UCommonButtonBase *this,bool param_1)

{
  TWeakObjectPtr<UCommonButtonInternalBase,FWeakObjectPtr> *this_00;
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  ECommonInputType EVar5;
  char cVar6;
  UCommonButtonInternalBase *pUVar7;
  UButton *pUVar8;
  ULocalPlayer *pUVar9;
  UCommonInputSubsystem *this_01;
  FLinearColor_u_0 FStack_28;
  FLinearColor_u_0 FStack_18;
  
  uVar1 = this->field_0x4d0;
  if (param_1 == this->bInteractableWhenSelected) {
    return;
  }
  this->field_0x4d0 = uVar1 & 0xef | param_1 << 4;
  if (this->bSelected == 0) {
    return;
  }
  if (this->bToggleable != '\0') {
    return;
  }
  if (this->bInteractionEnabled == param_1) {
    return;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x2c8))();
  this->bInteractionEnabled = '\0';
  this_00 = &this->RootButton;
  this->field_0x4e1 = this->field_0x4e1 | param_1 << 2;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    if (this->bInteractionEnabled == '\0') {
      pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UCommonButtonInternalBase::SetInteractionEnabled(pUVar7,false);
      if (this->bApplyAlphaOnDisable == 0) goto LAB_14a8193fe;
      pUVar8 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UButton::GetColorAndOpacity(pUVar8,(FLinearColor *)&FStack_28._s_0);
      FStack_28._s_0.A = 0.5;
    }
    else {
      if ((this->bSelected == 0) || (this->bToggleable != '\0')) {
        pUVar7 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UCommonButtonInternalBase::SetInteractionEnabled(pUVar7,true);
      }
      if (this->bApplyAlphaOnDisable == 0) goto LAB_14a8193fe;
      pUVar8 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UButton::GetColorAndOpacity(pUVar8,(FLinearColor *)&FStack_28._s_0);
      FStack_28._s_0.A = 1.0;
    }
    pUVar8 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    FStack_18._8_8_ = CONCAT44(FStack_28._s_0.A,FStack_28._s_0.B);
    FStack_18._0_8_ = FStack_28._0_8_;
    UButton::SetColorAndOpacity(pUVar8,(FLinearColor *)&FStack_18._s_0);
  }
LAB_14a8193fe:
  UpdateInputActionWidgetVisibility(this);
  pUVar9 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_01 = UCommonInputSubsystem::Get(pUVar9);
  if (((((this_01 == (UCommonInputSubsystem *)0x0) ||
        (EVar5 = UCommonInputSubsystem::GetCurrentInputType(this_01), EVar5 != Touch)) ||
       (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput != 1)) ||
      (this->bSimulateHoverOnTouchInput != false)) &&
     (cVar6 = (**(code **)(this->_padding_ + 0x2c8))(this), cVar3 != cVar6)) {
    if (cVar6 == '\0') {
      (**(code **)(this->_padding_ + 0x5a8))(this);
    }
    else {
      (**(code **)(this->_padding_ + 0x5a0))();
    }
  }
  SetButtonStyle(this);
  return;
}

// SetIsInteractionEnabled @ 14a8192f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetIsInteractionEnabled(UCommonButtonBase *this,bool param_1)

{
  TWeakObjectPtr<UCommonButtonInternalBase,FWeakObjectPtr> *this_00;
  char cVar1;
  bool bVar2;
  ECommonInputType EVar3;
  char cVar4;
  UCommonButtonInternalBase *pUVar5;
  UButton *pUVar6;
  ULocalPlayer *pUVar7;
  UCommonInputSubsystem *this_01;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  if (this->bInteractionEnabled == param_1) {
    return;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x2c8))();
  this->bInteractionEnabled = '\0';
  this_00 = &this->RootButton;
  this->field_0x4e1 = this->field_0x4e1 | param_1 << 2;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    if (this->bInteractionEnabled == '\0') {
      pUVar5 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UCommonButtonInternalBase::SetInteractionEnabled(pUVar5,false);
      if (this->bApplyAlphaOnDisable == 0) goto LAB_14a8193fe;
      pUVar6 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UButton::GetColorAndOpacity(pUVar6,(FLinearColor *)&local_28._s_0);
      local_28._s_0.A = 0.5;
    }
    else {
      if ((this->bSelected == 0) || (this->bToggleable != '\0')) {
        pUVar5 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UCommonButtonInternalBase::SetInteractionEnabled(pUVar5,true);
      }
      if (this->bApplyAlphaOnDisable == 0) goto LAB_14a8193fe;
      pUVar6 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UButton::GetColorAndOpacity(pUVar6,(FLinearColor *)&local_28._s_0);
      local_28._s_0.A = 1.0;
    }
    pUVar6 = (UButton *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_18._8_8_ = CONCAT44(local_28._s_0.A,local_28._s_0.B);
    local_18._0_8_ = local_28._0_8_;
    UButton::SetColorAndOpacity(pUVar6,(FLinearColor *)&local_18._s_0);
  }
LAB_14a8193fe:
  UpdateInputActionWidgetVisibility(this);
  pUVar7 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_01 = UCommonInputSubsystem::Get(pUVar7);
  if (((((this_01 == (UCommonInputSubsystem *)0x0) ||
        (EVar3 = UCommonInputSubsystem::GetCurrentInputType(this_01), EVar3 != Touch)) ||
       (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput != 1)) ||
      (this->bSimulateHoverOnTouchInput != false)) &&
     (cVar4 = (**(code **)(this->_padding_ + 0x2c8))(this), cVar1 != cVar4)) {
    if (cVar4 == '\0') {
      (**(code **)(this->_padding_ + 0x5a8))(this);
    }
    else {
      (**(code **)(this->_padding_ + 0x5a0))();
    }
  }
  SetButtonStyle(this);
  return;
}

// SetIsLocked @ 14a8194d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetIsLocked(UCommonButtonBase *this,bool param_1)

{
  UFunction *pUVar1;
  byte local_res10 [24];
  
  if (param_1 != this->bLocked) {
    this->field_0x4d0 = this->field_0x4d0 & 0xfd | param_1 * '\x02';
    SetButtonStyle(this);
    local_res10[0] = this->bLocked;
    pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonButtonBase_BP_OnLockedChanged)
    ;
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
    UWidget::BroadcastBinaryPostStateChange
              ((UWidget *)this,&UWidgetLockedStateRegistration::Bit,this->bLocked);
    return;
  }
  return;
}

// SetIsSelectable @ 14a8195d0

void __thiscall UCommonButtonBase::SetIsSelectable(UCommonButtonBase *this,bool param_1)

{
  if (((param_1 != this->bSelectable) &&
      (this->field_0x4d0 = this->field_0x4d0 & 0xfb | param_1 << 2, this->bSelected != 0)) &&
     (!param_1)) {
    SetSelectedInternal(this,false,true,true);
    return;
  }
  return;
}

// SetIsSelected @ 14a819620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetIsSelected(UCommonButtonBase *this,bool param_1,bool param_2)

{
  char cVar1;
  ECommonInputType EVar2;
  char cVar3;
  ULocalPlayer *pUVar4;
  UCommonInputSubsystem *this_00;
  bool bVar5;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2c8))();
  if ((this->bSelectable != '\0') && (this->bSelected != param_1)) {
    if (param_1) {
      bVar5 = true;
    }
    else {
      if (this->bToggleable == '\0') goto LAB_14a81968f;
      bVar5 = false;
      param_2 = true;
    }
    SetSelectedInternal(this,bVar5,param_2,true);
  }
LAB_14a81968f:
  pUVar4 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  this_00 = UCommonInputSubsystem::Get(pUVar4);
  if ((((this_00 != (UCommonInputSubsystem *)0x0) &&
       (EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar2 == Touch)) &&
      (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 1)) &&
     (this->bSimulateHoverOnTouchInput == false)) {
    return;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x2c8))(this);
  if (cVar1 != cVar3) {
    if (cVar3 == '\0') {
      (**(code **)(this->_padding_ + 0x5a8))(this);
    }
    else {
      (**(code **)(this->_padding_ + 0x5a0))();
    }
  }
  return;
}

// SetIsToggleable @ 14a819710

void __thiscall UCommonButtonBase::SetIsToggleable(UCommonButtonBase *this,bool param_1)

{
  bool bVar1;
  UCommonButtonInternalBase *this_00;
  byte bVar2;
  
  this->bToggleable = '\0';
  this->field_0x4d0 = this->field_0x4d0 | param_1 << 5;
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    if ((this->bSelected == 0) || (this->bToggleable != '\0')) {
      this_00 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      bVar2 = (byte)this->field_0x4e1 >> 2;
    }
    else {
      this_00 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      bVar2 = (byte)this->field_0x4d0 >> 4;
    }
    UCommonButtonInternalBase::SetInteractionEnabled(this_00,(bool)(bVar2 & 1));
  }
  UpdateInputActionWidgetVisibility(this);
  return;
}

// SetLockedClickedSlateSoundOverride @ 14a819f90

void __thiscall
UCommonButtonBase::SetLockedClickedSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->LockedClickedSlateSoundOverride);
  FSlateSound::operator=(&this->LockedClickedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetLockedClickedSoundOverride @ 14a81a010

void __thiscall
UCommonButtonBase::SetLockedClickedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->LockedClickedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->LockedClickedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetLockedHoveredSlateSoundOverride @ 14a81a080

void __thiscall
UCommonButtonBase::SetLockedHoveredSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->LockedHoveredSlateSoundOverride);
  FSlateSound::operator=(&this->LockedHoveredSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetLockedHoveredSoundOverride @ 14a81a100

void __thiscall
UCommonButtonBase::SetLockedHoveredSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->LockedHoveredSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->LockedHoveredSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetLockedPressedSlateSoundOverride @ 14a81a170

void __thiscall
UCommonButtonBase::SetLockedPressedSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->LockedPressedSlateSoundOverride);
  FSlateSound::operator=(&this->LockedPressedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetLockedPressedSoundOverride @ 14a81a1f0

void __thiscall
UCommonButtonBase::SetLockedPressedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->LockedPressedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->LockedPressedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetMaxDimensions @ 14a81a3c0

void __thiscall UCommonButtonBase::SetMaxDimensions(UCommonButtonBase *this,int param_1,int param_2)

{
  this->MaxWidth = param_1;
  this->MaxHeight = param_2;
  RefreshDimensions(this);
  return;
}

// SetMinDimensions @ 14a81a4a0

void __thiscall UCommonButtonBase::SetMinDimensions(UCommonButtonBase *this,int param_1,int param_2)

{
  this->MinWidth = param_1;
  this->MinHeight = param_2;
  RefreshDimensions(this);
  return;
}

// SetPressMethod @ 14a81a990

void __thiscall UCommonButtonBase::SetPressMethod(UCommonButtonBase *this,Type param_1)

{
  bool bVar1;
  UButton *this_00;
  
  (this->PressMethod).Value = (uchar)param_1;
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::SetPressMethod(this_00,param_1);
  }
  return;
}

// SetPressedSlateSoundOverride @ 14a81a9e0

void __thiscall
UCommonButtonBase::SetPressedSlateSoundOverride(UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->PressedSlateSoundOverride);
  FSlateSound::operator=(&this->PressedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetPressedSoundOverride @ 14a81aa60

void __thiscall
UCommonButtonBase::SetPressedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->PressedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->PressedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr = (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetRequiresHold @ 14a81adf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetRequiresHold(UCommonButtonBase *this,bool param_1)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ECommonInputType EVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *this_00;
  UFunction *pUVar4;
  
  uVar1 = this->field_0x4d1;
  this->field_0x4d1 = uVar1 & 0xfb | param_1 << 2;
  pUVar3 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar3);
  if (this_00 != (UCommonInputSubsystem *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x500);
    EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00);
    (*UNRECOVERED_JUMPTABLE)(this,EVar2);
  }
  if (this->bRequiresHold != this->bRequiresHold) {
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonButtonBase_BP_OnRequiresHoldChanged);
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a81ae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pUVar4,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SetSelectedClickedSlateSoundOverride @ 14a81af10

void __thiscall
UCommonButtonBase::SetSelectedClickedSlateSoundOverride
          (UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->SelectedClickedSlateSoundOverride);
  FSlateSound::operator=(&this->SelectedClickedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetSelectedClickedSoundOverride @ 14a81af90

void __thiscall
UCommonButtonBase::SetSelectedClickedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->SelectedClickedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SelectedClickedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr =
         (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetSelectedHoveredSlateSoundOverride @ 14a81b000

void __thiscall
UCommonButtonBase::SetSelectedHoveredSlateSoundOverride
          (UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->SelectedHoveredSlateSoundOverride);
  FSlateSound::operator=(&this->SelectedHoveredSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetSelectedHoveredSoundOverride @ 14a81b080

void __thiscall
UCommonButtonBase::SetSelectedHoveredSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->SelectedHoveredSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SelectedHoveredSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr =
         (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetSelectedInternal @ 14a81b0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonButtonBase::SetSelectedInternal
          (UCommonButtonBase *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 uVar1;
  bool bVar2;
  UCommonButtonInternalBase *pUVar3;
  FSlateApplication *this_00;
  
  uVar1 = this->field_0x4e1;
  this->field_0x4e1 = uVar1 & 0xfe | param_1;
  SetButtonStyle(this);
  if (this->bSelected == 0) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
    if (bVar2) {
      pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
      UCommonButtonInternalBase::SetInteractionEnabled(pUVar3,this->bInteractionEnabled);
    }
    (**(code **)(this->_padding_ + 0x598))(this,param_3);
  }
  else {
    (**(code **)(this->_padding_ + 0x590))(this,param_3);
    if (this->bToggleable == '\0') {
      bVar2 = UUserWidget::IsInteractable((UUserWidget *)this);
      if (bVar2) {
        bVar2 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
        if (bVar2) {
          pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
          UCommonButtonInternalBase::SetInteractionEnabled(pUVar3,this->bInteractableWhenSelected);
        }
      }
    }
    if (param_2) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&(this->NormalStyle).PressedSlateSound,0);
    }
  }
  UpdateInputActionWidgetVisibility(this);
  if (param_1 != this->bSelected) {
    UWidget::BroadcastBinaryPostStateChange
              ((UWidget *)this,&UWidgetSelectedStateRegistration::Bit,this->bSelected);
    return;
  }
  return;
}

// SetSelectedPressedSlateSoundOverride @ 14a81b380

void __thiscall
UCommonButtonBase::SetSelectedPressedSlateSoundOverride
          (UCommonButtonBase *this,FSlateSound *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = FSlateSound::GetResourceObject(param_1);
  pUVar2 = FSlateSound::GetResourceObject(&this->SelectedPressedSlateSoundOverride);
  FSlateSound::operator=(&this->SelectedPressedSlateSoundOverride,param_1);
  if (pUVar1 != pUVar2) {
    BuildStyles(this);
  }
  return;
}

// SetSelectedPressedSoundOverride @ 14a81b400

void __thiscall
UCommonButtonBase::SetSelectedPressedSoundOverride(UCommonButtonBase *this,USoundBase *param_1)

{
  USoundBase *pUVar1;
  
  pUVar1 = (USoundBase *)FSlateSound::GetResourceObject(&this->SelectedPressedSlateSoundOverride);
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SelectedPressedSlateSoundOverride).ResourceObject.field0_0x0.DebugPtr =
         (UObject *)param_1;
    BuildStyles(this);
  }
  return;
}

// SetShouldSelectUponReceivingFocus @ 14a81b5b0

void __thiscall
UCommonButtonBase::SetShouldSelectUponReceivingFocus(UCommonButtonBase *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->bSelectable == '\0') && (param_1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1629923265445100359>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonButtonBase.cpp"
                       ,0x4b9,"bSelectable || !bInShouldSelectUponReceivingFocus");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->field_0x4d0 = this->field_0x4d0 & 0xf7 | param_1 << 3;
  }
  return;
}

// SetShouldUseFallbackDefaultInputAction @ 14a81b610

void __thiscall
UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(UCommonButtonBase *this,bool param_1)

{
  this->bShouldUseFallbackDefaultInputAction = '\0';
  this->field_0x4d1 = this->field_0x4d1 | param_1 * '\x02';
                    /* WARNING: Could not recover jumptable at 0x00014a81b622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x530))();
  return;
}

// SetStyle @ 14a81bb00

void __thiscall
UCommonButtonBase::SetStyle(UCommonButtonBase *this,TSubclassOf<UCommonButtonStyle> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = UCommonButtonStyle::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      pUVar4 = (this->Style).Class.field0_0x0.DebugPtr;
      pUVar6 = (UClass *)0x0;
      pUVar7 = pUVar6;
      if ((pUVar4 != (UClass *)0x0) &&
         (pUVar5 = UCommonButtonStyle::StaticClass(), pUVar5 != (UClass *)0x0)) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar7 = (this->Style).Class.field0_0x0.DebugPtr;
        }
      }
      lVar2 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar2 != 0) && (pUVar4 = UCommonButtonStyle::StaticClass(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      if (pUVar7 != pUVar6) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
        }
        (this->Style).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
        BuildStyles(this);
      }
    }
  }
  return;
}

// SetTouchMethod @ 14a81ca10

void __thiscall UCommonButtonBase::SetTouchMethod(UCommonButtonBase *this,Type param_1)

{
  bool bVar1;
  UButton *this_00;
  
  (this->TouchMethod).Value = (uchar)param_1;
  bVar1 = FWeakObjectPtr::IsValid(&(this->RootButton).WeakPtr);
  if (bVar1) {
    this_00 = (UButton *)FWeakObjectPtr::Get(&(this->RootButton).WeakPtr);
    UButton::SetTouchMethod(this_00,param_1);
  }
  return;
}

// SetTriggeredInputAction @ 14a81cb80

void __thiscall
UCommonButtonBase::SetTriggeredInputAction(UCommonButtonBase *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  UFunction *pUVar2;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  FName local_10;
  
  (**(code **)(this->_padding_ + 0x510))();
  (this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->TriggeringInputAction).RowName.ComparisonIndex = 0;
  (this->TriggeringInputAction).RowName.Number = 0;
  (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  local_10.ComparisonIndex.Value = 0;
  local_10.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->TriggeredInputAction).DataTable.field0_0x0 = (param_1->DataTable).field0_0x0;
  (this->TriggeredInputAction).RowName = param_1->RowName;
  (**(code **)(this->_padding_ + 0x530))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_18 = (param_1->DataTable).field0_0x0;
  local_10 = param_1->RowName;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonButtonBase_OnTriggeredInputActionChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  return;
}

// SetTriggeringEnhancedInputAction @ 14a81cc50

void __thiscall
UCommonButtonBase::SetTriggeringEnhancedInputAction(UCommonButtonBase *this,UInputAction *param_1)

{
  UInputAction *pUVar1;
  bool bVar2;
  UFunction *pUVar3;
  UInputAction *local_res18 [2];
  
  bVar2 = CommonUI::IsEnhancedInputSupportEnabled();
  if (bVar2) {
    pUVar1 = (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr;
    if (pUVar1 == (UInputAction *)0x0) {
      bVar2 = param_1 == (UInputAction *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      (**(code **)(this->_padding_ + 0x510))();
      (this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
      (this->TriggeredInputAction).RowName.ComparisonIndex = 0;
      (this->TriggeredInputAction).RowName.Number = 0;
      (this->TriggeringInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
      (this->TriggeringInputAction).RowName.ComparisonIndex = 0;
      (this->TriggeringInputAction).RowName.Number = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr = param_1;
      (**(code **)(this->_padding_ + 0x508))(this);
      (**(code **)(this->_padding_ + 0x530))(this);
      local_res18[0] = param_1;
      pUVar3 = UObject::FindFunctionChecked
                         ((UObject *)this,
                          NAME_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_res18);
    }
  }
  return;
}

// SetTriggeringInputAction @ 14a81cd40

void __thiscall
UCommonButtonBase::SetTriggeringInputAction(UCommonButtonBase *this,FDataTableRowHandle *param_1)

{
  UDataTable *pUVar1;
  bool bVar2;
  UFunction *pUVar3;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  FName local_10;
  
  bVar2 = FDataTableRowHandle::operator!=(&this->TriggeringInputAction,param_1);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x510))();
    (this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
    (this->TriggeredInputAction).RowName.ComparisonIndex = 0;
    (this->TriggeredInputAction).RowName.Number = 0;
    (this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
    local_10.ComparisonIndex.Value = 0;
    local_10.Number = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->TriggeringInputAction).DataTable.field0_0x0 = (param_1->DataTable).field0_0x0;
    (this->TriggeringInputAction).RowName = param_1->RowName;
    (**(code **)(this->_padding_ + 0x508))(this);
    (**(code **)(this->_padding_ + 0x530))(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr, pUVar1 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_18 = (param_1->DataTable).field0_0x0;
    local_10 = param_1->RowName;
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonButtonBase_OnTriggeringInputActionChanged);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
  }
  return;
}

// SetVisibility @ 14a81d0a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonButtonBase::SetVisibility(UCommonButtonBase *this,ESlateVisibility param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = UWidget::GetVisibility((UWidget *)this);
  UUserWidget::SetVisibility((UUserWidget *)this,param_1);
  if (param_1 != EVar1) {
    HandleImplicitFocusLost(this);
  }
  return;
}

// ShouldProcessHoverEvent @ 14a81d980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonButtonBase::ShouldProcessHoverEvent(UCommonButtonBase *this,EHoverEventSource param_1)

{
  ECommonInputType EVar1;
  ULocalPlayer *pUVar2;
  UCommonInputSubsystem *this_00;
  
  pUVar2 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar2);
  if ((this_00 == (UCommonInputSubsystem *)0x0) ||
     (EVar1 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar1 != Touch)) {
    return param_1 != SimulationForTouch;
  }
  if (param_1 == SimulationForTouch) {
    if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 0) {
      return false;
    }
    if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput == 2) {
      if (this->bSimulateHoverOnTouchInput != false) {
        return true;
      }
      return false;
    }
  }
  if (UE::CommonUI::Private::EnableSimulateHoverOnTouchInput != 1) {
    return true;
  }
  return this->bSimulateHoverOnTouchInput != false;
}

// StaticRegisterNativesUCommonButtonBase @ 14a81e460

void __cdecl UCommonButtonBase::StaticRegisterNativesUCommonButtonBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x42;
  local_18.DataPtr = Z_Construct_UClass_UCommonButtonBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopDoubleClickPropagation @ 14a81ec00

void __thiscall UCommonButtonBase::StopDoubleClickPropagation(UCommonButtonBase *this)

{
  this->bStopDoubleClickPropagation = 1;
  return;
}

// SynchronizeProperties @ 14a81ff40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonButtonBase::SynchronizeProperties(UCommonButtonBase *this)

{
  UUserWidget::SynchronizeProperties((UUserWidget *)this);
  RefreshDimensions(this);
  BuildStyles(this);
  return;
}

// UnbindInputMethodChangedDelegate @ 14a8252a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::UnbindInputMethodChangedDelegate(UCommonButtonBase *this)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  
  pUVar1 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnInputMethodChangedNative,this);
    return;
  }
  return;
}

// UnbindTriggeringInputActionToClick @ 14a825350

void __thiscall UCommonButtonBase::UnbindTriggeringInputActionToClick(UCommonButtonBase *this)

{
  bool bVar1;
  
  if (((this->TriggeredInputAction).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) &&
     ((this->TriggeredInputAction).RowName == (FName)0x0)) {
    bVar1 = FUIActionBindingHandle::IsValid(&this->TriggeringBindingHandle);
    if (bVar1) {
      FUIActionBindingHandle::Unregister(&this->TriggeringBindingHandle);
    }
    this->CurrentHoldTime = 0.0;
    this->CurrentHoldProgress = 0.0;
  }
  return;
}

// UpdateHoldData @ 14a826c20

void __thiscall UCommonButtonBase::UpdateHoldData(UCommonButtonBase *this,ECommonInputType param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  float fVar4;
  UClass *pUVar5;
  UCommonUIHoldData *pUVar6;
  
  pUVar2 = (this->HoldData).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UCommonUIHoldData_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((bVar3) && ((this->HoldData).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
        (this->bRequiresHold != '\0')) &&
       (pUVar6 = TSubclassOf<UCommonUIHoldData>::GetDefaultObject(&this->HoldData),
       pUVar6 != (UCommonUIHoldData *)0x0)) {
      if (param_1 == MouseAndKeyboard) {
        this->HoldTime = (pUVar6->KeyboardAndMouse).HoldTime;
        fVar4 = (pUVar6->KeyboardAndMouse).HoldRollbackTime;
      }
      else if (param_1 == Gamepad) {
        this->HoldTime = (pUVar6->Gamepad).HoldTime;
        fVar4 = (pUVar6->Gamepad).HoldRollbackTime;
      }
      else {
        if (param_1 != Touch) {
          return;
        }
        this->HoldTime = (pUVar6->Touch).HoldTime;
        fVar4 = (pUVar6->Touch).HoldRollbackTime;
      }
      this->HoldRollbackTime = fVar4;
    }
  }
  return;
}

// UpdateInputActionWidget @ 14a827060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::UpdateInputActionWidget(UCommonButtonBase *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UGameInstance *pUVar4;
  UCommonInputSettings *pUVar5;
  UInputAction *pUVar6;
  FDataTableRowHandle *pFVar7;
  UCommonActionWidget *pUVar8;
  longlong lVar9;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  undefined8 local_10;
  
  pUVar4 = UWidget::GetGameInstance((UWidget *)this);
  if (pUVar4 == (UGameInstance *)0x0) {
    return;
  }
  if ((this->InputActionWidget).field0_0x0.DebugPtr == (UCommonActionWidget *)0x0) {
    return;
  }
  bVar2 = CommonUI::IsEnhancedInputSupportEnabled();
  if ((bVar2) && ((this->TriggeringEnhancedInputAction).field0_0x0.DebugPtr != (UInputAction *)0x0))
  {
    (**(code **)(*(longlong *)(this->InputActionWidget).field0_0x0.DebugPtr + 0x318))();
    UpdateInputActionWidgetVisibility(this);
    return;
  }
  pFVar7 = &this->TriggeringInputAction;
  if (((((pFVar7->DataTable).field0_0x0.DebugPtr == (UDataTable *)0x0) &&
       ((this->TriggeringInputAction).RowName == (FName)0x0)) &&
      (pFVar7 = &this->TriggeredInputAction,
      (pFVar7->DataTable).field0_0x0.DebugPtr == (UDataTable *)0x0)) &&
     ((this->TriggeredInputAction).RowName == (FName)0x0)) {
    if (((this->bShouldUseFallbackDefaultInputAction == '\0') || (this->bButtonEnabled == '\0')) ||
       (cVar3 = (**(code **)(this->_padding_ + 0x2c8))(this), cVar3 == '\0')) {
      if (bVar2) {
        (**(code **)(*(longlong *)(this->InputActionWidget).field0_0x0.DebugPtr + 0x318))();
      }
      pUVar8 = (this->InputActionWidget).field0_0x0.DebugPtr;
      local_18.DebugPtr = (UDataTable *)0x0;
      local_10 = 0;
      (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8,&local_18);
    }
    else {
      if (bVar2) {
        pUVar5 = ICommonInputModule::GetSettings();
        pUVar6 = UCommonInputSettings::GetEnhancedInputClickAction(pUVar5);
        pUVar8 = (this->InputActionWidget).field0_0x0.DebugPtr;
        lVar9 = *(longlong *)pUVar8;
        if (pUVar6 != (UInputAction *)0x0) {
          (**(code **)(lVar9 + 0x318))(pUVar8,pUVar6);
          goto LAB_14a8271e5;
        }
      }
      else {
        pUVar8 = (this->InputActionWidget).field0_0x0.DebugPtr;
        lVar9 = *(longlong *)pUVar8;
      }
      pUVar5 = ICommonInputModule::GetSettings();
      pFVar7 = UCommonInputSettings::GetDefaultClickAction
                         (pUVar5,(FDataTableRowHandle *)&local_18.ObjectPtr);
      (**(code **)(lVar9 + 800))(pUVar8,pFVar7);
    }
  }
  else {
    pUVar8 = (this->InputActionWidget).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(*(longlong *)pUVar8 + 800);
    pFVar7 = FDataTableRowHandle::FDataTableRowHandle
                       ((FDataTableRowHandle *)&local_18.ObjectPtr,pFVar7);
    (*pcVar1)(pUVar8,pFVar7);
  }
LAB_14a8271e5:
  UpdateInputActionWidgetVisibility(this);
  return;
}

// UpdateInputActionWidgetVisibility @ 14a827210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonButtonBase::UpdateInputActionWidgetVisibility(UCommonButtonBase *this)

{
  undefined1 *puVar1;
  UCommonActionWidget *pUVar2;
  ECommonInputType EVar3;
  ULocalPlayer *pUVar4;
  UCommonInputSubsystem *this_00;
  bool bVar5;
  
  if ((this->InputActionWidget).field0_0x0.DebugPtr == (UCommonActionWidget *)0x0) {
    return;
  }
  bVar5 = false;
  pUVar4 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  this_00 = UCommonInputSubsystem::Get(pUVar4);
  if ((this->bHideInputAction == false) &&
     (((this_00 == (UCommonInputSubsystem *)0x0 || (this->bHideInputActionWithKeyboard == 0)) ||
      (EVar3 = UCommonInputSubsystem::GetCurrentInputType(this_00), EVar3 == Gamepad)))) {
    if (this->bSelected == 0) {
      if ((!(bool)this->bDisplayInputActionWhenNotInteractable) &&
         (bVar5 = false, this->bInteractionEnabled == '\0')) {
        bVar5 = true;
      }
      goto LAB_14a827298;
    }
    if (((this->bToggleable != '\0') || ((bool)this->bDisplayInputActionWhenNotInteractable)) ||
       (this->bInteractableWhenSelected != '\0')) goto LAB_14a827298;
  }
  bVar5 = true;
LAB_14a827298:
  pUVar2 = (this->InputActionWidget).field0_0x0.DebugPtr;
  pUVar2->bAlwaysHideOverride = bVar5;
  (**(code **)(*(longlong *)pUVar2 + 0x350))();
  return;
}

// execClearSelection @ 14a82caa0

void __cdecl UCommonButtonBase::execClearSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectedInternal((UCommonButtonBase *)param_1,false,false,true);
  return;
}

// execDisableButtonWithReason @ 14a82ce00

void __cdecl
UCommonButtonBase::execDisableButtonWithReason(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DisableButtonWithReason((UCommonButtonBase *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetConvertInputActionToHold @ 14a82d830

void __cdecl
UCommonButtonBase::execGetConvertInputActionToHold(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x5e8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetCurrentButtonPadding @ 14a82d870

void __cdecl
UCommonButtonBase::execGetCurrentButtonPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UCommonButtonStyle *pUVar3;
  uchar *puVar4;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar4 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetStyleCDO((UCommonButtonBase *)param_1);
  if (pUVar3 != (UCommonButtonStyle *)0x0) {
    uVar2 = *(undefined8 *)&(pUVar3->ButtonPadding).Right;
    *(undefined8 *)puVar4 = *(undefined8 *)&pUVar3->ButtonPadding;
    *(undefined8 *)(puVar4 + 8) = uVar2;
  }
  return;
}

// execGetCurrentCustomPadding @ 14a82d930

void __cdecl
UCommonButtonBase::execGetCurrentCustomPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UCommonButtonStyle *pUVar3;
  uchar *puVar4;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar4 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetStyleCDO((UCommonButtonBase *)param_1);
  if (pUVar3 != (UCommonButtonStyle *)0x0) {
    uVar2 = *(undefined8 *)&(pUVar3->CustomPadding).Right;
    *(undefined8 *)puVar4 = *(undefined8 *)&pUVar3->CustomPadding;
    *(undefined8 *)(puVar4 + 8) = uVar2;
  }
  return;
}

// execGetCurrentTextStyle @ 14a82d9f0

void __cdecl
UCommonButtonBase::execGetCurrentTextStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetCurrentTextStyle((UCommonButtonBase *)param_1);
  *(UCommonTextStyle **)param_3 = pUVar1;
  return;
}

// execGetCurrentTextStyleClass @ 14a82da30

void __cdecl
UCommonButtonBase::execGetCurrentTextStyleClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonTextStyle *pUVar1;
  UObject *pUVar2;
  
  pUVar2 = (UObject *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetCurrentTextStyle((UCommonButtonBase *)param_1);
  if (pUVar1 != (UCommonTextStyle *)0x0) {
    pUVar2 = *(UObject **)&pUVar1->field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14a82da8c;
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
LAB_14a82da8c:
  *(UObject **)param_3 = pUVar2;
  return;
}

// execGetEnhancedInputAction @ 14a82de60

void __cdecl
UCommonButtonBase::execGetEnhancedInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x20);
  return;
}

// execGetInputAction @ 14a82e220

void __cdecl UCommonButtonBase::execGetInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  TObjectPtr<UDataTable_const_>_u_0 *this;
  TObjectPtr<UDataTable_const_>_u_0 local_18;
  undefined8 local_10;
  
  local_18.DebugPtr = (UDataTable *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UDataTable_const_>_u_0 *)0x0) {
    this = (TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x1f].field_0x18;
  if ((lVar2 == 0) && (*(longlong *)&param_1[0x1f].field_0x20 == 0)) {
    bVar3 = false;
  }
  else if ((*(longlong *)&param_1[0x20].field_0x8 == 0) &&
          (*(longlong *)&param_1[0x20].field_0x10 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((lVar2 == 0) && (*(longlong *)&param_1[0x1f].field_0x20 == 0)) &&
      (*(longlong *)&param_1[0x20].field_0x8 == 0)) && (*(longlong *)&param_1[0x20].field_0x10 == 0)
     ) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined1 *)param_3 = 0;
  }
  else if ((lVar2 == 0) && (*(longlong *)&param_1[0x1f].field_0x20 == 0)) {
    FDataTableRowHandle::operator=
              ((FDataTableRowHandle *)&this->ObjectPtr,
               (FDataTableRowHandle *)&param_1[0x20].field_0x8);
    *(undefined1 *)param_3 = 1;
  }
  else {
    FDataTableRowHandle::operator=
              ((FDataTableRowHandle *)&this->ObjectPtr,
               (FDataTableRowHandle *)&param_1[0x1f].field_0x18);
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetIsFocusable @ 14a82e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UCommonButtonBase::execGetIsFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UUserWidget::IsFocusable((UUserWidget *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetLocked @ 14a82e6e0

void __cdecl UCommonButtonBase::execGetLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x1e].field_0x20 >> 1 & 1;
  return;
}

// execGetRequiredHoldTime @ 14a82ed50

void __cdecl
UCommonButtonBase::execGetRequiredHoldTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2b);
  return;
}

// execGetRequiresHold @ 14a82ed80

void __cdecl UCommonButtonBase::execGetRequiresHold(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x1e].field_0x21 >> 2 & 1;
  return;
}

// execGetSelected @ 14a82edb0

void __cdecl UCommonButtonBase::execGetSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x1f].field_0x9 & 1;
  return;
}

// execGetShouldSelectUponReceivingFocus @ 14a82f350

void __cdecl
UCommonButtonBase::execGetShouldSelectUponReceivingFocus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x1e].field_0x20 >> 3 & 1;
  return;
}

// execGetSingleMaterialStyleMID @ 14a82f380

void __cdecl
UCommonButtonBase::execGetSingleMaterialStyleMID(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x2d].field_0x8;
  return;
}

// execGetStyle @ 14a82f480

void __cdecl UCommonButtonBase::execGetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  UCommonButtonStyle *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetStyleCDO((UCommonButtonBase *)param_1);
  *(UCommonButtonStyle **)param_3 = pUVar1;
  return;
}

// execHandleButtonClicked @ 14a82f820

void __cdecl
UCommonButtonBase::execHandleButtonClicked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a82f838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x538))();
  return;
}

// execHandleButtonPressed @ 14a82f960

void __cdecl
UCommonButtonBase::execHandleButtonPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a82f978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x558))();
  return;
}

// execHandleButtonReleased @ 14a82f990

void __cdecl
UCommonButtonBase::execHandleButtonReleased(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a82f9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x560))();
  return;
}

// execHandleFocusLost @ 14a82f9c0

void __cdecl UCommonButtonBase::execHandleFocusLost(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a82f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x550))();
  return;
}

// execHandleFocusReceived @ 14a82f9f0

void __cdecl
UCommonButtonBase::execHandleFocusReceived(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a82fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x548))();
  return;
}

// execHandleTriggeringActionCommited @ 14a82ff70

void __cdecl
UCommonButtonBase::execHandleTriggeringActionCommited
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,puVar2);
  return;
}

// execHoldReset @ 14a830120

void __cdecl UCommonButtonBase::execHoldReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a830138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x610))();
  return;
}

// execIsHoverSimulationOnTouchAvailable @ 14a830430

void __cdecl
UCommonButtonBase::execIsHoverSimulationOnTouchAvailable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = UE::CommonUI::Private::EnableSimulateHoverOnTouchInput != 0;
  return;
}

// execIsInteractionEnabled @ 14a830460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonButtonBase::execIsInteractionEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = UWidget::GetVisibility((UWidget *)param_1);
  bVar2 = UWidget::GetIsEnabled((UWidget *)param_1);
  if (((bVar2) && ((param_1[0x1f].field_0x9 & 6) == 6)) && (1 < (byte)(EVar1 - Collapsed))) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsPressed @ 14a8306c0

void __cdecl UCommonButtonBase::execIsPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    lVar1 = *(longlong *)&pUVar3[0x2d].field_0x10;
    if (lVar1 != 0) {
      if (((*(byte *)(lVar1 + 0x464) & 2) == 0) && (*(char *)(lVar1 + 0x4ac) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execNativeOnActionComplete @ 14a830830

void __cdecl
UCommonButtonBase::execNativeOnActionComplete(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a830848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x608))();
  return;
}

// execNativeOnActionProgress @ 14a830860

void __cdecl
UCommonButtonBase::execNativeOnActionProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x5f0))(param_1,local_res8[0]);
  return;
}

// execNativeOnHoldProgress @ 14a8308f0

void __cdecl
UCommonButtonBase::execNativeOnHoldProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execNativeOnHoldProgressRollback @ 14a830990

void __cdecl
UCommonButtonBase::execNativeOnHoldProgressRollback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x600))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execOnInputMethodChanged @ 14a830e50

void __cdecl
UCommonButtonBase::execOnInputMethodChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0]);
  return;
}

// execSetAllowDragDrop @ 14a832100

void __cdecl UCommonButtonBase::execSetAllowDragDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UButton *this;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar2) {
    this = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    UButton::SetAllowDragDrop(this,bVar3);
  }
  return;
}

// execSetClickMethod @ 14a8328d0

void __cdecl UCommonButtonBase::execSetClickMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UButton *this;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1f].field_0xa = local_res8[0];
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar2) {
    this = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    UButton::SetClickMethod(this,(uint)(byte)param_1[0x1f].field_0xa);
  }
  return;
}

// execSetClickedSoundOverride @ 14a832980

void __cdecl
UCommonButtonBase::execSetClickedSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)(param_1 + 0x1a));
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)(param_1 + 0x1a) = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetHideInputAction @ 14a833000

void __cdecl
UCommonButtonBase::execSetHideInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x19].field_0x8 = local_res8[0] != 0;
  UpdateInputActionWidgetVisibility((UCommonButtonBase *)param_1);
  return;
}

// execSetHoveredSoundOverride @ 14a833130

void __cdecl
UCommonButtonBase::execSetHoveredSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1a].field_0x18);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1a].field_0x18 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetInputActionProgressMaterial @ 14a8334b0

void __cdecl
UCommonButtonBase::execSetInputActionProgressMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FSlateBrush *pFVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UMaterialInterface *pUVar5;
  UClass *pUVar6;
  UMaterialInstanceDynamic *pUVar7;
  FSlateBrush *pFVar8;
  uchar *puVar9;
  uchar local_res8 [16];
  TAttribute<FSlateBrush_const_*> local_108;
  FSlateBrush local_d8;
  
  FSlateBrush::FSlateBrush(&local_d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar2 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar8 = &local_d8;
  if (pFVar2 != (FSlateBrush *)0x0) {
    pFVar8 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(param_1 + 0x95);
  if (lVar4 == 0) goto LAB_14a83367b;
  pFVar2 = (FSlateBrush *)(lVar4 + 0x1e0);
  FSlateBrush::operator=(pFVar2,pFVar8);
  pUVar5 = *(UMaterialInterface **)(lVar4 + 0x218);
  *(undefined8 *)(lVar4 + 0x290) = *(undefined8 *)puVar9;
  if (pUVar5 == (UMaterialInterface *)0x0) {
LAB_14a833632:
    *(undefined8 *)(lVar4 + 0x380) = 0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14a833632;
    local_res8[8] = '\0';
    local_res8[9] = '\0';
    local_res8[10] = '\0';
    local_res8[0xb] = '\0';
    local_res8[0xc] = '\0';
    local_res8[0xd] = '\0';
    local_res8[0xe] = '\0';
    local_res8[0xf] = '\0';
    pUVar7 = UMaterialInstanceDynamic::Create(pUVar5,(UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    *(UMaterialInstanceDynamic **)(lVar4 + 0x380) = pUVar7;
    FSlateBrush::SetResourceObject(pFVar2,(UObject *)pUVar7);
  }
  if (*(longlong *)(lVar4 + 0x3a8) != 0) {
    local_108.Getter._0_8_ = 0;
    local_108.Getter._8_8_ = 0;
    local_108.Getter._16_8_ = 0;
    local_108.bIsSet = true;
    local_108.Value = pFVar2;
    SImage::SetImage(*(SImage **)(lVar4 + 0x3a8),&local_108);
  }
LAB_14a83367b:
  local_d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetIsFocusable @ 14a8337e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UCommonButtonBase::execSetIsFocusable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UButton *this;
  bool bVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UUserWidget::SetIsFocusable((UUserWidget *)param_1,bVar4);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar3) {
    this = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    UButton::InitIsFocusable(this,bVar4);
    lVar2 = this[1]._padding_;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) & 0xfe;
      *(byte *)(lVar2 + 0x464) = *(byte *)(lVar2 + 0x464) | bVar4;
    }
  }
  return;
}

// execSetIsInteractableWhenSelected @ 14a8338c0

void __cdecl
UCommonButtonBase::execSetIsInteractableWhenSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  byte bVar2;
  FProperty *pFVar3;
  bool bVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[0x1e].field_0x20;
  if (bVar4 != (bool)(bVar1 >> 4 & 1)) {
    bVar2 = param_1[0x1f].field_0x9;
    param_1[0x1e].field_0x20 = bVar1 & 0xef | bVar4 << 4;
    if (((bVar2 & 1) != 0) && ((bVar1 & 0x20) == 0)) {
      SetIsInteractionEnabled((UCommonButtonBase *)param_1,bVar4);
    }
  }
  return;
}

// execSetIsInteractionEnabled @ 14a833980

void __cdecl
UCommonButtonBase::execSetIsInteractionEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsInteractionEnabled((UCommonButtonBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetIsLocked @ 14a833ab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UCommonButtonBase::execSetIsLocked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UFunction *pUVar2;
  byte local_res8 [8];
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != 0) != (bool)((byte)param_1[0x1e].field_0x20 >> 1 & 1)) {
    param_1[0x1e].field_0x20 = param_1[0x1e].field_0x20 & 0xfd | (local_res10[0] != 0) * '\x02';
    SetButtonStyle((UCommonButtonBase *)param_1);
    local_res8[0] = (byte)param_1[0x1e].field_0x20 >> 1 & 1;
    pUVar2 = UObject::FindFunctionChecked(param_1,NAME_UCommonButtonBase_BP_OnLockedChanged);
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar2,local_res8);
    UWidget::BroadcastBinaryPostStateChange
              ((UWidget *)param_1,&UWidgetLockedStateRegistration::Bit,
               (bool)((byte)param_1[0x1e].field_0x20 >> 1 & 1));
  }
  return;
}

// execSetIsSelectable @ 14a833c80

void __cdecl UCommonButtonBase::execSetIsSelectable(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((bVar3 != (bool)((byte)param_1[0x1e].field_0x20 >> 2 & 1)) &&
      (bVar1 = param_1[0x1f].field_0x9,
      param_1[0x1e].field_0x20 = param_1[0x1e].field_0x20 & 0xfb | bVar3 << 2, (bVar1 & 1) != 0)) &&
     (!bVar3)) {
    SetSelectedInternal((UCommonButtonBase *)param_1,false,true,true);
  }
  return;
}

// execSetIsSelected @ 14a833d50

void __cdecl UCommonButtonBase::execSetIsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsSelected((UCommonButtonBase *)param_1,bVar2,local_res20[0] != 0);
  return;
}

// execSetIsToggleable @ 14a833e30

void __cdecl UCommonButtonBase::execSetIsToggleable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsToggleable((UCommonButtonBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetLockedClickedSoundOverride @ 14a834710

void __cdecl
UCommonButtonBase::execSetLockedClickedSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1d].field_0x18);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1d].field_0x18 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetLockedHoveredSoundOverride @ 14a8347d0

void __cdecl
UCommonButtonBase::execSetLockedHoveredSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1e].field_0x8);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1e].field_0x8 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetLockedPressedSoundOverride @ 14a834890

void __cdecl
UCommonButtonBase::execSetLockedPressedSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)(param_1 + 0x1d));
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)(param_1 + 0x1d) = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetMaxDimensions @ 14a834b50

void __cdecl UCommonButtonBase::execSetMaxDimensions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x18].field_0x1c = local_res8[0];
  *(undefined4 *)&param_1[0x18].field_0x20 = local_res10[0];
  RefreshDimensions((UCommonButtonBase *)param_1);
  return;
}

// execSetMinDimensions @ 14a834c30

void __cdecl UCommonButtonBase::execSetMinDimensions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x18].field_0x14 = local_res8[0];
  *(undefined4 *)&param_1[0x18].field_0x18 = local_res10[0];
  RefreshDimensions((UCommonButtonBase *)param_1);
  return;
}

// execSetPressMethod @ 14a835000

void __cdecl UCommonButtonBase::execSetPressMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UButton *this;
  Type TVar3;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar3 = (Type)local_res8[0];
  param_1[0x1f].field_0xc = local_res8[0];
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar2) {
    this = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    UButton::SetPressMethod(this,TVar3);
  }
  return;
}

// execSetPressedSoundOverride @ 14a8350b0

void __cdecl
UCommonButtonBase::execSetPressedSoundOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x19].field_0x10);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x19].field_0x10 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetRequiresHold @ 14a835170

void __cdecl UCommonButtonBase::execSetRequiresHold(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRequiresHold((UCommonButtonBase *)param_1,local_res10[0] != 0);
  return;
}

// execSetSelectedClickedSoundOverride @ 14a8353d0

void __cdecl
UCommonButtonBase::execSetSelectedClickedSoundOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1b].field_0x20);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1b].field_0x20 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetSelectedHoveredSoundOverride @ 14a835490

void __cdecl
UCommonButtonBase::execSetSelectedHoveredSoundOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1c].field_0x10);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1c].field_0x10 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetSelectedInternal @ 14a835550

void __cdecl
UCommonButtonBase::execSetSelectedInternal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  int local_28 [4];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_28[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectedInternal((UCommonButtonBase *)param_1,bVar2,bVar3,local_28[0] != 0);
  return;
}

// execSetSelectedPressedSoundOverride @ 14a835710

void __cdecl
UCommonButtonBase::execSetSelectedPressedSoundOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FSlateSound::GetResourceObject((FSlateSound *)&param_1[0x1b].field_0x8);
  if (pUVar3 != pUVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)&param_1[0x1b].field_0x8 = pUVar2;
    BuildStyles((UCommonButtonBase *)param_1);
  }
  return;
}

// execSetShouldSelectUponReceivingFocus @ 14a835960

void __cdecl
UCommonButtonBase::execSetShouldSelectUponReceivingFocus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[0x1e].field_0x20 & 4) == 0) && (local_res8[0] != 0)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1629923265445100359>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonButtonBase.cpp"
                       ,0x4b9,"bSelectable || !bInShouldSelectUponReceivingFocus");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    param_1[0x1e].field_0x20 = param_1[0x1e].field_0x20 & 0xf7 | (local_res8[0] != 0) << 3;
  }
  return;
}

// execSetShouldUseFallbackDefaultInputAction @ 14a835a40

void __cdecl
UCommonButtonBase::execSetShouldUseFallbackDefaultInputAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1e].field_0x21 = param_1[0x1e].field_0x21 & 0xfd;
  lVar2 = *(longlong *)param_1;
  param_1[0x1e].field_0x21 = param_1[0x1e].field_0x21 | -(local_res8[0] != 0) & 2U;
  (**(code **)(lVar2 + 0x530))(param_1);
  return;
}

// execSetStyle @ 14a835bc0

void __cdecl UCommonButtonBase::execSetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res10;
  
  pUVar8 = (UObject *)0x0;
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res10 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (local_res10 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar6 = UCommonButtonStyle::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar3 = *(longlong *)(param_1 + 0x19);
      pUVar7 = pUVar8;
      if ((lVar3 != 0) && (pUVar6 = UCommonButtonStyle::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar7 = *(UObject **)(param_1 + 0x19);
        }
      }
      pUVar6 = UCommonButtonStyle::StaticClass();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar8 = pUVar5;
        }
      }
      if (pUVar7 != pUVar8) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        *(UObject **)(param_1 + 0x19) = pUVar5;
        BuildStyles((UCommonButtonBase *)param_1);
      }
    }
  }
  return;
}

// execSetTouchMethod @ 14a8362d0

void __cdecl UCommonButtonBase::execSetTouchMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UButton *this;
  Type TVar3;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar3 = (Type)local_res8[0];
  param_1[0x1f].field_0xb = local_res8[0];
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[0x88].field_0x24);
  if (bVar2) {
    this = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x88].field_0x24);
    UButton::SetTouchMethod(this,TVar3);
  }
  return;
}

// execSetTriggeredInputAction @ 14a836420

void __cdecl
UCommonButtonBase::execSetTriggeredInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  UFunction *pUVar9;
  uchar *puVar10;
  uchar local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar10 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1);
  *(undefined8 *)&param_1[0x1f].field_0x18 = 0;
  *(undefined8 *)&param_1[0x1f].field_0x20 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  local_10 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar10);
  }
  uVar2 = puVar10[1];
  uVar3 = puVar10[2];
  uVar4 = puVar10[3];
  uVar5 = puVar10[4];
  uVar6 = puVar10[5];
  uVar7 = puVar10[6];
  uVar8 = puVar10[7];
  param_1[0x20].field_0x8 = puVar10[0];
  param_1[0x20].field_0x9 = uVar2;
  param_1[0x20].field_0xa = uVar3;
  param_1[0x20].field_0xb = uVar4;
  param_1[0x20].field_0xc = uVar5;
  param_1[0x20].field_0xd = uVar6;
  param_1[0x20].field_0xe = uVar7;
  param_1[0x20].field_0xf = uVar8;
  uVar2 = puVar10[9];
  uVar3 = puVar10[10];
  uVar4 = puVar10[0xb];
  uVar5 = puVar10[0xc];
  uVar6 = puVar10[0xd];
  uVar7 = puVar10[0xe];
  uVar8 = puVar10[0xf];
  param_1[0x20].field_0x10 = puVar10[8];
  param_1[0x20].field_0x11 = uVar2;
  param_1[0x20].field_0x12 = uVar3;
  param_1[0x20].field_0x13 = uVar4;
  param_1[0x20].field_0x14 = uVar5;
  param_1[0x20].field_0x15 = uVar6;
  param_1[0x20].field_0x16 = uVar7;
  param_1[0x20].field_0x17 = uVar8;
  (**(code **)(*(longlong *)param_1 + 0x530))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar10);
  }
  local_18 = *(undefined8 *)puVar10;
  local_10 = *(undefined8 *)(puVar10 + 8);
  pUVar9 = UObject::FindFunctionChecked
                     (param_1,NAME_UCommonButtonBase_OnTriggeredInputActionChanged);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar9,&local_18);
  return;
}

// execSetTriggeringEnhancedInputAction @ 14a836570

void __cdecl
UCommonButtonBase::execSetTriggeringEnhancedInputAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UFunction *pUVar4;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = CommonUI::IsEnhancedInputSupportEnabled();
  if (bVar3) {
    if (*(UObject **)(param_1 + 0x20) == (UObject *)0x0) {
      bVar3 = pUVar2 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)(param_1 + 0x20) == pUVar2;
    }
    if (!bVar3) {
      (**(code **)(*(longlong *)param_1 + 0x510))(param_1);
      *(undefined8 *)&param_1[0x20].field_0x8 = 0;
      *(undefined8 *)&param_1[0x20].field_0x10 = 0;
      *(undefined8 *)&param_1[0x1f].field_0x18 = 0;
      *(undefined8 *)&param_1[0x1f].field_0x20 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)(param_1 + 0x20) = pUVar2;
      (**(code **)(*(longlong *)param_1 + 0x508))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x530))(param_1);
      local_res20 = pUVar2;
      pUVar4 = UObject::FindFunctionChecked
                         (param_1,NAME_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged);
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res20);
    }
  }
  return;
}

// execSetTriggeringInputAction @ 14a8366c0

void __cdecl
UCommonButtonBase::execSetTriggeringInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UFunction *pUVar3;
  TObjectPtr<UDataTable_const_>_u_0 *pTVar4;
  TObjectPtr<UDataTable_const_>_u_0 local_28;
  undefined8 local_20;
  FObjectPtr_u_0 local_18;
  TObjectPtr<UDataTable_const_>_u_0 local_10;
  
  local_28.DebugPtr = (UDataTable *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar4 = &local_28;
  if ((TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UDataTable_const_>_u_0 *)0x0) {
    pTVar4 = (TObjectPtr<UDataTable_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FDataTableRowHandle::operator!=
                    ((FDataTableRowHandle *)&param_1[0x1f].field_0x18,
                     (FDataTableRowHandle *)&pTVar4->ObjectPtr);
  if (bVar2) {
    (**(code **)(*(longlong *)param_1 + 0x510))(param_1);
    *(undefined8 *)&param_1[0x20].field_0x8 = 0;
    *(undefined8 *)&param_1[0x20].field_0x10 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    local_10 = (TObjectPtr<UDataTable_const_>_u_0)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((pTVar4->ObjectPtr).field0_0x0.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((pTVar4->ObjectPtr).field0_0x0.Handle);
    }
    *(FObjectPtr_u_0 *)&param_1[0x1f].field_0x18 = (pTVar4->ObjectPtr).field0_0x0;
    *(TObjectPtr<UDataTable_const_>_u_0 *)&param_1[0x1f].field_0x20 = pTVar4[1];
    (**(code **)(*(longlong *)param_1 + 0x508))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x530))(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((pTVar4->ObjectPtr).field0_0x0.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((pTVar4->ObjectPtr).field0_0x0.Handle);
    }
    local_18 = (pTVar4->ObjectPtr).field0_0x0;
    local_10 = pTVar4[1];
    pUVar3 = UObject::FindFunctionChecked
                       (param_1,NAME_UCommonButtonBase_OnTriggeringInputActionChanged);
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar3,&local_18);
  }
  return;
}

// execStopDoubleClickPropagation @ 14a836a80

void __cdecl
UCommonButtonBase::execStopDoubleClickPropagation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x88].field_0x20 = *(uint *)&param_1[0x88].field_0x20 | 1;
  return;
}

// execUpdateHoldData @ 14a836b40

void __cdecl UCommonButtonBase::execUpdateHoldData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8[0]);
  return;
}

