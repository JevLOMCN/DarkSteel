// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 329

// StaticClass @ 146945520

UClass * __cdecl UUserWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidget",&Z_Registration_Info_UClass_UUserWidget.InnerSingleton,
               StaticRegisterNativesUUserWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserWidget>,
               InternalVTableHelperCtorCaller<UUserWidget>,aFStackX_8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidget.InnerSingleton;
}

// AddExtension<UWidgetFieldNotificationExtension> @ 14696e940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetFieldNotificationExtension * __thiscall
UUserWidget::AddExtension<UWidgetFieldNotificationExtension>(UUserWidget *this)

{
  int iVar1;
  UWidgetFieldNotificationExtension *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UWidgetFieldNotificationExtension *)
           AddExtension(this,(TSubclassOf<UUserWidgetExtension>)&local_res10);
  if (pUVar2 == (UWidgetFieldNotificationExtension *)0x0) {
    pUVar2 = (UWidgetFieldNotificationExtension *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UWidgetFieldNotificationExtension>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&local_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetExtension<UWidgetFieldNotificationExtension> @ 146976b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetFieldNotificationExtension * __thiscall
UUserWidget::GetExtension<UWidgetFieldNotificationExtension>(UUserWidget *this)

{
  int iVar1;
  UWidgetFieldNotificationExtension *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UWidgetFieldNotificationExtension *)
           GetExtension(this,(TSubclassOf<UUserWidgetExtension>)&local_res10);
  if (pUVar2 == (UWidgetFieldNotificationExtension *)0x0) {
    pUVar2 = (UWidgetFieldNotificationExtension *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UWidgetFieldNotificationExtension>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&local_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetColorAndOpacity_WrapperImpl @ 146a49780

void __cdecl UUserWidget::GetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x210);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x208);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetColorAndOpacity_WrapperImpl @ 146a497a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::SetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetColorAndOpacity(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// GetForegroundColor_WrapperImpl @ 146a497d0

void __cdecl UUserWidget::GetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x238);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x240);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x230);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x10) = uVar1;
  return;
}

// SetForegroundColor_WrapperImpl @ 146a497f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::SetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  local_18 = *(undefined4 *)((longlong)param_2 + 0x10);
  SetForegroundColor(param_1,(FSlateColor *)&local_28._s_0);
  return;
}

// GetPadding_WrapperImpl @ 146a49820

void __cdecl UUserWidget::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x2c0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x2b8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 146a49880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// GetPriority_WrapperImpl @ 146a498f0

void __cdecl UUserWidget::GetPriority_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x2c8);
  return;
}

// SetPriority_WrapperImpl @ 146a49900

void __cdecl UUserWidget::SetPriority_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)((longlong)param_1 + 0x378) != 0) {
    uVar1 = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x2c8) = uVar1;
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x378) + 0x140) = uVar1;
  }
  return;
}

// GetbIsFocusable_WrapperImpl @ 146a49930

void __cdecl UUserWidget::GetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(byte *)param_2 = *(byte *)((longlong)param_1 + 0x2cc) & 1;
  return;
}

// SetbIsFocusable_WrapperImpl @ 146a49950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::SetbIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(byte *)((longlong)param_1 + 0x2cc) =
       (*(byte *)((longlong)param_1 + 0x2cc) ^ *(byte *)param_2) & 1 ^
       *(byte *)((longlong)param_1 + 0x2cc);
  Invalidate(param_1,Paint);
  return;
}

// GetbStopAction_WrapperImpl @ 146a49980

void __cdecl UUserWidget::GetbStopAction_WrapperImpl(void *param_1,void *param_2)

{
  *(byte *)param_2 = *(byte *)((longlong)param_1 + 0x2cc) >> 1 & 1;
  return;
}

// SetbStopAction_WrapperImpl @ 146a499a0

void __cdecl UUserWidget::SetbStopAction_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x378);
  if (lVar2 != 0) {
    bVar1 = *(byte *)param_2;
    *(byte *)((longlong)param_1 + 0x2cc) =
         (bVar1 * '\x02' ^ *(byte *)((longlong)param_1 + 0x2cc)) & 2 ^
         *(byte *)((longlong)param_1 + 0x2cc);
    *(byte *)(lVar2 + 0x144) = (*(byte *)(lVar2 + 0x144) ^ bVar1) & 1 ^ *(byte *)(lVar2 + 0x144);
  }
  return;
}

// AddExtension<UUIComponentUserWidgetExtension> @ 146a4d750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUIComponentUserWidgetExtension * __thiscall
UUserWidget::AddExtension<UUIComponentUserWidgetExtension>(UUserWidget *this)

{
  int iVar1;
  UUIComponentUserWidgetExtension *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = UUIComponentUserWidgetExtension::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UUIComponentUserWidgetExtension *)
           AddExtension(this,(TSubclassOf<UUserWidgetExtension>)&local_res10);
  if (pUVar2 == (UUIComponentUserWidgetExtension *)0x0) {
    pUVar2 = (UUIComponentUserWidgetExtension *)0x0;
  }
  else {
    pUVar3 = UUIComponentUserWidgetExtension::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UUIComponentUserWidgetExtension>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&local_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetExtension<UUIComponentUserWidgetExtension> @ 146a51630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUIComponentUserWidgetExtension * __thiscall
UUserWidget::GetExtension<UUIComponentUserWidgetExtension>(UUserWidget *this)

{
  int iVar1;
  UUIComponentUserWidgetExtension *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = UUIComponentUserWidgetExtension::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UUIComponentUserWidgetExtension *)
           GetExtension(this,(TSubclassOf<UUserWidgetExtension>)&local_res10);
  if (pUVar2 == (UUIComponentUserWidgetExtension *)0x0) {
    pUVar2 = (UUIComponentUserWidgetExtension *)0x0;
  }
  else {
    pUVar3 = UUIComponentUserWidgetExtension::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UUIComponentUserWidgetExtension>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&local_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// UUserWidget @ 146a567f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall UUserWidget::UUserWidget(UUserWidget *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnAnimationStartedPlayingEvent = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnAnimationFinishedPlayingEvent = 0;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x18 = 2;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  this->bUseCullingDeltaTime = true;
  this->LastAnimationTime = 0.0;
  this->_padding_ = (longlong)&___7UUserWidget__6B_;
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->ForegroundColorDelegate = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ForegroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ForegroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnVisibilityChanged = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnNativeVisibilityChanged = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnNativeDestruct = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x8 = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x10 = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x18 = 2;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->QueuedWidgetAnimationTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedWidgetAnimationTransitions).ArrayNum = 0;
  (this->QueuedWidgetAnimationTransitions).ArrayMax = 0;
  (this->ActiveSequencePlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSequencePlayers).ArrayNum = 0;
  (this->ActiveSequencePlayers).ArrayMax = 0;
  (this->AnimationTickManager).field0_0x0.DebugPtr = (UUMGSequenceTickManager *)0x0;
  (this->StoppedSequencePlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoppedSequencePlayers).ArrayNum = 0;
  (this->StoppedSequencePlayers).ArrayMax = 0;
  (this->ActiveAnimations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimations).ArrayNum = 0;
  (this->ActiveAnimations).ArrayMax = 0;
  this->bIsTickingAnimations = false;
  (this->NamedSlotBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedSlotBindings).ArrayNum = 0;
  (this->NamedSlotBindings).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->WidgetTree).field0_0x0.DebugPtr = (UWidgetTree *)0x0;
  FWidgetChild::FWidgetChild(&this->DesiredFocusWidget);
  (this->InputComponent).field0_0x0.DebugPtr = (UInputComponent *)0x0;
  (this->AnimationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationCallbacks).ArrayNum = 0;
  (this->AnimationCallbacks).ArrayMax = 0;
  FLocalPlayerContext::FLocalPlayerContext(&this->PlayerContext);
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UUserWidget @ 146a569e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall UUserWidget::UUserWidget(UUserWidget *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined4 local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnAnimationStartedPlayingEvent = 0;
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnAnimationFinishedPlayingEvent = 0;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x10 = 0;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  this->_padding_ = (longlong)&___7UUserWidget__6B_;
  *(undefined8 *)&(this->OnAnimationStartedPlayingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAnimationFinishedPlayingEvent).field_0x8 = 0;
  this->bUseCullingDeltaTime = true;
  this->LastAnimationTime = 0.0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->ForegroundColorDelegate = 0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ForegroundColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ForegroundColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnVisibilityChanged = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnNativeVisibilityChanged = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnNativeVisibilityChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnNativeDestruct = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x8 = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x10 = 0;
  *(undefined8 *)&(this->OnNativeDestruct).field_0x18 = 2;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->bAutomaticallyRegisterInputOnConstruction = '\0';
  puVar2 = &this->field_0x348;
  this->bHasScriptImplementedTick = '\x01';
  this->bStoppingAllAnimations = '\0';
  this->bAreExtensionsConstructed = '\0';
  this->bAreExtensionsPreConstructed = '\0';
  this->bInitialized = '\0';
  this->bHasScriptImplementedPaint = '\x01';
  (this->QueuedWidgetAnimationTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedWidgetAnimationTransitions).ArrayNum = 0;
  (this->QueuedWidgetAnimationTransitions).ArrayMax = 0;
  (this->ActiveSequencePlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSequencePlayers).ArrayNum = 0;
  (this->ActiveSequencePlayers).ArrayMax = 0;
  (this->AnimationTickManager).field0_0x0.DebugPtr = (UUMGSequenceTickManager *)0x0;
  (this->StoppedSequencePlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoppedSequencePlayers).ArrayNum = 0;
  (this->StoppedSequencePlayers).ArrayMax = 0;
  (this->ActiveAnimations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimations).ArrayNum = 0;
  (this->ActiveAnimations).ArrayMax = 0;
  this->bIsTickingAnimations = false;
  (this->NamedSlotBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedSlotBindings).ArrayNum = 0;
  (this->NamedSlotBindings).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->WidgetTree).field0_0x0.DebugPtr = (UWidgetTree *)0x0;
  this->TickFrequency = Auto;
  FWidgetChild::FWidgetChild(&this->DesiredFocusWidget);
  (this->InputComponent).field0_0x0.DebugPtr = (UInputComponent *)0x0;
  (this->AnimationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationCallbacks).ArrayNum = 0;
  (this->AnimationCallbacks).ArrayMax = 0;
  FLocalPlayerContext::FLocalPlayerContext(&this->PlayerContext);
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->bIsFocusable = '\0';
  uVar5 = _UNK_15090c6d8;
  uVar4 = ___xmm_3f8000003f800000000000003f800000;
  (this->ColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = uVar4;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar5;
  local_18._0_1_ = (undefined1)2;
  local_18._1_1_ = (undefined1)(2 >> 8);
  (this->ForegroundColor).ColorUseRule = (undefined1)local_18;
  (this->ForegroundColor).ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = local_18._2_2_;
  (this->MinimumDesiredSize).field0_0x0._s_0.X = 0.0;
  (this->MinimumDesiredSize).field0_0x0._s_0.Y = 0.0;
  if (bStaticInit == false) {
    bStaticInit = true;
    TMulticastDelegateRegistration<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
    ::AddStatic<>(&FLatentActionManager::LatentActionsChangedDelegate,
                  (_func___cdecl_void_UObject_ptr_ELatentActionChangeType *)local_res8);
  }
  return this;
}

// ~UUserWidget @ 146a58850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::~UUserWidget(UUserWidget *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UUserWidget__6B_;
  DestructItems<FAnimationEventBinding,int>
            ((FAnimationEventBinding *)(this->AnimationCallbacks).AllocatorInstance.Data,
             (this->AnimationCallbacks).ArrayNum);
  pFVar1 = (this->AnimationCallbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NamedSlotBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FWidgetAnimationState,1>,int>
            ((TSharedRef<FWidgetAnimationState,1> *)(this->ActiveAnimations).AllocatorInstance.Data,
             (this->ActiveAnimations).ArrayNum);
  pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StoppedSequencePlayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveSequencePlayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueuedWidgetAnimationTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNativeDestruct).field_0x8,*(int *)&(this->OnNativeDestruct).field_0x10);
  pvVar2 = *(void **)&(this->OnNativeDestruct).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNativeDestruct);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNativeVisibilityChanged).field_0x8,
             *(int *)&(this->OnNativeVisibilityChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnNativeVisibilityChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNativeVisibilityChanged);
  pvVar2 = *(void **)&(this->OnVisibilityChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVisibilityChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ForegroundColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ColorAndOpacityDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAnimationFinishedPlayingEvent).field_0x8,
             *(int *)&(this->OnAnimationFinishedPlayingEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnAnimationFinishedPlayingEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnimationFinishedPlayingEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAnimationStartedPlayingEvent).field_0x8,
             *(int *)&(this->OnAnimationStartedPlayingEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnAnimationStartedPlayingEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnimationStartedPlayingEvent);
  this->_padding_ = (longlong)&___7INamedSlotInterface__6B_;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 146a59950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UUserWidget::GetSlotNames'::__l9::<lambda_1>::operator()(void *this,UWidget *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong local_18 [2];
  
  if (param_1 != (UWidget *)0x0) {
    pUVar6 = Z_Construct_UClass_UNamedSlot_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      local_18[0] = param_1->_padding_;
      pFVar2 = *(ForAnyElementType **)this;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(longlong *)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

// AddExtension @ 146a5ccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUserWidgetExtension * __thiscall
UUserWidget::AddExtension(UUserWidget *this,TSubclassOf<UUserWidgetExtension> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UUserWidgetExtension>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UUserWidgetExtension *pUVar12;
  longlong lVar13;
  UClass *pUVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  UObject **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  UObject *local_b8;
  FName local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  pUVar14 = (UClass *)0x0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((lVar13 != 0) &&
     (pUVar10 = Z_Construct_UClass_UUserWidgetExtension_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar14 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar5 = local_b0;
  if (local_b0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar10 = Z_Construct_UClass_UUserWidgetExtension_NoRegister();
  CheckIsClassChildOf_Internal(pUVar10,pUVar14);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar14);
  FVar6 = local_b0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b0.ComparisonIndex = FVar5.ComparisonIndex.Value;
  local_b0.Number = FVar5.Number;
  local_a8._16_4_ = local_b0.ComparisonIndex.Value;
  local_a8._20_4_ = local_b0.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b0 = FVar6;
  local_a8._8_8_ = this;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar15 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  pTVar2 = &this->Extensions;
  local_b8 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
     (lVar13 = (longlong)(this->Extensions).ArrayMax,
     (FScriptContainerElement *)&local_b8 < pFVar3 + lVar13 * 8)) {
    local_d0 = (longlong)(this->Extensions).ArrayNum;
    local_c8 = 8;
    local_e8 = &local_b8;
    local_e0 = pFVar3;
    local_d8 = lVar13;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pUVar12 = (UUserWidgetExtension *)(*pcVar4)();
      return pUVar12;
    }
  }
  iVar9 = (this->Extensions).ArrayNum;
  piVar1 = &(this->Extensions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Extensions).ArrayNum = iVar9 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  if (this->bInitialized != '\0') {
    (**(code **)(*(longlong *)pUVar11 + 0x2b8))(pUVar11);
  }
  if (this->bAreExtensionsPreConstructed != '\0') {
    (**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11,0);
  }
  if (this->bAreExtensionsConstructed != '\0') {
    (**(code **)(*(longlong *)pUVar11 + 0x2c8))(pUVar11);
    cVar8 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
    if (cVar8 != '\0') {
      UpdateCanTick(this);
    }
  }
  return (UUserWidgetExtension *)pUVar11;
}

// AddReferencedObjects @ 146a5d5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this;
  code *pcVar3;
  bool bVar4;
  UUserWidget *pUVar5;
  int iVar6;
  
  UObject::AddReferencedObjects(param_1,param_2);
  pUVar5 = CastChecked<UUserWidget,UObject>(param_1);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (pUVar5->ActiveAnimations).ArrayNum)); iVar6 = iVar6 + 1)
  {
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (pUVar5->ActiveAnimations).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar6 * 0x10 + 8);
    this = *(FWidgetAnimationState **)(pFVar1 + (longlong)iVar6 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationState::AddReferencedObjects(this,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// AddToPlayerScreen @ 146a5d670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

bool __thiscall UUserWidget::AddToPlayerScreen(UUserWidget *this,int param_1)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  longlong lVar2;
  FGameViewportWidgetSlot *pFVar3;
  ULocalPlayer *pUVar4;
  FMessageLog *this_01;
  FText *pFVar5;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_108;
  FText local_f8;
  TVector2<double>_u_0 local_e8;
  double local_d8;
  double dStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_58;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    lVar2 = (**(code **)(this->_padding_ + 0x2e0))(this);
    if (lVar2 != 0) {
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      local_e8._8_4_ = 0;
      local_e8._12_4_ = 0;
      local_c8 = 0.0;
      fStack_c4 = 0.0;
      fStack_c0 = 0.0;
      fStack_bc = 0.0;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_58._0_5_ = CONCAT14(1,(undefined4)local_58);
      local_d8 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_d0 = _UNK_150689688;
      if ((this->_padding_ & 0x2000) != 0) {
        pFVar3 = UGameViewportSubsystem::GetWidgetSlot
                           (this_00,(FGameViewportWidgetSlot *)&local_e8._s_0,(UWidget *)this);
        local_58._0_4_ = pFVar3->ZOrder;
        local_58._4_1_ = pFVar3->bAutoRemoveOnWorldRemoved;
        local_58._5_3_ = *(undefined3 *)&pFVar3->field_0x45;
        local_e8._0_4_ = *(undefined4 *)&(pFVar3->Anchors).Minimum.field0_0x0;
        local_e8._4_4_ = *(undefined4 *)((longlong)&(pFVar3->Anchors).Minimum.field0_0x0 + 4);
        local_e8._8_4_ = *(undefined4 *)((longlong)&(pFVar3->Anchors).Minimum.field0_0x0 + 8);
        local_e8._12_4_ = *(undefined4 *)((longlong)&(pFVar3->Anchors).Minimum.field0_0x0 + 0xc);
        local_d8 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.X;
        dStack_d0 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.Y;
        local_c8 = (pFVar3->Offsets).Left;
        fStack_c4 = (pFVar3->Offsets).Top;
        fStack_c0 = (pFVar3->Offsets).Right;
        fStack_bc = (pFVar3->Offsets).Bottom;
        local_b8 = *(undefined4 *)&(pFVar3->Alignment).field0_0x0;
        uStack_b4 = *(undefined4 *)((longlong)&(pFVar3->Alignment).field0_0x0 + 4);
        uStack_b0 = *(undefined4 *)((longlong)&(pFVar3->Alignment).field0_0x0 + 8);
        uStack_ac = *(undefined4 *)((longlong)&(pFVar3->Alignment).field0_0x0 + 0xc);
      }
      local_58 = CONCAT44(local_58._4_4_,param_1);
      pUVar4 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
      local_a8 = local_58;
      UGameViewportSubsystem::AddWidgetForPlayer
                (this_00,(UWidget *)this,pUVar4,(FGameViewportWidgetSlot *)&local_e8._s_0);
      return true;
    }
    ::FName::FName(&local_res8,"PIE");
    this_01 = FMessageLog::FMessageLog((FMessageLog *)&local_e8._s_0,&local_res8);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_f8,L"UMG",L"AddToPlayerScreen_NoPlayer",
                        L"AddToPlayerScreen Failed.  No Owning Player!");
    FMessageLog::Error(this_01,&local_108,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_e8._s_0);
  }
  return false;
}

// AddToViewport @ 146a5d840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UUserWidget::AddToViewport(UUserWidget *this,int param_1)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_18;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_18._0_5_ = CONCAT14(1,(undefined4)local_18);
    local_98 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_90 = _UNK_150689688;
    if ((this->_padding_ & 0x2000) != 0) {
      pFVar2 = UGameViewportSubsystem::GetWidgetSlot
                         (this_00,(FGameViewportWidgetSlot *)&local_a8._s_0,(UWidget *)this);
      local_18._0_4_ = pFVar2->ZOrder;
      local_18._4_1_ = pFVar2->bAutoRemoveOnWorldRemoved;
      local_18._5_3_ = *(undefined3 *)&pFVar2->field_0x45;
      local_a8._0_4_ = *(undefined4 *)&(pFVar2->Anchors).Minimum.field0_0x0;
      local_a8._4_4_ = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 4);
      local_a8._8_4_ = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 8);
      local_a8._12_4_ = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 0xc);
      local_98 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_90 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
      local_88 = (pFVar2->Offsets).Left;
      fStack_84 = (pFVar2->Offsets).Top;
      fStack_80 = (pFVar2->Offsets).Right;
      fStack_7c = (pFVar2->Offsets).Bottom;
      local_78 = *(undefined4 *)&(pFVar2->Alignment).field0_0x0;
      uStack_74 = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 4);
      uStack_70 = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 8);
      uStack_6c = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 0xc);
    }
    local_18 = CONCAT44(local_18._4_4_,param_1);
    local_68 = local_18;
    UGameViewportSubsystem::AddWidget
              (this_00,(UWidget *)this,(FGameViewportWidgetSlot *)&local_a8._s_0);
  }
  return;
}

// BeginDestroy @ 146a5e750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::BeginDestroy(UUserWidget *this)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FWidgetAnimationState *this_00;
  TSharedRef<FWidgetAnimationState,1> *pTVar4;
  UUMGSequenceTickManager *this_01;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  longlong lVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  
  UWidget::BeginDestroy((UWidget *)this);
  (**(code **)(this->_padding_ + 0x4d8))(this);
  lVar9 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (lVar9 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar9 + 0x140),this);
  }
  if (this->bIsTickingAnimations != false) {
    local_res8[0] = 0;
    `UUserWidget::TearDownAnimations'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar2 = &this->ActiveAnimations;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  while ((iVar10 = (int)pTVar11, -1 < iVar10 && (iVar10 < (this->ActiveAnimations).ArrayNum))) {
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar11 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar10 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar3 + (longlong)iVar10 * 0x10);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationState::TearDown(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)(iVar10 + 1);
  }
  piVar13 = &(this->ActiveAnimations).ArrayNum;
  piVar1 = &(this->ActiveAnimations).ArrayMax;
  pTVar4 = (TSharedRef<FWidgetAnimationState,1> *)(pTVar2->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<TSharedRef<FWidgetAnimationState,1>,int>(pTVar4,*piVar13);
    *piVar13 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetAnimationState,1>,int>(pTVar4,*piVar13);
    *piVar13 = 0;
  }
  this_01 = (this->AnimationTickManager).field0_0x0.DebugPtr;
  if (this_01 != (UUMGSequenceTickManager *)0x0) {
    UUMGSequenceTickManager::RemoveWidget(this_01,this);
    (this->AnimationTickManager).field0_0x0.DebugPtr = (UUMGSequenceTickManager *)0x0;
  }
  (**(code **)(this->_padding_ + 0x2d0))(this);
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar12 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar11->SharedReferenceCount;
    do {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (aVar6 == (atomic<int>)0x0) goto LAB_146a5e8e1;
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    pTVar12 = pTVar11;
    if ((SObjectWidget *)this->_padding_ != (SObjectWidget *)0x0) {
      SObjectWidget::ResetWidget((SObjectWidget *)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      return;
    }
  }
LAB_146a5e8e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// BindToAnimationEvent @ 146a5ea60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BindToAnimationEvent
          (UUserWidget *this,UWidgetAnimation *param_1,FWidgetAnimationDynamicEvent *param_2,
          EWidgetAnimationEvent param_3,FName param_4)

{
  int *piVar1;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UWidgetAnimation *local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FScriptContainerElement local_78;
  FName local_74;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = (FScriptContainerElement)0x0;
  local_74.ComparisonIndex.Value = 0;
  local_74.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidgetAnimation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_98 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  uVar4 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_68);
  uStack_88 = uVar3;
  local_80 = uVar4;
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pTVar2 = &this->AnimationCallbacks;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  local_74 = param_4;
  local_78 = (FScriptContainerElement)param_3;
  if ((pFVar8 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar8 + (longlong)(this->AnimationCallbacks).ArrayMax * 0x30)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->AnimationCallbacks).ArrayNum;
  piVar1 = &(this->AnimationCallbacks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AnimationCallbacks).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(UWidgetAnimation **)pFVar8 = local_98;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UWidgetAnimation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_90,&local_38);
  *(undefined8 *)(pFVar8 + 0x10) = uStack_88;
  *(undefined8 *)(pFVar8 + 0x18) = local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar8[0x20] = local_78;
  *(FName *)(pFVar8 + 0x24) = local_74;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// BindToAnimationFinished @ 146a5ec60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BindToAnimationFinished
          (UUserWidget *this,UWidgetAnimation *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  int *piVar1;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UWidgetAnimation *local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FScriptContainerElement local_78;
  undefined8 local_74;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = (FScriptContainerElement)0x0;
  local_74 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidgetAnimation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_98 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  uVar4 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_68);
  uStack_88 = uVar3;
  local_80 = uVar4;
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pTVar2 = &this->AnimationCallbacks;
  local_78 = (FScriptContainerElement)0x1;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar8 + (longlong)(this->AnimationCallbacks).ArrayMax * 0x30)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->AnimationCallbacks).ArrayNum;
  piVar1 = &(this->AnimationCallbacks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AnimationCallbacks).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(UWidgetAnimation **)pFVar8 = local_98;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UWidgetAnimation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_90,&local_38);
  *(undefined8 *)(pFVar8 + 0x10) = uStack_88;
  *(undefined8 *)(pFVar8 + 0x18) = local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar8[0x20] = local_78;
  *(undefined8 *)(pFVar8 + 0x24) = local_74;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// BindToAnimationStarted @ 146a5ee40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BindToAnimationStarted
          (UUserWidget *this,UWidgetAnimation *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  int *piVar1;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UWidgetAnimation *local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FScriptContainerElement local_78;
  undefined8 local_74;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = (FScriptContainerElement)0x0;
  local_74 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidgetAnimation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_98 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  uVar4 = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_68);
  uStack_88 = uVar3;
  local_80 = uVar4;
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pTVar2 = &this->AnimationCallbacks;
  local_78 = (FScriptContainerElement)0x0;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar8 + (longlong)(this->AnimationCallbacks).ArrayMax * 0x30)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->AnimationCallbacks).ArrayNum;
  piVar1 = &(this->AnimationCallbacks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AnimationCallbacks).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(UWidgetAnimation **)pFVar8 = local_98;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UWidgetAnimation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_90,&local_38);
  *(undefined8 *)(pFVar8 + 0x10) = uStack_88;
  *(undefined8 *)(pFVar8 + 0x18) = local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar8[0x20] = local_78;
  *(undefined8 *)(pFVar8 + 0x24) = local_74;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// BroadcastAnimationFinishedPlaying @ 146a5f140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BroadcastAnimationFinishedPlaying(UUserWidget *this,FWidgetAnimationState *param_1)

{
  FName FVar1;
  TObjectPtr<UWidgetAnimation>_u_0 TVar2;
  UUMGSequenceTickManager *this_00;
  Type TVar3;
  UUMGSequencePlayer *pUVar4;
  UFunction *this_01;
  UClass *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TObjectPtr<UWidgetAnimation>_u_0 local_res8;
  FDelegateAllocation local_28;
  
  FVar1 = param_1->UserTag;
  TVar2 = (TObjectPtr<UWidgetAnimation>_u_0)(param_1->Animation).field0_0x0.DebugPtr;
  TVar3 = FWidgetAnimationState::GetPlaybackStatus(param_1);
  pUVar4 = FWidgetAnimationState::GetLegacyPlayer(param_1);
  TMulticastDelegate<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnAnimationFinishedPlayingEvent,param_1);
  this_01 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnimationFinished);
  pUVar5 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar5->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = TVar2;
    (**(code **)(this->_padding_ + 0x260))(this,this_01,&local_res8);
  }
  else {
    (**(code **)(this->_padding_ + 0x338))(this,TVar2.DebugPtr);
  }
  BroadcastAnimationStateChange(this,TVar2.DebugPtr,FVar1,Finished);
  if (pUVar4 != (UUMGSequencePlayer *)0x0) {
    (**(code **)(this->_padding_ + 0x348))(this,pUVar4);
  }
  if ((TVar3 == Stopped) &&
     (this_00 = (this->AnimationTickManager).field0_0x0.DebugPtr,
     this_00 != (UUMGSequenceTickManager *)0x0)) {
    local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_28.DelegateSize = 0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_28);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUUserWidget____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res8 = (TObjectPtr<UWidgetAnimation>_u_0)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
      puVar6[4] = ClearStoppedAnimationStates;
      puVar6[5] = (ulonglong)(uint)local_28._12_4_ << 0x20;
    }
    UUMGSequenceTickManager::AddLatentAction
              (this_00,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &local_28);
  }
  UpdateCanTick(this);
  return;
}

// BroadcastAnimationStartedPlaying @ 146a5f2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BroadcastAnimationStartedPlaying(UUserWidget *this,FWidgetAnimationState *param_1)

{
  TObjectPtr<UWidgetAnimation>_u_0 TVar1;
  UFunction *this_00;
  UClass *pUVar2;
  UUMGSequencePlayer *pUVar3;
  TObjectPtr<UWidgetAnimation>_u_0 local_res8;
  
  TMulticastDelegate<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnAnimationStartedPlayingEvent,param_1);
  TVar1 = (TObjectPtr<UWidgetAnimation>_u_0)(param_1->Animation).field0_0x0.DebugPtr;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnimationStarted);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8 = TVar1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_res8);
  }
  else {
    (**(code **)(this->_padding_ + 0x330))(this,TVar1.DebugPtr);
  }
  BroadcastAnimationStateChange
            (this,(param_1->Animation).field0_0x0.DebugPtr,param_1->UserTag,Started);
  pUVar3 = FWidgetAnimationState::GetLegacyPlayer(param_1);
  if (pUVar3 != (UUMGSequencePlayer *)0x0) {
    (**(code **)(this->_padding_ + 0x340))(this,pUVar3);
  }
  return;
}

// BroadcastAnimationStateChange @ 146a5f3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BroadcastAnimationStateChange
          (UUserWidget *this,FWidgetAnimationState *param_1,EWidgetAnimationEvent param_2)

{
  BroadcastAnimationStateChange
            (this,(param_1->Animation).field0_0x0.DebugPtr,param_1->UserTag,param_2);
  return;
}

// BroadcastAnimationStateChange @ 146a5f3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BroadcastAnimationStateChange
          (UUserWidget *this,UWidgetAnimation *param_1,FName param_2,EWidgetAnimationEvent param_3)

{
  int iVar1;
  FAnimationEventBinding *pFVar2;
  UWidgetAnimation *pUVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  iVar1 = (this->AnimationCallbacks).ArrayNum;
  pFVar2 = (FAnimationEventBinding *)(this->AnimationCallbacks).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&local_38,iVar1,&local_2c);
    ConstructItems<FAnimationEventBinding,FAnimationEventBinding,int>(local_38.Data,pFVar2,iVar1);
  }
  iVar1 = local_30;
  pFVar5 = local_38.Data + (longlong)local_30 * 0x30;
  pFVar4 = (FName *)(local_38.Data + 0x24);
  while( true ) {
    if (local_30 != iVar1) {
      `TCheckedPointerIterator<FAnimationEventBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FScriptContainerElement *)&pFVar4[-5].Number == pFVar5) break;
    pUVar3 = *(UWidgetAnimation **)&pFVar4[-5].Number;
    if (pUVar3 == (UWidgetAnimation *)0x0) {
      bVar6 = param_1 == (UWidgetAnimation *)0x0;
    }
    else {
      bVar6 = pUVar3 == param_1;
    }
    if (((bVar6) && ((EWidgetAnimationEvent)pFVar4[-1].Number == param_3)) &&
       ((*pFVar4 == (FName)0x0 || (*pFVar4 == param_2)))) {
      bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                        ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&pFVar4[-4].Number);
      if (bVar6) {
        FWidgetAnimationDynamicEvent_DelegateWrapper
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&pFVar4[-4].Number);
      }
    }
    pFVar4 = pFVar4 + 6;
  }
  DestructItems<FAnimationEventBinding,int>((FAnimationEventBinding *)local_38.Data,local_30);
  if ((FAnimationEventBinding *)local_38.Data != (FAnimationEventBinding *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// BroadcastAnimationStateChange @ 146a5f520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::BroadcastAnimationStateChange
          (UUserWidget *this,UUMGSequencePlayer *param_1,EWidgetAnimationEvent param_2)

{
  FName FVar1;
  UWidgetAnimation *pUVar2;
  
  FVar1 = UUMGSequencePlayer::GetUserTag(param_1);
  FVar1 = *(FName *)FVar1;
  pUVar2 = UUMGSequencePlayer::GetAnimation(param_1);
  BroadcastAnimationStateChange(this,pUVar2,FVar1,param_2);
  return;
}

// CancelLatentActions @ 146a60640

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

void __thiscall UUserWidget::CancelLatentActions(UUserWidget *this)

{
  UWorld *this_00;
  FLatentActionManager *this_01;
  FTimerManager *this_02;
  FWeakObjectPtr local_res8;
  UUserWidget *local_res10;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FLatentActionManager::RemoveActionsForObject
              (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8);
    this_02 = UWorld::GetTimerManager(this_00);
    FTimerManager::InternalClearAllTimers(this_02,this);
    UpdateCanTick(this);
  }
  return;
}

// ClearStoppedAnimationStates @ 146a60ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::ClearStoppedAnimationStates(UUserWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetAnimationState *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  Type TVar5;
  int iVar6;
  uint uVar7;
  TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TIndexedContainerIterator<TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_>,TSharedRef<FWidgetAnimationState,1>,int>
  local_28;
  
  if (this->bIsTickingAnimations != false) {
    local_res8[0] = 0;
    `UUserWidget::ClearStoppedAnimationStates'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar8 = &this->ActiveAnimations;
  uVar7 = 0;
  local_28.Container = pTVar8;
  while( true ) {
    if ((int)uVar7 < 0) {
      return;
    }
    if (pTVar8->ArrayNum <= (int)uVar7) break;
    uVar4 = 0;
    if ((int)uVar7 < pTVar8->ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    local_28.Index = uVar7;
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
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)(int)uVar7 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar9 + (longlong)(int)uVar7 * 0x10);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FWidgetAnimationState::IsValid(this_00);
    if (bVar3) {
      TVar5 = FWidgetAnimationState::GetPlaybackStatus(this_00);
      if ((TVar5 == Stopped) && (!this_00->bIsStopping)) {
        FWidgetAnimationState::TearDown(this_00);
        TIndexedContainerIterator<TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_>,TSharedRef<FWidgetAnimationState,1>,int>
        ::RemoveCurrent(&local_28);
        pTVar8 = local_28.Container;
        uVar7 = local_28.Index;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar7 = uVar7 + 1;
    }
    else {
      uVar4 = 0;
      if ((int)uVar7 < pTVar8->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar9 = (pTVar8->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
      iVar6 = pTVar8->ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar6 << 4);
      }
      pTVar8->ArrayNum = pTVar8->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar8->AllocatorInstance,pTVar8->ArrayNum,&pTVar8->ArrayMax);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  return;
}

// ConditionalTearDownAnimations @ 146a61d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::ConditionalTearDownAnimations(UUserWidget *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  if (this->bIsTickingAnimations != false) {
    local_res8[0] = 0;
    `UUserWidget::ConditionalTearDownAnimations'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar9 = &this->ActiveAnimations;
  uVar7 = 0;
  while ((-1 < (int)uVar7 && ((int)uVar7 < (this->ActiveAnimations).ArrayNum))) {
    if ((int)uVar7 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = (pTVar9->AllocatorInstance).Data;
    lVar10 = (longlong)(int)uVar7 * 0x10;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + lVar10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar8 + lVar10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = FWidgetAnimationState::IsValid(this_00);
    if (bVar4) {
      if (!this_00->bIsStopping) {
        FWidgetAnimationState::TearDown(this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar7 = uVar7 + 1;
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < (this->ActiveAnimations).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar8 = (pTVar9->AllocatorInstance).Data + lVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar8 + 8));
      iVar6 = (this->ActiveAnimations).ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar6 << 4);
      }
      piVar1 = &(this->ActiveAnimations).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar9->AllocatorInstance,(this->ActiveAnimations).ArrayNum,
                 &(this->ActiveAnimations).ArrayMax);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// Construct @ 146a62ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::Construct(UUserWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Construct);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a62b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// CreateInputComponent @ 146a69570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UUserWidget::CreateInputComponent(UUserWidget *this)

{
  undefined1 *puVar1;
  UUserWidget *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  UInputComponent *pUVar5;
  FMessageLog *this_00;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FName local_res10;
  FName local_res18;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  if ((this->_padding_ & 0x10) == 0) {
    pUVar4 = (UClass *)this->_padding_;
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    pUVar2 = CastChecked<UUserWidget,UObject>((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr);
    puVar1 = &this->field_0x2cc;
    *puVar1 = *puVar1 ^ (*puVar1 ^ pUVar2->field_0x2cc) & 4;
  }
  if (this->bAutomaticallyRegisterInputOnConstruction != '\0') {
    lVar3 = (**(code **)(this->_padding_ + 0x2d8))();
    if (lVar3 == 0) {
      ::FName::FName(&local_res10,"PIE");
      this_00 = FMessageLog::FMessageLog(&local_38,&local_res10);
      local_res18 = *(FName *)(this->_padding_ + 0x18);
      pFVar6 = FText::FromName(&local_58,&local_res18);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UMG",L"NoInputListeningWithoutPlayerController",
                          L"Unable to listen to input actions without a player controller in {0}.");
      pFVar8 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_78,pFVar8,pFVar6);
      FMessageLog::Info(this_00,&local_88,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_38);
    }
    else {
      if (*(longlong *)(lVar3 + 0x178) == 0) {
        pUVar4 = UInputSettings::GetDefaultInputComponentClass();
      }
      else {
        pUVar4 = *(UClass **)(*(longlong *)(lVar3 + 0x178) + 0x10);
      }
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      pUVar5 = NewObject<UInputComponent>
                         ((UObject *)this,pUVar4,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UInputComponent *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->InputComponent).field0_0x0.DebugPtr = pUVar5;
      pUVar5->field_0x144 = (this->bStopAction ^ pUVar5->bBlockInput) & 1 ^ pUVar5->field_0x144;
      ((this->InputComponent).field0_0x0.DebugPtr)->Priority = this->Priority;
      UInputDelegateBinding::BindInputDelegates
                ((UClass *)this->_padding_,(this->InputComponent).field0_0x0.DebugPtr,
                 (UObject *)this);
    }
  }
  return;
}

// CreateInstanceInternal @ 146a697a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUserWidget * __cdecl
UUserWidget::CreateInstanceInternal
          (UObject *param_1,TSubclassOf<UUserWidget> param_2,FName param_3,UWorld *param_4,
          ULocalPlayer *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  UClass *pUVar8;
  FMessageLog *this;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TEventRef<unsigned_int> TVar12;
  UUserWidget *pUVar13;
  UPackage *pUVar14;
  UUserWidget *this_00;
  FLocalPlayerContext *pFVar15;
  FWriteBuffer *pFVar16;
  longlong *plVar17;
  undefined1 auStackY_1b8 [32];
  FName local_188;
  FLLMScope local_17c;
  UWorld *local_178;
  TSharedRef<FTokenizedMessage,1> local_170;
  FMemScope local_160;
  FText local_158;
  FText local_148;
  FLocalPlayerContext local_138;
  FText local_128;
  FMessageLog local_118;
  undefined1 local_e8 [128];
  TObjectPtr<UClass>_u_0 local_68;
  UWorld **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_170.Object = (FTokenizedMessage *)param_5;
  local_178 = param_4;
  FLLMScope::FLLMScope(&local_17c,LLMTagDeclaration_UI_UMG.UniqueName,false,None,Default,true);
  local_188 = LLMTagDeclaration_UI_UMG.UniqueName;
  FMemScope::FMemScope(&local_160,&local_188,true);
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  this_00 = (UUserWidget *)0x0;
  pUVar13 = this_00;
  if ((lVar2 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar13 = *(UUserWidget **)param_2.Class.field0_0x0;
    }
  }
  bVar7 = CreateWidgetHelpers::ValidateUserWidgetClass((UClass *)pUVar13);
  if (bVar7) {
    if ((local_178 != (UWorld *)0x0) && (local_178->bIsTearingDown != '\0')) {
      local_60 = &local_178;
      local_68 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
      `UUserWidget::CreateInstanceInternal'::__l8::<lambda_1>::operator()(&local_68);
    }
    if (param_1 == (UObject *)0x0) {
      ::FName::FName(&local_188,"PIE");
      this = FMessageLog::FMessageLog(&local_118,&local_188);
      lVar2 = *(longlong *)param_2.Class.field0_0x0;
      pUVar13 = this_00;
      if ((lVar2 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar13 = *(UUserWidget **)param_2.Class.field0_0x0;
        }
      }
      local_68 = (TObjectPtr<UClass>_u_0)pUVar13->_padding_;
      pFVar9 = FText::FromName(&local_128,(FName *)&local_68.ObjectPtr);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_148,L"UMG",L"OuterNull",
                           L"Unable to create the widget {0}, no outer provided.");
      pFVar11 = FTextFormat::FTextFormat((FTextFormat *)&local_138,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_158,pFVar11,pFVar9);
      FMessageLog::Error(this,&local_170,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_118);
    }
    else {
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_188.ComparisonIndex.Value = 0;
        local_188.Number = 0;
        TVar12 = (TEventRef<unsigned_int>)&local_188;
      }
      else {
        TVar12 = FStringTrace::GetNameRef((FName *)&local_68.ObjectPtr);
      }
      uVar3 = *(undefined8 *)TVar12;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_188.ComparisonIndex.Value = 0;
        local_188.Number = 0;
        TVar12 = (TEventRef<unsigned_int>)&local_188;
      }
      else {
        lVar2 = *(longlong *)param_2.Class.field0_0x0;
        pUVar13 = this_00;
        if ((lVar2 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
          iVar1 = (int)pUVar8->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pUVar13 = *(UUserWidget **)param_2.Class.field0_0x0;
          }
        }
        local_68 = (TObjectPtr<UClass>_u_0)pUVar13->_padding_;
        TVar12 = FStringTrace::GetNameRef(&local_188);
      }
      uVar4 = *(undefined8 *)TVar12;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_188.ComparisonIndex.Value = 0;
        local_188.Number = 0;
        TVar12 = (TEventRef<unsigned_int>)&local_188;
      }
      else {
        pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
        local_68 = (TObjectPtr<UClass>_u_0)pUVar14->_padding_;
        TVar12 = FStringTrace::GetNameRef(&local_188);
      }
      uVar5 = *(undefined8 *)TVar12;
      bVar7 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                  ((TLogScope<0> *)&local_68.ObjectPtr);
        bVar7 = true;
        *(int *)&(local_68.DebugPtr)->_padding_ = (int)uVar3;
        *(int *)((longlong)&(local_68.DebugPtr)->_padding_ + 4) = (int)uVar4;
        *(int *)&(local_68.DebugPtr)->_padding_ = (int)uVar5;
        local_60[5] = local_60[4];
      }
      lVar2 = *(longlong *)param_2.Class.field0_0x0;
      if ((lVar2 != 0) && (pUVar8 = StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          this_00 = *(UUserWidget **)param_2.Class.field0_0x0;
        }
      }
      if (param_3 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  (param_1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar8 = StaticClass();
      CheckIsClassChildOf_Internal(pUVar8,(UClass *)this_00);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_e8,(UClass *)this_00);
      local_e8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_e8._56_8_ = (UPackage *)0x0;
      local_e8._24_4_ = RF_Transactional;
      local_e8._40_8_ = (UObject *)0x0;
      local_e8[0x20] = false;
      local_e8._8_8_ = param_1;
      local_e8._16_8_ = param_3;
      this_00 = (UUserWidget *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
      if (local_e8._64_8_ != 0) {
        plVar17 = (longlong *)(local_e8 + 0x50);
        if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_e8._104_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if ((ULocalPlayer *)local_170.Object != (ULocalPlayer *)0x0) {
        pFVar15 = FLocalPlayerContext::FLocalPlayerContext
                            (&local_138,(ULocalPlayer *)local_170.Object,local_178);
        SetPlayerContext(this_00,pFVar15);
      }
      (**(code **)(this_00->_padding_ + 0x310))(this_00);
      if (bVar7) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar16 = *(FWriteBuffer **)(lVar2 + 0x20);
        if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
          pFVar16 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar16->Cursor = '\n';
        pFVar16->Cursor = pFVar16->Cursor + 1;
        pFVar16->Committed = pFVar16->Cursor;
      }
    }
  }
  FMemScope::~FMemScope(&local_160);
  FLLMScope::~FLLMScope(&local_17c);
  return this_00;
}

// CreateWidgetInstance @ 146a6a000

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UUserWidget * __cdecl
UUserWidget::CreateWidgetInstance
          (APlayerController *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  TObjectPtr<UPlayer> *this;
  TObjectPtr<UGameInstance>_u_0 TVar1;
  ULocalPlayer *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FText *pFVar6;
  UUserWidget *pUVar7;
  FMessageLog *pFVar8;
  FTextFormat *pFVar9;
  TObjectPtr<UGameInstance>_u_0 TVar10;
  UClass *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  TObjectPtr<UGameInstance>_u_0 TVar15;
  FName local_res8;
  FName local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1e8
  ;
  UObject *local_1d8;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  FText local_1b0;
  FString local_1a0;
  FText local_190;
  FFormatArgumentValue local_180;
  FFormatArgumentValue local_160;
  FText local_140;
  TSharedRef<FTokenizedMessage,1> local_130;
  FText local_120;
  FText local_110;
  TSharedRef<FTokenizedMessage,1> local_100;
  FText local_f0;
  FTextFormat local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FTextFormat local_a0;
  FMessageLog local_90;
  FMessageLog local_60;
  
  if (((param_1->_padding_ & 2) == 0) ||
     (cVar4 = (**(code **)(param_1->_padding_ + 0x7f0))(), cVar4 == '\0')) {
    FText::AsLocalizable_Advanced_LocText
              (&local_190,L"UMG",L"NotLocalPlayer",
               L"Only Local Player Controllers can be assigned to widgets. {PlayerController} is not a Local Player Controller."
              );
    local_1e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Pairs.ArrayNum = 0;
    local_1e8.Pairs.ArrayMax = 0;
    local_1d0 = (FName)param_1->_padding_;
    pFVar6 = FText::FromName(&local_110,&local_1d0);
    local_160.Type = Text;
    FText::FText((FText *)&local_160.TextValue,pFVar6);
    if ((local_160.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UUserWidget *)(*pcVar3)();
      return pUVar7;
    }
    ::FString::FString(&local_1a0,L"PlayerController");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1e8,&local_1a0,&local_160);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_160.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_160.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_1c8,"PIE");
    pFVar8 = FMessageLog::FMessageLog(&local_60,&local_1c8);
    pFVar9 = FTextFormat::FTextFormat(&local_a0,&local_190,Default);
    pFVar6 = FText::Format(&local_f0,pFVar9,&local_1e8);
    FMessageLog::Error(pFVar8,&local_100,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_60);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data,
               local_1e8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_1e8.Pairs.AllocatorInstance.Data);
    }
  }
  else {
    this = &param_1->Player;
    if ((this->field0_0x0).DebugPtr != (UPlayer *)0x0) {
      TVar10.DebugPtr = (UGameInstance *)AActor::GetWorld((AActor *)param_1);
      if ((UWorld *)TVar10.DebugPtr == (UWorld *)0x0) {
        return (UUserWidget *)0x0;
      }
      TVar1 = (TObjectPtr<UGameInstance>_u_0)
              (((TObjectPtr<UGameInstance> *)((longlong)(TVar10.DebugPtr + 1) + 0x38))->field0_0x0).
              DebugPtr;
      TVar15.DebugPtr = TVar10.DebugPtr;
      if (TVar1 != (UGameInstance *)0x0) {
        TVar15 = TVar1;
      }
      if ((this->field0_0x0).DebugPtr != (UPlayer *)0x0) {
        pUVar11 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar11);
        if ((bVar5) &&
           (pUVar2 = (ULocalPlayer *)(this->field0_0x0).DebugPtr, pUVar2 != (ULocalPlayer *)0x0)) {
          local_1d8 = *(UObject **)param_2.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_1d8);
          }
          pUVar7 = CreateInstanceInternal
                             ((UObject *)TVar15.DebugPtr,(TSubclassOf<UUserWidget>)&local_1d8,
                              param_3,(UWorld *)TVar10.DebugPtr,pUVar2);
          return pUVar7;
        }
        pFVar12 = GetTypeName<ULocalPlayer>(&local_d0);
        pwVar13 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UPlayer>(&local_c0,(this->field0_0x0).DebugPtr);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar14);
      }
      pFVar12 = GetTypeName<ULocalPlayer>(&local_b0);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    FText::AsLocalizable_Advanced_LocText
              (&local_1b0,L"UMG",L"NoPlayer",
               L"CreateWidget cannot be used on Player Controller with no attached player. {PlayerController} has no Player attached."
              );
    local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Pairs.ArrayNum = 0;
    local_1f8.Pairs.ArrayMax = 0;
    local_res8 = (FName)param_1->_padding_;
    pFVar6 = FText::FromName(&local_140,&local_res8);
    local_180.Type = Text;
    FText::FText((FText *)&local_180.TextValue,pFVar6);
    if ((local_180.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UUserWidget *)(*pcVar3)();
      return pUVar7;
    }
    ::FString::FString(&local_1c0,L"PlayerController");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1c0,&local_180);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_180.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_180.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_res20,"PIE");
    pFVar8 = FMessageLog::FMessageLog(&local_90,&local_res20);
    pFVar9 = FTextFormat::FTextFormat(&local_e0,&local_1b0,Default);
    pFVar6 = FText::Format(&local_120,pFVar9,&local_1f8);
    FMessageLog::Error(pFVar8,&local_130,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
    if (local_120.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_90);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data,
               local_1f8.Pairs.ArrayNum);
    local_190.TextData.Reference = local_1b0.TextData.Reference;
    if ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_1f8.Pairs.AllocatorInstance.Data);
      local_190.TextData.Reference = local_1b0.TextData.Reference;
    }
  }
  if (local_190.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
  }
  return (UUserWidget *)0x0;
}

// CreateWidgetInstance @ 146a6a480

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

UUserWidget * __cdecl
UUserWidget::CreateWidgetInstance
          (UGameInstance *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  ULocalPlayer *pUVar1;
  UWorld *pUVar2;
  UUserWidget *pUVar3;
  UObject *local_res10;
  
  pUVar1 = UGameInstance::GetFirstGamePlayer(param_1);
  pUVar2 = UGameInstance::GetWorld(param_1);
  local_res10 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar3 = CreateInstanceInternal
                     ((UObject *)param_1,(TSubclassOf<UUserWidget>)&local_res10,param_3,pUVar2,
                      pUVar1);
  return pUVar3;
}

// CreateWidgetInstance @ 146a6a500

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

UUserWidget * __cdecl
UUserWidget::CreateWidgetInstance(UWidget *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  ULocalPlayer *pUVar5;
  UWorld *pUVar6;
  UUserWidget *pUVar7;
  UObject *local_res8;
  
  if (param_1 == (UWidget *)0x0) {
LAB_146a6a53b:
    if ((param_1->_padding_ == 0) ||
       (param_1 = *(UWidget **)(param_1->_padding_ + 0x20), param_1 == (UWidget *)0x0))
    goto LAB_146a6a5fb;
    pUVar4 = GetPrivateStaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_146a6a5fb;
  }
  else {
    pUVar4 = GetPrivateStaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_146a6a53b;
  }
  if (*(longlong *)(param_1[1].EnabledFieldNotifications.AllocatorInstance.InlineData + 8) != 0) {
    pUVar5 = (ULocalPlayer *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1);
    pUVar6 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
    local_res8 = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    pUVar7 = CreateInstanceInternal
                       (*(UObject **)
                         (param_1[1].EnabledFieldNotifications.AllocatorInstance.InlineData + 8),
                        (TSubclassOf<UUserWidget>)&local_res8,param_3,pUVar6,pUVar5);
    return pUVar7;
  }
LAB_146a6a5fb:
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1168331920279341717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                     ,0xa95,"ParentUserWidget && ParentUserWidget->WidgetTree");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UUserWidget *)(*pcVar2)();
    return pUVar7;
  }
  return (UUserWidget *)0x0;
}

// CreateWidgetInstance @ 146a6a640

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

UUserWidget * __cdecl
UUserWidget::CreateWidgetInstance
          (UWidgetTree *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  UUserWidget *pUVar4;
  UObject *local_res8;
  
  pUVar2 = (UWidget *)param_1->_padding_;
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = GetPrivateStaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      local_res8 = *(UObject **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      pUVar4 = CreateWidgetInstance(pUVar2,(TSubclassOf<UUserWidget>)&local_res8,param_3);
      return pUVar4;
    }
  }
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar4 = CreateInstanceInternal
                     ((UObject *)param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3,(UWorld *)0x0
                      ,(ULocalPlayer *)0x0);
  return pUVar4;
}

// CreateWidgetInstance @ 146a6a710

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

UUserWidget * __cdecl
UUserWidget::CreateWidgetInstance(UWorld *param_1,TSubclassOf<UUserWidget> param_2,FName param_3)

{
  UGameInstance *this;
  UObject *pUVar1;
  ULocalPlayer *pUVar2;
  UWorld *pUVar3;
  UUserWidget *pUVar4;
  UObject *local_res8;
  
  this = (param_1->OwningGameInstance).field0_0x0.DebugPtr;
  if (this != (UGameInstance *)0x0) {
    pUVar1 = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar2 = UGameInstance::GetFirstGamePlayer(this);
    pUVar3 = UGameInstance::GetWorld(this);
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar4 = CreateInstanceInternal
                       ((UObject *)this,(TSubclassOf<UUserWidget>)&local_res8,param_3,pUVar3,pUVar2)
    ;
    return pUVar4;
  }
  pUVar2 = UWorld::GetFirstLocalPlayerFromController(param_1);
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar4 = CreateInstanceInternal
                     ((UObject *)param_1,(TSubclassOf<UUserWidget>)&local_res8,param_3,param_1,
                      pUVar2);
  return pUVar4;
}

// DestroyInputComponent @ 146a6aae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::DestroyInputComponent(UUserWidget *this)

{
  int iVar1;
  longlong *plVar2;
  
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xda0))(plVar2,(this->InputComponent).field0_0x0.DebugPtr);
    }
    iVar1 = (((this->InputComponent).field0_0x0.DebugPtr)->ActionBindings).ArrayNum;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      UInputComponent::RemoveActionBinding((this->InputComponent).field0_0x0.DebugPtr,iVar1);
    }
    (**(code **)(((this->InputComponent).field0_0x0.DebugPtr)->_padding_ + 0x508))();
    UObjectBaseUtility::MarkAsGarbage
              ((UObjectBaseUtility *)(this->InputComponent).field0_0x0.DebugPtr);
    (this->InputComponent).field0_0x0.DebugPtr = (UInputComponent *)0x0;
  }
  return;
}

// Destruct @ 146a6adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::Destruct(UUserWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Destruct);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a6addd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// DisableAnimations @ 146a6b620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::DisableAnimations(UUserWidget *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (this->ActiveAnimations).ArrayNum)); iVar5 = iVar5 + 1) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar5 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar1 + (longlong)iVar5 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationState::RemoveEvaluationData(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// DuplicateAndInitializeFromWidgetTree @ 146a6f4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UUserWidget::DuplicateAndInitializeFromWidgetTree
          (UUserWidget *this,UWidgetTree *param_1,
          TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
          *param_2)

{
  uint uVar1;
  UUserWidget *this_00;
  UObjectBaseUtility *this_01;
  undefined8 uVar2;
  FName FVar3;
  code *pcVar4;
  TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_> *pTVar5
  ;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UWidgetTree *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  UObject *pUVar13;
  UObjectBase *this_02;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint *puVar21;
  ForElementType<unsigned_int> FVar22;
  uint uVar23;
  ForElementType<unsigned_int> FVar24;
  undefined1 auStackY_598 [32];
  undefined1 local_548 [8];
  ForAnyElementType local_540;
  undefined8 local_538;
  uint local_530;
  UUserWidget *local_528;
  TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
  *local_520;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_518;
  int iStack_4f8;
  undefined4 uStack_4f4;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_4f0;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  ForElementType<unsigned_int> local_4c0;
  longlong local_4b8;
  longlong lStack_4b0;
  longlong *local_4a8;
  undefined1 auStack_4a0 [16];
  uint uStack_490;
  int iStack_48c;
  longlong local_488;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *pTStack_480;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *local_478;
  undefined2 local_470;
  undefined4 local_468;
  int local_464;
  int local_460;
  int local_45c;
  TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
  *local_458;
  longlong local_450;
  TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
  *local_448;
  int iStack_440;
  uint uStack_43c;
  ForElementType<unsigned_int> local_438;
  undefined4 uStack_430;
  uint uStack_42c;
  int local_428;
  undefined4 uStack_424;
  TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
  *local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_410;
  undefined8 uStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  undefined1 local_3d8 [32];
  longlong local_3b8;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *pTStack_3b0;
  undefined4 local_38c;
  undefined4 local_36c;
  undefined1 local_368 [128];
  undefined1 local_2e8 [128];
  undefined1 local_268 [24];
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  local_250;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_200;
  void *local_1c0;
  undefined4 local_1b8;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1b0;
  ForElementType<FSetElementId> local_170;
  int local_168;
  undefined1 local_158 [88];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_598;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(int *)(lVar11 + 0xef0) = *(int *)(lVar11 + 0xef0) + 1;
  local_528 = this;
  local_458 = param_2;
  local_450 = lVar11;
  if (param_1 == (UWidgetTree *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1168331920279339240>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                       ,0xe8,"InWidgetTree");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (((uint)this->_padding_ >> 0xc & 1) == 0) {
    FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_268,false);
    pUVar10 = (UClass *)param_1->_padding_;
    local_4e0 = 0;
    local_4d8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UWidgetTree_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_368,pUVar10);
    local_368._48_8_ = local_268;
    local_368._16_4_ = 0;
    local_368._20_4_ = 0;
    local_368._24_4_ = RF_Transactional;
    local_368[0x20] = false;
    local_368._56_8_ = (UPackage *)0x0;
    local_368._8_8_ = this;
    local_368._40_8_ = param_1;
    pUVar9 = (UWidgetTree *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_368);
    if (local_368._64_8_ != 0) {
      plVar15 = (longlong *)(local_368 + 0x50);
      if ((longlong *)local_368._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_368._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWidgetTree *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->WidgetTree).field0_0x0.DebugPtr = pUVar9;
    UObjectBaseUtility::SetFlags((UObjectBaseUtility *)pUVar9,RF_DuplicateTransient|RF_Transient);
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_3d8,
               (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)(local_268 + 0x18));
    local_478 = (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                 *)(local_268 + 0x18);
    local_470 = 0;
    stack0xfffffffffffffb68 = local_3d8._16_16_;
    local_4a8 = (longlong *)local_3d8._0_8_;
    auStack_4a0._0_8_ = local_3d8._8_8_;
    local_488 = local_3b8;
    pTStack_480 = pTStack_3b0;
    iVar7 = local_3d8._28_4_;
    if (iVar7 < *(int *)(local_3d8._16_8_ + 0x18)) {
      do {
        this_00 = *(UUserWidget **)(*local_4a8 + 8 + (longlong)iVar7 * 0x18);
        if (this_00 != (UUserWidget *)0x0) {
          pUVar10 = GetPrivateStaticClass();
          iVar7 = (int)pUVar10->_padding_;
          if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar10->_padding_)) {
            SetPlayerContext(this_00,&this->PlayerContext);
            (**(code **)(this_00->_padding_ + 0x310))(this_00);
          }
        }
        uStack_490 = uStack_490 & ~auStack_4a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4a0);
        iVar7 = iStack_48c;
      } while (iStack_48c < *(int *)(auStack_4a0._8_8_ + 0x18));
      if (((char)local_470 != '\0') && (local_470._1_1_ != '\0')) {
        uVar18 = *(int *)&(local_478->Elements).field_0x8 -
                 *(int *)&(local_478->Elements).field_0x34;
        if (uVar18 < 4) {
          iVar7 = 1;
        }
        else {
          uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_468 = (undefined4)lVar11;
          iVar7 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((0 < (int)uVar18) && (local_478->HashSize < iVar7)) || (iVar7 < local_478->HashSize)) {
          local_478->HashSize = iVar7;
          TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
          ::Rehash(local_478);
        }
      }
    }
    local_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.ArrayNum = 0;
    local_4f0.ArrayMax = 0;
    TMapBase<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>::
    GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
                *)param_2,&local_4f0);
    uVar18 = *(uint *)&param_2->field_0x28;
    TStack_518.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
    TStack_518.BaseBitIndex = 0;
    TStack_518._padding_._4_4_ = 1;
    TStack_518._padding_._0_4_ = TStack_518.BaseBitIndex;
    TStack_518.CurrentBitIndex = 0;
    if (uVar18 != 0) {
      puVar21 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)TStack_518.Array;
      }
      uVar23 = *puVar21;
      TStack_518._padding_._0_4_ = 0;
      TStack_518.BaseBitIndex = 0;
      while (uVar23 == 0) {
        TStack_518._padding_._0_4_ = (int)TStack_518._padding_ + 1;
        TStack_518.BaseBitIndex = TStack_518.BaseBitIndex + 0x20;
        TStack_518.CurrentBitIndex = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)TStack_518._padding_) goto LAB_146a6f81e;
        uVar23 = puVar21[(int)TStack_518._padding_];
      }
      TStack_518._padding_._4_4_ = -uVar23 & uVar23;
      uVar16 = (ulonglong)TStack_518._padding_._4_4_ * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_464 = (int)lVar11;
      TStack_518.CurrentBitIndex = local_464 + -1 + TStack_518.BaseBitIndex;
      if ((int)uVar18 < TStack_518.CurrentBitIndex) {
        TStack_518.CurrentBitIndex = uVar18;
      }
    }
LAB_146a6f81e:
    uVar18 = *(uint *)&param_2->field_0x28;
    uVar23 = uVar18 & 0xffffffe0;
    iStack_4f8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    TStack_518._28_4_ = local_38c;
    TStack_518.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)uVar18 >> 5;
    uStack_3f0 = CONCAT44(uStack_4f4,iStack_4f8);
    TStack_410.UnvisitedBitMask = 0xffffffff;
    TStack_410.BaseBitIndex = TStack_518.BaseBitIndex;
    TStack_410._28_4_ = local_38c;
    local_530 = uVar18;
    local_520 = param_2;
    local_418 = param_2;
    TStack_410.CurrentBitIndex = TStack_518.CurrentBitIndex;
    TStack_410._padding_._0_4_ = (int)TStack_518._padding_;
    TStack_410._padding_._4_4_ = TStack_518._padding_._4_4_;
    TStack_410.Array = TStack_518.Array;
    if (((int)uVar18 < 0) || (*(int *)&param_2->field_0x28 < (int)uVar18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
    uVar1 = *(uint *)&param_2->field_0x28;
    if (uVar18 != uVar1) {
      puVar19 = (undefined1 *)pTVar20;
      if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
        puVar19 = *(undefined1 **)&param_2->field_0x20;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar7 * 4);
      while (uVar18 == 0) {
        iVar7 = iVar7 + 1;
        uVar23 = uVar23 + 0x20;
        uVar18 = uVar1;
        local_530 = uVar1;
        if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar7)
        goto LAB_146a6f941;
        uVar18 = *(uint *)(puVar19 + (longlong)iVar7 * 4);
      }
      uVar16 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_460 = (int)lVar11;
      uVar18 = local_460 + -1 + uVar23;
      local_530 = uVar18;
      if ((int)uVar1 < (int)uVar18) {
        uVar18 = uVar1;
        local_530 = uVar1;
      }
    }
LAB_146a6f941:
    FVar24 = (ForElementType<unsigned_int>)&param_2->field_0x10;
    local_4c0 = FVar24;
    do {
      pTVar5 = local_418;
      if (*(int *)&local_418->field_0x8 - *(int *)&local_418->field_0x34 != (int)uStack_3f0) {
        local_548[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UWidget_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_548);
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
      }
      lVar11 = local_450;
      if (((TStack_410.CurrentBitIndex == uVar18) && (TStack_410.Array == pTVar20)) &&
         (pTVar5 == param_2)) {
        if (local_4f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f0.AllocatorInstance.Data);
        }
        local_168 = 0;
        if (local_170 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_170);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1b0);
        local_1b8 = 0;
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_200);
        local_250.HashSize = 0;
        if (local_250.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_250.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_268 + 0x18));
        *(int *)(lVar11 + 0xef0) = *(int *)(lVar11 + 0xef0) + -1;
        return;
      }
      lVar11 = *(longlong *)pTVar5;
      plVar15 = (longlong *)(lVar11 + (longlong)TStack_410.CurrentBitIndex * 0x18);
      lVar11 = (**(code **)(this->_padding_ + 0x18))
                         (&this->_padding_,
                          *(undefined8 *)(lVar11 + (longlong)TStack_410.CurrentBitIndex * 0x18));
      if ((lVar11 == 0) && (lVar11 = plVar15[1], lVar11 != 0)) {
        lVar17 = *plVar15;
        local_540.Data = (FScriptContainerElement *)0x0;
        local_538 = 0;
        local_3e8 = lVar17;
        lStack_3e0 = lVar11;
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_540,(int *)((longlong)&local_538 + 4));
        local_538 = CONCAT44(local_538._4_4_,iVar7 + 1);
        lVar11 = local_3e8;
        lVar14 = lStack_3e0;
        while( true ) {
          *(longlong *)(local_540.Data + (longlong)iVar7 * 0x10) = lVar11;
          *(longlong *)(local_540.Data + (longlong)iVar7 * 0x10 + 8) = lVar14;
          FVar12.Data = local_4f0.AllocatorInstance.Data;
          while( true ) {
            if (FVar12.Data == local_4f0.AllocatorInstance.Data + (longlong)local_4f0.ArrayNum * 8)
            goto LAB_146a6fa4b;
            lVar11 = *(longlong *)FVar12.Data;
            if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x18) == lVar17)) break;
            FVar12.Data = FVar12.Data + 8;
          }
          if (FVar12.Data == (FScriptContainerElement *)0x0) break;
          iStack_440 = 0;
          uVar23 = *(int *)((longlong)FVar24 + 0x18);
          local_428 = 0;
          uStack_43c = 1;
          TStack_518.CurrentBitIndex = 0;
          if (uVar23 != 0) {
            FVar22 = FVar24;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar22 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
            }
            uVar1 = *(uint *)FVar22;
            while (uVar1 == 0) {
              iStack_440 = iStack_440 + 1;
              local_428 = local_428 + 0x20;
              TStack_518.CurrentBitIndex = uVar23;
              if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_440)
              goto LAB_146a6fcee;
              uVar1 = *(uint *)((longlong)FVar22 + (longlong)iStack_440 * 4);
            }
            uStack_43c = -uVar1 & uVar1;
            uVar16 = (ulonglong)uStack_43c * 2 + 1;
            lVar17 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_45c = (int)lVar17;
            TStack_518.CurrentBitIndex = local_428 + -1 + local_45c;
            if ((int)uVar23 < TStack_518.CurrentBitIndex) {
              TStack_518.CurrentBitIndex = uVar23;
            }
          }
LAB_146a6fcee:
          uStack_424 = local_36c;
          uStack_430 = 0xffffffff;
          TStack_518.UnvisitedBitMask = 0xffffffff;
          TStack_518._28_4_ = local_36c;
          TStack_518.BaseBitIndex = local_428;
          local_520 = param_2;
          TStack_518.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar24;
          local_448 = param_2;
          local_438 = FVar24;
          uStack_42c = TStack_518.CurrentBitIndex;
          TStack_518._padding_._0_4_ = iStack_440;
          TStack_518._padding_._4_4_ = uStack_43c;
          if (TStack_518.CurrentBitIndex < (int)*(uint *)((longlong)FVar24 + 0x18)) {
            do {
              plVar15 = (longlong *)
                        (*(longlong *)local_520 + (longlong)TStack_518.CurrentBitIndex * 0x18);
              if (*(longlong *)
                   (*(longlong *)local_520 + 8 + (longlong)TStack_518.CurrentBitIndex * 0x18) ==
                  lVar11) goto LAB_146a6fd89;
              TStack_518.UnvisitedBitMask =
                   TStack_518.UnvisitedBitMask & ~TStack_518._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_518);
            } while (TStack_518.CurrentBitIndex < (int)*(uint *)((longlong)TStack_518.Array + 0x18))
            ;
          }
          plVar15 = (longlong *)0x0;
LAB_146a6fd89:
          lVar17 = *plVar15;
          lVar14 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_,lVar17);
          if (lVar14 != 0) break;
          uVar16 = (ulonglong)(int)local_538;
          for (FVar12.Data = local_540.Data; FVar12.Data != local_540.Data + uVar16 * 0x10;
              FVar12.Data = FVar12.Data + 0x10) {
            if (*(longlong *)FVar12.Data == lVar17) goto LAB_146a6fa4f;
          }
          iVar7 = (int)local_538;
          local_4b8 = lVar17;
          lStack_4b0 = lVar11;
          if ((local_540.Data <= (FScriptContainerElement *)&local_4b8) &&
             ((FScriptContainerElement *)&local_4b8 <
              local_540.Data + (longlong)local_538._4_4_ * 0x10)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (int)local_538;
          }
          if (iVar7 == local_538._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_540,(int *)((longlong)&local_538 + 4));
          }
          local_538 = CONCAT44(local_538._4_4_,iVar7 + 1);
          lVar11 = local_4b8;
          lVar14 = lStack_4b0;
        }
LAB_146a6fa4b:
        uVar16 = local_538 & 0xffffffff;
LAB_146a6fa4f:
        iVar7 = (int)uVar16 + -1;
        if (-1 < iVar7) {
          lVar11 = (longlong)iVar7 << 4;
          while( true ) {
            local_4c8 = lVar11;
            if ((int)uVar16 <= iVar7) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            this_01 = *(UObjectBaseUtility **)(local_540.Data + lVar11 + 8);
            uVar2 = *(undefined8 *)(local_540.Data + lVar11);
            FObjectInstancingGraph::FObjectInstancingGraph
                      ((FObjectInstancingGraph *)local_158,false);
            pUVar10 = Z_Construct_UClass_UWidgetTree_NoRegister();
            pUVar13 = UObjectBaseUtility::GetTypedOuter(this_01,pUVar10);
            FObjectInstancingGraph::AddNewObject
                      ((FObjectInstancingGraph *)local_158,
                       (UObject *)(this->WidgetTree).field0_0x0.DebugPtr,pUVar13);
            FVar3.ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
            FVar3.Number = *(uint *)&this_01->field_0x1c;
            pUVar10 = *(UClass **)&this_01->field_0x10;
            pUVar9 = (this->WidgetTree).field0_0x0.DebugPtr;
            local_4d0 = 0;
            if (FVar3 == (FName)0x0) {
              FObjectInitializer::AssertIfInConstructor
                        ((UObject *)pUVar9,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
            }
            pUVar8 = Z_Construct_UClass_UWidget_NoRegister();
            CheckIsClassChildOf_Internal(pUVar8,pUVar10);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_2e8,pUVar10);
            local_2e8._48_8_ = local_158;
            local_2e8._24_4_ = RF_Transactional;
            local_2e8[0x20] = false;
            local_2e8._56_8_ = (UPackage *)0x0;
            local_2e8._8_8_ = pUVar9;
            local_2e8._16_8_ = FVar3;
            local_2e8._40_8_ = this_01;
            this_02 = (UObjectBase *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
            if (local_2e8._64_8_ != 0) {
              plVar15 = (longlong *)(local_2e8 + 0x50);
              if ((longlong *)local_2e8._104_8_ != (longlong *)0x0) {
                plVar15 = (longlong *)local_2e8._104_8_;
              }
              (**(code **)(*plVar15 + 0x10))();
            }
            UObjectBase::AtomicallySetFlags(this_02,RF_DuplicateTransient|RF_Transient);
            (**(code **)(local_528->_padding_ + 0x20))(&local_528->_padding_,uVar2,this_02);
            local_58 = 0;
            if (local_60 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_60);
            }
            TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_a0);
            local_a8 = 0;
            if (local_b0 != (void *)0x0) {
              FMemory::Free(local_b0);
            }
            TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_f0);
            local_f8 = 0;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_158 + 0x18));
            lVar11 = local_4c8 + -0x10;
            iVar7 = iVar7 + -1;
            param_2 = local_458;
            this = local_528;
            uVar18 = local_530;
            local_4c8 = lVar11;
            if (iVar7 < 0) break;
            uVar16 = local_538 & 0xffffffff;
          }
        }
        FVar24 = local_4c0;
        if (local_540.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_540.Data);
          FVar24 = local_4c0;
        }
      }
      TStack_410.UnvisitedBitMask = TStack_410.UnvisitedBitMask & ~TStack_410._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_410);
      pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
    } while( true );
  }
  *(int *)(lVar11 + 0xef0) = *(int *)(lVar11 + 0xef0) + -1;
  return;
}

// ExecuteQueuedAnimationTransitions @ 146a71300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::ExecuteQueuedAnimationTransitions(UUserWidget *this)

{
  ForElementType<FQueuedWidgetAnimationTransition> *pFVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  Type TVar8;
  int iVar9;
  FQueuedWidgetAnimationTransition *pFVar10;
  UWidgetAnimation *pUVar11;
  code *pcVar12;
  FWidgetAnimationState *this_00;
  bool bVar13;
  bool bVar14;
  ForElementType<FQueuedWidgetAnimationTransition> FVar15;
  FWeakReferencer<1> FVar16;
  uchar *puVar17;
  ForElementType<FQueuedWidgetAnimationTransition> *pFVar18;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [8];
  ForElementType<FQueuedWidgetAnimationTransition> *local_280;
  TSharedPtr<FWidgetAnimationState,1> local_278;
  FWidgetAnimationHandle local_268;
  FWidgetAnimationHandle local_258;
  FWidgetAnimationHandle local_248;
  FWidgetAnimationHandle local_238;
  ForElementType<FQueuedWidgetAnimationTransition> local_228;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  iVar7 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
  pFVar10 = (FQueuedWidgetAnimationTransition *)
            (this->QueuedWidgetAnimationTransitions).AllocatorInstance.Data;
  local_228.SecondaryData = (ForElementType<FQueuedWidgetAnimationTransition>)0x0;
  local_60 = iVar7;
  if (iVar7 == 0) {
    local_5c = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FQueuedWidgetAnimationTransition>_>
              (0x38,8,iVar7,0,&local_228,iVar7,&local_5c);
    FVar15 = (ForElementType<FQueuedWidgetAnimationTransition>)&local_228;
    if (local_228.SecondaryData != (ForElementType<FQueuedWidgetAnimationTransition>)0x0) {
      FVar15 = local_228.SecondaryData;
    }
    ConstructItems<FQueuedWidgetAnimationTransition,FQueuedWidgetAnimationTransition,int>
              ((void *)FVar15,pFVar10,iVar7);
  }
  iVar7 = local_60;
  FVar15 = (ForElementType<FQueuedWidgetAnimationTransition>)&local_228;
  if (local_228.SecondaryData != (ForElementType<FQueuedWidgetAnimationTransition>)0x0) {
    FVar15 = local_228.SecondaryData;
  }
  local_280 = (ForElementType<FQueuedWidgetAnimationTransition> *)
              ((longlong)local_60 * 0x38 + (longlong)FVar15);
  puVar17 = (uchar *)((longlong)FVar15 + 0x20);
  pFVar18 = local_280;
LAB_146a71402:
  if (local_60 != iVar7) {
    local_288[0] = 0;
    `TCheckedPointerIterator<FQueuedWidgetAnimationTransition,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_288);
  }
  pFVar1 = (ForElementType<FQueuedWidgetAnimationTransition> *)(puVar17 + -0x20);
  if (pFVar1 == pFVar18) {
    if (0 < (this->QueuedWidgetAnimationTransitions).ArrayNum) {
      piVar3 = &(this->QueuedWidgetAnimationTransitions).ArrayMax;
      (this->QueuedWidgetAnimationTransitions).ArrayNum = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->QueuedWidgetAnimationTransitions).AllocatorInstance,0,piVar3);
      }
      UpdateCanTick(this);
    }
    if (local_228.SecondaryData != (ForElementType<FQueuedWidgetAnimationTransition>)0x0) {
      FMemory::Free((void *)local_228.SecondaryData);
    }
    return;
  }
  switch(puVar17[-0x18]) {
  case '\0':
    if ((puVar17[0x15] == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar14 = (bool)puVar17[0x14];
    if ((puVar17[0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar5 = *(float *)(puVar17 + 0xc);
    if ((puVar17[8] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TVar8 = *(Type *)(puVar17 + 4);
    if ((*puVar17 == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar9 = *(int *)(puVar17 + -4);
    if ((puVar17[-0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    PlayAnimation(this,&local_268,*(UWidgetAnimation **)pFVar1->InlineData,
                  *(float *)(puVar17 + -0x14),iVar9,TVar8,fVar5,bVar14);
    FVar16.ReferenceController = local_268.WeakState.WeakReferenceCount.ReferenceController;
    break;
  case '\x01':
    if ((puVar17[0x15] == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar14 = (bool)puVar17[0x14];
    if ((puVar17[0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar5 = *(float *)(puVar17 + 0xc);
    if ((puVar17[8] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TVar8 = *(Type *)(puVar17 + 4);
    if ((*puVar17 == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar9 = *(int *)(puVar17 + -4);
    if ((puVar17[-8] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar6 = *(float *)(puVar17 + -0xc);
    if ((puVar17[-0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    PlayAnimationTimeRange
              (this,&local_258,*(UWidgetAnimation **)pFVar1->InlineData,*(float *)(puVar17 + -0x14),
               fVar6,iVar9,TVar8,fVar5,bVar14);
    FVar16.ReferenceController = local_258.WeakState.WeakReferenceCount.ReferenceController;
    break;
  case '\x02':
    if ((puVar17[0x15] == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar14 = (bool)puVar17[0x14];
    if ((puVar17[0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    PlayAnimationForward
              (this,&local_248,*(UWidgetAnimation **)pFVar1->InlineData,*(float *)(puVar17 + 0xc),
               bVar14);
    FVar16.ReferenceController = local_248.WeakState.WeakReferenceCount.ReferenceController;
    break;
  case '\x03':
    if ((puVar17[0x15] == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar14 = (bool)puVar17[0x14];
    if ((puVar17[0x10] == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    PlayAnimationReverse
              (this,&local_238,*(UWidgetAnimation **)pFVar1->InlineData,*(float *)(puVar17 + 0xc),
               bVar14);
    FVar16.ReferenceController = local_238.WeakState.WeakReferenceCount.ReferenceController;
    break;
  case '\x04':
    pUVar11 = *(UWidgetAnimation **)pFVar1->InlineData;
    this->LastAnimationTime = 0.0;
    if (pUVar11 == (UWidgetAnimation *)0x0) goto switchD_146a7144c_default;
    GetAnimationState(this,&local_278,pUVar11);
    this_00 = local_278.Object;
    if (local_278.Object != (FWidgetAnimationState *)0x0) {
      if ((local_278.Object == (FWidgetAnimationState *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FWidgetAnimationState::Stop(this_00);
      UpdateCanTick(this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
    puVar17 = puVar17 + 0x38;
    pFVar18 = local_280;
    goto LAB_146a71402;
  case '\x05':
    PauseAnimation(this,*(UWidgetAnimation **)pFVar1->InlineData);
  default:
    goto switchD_146a7144c_default;
  }
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(FVar16.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((FVar16.ReferenceController)->_padding_ + 8))(FVar16.ReferenceController,1);
    }
  }
  puVar17 = puVar17 + 0x38;
  pFVar18 = local_280;
  goto LAB_146a71402;
switchD_146a7144c_default:
  puVar17 = puVar17 + 0x38;
  goto LAB_146a71402;
}

// FlushAnimations @ 146a72140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::FlushAnimations(UUserWidget *this)

{
  UUMGSequenceTickManager *this_00;
  
  this_00 = UUMGSequenceTickManager::Get((UObject *)this);
  UUMGSequenceTickManager::ForceFlush(this_00);
  return;
}

// GetAlignmentInViewport @ 146a729b0

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

TVector2<double> * __thiscall
UUserWidget::GetAlignmentInViewport(UUserWidget *this,TVector2<double> *__return_storage_ptr__)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FGameViewportWidgetSlot local_58;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      pFVar2 = UGameViewportSubsystem::GetWidgetSlot(this_00,&local_58,(UWidget *)this);
      uVar3 = *(undefined4 *)&(pFVar2->Alignment).field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 4);
      uVar5 = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 8);
      uVar6 = *(undefined4 *)((longlong)&(pFVar2->Alignment).field0_0x0 + 0xc);
      goto LAB_146a729f8;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_146a729f8:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  return __return_storage_ptr__;
}

// GetAnchorsInViewport @ 146a73000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

FAnchors * __thiscall
UUserWidget::GetAnchorsInViewport(UUserWidget *this,FAnchors *__return_storage_ptr__)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  FGameViewportWidgetSlot local_58;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      pFVar2 = UGameViewportSubsystem::GetWidgetSlot(this_00,&local_58,(UWidget *)this);
      uVar3 = *(undefined4 *)&(pFVar2->Anchors).Minimum.field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 4);
      uVar5 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 8);
      uVar6 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 0xc);
      dVar7 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
      dVar8 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
      goto LAB_146a73053;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  dVar7 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689688;
LAB_146a73053:
  *(undefined4 *)&(__return_storage_ptr__->Minimum).field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Minimum).field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Minimum).field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Minimum).field0_0x0 + 0xc) = uVar6;
  (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = dVar7;
  (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = dVar8;
  return __return_storage_ptr__;
}

// GetAnimationCurrentTime @ 146a73080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall UUserWidget::GetAnimationCurrentTime(UUserWidget *this,UWidgetAnimation *param_1)

{
  FFrameTime FVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  FQualifiedFrameTime *pFVar5;
  int iVar6;
  float fVar7;
  float fStackX_14;
  TSharedPtr<FWidgetAnimationState_const_,1> local_28;
  FQualifiedFrameTime local_18;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,&local_28,param_1);
    if (local_28.Object != (FWidgetAnimationState *)0x0) {
      if (local_28.Object == (FWidgetAnimationState *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar7 = (float)(*pcVar3)();
          return fVar7;
        }
      }
      pFVar5 = FWidgetAnimationState::GetCurrentTime(local_28.Object,&local_18);
      FVar1 = pFVar5->Time;
      FVar2 = pFVar5->Rate;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      fStackX_14 = FVar1.SubFrame;
      iVar6 = FVar2.Denominator;
      return ((float)((longlong)iVar6 * (longlong)FVar1.FrameNumber.Value.Value) +
             (float)iVar6 * fStackX_14) / (float)FVar2.Numerator;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return 0.0;
}

// GetAnimationState @ 146a73170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<FWidgetAnimationState,1> * __thiscall
UUserWidget::GetAnimationState
          (UUserWidget *this,TSharedPtr<FWidgetAnimationState,1> *__return_storage_ptr__,
          UWidgetAnimation *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FWidgetAnimationState,1> *pTVar5;
  int iVar6;
  
  iVar6 = 0;
  while( true ) {
    if ((iVar6 < 0) || ((this->ActiveAnimations).ArrayNum <= iVar6)) {
      __return_storage_ptr__->Object = (FWidgetAnimationState *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar6 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar1 + (longlong)iVar6 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this_00->Animation).field0_0x0.DebugPtr == param_1) &&
       (bVar4 = FWidgetAnimationState::IsValid(this_00), bVar4)) {
      __return_storage_ptr__->Object = this_00;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    iVar6 = iVar6 + 1;
  }
  pcVar3 = (code *)swi(3);
  pTVar5 = (TSharedPtr<FWidgetAnimationState,1> *)(*pcVar3)();
  return pTVar5;
}

// GetAnimationState @ 146a73290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<FWidgetAnimationState_const_,1> * __thiscall
UUserWidget::GetAnimationState
          (UUserWidget *this,TSharedPtr<FWidgetAnimationState_const_,1> *__return_storage_ptr__,
          UWidgetAnimation *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FWidgetAnimationState_const_,1> *pTVar5;
  int iVar6;
  
  iVar6 = 0;
  while( true ) {
    if ((iVar6 < 0) || ((this->ActiveAnimations).ArrayNum <= iVar6)) {
      __return_storage_ptr__->Object = (FWidgetAnimationState *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar6 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar1 + (longlong)iVar6 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this_00->Animation).field0_0x0.DebugPtr == param_1) &&
       (bVar4 = FWidgetAnimationState::IsValid(this_00), bVar4)) {
      __return_storage_ptr__->Object = this_00;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    iVar6 = iVar6 + 1;
  }
  pcVar3 = (code *)swi(3);
  pTVar5 = (TSharedPtr<FWidgetAnimationState_const_,1> *)(*pcVar3)();
  return pTVar5;
}

// GetColorAndOpacity @ 146a73cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FLinearColor * __thiscall UUserWidget::GetColorAndOpacity(UUserWidget *this)

{
  return &this->ColorAndOpacity;
}

// GetContentForSlot @ 146a73ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidget * __thiscall UUserWidget::GetContentForSlot(UUserWidget *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  pFVar3 = (FName *)this->_padding_;
  pFVar2 = pFVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FNamedSlotBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return (UWidget *)pFVar3[1];
    }
    pFVar3 = pFVar3 + 2;
  }
  return (UWidget *)0x0;
}

// GetDesiredFocusWidget @ 146a74af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidget * __thiscall UUserWidget::GetDesiredFocusWidget(UUserWidget *this)

{
  UWidget *pUVar1;
  
  pUVar1 = (UWidget *)FWeakObjectPtr::Get(&(this->DesiredFocusWidget).WidgetPtr.WeakPtr);
  return pUVar1;
}

// GetDesiredFocusWidgetName @ 146a74b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FName __thiscall UUserWidget::GetDesiredFocusWidgetName(UUserWidget *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->DesiredFocusWidget).WidgetName;
  return in_RDX;
}

// GetExtension @ 146a75dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidgetExtension * __thiscall
UUserWidget::GetExtension(UUserWidget *this,TSubclassOf<UUserWidgetExtension> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UUserWidgetExtension *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (this->Extensions).AllocatorInstance.Data;
  iVar2 = (this->Extensions).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    if ((this->Extensions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UUserWidgetExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return (UUserWidgetExtension *)0x0;
    }
    pUVar6 = *(UUserWidgetExtension **)pFVar9;
    if (pUVar6 == (UUserWidgetExtension *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1168331920279341908>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                         ,0xb54,"Extension");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar6 = (UUserWidgetExtension *)(*pcVar4)();
        return pUVar6;
      }
    }
    else {
      pUVar8 = *(UObject **)param_1.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UObject *)0x0) goto LAB_146a75e86;
LAB_146a75eb4:
        pUVar8 = (UObject *)0x0;
      }
      else {
        if (pUVar8 == (UObject *)0x0) goto LAB_146a75eb4;
        UE::GC::MarkAsReachable(pUVar8);
LAB_146a75e86:
        pUVar7 = Z_Construct_UClass_UUserWidgetExtension_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_146a75eb4;
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_146a75eb4;
      }
      if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar8[1].field_0x10 * 8) == &pUVar8[1].field_0x8)) {
        return pUVar6;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// GetExtensions @ 146a76070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> * __thiscall
UUserWidget::GetExtensions
          (UUserWidget *this,
          TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UUserWidgetExtension> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  longlong local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar11 = (this->Extensions).AllocatorInstance.Data;
  iVar2 = (this->Extensions).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  do {
    if ((this->Extensions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UUserWidgetExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return __return_storage_ptr__;
    }
    lVar10 = *(longlong *)pFVar11;
    pUVar9 = *(UObject **)param_1.Class.field0_0x0;
    local_48[0] = lVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UObject *)0x0)) {
      if (pUVar9 != (UObject *)0x0) goto LAB_146a76112;
LAB_146a76140:
      pUVar9 = (UObject *)0x0;
    }
    else {
      UE::GC::MarkAsReachable(pUVar9);
LAB_146a76112:
      lVar10 = local_48[0];
      pUVar7 = Z_Construct_UClass_UUserWidgetExtension_NoRegister();
      if (pUVar7 == (UClass *)0x0) goto LAB_146a76140;
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)&pUVar9[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar9[1].field_0x8 + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146a76140;
    }
    if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(undefined1 **)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)&pUVar9[1].field_0x10 * 8) == &pUVar9[1].field_0x8)) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 <
          pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_48[0];
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// GetForegroundColor @ 146a76600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FSlateColor * __thiscall UUserWidget::GetForegroundColor(UUserWidget *this)

{
  return &this->ForegroundColor;
}

// GetFullScreenOffset @ 146a76610

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

FMargin * __thiscall
UUserWidget::GetFullScreenOffset(UUserWidget *this,FMargin *__return_storage_ptr__)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FGameViewportWidgetSlot local_58;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      pFVar2 = UGameViewportSubsystem::GetWidgetSlot(this_00,&local_58,(UWidget *)this);
      fVar3 = (pFVar2->Offsets).Left;
      fVar4 = (pFVar2->Offsets).Top;
      fVar5 = (pFVar2->Offsets).Right;
      fVar6 = (pFVar2->Offsets).Bottom;
      goto LAB_146a76658;
    }
  }
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
LAB_146a76658:
  __return_storage_ptr__->Left = fVar3;
  __return_storage_ptr__->Top = fVar4;
  __return_storage_ptr__->Right = fVar5;
  __return_storage_ptr__->Bottom = fVar6;
  return __return_storage_ptr__;
}

// GetInitializingFromWidgetTree @ 146a76a80

uint * __cdecl UUserWidget::GetInitializingFromWidgetTree(void)

{
  return (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xef0);
}

// GetInputActionPriority @ 146a76ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall UUserWidget::GetInputActionPriority(UUserWidget *this)

{
  return this->Priority;
}

// GetIsVisible @ 146a76bd0

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

bool __thiscall UUserWidget::GetIsVisible(UUserWidget *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this_00;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar2);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      bVar1 = UGameViewportSubsystem::IsWidgetAdded(this_00,(UWidget *)this);
      return bVar1;
    }
  }
  return false;
}

// GetLegacyPlayerRequirement @ 146a76d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ERequiresLegacyPlayer __thiscall UUserWidget::GetLegacyPlayerRequirement(UUserWidget *this)

{
  return AutoDetect;
}

// GetOrAddAnimationState @ 146a77500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<FWidgetAnimationState,1> * __thiscall
UUserWidget::GetOrAddAnimationState
          (UUserWidget *this,TSharedPtr<FWidgetAnimationState,1> *__return_storage_ptr__,
          UWidgetAnimation *param_1)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UUMGSequenceTickManager *this_00;
  TSharedPtr<FWidgetAnimationState,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FWidgetAnimationState *pFVar10;
  FWidgetAnimationState *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  if ((param_1 == (UWidgetAnimation *)0x0) || (this->bStoppingAllAnimations != '\0')) {
    __return_storage_ptr__->Object = (FWidgetAnimationState *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = (this->AnimationTickManager).field0_0x0.DebugPtr;
  if (this_00 == (UUMGSequenceTickManager *)0x0) {
    this_00 = UUMGSequenceTickManager::Get((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UUMGSequenceTickManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->AnimationTickManager).field0_0x0.DebugPtr = this_00;
  }
  UUMGSequenceTickManager::AddWidget(this_00,this);
  GetAnimationState(this,&local_18,param_1);
  if (local_18.Object != (FWidgetAnimationState *)0x0) {
    if ((local_18.Object == (FWidgetAnimationState *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FWidgetAnimationState,1> *)(*pcVar4)();
      return pTVar7;
    }
    if (!(local_18.Object)->bIsPendingDelete) {
      __return_storage_ptr__->Object = local_18.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
  pTVar8 = ::operator_new(0x140);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
    pFVar10 = (FWidgetAnimationState *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWidgetAnimationState___00_SharedPointerInternals__6B_
    ;
    FWidgetAnimationState::FWidgetAnimationState((FWidgetAnimationState *)(pTVar8 + 1));
    pFVar10 = (FWidgetAnimationState *)(pTVar8 + 1);
    local_28 = pFVar10;
    pTStack_20 = pTVar8;
    if (pFVar10 == (FWidgetAnimationState *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FWidgetAnimationState,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_146a776cb;
    }
  }
  if (((pFVar10->_padding_ == 0) || (*(longlong *)&pFVar10->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar10->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar10->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar10->_padding_ = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146a776cb:
  pTVar2 = &this->ActiveAnimations;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar9 + (longlong)(this->ActiveAnimations).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FWidgetAnimationState,1> *)(*pcVar4)();
    return pTVar7;
  }
  iVar6 = (this->ActiveAnimations).ArrayNum;
  piVar1 = &(this->ActiveAnimations).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  (this->ActiveAnimations).ArrayNum = iVar6 + 1;
  *(FWidgetAnimationState **)pFVar9 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetAnimationState::Initialize(local_28,param_1,this);
  __return_storage_ptr__->Object = local_28;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetOwningLocalPlayer @ 146a77940

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

ULocalPlayer * __thiscall UUserWidget::GetOwningLocalPlayer(UUserWidget *this)

{
  bool bVar1;
  ULocalPlayer *pUVar2;
  
  bVar1 = FLocalPlayerContext::IsValid(&this->PlayerContext);
  if (bVar1) {
    pUVar2 = FLocalPlayerContext::GetLocalPlayer(&this->PlayerContext);
    return pUVar2;
  }
  return (ULocalPlayer *)0x0;
}

// GetOwningPlayer @ 146a77980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UUserWidget::GetOwningPlayer(UUserWidget *this)

{
  bool bVar1;
  APlayerController *pAVar2;
  
  bVar1 = FLocalPlayerContext::IsValid(&this->PlayerContext);
  if (bVar1) {
    pAVar2 = FLocalPlayerContext::GetPlayerController(&this->PlayerContext);
    return pAVar2;
  }
  return (APlayerController *)0x0;
}

// GetOwningPlayerCameraManager @ 146a779c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APlayerCameraManager * __thiscall UUserWidget::GetOwningPlayerCameraManager(UUserWidget *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  if (lVar1 != 0) {
    return *(APlayerCameraManager **)(lVar1 + 0x390);
  }
  return (APlayerCameraManager *)0x0;
}

// GetOwningPlayerPawn @ 146a779f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall UUserWidget::GetOwningPlayerPawn(UUserWidget *this)

{
  APawn *pAVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x2d8))();
  if (lVar2 != 0) {
    pAVar1 = *(APawn **)(lVar2 + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (APawn *)0x0;
}

// GetPadding @ 146a77a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FMargin * __thiscall UUserWidget::GetPadding(UUserWidget *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPlayerContext @ 146a77ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FLocalPlayerContext * __thiscall UUserWidget::GetPlayerContext(UUserWidget *this)

{
  return &this->PlayerContext;
}

// GetPrivateStaticClass @ 146a78090

UClass * __cdecl UUserWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidget",&Z_Registration_Info_UClass_UUserWidget.InnerSingleton,
               StaticRegisterNativesUUserWidget,0x3a8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserWidget>,
               InternalVTableHelperCtorCaller<UUserWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidget.InnerSingleton;
}

// GetRootWidget @ 146a79200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidget * __thiscall UUserWidget::GetRootWidget(UUserWidget *this)

{
  UWidgetTree *pUVar1;
  
  pUVar1 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (pUVar1 != (UWidgetTree *)0x0) {
    return (pUVar1->RootWidget).field0_0x0.DebugPtr;
  }
  return (UWidget *)0x0;
}

// GetSlateWidgetFromName @ 146a79320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UUserWidget::GetSlateWidgetFromName
          (UUserWidget *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  UWidgetTree *this_00;
  UWidget *this_01;
  TSharedPtr<SWidget,1> *pTVar1;
  TSharedPtr<SWidget,1> local_18;
  
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (this_00 != (UWidgetTree *)0x0) {
    this_01 = UWidgetTree::FindWidget(this_00,param_1);
    if (this_01 != (UWidget *)0x0) {
      pTVar1 = UWidget::GetCachedWidget(this_01,&local_18);
      __return_storage_ptr__->Object = pTVar1->Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      (pTVar1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar1->Object = (SWidget *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSlotNames @ 146a79410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::GetSlotNames(UUserWidget *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  lVar2 = *(longlong *)&this[-1].ColorAndOpacity.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      if ((param_1 == (TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x3d0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(lVar2 + 0x3d8);
      if (iVar1 == 0) {
        return;
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax
                        );
      memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8,
             (((TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x3d0))->AllocatorInstance).
             Data,(longlong)iVar1 << 3);
      return;
    }
  }
  if ((UWidgetTree *)this->_padding_ != (UWidgetTree *)0x0) {
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUserWidget::GetSlotNames'::__l9::<lambda_1>,void,UWidget_*>::
               Call;
    local_res8 = param_1;
    UWidgetTree::ForEachWidget
              ((UWidgetTree *)this->_padding_,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  }
  return;
}

// GetWidgetFromName @ 146a799e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidget * __thiscall UUserWidget::GetWidgetFromName(UUserWidget *this,FName *param_1)

{
  UWidgetTree *this_00;
  UWidget *apUStackX_10 [3];
  FName *pFStack_28;
  UWidget **ppUStack_20;
  code *pcStack_18;
  FName **ppFStack_10;
  
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (this_00 == (UWidgetTree *)0x0) {
    return (UWidget *)0x0;
  }
  ppUStack_20 = apUStackX_10;
  ppFStack_10 = &pFStack_28;
  apUStackX_10[0] = (UWidget *)0x0;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWidgetTree::FindWidget'::__l2::<lambda_1>,void,UWidget_*>::Call;
  pFStack_28 = param_1;
  UWidgetTree::ForEachWidget(this_00,(TFunctionRef<void___cdecl(UWidget_*)> *)&pcStack_18);
  return apUStackX_10[0];
}

// GetWidgetHandle @ 146a79a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidget * __thiscall UUserWidget::GetWidgetHandle(UUserWidget *this,TSharedRef<SWidget,1> *param_1)

{
  UWidgetTree *this_00;
  UWidget *pUVar1;
  TSharedRef<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar1 = UWidgetTree::FindWidget(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar1;
}

// GetWidgetTreeOwningClass @ 146a79a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetBlueprintGeneratedClass * __thiscall UUserWidget::GetWidgetTreeOwningClass(UUserWidget *this)

{
  int iVar1;
  UWidgetBlueprintGeneratedClass *pUVar2;
  UWidgetTree *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UWidgetBlueprintGeneratedClass *this_00;
  
  pUVar2 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  if (pUVar2 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar5 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       (this_00 = pUVar2,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar5->_padding_)) {
      do {
        UObject::ConditionalPostLoad((UObject *)this_00);
        pUVar3 = (this_00->WidgetTree).field0_0x0.DebugPtr;
        if ((pUVar3 != (UWidgetTree *)0x0) &&
           ((pUVar3->RootWidget).field0_0x0.DebugPtr != (UWidget *)0x0)) {
          return this_00;
        }
        this_00 = (UWidgetBlueprintGeneratedClass *)this_00->_padding_;
        if (this_00 == (UWidgetBlueprintGeneratedClass *)0x0) {
          return pUVar2;
        }
        bVar4 = UObjectBaseUtility::IsA<UWidgetBlueprintGeneratedClass>
                          ((UObjectBaseUtility *)this_00);
      } while (bVar4);
      return pUVar2;
    }
  }
  return (UWidgetBlueprintGeneratedClass *)0x0;
}

// GetWorld @ 146a79b00

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

UWorld * __thiscall UUserWidget::GetWorld(UUserWidget *this)

{
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *this_00;
  longlong *plVar1;
  bool bVar2;
  UWorld *pUVar3;
  UWorld *local_res8;
  
  this_00 = &this->CachedWorld;
  pUVar3 = (UWorld *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar3 == (UWorld *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      bVar2 = FLocalPlayerContext::IsValid(&this->PlayerContext);
      if ((bVar2) &&
         (pUVar3 = FLocalPlayerContext::GetWorld(&this->PlayerContext), pUVar3 != (UWorld *)0x0)) {
        local_res8 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
        return pUVar3;
      }
      for (plVar1 = (longlong *)this->_padding_; plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[4]) {
        pUVar3 = (UWorld *)(**(code **)(*plVar1 + 0x180))(plVar1);
        if (pUVar3 != (UWorld *)0x0) {
          local_res8 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
          return pUVar3;
        }
      }
    }
    pUVar3 = (UWorld *)0x0;
  }
  return pUVar3;
}

// HandleOwningLocalPlayerControllerChanged @ 146a79d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UUserWidget::HandleOwningLocalPlayerControllerChanged(UUserWidget *this,APlayerController *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  APlayerController *pAVar5;
  FLocalPlayerContext *pFVar6;
  FLocalPlayerContext local_18;
  
  pAVar5 = (APlayerController *)(**(code **)(this->_padding_ + 0x2d8))();
  if ((param_1 != pAVar5) && (param_1 != (APlayerController *)0x0)) {
    cVar4 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1);
    if (cVar4 != '\0') {
      (**(code **)(this->_padding_ + 0x4d0))(this);
      pFVar6 = FLocalPlayerContext::FLocalPlayerContext(&local_18,param_1);
      iVar1 = (pFVar6->LocalPlayer).WeakPtr.ObjectSerialNumber;
      iVar2 = (pFVar6->World).WeakPtr.ObjectIndex;
      iVar3 = (pFVar6->World).WeakPtr.ObjectSerialNumber;
      (this->PlayerContext).LocalPlayer.WeakPtr.ObjectIndex =
           (pFVar6->LocalPlayer).WeakPtr.ObjectIndex;
      (this->PlayerContext).LocalPlayer.WeakPtr.ObjectSerialNumber = iVar1;
      (this->PlayerContext).World.WeakPtr.ObjectIndex = iVar2;
      (this->PlayerContext).World.WeakPtr.ObjectSerialNumber = iVar3;
      (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
      (**(code **)(this->_padding_ + 0x4c8))(this);
    }
  }
  return;
}

// Initialize @ 146a7a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UUserWidget::Initialize(UUserWidget *this)

{
  int iVar1;
  UWidgetBlueprintGeneratedClass *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *pFVar9;
  UWidgetTree *pUVar10;
  FObjectPropertyBase *pFVar11;
  UPanelWidget *this_01;
  longlong *plVar12;
  atomic<unsigned_char> *paVar13;
  UWidgetBlueprintGeneratedClass *pUVar14;
  int iVar15;
  FName *pFVar16;
  undefined1 auStackY_108 [32];
  char *pcVar17;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((this->bInitialized != '\0') || (((uint)this->_padding_ >> 4 & 1) != 0)) {
    return false;
  }
  pUVar7 = StaticClass();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 != (UObject *)0x0) {
    SetPlayerContext(this,(FLocalPlayerContext *)&pUVar8[0x16].field_0x20);
  }
  this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  pUVar14 = (UWidgetBlueprintGeneratedClass *)0x0;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar7 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      UWidgetBlueprintGeneratedClass::InitializeWidget(this_00,this);
      pUVar14 = this_00;
      goto LAB_146a7a671;
    }
  }
  (**(code **)(this->_padding_ + 0x318))(this);
LAB_146a7a671:
  pUVar10 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (pUVar10 == (UWidgetTree *)0x0) {
    pFVar9 = ::FName::FName(local_c8,L"WidgetTree");
    local_d4 = 0;
    FVar2 = *pFVar9;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_UWidgetTree_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_Transient;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    local_b8._16_8_ = FVar2;
    pUVar10 = (UWidgetTree *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UWidgetTree *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->WidgetTree).field0_0x0.DebugPtr = pUVar10;
  }
  else {
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transient);
    iVar1 = (this->NamedSlotBindings).ArrayNum;
    pFVar9 = (FName *)(this->NamedSlotBindings).AllocatorInstance.Data;
    pFVar16 = pFVar9 + (longlong)iVar1 * 2;
    while( true ) {
      if ((this->NamedSlotBindings).ArrayNum != iVar1) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<FNamedSlotBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (pFVar9 == pFVar16) break;
      FVar2 = pFVar9[1];
      if (FVar2 == (FName)0x0) {
LAB_146a7a871:
        pFVar9 = pFVar9 + 2;
      }
      else {
        pFVar11 = FindFProperty<FObjectPropertyBase>((UStruct *)this->_padding_,*pFVar9,Default);
        if (pFVar11 == (FObjectPropertyBase *)0x0) {
          pcVar17 = "NamedSlotProperty";
          paVar13 = &bGEnsureHasExecuted<1168331920279339221>;
          iVar15 = 0xd5;
LAB_146a7a85d:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (paVar13,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                             ,iVar15,pcVar17);
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          goto LAB_146a7a871;
        }
        this_01 = (UPanelWidget *)(**(code **)(pFVar11->_padding_ + 0x208))(pFVar11,this,0);
        if (this_01 == (UPanelWidget *)0x0) {
LAB_146a7a844:
          iVar15 = 0xda;
          pcVar17 = "NamedSlot";
          paVar13 = &bGEnsureHasExecuted<1168331920279339226>;
          goto LAB_146a7a85d;
        }
        pUVar7 = Z_Construct_UClass_UNamedSlot_NoRegister();
        iVar15 = (int)pUVar7->_padding_;
        if ((*(int *)(this_01->_padding_ + 0x38) < iVar15) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
            &pUVar7->_padding_)) goto LAB_146a7a844;
        (**(code **)(this_01->_padding_ + 0x310))(this_01);
        UPanelWidget::AddChild(this_01,(UWidget *)FVar2);
        pFVar9 = pFVar9 + 2;
      }
    }
  }
  if ((pUVar14 == (UWidgetBlueprintGeneratedClass *)0x0) ||
     (pUVar14->bCanCallInitializedWithoutPlayerContext == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar6 = FLocalPlayerContext::IsValid(&this->PlayerContext);
  if ((bVar6) || (bVar4)) {
    (**(code **)(this->_padding_ + 0x350))(this);
  }
  this->bInitialized = '\x01';
  return true;
}

// InitializeInputComponent @ 146a7af90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UUserWidget::InitializeInputComponent(UUserWidget *this)

{
  longlong *plVar1;
  UClass *pUVar2;
  UInputComponent *pUVar3;
  FMessageLog *this_00;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FName local_res8;
  FName local_res10;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  if (plVar1 == (longlong *)0x0) {
    ::FName::FName(&local_res8,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
    local_res10 = *(FName *)(this->_padding_ + 0x18);
    pFVar4 = FText::FromName(&local_58,&local_res10);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UMG",L"NoInputListeningWithoutPlayerController",
                        L"Unable to listen to input actions without a player controller in {0}.");
    pFVar6 = FTextFormat::FTextFormat(&local_48,pFVar5,Default);
    pFVar4 = FText::Format<FText>(&local_78,pFVar6,pFVar4);
    FMessageLog::Info(this_00,&local_88,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  else {
    if (plVar1[0x2f] == 0) {
      pUVar2 = UInputSettings::GetDefaultInputComponentClass();
    }
    else {
      pUVar2 = *(UClass **)(plVar1[0x2f] + 0x10);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar3 = NewObject<UInputComponent>
                       ((UObject *)this,pUVar2,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UInputComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->InputComponent).field0_0x0.DebugPtr = pUVar3;
    pUVar3->field_0x144 = (this->bStopAction ^ pUVar3->bBlockInput) & 1 ^ pUVar3->field_0x144;
    ((this->InputComponent).field0_0x0.DebugPtr)->Priority = this->Priority;
    (**(code **)(*plVar1 + 0xd98))(plVar1,(this->InputComponent).field0_0x0.DebugPtr);
  }
  return;
}

// InitializeNamedSlots @ 146a7b1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::InitializeNamedSlots(UUserWidget *this)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FObjectPropertyBase *pFVar5;
  UPanelWidget *this_00;
  UClass *pUVar6;
  atomic<unsigned_char> *paVar7;
  FName *pFVar8;
  int iVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  char *pcVar11;
  
  iVar1 = (this->NamedSlotBindings).ArrayNum;
  pFVar8 = (FName *)(this->NamedSlotBindings).AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar1 * 2;
  do {
    while( true ) {
      if ((this->NamedSlotBindings).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNamedSlotBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar10) {
        return;
      }
      FVar2 = pFVar8[1];
      if (FVar2 != (FName)0x0) break;
LAB_146a7b2ce:
      pFVar8 = pFVar8 + 2;
    }
    pFVar5 = FindFProperty<FObjectPropertyBase>((UStruct *)this->_padding_,*pFVar8,Default);
    if (pFVar5 == (FObjectPropertyBase *)0x0) {
      pcVar11 = "NamedSlotProperty";
      paVar7 = &bGEnsureHasExecuted<1168331920279339221>;
      iVar9 = 0xd5;
LAB_146a7b2ba:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar7,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                         ,iVar9,pcVar11);
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_146a7b2ce;
    }
    this_00 = (UPanelWidget *)(**(code **)(pFVar5->_padding_ + 0x208))(pFVar5,this,0);
    if (this_00 == (UPanelWidget *)0x0) {
LAB_146a7b2a8:
      pcVar11 = "NamedSlot";
      paVar7 = &bGEnsureHasExecuted<1168331920279339226>;
      iVar9 = 0xda;
      goto LAB_146a7b2ba;
    }
    pUVar6 = Z_Construct_UClass_UNamedSlot_NoRegister();
    iVar9 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar6->_padding_)) goto LAB_146a7b2a8;
    (**(code **)(this_00->_padding_ + 0x310))(this_00);
    UPanelWidget::AddChild(this_00,(UWidget *)FVar2);
    pFVar8 = pFVar8 + 2;
  } while( true );
}

// InitializeNativeClassData @ 146a7b300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::InitializeNativeClassData(UUserWidget *this)

{
  return;
}

// Invalidate @ 146a7bdf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::Invalidate(UUserWidget *this,EInvalidateWidgetReason param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  UWidget::GetCachedWidget((UWidget *)this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    UpdateCanTick(this);
    if (local_18.Object == (SWidget *)0x0) {
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
    SWidget::Invalidate(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// IsAnimationPlaying @ 146a7be80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsAnimationPlaying(UUserWidget *this,UWidgetAnimation *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  Type TVar4;
  TSharedPtr<FWidgetAnimationState_const_,1> local_18;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,&local_18,param_1);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
      TVar4 = FWidgetAnimationState::GetPlaybackStatus(local_18.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return TVar4 == Playing;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// IsAnimationPlayingForward @ 146a7bf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsAnimationPlayingForward(UUserWidget *this,UWidgetAnimation *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,&local_18,param_1);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
      bVar2 = FWidgetAnimationState::IsPlayingForward(local_18.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return bVar2;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// IsAnyAnimationPlaying @ 146a7bfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsAnyAnimationPlaying(UUserWidget *this)

{
  return 0 < (this->ActiveAnimations).ArrayNum;
}

// IsAsset @ 146a7bfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsAsset(UUserWidget *this)

{
  return false;
}

// IsEditorUtility @ 146a7c230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsEditorUtility(UUserWidget *this)

{
  return false;
}

// IsFocusable @ 146a7c250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsFocusable(UUserWidget *this)

{
  return this->bIsFocusable;
}

// IsInputActionBlocking @ 146a7c260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsInputActionBlocking(UUserWidget *this)

{
  return this->bStopAction;
}

// IsInteractable @ 146a7c2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsInteractable(UUserWidget *this)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_IsInteractable);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0] != '\0';
}

// IsListeningForInputAction @ 146a7c320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsListeningForInputAction(UUserWidget *this,FName param_1)

{
  UInputComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
  if ((pUVar1 == (UInputComponent *)0x0) ||
     (uVar7 = (pUVar1->ActionBindings).ArrayNum - 1, (int)uVar7 < 0)) {
    return false;
  }
  lVar6 = (longlong)(int)uVar7 << 4;
  do {
    pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
    uVar5 = 0;
    if ((int)uVar7 < (pUVar1->ActionBindings).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(FName *)(*(longlong *)((pUVar1->ActionBindings).AllocatorInstance.Data + lVar6) + 4) ==
        param_1) {
      return true;
    }
    lVar6 = lVar6 + -0x10;
    uVar7 = uVar7 - 1;
  } while (-1 < (int)uVar7);
  return false;
}

// IsPlayingAnimation @ 146a7c5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::IsPlayingAnimation(UUserWidget *this)

{
  return 0 < (this->ActiveAnimations).ArrayNum;
}

// ListenForInputAction @ 146a7caa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::ListenForInputAction
          (UUserWidget *this,FName param_1,TEnumAsByte<EInputEvent> param_2,bool param_3,
          FOnInputAction *param_4)

{
  UInputComponent *this_00;
  FOnInputAction *this_01;
  FSharedReferencer<1> FVar1;
  FSharedReferencer<1> FVar2;
  FSharedReferencer<1> FVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  undefined8 *puVar4;
  ulong64 uVar5;
  byte local_f8;
  FInputActionUnifiedDelegate local_e8;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FInputActionBinding local_98;
  FDestructionSentinel local_50;
  undefined1 *local_38;
  FReadAccessScope local_30;
  
  if ((this->InputComponent).field0_0x0.DebugPtr == (UInputComponent *)0x0) {
    InitializeInputComponent(this);
  }
  this_01 = param_4;
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    local_e8.FuncDelegate.Object = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    local_e8.FuncDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_e8.FuncDelegateWithKey.Object =
         (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
    local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_e8.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
    local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_e8.BoundDelegateType = Unbound;
    this_02 = FInputActionUnifiedDelegate::GetDelegateForManualSet(&local_e8);
    local_a8 = OnInputAction;
    uStack_a0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
               (FWriteAccessScope *)&local_50);
    local_38 = &this_02->field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_38);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFOnInputAction____6B_
      ;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_30);
      puVar4[2] = *(undefined8 *)&this_01->field_0x8;
      puVar4[3] = *(undefined8 *)&this_01->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[4] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUUserWidget____A6AXXZUFDefaultDelegateUserPolicy__VFOnInputAction____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[5] = 0;
      param_4 = (FOnInputAction *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 5),(FObjectPtr)&param_4);
      puVar4[6] = local_a8;
      puVar4[7] = CONCAT44(uStack_9c,uStack_a0);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar3.ReferenceController = local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController;
    FVar2.ReferenceController =
         local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
    FVar1.ReferenceController = local_e8.FuncDelegate.SharedReferenceCount.ReferenceController;
    this_00 = (this->InputComponent).field0_0x0.DebugPtr;
    local_98.bPaired = '\0';
    local_98.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
         local_e8.FuncDelegate.SharedReferenceCount.ReferenceController;
    local_98.Handle = -1;
    local_98.ActionDelegate.FuncDelegate.Object = local_e8.FuncDelegate.Object;
    if (local_e8.FuncDelegate.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.FuncDelegate.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.FuncDelegate.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.ActionDelegate.FuncDelegateWithKey.Object = local_e8.FuncDelegateWithKey.Object;
    local_98.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
         local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
    if (local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           = (atomic<int>)
             ((int)(local_e8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.ActionDelegate.FuncDynDelegate.Object = local_e8.FuncDynDelegate.Object;
    local_98.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
         local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController;
    if (local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.ActionDelegate.BoundDelegateType = local_e8.BoundDelegateType;
    local_98._padding_ = local_f8 & 0xfc | param_3;
    local_98.KeyEvent.Value = param_2.Value;
    local_98.ActionName = param_1;
    UInputComponent::AddActionBinding(this_00,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  return;
}

// NativeConstruct @ 146a7d500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserWidget::NativeConstruct(UUserWidget *this)

{
  longlong *plVar1;
  int iVar2;
  UWidgetBlueprintGeneratedClass *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UClass *pUVar8;
  UFunction *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [4];
  FLLMScope local_174;
  FName local_170;
  FMemScope local_168 [2];
  undefined1 local_158 [288];
  longlong *local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FLLMScope::FLLMScope(&local_174,LLMTagDeclaration_UI_UMG.UniqueName,false,None,Default,true);
  local_170 = LLMTagDeclaration_UI_UMG.UniqueName;
  FMemScope::FMemScope(local_168,&local_170,true);
  (**(code **)(this->_padding_ + 0x4c8))(this);
  lVar7 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (lVar7 != 0) {
    local_158._8_4_ = 0;
    local_158._0_8_ = HandleOwningLocalPlayerControllerChanged;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = HandleOwningLocalPlayerControllerChanged;
    TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
    AddUObject<UUserWidget>
              ((TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
                *)(lVar7 + 0x140),(UUserWidget *)local_158,(pmf_dc5ddd9e *)this);
  }
  this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar8 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) {
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativeConstruct_::__l5::<lambda_1>_>
                (this_00,(<lambda_1>)this,true);
    }
  }
  this->bAreExtensionsConstructed = '\x01';
  if (0 < (this->Extensions).ArrayNum) {
    local_38 = (longlong *)0x0;
    local_30[0] = 0;
    local_30[1] = 0x20;
    if (((TArray<TObjectPtr<UUserWidgetExtension>,TSizedDefaultAllocator<32>_> *)(local_158 + 0x20)
         == &this->Extensions) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->Extensions).ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                        (8,8,iVar2,(ForElementType<UUserWidgetExtension_*> *)(local_158 + 0x20),
                         local_30,local_30 + 1);
      plVar10 = (longlong *)(local_158 + 0x20);
      if (local_38 != (longlong *)0x0) {
        plVar10 = local_38;
      }
      ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
                (plVar10 + iVar6,
                 (TObjectPtr<UUserWidgetExtension> *)(this->Extensions).AllocatorInstance.Data,iVar2
                );
    }
    iVar2 = local_30[0];
    plVar10 = (longlong *)(local_158 + 0x20);
    if (local_38 != (longlong *)0x0) {
      plVar10 = local_38;
    }
    plVar1 = plVar10 + local_30[0];
    while( true ) {
      if (local_30[0] != iVar2) {
        local_178[0] = 0;
        `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_178);
      }
      if (plVar10 == plVar1) break;
      plVar3 = (longlong *)*plVar10;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                             ,0x787,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*plVar3 + 0x2c8))(plVar3);
      plVar10 = plVar10 + 1;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Construct);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,0);
  UpdateCanTick(this);
  FMemScope::~FMemScope(local_168);
  FLLMScope::~FLLMScope(&local_174);
  return;
}

// NativeDestruct @ 146a7d7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeDestruct(UUserWidget *this)

{
  undefined1 *puVar1;
  ForElementType<UUserWidgetExtension_*> FVar2;
  longlong lVar3;
  longlong *plVar4;
  UWidgetBlueprintGeneratedClass *this_00;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  UFunction *pUVar11;
  UClass *pUVar12;
  int iVar13;
  ForElementType<UUserWidgetExtension_*> FVar14;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  FDestructionSentinel local_150;
  ForElementType<UUserWidgetExtension_*> local_138;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x4d0))();
  lVar10 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (lVar10 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar10 + 0x140),this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNativeDestruct,
             (FWriteAccessScope *)&local_150);
  puVar1 = &(this->OnNativeDestruct).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  iVar13 = *(int *)&(this->OnNativeDestruct).field_0x10 + -1;
  if (-1 < iVar13) {
    lVar10 = (longlong)iVar13 << 4;
    bVar8 = false;
    do {
      if ((*(int *)&(this->OnNativeDestruct).field_0x10 <= iVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnNativeDestruct).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar3) == 0) ||
          (plVar4 = *(longlong **)(lVar10 + lVar3), plVar4 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar4 + 0x68))(), cVar7 == '\0')) {
        bVar8 = true;
      }
      lVar10 = lVar10 + -0x10;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  puVar1 = &(this->OnNativeDestruct).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnNativeDestruct,false);
  }
  if (local_150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
  }
  pUVar11 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Destruct);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar11,0);
  this->bAreExtensionsPreConstructed = '\0';
  this->bAreExtensionsConstructed = '\0';
  if (0 < (this->Extensions).ArrayNum) {
    local_30[1] = 0x20;
    local_138.SecondaryData = (ForElementType<UUserWidgetExtension_*>)0x0;
    local_30[0] = 0;
    if ((&local_138 == (ForElementType<UUserWidgetExtension_*> *)&this->Extensions) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (this->Extensions).ArrayNum;
    if (iVar13 != 0) {
      iVar9 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                        (8,8,iVar13,&local_138,local_30,local_30 + 1);
      FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_138;
      if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
        FVar14 = local_138.SecondaryData;
      }
      ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
                ((longlong *)((longlong)FVar14 + (longlong)iVar9 * 8),
                 (TObjectPtr<UUserWidgetExtension> *)(this->Extensions).AllocatorInstance.Data,
                 iVar13);
    }
    iVar13 = local_30[0];
    FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_138;
    if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FVar14 = local_138.SecondaryData;
    }
    FVar2 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar14 + (longlong)local_30[0] * 8);
    while( true ) {
      if (local_30[0] != iVar13) {
        local_158[0] = 0;
        `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (FVar14 == FVar2) break;
      plVar4 = *(longlong **)FVar14;
      if ((plVar4 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                             ,0x7a5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*plVar4 + 0x2d0))(plVar4);
      FVar14 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar14 + 8);
    }
    if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FMemory::Free((void *)local_138.SecondaryData);
    }
  }
  this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar12 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar13 = (int)pUVar12->_padding_;
    if ((iVar13 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar12->_padding_)) {
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativeDestruct_::__l19::<lambda_1>_>
                (this_00,(<lambda_1>)this,true);
    }
  }
  return;
}

// NativeIsInteractable @ 146a7daf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::NativeIsInteractable(UUserWidget *this)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_IsInteractable);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0] != '\0';
}

// NativeOnAddedToFocusPath @ 146a7db40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnAddedToFocusPath(UUserWidget *this,FFocusEvent *param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = *param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAddedToFocusPath);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NativeOnAnalogValueChanged @ 146a7db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnAnalogValueChanged
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  longlong lVar1;
  UFunction *pUVar2;
  undefined1 auStack_3a8 [40];
  FAnalogInputEvent local_380;
  FGeometry local_328;
  FReply local_2e8;
  FReply local_230;
  FGeometry local_178;
  FAnalogInputEvent local_140;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  FKeyEvent::FKeyEvent((FKeyEvent *)&local_380,(FKeyEvent *)param_2);
  local_380.AnalogValue = param_2->AnalogValue;
  local_328.Size = param_1->Size;
  local_328._8_8_ = *(undefined8 *)&param_1->Scale;
  local_380._padding_ = (longlong)&___7FAnalogInputEvent__6B_;
  local_328._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_328._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_328.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_328.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_328._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_178);
  FAnalogInputEvent::FAnalogInputEvent(&local_140);
  FReply::FReply(&local_2e8,false);
  FReply::FReply(&local_f0,&local_2e8);
  FReply::~FReply(&local_2e8);
  FGeometry::operator=(&local_178,&local_328);
  lVar1 = local_140._padding_;
  local_140._padding_._0_2_ = (undefined2)local_380._padding_;
  local_140._padding_._2_1_ = local_380._padding_._2_1_;
  local_140._padding_._4_4_ = local_380._padding_._4_4_;
  local_140._padding_._0_4_ = (undefined4)local_380._padding_;
  local_140._padding_ = local_380._padding_;
  local_140._padding_ = local_380._padding_;
  local_140._padding_ = local_380._padding_;
  if (local_380._padding_ != 0) {
    LOCK();
    *(int *)(local_380._padding_ + 8) = *(int *)(local_380._padding_ + 8) + 1;
    UNLOCK();
  }
  local_140._padding_ = local_380._padding_;
  local_140._padding_ = local_380._padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)lVar1);
  local_140._padding_._0_4_ = (undefined4)local_380._padding_;
  local_140._padding_._4_4_ = local_380._padding_._4_4_;
  local_140.AnalogValue = local_380.AnalogValue;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnalogValueChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&local_230,&local_f0);
  FReply::~FReply(&local_f0);
  FAnalogInputEvent::~FAnalogInputEvent(&local_140);
  FAnalogInputEvent::~FAnalogInputEvent(&local_380);
  FReply::FReply(__return_storage_ptr__,&local_230);
  FReply::~FReply(&local_230);
  return __return_storage_ptr__;
}

// NativeOnCursorQuery @ 146a7dd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FCursorReply * __thiscall
UUserWidget::NativeOnCursorQuery
          (UUserWidget *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Type *pTVar4;
  bool bVar5;
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  Type local_60 [2];
  undefined1 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  Type local_20 [2];
  
  bVar5 = (this->_padding_ & 0x800) == 0;
  if (bVar5) {
    local_60[0] = Default;
    puVar1 = &local_90;
    puVar2 = &local_80;
    local_90 = 0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_70;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    pTVar4 = local_60;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_58 = 1;
    local_50 = 0;
    pTStack_48 = (TReferenceControllerBase<1> *)0x0;
    local_40 = 0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    local_30 = 0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    local_20[0] = UWidget::GetCursor((UWidget *)this);
    puVar1 = &local_50;
    puVar2 = &local_40;
    puVar3 = &local_30;
    pTVar4 = local_20;
  }
  *(bool *)&__return_storage_ptr__->_padding_ = !bVar5;
  __return_storage_ptr__->_padding_ = puVar1[1];
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar3[1];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  __return_storage_ptr__->MouseCursor = *pTVar4;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  }
  return __return_storage_ptr__;
}

// NativeOnDragCancelled @ 146a7def0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnDragCancelled
          (UUserWidget *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  UFunction *pUVar1;
  FPointerEvent local_98;
  UDragDropOperation *local_18;
  
  FPointerEvent::FPointerEvent(&local_98);
  FPointerEvent::operator=(&local_98,(FPointerEvent *)param_1);
  local_18 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragCancelled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_98);
  FPointerEvent::~FPointerEvent(&local_98);
  return;
}

// NativeOnDragDetected @ 146a7df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnDragDetected
          (UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2,UDragDropOperation **param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_148 [32];
  FGeometry local_128;
  FGeometry local_e8;
  FPointerEvent local_b0;
  UDragDropOperation *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.Size = param_1->Size;
  local_128._8_8_ = *(undefined8 *)&param_1->Scale;
  local_128._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_128._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_128.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_128.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_128._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_e8);
  FPointerEvent::FPointerEvent(&local_b0);
  FGeometry::operator=(&local_e8,&local_128);
  FPointerEvent::operator=(&local_b0,param_2);
  local_30 = *param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_e8);
  *param_3 = local_30;
  FPointerEvent::~FPointerEvent(&local_b0);
  return;
}

// NativeOnDragEnter @ 146a7e070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnDragEnter
          (UUserWidget *this,FGeometry *param_1,FDragDropEvent *param_2,UDragDropOperation *param_3)

{
  FPointerEvent *this_00;
  UFunction *pUVar1;
  undefined1 auStack_1d8 [32];
  FGeometry local_1b8;
  FPointerEvent local_178;
  FGeometry local_f8;
  FPointerEvent local_c0;
  UDragDropOperation *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = FPointerEvent::FPointerEvent(&local_178,(FPointerEvent *)param_2);
  local_1b8.Size = param_1->Size;
  local_1b8._8_8_ = *(undefined8 *)&param_1->Scale;
  local_1b8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_1b8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_1b8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_1b8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_1b8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_f8);
  FPointerEvent::FPointerEvent(&local_c0);
  FGeometry::operator=(&local_f8,&local_1b8);
  FPointerEvent::operator=(&local_c0,this_00);
  local_40 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragEnter);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_f8);
  FPointerEvent::~FPointerEvent(&local_c0);
  FPointerEvent::~FPointerEvent(this_00);
  return;
}

// NativeOnDragLeave @ 146a7e180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnDragLeave
          (UUserWidget *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  FPointerEvent *this_00;
  UFunction *pUVar1;
  FPointerEvent local_118;
  UDragDropOperation *local_98;
  FPointerEvent local_88;
  
  this_00 = FPointerEvent::FPointerEvent(&local_88,(FPointerEvent *)param_1);
  FPointerEvent::FPointerEvent(&local_118);
  FPointerEvent::operator=(&local_118,this_00);
  local_98 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragLeave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_118);
  FPointerEvent::~FPointerEvent(&local_118);
  FPointerEvent::~FPointerEvent(this_00);
  return;
}

// NativeOnDragOver @ 146a7e220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUserWidget::NativeOnDragOver
          (UUserWidget *this,FGeometry *param_1,FDragDropEvent *param_2,UDragDropOperation *param_3)

{
  char cVar1;
  FPointerEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_1e8 [32];
  FGeometry local_1c8;
  FPointerEvent local_188;
  FGeometry local_108;
  FPointerEvent local_d0;
  UDragDropOperation *local_50;
  char local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = FPointerEvent::FPointerEvent(&local_188,(FPointerEvent *)param_2);
  local_1c8.Size = param_1->Size;
  local_1c8._8_8_ = *(undefined8 *)&param_1->Scale;
  local_1c8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_1c8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_1c8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_1c8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_1c8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_108);
  FPointerEvent::FPointerEvent(&local_d0);
  local_48 = '\0';
  FGeometry::operator=(&local_108,&local_1c8);
  FPointerEvent::operator=(&local_d0,this_00);
  local_50 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_108);
  cVar1 = local_48;
  FPointerEvent::~FPointerEvent(&local_d0);
  FPointerEvent::~FPointerEvent(this_00);
  return cVar1 != '\0';
}

// NativeOnDrop @ 146a7e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUserWidget::NativeOnDrop
          (UUserWidget *this,FGeometry *param_1,FDragDropEvent *param_2,UDragDropOperation *param_3)

{
  char cVar1;
  FPointerEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_1e8 [32];
  FGeometry local_1c8;
  FPointerEvent local_188;
  FGeometry local_108;
  FPointerEvent local_d0;
  UDragDropOperation *local_50;
  char local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = FPointerEvent::FPointerEvent(&local_188,(FPointerEvent *)param_2);
  local_1c8.Size = param_1->Size;
  local_1c8._8_8_ = *(undefined8 *)&param_1->Scale;
  local_1c8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_1c8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_1c8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_1c8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_1c8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_108);
  FPointerEvent::FPointerEvent(&local_d0);
  local_48 = '\0';
  FGeometry::operator=(&local_108,&local_1c8);
  FPointerEvent::operator=(&local_d0,this_00);
  local_50 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDrop);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_108);
  cVar1 = local_48;
  FPointerEvent::~FPointerEvent(&local_d0);
  FPointerEvent::~FPointerEvent(this_00);
  return cVar1 != '\0';
}

// NativeOnFinishedPointerInput @ 146a7e460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnFinishedPointerInput(UUserWidget *this)

{
  return;
}

// NativeOnFocusChanging @ 146a7e470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnFocusChanging
          (UUserWidget *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a7e4b6;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (SWidget *)this->_padding_;
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = FWidgetPath::ContainsWidget(param_2,pSVar1);
      if (bVar5) {
        bVar5 = FWeakWidgetPath::ContainsWidget(param_1,pSVar1);
        if (!bVar5) {
          (**(code **)(this->_padding_ + 0x3b0))(this,param_3);
        }
      }
      else {
        (**(code **)(this->_padding_ + 0x3b8))(this,param_3);
      }
    }
  }
LAB_146a7e4b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// NativeOnFocusLost @ 146a7e530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnFocusLost(UUserWidget *this,FFocusEvent *param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = *param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnFocusLost);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NativeOnFocusReceived @ 146a7e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnFocusReceived
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  EFocusCause EVar1;
  FFocusEvent FVar2;
  UFunction *pUVar3;
  UWidget *this_00;
  TSharedPtr<SWidget,1> *this_01;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  undefined1 auStack_408 [40];
  TSharedPtr<SWidget,1> local_3e0;
  FGeometry local_3c8;
  TSharedRef<SWidget,1> local_388;
  FReply local_378;
  FReply local_2b8;
  FReply local_1f8;
  FGeometry local_138;
  FFocusEvent local_100;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_3c8.Size = param_1->Size;
  local_3c8._8_8_ = *(undefined8 *)&param_1->Scale;
  FVar2 = *param_2;
  local_3c8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_3c8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_3c8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_3c8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_3c8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_138);
  local_100.bLostFocusByChild = false;
  local_100.Cause = SetDirectly;
  local_100 = (FFocusEvent)((ulonglong)local_100 & 0xffffffff);
  FReply::FReply(&local_1f8,false);
  FReply::FReply(&local_f8,&local_1f8);
  FReply::~FReply(&local_1f8);
  FGeometry::operator=(&local_138,&local_3c8);
  local_100 = FVar2;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnFocusReceived);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_138);
  FReply::FReply(&local_378,&local_f8);
  FReply::~FReply(&local_f8);
  FReply::FReply(&local_2b8,&local_378);
  FReply::~FReply(&local_378);
  this_00 = FWidgetChild::Resolve(&this->DesiredFocusWidget,(this->WidgetTree).field0_0x0.DebugPtr);
  if (this_00 == (UWidget *)0x0) {
    FReply::FReply(__return_storage_ptr__,&local_2b8);
  }
  else {
    FReply::FReply(&local_378,true);
    EVar1 = param_2->Cause;
    this_01 = UWidget::GetCachedWidget(this_00,&local_3e0);
    pTVar4 = TSharedPtr<SWidget,1>::ToSharedRef(this_01,&local_388);
    pFVar5 = FReply::SetUserFocus(&local_378,pTVar4,EVar1,false);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e0.SharedReferenceCount.ReferenceController);
    FReply::~FReply(&local_378);
  }
  FReply::~FReply(&local_2b8);
  return __return_storage_ptr__;
}

// NativeOnInitialized @ 146a7e750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnInitialized(UUserWidget *this)

{
  int iVar1;
  UWidgetBlueprintGeneratedClass *this_00;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  uint uVar7;
  longlong lVar8;
  
  (**(code **)(this->_padding_ + 0x4c0))();
  this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar5 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativeOnInitialized_::__l5::<lambda_1>_>
                (this_00,(<lambda_1>)this,true);
    }
  }
  uVar7 = 0;
  if (0 < (this->Extensions).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Extensions).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      plVar2 = *(longlong **)((this->Extensions).AllocatorInstance.Data + lVar8);
      if ((plVar2 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                             ,0x74c,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      (**(code **)(*plVar2 + 0x2b8))(plVar2);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->Extensions).ArrayNum);
  }
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnInitialized);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a7e896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar6,0,UNRECOVERED_JUMPTABLE);
  return;
}

// NativeOnKeyChar @ 146a7e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnKeyChar
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_358 [32];
  FCharacterEvent local_338;
  FGeometry local_2f8;
  FReply local_2b8;
  FReply local_200;
  FGeometry local_148;
  FCharacterEvent local_110;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_338._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_2f8.Size = param_1->Size;
  local_2f8._8_8_ = *(undefined8 *)&param_1->Scale;
  local_338._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_2f8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_2f8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_338._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_338._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_338._padding_ = param_2->_padding_;
  local_338._padding_ = param_2->_padding_;
  local_2f8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_2f8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_338._padding_ = (longlong)&___7FCharacterEvent__6B_;
  local_338.Character = param_2->Character;
  local_2f8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_148);
  FCharacterEvent::FCharacterEvent(&local_110);
  FReply::FReply(&local_2b8,false);
  FReply::FReply(&local_e0,&local_2b8);
  FReply::~FReply(&local_2b8);
  FGeometry::operator=(&local_148,&local_2f8);
  local_110._padding_._0_2_ = (undefined2)local_338._padding_;
  local_110._padding_._2_1_ = local_338._padding_._2_1_;
  local_110._padding_._4_4_ = local_338._padding_._4_4_;
  local_110._padding_._0_4_ = (undefined4)local_338._padding_;
  local_110._padding_ = local_338._padding_;
  local_110._padding_ = local_338._padding_;
  local_110.Character = local_338.Character;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyChar);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_148);
  FReply::FReply(&local_200,&local_e0);
  FReply::~FReply(&local_e0);
  FCharacterEvent::~FCharacterEvent(&local_110);
  FCharacterEvent::~FCharacterEvent(&local_338);
  FReply::FReply(__return_storage_ptr__,&local_200);
  FReply::~FReply(&local_200);
  return __return_storage_ptr__;
}

// NativeOnKeyDown @ 146a7ea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnKeyDown
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  FKeyEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_3a8 [48];
  FGeometry local_378;
  FReply local_338;
  FReply local_280;
  FKeyEvent local_1c8;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = FKeyEvent::FKeyEvent(&local_1c8,param_2);
  local_378.Size = param_1->Size;
  local_378._8_8_ = *(undefined8 *)&param_1->Scale;
  local_378._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_378._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_378.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_378.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_378._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_338,false);
  FReply::FReply(&local_f8,&local_338);
  FReply::~FReply(&local_338);
  FGeometry::operator=(&local_178,&local_378);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)this_00->_padding_;
  local_140.Key.KeyDetails.Object = (this_00->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&this_00->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140.Key.KeyName = (this_00->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (this_00->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = this_00->CharacterCode;
  local_140.KeyCode = this_00->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&local_280,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(this_00);
  FReply::FReply(__return_storage_ptr__,&local_280);
  FReply::~FReply(&local_280);
  return __return_storage_ptr__;
}

// NativeOnKeyUp @ 146a7ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnKeyUp
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  FKeyEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_3a8 [48];
  FGeometry local_378;
  FReply local_338;
  FReply local_280;
  FKeyEvent local_1c8;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = FKeyEvent::FKeyEvent(&local_1c8,param_2);
  local_378.Size = param_1->Size;
  local_378._8_8_ = *(undefined8 *)&param_1->Scale;
  local_378._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_378._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_378.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_378.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_378._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_338,false);
  FReply::FReply(&local_f8,&local_338);
  FReply::~FReply(&local_338);
  FGeometry::operator=(&local_178,&local_378);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)this_00->_padding_;
  local_140.Key.KeyDetails.Object = (this_00->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&this_00->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140.Key.KeyName = (this_00->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (this_00->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = this_00->CharacterCode;
  local_140.KeyCode = this_00->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyUp);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&local_280,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(this_00);
  FReply::FReply(__return_storage_ptr__,&local_280);
  FReply::~FReply(&local_280);
  return __return_storage_ptr__;
}

// NativeOnMotionDetected @ 146a7ee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMotionDetected
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FMotionEvent *param_2
          )

{
  UFunction *pUVar1;
  undefined1 auStack_408 [32];
  LARGE_INTEGER local_3e8;
  FInputEvent local_3e0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  FGeometry local_358;
  FReply local_318;
  FReply local_260;
  FGeometry local_1a8;
  FInputEvent local_170;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  FReply local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_3e0.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_3b8 = (param_2->Tilt).field0_0x0._s_0.X;
  dStack_3b0 = (param_2->Tilt).field0_0x0._s_0.Y;
  local_3a8 = (param_2->Tilt).field0_0x0._s_0.Z;
  local_3e0.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_3e0.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_3a0 = (param_2->RotationRate).field0_0x0._s_0.X;
  dStack_398 = (param_2->RotationRate).field0_0x0._s_0.Y;
  local_3e0.InputDeviceId.InternalId = (int)param_2->_padding_;
  local_390 = (param_2->RotationRate).field0_0x0._s_0.Z;
  local_388 = (param_2->Gravity).field0_0x0._s_0.X;
  dStack_380 = (param_2->Gravity).field0_0x0._s_0.Y;
  local_3e0.EventPath = (FWidgetPath *)param_2->_padding_;
  local_378 = (param_2->Gravity).field0_0x0._s_0.Z;
  local_370 = (param_2->Acceleration).field0_0x0._s_0.X;
  dStack_368 = (param_2->Acceleration).field0_0x0._s_0.Y;
  local_3e0.EventTimestamp = param_2->_padding_;
  local_360 = (param_2->Acceleration).field0_0x0._s_0.Z;
  local_358.Size = param_1->Size;
  local_358._8_8_ = *(undefined8 *)&param_1->Scale;
  local_3e0._padding_ = (longlong)&___7FMotionEvent__6B_;
  local_358._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_358._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_358.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_358.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_358._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_1a8);
  local_170.bIsRepeat = false;
  local_170._padding_ = (longlong)&___7FInputEvent__6B_;
  local_170.UserIndex = 0;
  local_170.ModifierKeys.bAreCapsLocked = 0;
  local_170.ModifierKeys.bIsRightCommandDown = 0;
  local_170.ModifierKeys.bIsLeftCommandDown = 0;
  local_170.ModifierKeys.bIsRightAltDown = 0;
  local_170.ModifierKeys.bIsLeftAltDown = 0;
  local_170.ModifierKeys.bIsRightControlDown = 0;
  local_170.ModifierKeys.bIsLeftControlDown = 0;
  local_170.ModifierKeys.bIsRightShiftDown = 0;
  local_170.ModifierKeys.bIsLeftShiftDown = 0;
  local_170.InputDeviceId.InternalId = -1;
  local_170.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_3e8);
  local_170.EventTimestamp = (ulong64)local_3e8;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_170._padding_ = (longlong)&___7FMotionEvent__6B_;
  FReply::FReply(&local_318,false);
  FReply::FReply(&local_e8,&local_318);
  FReply::~FReply(&local_318);
  FGeometry::operator=(&local_1a8,&local_358);
  local_170.ModifierKeys = local_3e0.ModifierKeys;
  local_170.bIsRepeat = local_3e0.bIsRepeat;
  local_170.UserIndex = local_3e0.UserIndex;
  local_148 = local_3b8;
  dStack_140 = dStack_3b0;
  local_170.InputDeviceId.InternalId = local_3e0.InputDeviceId.InternalId;
  local_138 = local_3a8;
  dStack_130 = local_3a0;
  local_128 = dStack_398;
  local_170.EventPath = local_3e0.EventPath;
  dStack_120 = local_390;
  local_118 = local_388;
  dStack_110 = dStack_380;
  local_170.EventTimestamp = local_3e0.EventTimestamp;
  local_108 = local_378;
  dStack_100 = local_370;
  local_f8 = dStack_368;
  dStack_f0 = local_360;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMotionDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&local_260,&local_e8);
  FReply::~FReply(&local_e8);
  FInputEvent::~FInputEvent(&local_170);
  FInputEvent::~FInputEvent(&local_3e0);
  FReply::FReply(__return_storage_ptr__,&local_260);
  FReply::~FReply(&local_260);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDoubleClick @ 146a7f130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMouseButtonDoubleClick
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonDoubleClick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDown @ 146a7f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMouseButtonDown
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 146a7f3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMouseButtonUp
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonUp);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnMouseCaptureLost @ 146a7f520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnMouseCaptureLost(UUserWidget *this,FCaptureLostEvent *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseCaptureLost);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a7f54d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// NativeOnMouseEnter @ 146a7f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::NativeOnMouseEnter(UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_138 [32];
  FGeometry local_118;
  FGeometry local_d8;
  FPointerEvent local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.Size = param_1->Size;
  local_118._8_8_ = *(undefined8 *)&param_1->Scale;
  local_118._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_118._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_118.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_118.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_118._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_d8);
  FPointerEvent::FPointerEvent(&local_a0);
  FGeometry::operator=(&local_d8,&local_118);
  FPointerEvent::operator=(&local_a0,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseEnter);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_d8);
  FPointerEvent::~FPointerEvent(&local_a0);
  return;
}

// NativeOnMouseLeave @ 146a7f640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnMouseLeave(UUserWidget *this,FPointerEvent *param_1)

{
  UFunction *pUVar1;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  FPointerEvent::operator=(&local_88,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseLeave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// NativeOnMouseMove @ 146a7f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMouseMove
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseMove);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnMouseWheel @ 146a7f810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnMouseWheel
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseWheel);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnNavigation @ 146a7f960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationReply * __thiscall
UUserWidget::NativeOnNavigation
          (UUserWidget *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  __return_storage_ptr__->BoundaryRule = Escape;
  return __return_storage_ptr__;
}

// NativeOnNavigation @ 146a7f990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationReply * __thiscall
UUserWidget::NativeOnNavigation
          (UUserWidget *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2,FNavigationReply *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->EventHandler).Object = (param_3->EventHandler).Object;
  pTVar1 = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->FocusRecipient).Object = (param_3->FocusRecipient).Object;
  pTVar1 = (param_3->FocusRecipient).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->FocusDelegate,&param_3->FocusDelegate);
  __return_storage_ptr__->BoundaryRule = param_3->BoundaryRule;
  return __return_storage_ptr__;
}

// NativeOnPreviewKeyDown @ 146a7fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnPreviewKeyDown
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  FKeyEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_3a8 [48];
  FGeometry local_378;
  FReply local_338;
  FReply local_280;
  FKeyEvent local_1c8;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  this_00 = FKeyEvent::FKeyEvent(&local_1c8,param_2);
  local_378.Size = param_1->Size;
  local_378._8_8_ = *(undefined8 *)&param_1->Scale;
  local_378._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_378._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_378.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_378.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_378._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_338,false);
  FReply::FReply(&local_f8,&local_338);
  FReply::~FReply(&local_338);
  FGeometry::operator=(&local_178,&local_378);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)this_00->_padding_;
  local_140.Key.KeyDetails.Object = (this_00->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&this_00->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140._padding_ = this_00->_padding_;
  local_140.Key.KeyName = (this_00->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (this_00->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = this_00->CharacterCode;
  local_140.KeyCode = this_00->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPreviewKeyDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&local_280,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(this_00);
  FReply::FReply(__return_storage_ptr__,&local_280);
  FReply::~FReply(&local_280);
  return __return_storage_ptr__;
}

// NativeOnPreviewMouseButtonDown @ 146a7fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnPreviewMouseButtonDown
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPreviewMouseButtonDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnRemovedFromFocusPath @ 146a7fd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativeOnRemovedFromFocusPath(UUserWidget *this,FFocusEvent *param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = *param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnRemovedFromFocusPath);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NativeOnTouchEnded @ 146a7fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchEnded
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchEnded);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnTouchFirstMove @ 146a7fee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchFirstMove
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchFirstMove);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnTouchForceChanged @ 146a80030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchForceChanged
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchForceChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnTouchGesture @ 146a80180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchGesture
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchGesture);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnTouchMoved @ 146a802d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchMoved
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchMoved);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativeOnTouchStarted @ 146a80420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UUserWidget::NativeOnTouchStarted
          (UUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_378 [48];
  FGeometry local_348;
  FReply local_308;
  FReply local_250;
  FGeometry local_198;
  FPointerEvent local_160;
  FReply local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_348.Size = param_1->Size;
  local_348._8_8_ = *(undefined8 *)&param_1->Scale;
  local_348._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  local_348._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  local_348.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  local_348.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  local_348._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&local_198);
  FPointerEvent::FPointerEvent(&local_160);
  FReply::FReply(&local_308,false);
  FReply::FReply(&local_e0,&local_308);
  FReply::~FReply(&local_308);
  FGeometry::operator=(&local_198,&local_348);
  FPointerEvent::operator=(&local_160,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchStarted);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_198);
  FReply::FReply(&local_250,&local_e0);
  FReply::~FReply(&local_e0);
  FPointerEvent::~FPointerEvent(&local_160);
  FReply::FReply(__return_storage_ptr__,&local_250);
  FReply::~FReply(&local_250);
  return __return_storage_ptr__;
}

// NativePaint @ 146a80570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall
UUserWidget::NativePaint
          (UUserWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  UFunction *pUVar1;
  FPaintContext local_38;
  
  if (this->bHasScriptImplementedPaint != '\0') {
    FPaintContext::FPaintContext(&local_38);
    local_38.OutDrawElements = param_4;
    local_38.WidgetStyle = param_6;
    local_38.bParentEnabled = param_7;
    local_38.LayerId = param_5;
    local_38.MaxLayer = param_5;
    local_38.AllottedGeometry = param_2;
    local_38.MyCullingRect = param_3;
    pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPaint);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
    if (local_38.MaxLayer < param_5) {
      local_38.MaxLayer = param_5;
    }
    return local_38.MaxLayer;
  }
  return param_5;
}

// NativePreConstruct @ 146a80640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::NativePreConstruct(UUserWidget *this)

{
  ForElementType<UUserWidgetExtension_*> FVar1;
  int iVar2;
  UWidgetBlueprintGeneratedClass *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UFunction *pUVar8;
  ForElementType<UUserWidgetExtension_*> FVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178;
  undefined1 local_177 [3];
  FLLMScope local_174;
  FName local_170;
  FMemScope local_168 [2];
  UUserWidget *local_158;
  undefined1 uStack_150;
  uint7 uStack_14f;
  <lambda_1> local_148;
  ForElementType<UUserWidgetExtension_*> local_138;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FLLMScope::FLLMScope(&local_174,LLMTagDeclaration_UI_UMG.UniqueName,false,None,Default,true);
  local_170 = LLMTagDeclaration_UI_UMG.UniqueName;
  FMemScope::FMemScope(local_168,&local_170,true);
  this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar7 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      uStack_150 = 0;
      local_148._8_8_ = (ulonglong)uStack_14f << 8;
      local_158 = this;
      local_148.__this = this;
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativePreConstruct_::__l5::<lambda_1>_>
                (this_00,&local_148,true);
    }
  }
  this->bAreExtensionsPreConstructed = '\x01';
  local_30[1] = 0x20;
  local_138.SecondaryData = (ForElementType<UUserWidgetExtension_*>)0x0;
  local_30[0] = 0;
  if ((&local_138 == (ForElementType<UUserWidgetExtension_*> *)&this->Extensions) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Extensions).ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                      (8,8,iVar2,&local_138,local_30,local_30 + 1);
    FVar9 = (ForElementType<UUserWidgetExtension_*>)&local_138;
    if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FVar9 = local_138.SecondaryData;
    }
    ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
              ((longlong *)((longlong)FVar9 + (longlong)iVar6 * 8),
               (TObjectPtr<UUserWidgetExtension> *)(this->Extensions).AllocatorInstance.Data,iVar2);
  }
  iVar2 = local_30[0];
  FVar9 = (ForElementType<UUserWidgetExtension_*>)&local_138;
  if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
    FVar9 = local_138.SecondaryData;
  }
  FVar1 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar9 + (longlong)local_30[0] * 8);
  while( true ) {
    if (local_30[0] != iVar2) {
      local_178 = 0;
      `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_178);
    }
    if (FVar9 == FVar1) break;
    plVar3 = *(longlong **)FVar9;
    if ((plVar3 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Extension",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                           ,0x765,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*plVar3 + 0x2c0))(plVar3,0);
    FVar9 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar9 + 8);
  }
  FWidgetChild::Resolve(&this->DesiredFocusWidget,(this->WidgetTree).field0_0x0.DebugPtr);
  local_177[0] = 0;
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_PreConstruct);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,local_177);
  if (local_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
    FMemory::Free((void *)local_138.SecondaryData);
  }
  FMemScope::~FMemScope(local_168);
  FLLMScope::~FLLMScope(&local_174);
  return;
}

// NativeSupportsCustomNavigation @ 146a808c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::NativeSupportsCustomNavigation(UUserWidget *this)

{
  return false;
}

// NativeSupportsKeyboardFocus @ 146a808d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::NativeSupportsKeyboardFocus(UUserWidget *this)

{
  return this->bIsFocusable;
}

// NativeTick @ 146a808e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UUserWidget::NativeTick(UUserWidget *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  longlong *plVar2;
  UUMGSequenceTickManager *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_01;
  FLatentActionManager *this_02;
  UFunction *pUVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  FGeometry local_b8;
  FGeometry local_78;
  float local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->TickFrequency == Never) {
    local_c8[0] = 0;
    bVar4 = `UUserWidget::NativeTick'::__l3::<lambda_1>::operator()(local_c8);
    if (!bVar4) {
      return;
    }
  }
  GInitRunaway();
  uVar8 = 0;
  if (0 < (this->Extensions).ArrayNum) {
    lVar7 = 0;
    do {
      iVar1 = (this->Extensions).ArrayNum;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_d8 = (longlong)(int)uVar8;
        local_d0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)((this->Extensions).AllocatorInstance.Data + lVar7);
      (**(code **)(*plVar2 + 0x2e0))(plVar2,param_1,param_2);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (this->Extensions).ArrayNum);
  }
  this_00 = (this->AnimationTickManager).field0_0x0.DebugPtr;
  if (this_00 != (UUMGSequenceTickManager *)0x0) {
    UUMGSequenceTickManager::OnWidgetTicked(this_00,this);
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_01 != (UWorld *)0x0) {
    this_02 = UWorld::GetLatentActionManager(this_01);
    FLatentActionManager::ProcessLatentActions(this_02,(UObject *)this,param_2);
  }
  if (this->bHasScriptImplementedTick != 0) {
    local_b8.Size = param_1->Size;
    local_b8._8_8_ = *(undefined8 *)&param_1->Scale;
    local_b8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_b8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_b8.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_b8.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_b8._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    FGeometry::FGeometry(&local_78);
    FGeometry::operator=(&local_78,&local_b8);
    local_40 = param_2;
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Tick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_78);
  }
  return;
}

// OnAddedToFocusPath @ 146a81500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnAddedToFocusPath(UUserWidget *this,FFocusEvent param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAddedToFocusPath);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnAnalogValueChanged @ 146a81600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnAnalogValueChanged
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  longlong lVar1;
  UFunction *pUVar2;
  undefined1 auStack_258 [40];
  FReply local_230;
  FGeometry local_178;
  FAnalogInputEvent local_140;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  FGeometry::FGeometry(&local_178);
  FAnalogInputEvent::FAnalogInputEvent(&local_140);
  FReply::FReply(&local_230,false);
  FReply::FReply(&local_f0,&local_230);
  FReply::~FReply(&local_230);
  FGeometry::operator=(&local_178,param_1);
  lVar1 = local_140._padding_;
  local_140._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  if (local_140._padding_ != 0) {
    LOCK();
    *(int *)(local_140._padding_ + 8) = *(int *)(local_140._padding_ + 8) + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)lVar1);
  local_140._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_140.AnalogValue = param_2->AnalogValue;
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnalogValueChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FAnalogInputEvent::~FAnalogInputEvent(&local_140);
  FAnalogInputEvent::~FAnalogInputEvent(param_2);
  return __return_storage_ptr__;
}

// OnAnimationFinished @ 146a81760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnAnimationFinished(UUserWidget *this,UWidgetAnimation *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UWidgetAnimation *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnimationFinished);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a817d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x338))(this,param_1);
  return;
}

// OnAnimationFinishedPlaying @ 146a817e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnAnimationFinishedPlaying(UUserWidget *this,UUMGSequencePlayer *param_1)

{
  return;
}

// OnAnimationFinished_Implementation @ 146a817f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnAnimationFinished_Implementation(UUserWidget *this,UWidgetAnimation *param_1)

{
  return;
}

// OnAnimationStarted @ 146a81800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnAnimationStarted(UUserWidget *this,UWidgetAnimation *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UWidgetAnimation *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnAnimationStarted);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a81871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,param_1);
  return;
}

// OnAnimationStartedPlaying @ 146a81880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnAnimationStartedPlaying(UUserWidget *this,UUMGSequencePlayer *param_1)

{
  return;
}

// OnAnimationStarted_Implementation @ 146a81890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnAnimationStarted_Implementation(UUserWidget *this,UWidgetAnimation *param_1)

{
  return;
}

// OnDragCancelled @ 146a82390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnDragCancelled(UUserWidget *this,FPointerEvent *param_1,UDragDropOperation *param_2)

{
  UFunction *pUVar1;
  FPointerEvent local_98;
  UDragDropOperation *local_18;
  
  FPointerEvent::FPointerEvent(&local_98);
  FPointerEvent::operator=(&local_98,param_1);
  local_18 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragCancelled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_98);
  FPointerEvent::~FPointerEvent(&local_98);
  return;
}

// OnDragDetected @ 146a82680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnDragDetected
          (UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2,UDragDropOperation **param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_118 [32];
  FGeometry local_f8;
  FPointerEvent local_c0;
  UDragDropOperation *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FGeometry::FGeometry(&local_f8);
  FPointerEvent::FPointerEvent(&local_c0);
  FGeometry::operator=(&local_f8,param_1);
  FPointerEvent::operator=(&local_c0,param_2);
  local_40 = *param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_f8);
  *param_3 = local_40;
  FPointerEvent::~FPointerEvent(&local_c0);
  return;
}

// OnDragEnter @ 146a82810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnDragEnter
          (UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2,UDragDropOperation *param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_118 [32];
  FGeometry local_f8;
  FPointerEvent local_c0;
  UDragDropOperation *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FGeometry::FGeometry(&local_f8);
  FPointerEvent::FPointerEvent(&local_c0);
  FGeometry::operator=(&local_f8,param_1);
  FPointerEvent::operator=(&local_c0,param_2);
  local_40 = param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragEnter);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_f8);
  FPointerEvent::~FPointerEvent(&local_c0);
  FPointerEvent::~FPointerEvent(param_2);
  return;
}

// OnDragLeave @ 146a82980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnDragLeave(UUserWidget *this,FPointerEvent *param_1,UDragDropOperation *param_2)

{
  UFunction *pUVar1;
  FPointerEvent local_98;
  UDragDropOperation *local_18;
  
  FPointerEvent::FPointerEvent(&local_98);
  FPointerEvent::operator=(&local_98,param_1);
  local_18 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragLeave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_98);
  FPointerEvent::~FPointerEvent(&local_98);
  FPointerEvent::~FPointerEvent(param_1);
  return;
}

// OnDragOver @ 146a82af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUserWidget::OnDragOver
          (UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2,UDragDropOperation *param_3)

{
  char cVar1;
  UFunction *pUVar2;
  undefined1 auStack_128 [32];
  FGeometry local_108;
  FPointerEvent local_d0;
  UDragDropOperation *local_50;
  char local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  FGeometry::FGeometry(&local_108);
  FPointerEvent::FPointerEvent(&local_d0);
  local_48 = '\0';
  FGeometry::operator=(&local_108,param_1);
  FPointerEvent::operator=(&local_d0,param_2);
  local_50 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_108);
  cVar1 = local_48;
  FPointerEvent::~FPointerEvent(&local_d0);
  FPointerEvent::~FPointerEvent(param_2);
  return cVar1 != '\0';
}

// OnDrop @ 146a83150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUserWidget::OnDrop(UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2,
                   UDragDropOperation *param_3)

{
  char cVar1;
  UFunction *pUVar2;
  undefined1 auStack_128 [32];
  FGeometry local_108;
  FPointerEvent local_d0;
  UDragDropOperation *local_50;
  char local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  FGeometry::FGeometry(&local_108);
  FPointerEvent::FPointerEvent(&local_d0);
  local_48 = '\0';
  FGeometry::operator=(&local_108,param_1);
  FPointerEvent::operator=(&local_d0,param_2);
  local_50 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDrop);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_108);
  cVar1 = local_48;
  FPointerEvent::~FPointerEvent(&local_d0);
  FPointerEvent::~FPointerEvent(param_2);
  return cVar1 != '\0';
}

// OnFocusLost @ 146a83320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnFocusLost(UUserWidget *this,FFocusEvent param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnFocusLost);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnFocusReceived @ 146a833e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnFocusReceived
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_208 [40];
  FReply local_1e0;
  FGeometry local_128;
  FFocusEvent local_f0;
  FReply local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  FGeometry::FGeometry(&local_128);
  local_f0.bLostFocusByChild = false;
  local_f0.Cause = SetDirectly;
  local_f0 = (FFocusEvent)((ulonglong)local_f0 & 0xffffffff);
  FReply::FReply(&local_1e0,false);
  FReply::FReply(&local_e8,&local_1e0);
  FReply::~FReply(&local_1e0);
  FGeometry::operator=(&local_128,param_1);
  local_f0 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnFocusReceived);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_128);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_e8);
  FReply::~FReply(&local_e8);
  return __return_storage_ptr__;
}

// OnInitialized @ 146a836e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnInitialized(UUserWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnInitialized);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a8370d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnInputAction @ 146a83720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnInputAction(UUserWidget *this,FOnInputAction *param_1)

{
  bool bVar1;
  
  bVar1 = UWidget::GetIsEnabled((UWidget *)this);
  if (bVar1) {
    bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
    if (bVar1) {
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1,(void *)0x0);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// OnKeyChar @ 146a837e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnKeyChar
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_238 [40];
  FReply local_210;
  FGeometry local_158;
  FCharacterEvent local_120;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  FGeometry::FGeometry(&local_158);
  FCharacterEvent::FCharacterEvent(&local_120);
  FReply::FReply(&local_210,false);
  FReply::FReply(&local_f0,&local_210);
  FReply::~FReply(&local_210);
  FGeometry::operator=(&local_158,param_1);
  local_120._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_120._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_120._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_120._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_120._padding_ = param_2->_padding_;
  local_120._padding_ = param_2->_padding_;
  local_120.Character = param_2->Character;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyChar);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_158);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FCharacterEvent::~FCharacterEvent(&local_120);
  FCharacterEvent::~FCharacterEvent(param_2);
  return __return_storage_ptr__;
}

// OnKeyDown @ 146a839f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnKeyDown
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  UFunction *pUVar2;
  undefined1 auStack_258 [40];
  FReply local_230;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_230,false);
  FReply::FReply(&local_f8,&local_230);
  FReply::~FReply(&local_230);
  FGeometry::operator=(&local_178,param_1);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_140.Key.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140.Key.KeyName = (param_2->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = param_2->CharacterCode;
  local_140.KeyCode = param_2->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(param_2);
  return __return_storage_ptr__;
}

// OnKeyUp @ 146a83c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnKeyUp
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  UFunction *pUVar2;
  undefined1 auStack_258 [40];
  FReply local_230;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_230,false);
  FReply::FReply(&local_f8,&local_230);
  FReply::~FReply(&local_230);
  FGeometry::operator=(&local_178,param_1);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_140.Key.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140.Key.KeyName = (param_2->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = param_2->CharacterCode;
  local_140.KeyCode = param_2->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnKeyUp);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(param_2);
  return __return_storage_ptr__;
}

// OnLatentActionsChanged @ 146a83df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::OnLatentActionsChanged(UObject *param_1,ELatentActionChangeType param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  UClass *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar6 = GetPrivateStaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      pTVar7 = *(TReferenceControllerBase<1> **)&param_1[8].field_0x8;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar7->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146a83e52;
          }
          LOCK();
          aVar5 = pTVar7->SharedReferenceCount;
          bVar8 = aVar4 == aVar5;
          if (bVar8) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar5 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar5;
        } while (!bVar8);
        lVar3 = *(longlong *)(param_1 + 8);
        if (lVar3 != 0) {
          bVar1 = *(byte *)(lVar3 + 0x38);
          UpdateCanTick((UUserWidget *)param_1);
          if (((*(byte *)(lVar3 + 0x38) & 4) != 0) && ((bVar1 & 4) == 0)) {
            Invalidate((UUserWidget *)param_1,LayoutAndVolatility);
          }
        }
      }
LAB_146a83e52:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// OnMotionDetected @ 146a83f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMotionDetected
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FMotionEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_298 [32];
  LARGE_INTEGER local_278;
  FReply local_270;
  FGeometry local_1b8;
  FInputEvent local_180;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  FGeometry::FGeometry(&local_1b8);
  local_180.bIsRepeat = false;
  local_180._padding_ = (longlong)&___7FInputEvent__6B_;
  local_180.UserIndex = 0;
  local_180.ModifierKeys.bAreCapsLocked = 0;
  local_180.ModifierKeys.bIsRightCommandDown = 0;
  local_180.ModifierKeys.bIsLeftCommandDown = 0;
  local_180.ModifierKeys.bIsRightAltDown = 0;
  local_180.ModifierKeys.bIsLeftAltDown = 0;
  local_180.ModifierKeys.bIsRightControlDown = 0;
  local_180.ModifierKeys.bIsLeftControlDown = 0;
  local_180.ModifierKeys.bIsRightShiftDown = 0;
  local_180.ModifierKeys.bIsLeftShiftDown = 0;
  local_180.InputDeviceId.InternalId = -1;
  local_180.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_278);
  local_180.EventTimestamp = (ulong64)local_278;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_180._padding_ = (longlong)&___7FMotionEvent__6B_;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  FReply::FReply(&local_270,false);
  FReply::FReply(&local_f8,&local_270);
  FReply::~FReply(&local_270);
  FGeometry::operator=(&local_1b8,param_1);
  local_180.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_158 = (param_2->Tilt).field0_0x0._s_0.X;
  dStack_150 = (param_2->Tilt).field0_0x0._s_0.Y;
  local_148 = (param_2->Tilt).field0_0x0._s_0.Z;
  local_180.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_180.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  dStack_140 = (param_2->RotationRate).field0_0x0._s_0.X;
  local_138 = (param_2->RotationRate).field0_0x0._s_0.Y;
  local_180.InputDeviceId.InternalId = (int)param_2->_padding_;
  dStack_130 = (param_2->RotationRate).field0_0x0._s_0.Z;
  local_128 = (param_2->Gravity).field0_0x0._s_0.X;
  dStack_120 = (param_2->Gravity).field0_0x0._s_0.Y;
  local_180.EventPath = (FWidgetPath *)param_2->_padding_;
  local_118 = (param_2->Gravity).field0_0x0._s_0.Z;
  dStack_110 = (param_2->Acceleration).field0_0x0._s_0.X;
  local_108 = (param_2->Acceleration).field0_0x0._s_0.Y;
  local_180.EventTimestamp = param_2->_padding_;
  dStack_100 = (param_2->Acceleration).field0_0x0._s_0.Z;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMotionDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1b8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f8);
  FReply::~FReply(&local_f8);
  FInputEvent::~FInputEvent(&local_180);
  FInputEvent::~FInputEvent((FInputEvent *)param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 146a841f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMouseButtonDoubleClick
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonDoubleClick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 146a84380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMouseButtonDown
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 146a84510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMouseButtonUp
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseButtonUp);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 146a84670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnMouseCaptureLost(UUserWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseCaptureLost);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000146a8469d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnMouseEnter @ 146a84710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::OnMouseEnter(UUserWidget *this,FGeometry *param_1,FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_108 [32];
  FGeometry local_e8;
  FPointerEvent local_b0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FGeometry::FGeometry(&local_e8);
  FPointerEvent::FPointerEvent(&local_b0);
  FGeometry::operator=(&local_e8,param_1);
  FPointerEvent::operator=(&local_b0,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseEnter);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_e8);
  FPointerEvent::~FPointerEvent(&local_b0);
  return;
}

// OnMouseLeave @ 146a84810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnMouseLeave(UUserWidget *this,FPointerEvent *param_1)

{
  UFunction *pUVar1;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  FPointerEvent::operator=(&local_88,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseLeave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// OnMouseMove @ 146a84910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMouseMove
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseMove);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 146a84aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnMouseWheel
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnMouseWheel);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnPaint @ 146a85ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnPaint(UUserWidget *this,FPaintContext *param_1)

{
  UFunction *pUVar1;
  FPaintContext local_38;
  
  FPaintContext::FPaintContext(&local_38);
  local_38.AllottedGeometry = param_1->AllottedGeometry;
  local_38.MyCullingRect = param_1->MyCullingRect;
  local_38.OutDrawElements = param_1->OutDrawElements;
  local_38.LayerId = param_1->LayerId;
  local_38.WidgetStyle = param_1->WidgetStyle;
  local_38.bParentEnabled = param_1->bParentEnabled;
  local_38.MaxLayer = param_1->MaxLayer;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPaint);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
  param_1->AllottedGeometry = local_38.AllottedGeometry;
  param_1->MyCullingRect = local_38.MyCullingRect;
  param_1->OutDrawElements = local_38.OutDrawElements;
  param_1->LayerId = local_38.LayerId;
  param_1->WidgetStyle = local_38.WidgetStyle;
  param_1->bParentEnabled = local_38.bParentEnabled;
  param_1->MaxLayer = local_38.MaxLayer;
  return;
}

// OnPreviewKeyDown @ 146a86050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnPreviewKeyDown
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FSharedReferencer<1> FVar1;
  UFunction *pUVar2;
  undefined1 auStack_258 [40];
  FReply local_230;
  FGeometry local_178;
  FKeyEvent local_140;
  FReply local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  FGeometry::FGeometry(&local_178);
  FKeyEvent::FKeyEvent(&local_140);
  FReply::FReply(&local_230,false);
  FReply::FReply(&local_f8,&local_230);
  FReply::~FReply(&local_230);
  FGeometry::operator=(&local_178,param_1);
  FVar1.ReferenceController = local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_140._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_140.Key.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_140._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_140._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_140._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140._padding_ = param_2->_padding_;
  local_140.Key.KeyName = (param_2->Key).KeyName;
  local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_140.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_140.CharacterCode = param_2->CharacterCode;
  local_140.KeyCode = param_2->KeyCode;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPreviewKeyDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_178);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f8);
  FReply::~FReply(&local_f8);
  FKeyEvent::~FKeyEvent(&local_140);
  FKeyEvent::~FKeyEvent(param_2);
  return __return_storage_ptr__;
}

// OnPreviewMouseButtonDown @ 146a86270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnPreviewMouseButtonDown
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnPreviewMouseButtonDown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnRemovedFromFocusPath @ 146a864c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnRemovedFromFocusPath(UUserWidget *this,FFocusEvent param_1)

{
  UFunction *pUVar1;
  FFocusEvent local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnRemovedFromFocusPath);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnTouchEnded @ 146a86b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchEnded
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchEnded);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnTouchFirstMove @ 146a86d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchFirstMove
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchFirstMove);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnTouchForceChanged @ 146a86eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchForceChanged
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchForceChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnTouchGesture @ 146a87040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchGesture
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchGesture);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnTouchMoved @ 146a871d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchMoved
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchMoved);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 146a87360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __thiscall
UUserWidget::OnTouchStarted
          (UUserWidget *this,FEventReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_288 [40];
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  FPointerEvent::FPointerEvent(&local_170);
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_1);
  FPointerEvent::operator=(&local_170,param_2);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnTouchStarted);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// OnWidgetRebuilt @ 146a87670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::OnWidgetRebuilt(UUserWidget *this)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  UWidget::BuildNavigation((UWidget *)this);
  local_10 = local_res8;
  local_res8[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UUserWidget::OnWidgetRebuilt'::__l2::<lambda_1>,void,UWidget_*>::
             Call;
  UWidgetTree::ForEachWidget
            ((this->WidgetTree).field0_0x0.DebugPtr,
             (TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  (**(code **)(this->_padding_ + 0x358))(this);
                    /* WARNING: Could not recover jumptable at 0x000146a876c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x360))(this);
  return;
}

// PauseAnimation @ 146a884c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall UUserWidget::PauseAnimation(UUserWidget *this,UWidgetAnimation *param_1)

{
  FFrameTime FVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  FQualifiedFrameTime *pFVar5;
  int iVar6;
  float fVar7;
  float fStackX_c;
  TSharedPtr<FWidgetAnimationState,1> local_28;
  FQualifiedFrameTime local_18;
  
  this->LastAnimationTime = 0.0;
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,&local_28,param_1);
    if (local_28.Object != (FWidgetAnimationState *)0x0) {
      if (local_28.Object == (FWidgetAnimationState *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar7 = (float)(*pcVar3)();
          return fVar7;
        }
      }
      FWidgetAnimationState::Pause(local_28.Object);
      if (local_28.Object == (FWidgetAnimationState *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar7 = (float)(*pcVar3)();
          return fVar7;
        }
      }
      pFVar5 = FWidgetAnimationState::GetCurrentTime(local_28.Object,&local_18);
      FVar1 = pFVar5->Time;
      FVar2 = pFVar5->Rate;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      fStackX_c = FVar1.SubFrame;
      iVar6 = FVar2.Denominator;
      return ((float)((longlong)iVar6 * (longlong)FVar1.FrameNumber.Value.Value) +
             (float)iVar6 * fStackX_c) / (float)FVar2.Numerator;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return 0.0;
}

// PlayAnimation @ 146a89780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
UUserWidget::PlayAnimation
          (UUserWidget *this,FWidgetAnimationHandle *__return_storage_ptr__,
          UWidgetAnimation *param_1,float param_2,int param_3,Type param_4,float param_5,
          bool param_6)

{
  code *pcVar1;
  FWidgetAnimationState *this_00;
  bool bVar2;
  FWidgetAnimationHandle *pFVar3;
  bool bVar4;
  TSharedPtr<FWidgetAnimationState,1> local_88;
  TSharedPtr<FWidgetAnimationState,1> local_78;
  FWidgetAnimationStatePlayParams local_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"Widget::PlayAnimation");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId844,"Widget::PlayAnimation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp",
               0x34c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId844);
  }
  this->LastAnimationTime = 0.0;
  GetOrAddAnimationState(this,&local_88,param_1);
  this_00 = local_88.Object;
  if (local_88.Object == (FWidgetAnimationState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__);
  }
  else {
    local_68.NumLoopsToPlay = param_3;
    local_68.PlayMode = param_4;
    local_68.EndAtTime.bIsSet = false;
    local_68.StartOffset.bIsSet = false;
    local_68.EndOffset.bIsSet = false;
    local_68.bRestoreState = param_6;
    local_68.StartAtTime = (double)param_2;
    local_68.PlaybackSpeed = param_5;
    if ((local_88.Object == (FWidgetAnimationState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetAnimationHandle *)(*pcVar1)();
      return pFVar3;
    }
    FWidgetAnimationState::Play(this_00,&local_68);
    if ((this_00 == (FWidgetAnimationState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetAnimationHandle *)(*pcVar1)();
      return pFVar3;
    }
    BroadcastAnimationStartedPlaying(this,this_00);
    UpdateCanTick(this);
    local_78.Object = local_88.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// PlayAnimationForward @ 146a89980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
UUserWidget::PlayAnimationForward
          (UUserWidget *this,FWidgetAnimationHandle *__return_storage_ptr__,
          UWidgetAnimation *param_1,float param_2,bool param_3)

{
  code *pcVar1;
  FWidgetAnimationState *this_00;
  bool bVar2;
  Type TVar3;
  FWidgetAnimationHandle *pFVar4;
  TSharedPtr<FWidgetAnimationState,1> local_38;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  GetAnimationState(this,&local_38,param_1);
  this_00 = local_38.Object;
  this->LastAnimationTime = 0.0;
  if (local_38.Object != (FWidgetAnimationState *)0x0) {
    if (local_38.Object == (FWidgetAnimationState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    TVar3 = FWidgetAnimationState::GetPlaybackStatus(this_00);
    if (TVar3 == Playing) {
      if (this_00 == (FWidgetAnimationState *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
          return pFVar4;
        }
      }
      bVar2 = FWidgetAnimationState::IsPlayingForward(this_00);
      if (!bVar2) {
        if (this_00 == (FWidgetAnimationState *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
            return pFVar4;
          }
        }
        FWidgetAnimationState::Reverse(this_00);
      }
      local_28[0].Object = local_38.Object;
      local_28[0].SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__,local_28);
      goto LAB_146a89aea;
    }
  }
  PlayAnimation(this,__return_storage_ptr__,param_1,0.0,1,Forward,param_2,param_3);
LAB_146a89aea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PlayAnimationReverse @ 146a89b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
UUserWidget::PlayAnimationReverse
          (UUserWidget *this,FWidgetAnimationHandle *__return_storage_ptr__,
          UWidgetAnimation *param_1,float param_2,bool param_3)

{
  code *pcVar1;
  FWidgetAnimationState *this_00;
  bool bVar2;
  Type TVar3;
  FWidgetAnimationHandle *pFVar4;
  TSharedPtr<FWidgetAnimationState,1> local_38;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  GetAnimationState(this,&local_38,param_1);
  this_00 = local_38.Object;
  this->LastAnimationTime = 0.0;
  if (local_38.Object != (FWidgetAnimationState *)0x0) {
    if (local_38.Object == (FWidgetAnimationState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    TVar3 = FWidgetAnimationState::GetPlaybackStatus(this_00);
    if (TVar3 == Playing) {
      if (this_00 == (FWidgetAnimationState *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
          return pFVar4;
        }
      }
      bVar2 = FWidgetAnimationState::IsPlayingForward(this_00);
      if (bVar2) {
        if (this_00 == (FWidgetAnimationState *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FWidgetAnimationHandle *)(*pcVar1)();
            return pFVar4;
          }
        }
        FWidgetAnimationState::Reverse(this_00);
      }
      local_28[0].Object = local_38.Object;
      local_28[0].SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__,local_28);
      goto LAB_146a89c8a;
    }
  }
  PlayAnimation(this,__return_storage_ptr__,param_1,0.0,1,Reverse,param_2,param_3);
LAB_146a89c8a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PlayAnimationTimeRange @ 146a89cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
UUserWidget::PlayAnimationTimeRange
          (UUserWidget *this,FWidgetAnimationHandle *__return_storage_ptr__,
          UWidgetAnimation *param_1,float param_2,float param_3,int param_4,Type param_5,
          float param_6,bool param_7)

{
  code *pcVar1;
  FWidgetAnimationState *this_00;
  bool bVar2;
  FWidgetAnimationHandle *pFVar3;
  bool bVar4;
  TSharedPtr<FWidgetAnimationState,1> local_88;
  TSharedPtr<FWidgetAnimationState,1> local_78;
  FWidgetAnimationStatePlayParams local_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"Widget::PlayAnimationTimeRange");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId873,"Widget::PlayAnimationTimeRange",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp",
               0x369);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId873);
  }
  this->LastAnimationTime = 0.0;
  GetOrAddAnimationState(this,&local_88,param_1);
  this_00 = local_88.Object;
  if (local_88.Object == (FWidgetAnimationState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__);
  }
  else {
    local_68.NumLoopsToPlay = param_4;
    local_68.PlayMode = param_5;
    local_68.StartOffset.bIsSet = false;
    local_68.EndOffset.bIsSet = false;
    local_68.EndAtTime.bIsSet = true;
    local_68.bRestoreState = param_7;
    local_68.StartAtTime = (double)param_2;
    local_68.EndAtTime.TypedValue = (double)param_3;
    local_68.PlaybackSpeed = param_6;
    if ((local_88.Object == (FWidgetAnimationState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetAnimationHandle *)(*pcVar1)();
      return pFVar3;
    }
    FWidgetAnimationState::Play(this_00,&local_68);
    if ((this_00 == (FWidgetAnimationState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWidgetAnimationHandle *)(*pcVar1)();
      return pFVar3;
    }
    BroadcastAnimationStartedPlaying(this,this_00);
    UpdateCanTick(this);
    local_78.Object = local_88.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationHandle::FWidgetAnimationHandle(__return_storage_ptr__,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// PlaySound @ 146a89ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::PlaySound(UUserWidget *this,USoundBase *param_1)

{
  FSlateApplication *this_00;
  TObjectPtr<UObject>_u_0 local_28 [4];
  
  if (param_1 != (USoundBase *)0x0) {
    FSlateSound::FSlateSound((FSlateSound *)&local_28[0].ObjectPtr);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28[0] = (TObjectPtr<UObject>_u_0)param_1;
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,(FSlateSound *)&local_28[0].ObjectPtr,0);
  }
  return;
}

// PostDuplicate @ 146a8a050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::PostDuplicate(UUserWidget *this,bool param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xef0) != 0) {
    pUVar1 = StaticClass();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
    if (pUVar2 != (UObject *)0x0) {
      SetPlayerContext(this,(FLocalPlayerContext *)&pUVar2[0x16].field_0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x000146a8a0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x310))(this);
    return;
  }
  return;
}

// PostLoad @ 146a8a0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::PostLoad(UUserWidget *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  uint uVar6;
  TArray<TObjectPtr<UUserWidgetExtension>,TSizedDefaultAllocator<32>_> *pTVar7;
  
  UObject::PostLoad((UObject *)this);
  pTVar7 = &this->Extensions;
  for (uVar6 = 0; (-1 < (int)uVar6 && ((int)uVar6 < (this->Extensions).ArrayNum)); uVar6 = uVar6 + 1
      ) {
    if ((int)uVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) == 0) {
      uVar4 = 0;
      if ((int)uVar6 < (this->Extensions).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      _Dst = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
      iVar5 = (this->Extensions).ArrayNum + ~uVar6;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
      }
      piVar1 = &(this->Extensions).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar7->AllocatorInstance,(this->Extensions).ArrayNum,
                 &(this->Extensions).ArrayMax);
      uVar6 = uVar6 - 1;
    }
  }
  return;
}

// PreConstruct @ 146a8a690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::PreConstruct(UUserWidget *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_PreConstruct);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// PreSave @ 146a8a700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::PreSave(UUserWidget *this,FObjectPreSaveContext param_1)

{
  int *piVar1;
  UWidgetTree *this_00;
  longlong lVar2;
  int iVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *local_res8;
  
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (this_00 != (UWidgetTree *)0x0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar6 = (int)pUVar4->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar4->_padding_)) {
      RemoveObsoleteBindings(this,(TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x3b0));
    }
  }
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->Extensions).ArrayNum)); iVar6 = iVar6 + 1) {
    pFVar5 = (this->Extensions).AllocatorInstance.Data;
    if (*(longlong *)(pFVar5 + (longlong)iVar6 * 8) == 0) {
      pFVar5 = pFVar5 + (longlong)iVar6 * 8;
      iVar3 = ((this->Extensions).ArrayNum - iVar6) + -1;
      if (iVar3 != 0) {
        memmove(pFVar5,pFVar5 + 8,(longlong)iVar3 << 3);
      }
      piVar1 = &(this->Extensions).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->Extensions).AllocatorInstance,(this->Extensions).ArrayNum,
                 &(this->Extensions).ArrayMax);
      iVar6 = iVar6 + -1;
    }
  }
  local_res8 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8 + 0x9c) = *(int *)(local_res8 + 0x9c) + 1;
  UWidget::PreSave((UWidget *)this,(FObjectSaveContextData *)&local_res8);
  return;
}

// QueuePauseAnimation @ 146a8b640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall UUserWidget::QueuePauseAnimation(UUserWidget *this,UWidgetAnimation *param_1)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  FFrameTime FVar2;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FQualifiedFrameTime *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fStackX_1c;
  TSharedPtr<FWidgetAnimationState,1> local_28;
  FQualifiedFrameTime local_18;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar6 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    pFVar8 = pFVar9 + (longlong)iVar6 * 0x38;
    for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 0x38) {
      if ((*(UWidgetAnimation **)pFVar9 != (UWidgetAnimation *)0x0) &&
         (*(UWidgetAnimation **)pFVar9 == param_1)) goto LAB_146a8b6cf;
    }
    if (iVar6 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar6 + 1;
    pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(pFVar9,1);
LAB_146a8b6cf:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UWidgetAnimation **)pFVar9 = param_1;
    pFVar9[8] = (FScriptContainerElement)0x5;
    UpdateCanTick(this);
    GetAnimationState(this,&local_28,param_1);
    if (local_28.Object != (FWidgetAnimationState *)0x0) {
      if ((local_28.Object == (FWidgetAnimationState *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar10 = (float)(*pcVar4)();
        return fVar10;
      }
      pFVar7 = FWidgetAnimationState::GetCurrentTime(local_28.Object,&local_18);
      FVar2 = pFVar7->Time;
      FVar3 = pFVar7->Rate;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      fStackX_1c = FVar2.SubFrame;
      iVar6 = FVar3.Denominator;
      return ((float)((longlong)iVar6 * (longlong)FVar2.FrameNumber.Value.Value) +
             (float)iVar6 * fStackX_1c) / (float)FVar3.Numerator;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return 0.0;
}

// QueuePlayAnimation @ 146a8b7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::QueuePlayAnimation
          (UUserWidget *this,UWidgetAnimation *param_1,float param_2,int param_3,Type param_4,
          float param_5,bool param_6)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  UWidgetAnimation *pUVar2;
  int iVar3;
  UUMGSequenceTickManager *this_00;
  FQueuedWidgetAnimationTransition *pFVar4;
  FQueuedWidgetAnimationTransition *this_01;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TObjectPtr<UWidgetAnimation>_u_0 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 local_33;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar3 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    this_01 = (FQueuedWidgetAnimationTransition *)(pTVar1->AllocatorInstance).Data;
    pFVar4 = this_01 + iVar3;
    for (; this_01 != pFVar4; this_01 = this_01 + 1) {
      pUVar2 = (this_01->WidgetAnimation).field0_0x0.DebugPtr;
      if ((pUVar2 != (UWidgetAnimation *)0x0) && (pUVar2 == param_1)) goto LAB_146a8b878;
    }
    if (iVar3 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar3 + 1;
    this_01 = (FQueuedWidgetAnimationTransition *)
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 0x38);
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(this_01,1);
LAB_146a8b878:
    local_68.DebugPtr = (UWidgetAnimation *)0x0;
    local_60 = 6;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_33 = 0;
    FQueuedWidgetAnimationTransition::operator=
              (this_01,(FQueuedWidgetAnimationTransition *)&local_68.ObjectPtr);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this_01->WidgetAnimation).field0_0x0.DebugPtr = param_1;
    this_01->TransitionMode = Play;
    if ((TOptional<float> *)local_res18 != &this_01->StartAtTime) {
      (this_01->StartAtTime).TypedValue = param_2;
      (this_01->StartAtTime).bIsSet = true;
    }
    if ((TOptional<int> *)local_res20 != &this_01->NumLoopsToPlay) {
      (this_01->NumLoopsToPlay).TypedValue = param_3;
      (this_01->NumLoopsToPlay).bIsSet = true;
    }
    if ((TOptional<EUMGSequencePlayMode::Type> *)&param_4 != &this_01->PlayMode) {
      (this_01->PlayMode).TypedValue = param_4;
      (this_01->PlayMode).bIsSet = true;
    }
    if ((TOptional<float> *)&param_5 != &this_01->PlaybackSpeed) {
      (this_01->PlaybackSpeed).TypedValue = param_5;
      (this_01->PlaybackSpeed).bIsSet = true;
    }
    if ((TOptional<bool> *)&param_6 != &this_01->bRestoreState) {
      (this_01->bRestoreState).TypedValue = param_6;
      (this_01->bRestoreState).bIsSet = true;
    }
    if ((this->AnimationTickManager).field0_0x0.DebugPtr == (UUMGSequenceTickManager *)0x0) {
      this_00 = UUMGSequenceTickManager::Get((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->AnimationTickManager).field0_0x0.DebugPtr = this_00;
      UUMGSequenceTickManager::AddWidget(this_00,this);
    }
    UpdateCanTick(this);
  }
  return;
}

// QueuePlayAnimationForward @ 146a8b9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::QueuePlayAnimationForward
          (UUserWidget *this,UWidgetAnimation *param_1,float param_2,bool param_3)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UUMGSequenceTickManager *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_res18 [8];
  FScriptContainerElement local_res20 [8];
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar2 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar2 * 0x38;
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0x38) {
      if ((*(UWidgetAnimation **)pFVar4 != (UWidgetAnimation *)0x0) &&
         (*(UWidgetAnimation **)pFVar4 == param_1)) goto LAB_146a8ba59;
    }
    if (iVar2 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar2 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(pFVar4,1);
LAB_146a8ba59:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UWidgetAnimation **)pFVar4 = param_1;
    pFVar4[8] = (FScriptContainerElement)0x2;
    if (local_res18 != pFVar4 + 0x2c) {
      *(float *)(pFVar4 + 0x2c) = param_2;
      pFVar4[0x30] = (FScriptContainerElement)0x1;
    }
    if (local_res20 != pFVar4 + 0x34) {
      pFVar4[0x34] = (FScriptContainerElement)param_3;
      pFVar4[0x35] = (FScriptContainerElement)0x1;
    }
    if ((this->AnimationTickManager).field0_0x0.DebugPtr == (UUMGSequenceTickManager *)0x0) {
      this_00 = UUMGSequenceTickManager::Get((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->AnimationTickManager).field0_0x0.DebugPtr = this_00;
      UUMGSequenceTickManager::AddWidget(this_00,this);
    }
    UpdateCanTick(this);
  }
  return;
}

// QueuePlayAnimationReverse @ 146a8bb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::QueuePlayAnimationReverse
          (UUserWidget *this,UWidgetAnimation *param_1,float param_2,bool param_3)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UUMGSequenceTickManager *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_res18 [8];
  FScriptContainerElement local_res20 [8];
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar2 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar2 * 0x38;
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0x38) {
      if ((*(UWidgetAnimation **)pFVar4 != (UWidgetAnimation *)0x0) &&
         (*(UWidgetAnimation **)pFVar4 == param_1)) goto LAB_146a8bb99;
    }
    if (iVar2 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar2 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(pFVar4,1);
LAB_146a8bb99:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UWidgetAnimation **)pFVar4 = param_1;
    pFVar4[8] = (FScriptContainerElement)0x3;
    if (local_res18 != pFVar4 + 0x2c) {
      *(float *)(pFVar4 + 0x2c) = param_2;
      pFVar4[0x30] = (FScriptContainerElement)0x1;
    }
    if (local_res20 != pFVar4 + 0x34) {
      pFVar4[0x34] = (FScriptContainerElement)param_3;
      pFVar4[0x35] = (FScriptContainerElement)0x1;
    }
    if ((this->AnimationTickManager).field0_0x0.DebugPtr == (UUMGSequenceTickManager *)0x0) {
      this_00 = UUMGSequenceTickManager::Get((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->AnimationTickManager).field0_0x0.DebugPtr = this_00;
      UUMGSequenceTickManager::AddWidget(this_00,this);
    }
    UpdateCanTick(this);
  }
  return;
}

// QueuePlayAnimationTimeRange @ 146a8bc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::QueuePlayAnimationTimeRange
          (UUserWidget *this,UWidgetAnimation *param_1,float param_2,float param_3,int param_4,
          Type param_5,float param_6,bool param_7)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UUMGSequenceTickManager *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_res18 [8];
  FScriptContainerElement local_res20 [8];
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar2 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar2 * 0x38;
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0x38) {
      if ((*(UWidgetAnimation **)pFVar4 != (UWidgetAnimation *)0x0) &&
         (*(UWidgetAnimation **)pFVar4 == param_1)) goto LAB_146a8bce1;
    }
    if (iVar2 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar2 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(pFVar4,1);
LAB_146a8bce1:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UWidgetAnimation **)pFVar4 = param_1;
    pFVar4[8] = (FScriptContainerElement)0x1;
    if (local_res18 != pFVar4 + 0xc) {
      *(float *)(pFVar4 + 0xc) = param_2;
      pFVar4[0x10] = (FScriptContainerElement)0x1;
    }
    if (local_res20 != pFVar4 + 0x14) {
      *(float *)(pFVar4 + 0x14) = param_3;
      pFVar4[0x18] = (FScriptContainerElement)0x1;
    }
    if ((FScriptContainerElement *)&param_4 != pFVar4 + 0x1c) {
      *(int *)(pFVar4 + 0x1c) = param_4;
      pFVar4[0x20] = (FScriptContainerElement)0x1;
    }
    if ((FScriptContainerElement *)&param_5 != pFVar4 + 0x24) {
      *(Type *)(pFVar4 + 0x24) = param_5;
      pFVar4[0x28] = (FScriptContainerElement)0x1;
    }
    if ((FScriptContainerElement *)&param_6 != pFVar4 + 0x2c) {
      *(float *)(pFVar4 + 0x2c) = param_6;
      pFVar4[0x30] = (FScriptContainerElement)0x1;
    }
    if ((FScriptContainerElement *)&param_7 != pFVar4 + 0x34) {
      pFVar4[0x34] = (FScriptContainerElement)param_7;
      pFVar4[0x35] = (FScriptContainerElement)0x1;
    }
    if ((this->AnimationTickManager).field0_0x0.DebugPtr == (UUMGSequenceTickManager *)0x0) {
      this_00 = UUMGSequenceTickManager::Get((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->AnimationTickManager).field0_0x0.DebugPtr = this_00;
      UUMGSequenceTickManager::AddWidget(this_00,this);
    }
    UpdateCanTick(this);
  }
  return;
}

// QueueStopAllAnimations @ 146a8be10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::QueueStopAllAnimations(UUserWidget *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
  pFVar4 = (this->QueuedWidgetAnimationTransitions).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->QueuedWidgetAnimationTransitions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FQueuedWidgetAnimationTransition,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar4[8] = (FScriptContainerElement)0x4;
    pFVar4 = pFVar4 + 0x38;
  }
  iVar1 = (this->ActiveAnimations).ArrayNum;
  pFVar4 = (this->ActiveAnimations).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveAnimations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FWidgetAnimationState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    this_00 = *(FWidgetAnimationState **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar3 = FWidgetAnimationState::GetPlaybackStatus(this_00);
    if (TVar3 == Playing) {
      QueueStopAnimation(this,(this_00->Animation).field0_0x0.DebugPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  UpdateCanTick(this);
  return;
}

// QueueStopAnimation @ 146a8bf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::QueueStopAnimation(UUserWidget *this,UWidgetAnimation *param_1)

{
  TArray<FQueuedWidgetAnimationTransition,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    pTVar1 = &this->QueuedWidgetAnimationTransitions;
    iVar2 = (this->QueuedWidgetAnimationTransitions).ArrayNum;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar2 * 0x38;
    for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0x38) {
      if ((*(UWidgetAnimation **)pFVar4 != (UWidgetAnimation *)0x0) &&
         (*(UWidgetAnimation **)pFVar4 == param_1)) goto LAB_146a8bf8f;
    }
    if (iVar2 == (this->QueuedWidgetAnimationTransitions).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar1->AllocatorInstance,
                         &(this->QueuedWidgetAnimationTransitions).ArrayMax);
    }
    (this->QueuedWidgetAnimationTransitions).ArrayNum = iVar2 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(pFVar4,1);
LAB_146a8bf8f:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UWidgetAnimation **)pFVar4 = param_1;
    pFVar4[8] = (FScriptContainerElement)0x4;
    UpdateCanTick(this);
  }
  return;
}

// RebuildWidget @ 146a8bfd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UUserWidget::RebuildWidget(UUserWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  UWidget *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FArguments *pFVar12;
  SSpacer *pSVar13;
  FSharedReferencer<1> FVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_2b8;
  FMemScope local_2a0;
  TSharedRef<SWidget,1> local_298;
  code *local_288;
  UUserWidget **local_280;
  TSharedRef<SWidget,1> local_278;
  undefined1 local_268 [528];
  undefined1 local_58 [40];
  
  local_res8 = 0;
  if ((this->_padding_ & 0x30) != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                       ,0x4b9,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (this->bInitialized == '\0') {
    (**(code **)(this->_padding_ + 0x310))(this);
  }
  bVar8 = FLocalPlayerContext::IsValid(&this->PlayerContext);
  if (bVar8) {
    local_280 = &local_res18;
    local_288 = UE::Core::Private::Function::
                TFunctionRefCaller<`UUserWidget::RebuildWidget'::__l15::<lambda_1>,void,UWidget_*>::
                Call;
    local_res18 = this;
    UWidgetTree::ForEachWidget
              ((this->WidgetTree).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(UWidget_*)> *)&local_288);
  }
  this_00 = (((this->WidgetTree).field0_0x0.DebugPtr)->RootWidget).field0_0x0.DebugPtr;
  if (this_00 != (UWidget *)0x0) {
    pTVar11 = UWidget::TakeWidget(this_00,&local_278);
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar8 = false;
    FVar14.ReferenceController = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pSVar13 = (SSpacer *)pTVar11->Object;
    goto LAB_146a8c2b3;
  }
  pFVar12 = SSpacer::FArguments::FArguments((FArguments *)local_268);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a0,&local_res20,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_2b8,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp",
             0x4cf,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_2a0);
  FLLMScope::~FLLMScope(local_res10);
  pSVar13 = local_2b8._Widget.Object;
  if (local_2b8._Widget.Object == (SSpacer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SSpacer::Construct(local_2b8._Widget.Object,pFVar12);
  if (local_2b8._Widget.Object == (SSpacer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (((local_2b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_2b8._Widget.Object)->_padding_ + 0x228))(local_2b8._Widget.Object);
    bVar10 = 0;
    if (cVar9 != '\0') goto LAB_146a8c1e3;
  }
  else {
LAB_146a8c1e3:
    bVar10 = 0x20;
  }
  *(byte *)&(local_2b8._Widget.Object)->_padding_ =
       (byte)(local_2b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2b8._Widget.Object)->_padding_ =
       (byte)(local_2b8._Widget.Object)->_padding_ | bVar10;
  if (local_2b8._Widget.Object == (SSpacer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2b8._Widget.Object == (SSpacer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  FVar14.ReferenceController = local_2b8._Widget.SharedReferenceCount.ReferenceController;
  local_2b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2b8._Widget.Object = (SSpacer *)0x0;
  if (pSVar13 == (SSpacer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  local_298.Object = (SWidget *)pSVar13;
  local_298.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = &local_298;
  bVar7 = false;
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  bVar8 = true;
LAB_146a8c2b3:
  __return_storage_ptr__->Object = (SWidget *)pSVar13;
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_268);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// RegisterInputComponent @ 146a8d7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::RegisterInputComponent(UUserWidget *this)

{
  longlong *plVar1;
  
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a8d82a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xd98))
                (plVar1,(this->InputComponent).field0_0x0.DebugPtr,*(code **)(*plVar1 + 0xd98));
      return;
    }
  }
  return;
}

// ReleaseSlateResources @ 146a8ead0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::ReleaseSlateResources(UUserWidget *this,bool param_1)

{
  UWidgetTree *pUVar1;
  UWidget *pUVar2;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  pUVar1 = (this->WidgetTree).field0_0x0.DebugPtr;
  if ((pUVar1 != (UWidgetTree *)0x0) &&
     (pUVar2 = (pUVar1->RootWidget).field0_0x0.DebugPtr, pUVar2 != (UWidget *)0x0)) {
    (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,param_1);
  }
  return;
}

// RemoveExtension @ 146a8fbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::RemoveExtension(UUserWidget *this,UUserWidgetExtension *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UUserWidgetExtension>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  
  if (param_1 != (UUserWidgetExtension *)0x0) {
    pTVar2 = &this->Extensions;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar8 = (this->Extensions).ArrayNum;
    pFVar11 = pFVar4;
    if (pFVar4 != pFVar4 + (longlong)iVar8 * 8) {
      while (*(UUserWidgetExtension **)pFVar11 != param_1) {
        pFVar11 = pFVar11 + 8;
        if (pFVar11 == pFVar4 + (longlong)iVar8 * 8) {
          return;
        }
      }
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar4 >> 3);
      if (uVar10 != 0xffffffff) {
        uVar9 = 0;
        if ((int)(uVar10 + 1) <= iVar8) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->Extensions).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar8 = iVar3 + ~uVar10;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar10 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        piVar1 = &(this->Extensions).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Extensions).ArrayNum,
                   &(this->Extensions).ArrayMax);
        if (this->bAreExtensionsConstructed != '\0') {
          cVar7 = (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1);
          (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
          if (cVar7 != '\0') {
            UpdateCanTick(this);
          }
        }
      }
    }
  }
  return;
}

// RemoveExtensions @ 146a8fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::RemoveExtensions(UUserWidget *this,TSubclassOf<UUserWidgetExtension> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UUserWidgetExtension>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  UUserWidget *this_00;
  bool bVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  longlong lVar11;
  UObject *pUVar12;
  int iVar13;
  ForElementType<UUserWidgetExtension_*> FVar14;
  ForElementType<UUserWidgetExtension_*> FVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [8];
  longlong local_160 [2];
  UUserWidget *local_150;
  ForElementType<UUserWidgetExtension_*> local_148;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FVar15 = (ForElementType<UUserWidgetExtension_*>)0x0;
  iVar13 = (this->Extensions).ArrayNum + -1;
  local_148.SecondaryData = (ForElementType<UUserWidgetExtension_*>)0x0;
  local_40 = 0;
  local_3c = 0x20;
  local_150 = this;
  if (-1 < iVar13) {
    lVar17 = (longlong)iVar13;
    pTVar2 = &this->Extensions;
    lVar16 = lVar17 * 8;
    do {
      if (((this->Extensions).ArrayNum <= iVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar15 = local_148.SecondaryData, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar12 = *(UObject **)param_1.Class.field0_0x0;
      lVar11 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar16);
      local_160[0] = lVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar12 == (UObject *)0x0)) {
        if (pUVar12 != (UObject *)0x0) goto LAB_146a8fe63;
LAB_146a8fe9b:
        pUVar12 = (UObject *)0x0;
      }
      else {
        UE::GC::MarkAsReachable(pUVar12);
LAB_146a8fe63:
        lVar11 = local_160[0];
        pUVar10 = Z_Construct_UClass_UUserWidgetExtension_NoRegister();
        FVar15 = local_148.SecondaryData;
        if (pUVar10 == (UClass *)0x0) goto LAB_146a8fe9b;
        iVar3 = (int)pUVar10->_padding_;
        if ((*(int *)&pUVar12[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar3 * 8)
            != &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_146a8fe9b;
      }
      if ((*(int *)&pUVar12[1].field_0x10 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)&pUVar12[1].field_0x10 * 8) == &pUVar12[1].field_0x8)) {
        FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_148;
        if (FVar15 != (ForElementType<UUserWidgetExtension_*>)0x0) {
          FVar14 = FVar15;
        }
        if ((ulonglong)FVar14 <= local_160) {
          FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_148;
          if (FVar15 != (ForElementType<UUserWidgetExtension_*>)0x0) {
            FVar14 = FVar15;
          }
          if ((local_160 < (longlong *)((longlong)FVar14 + (longlong)local_3c * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar15 = local_148.SecondaryData, bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                               (0x808,&local_148,&local_3c);
          FVar15 = local_148.SecondaryData;
        }
        lVar11 = (longlong)local_40;
        FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_148;
        if (FVar15 != (ForElementType<UUserWidgetExtension_*>)0x0) {
          FVar14 = FVar15;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar14 + lVar11 * 8) = local_160[0];
        if (((this->Extensions).ArrayNum <= iVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->Extensions).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar9 = (iVar3 - iVar13) + -1;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + lVar17 * 8,pFVar4 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->Extensions).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Extensions).ArrayNum,
                   &(this->Extensions).ArrayMax);
        FVar15 = local_148.SecondaryData;
      }
      lVar17 = lVar17 + -1;
      lVar16 = lVar16 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  iVar13 = local_40;
  this_00 = local_150;
  if (local_150->bAreExtensionsConstructed != '\0') {
    bVar7 = false;
    FVar14 = (ForElementType<UUserWidgetExtension_*>)&local_148;
    if (FVar15 != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FVar14 = FVar15;
    }
    FVar15 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar14 + (longlong)local_40 * 8);
    while( true ) {
      if (local_40 != iVar13) {
        `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (FVar14 == FVar15) break;
      plVar5 = *(longlong **)FVar14;
      if ((bVar7) || (cVar8 = (**(code **)(*plVar5 + 0x2d8))(plVar5), cVar8 != '\0')) {
        bVar7 = true;
      }
      (**(code **)(*plVar5 + 0x2d0))(plVar5);
      FVar14 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar14 + 8);
    }
    FVar15 = local_148.SecondaryData;
    if (bVar7) {
      UpdateCanTick(this_00);
      FVar15 = local_148.SecondaryData;
    }
  }
  if (FVar15 != (ForElementType<UUserWidgetExtension_*>)0x0) {
    FMemory::Free((void *)FVar15);
  }
  return;
}

// RemoveFromViewport @ 146a90180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::RemoveFromViewport(UUserWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146a90183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// RemoveObsoleteBindings @ 146a90190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::RemoveObsoleteBindings
          (UUserWidget *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FNamedSlotBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = 0;
  if (0 < (this->NamedSlotBindings).ArrayNum) {
    lVar10 = 0;
    pTVar2 = &this->NamedSlotBindings;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->NamedSlotBindings).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar7 = pFVar6 + (longlong)param_1->ArrayNum * 8;
      if (pFVar6 != pFVar7) {
        do {
          if (*(longlong *)pFVar6 == *(longlong *)((pTVar2->AllocatorInstance).Data + lVar10))
          goto LAB_146a902eb;
          pFVar6 = pFVar6 + 8;
        } while (pFVar6 != pFVar7);
      }
      uVar5 = 0;
      if ((int)uVar9 < (this->NamedSlotBindings).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (pTVar2->AllocatorInstance).Data + lVar10;
      iVar8 = (this->NamedSlotBindings).ArrayNum + ~uVar9;
      if (iVar8 != 0) {
        memmove(pFVar7,pFVar7 + 0x10,(longlong)iVar8 << 4);
      }
      piVar1 = &(this->NamedSlotBindings).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,(this->NamedSlotBindings).ArrayNum,
                 &(this->NamedSlotBindings).ArrayMax);
      uVar9 = uVar9 - 1;
      lVar10 = lVar10 + -0x10;
LAB_146a902eb:
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->NamedSlotBindings).ArrayNum);
  }
  return;
}

// ReverseAnimation @ 146a91700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::ReverseAnimation(UUserWidget *this,UWidgetAnimation *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  GetAnimationState(this,&local_18,param_1);
  if (local_18.Object != (FWidgetAnimationState *)0x0) {
    if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::Reverse(local_18.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetAlignmentInViewport @ 146a924d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UUserWidget::SetAlignmentInViewport(UUserWidget *this,TVector2<double> *param_1)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  TVector2<double>_u_0 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double dStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    if ((this->_padding_ & 0x2000) == 0) {
      local_78 = (param_1->field0_0x0)._s_0.X;
      dStack_70 = (param_1->field0_0x0)._s_0.Y;
      local_18 = 0;
      uStack_14 = CONCAT31(uStack_14._1_3_,1);
      local_a8._s_0.X = 0.0;
      local_a8._s_0.Y = 0.0;
      local_98 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_90 = _UNK_150689688;
      local_88 = 0;
      uStack_80 = 0;
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this_00,(FGameViewportWidgetSlot *)&local_58._s_0,(UWidget *)this);
      if ((local_28 == (param_1->field0_0x0)._s_0.X) && (dStack_20 == (param_1->field0_0x0)._s_0.Y))
      {
        return;
      }
      local_78 = (param_1->field0_0x0)._s_0.X;
      dStack_70 = (param_1->field0_0x0)._s_0.Y;
      local_a8._s_0.X = local_58._s_0.X;
      local_a8._s_0.Y = local_58._s_0.Y;
      local_88 = local_38;
      uStack_80 = uStack_30;
      local_98 = local_48;
      uStack_90 = uStack_40;
      local_28 = local_78;
      dStack_20 = dStack_70;
    }
    local_68 = CONCAT44(uStack_14,local_18);
    UGameViewportSubsystem::SetWidgetSlot
              (this_00,(UWidget *)this,(FGameViewportWidgetSlot *)&local_a8._s_0);
  }
  return;
}

// SetAnchorsInViewport @ 146a925f0

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

void __thiscall UUserWidget::SetAnchorsInViewport(UUserWidget *this,FAnchors *param_1)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  TVector2<double>_u_0 local_58;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    if ((this->_padding_ & 0x2000) == 0) {
      local_58._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
      local_58._s_0.Y = (param_1->Minimum).field0_0x0._s_0.Y;
      local_68 = 0;
      local_48 = (param_1->Maximum).field0_0x0._s_0.X;
      dStack_40 = (param_1->Maximum).field0_0x0._s_0.Y;
      uStack_64 = CONCAT31(uStack_64._1_3_,1);
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this_00,(FGameViewportWidgetSlot *)&local_a8._s_0,(UWidget *)this);
      if ((((local_a8._s_0.X == (param_1->Minimum).field0_0x0._s_0.X) &&
           (local_a8._s_0.Y == (param_1->Minimum).field0_0x0._s_0.Y)) &&
          (local_98 == (param_1->Maximum).field0_0x0._s_0.X)) &&
         (dStack_90 == (param_1->Maximum).field0_0x0._s_0.Y)) {
        return;
      }
      local_a8._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
      local_a8._s_0.Y = (param_1->Minimum).field0_0x0._s_0.Y;
      local_98 = (param_1->Maximum).field0_0x0._s_0.X;
      dStack_90 = (param_1->Maximum).field0_0x0._s_0.Y;
      local_38 = local_88;
      uStack_30 = uStack_80;
      local_28 = local_78;
      uStack_20 = uStack_70;
      local_58._s_0.X = local_a8._s_0.X;
      local_58._s_0.Y = local_a8._s_0.Y;
      local_48 = local_98;
      dStack_40 = dStack_90;
    }
    local_18 = CONCAT44(uStack_64,local_68);
    UGameViewportSubsystem::SetWidgetSlot
              (this_00,(UWidget *)this,(FGameViewportWidgetSlot *)&local_58._s_0);
  }
  return;
}

// SetAnimationCurrentTime @ 146a92700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::SetAnimationCurrentTime(UUserWidget *this,UWidgetAnimation *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,local_28,param_1);
    if (local_28[0].Object != (FWidgetAnimationState *)0x0) {
      if (local_28[0].Object == (FWidgetAnimationState *)0x0) {
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
      FWidgetAnimationState::SetCurrentTime(local_28[0].Object,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetColorAndOpacity @ 146a92ae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetColorAndOpacity(UUserWidget *this,FLinearColor *param_1)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8) = uVar2;
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a92b16;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pSVar1 = (SWidget *)this->_padding_;
    if (pSVar1 != (SWidget *)0x0) {
      local_40._0_8_ = *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
      local_40._8_8_ = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
      local_30 = 1;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&pSVar1[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                   TopRight,pSVar1,(TAttribute<FLinearColor> *)&local_40._s_0,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_58);
      if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = local_18 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return;
    }
  }
LAB_146a92b16:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// SetContentForSlot @ 146a92e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UUserWidget::SetContentForSlot(UUserWidget *this,FName param_1,UWidget *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPanelWidget *this_00;
  UClass *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_38;
  FName local_30;
  
  bVar5 = false;
  local_res10 = param_1;
  if (this->_padding_ != 0) {
    if ((*(uint *)&this[-1].LastAnimationTime >> 4 & 1) != 0) {
      local_res8[0] = 0;
      `UUserWidget::SetContentForSlot'::__l5::<lambda_1>::operator()(local_res8);
    }
    this_00 = (UPanelWidget *)UWidgetTree::FindWidget((UWidgetTree *)this->_padding_,&local_res10);
    if (this_00 != (UPanelWidget *)0x0) {
      pUVar8 = Z_Construct_UClass_UNamedSlot_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar8->_padding_)) {
        (**(code **)(this_00->_padding_ + 0x310))(this_00);
        if (param_2 != (UWidget *)0x0) {
          UPanelWidget::AddChild(this_00,param_2);
        }
        goto LAB_146a92ece;
      }
    }
    bVar5 = true;
  }
LAB_146a92ece:
  uVar11 = 0;
  if (0 < (int)this->_padding_) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar6 = ~uVar11 >> 0x1f;
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
      lVar2 = this->_padding_;
      if (*(FName *)(lVar2 + lVar12) == local_res10) {
        if ((param_2 != (UWidget *)0x0) && (!bVar5)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          *(UWidget **)(lVar2 + 8 + lVar12) = param_2;
          return;
        }
        TArray<FNamedSlotBinding,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FNamedSlotBinding,TSizedDefaultAllocator<32>_> *)&this->_padding_,uVar11,
                   Default);
        return;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (int)this->_padding_);
  }
  if ((param_2 != (UWidget *)0x0) && (!bVar5)) {
    local_38 = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    plVar10 = &this->_padding_;
    local_30 = (FName)param_2;
    if ((((FName *)*plVar10 <= &local_38) &&
        (&local_38 < (FName *)*plVar10 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)plVar10,piVar1);
      *(int *)&this->_padding_ = iVar7;
    }
    *(int *)&this->_padding_ = iVar7 + 1;
    pFVar9 = (FName *)((longlong)iVar7 * 0x10 + *plVar10);
    *pFVar9 = local_38;
    pFVar9[1] = local_30;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_30);
    }
  }
  return;
}

// SetDesiredFocusWidget @ 146a93130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::SetDesiredFocusWidget(UUserWidget *this,UWidget *param_1)

{
  UWidgetTree *this_00;
  FWeakObjectPtr FVar1;
  ForAnyElementType FVar2;
  FWidgetChild *pFVar3;
  UObject *pUVar4;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_28;
  FWidgetChild local_18;
  
  if ((param_1 != (UWidget *)0x0) &&
     (this_00 = (this->WidgetTree).field0_0x0.DebugPtr, this_00 != (UWidgetTree *)0x0)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UWidgetTree::GetAllWidgets(this_00,&local_28);
    for (FVar2.Data = local_28.AllocatorInstance.Data;
        FVar2.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
        FVar2.Data = FVar2.Data + 8) {
      if (*(UWidget **)FVar2.Data == param_1) {
        pFVar3 = FWidgetChild::FWidgetChild(&local_18,this,(FName)param_1->_padding_);
        FVar1 = (pFVar3->WidgetPtr).WeakPtr;
        (this->DesiredFocusWidget).WidgetName = pFVar3->WidgetName;
        (this->DesiredFocusWidget).WidgetPtr.WeakPtr = FVar1;
        pUVar4 = FWeakObjectPtr::Get(&(this->DesiredFocusWidget).WidgetPtr.WeakPtr);
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        return pUVar4 != (UObject *)0x0;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetDesiredFocusWidget @ 146a93200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UUserWidget::SetDesiredFocusWidget(UUserWidget *this,FName param_1)

{
  FWeakObjectPtr FVar1;
  FWidgetChild *pFVar2;
  UObject *pUVar3;
  FWidgetChild local_18;
  
  pFVar2 = FWidgetChild::FWidgetChild(&local_18,this,param_1);
  FVar1 = (pFVar2->WidgetPtr).WeakPtr;
  (this->DesiredFocusWidget).WidgetName = pFVar2->WidgetName;
  (this->DesiredFocusWidget).WidgetPtr.WeakPtr = FVar1;
  pUVar3 = FWeakObjectPtr::Get(&(this->DesiredFocusWidget).WidgetPtr.WeakPtr);
  return pUVar3 != (UObject *)0x0;
}

// SetDesiredSizeInViewport @ 146a93250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UUserWidget::SetDesiredSizeInViewport(UUserWidget *this,TVector2<double> *param_1)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  TVector2<double>_u_0 local_108;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  FGameViewportWidgetSlot local_58;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    if ((this->_padding_ & 0x2000) == 0) {
      local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_68 = 0x100000000;
      local_c8 = 0x100000000;
      local_108._s_0.X = 0.0;
      local_108._s_0.Y = 0.0;
      local_f8 = (double)___xmm_3ff00000000000003ff0000000000000;
      dStack_f0 = (double)_UNK_150689688;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0.0;
      dStack_d0 = 0.0;
      pFVar2 = UGameViewportSubsystem::SetWidgetSlotDesiredSize
                         (&local_58,(FGameViewportWidgetSlot *)&local_108._s_0,
                          (TVector2<double> *)&local_b8._s_0);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this_00,(FGameViewportWidgetSlot *)&local_a8._s_0,(UWidget *)this);
      local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_108._s_0.X = local_a8._s_0.X;
      local_108._s_0.Y = local_a8._s_0.Y;
      local_f8 = local_98;
      dStack_f0 = dStack_90;
      local_e8 = local_88;
      uStack_e0 = uStack_80;
      local_d8 = local_78;
      dStack_d0 = dStack_70;
      local_c8 = local_68;
      pFVar2 = UGameViewportSubsystem::SetWidgetSlotDesiredSize
                         (&local_58,(FGameViewportWidgetSlot *)&local_108._s_0,
                          (TVector2<double> *)&local_b8._s_0);
      local_a8._s_0.X = (pFVar2->Anchors).Minimum.field0_0x0._s_0.X;
      local_a8._s_0.Y = (pFVar2->Anchors).Minimum.field0_0x0._s_0.Y;
      local_98 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_90 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
      local_88._0_4_ = (pFVar2->Offsets).Left;
      local_88._4_4_ = (pFVar2->Offsets).Top;
      uStack_80._0_4_ = (pFVar2->Offsets).Right;
      uStack_80._4_4_ = (pFVar2->Offsets).Bottom;
      local_78 = (pFVar2->Alignment).field0_0x0._s_0.X;
      dStack_70 = (pFVar2->Alignment).field0_0x0._s_0.Y;
      local_68._0_4_ = pFVar2->ZOrder;
      local_68._4_1_ = pFVar2->bAutoRemoveOnWorldRemoved;
      local_68._5_3_ = *(undefined3 *)&pFVar2->field_0x45;
    }
    local_108._s_0.X = (pFVar2->Anchors).Minimum.field0_0x0._s_0.X;
    local_108._s_0.Y = (pFVar2->Anchors).Minimum.field0_0x0._s_0.Y;
    local_f8 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
    dStack_f0 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
    local_e8._0_4_ = (pFVar2->Offsets).Left;
    local_e8._4_4_ = (pFVar2->Offsets).Top;
    uStack_e0._0_4_ = (pFVar2->Offsets).Right;
    uStack_e0._4_4_ = (pFVar2->Offsets).Bottom;
    local_d8 = (pFVar2->Alignment).field0_0x0._s_0.X;
    dStack_d0 = (pFVar2->Alignment).field0_0x0._s_0.Y;
    local_c8._0_4_ = pFVar2->ZOrder;
    local_c8._4_1_ = pFVar2->bAutoRemoveOnWorldRemoved;
    local_c8._5_3_ = *(undefined3 *)&pFVar2->field_0x45;
    UGameViewportSubsystem::SetWidgetSlot
              (this_00,(UWidget *)this,(FGameViewportWidgetSlot *)&local_108._s_0);
  }
  return;
}

// SetForegroundColor @ 146a938a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetForegroundColor(UUserWidget *this,FSlateColor *param_1)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  EVar4 = param_1->ColorUseRule;
  EVar5 = param_1->ColorTableId;
  uVar6 = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->ForegroundColor).ColorUseRule = EVar4;
  (this->ForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar6;
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a938e0;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar7;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar9);
    pSVar1 = (SWidget *)this->_padding_;
    if (pSVar1 != (SWidget *)0x0) {
      local_30._0_1_ = (this->ForegroundColor).ColorUseRule;
      local_30._1_1_ = (this->ForegroundColor).ColorTableId;
      local_30._2_2_ = *(undefined2 *)&(this->ForegroundColor).field_0x12;
      local_40._0_8_ = *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
      local_40._8_8_ =
           *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
      local_2c = 1;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&pSVar1[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                   BottomRight,pSVar1,(TAttribute<FSlateColor> *)&local_40._s_0,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_58);
      if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = local_18 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      return;
    }
  }
LAB_146a938e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// SetInputActionBlocking @ 146a93bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetInputActionBlocking(UUserWidget *this,bool param_1)

{
  UInputComponent *pUVar1;
  
  pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UInputComponent *)0x0) {
    this->bStopAction = '\0';
    this->field_0x2cc = this->field_0x2cc | param_1 * '\x02';
    pUVar1->bBlockInput = '\0';
    pUVar1->field_0x144 = pUVar1->field_0x144 | param_1;
  }
  return;
}

// SetInputActionPriority @ 146a93bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetInputActionPriority(UUserWidget *this,int param_1)

{
  UInputComponent *pUVar1;
  
  pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UInputComponent *)0x0) {
    this->Priority = param_1;
    pUVar1->Priority = param_1;
  }
  return;
}

// SetIsFocusable @ 146a93e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetIsFocusable(UUserWidget *this,bool param_1)

{
  this->bIsFocusable = '\0';
  this->field_0x2cc = this->field_0x2cc | param_1;
  Invalidate(this,Paint);
  return;
}

// SetMinimumDesiredSize @ 146a93ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetMinimumDesiredSize(UUserWidget *this,TVector2<double> *param_1)

{
  double dVar1;
  
  if (((param_1->field0_0x0)._s_0.X == (this->MinimumDesiredSize).field0_0x0._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->MinimumDesiredSize).field0_0x0._s_0.Y)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->MinimumDesiredSize).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->MinimumDesiredSize).field0_0x0._s_0.Y = dVar1;
  Invalidate(this,Layout);
  return;
}

// SetNumLoopsToPlay @ 146a93f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::SetNumLoopsToPlay(UUserWidget *this,UWidgetAnimation *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  GetAnimationState(this,&local_18,param_1);
  if (local_18.Object != (FWidgetAnimationState *)0x0) {
    if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::SetNumLoopsToPlay(local_18.Object,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetOwningLocalPlayer @ 146a94090

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

void __thiscall UUserWidget::SetOwningLocalPlayer(UUserWidget *this,ULocalPlayer *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UWorld *pUVar5;
  FLocalPlayerContext *pFVar6;
  FLocalPlayerContext local_18;
  
  if (param_1 != (ULocalPlayer *)0x0) {
    (**(code **)(this->_padding_ + 0x4d0))();
    lVar4 = (**(code **)(this->_padding_ + 0x2e0))(this);
    if (lVar4 != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar4 + 0x140),this);
    }
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pFVar6 = FLocalPlayerContext::FLocalPlayerContext(&local_18,param_1,pUVar5);
    iVar1 = (pFVar6->LocalPlayer).WeakPtr.ObjectSerialNumber;
    iVar2 = (pFVar6->World).WeakPtr.ObjectIndex;
    iVar3 = (pFVar6->World).WeakPtr.ObjectSerialNumber;
    (this->PlayerContext).LocalPlayer.WeakPtr.ObjectIndex =
         (pFVar6->LocalPlayer).WeakPtr.ObjectIndex;
    (this->PlayerContext).LocalPlayer.WeakPtr.ObjectSerialNumber = iVar1;
    (this->PlayerContext).World.WeakPtr.ObjectIndex = iVar2;
    (this->PlayerContext).World.WeakPtr.ObjectSerialNumber = iVar3;
    (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
    lVar4 = (**(code **)(this->_padding_ + 0x2e0))(this);
    if (lVar4 != 0) {
      local_18.World.WeakPtr = local_18.World.WeakPtr & 0xffffffff00000000;
      local_18.LocalPlayer.WeakPtr = (FWeakObjectPtr)HandleOwningLocalPlayerControllerChanged;
      TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
      AddUObject<UUserWidget>
                ((TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
                  *)(lVar4 + 0x140),(UUserWidget *)&stack0x00000010,(pmf_dc5ddd9e *)this);
    }
    (**(code **)(this->_padding_ + 0x4c8))(this);
  }
  return;
}

// SetOwningPlayer @ 146a94170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserWidget::SetOwningPlayer(UUserWidget *this,APlayerController *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  FLocalPlayerContext *pFVar5;
  FLocalPlayerContext local_18;
  
  if ((param_1 != (APlayerController *)0x0) &&
     (cVar4 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1), cVar4 != '\0')) {
    (**(code **)(this->_padding_ + 0x4d0))(this);
    pFVar5 = FLocalPlayerContext::FLocalPlayerContext(&local_18,param_1);
    iVar1 = (pFVar5->LocalPlayer).WeakPtr.ObjectSerialNumber;
    iVar2 = (pFVar5->World).WeakPtr.ObjectIndex;
    iVar3 = (pFVar5->World).WeakPtr.ObjectSerialNumber;
    (this->PlayerContext).LocalPlayer.WeakPtr.ObjectIndex =
         (pFVar5->LocalPlayer).WeakPtr.ObjectIndex;
    (this->PlayerContext).LocalPlayer.WeakPtr.ObjectSerialNumber = iVar1;
    (this->PlayerContext).World.WeakPtr.ObjectIndex = iVar2;
    (this->PlayerContext).World.WeakPtr.ObjectSerialNumber = iVar3;
    (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
    (**(code **)(this->_padding_ + 0x4c8))(this);
  }
  return;
}

// SetPadding @ 146a94340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetPadding(UUserWidget *this,FMargin *param_1)

{
  atomic<int> aVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar2;
  (this->Padding).Right = fVar3;
  (this->Padding).Bottom = fVar4;
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a94376;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar5 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar5;
    } while (!bVar7);
    if ((SObjectWidget *)this->_padding_ != (SObjectWidget *)0x0) {
      local_40._0_4_ = (this->Padding).Left;
      local_40._4_4_ = (this->Padding).Top;
      local_40._8_4_ = (this->Padding).Right;
      local_40._12_4_ = (this->Padding).Bottom;
      local_40[0x10] = true;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      SObjectWidget::SetPadding((SObjectWidget *)this->_padding_,(TAttribute<FMargin> *)local_40);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_58);
      if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = local_18 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return;
    }
  }
LAB_146a94376:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// SetPlaybackSpeed @ 146a946d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::SetPlaybackSpeed(UUserWidget *this,UWidgetAnimation *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  GetAnimationState(this,local_28,param_1);
  if (local_28[0].Object != (FWidgetAnimationState *)0x0) {
    if (local_28[0].Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::SetPlaybackSpeed(local_28[0].Object,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// SetPlayerContext @ 146a94750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUserWidget::SetPlayerContext(UUserWidget *this,FLocalPlayerContext *param_1)

{
  UWidgetTree *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FLocalPlayerContext *local_res8;
  code *local_18;
  FLocalPlayerContext **ppFStack_10;
  
  (**(code **)(this->_padding_ + 0x4d0))();
  lVar4 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (lVar4 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar4 + 0x140),this);
  }
  iVar1 = (param_1->LocalPlayer).WeakPtr.ObjectSerialNumber;
  iVar2 = (param_1->World).WeakPtr.ObjectIndex;
  iVar3 = (param_1->World).WeakPtr.ObjectSerialNumber;
  (this->PlayerContext).LocalPlayer.WeakPtr.ObjectIndex = (param_1->LocalPlayer).WeakPtr.ObjectIndex
  ;
  (this->PlayerContext).LocalPlayer.WeakPtr.ObjectSerialNumber = iVar1;
  (this->PlayerContext).World.WeakPtr.ObjectIndex = iVar2;
  (this->PlayerContext).World.WeakPtr.ObjectSerialNumber = iVar3;
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (this_00 != (UWidgetTree *)0x0) {
    ppFStack_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUserWidget::SetPlayerContext'::__l5::<lambda_1>,void,UWidget_*>
               ::Call;
    local_res8 = param_1;
    UWidgetTree::ForEachWidget(this_00,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  }
  lVar4 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (lVar4 != 0) {
    ppFStack_10 = (FLocalPlayerContext **)((ulonglong)ppFStack_10 & 0xffffffff00000000);
    local_18 = HandleOwningLocalPlayerControllerChanged;
    TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
    AddUObject<UUserWidget>
              ((TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
                *)(lVar4 + 0x140),(UUserWidget *)&local_res8,(pmf_dc5ddd9e *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x000146a94828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4c8))(this);
  return;
}

// SetPositionInViewport @ 146a948e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UUserWidget::SetPositionInViewport(UUserWidget *this,TVector2<double> *param_1,bool param_2)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  FGameViewportWidgetSlot *pFVar2;
  TVector2<double>_u_0 local_108;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  FGameViewportWidgetSlot local_58;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_00 = UGameViewportSubsystem::Get(pUVar1);
  if (this_00 != (UGameViewportSubsystem *)0x0) {
    if ((this->_padding_ & 0x2000) == 0) {
      local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_68 = 0x100000000;
      local_c8 = 0x100000000;
      local_108._s_0.X = 0.0;
      local_108._s_0.Y = 0.0;
      local_f8 = (double)___xmm_3ff00000000000003ff0000000000000;
      dStack_f0 = (double)_UNK_150689688;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0.0;
      dStack_d0 = 0.0;
      pFVar2 = UGameViewportSubsystem::SetWidgetSlotPosition
                         (&local_58,(FGameViewportWidgetSlot *)&local_108._s_0,(UWidget *)this,
                          (TVector2<double> *)&local_b8._s_0,param_2);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this_00,(FGameViewportWidgetSlot *)&local_a8._s_0,(UWidget *)this);
      local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_108._s_0.X = local_a8._s_0.X;
      local_108._s_0.Y = local_a8._s_0.Y;
      local_f8 = local_98;
      dStack_f0 = dStack_90;
      local_e8 = local_88;
      uStack_e0 = uStack_80;
      local_d8 = local_78;
      dStack_d0 = dStack_70;
      local_c8 = local_68;
      pFVar2 = UGameViewportSubsystem::SetWidgetSlotPosition
                         (&local_58,(FGameViewportWidgetSlot *)&local_108._s_0,(UWidget *)this,
                          (TVector2<double> *)&local_b8._s_0,param_2);
      local_a8._s_0.X = (pFVar2->Anchors).Minimum.field0_0x0._s_0.X;
      local_a8._s_0.Y = (pFVar2->Anchors).Minimum.field0_0x0._s_0.Y;
      local_98 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_90 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
      local_88._0_4_ = (pFVar2->Offsets).Left;
      local_88._4_4_ = (pFVar2->Offsets).Top;
      uStack_80._0_4_ = (pFVar2->Offsets).Right;
      uStack_80._4_4_ = (pFVar2->Offsets).Bottom;
      local_78 = (pFVar2->Alignment).field0_0x0._s_0.X;
      dStack_70 = (pFVar2->Alignment).field0_0x0._s_0.Y;
      local_68._0_4_ = pFVar2->ZOrder;
      local_68._4_1_ = pFVar2->bAutoRemoveOnWorldRemoved;
      local_68._5_3_ = *(undefined3 *)&pFVar2->field_0x45;
    }
    local_108._s_0.X = (pFVar2->Anchors).Minimum.field0_0x0._s_0.X;
    local_108._s_0.Y = (pFVar2->Anchors).Minimum.field0_0x0._s_0.Y;
    local_f8 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
    dStack_f0 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
    local_e8._0_4_ = (pFVar2->Offsets).Left;
    local_e8._4_4_ = (pFVar2->Offsets).Top;
    uStack_e0._0_4_ = (pFVar2->Offsets).Right;
    uStack_e0._4_4_ = (pFVar2->Offsets).Bottom;
    local_d8 = (pFVar2->Alignment).field0_0x0._s_0.X;
    dStack_d0 = (pFVar2->Alignment).field0_0x0._s_0.Y;
    local_c8._0_4_ = pFVar2->ZOrder;
    local_c8._4_1_ = pFVar2->bAutoRemoveOnWorldRemoved;
    local_c8._5_3_ = *(undefined3 *)&pFVar2->field_0x45;
    UGameViewportSubsystem::SetWidgetSlot
              (this_00,(UWidget *)this,(FGameViewportWidgetSlot *)&local_108._s_0);
  }
  return;
}

// SetVisibility @ 146a951c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SetVisibility(UUserWidget *this,ESlateVisibility param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  ESlateVisibility EVar6;
  ESlateVisibility EVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ESlateVisibility local_res18 [16];
  FDestructionSentinel local_48;
  
  EVar6 = UWidget::GetVisibility((UWidget *)this);
  UWidget::SetVisibility((UWidget *)this,param_1);
  EVar7 = UWidget::GetVisibility((UWidget *)this);
  if (EVar6 != EVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNativeVisibilityChanged,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnNativeVisibilityChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar11 = *(int *)&(this->OnNativeVisibilityChanged).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar5 = false;
      do {
        uVar10 = 0;
        if ((int)uVar11 < *(int *)&(this->OnNativeVisibilityChanged).field_0x10) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnNativeVisibilityChanged).field_0x8;
        if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar3 + 0x68))(), cVar9 == '\0')) {
          bVar5 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(this->OnNativeVisibilityChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnNativeVisibilityChanged,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    local_res18[0] = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnVisibilityChanged,
               local_res18);
  }
  return;
}

// StartListeningForPlayerControllerChanges @ 146a96670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StartListeningForPlayerControllerChanges(UUserWidget *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (lVar1 != 0) {
    TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>::
    AddUObject<UUserWidget>
              ((TMulticastDelegateRegistration<void___cdecl(APlayerController_*),FDefaultDelegateUserPolicy>
                *)(lVar1 + 0x140),(UUserWidget *)&stack0x00000008,(pmf_dc5ddd9e *)this);
  }
  return;
}

// StartProcessingInputScriptDelegates @ 146a966d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StartProcessingInputScriptDelegates(UUserWidget *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a96736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0xd98))(plVar3,(this->InputComponent).field0_0x0.DebugPtr);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1168331920279341038>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                       ,0x7ee,"Controller");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUUserWidget @ 146a96840

void __cdecl UUserWidget::StaticRegisterNativesUUserWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x42;
  local_18.DataPtr = Z_Construct_UClass_UUserWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllAnimations @ 146a96b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopAllAnimations(UUserWidget *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->bStoppingAllAnimations = '\x01';
  this->LastAnimationTime = 0.0;
  iVar1 = (this->ActiveAnimations).ArrayNum;
  pFVar4 = (this->ActiveAnimations).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveAnimations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FWidgetAnimationState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    this_00 = *(FWidgetAnimationState **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar3 = FWidgetAnimationState::GetPlaybackStatus(this_00);
    if (TVar3 == Playing) {
      FWidgetAnimationState::Stop(this_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  this->bStoppingAllAnimations = '\0';
  UpdateCanTick(this);
  return;
}

// StopAnimation @ 146a96bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopAnimation(UUserWidget *this,UWidgetAnimation *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  this->LastAnimationTime = 0.0;
  if (param_1 != (UWidgetAnimation *)0x0) {
    GetAnimationState(this,&local_18,param_1);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
      FWidgetAnimationState::Stop(local_18.Object);
      UpdateCanTick(this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StopAnimationsAndLatentActions @ 146a96c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopAnimationsAndLatentActions(UUserWidget *this)

{
  StopAllAnimations(this);
  CancelLatentActions(this);
  return;
}

// StopListeningForAllInputActions @ 146a96ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopListeningForAllInputActions(UUserWidget *this)

{
  int iVar1;
  UInputComponent *pUVar2;
  longlong *plVar3;
  
  pUVar2 = (this->InputComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UInputComponent *)0x0) {
    iVar1 = (pUVar2->ActionBindings).ArrayNum;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      UInputComponent::RemoveActionBinding((this->InputComponent).field0_0x0.DebugPtr,iVar1);
    }
    if (((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) &&
       (plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this), plVar3 != (longlong *)0x0
       )) {
      (**(code **)(*plVar3 + 0xda0))(plVar3,(this->InputComponent).field0_0x0.DebugPtr);
    }
    (**(code **)(((this->InputComponent).field0_0x0.DebugPtr)->_padding_ + 0x508))();
    UObjectBaseUtility::MarkAsGarbage
              ((UObjectBaseUtility *)(this->InputComponent).field0_0x0.DebugPtr);
    (this->InputComponent).field0_0x0.DebugPtr = (UInputComponent *)0x0;
  }
  return;
}

// StopListeningForInputAction @ 146a96d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::StopListeningForInputAction
          (UUserWidget *this,FName param_1,TEnumAsByte<EInputEvent> param_2)

{
  UInputComponent *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UInputComponent *)0x0) &&
     (uVar6 = (pUVar1->ActionBindings).ArrayNum - 1, -1 < (int)uVar6)) {
    lVar7 = (longlong)(int)uVar6 << 4;
    do {
      pUVar1 = (this->InputComponent).field0_0x0.DebugPtr;
      uVar5 = 0;
      if ((int)uVar6 < (pUVar1->ActionBindings).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((pUVar1->ActionBindings).AllocatorInstance.Data + lVar7);
      if ((*(FName *)(lVar2 + 4) == param_1) && (*(uchar *)(lVar2 + 2) == param_2.Value)) {
        UInputComponent::RemoveActionBinding((this->InputComponent).field0_0x0.DebugPtr,uVar6);
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// StopListeningForPlayerControllerChanges @ 146a96e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopListeningForPlayerControllerChanges(UUserWidget *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (lVar1 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x140),this);
    return;
  }
  return;
}

// StopProcessingInputScriptDelegates @ 146a96e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::StopProcessingInputScriptDelegates(UUserWidget *this)

{
  longlong *plVar1;
  
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a96eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xda0))
                (plVar1,(this->InputComponent).field0_0x0.DebugPtr,*(code **)(*plVar1 + 0xda0));
      return;
    }
  }
  return;
}

// SynchronizeProperties @ 146a96f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::SynchronizeProperties(UUserWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SObjectWidget *this_00;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  UObject *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UFunction *pUVar10;
  FMRSWRecursiveAccessDetector *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  UObject *local_res8;
  UObject *local_res10;
  undefined1 local_290 [8];
  ForAnyElementType FStack_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined1 local_260 [8];
  ForAnyElementType FStack_258;
  ulonglong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238;
  undefined1 local_234;
  undefined1 local_230 [8];
  FDelegateAllocation FStack_228;
  undefined1 local_218 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0 [8];
  FDelegateAllocation FStack_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [24];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 local_170 [24];
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FLinearColor_u_0 local_110;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_f8 [24];
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FLinearColor_u_0 local_a0;
  undefined1 local_90;
  undefined1 local_88 [24];
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar12 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar1->SharedReferenceCount;
    do {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146a96f76;
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (SObjectWidget *)this->_padding_;
    pTVar12 = pTVar1;
    if (this_00 != (SObjectWidget *)0x0) {
      bVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->ColorAndOpacityDelegate);
      if (bVar13) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ColorAndOpacityDelegate,&local_70);
        FVar2.ComparisonIndex.Value = *(uint *)&(this->ColorAndOpacityDelegate).field_0x10;
        FVar2.Number = *(uint *)&(this->ColorAndOpacityDelegate).field_0x14;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_70);
        pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                            &this->ColorAndOpacityDelegate);
        local_1d8 = 1;
        FStack_1c8.DelegateSize = 0;
        FStack_1c8._12_4_ = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d0 = (undefined1  [8])0x0;
        FStack_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                   (FWriteAccessScope *)&local_e0);
        local_c8 = &FStack_1c8;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1c8);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar8 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          puVar8[5] = 0;
          local_res8 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 5),(FObjectPtr)&local_res8);
          if ((FVar2 == (FName)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pUVar7 != (UObject *)0x0) {
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar8 + 5));
            pUVar10 = UObject::FindFunctionChecked(pUVar7,FVar2);
            puVar8[3] = pUVar10;
          }
        }
        if (local_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
        }
        local_178 = local_1d8;
        local_188 = local_1e8;
        uStack_180 = uStack_1e0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
        if (FStack_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_1c8.DelegateAllocator);
        }
        pFVar11 = (FMRSWRecursiveAccessDetector *)local_1d0;
      }
      else {
        local_278 = *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
        uStack_270 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
        local_268 = 1;
        local_250 = 0;
        local_178 = 1;
        local_260 = (undefined1  [8])0x0;
        FStack_258.Data = (FScriptContainerElement *)0x0;
        local_188 = local_278;
        uStack_180 = uStack_270;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                   (FWriteAccessScope *)&local_158);
        if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_258.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10)
          ;
          local_250 = local_250 & 0xffffffff00000000;
        }
        if (local_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
        }
        if (FStack_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_258.Data);
        }
        pFVar11 = (FMRSWRecursiveAccessDetector *)local_260;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar11);
      bVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->ForegroundColorDelegate);
      if (bVar13) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ForegroundColorDelegate,&local_58);
        FVar3.ComparisonIndex.Value = *(uint *)&(this->ForegroundColorDelegate).field_0x10;
        FVar3.Number = *(uint *)&(this->ForegroundColorDelegate).field_0x14;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                            &this->ForegroundColorDelegate);
        local_238 = local_238 & 0xffffff00;
        local_234 = 1;
        FStack_228.DelegateSize = 0;
        FStack_228._12_4_ = 0;
        local_248 = ___xmm_3f8000003f800000000000003f800000;
        uStack_240 = _UNK_15090c6d8;
        local_230 = (undefined1  [8])0x0;
        FStack_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                   (FWriteAccessScope *)&local_c0);
        local_a8 = &FStack_228;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,&FStack_228);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar8 + 4) = FVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          puVar8[5] = 0;
          local_res10 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 5),(FObjectPtr)&local_res10);
          if ((FVar3 == (FName)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (pUVar7 != (UObject *)0x0) {
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar8 + 5));
            pUVar10 = UObject::FindFunctionChecked(pUVar7,FVar3);
            puVar8[3] = pUVar10;
          }
        }
        if (local_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
        }
        local_1a8 = local_238;
        local_1a4 = local_234;
        local_1b8 = local_248;
        uStack_1b0 = uStack_240;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
        if (FStack_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_228.DelegateAllocator);
        }
        pFVar11 = (FMRSWRecursiveAccessDetector *)local_230;
      }
      else {
        local_1a8._0_1_ = (this->ForegroundColor).ColorUseRule;
        local_1a8._1_1_ = (this->ForegroundColor).ColorTableId;
        local_1a8._2_2_ = *(undefined2 *)&(this->ForegroundColor).field_0x12;
        local_1b8 = *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
        uStack_1b0 = *(undefined8 *)
                      ((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
        local_280 = 0;
        local_1a4 = 1;
        local_290 = (undefined1  [8])0x0;
        FStack_288.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
                   (FWriteAccessScope *)&local_140);
        if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_288.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10)
          ;
          local_280 = local_280 & 0xffffffff00000000;
        }
        if (local_140.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
        }
        if (FStack_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_288.Data);
        }
        pFVar11 = (FMRSWRecursiveAccessDetector *)local_290;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar11);
      local_90 = local_178;
      local_a0._0_8_ = local_188;
      local_a0._8_8_ = uStack_180;
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_88,
                 (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_170);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FLinearColor> *)&local_a0._s_0,
               None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
      if ((void *)local_88._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_88);
      local_100 = local_1a8;
      local_110._0_8_ = local_1b8;
      local_110._8_8_ = uStack_1b0;
      local_fc = local_1a4;
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,
                 (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FSlateColor> *)&local_110._s_0,
               None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
      if ((void *)local_f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f8);
      local_218._0_4_ = (this->Padding).Left;
      local_218._4_4_ = (this->Padding).Top;
      local_218._8_4_ = (this->Padding).Right;
      local_218._12_4_ = (this->Padding).Bottom;
      local_218[0x10] = true;
      local_1f0 = 0;
      local_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f8.Data = (FScriptContainerElement *)0x0;
      SObjectWidget::SetPadding(this_00,(TAttribute<FMargin> *)local_218);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_200,(FWriteAccessScope *)&local_128);
      if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
        local_1f0 = local_1f0 & 0xffffffff00000000;
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
      if ((void *)local_1a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
      if ((void *)local_170._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_170._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_170);
    }
  }
LAB_146a96f76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// TearDownAnimations @ 146a97a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::TearDownAnimations(UUserWidget *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWidgetAnimationState *this_00;
  TSharedRef<FWidgetAnimationState,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  TArray<TSharedRef<FWidgetAnimationState,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 local_res8 [8];
  
  if (this->bIsTickingAnimations != false) {
    local_res8[0] = 0;
    `UUserWidget::TearDownAnimations'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar9 = &this->ActiveAnimations;
  for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (this->ActiveAnimations).ArrayNum)); iVar7 = iVar7 + 1) {
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar7 * 0x10 + 8);
    this_00 = *(FWidgetAnimationState **)(pFVar2 + (longlong)iVar7 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetAnimationState::TearDown(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  piVar8 = &(this->ActiveAnimations).ArrayNum;
  piVar1 = &(this->ActiveAnimations).ArrayMax;
  pTVar4 = (TSharedRef<FWidgetAnimationState,1> *)(pTVar9->AllocatorInstance).Data;
  if (-1 < (this->ActiveAnimations).ArrayMax) {
    DestructItems<TSharedRef<FWidgetAnimationState,1>,int>(pTVar4,*piVar8);
    *piVar8 = 0;
    return;
  }
  DestructItems<TSharedRef<FWidgetAnimationState,1>,int>(pTVar4,*piVar8);
  *piVar8 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar9->AllocatorInstance,0,piVar1);
  }
  return;
}

// Tick @ 146a99140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::Tick(UUserWidget *this,FGeometry *param_1,float param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_88 [32];
  FGeometry local_68;
  float local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_68);
  FGeometry::operator=(&local_68,param_1);
  local_30 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Tick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_68);
  return;
}

// TickActionsAndAnimation @ 146a991e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::TickActionsAndAnimation(UUserWidget *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  code *local_38;
  undefined1 *local_30;
  
  puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res20;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
  if (*(char *)(pFVar8 + 4) == '\0') {
    if (this->bIsTickingAnimations != false) {
      local_res18[0] = 0;
      bVar4 = `UUserWidget::TickActionsAndAnimation'::__l6::<lambda_1>::operator()(local_res18);
      if (!bVar4) {
        return;
      }
    }
    bVar4 = this->bIsTickingAnimations;
    this->bIsTickingAnimations = true;
    ExecuteQueuedAnimationTransitions(this);
    uVar10 = 0;
    if (0 < (this->ActiveAnimations).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (this->ActiveAnimations).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->ActiveAnimations).AllocatorInstance.Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
        this_00 = *(FWidgetAnimationState **)(pFVar1 + lVar9);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        FWidgetAnimationState::Tick(this_00,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar10 < (this->ActiveAnimations).ArrayNum);
    }
    this->bIsTickingAnimations = bVar4;
  }
  return;
}

// UnbindAllFromAnimationFinished @ 146a99d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::UnbindAllFromAnimationFinished(UUserWidget *this,UWidgetAnimation *param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].InAnimation = param_1;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindAllFromAnimationFinished_::__l2::<lambda_1>_>
            (&this->AnimationCallbacks,local_res8);
  return;
}

// UnbindAllFromAnimationStarted @ 146a99d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::UnbindAllFromAnimationStarted(UUserWidget *this,UWidgetAnimation *param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].InAnimation = param_1;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindAllFromAnimationStarted_::__l2::<lambda_1>_>
            (&this->AnimationCallbacks,local_res8);
  return;
}

// UnbindFromAnimationFinished @ 146a99d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::UnbindFromAnimationFinished
          (UUserWidget *this,UWidgetAnimation *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  <lambda_1> local_18;
  
  local_18.InAnimation = param_1;
  local_18.InDelegate = param_2;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindFromAnimationFinished_::__l2::<lambda_1>_>
            (&this->AnimationCallbacks,&local_18);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnbindFromAnimationStarted @ 146a99da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::UnbindFromAnimationStarted
          (UUserWidget *this,UWidgetAnimation *param_1,FWidgetAnimationDynamicEvent *param_2)

{
  <lambda_1> local_18;
  
  local_18.InAnimation = param_1;
  local_18.InDelegate = param_2;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindFromAnimationStarted_::__l2::<lambda_1>_>
            (&this->AnimationCallbacks,&local_18);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnregisterInputComponent @ 146a9a020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUserWidget::UnregisterInputComponent(UUserWidget *this)

{
  longlong *plVar1;
  
  if ((this->InputComponent).field0_0x0.DebugPtr != (UInputComponent *)0x0) {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a9a05a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xda0))
                (plVar1,(this->InputComponent).field0_0x0.DebugPtr,*(code **)(*plVar1 + 0xda0));
      return;
    }
  }
  return;
}

// UpdateCanTick @ 146a9a6f0

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

void __thiscall UUserWidget::UpdateCanTick(UUserWidget *this)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  UWorld *this_00;
  UClass *pUVar9;
  FLatentActionManager *this_01;
  FScriptContainerElement *pFVar10;
  SWidget *pSVar11;
  EWidgetUpdateFlags EVar12;
  EWidgetUpdateFlags EVar13;
  byte bVar14;
  bool bVar15;
  FWeakObjectPtr local_res8;
  UUserWidget *local_res10;
  
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar11 = (SWidget *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        (**(code **)(this->_padding_ + 0x180))(this);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar15 = aVar5 == aVar7;
      if (bVar15) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar15);
    pSVar11 = (SWidget *)this->_padding_;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((pSVar11 == (SWidget *)0x0) || (this_00 == (UWorld *)0x0)) goto LAB_146a9a906;
  bVar14 = 0;
  if (this->TickFrequency == Auto) {
    lVar4 = this->_padding_;
    if (lVar4 == 0) {
LAB_146a9a7cd:
      bVar14 = 1;
    }
    else {
      pUVar9 = UWidgetBlueprintGeneratedClass::StaticClass();
      iVar8 = (int)pUVar9->_padding_;
      if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar8) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar8 * 8)
           != &pUVar9->_padding_)) || ((*(byte *)(lVar4 + 0x388) & 1) != 0)) goto LAB_146a9a7cd;
      bVar14 = 0;
    }
    this_01 = UWorld::GetLatentActionManager(this_00);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar8 = FLatentActionManager::GetNumActionsForObject
                      (this_01,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res8);
    bVar14 = this->bHasScriptImplementedTick | bVar14 |
             (iVar8 != 0 ||
             (0 < (this->ActiveAnimations).ArrayNum ||
             0 < (this->QueuedWidgetAnimationTransitions).ArrayNum));
    if ((bVar14 != 0) || (this->bAreExtensionsConstructed == '\0')) goto LAB_146a9a8c7;
    pFVar10 = (this->Extensions).AllocatorInstance.Data;
    iVar8 = (this->Extensions).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar8) {
        `TCheckedPointerIterator<TObjectPtr<UUserWidgetExtension>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar10 == pFVar1) goto LAB_146a9a8c7;
      cVar6 = (**(code **)(**(longlong **)pFVar10 + 0x2d8))();
      if (cVar6 != '\0') break;
      pFVar10 = pFVar10 + 8;
    }
    EVar12 = pSVar11->UpdateFlags;
    EVar13 = EVar12 | NeedsTick;
  }
  else {
LAB_146a9a8c7:
    if (bVar14 == 0) {
      EVar12 = pSVar11->UpdateFlags;
      EVar13 = EVar12 & ~NeedsTick;
    }
    else {
      EVar12 = pSVar11->UpdateFlags;
      EVar13 = EVar12 | NeedsTick;
    }
  }
  pSVar11->UpdateFlags = EVar13;
  FWidgetProxyHandle::UpdateWidgetFlags(&pSVar11->FastPathProxyHandle,pSVar11,EVar12,EVar13);
LAB_146a9a906:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// UpdatePlayerContextIfInvalid @ 146a9b410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUserWidget::UpdatePlayerContextIfInvalid(UUserWidget *this,FLocalPlayerContext *param_1)

{
  UWidgetTree *this_00;
  bool bVar1;
  UUserWidget *local_res8;
  code *local_18;
  UUserWidget **local_10;
  
  bVar1 = FLocalPlayerContext::IsValid(&this->PlayerContext);
  if (bVar1) {
    this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
    if (this_00 != (UWidgetTree *)0x0) {
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UUserWidget::UpdatePlayerContextIfInvalid'::__l8::<lambda_1>,void,UWidget_*>
                 ::Call;
      local_res8 = this;
      UWidgetTree::ForEachWidget(this_00,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
      return;
    }
  }
  else {
    SetPlayerContext(this,param_1);
  }
  return;
}

// _getUObject @ 146a9d3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __thiscall UUserWidget::_getUObject(UUserWidget *this)

{
  return (UObject *)&this[-1].AnimationCallbacks;
}

// _getUObject`adjustor{392}' @ 146a9d3ac

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UUserWidget::_getUObject`adjustor{392}'
   (void)const __ptr64 */

UObject * __thiscall UUserWidget::_getUObject_adjustor_392__(UUserWidget *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UUserWidget *)&this[-1].ColorAndOpacityDelegate.field_0x8);
  return (UObject *)pUVar1;
}

// execAddExtension @ 146a9d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execAddExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UUserWidgetExtension *pUVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
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
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = AddExtension((UUserWidget *)param_1,(TSubclassOf<UUserWidgetExtension>)local_res18);
  *(UUserWidgetExtension **)param_3 = pUVar2;
  return;
}

// execAddToPlayerScreen @ 146a9d860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl UUserWidget::execAddToPlayerScreen(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  UGameViewportSubsystem *this;
  longlong lVar4;
  FGameViewportWidgetSlot *pFVar5;
  ULocalPlayer *pUVar6;
  FMessageLog *this_00;
  FText *pFVar7;
  int local_res8 [2];
  FName local_res10;
  TSharedRef<FTokenizedMessage,1> local_118;
  FText local_108;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  double dStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_68;
  
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
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar3);
  if (this != (UGameViewportSubsystem *)0x0) {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
    if (lVar4 != 0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      local_f8._8_4_ = 0;
      local_f8._12_4_ = 0;
      local_d8 = 0.0;
      fStack_d4 = 0.0;
      fStack_d0 = 0.0;
      fStack_cc = 0.0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_68._0_5_ = CONCAT14(1,(undefined4)local_68);
      local_e8 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_e0 = _UNK_150689688;
      if ((param_1[6].field_0x9 & 0x20) != 0) {
        pFVar5 = UGameViewportSubsystem::GetWidgetSlot
                           (this,(FGameViewportWidgetSlot *)&local_f8._s_0,(UWidget *)param_1);
        local_68._0_4_ = pFVar5->ZOrder;
        local_68._4_1_ = pFVar5->bAutoRemoveOnWorldRemoved;
        local_68._5_3_ = *(undefined3 *)&pFVar5->field_0x45;
        local_f8._0_4_ = *(undefined4 *)&(pFVar5->Anchors).Minimum.field0_0x0;
        local_f8._4_4_ = *(undefined4 *)((longlong)&(pFVar5->Anchors).Minimum.field0_0x0 + 4);
        local_f8._8_4_ = *(undefined4 *)((longlong)&(pFVar5->Anchors).Minimum.field0_0x0 + 8);
        local_f8._12_4_ = *(undefined4 *)((longlong)&(pFVar5->Anchors).Minimum.field0_0x0 + 0xc);
        local_e8 = (pFVar5->Anchors).Maximum.field0_0x0._s_0.X;
        dStack_e0 = (pFVar5->Anchors).Maximum.field0_0x0._s_0.Y;
        local_d8 = (pFVar5->Offsets).Left;
        fStack_d4 = (pFVar5->Offsets).Top;
        fStack_d0 = (pFVar5->Offsets).Right;
        fStack_cc = (pFVar5->Offsets).Bottom;
        local_c8 = *(undefined4 *)&(pFVar5->Alignment).field0_0x0;
        uStack_c4 = *(undefined4 *)((longlong)&(pFVar5->Alignment).field0_0x0 + 4);
        uStack_c0 = *(undefined4 *)((longlong)&(pFVar5->Alignment).field0_0x0 + 8);
        uStack_bc = *(undefined4 *)((longlong)&(pFVar5->Alignment).field0_0x0 + 0xc);
      }
      local_68 = CONCAT44(local_68._4_4_,iVar2);
      pUVar6 = (ULocalPlayer *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
      local_b8 = local_68;
      UGameViewportSubsystem::AddWidgetForPlayer
                (this,(UWidget *)param_1,pUVar6,(FGameViewportWidgetSlot *)&local_f8._s_0);
      *(undefined1 *)param_3 = 1;
      return;
    }
    ::FName::FName(&local_res10,"PIE");
    this_00 = FMessageLog::FMessageLog((FMessageLog *)&local_f8._s_0,&local_res10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"UMG",L"AddToPlayerScreen_NoPlayer",
                        L"AddToPlayerScreen Failed.  No Owning Player!");
    FMessageLog::Error(this_00,&local_118,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_f8._s_0);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execAddToViewport @ 146a9daa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl UUserWidget::execAddToViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  UGameViewportSubsystem *this;
  FGameViewportWidgetSlot *pFVar4;
  int local_res8 [2];
  TVector2<double>_u_0 local_a8;
  double local_98;
  double dStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_18;
  
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
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar3);
  if (this != (UGameViewportSubsystem *)0x0) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_18._0_5_ = CONCAT14(1,(undefined4)local_18);
    local_98 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_90 = _UNK_150689688;
    if ((param_1[6].field_0x9 & 0x20) != 0) {
      pFVar4 = UGameViewportSubsystem::GetWidgetSlot
                         (this,(FGameViewportWidgetSlot *)&local_a8._s_0,(UWidget *)param_1);
      local_18._0_4_ = pFVar4->ZOrder;
      local_18._4_1_ = pFVar4->bAutoRemoveOnWorldRemoved;
      local_18._5_3_ = *(undefined3 *)&pFVar4->field_0x45;
      local_a8._0_4_ = *(undefined4 *)&(pFVar4->Anchors).Minimum.field0_0x0;
      local_a8._4_4_ = *(undefined4 *)((longlong)&(pFVar4->Anchors).Minimum.field0_0x0 + 4);
      local_a8._8_4_ = *(undefined4 *)((longlong)&(pFVar4->Anchors).Minimum.field0_0x0 + 8);
      local_a8._12_4_ = *(undefined4 *)((longlong)&(pFVar4->Anchors).Minimum.field0_0x0 + 0xc);
      local_98 = (pFVar4->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_90 = (pFVar4->Anchors).Maximum.field0_0x0._s_0.Y;
      local_88 = (pFVar4->Offsets).Left;
      fStack_84 = (pFVar4->Offsets).Top;
      fStack_80 = (pFVar4->Offsets).Right;
      fStack_7c = (pFVar4->Offsets).Bottom;
      local_78 = *(undefined4 *)&(pFVar4->Alignment).field0_0x0;
      uStack_74 = *(undefined4 *)((longlong)&(pFVar4->Alignment).field0_0x0 + 4);
      uStack_70 = *(undefined4 *)((longlong)&(pFVar4->Alignment).field0_0x0 + 8);
      uStack_6c = *(undefined4 *)((longlong)&(pFVar4->Alignment).field0_0x0 + 0xc);
    }
    local_18 = CONCAT44(local_18._4_4_,iVar2);
    local_68 = local_18;
    UGameViewportSubsystem::AddWidget
              (this,(UWidget *)param_1,(FGameViewportWidgetSlot *)&local_a8._s_0);
  }
  return;
}

// execBindToAnimationEvent @ 146a9dbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execBindToAnimationEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EWidgetAnimationEvent EVar2;
  FName FVar3;
  EWidgetAnimationEvent local_res10 [8];
  FName local_res20;
  UWidgetAnimation *local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FWidgetAnimationDynamicEvent local_48;
  FReadAccessScope local_30;
  
  local_68 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = Started;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar3 = local_res20;
  EVar2 = local_res10[0];
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  BindToAnimationEvent((UUserWidget *)param_1,local_68,&local_48,EVar2,FVar3);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execBindToAnimationFinished @ 146a9dd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execBindToAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FWidgetAnimationDynamicEvent local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  BindToAnimationFinished((UUserWidget *)param_1,local_res10,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execBindToAnimationStarted @ 146a9deb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execBindToAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FWidgetAnimationDynamicEvent local_40;
  FReadAccessScope local_28;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  BindToAnimationStarted((UUserWidget *)param_1,local_res10,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execCancelLatentActions @ 146a9e010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execCancelLatentActions(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CancelLatentActions((UUserWidget *)param_1);
  return;
}

// execFlushAnimations @ 146aa0710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UUserWidget::execFlushAnimations(UObject *param_1,FFrame *param_2,void *param_3)

{
  UUMGSequenceTickManager *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UUMGSequenceTickManager::Get(param_1);
  UUMGSequenceTickManager::ForceFlush(this);
  return;
}

// execGetAlignmentInViewport @ 146aa0940

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

void __cdecl UUserWidget::execGetAlignmentInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this;
  FGameViewportWidgetSlot *pFVar3;
  FGameViewportWidgetSlot local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[6].field_0x9 & 0x20) != 0) {
    pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    this = UGameViewportSubsystem::Get(pUVar2);
    if (this != (UGameViewportSubsystem *)0x0) {
      pFVar3 = UGameViewportSubsystem::GetWidgetSlot(this,&local_58,(UWidget *)param_1);
      dVar1 = (pFVar3->Alignment).field0_0x0._s_0.Y;
      *(double *)param_3 = (pFVar3->Alignment).field0_0x0._s_0.X;
      *(double *)((longlong)param_3 + 8) = dVar1;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetAnchorsInViewport @ 146aa1200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl UUserWidget::execGetAnchorsInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this;
  FGameViewportWidgetSlot *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  FGameViewportWidgetSlot local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[6].field_0x9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    this = UGameViewportSubsystem::Get(pUVar1);
    if (this != (UGameViewportSubsystem *)0x0) {
      pFVar2 = UGameViewportSubsystem::GetWidgetSlot(this,&local_58,(UWidget *)param_1);
      uVar3 = *(undefined4 *)&(pFVar2->Anchors).Minimum.field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 4);
      uVar5 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 8);
      uVar6 = *(undefined4 *)((longlong)&(pFVar2->Anchors).Minimum.field0_0x0 + 0xc);
      dVar7 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.X;
      dVar8 = (pFVar2->Anchors).Maximum.field0_0x0._s_0.Y;
      goto LAB_146aa1268;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  dVar7 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689688;
LAB_146aa1268:
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  *(double *)((longlong)param_3 + 0x10) = dVar7;
  *(double *)((longlong)param_3 + 0x18) = dVar8;
  return;
}

// execGetAnimationCurrentTime @ 146aa1290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execGetAnimationCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameTime FVar2;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  FQualifiedFrameTime *pFVar6;
  int iVar7;
  UWidgetAnimation *local_res10;
  FFrameTime local_res18;
  TSharedPtr<FWidgetAnimationState_const_,1> local_38;
  FQualifiedFrameTime local_28;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,&local_38,local_res10);
    if (local_38.Object != (FWidgetAnimationState *)0x0) {
      if (local_38.Object == (FWidgetAnimationState *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar6 = FWidgetAnimationState::GetCurrentTime(local_38.Object,&local_28);
      FVar2 = pFVar6->Time;
      FVar3 = pFVar6->Rate;
      local_res18 = FVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      iVar7 = FVar3.Denominator;
      *(float *)param_3 =
           ((float)((longlong)iVar7 * (longlong)FVar2.FrameNumber.Value.Value) +
           (float)iVar7 * local_res18.SubFrame) / (float)FVar3.Numerator;
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetExtension @ 146aa19f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execGetExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UUserWidgetExtension *pUVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
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
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = GetExtension((UUserWidget *)param_1,(TSubclassOf<UUserWidgetExtension>)local_res18);
  *(UUserWidgetExtension **)param_3 = pUVar2;
  return;
}

// execGetExtensions @ 146aa1aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execGetExtensions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  TArray<UUserWidgetExtension_*,TSizedDefaultAllocator<32>_> local_28;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pTVar2 = GetExtensions((UUserWidget *)param_1,&local_28,
                         (TSubclassOf<UUserWidgetExtension>)local_res18);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetIsVisible @ 146aa20b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UUserWidget::execGetIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UWidget::IsInViewport((UWidget *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetOwningPlayerCameraManager @ 146aa2720

void __cdecl
UUserWidget::execGetOwningPlayerCameraManager(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  if (lVar1 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(lVar1 + 0x390);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetOwningPlayerPawn @ 146aa2770

void __cdecl UUserWidget::execGetOwningPlayerPawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  if (lVar2 != 0) {
    pUVar1 = *(UObject **)(lVar2 + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsAnimationPlaying @ 146aa2db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execIsAnimationPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  UWidgetAnimation *local_res10;
  TSharedPtr<FWidgetAnimationState_const_,1> local_18;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,&local_18,local_res10);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if ((local_18.Object == (FWidgetAnimationState *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TVar4 = FWidgetAnimationState::GetPlaybackStatus(local_18.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      *(bool *)param_3 = TVar4 == Playing;
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsAnimationPlayingForward @ 146aa2ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execIsAnimationPlayingForward(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWidgetAnimation *local_res10;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,&local_18,local_res10);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if ((local_18.Object == (FWidgetAnimationState *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FWidgetAnimationState::IsPlayingForward(local_18.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      *(bool *)param_3 = bVar3;
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsAnyAnimationPlaying @ 146aa2fd0

void __cdecl UUserWidget::execIsAnyAnimationPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[0x13].field_0x18;
  return;
}

// execIsListeningForInputAction @ 146aa30e0

void __cdecl
UUserWidget::execIsListeningForInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x16].field_0x8 == 0) ||
     (uVar7 = *(int *)(*(longlong *)&param_1[0x16].field_0x8 + 0x128) - 1, (int)uVar7 < 0)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  lVar8 = (longlong)(int)uVar7 << 4;
  do {
    lVar2 = *(longlong *)&param_1[0x16].field_0x8;
    uVar6 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x128)) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar8 + *(longlong *)(lVar2 + 0x120)) + 4) == lVar4) {
      *(undefined1 *)param_3 = 1;
      return;
    }
    lVar8 = lVar8 + -0x10;
    uVar7 = uVar7 - 1;
  } while (-1 < (int)uVar7);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsPlayingAnimation @ 146aa32d0

void __cdecl UUserWidget::execIsPlayingAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[0x13].field_0x18;
  return;
}

// execListenForInputAction @ 146aa34c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execListenForInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TEnumAsByte<EInputEvent> local_res10 [8];
  int local_res20 [2];
  FName local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FOnInputAction local_48;
  FReadAccessScope local_30;
  
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  bVar2 = local_res20[0] != 0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_48._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48._8_8_ = local_58;
  local_48._16_8_ = local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  ListenForInputAction((UUserWidget *)param_1,local_68,local_res10[0],bVar2,&local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execOnAnimationFinished @ 146aa4220

void __cdecl UUserWidget::execOnAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_res8);
  return;
}

// execOnAnimationStarted @ 146aa42b0

void __cdecl UUserWidget::execOnAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res8);
  return;
}

// execPauseAnimation @ 146aa4340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execPauseAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameTime FVar2;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  FQualifiedFrameTime *pFVar6;
  int iVar7;
  float fVar8;
  UWidgetAnimation *local_res8;
  FFrameTime local_res10;
  TSharedPtr<FWidgetAnimationState,1> local_28;
  FQualifiedFrameTime local_18;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[0xc].field_0x20 = 0;
  if (local_res8 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,&local_28,local_res8);
    if (local_28.Object != (FWidgetAnimationState *)0x0) {
      if (local_28.Object == (FWidgetAnimationState *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FWidgetAnimationState::Pause(local_28.Object);
      if (local_28.Object == (FWidgetAnimationState *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar6 = FWidgetAnimationState::GetCurrentTime(local_28.Object,&local_18);
      FVar2 = pFVar6->Time;
      FVar3 = pFVar6->Rate;
      local_res10 = FVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      iVar7 = FVar3.Denominator;
      fVar8 = ((float)((longlong)iVar7 * (longlong)FVar2.FrameNumber.Value.Value) +
              (float)iVar7 * local_res10.SubFrame) / (float)FVar3.Numerator;
      goto LAB_146aa44c4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  fVar8 = 0.0;
LAB_146aa44c4:
  *(float *)param_3 = fVar8;
  return;
}

// execPlayAnimation @ 146aa44e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execPlayAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  FProperty *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  FWidgetAnimationHandle *pFVar8;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  int local_48;
  float local_44;
  UWidgetAnimation *local_40;
  FWidgetAnimationHandle local_38;
  
  local_40 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  local_48 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = PlayAnimation((UUserWidget *)param_1,&local_38,local_40,local_44,local_48,
                         (uint)local_res10[0],local_res20[0],local_res18[0] != 0);
  if (param_3 != pFVar8) {
    *(FWidgetAnimationState **)param_3 = (pFVar8->WeakState).Object;
    pTVar6 = (pFVar8->WeakState).WeakReferenceCount.ReferenceController;
    (pFVar8->WeakState).Object = (FWidgetAnimationState *)0x0;
    plVar7 = *(longlong **)((longlong)param_3 + 8);
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar6;
    (pFVar8->WeakState).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  if (local_38.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_38.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execPlayAnimationForward @ 146aa4720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execPlayAnimationForward(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  FProperty *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  FWidgetAnimationHandle *pFVar8;
  int local_res10 [2];
  float local_res18 [2];
  UWidgetAnimation *local_res20;
  FWidgetAnimationHandle local_28;
  
  local_res20 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = PlayAnimationForward
                     ((UUserWidget *)param_1,&local_28,local_res20,local_res18[0],
                      local_res10[0] != 0);
  if (param_3 != pFVar8) {
    *(FWidgetAnimationState **)param_3 = (pFVar8->WeakState).Object;
    pTVar6 = (pFVar8->WeakState).WeakReferenceCount.ReferenceController;
    (pFVar8->WeakState).Object = (FWidgetAnimationState *)0x0;
    plVar7 = *(longlong **)((longlong)param_3 + 8);
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar6;
    (pFVar8->WeakState).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  if (local_28.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_28.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execPlayAnimationReverse @ 146aa48a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execPlayAnimationReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  FProperty *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  FWidgetAnimationHandle *pFVar8;
  int local_res10 [2];
  float local_res18 [2];
  UWidgetAnimation *local_res20;
  FWidgetAnimationHandle local_28;
  
  local_res20 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = PlayAnimationReverse
                     ((UUserWidget *)param_1,&local_28,local_res20,local_res18[0],
                      local_res10[0] != 0);
  if (param_3 != pFVar8) {
    *(FWidgetAnimationState **)param_3 = (pFVar8->WeakState).Object;
    pTVar6 = (pFVar8->WeakState).WeakReferenceCount.ReferenceController;
    (pFVar8->WeakState).Object = (FWidgetAnimationState *)0x0;
    plVar7 = *(longlong **)((longlong)param_3 + 8);
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar6;
    (pFVar8->WeakState).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  if (local_28.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_28.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execPlayAnimationTimeRange @ 146aa4a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execPlayAnimationTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  FProperty *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  FWidgetAnimationHandle *pFVar8;
  byte local_res10 [8];
  int local_res18 [2];
  float local_res20 [2];
  int local_58;
  float local_54;
  float local_50 [2];
  UWidgetAnimation *local_48;
  FWidgetAnimationHandle local_40;
  
  local_48 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_50[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_54 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_58 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = PlayAnimationTimeRange
                     ((UUserWidget *)param_1,&local_40,local_48,local_50[0],local_54,local_58,
                      (uint)local_res10[0],local_res20[0],local_res18[0] != 0);
  if (param_3 != pFVar8) {
    *(FWidgetAnimationState **)param_3 = (pFVar8->WeakState).Object;
    pTVar6 = (pFVar8->WeakState).WeakReferenceCount.ReferenceController;
    (pFVar8->WeakState).Object = (FWidgetAnimationState *)0x0;
    plVar7 = *(longlong **)((longlong)param_3 + 8);
    *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar6;
    (pFVar8->WeakState).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  if (local_40.WeakState.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_40.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_40.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_40.WeakState.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execPlaySound @ 146aa4cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UUserWidget::execPlaySound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FSlateApplication *this;
  UObject *local_res10 [3];
  TObjectPtr<UObject>_u_0 local_28 [4];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    FSlateSound::FSlateSound((FSlateSound *)&local_28[0].ObjectPtr);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_28[0].DebugPtr = pUVar2;
    this = FSlateApplication::Get();
    FSlateApplication::PlaySound(this,(FSlateSound *)&local_28[0].ObjectPtr,0);
  }
  return;
}

// execQueuePauseAnimation @ 146aa5040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execQueuePauseAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  FFrameTime FVar3;
  FFrameRate FVar4;
  code *pcVar5;
  UWidgetAnimation *pUVar6;
  int iVar7;
  FQualifiedFrameTime *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  float fVar12;
  UWidgetAnimation *local_res10;
  FFrameTime local_res18;
  TSharedPtr<FWidgetAnimationState,1> local_38;
  FQualifiedFrameTime local_28;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidgetAnimation *)0x0) {
    pUVar1 = param_1 + 0x12;
    iVar7 = *(int *)&param_1[0x12].field_0x8;
    FVar10.Data = *(FScriptContainerElement **)pUVar1;
    pFVar9 = FVar10.Data + (longlong)iVar7 * 0x38;
    for (; FVar10.Data != pFVar9; FVar10.Data = FVar10.Data + 0x38) {
      if (*(UWidgetAnimation **)FVar10.Data == (UWidgetAnimation *)0x0) {
        bVar11 = local_res10 == (UWidgetAnimation *)0x0;
      }
      else {
        bVar11 = *(UWidgetAnimation **)FVar10.Data == local_res10;
      }
      if (bVar11) goto LAB_146aa512c;
    }
    if (iVar7 == *(int *)&param_1[0x12].field_0xc) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pUVar1,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar7 + 1;
    FVar10.Data = *(FScriptContainerElement **)pUVar1 + (longlong)iVar7 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(FVar10.Data,1);
LAB_146aa512c:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(UWidgetAnimation **)FVar10.Data = pUVar6;
    FVar10.Data[8] = (FScriptContainerElement)0x5;
    UpdateCanTick((UUserWidget *)param_1);
    GetAnimationState((UUserWidget *)param_1,&local_38,pUVar6);
    if (local_38.Object != (FWidgetAnimationState *)0x0) {
      if ((local_38.Object == (FWidgetAnimationState *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = FWidgetAnimationState::GetCurrentTime(local_38.Object,&local_28);
      FVar3 = pFVar8->Time;
      FVar4 = pFVar8->Rate;
      local_res18 = FVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      iVar7 = FVar4.Denominator;
      fVar12 = ((float)((longlong)iVar7 * (longlong)FVar3.FrameNumber.Value.Value) +
               (float)iVar7 * local_res18.SubFrame) / (float)FVar4.Numerator;
      goto LAB_146aa5218;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  fVar12 = 0.0;
LAB_146aa5218:
  *(float *)param_3 = fVar12;
  return;
}

// execQueuePlayAnimation @ 146aa5240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execQueuePlayAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UObject *pUVar2;
  FProperty *pFVar3;
  UWidgetAnimation *pUVar4;
  byte bVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  TObjectPtr<UWidgetAnimation>_u_0 TVar9;
  int iVar10;
  UUMGSequenceTickManager *this;
  FQueuedWidgetAnimationTransition *pFVar11;
  ForAnyElementType this_00;
  bool bVar12;
  bool bVar13;
  byte local_res10 [16];
  int local_res20 [2];
  undefined1 local_d8 [8];
  float local_d0;
  int local_cc;
  float local_c8 [2];
  TObjectPtr<UWidgetAnimation>_u_0 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  TObjectPtr<UWidgetAnimation>_u_0 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_63;
  
  local_c0.DebugPtr = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_cc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_cc,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_cc);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_d0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  TVar9 = local_c0;
  fVar8 = local_c8[0];
  iVar7 = local_cc;
  fVar6 = local_d0;
  bVar5 = local_res10[0];
  bVar12 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_c0.DebugPtr != (UWidgetAnimation *)0x0) {
    pUVar2 = param_1 + 0x12;
    iVar10 = *(int *)&param_1[0x12].field_0x8;
    this_00.Data = *(FScriptContainerElement **)pUVar2;
    pFVar11 = (FQueuedWidgetAnimationTransition *)(this_00.Data + (longlong)iVar10 * 0x38);
    for (; (FQueuedWidgetAnimationTransition *)this_00.Data != pFVar11;
        this_00.Data = this_00.Data + 0x38) {
      pUVar4 = (((FQueuedWidgetAnimationTransition *)this_00.Data)->WidgetAnimation).field0_0x0.
               DebugPtr;
      if (pUVar4 == (UWidgetAnimation *)0x0) {
        bVar13 = local_c0.DebugPtr == (UWidgetAnimation *)0x0;
      }
      else {
        bVar13 = pUVar4 == local_c0.DebugPtr;
      }
      if (bVar13) goto LAB_146aa5459;
    }
    if (iVar10 == *(int *)&param_1[0x12].field_0xc) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,(ForAnyElementType *)pUVar2,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar10 + 1;
    this_00.Data = *(FScriptContainerElement **)pUVar2 + (longlong)iVar10 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(this_00.Data,1);
LAB_146aa5459:
    local_98.DebugPtr = (UWidgetAnimation *)0x0;
    local_90 = 6;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_63 = 0;
    FQueuedWidgetAnimationTransition::operator=
              ((FQueuedWidgetAnimationTransition *)this_00.Data,
               (FQueuedWidgetAnimationTransition *)&local_98.ObjectPtr);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
    }
    (((FQueuedWidgetAnimationTransition *)this_00.Data)->WidgetAnimation).field0_0x0.DebugPtr =
         (UWidgetAnimation *)TVar9;
    ((FQueuedWidgetAnimationTransition *)this_00.Data)->TransitionMode = Play;
    if ((TOptional<float> *)local_b8 !=
        &((FQueuedWidgetAnimationTransition *)this_00.Data)->StartAtTime) {
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->StartAtTime).TypedValue = fVar8;
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->StartAtTime).bIsSet = true;
    }
    if ((TOptional<int> *)local_b0 !=
        &((FQueuedWidgetAnimationTransition *)this_00.Data)->NumLoopsToPlay) {
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->NumLoopsToPlay).TypedValue = iVar7;
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->NumLoopsToPlay).bIsSet = true;
    }
    if ((TOptional<EUMGSequencePlayMode::Type> *)local_a8 !=
        &((FQueuedWidgetAnimationTransition *)this_00.Data)->PlayMode) {
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->PlayMode).TypedValue = (uint)bVar5;
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->PlayMode).bIsSet = true;
    }
    if ((TOptional<float> *)local_a0 !=
        &((FQueuedWidgetAnimationTransition *)this_00.Data)->PlaybackSpeed) {
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->PlaybackSpeed).TypedValue = fVar6;
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->PlaybackSpeed).bIsSet = true;
    }
    if ((TOptional<bool> *)local_d8 !=
        &((FQueuedWidgetAnimationTransition *)this_00.Data)->bRestoreState) {
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->bRestoreState).TypedValue = bVar12;
      (((FQueuedWidgetAnimationTransition *)this_00.Data)->bRestoreState).bIsSet = true;
    }
    if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
      this = UUMGSequenceTickManager::Get(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UUMGSequenceTickManager **)&param_1[0x12].field_0x20 = this;
      UUMGSequenceTickManager::AddWidget(this,(UUserWidget *)param_1);
    }
    UpdateCanTick((UUserWidget *)param_1);
  }
  return;
}

// execQueuePlayAnimationForward @ 146aa5580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execQueuePlayAnimationForward(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UObject *pUVar2;
  FProperty *pFVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  int iVar6;
  UUMGSequenceTickManager *this;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement FVar9;
  bool bVar10;
  int local_res10 [2];
  undefined4 local_res20 [2];
  FScriptContainerElement local_48 [8];
  FScriptContainerElement local_40 [8];
  UObject *local_38 [4];
  
  local_38[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_38[0];
  uVar4 = local_res20[0];
  FVar9 = (FScriptContainerElement)(local_res10[0] != 0);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38[0] != (UObject *)0x0) {
    pUVar2 = param_1 + 0x12;
    iVar6 = *(int *)&param_1[0x12].field_0x8;
    FVar8.Data = *(FScriptContainerElement **)pUVar2;
    pFVar7 = FVar8.Data + (longlong)iVar6 * 0x38;
    for (; FVar8.Data != pFVar7; FVar8.Data = FVar8.Data + 0x38) {
      if (*(UObject **)FVar8.Data == (UObject *)0x0) {
        bVar10 = local_38[0] == (UObject *)0x0;
      }
      else {
        bVar10 = *(UObject **)FVar8.Data == local_38[0];
      }
      if (bVar10) goto LAB_146aa56f4;
    }
    if (iVar6 == *(int *)&param_1[0x12].field_0xc) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pUVar2,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar6 + 1;
    FVar8.Data = *(FScriptContainerElement **)pUVar2 + (longlong)iVar6 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(FVar8.Data,1);
LAB_146aa56f4:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)FVar8.Data = pUVar5;
    FVar8.Data[8] = (FScriptContainerElement)0x2;
    if (local_40 != FVar8.Data + 0x2c) {
      *(undefined4 *)(FVar8.Data + 0x2c) = uVar4;
      FVar8.Data[0x30] = (FScriptContainerElement)0x1;
    }
    if (local_48 != FVar8.Data + 0x34) {
      FVar8.Data[0x34] = FVar9;
      FVar8.Data[0x35] = (FScriptContainerElement)0x1;
    }
    if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
      this = UUMGSequenceTickManager::Get(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UUMGSequenceTickManager **)&param_1[0x12].field_0x20 = this;
      UUMGSequenceTickManager::AddWidget(this,(UUserWidget *)param_1);
    }
    UpdateCanTick((UUserWidget *)param_1);
  }
  return;
}

// execQueuePlayAnimationReverse @ 146aa57a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execQueuePlayAnimationReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UObject *pUVar2;
  FProperty *pFVar3;
  undefined4 uVar4;
  UObject *pUVar5;
  int iVar6;
  UUMGSequenceTickManager *this;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement FVar9;
  bool bVar10;
  int local_res10 [2];
  undefined4 local_res20 [2];
  FScriptContainerElement local_48 [8];
  FScriptContainerElement local_40 [8];
  UObject *local_38 [4];
  
  local_38[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_38[0];
  uVar4 = local_res20[0];
  FVar9 = (FScriptContainerElement)(local_res10[0] != 0);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38[0] != (UObject *)0x0) {
    pUVar2 = param_1 + 0x12;
    iVar6 = *(int *)&param_1[0x12].field_0x8;
    FVar8.Data = *(FScriptContainerElement **)pUVar2;
    pFVar7 = FVar8.Data + (longlong)iVar6 * 0x38;
    for (; FVar8.Data != pFVar7; FVar8.Data = FVar8.Data + 0x38) {
      if (*(UObject **)FVar8.Data == (UObject *)0x0) {
        bVar10 = local_38[0] == (UObject *)0x0;
      }
      else {
        bVar10 = *(UObject **)FVar8.Data == local_38[0];
      }
      if (bVar10) goto LAB_146aa5914;
    }
    if (iVar6 == *(int *)&param_1[0x12].field_0xc) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pUVar2,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar6 + 1;
    FVar8.Data = *(FScriptContainerElement **)pUVar2 + (longlong)iVar6 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(FVar8.Data,1);
LAB_146aa5914:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)FVar8.Data = pUVar5;
    FVar8.Data[8] = (FScriptContainerElement)0x3;
    if (local_40 != FVar8.Data + 0x2c) {
      *(undefined4 *)(FVar8.Data + 0x2c) = uVar4;
      FVar8.Data[0x30] = (FScriptContainerElement)0x1;
    }
    if (local_48 != FVar8.Data + 0x34) {
      FVar8.Data[0x34] = FVar9;
      FVar8.Data[0x35] = (FScriptContainerElement)0x1;
    }
    if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
      this = UUMGSequenceTickManager::Get(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UUMGSequenceTickManager **)&param_1[0x12].field_0x20 = this;
      UUMGSequenceTickManager::AddWidget(this,(UUserWidget *)param_1);
    }
    UpdateCanTick((UUserWidget *)param_1);
  }
  return;
}

// execQueuePlayAnimationTimeRange @ 146aa59c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execQueuePlayAnimationTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UObject *pUVar2;
  FProperty *pFVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UObject *pUVar9;
  int iVar10;
  UUMGSequenceTickManager *this;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement FVar13;
  bool bVar14;
  byte local_res10 [16];
  int local_res20 [2];
  FScriptContainerElement local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  UObject *local_a0;
  FScriptContainerElement local_98 [8];
  FScriptContainerElement local_90 [8];
  FScriptContainerElement local_88 [8];
  FScriptContainerElement local_80 [8];
  FScriptContainerElement local_78 [64];
  
  local_a0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_ac = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar9 = local_a0;
  uVar8 = local_a4;
  uVar7 = local_a8;
  uVar6 = local_ac;
  uVar5 = local_b0;
  bVar4 = local_res10[0];
  FVar13 = (FScriptContainerElement)(local_res20[0] != 0);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a0 != (UObject *)0x0) {
    pUVar2 = param_1 + 0x12;
    iVar10 = *(int *)&param_1[0x12].field_0x8;
    FVar12.Data = *(FScriptContainerElement **)pUVar2;
    pFVar11 = FVar12.Data + (longlong)iVar10 * 0x38;
    for (; FVar12.Data != pFVar11; FVar12.Data = FVar12.Data + 0x38) {
      if (*(UObject **)FVar12.Data == (UObject *)0x0) {
        bVar14 = local_a0 == (UObject *)0x0;
      }
      else {
        bVar14 = *(UObject **)FVar12.Data == local_a0;
      }
      if (bVar14) goto LAB_146aa5c16;
    }
    if (iVar10 == *(int *)&param_1[0x12].field_0xc) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,(ForAnyElementType *)pUVar2,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar10 + 1;
    FVar12.Data = *(FScriptContainerElement **)pUVar2 + (longlong)iVar10 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(FVar12.Data,1);
LAB_146aa5c16:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    *(UObject **)FVar12.Data = pUVar9;
    FVar12.Data[8] = (FScriptContainerElement)0x1;
    if (local_98 != FVar12.Data + 0xc) {
      *(undefined4 *)(FVar12.Data + 0xc) = uVar8;
      FVar12.Data[0x10] = (FScriptContainerElement)0x1;
    }
    if (local_90 != FVar12.Data + 0x14) {
      *(undefined4 *)(FVar12.Data + 0x14) = uVar7;
      FVar12.Data[0x18] = (FScriptContainerElement)0x1;
    }
    if (local_88 != FVar12.Data + 0x1c) {
      *(undefined4 *)(FVar12.Data + 0x1c) = uVar6;
      FVar12.Data[0x20] = (FScriptContainerElement)0x1;
    }
    if (local_80 != FVar12.Data + 0x24) {
      *(uint *)(FVar12.Data + 0x24) = (uint)bVar4;
      FVar12.Data[0x28] = (FScriptContainerElement)0x1;
    }
    if (local_78 != FVar12.Data + 0x2c) {
      *(undefined4 *)(FVar12.Data + 0x2c) = uVar5;
      FVar12.Data[0x30] = (FScriptContainerElement)0x1;
    }
    if (local_b8 != FVar12.Data + 0x34) {
      FVar12.Data[0x34] = FVar13;
      FVar12.Data[0x35] = (FScriptContainerElement)0x1;
    }
    if (*(longlong *)&param_1[0x12].field_0x20 == 0) {
      this = UUMGSequenceTickManager::Get(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UUMGSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UUMGSequenceTickManager **)&param_1[0x12].field_0x20 = this;
      UUMGSequenceTickManager::AddWidget(this,(UUserWidget *)param_1);
    }
    UpdateCanTick((UUserWidget *)param_1);
  }
  return;
}

// execQueueStopAllAnimations @ 146aa5d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execQueueStopAllAnimations(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetAnimationState *this;
  Type TVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x8;
  lVar4 = *(longlong *)(param_1 + 0x12);
  lVar6 = (longlong)iVar1 * 0x38 + lVar4;
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x8 != iVar1) {
      `TCheckedPointerIterator<FQueuedWidgetAnimationTransition,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar4 == lVar6) break;
    *(undefined1 *)(lVar4 + 8) = 4;
    lVar4 = lVar4 + 0x38;
  }
  iVar1 = *(int *)&param_1[0x13].field_0x18;
  puVar5 = *(undefined8 **)&param_1[0x13].field_0x10;
  puVar7 = puVar5 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&param_1[0x13].field_0x18 != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FWidgetAnimationState,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar7) break;
    pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
    this = (FWidgetAnimationState *)*puVar5;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar3 = FWidgetAnimationState::GetPlaybackStatus(this);
    if (TVar3 == Playing) {
      QueueStopAnimation((UUserWidget *)param_1,(this->Animation).field0_0x0.DebugPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    puVar5 = puVar5 + 2;
  }
  UpdateCanTick((UUserWidget *)param_1);
  return;
}

// execQueueStopAnimation @ 146aa5e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execQueueStopAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  UObject *local_res10;
  
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
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UObject *)0x0) {
    pUVar1 = param_1 + 0x12;
    iVar4 = *(int *)&param_1[0x12].field_0x8;
    FVar6.Data = *(FScriptContainerElement **)pUVar1;
    pFVar5 = FVar6.Data + (longlong)iVar4 * 0x38;
    for (; FVar6.Data != pFVar5; FVar6.Data = FVar6.Data + 0x38) {
      if (*(UObject **)FVar6.Data == (UObject *)0x0) {
        bVar7 = local_res10 == (UObject *)0x0;
      }
      else {
        bVar7 = *(UObject **)FVar6.Data == local_res10;
      }
      if (bVar7) goto LAB_146aa5f0b;
    }
    if (iVar4 == *(int *)&param_1[0x12].field_0xc) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,(ForAnyElementType *)pUVar1,(int *)&param_1[0x12].field_0xc);
    }
    *(int *)&param_1[0x12].field_0x8 = iVar4 + 1;
    FVar6.Data = *(FScriptContainerElement **)pUVar1 + (longlong)iVar4 * 0x38;
    DefaultConstructItems<FQueuedWidgetAnimationTransition,int>(FVar6.Data,1);
LAB_146aa5f0b:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)FVar6.Data = pUVar3;
    FVar6.Data[8] = (FScriptContainerElement)0x4;
    UpdateCanTick((UUserWidget *)param_1);
  }
  return;
}

// execRegisterInputComponent @ 146aa5f50

void __cdecl UUserWidget::execRegisterInputComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2d8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146aa5f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xd98))
                (plVar1,*(undefined8 *)&param_1[0x16].field_0x8,*(code **)(*plVar1 + 0xd98));
      return;
    }
  }
  return;
}

// execRemoveExtension @ 146aa6430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execRemoveExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  UObject *local_res10;
  
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
  if (local_res10 != (UObject *)0x0) {
    puVar1 = &param_1[0x14].field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    plVar3 = *(longlong **)puVar1;
    plVar10 = plVar3;
    if (plVar3 != plVar3 + *(int *)&param_1[0x14].field_0x18) {
      while ((UObject *)*plVar10 != pUVar5) {
        plVar10 = plVar10 + 1;
        if (plVar10 == plVar3 + *(int *)&param_1[0x14].field_0x18) {
          return;
        }
      }
      uVar9 = (uint)((longlong)plVar10 - (longlong)plVar3 >> 3);
      if (uVar9 != 0xffffffff) {
        uVar11 = 0;
        if ((int)(uVar9 + 1) <= *(int *)&param_1[0x14].field_0x18) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)&param_1[0x14].field_0x18 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)(*(longlong *)puVar1 + (longlong)(int)uVar9 * 8),
                  (void *)(*(longlong *)puVar1 +
                          (longlong)(*(int *)&param_1[0x14].field_0x18 - iVar8) * 8),
                  (longlong)iVar8 << 3);
        }
        *(int *)&param_1[0x14].field_0x18 = *(int *)&param_1[0x14].field_0x18 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)puVar1,*(int *)&param_1[0x14].field_0x18,
                   (int *)&param_1[0x14].field_0x1c);
        if ((*(byte *)(param_1 + 0x15) & 0x10) != 0) {
          cVar7 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
          (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5);
          if (cVar7 != '\0') {
            UpdateCanTick((UUserWidget *)param_1);
          }
        }
      }
    }
  }
  return;
}

// execRemoveExtensions @ 146aa6610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execRemoveExtensions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  RemoveExtensions((UUserWidget *)param_1,(TSubclassOf<UUserWidgetExtension>)&local_res20);
  return;
}

// execRemoveFromViewport @ 146aa66c0

void __cdecl UUserWidget::execRemoveFromViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146aa66d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// execReverseAnimation @ 146aa6810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execReverseAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWidgetAnimation *local_res10;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  local_res10 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAnimationState((UUserWidget *)param_1,&local_18,local_res10);
  if (local_18.Object != (FWidgetAnimationState *)0x0) {
    if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::Reverse(local_18.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// execSetAlignmentInViewport @ 146aa73b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl UUserWidget::execSetAlignmentInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this;
  double local_c8;
  double dStack_c0;
  TVector2<double>_u_0 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TVector2<double>_u_0 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar2);
  if (this != (UGameViewportSubsystem *)0x0) {
    if ((param_1[6].field_0x9 & 0x20) == 0) {
      local_b8._s_0.X = 0.0;
      local_b8._s_0.Y = 0.0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      local_a8 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_a0 = _UNK_150689688;
      local_28 = 0;
      uStack_24 = CONCAT31(uStack_24._1_3_,1);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this,(FGameViewportWidgetSlot *)&local_68._s_0,(UWidget *)param_1);
      if ((local_38 == local_c8) && (dStack_30 == dStack_c0)) {
        return;
      }
      local_b8._s_0.X = local_68._s_0.X;
      local_b8._s_0.Y = local_68._s_0.Y;
      local_38 = local_c8;
      dStack_30 = dStack_c0;
      local_a8 = local_58;
      uStack_a0 = uStack_50;
    }
    local_78 = CONCAT44(uStack_24,local_28);
    local_88 = local_c8;
    dStack_80 = dStack_c0;
    local_98 = local_48;
    uStack_94 = uStack_44;
    uStack_90 = uStack_40;
    uStack_8c = uStack_3c;
    UGameViewportSubsystem::SetWidgetSlot
              (this,(UWidget *)param_1,(FGameViewportWidgetSlot *)&local_b8._s_0);
  }
  return;
}

// execSetAnchorsInViewport @ 146aa7500

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

void __cdecl UUserWidget::execSetAnchorsInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UWorld *pUVar6;
  UGameViewportSubsystem *this;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  TVector2<double>_u_0 local_c8;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  TVector2<double>_u_0 local_78;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  dVar5 = dStack_d0;
  dVar4 = local_d8;
  dVar3 = dStack_e0;
  dVar2 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar6);
  if (this != (UGameViewportSubsystem *)0x0) {
    if ((param_1[6].field_0x9 & 0x20) == 0) {
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_88 = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_84 = CONCAT31(uStack_84._1_3_,1);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this,(FGameViewportWidgetSlot *)&local_c8._s_0,(UWidget *)param_1);
      if ((((local_c8._s_0.X == dVar2) && (local_c8._s_0.Y == dVar3)) && (local_b8 == dVar4)) &&
         (dStack_b0 == dVar5)) {
        return;
      }
      local_c8._s_0.X = dVar2;
      local_c8._s_0.Y = dVar3;
      local_b8 = dVar4;
      dStack_b0 = dVar5;
    }
    local_38 = CONCAT44(uStack_84,local_88);
    local_78._s_0.X = dVar2;
    local_78._s_0.Y = dVar3;
    local_68 = dVar4;
    dStack_60 = dVar5;
    local_58 = local_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    local_48 = local_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    UGameViewportSubsystem::SetWidgetSlot
              (this,(UWidget *)param_1,(FGameViewportWidgetSlot *)&local_78._s_0);
  }
  return;
}

// execSetAnimationCurrentTime @ 146aa7670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execSetAnimationCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res10 [2];
  UWidgetAnimation *local_res20;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  local_res20 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,local_28,local_res20);
    if (local_28[0].Object != (FWidgetAnimationState *)0x0) {
      if (local_28[0].Object == (FWidgetAnimationState *)0x0) {
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
      FWidgetAnimationState::SetCurrentTime(local_28[0].Object,fVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
  }
  return;
}

// execSetColorAndOpacity @ 146aa7a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execSetColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetColorAndOpacity((UUserWidget *)param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetDesiredFocusWidget @ 146aa7ec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UUserWidget::execSetDesiredFocusWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FWeakObjectPtr FVar2;
  uint uVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  FWidgetChild *pFVar6;
  UObject *pUVar7;
  longlong local_res10;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_28;
  FWidgetChild local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(UWidgetTree **)&param_1[0x14].field_0x20 != (UWidgetTree *)0x0)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UWidgetTree::GetAllWidgets(*(UWidgetTree **)&param_1[0x14].field_0x20,&local_28);
    for (FVar5.Data = local_28.AllocatorInstance.Data;
        FVar5.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
        FVar5.Data = FVar5.Data + 8) {
      if (*(longlong *)FVar5.Data == lVar4) {
        pFVar6 = FWidgetChild::FWidgetChild
                           (&local_18,(UUserWidget *)param_1,*(FName *)(lVar4 + 0x18));
        uVar3 = (pFVar6->WidgetName).Number;
        FVar2 = (pFVar6->WidgetPtr).WeakPtr;
        *(uint *)&param_1[0x15].field_0x1c = (pFVar6->WidgetName).ComparisonIndex.Value;
        *(uint *)&param_1[0x15].field_0x20 = uVar3;
        *(FWeakObjectPtr *)&param_1[0x15].field_0x24 = FVar2;
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x15].field_0x24);
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        *(bool *)param_3 = pUVar7 != (UObject *)0x0;
        return;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetDesiredSizeInViewport @ 146aa7ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UUserWidget::execSetDesiredSizeInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this;
  FGameViewportWidgetSlot *pFVar3;
  TVector2<double>_u_0 local_128;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  FGameViewportWidgetSlot local_68;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar2);
  if (this != (UGameViewportSubsystem *)0x0) {
    if ((param_1[6].field_0x9 & 0x20) == 0) {
      local_108 = 0;
      uStack_100 = 0;
      local_88 = 0x100000000;
      local_e8 = 0x100000000;
      local_d8._s_0.X = local_78;
      local_d8._s_0.Y = dStack_70;
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      local_118 = (double)___xmm_3ff00000000000003ff0000000000000;
      dStack_110 = (double)_UNK_150689688;
      local_f8 = 0.0;
      dStack_f0 = 0.0;
      pFVar3 = UGameViewportSubsystem::SetWidgetSlotDesiredSize
                         (&local_68,(FGameViewportWidgetSlot *)&local_128._s_0,
                          (TVector2<double> *)&local_d8._s_0);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this,(FGameViewportWidgetSlot *)&local_c8._s_0,(UWidget *)param_1);
      local_128._s_0.X = local_c8._s_0.X;
      local_128._s_0.Y = local_c8._s_0.Y;
      local_108 = local_a8;
      uStack_100 = uStack_a0;
      local_118 = local_b8;
      dStack_110 = dStack_b0;
      local_e8 = local_88;
      local_d8._s_0.X = local_78;
      local_d8._s_0.Y = dStack_70;
      local_f8 = local_98;
      dStack_f0 = dStack_90;
      pFVar3 = UGameViewportSubsystem::SetWidgetSlotDesiredSize
                         (&local_68,(FGameViewportWidgetSlot *)&local_128._s_0,
                          (TVector2<double> *)&local_d8._s_0);
      local_c8._s_0.X = (pFVar3->Anchors).Minimum.field0_0x0._s_0.X;
      local_c8._s_0.Y = (pFVar3->Anchors).Minimum.field0_0x0._s_0.Y;
      local_b8 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_b0 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.Y;
      local_a8._0_4_ = (pFVar3->Offsets).Left;
      local_a8._4_4_ = (pFVar3->Offsets).Top;
      uStack_a0._0_4_ = (pFVar3->Offsets).Right;
      uStack_a0._4_4_ = (pFVar3->Offsets).Bottom;
      local_98 = (pFVar3->Alignment).field0_0x0._s_0.X;
      dStack_90 = (pFVar3->Alignment).field0_0x0._s_0.Y;
      local_88._0_4_ = pFVar3->ZOrder;
      local_88._4_1_ = pFVar3->bAutoRemoveOnWorldRemoved;
      local_88._5_3_ = *(undefined3 *)&pFVar3->field_0x45;
    }
    local_128._s_0.X = (pFVar3->Anchors).Minimum.field0_0x0._s_0.X;
    local_128._s_0.Y = (pFVar3->Anchors).Minimum.field0_0x0._s_0.Y;
    local_118 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.X;
    dStack_110 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.Y;
    local_108._0_4_ = (pFVar3->Offsets).Left;
    local_108._4_4_ = (pFVar3->Offsets).Top;
    uStack_100._0_4_ = (pFVar3->Offsets).Right;
    uStack_100._4_4_ = (pFVar3->Offsets).Bottom;
    local_f8 = (pFVar3->Alignment).field0_0x0._s_0.X;
    dStack_f0 = (pFVar3->Alignment).field0_0x0._s_0.Y;
    local_e8._0_4_ = pFVar3->ZOrder;
    local_e8._4_1_ = pFVar3->bAutoRemoveOnWorldRemoved;
    local_e8._5_3_ = *(undefined3 *)&pFVar3->field_0x45;
    UGameViewportSubsystem::SetWidgetSlot
              (this,(UWidget *)param_1,(FGameViewportWidgetSlot *)&local_128._s_0);
  }
  return;
}

// execSetForegroundColor @ 146aa8570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execSetForegroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  FLinearColor_u_0 local_28;
  uint local_18;
  
  local_48 = ___xmm_3f8000003f800000000000003f800000;
  uStack_40 = _UNK_15090c6d8;
  local_38 = local_38 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._0_8_ = local_48;
  local_28._8_8_ = uStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  SetForegroundColor((UUserWidget *)param_1,(FSlateColor *)&local_28._s_0);
  return;
}

// execSetInputActionBlocking @ 146aa8c40

void __cdecl UUserWidget::execSetInputActionBlocking(UObject *param_1,FFrame *param_2,void *param_3)

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
  lVar2 = *(longlong *)&param_1[0x16].field_0x8;
  if (lVar2 != 0) {
    param_1[0x11].field_0x24 = param_1[0x11].field_0x24 & 0xfd;
    param_1[0x11].field_0x24 = param_1[0x11].field_0x24 | (local_res8[0] != 0) * '\x02';
    *(byte *)(lVar2 + 0x144) = *(byte *)(lVar2 + 0x144) & 0xfe;
    *(byte *)(lVar2 + 0x144) = *(byte *)(lVar2 + 0x144) | local_res8[0] != 0;
  }
  return;
}

// execSetInputActionPriority @ 146aa8cf0

void __cdecl UUserWidget::execSetInputActionPriority(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x16].field_0x8;
  if (lVar2 != 0) {
    *(undefined4 *)&param_1[0x11].field_0x20 = local_res8[0];
    *(undefined4 *)(lVar2 + 0x140) = local_res8[0];
  }
  return;
}

// execSetNumLoopsToPlay @ 146aa9510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execSetNumLoopsToPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int local_res10 [2];
  UWidgetAnimation *local_res20;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  local_res20 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAnimationState((UUserWidget *)param_1,&local_18,local_res20);
  if (local_18.Object != (FWidgetAnimationState *)0x0) {
    if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::SetNumLoopsToPlay(local_18.Object,iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// execSetOwningPlayer @ 146aa9710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UUserWidget::execSetOwningPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  APlayerController *pAVar6;
  char cVar7;
  FLocalPlayerContext *pFVar8;
  APlayerController *local_res10 [3];
  FLocalPlayerContext local_18;
  
  local_res10[0] = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pAVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (APlayerController *)0x0) {
    cVar7 = (**(code **)(local_res10[0]->_padding_ + 0x7f0))(local_res10[0]);
    if (cVar7 != '\0') {
      (**(code **)(*(longlong *)param_1 + 0x4d0))(param_1);
      pFVar8 = FLocalPlayerContext::FLocalPlayerContext(&local_18,pAVar6);
      iVar3 = (pFVar8->LocalPlayer).WeakPtr.ObjectSerialNumber;
      iVar4 = (pFVar8->World).WeakPtr.ObjectIndex;
      iVar5 = (pFVar8->World).WeakPtr.ObjectSerialNumber;
      lVar2 = *(longlong *)param_1;
      *(int *)&param_1[0x16].field_0x20 = (pFVar8->LocalPlayer).WeakPtr.ObjectIndex;
      *(int *)&param_1[0x16].field_0x24 = iVar3;
      *(int *)(param_1 + 0x17) = iVar4;
      *(int *)&param_1[0x17].field_0x4 = iVar5;
      *(undefined8 *)&param_1[0x17].field_0x8 = 0;
      (**(code **)(lVar2 + 0x4c8))(param_1);
    }
  }
  return;
}

// execSetPadding @ 146aa97e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_28;
  FMargin local_18;
  
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Left = local_28.Left;
  local_18.Top = local_28.Top;
  local_18.Right = local_28.Right;
  local_18.Bottom = local_28.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPadding((UUserWidget *)param_1,&local_18);
  return;
}

// execSetPlaybackSpeed @ 146aa9bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execSetPlaybackSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float local_res10 [2];
  UWidgetAnimation *local_res20;
  TSharedPtr<FWidgetAnimationState,1> local_28 [2];
  
  local_res20 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAnimationState((UUserWidget *)param_1,local_28,local_res20);
  if (local_28[0].Object != (FWidgetAnimationState *)0x0) {
    if (local_28[0].Object == (FWidgetAnimationState *)0x0) {
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
    FWidgetAnimationState::SetPlaybackSpeed(local_28[0].Object,fVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// execSetPositionInViewport @ 146aa9d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __cdecl UUserWidget::execSetPositionInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this;
  FGameViewportWidgetSlot *pFVar3;
  bool bVar4;
  int local_res8 [2];
  TVector2<double>_u_0 local_138;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  TVector2<double>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  double local_88;
  double dStack_80;
  FGameViewportWidgetSlot local_78;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
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
  pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this = UGameViewportSubsystem::Get(pUVar2);
  if (this != (UGameViewportSubsystem *)0x0) {
    if ((param_1[6].field_0x9 & 0x20) == 0) {
      local_118 = 0;
      uStack_110 = 0;
      local_98 = 0x100000000;
      local_f8 = 0x100000000;
      local_e8._s_0.X = local_88;
      local_e8._s_0.Y = dStack_80;
      local_138._s_0.X = 0.0;
      local_138._s_0.Y = 0.0;
      local_128 = (double)___xmm_3ff00000000000003ff0000000000000;
      dStack_120 = (double)_UNK_150689688;
      local_108 = 0.0;
      dStack_100 = 0.0;
      pFVar3 = UGameViewportSubsystem::SetWidgetSlotPosition
                         (&local_78,(FGameViewportWidgetSlot *)&local_138._s_0,(UWidget *)param_1,
                          (TVector2<double> *)&local_e8._s_0,bVar4);
    }
    else {
      UGameViewportSubsystem::GetWidgetSlot
                (this,(FGameViewportWidgetSlot *)&local_d8._s_0,(UWidget *)param_1);
      local_138._s_0.X = local_d8._s_0.X;
      local_138._s_0.Y = local_d8._s_0.Y;
      local_118 = local_b8;
      uStack_110 = uStack_b0;
      local_128 = local_c8;
      dStack_120 = dStack_c0;
      local_f8 = local_98;
      local_e8._s_0.X = local_88;
      local_e8._s_0.Y = dStack_80;
      local_108 = local_a8;
      dStack_100 = dStack_a0;
      pFVar3 = UGameViewportSubsystem::SetWidgetSlotPosition
                         (&local_78,(FGameViewportWidgetSlot *)&local_138._s_0,(UWidget *)param_1,
                          (TVector2<double> *)&local_e8._s_0,bVar4);
      local_d8._s_0.X = (pFVar3->Anchors).Minimum.field0_0x0._s_0.X;
      local_d8._s_0.Y = (pFVar3->Anchors).Minimum.field0_0x0._s_0.Y;
      local_c8 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.X;
      dStack_c0 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.Y;
      local_b8._0_4_ = (pFVar3->Offsets).Left;
      local_b8._4_4_ = (pFVar3->Offsets).Top;
      uStack_b0._0_4_ = (pFVar3->Offsets).Right;
      uStack_b0._4_4_ = (pFVar3->Offsets).Bottom;
      local_a8 = (pFVar3->Alignment).field0_0x0._s_0.X;
      dStack_a0 = (pFVar3->Alignment).field0_0x0._s_0.Y;
      local_98._0_4_ = pFVar3->ZOrder;
      local_98._4_1_ = pFVar3->bAutoRemoveOnWorldRemoved;
      local_98._5_3_ = *(undefined3 *)&pFVar3->field_0x45;
    }
    local_138._s_0.X = (pFVar3->Anchors).Minimum.field0_0x0._s_0.X;
    local_138._s_0.Y = (pFVar3->Anchors).Minimum.field0_0x0._s_0.Y;
    local_128 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.X;
    dStack_120 = (pFVar3->Anchors).Maximum.field0_0x0._s_0.Y;
    local_118._0_4_ = (pFVar3->Offsets).Left;
    local_118._4_4_ = (pFVar3->Offsets).Top;
    uStack_110._0_4_ = (pFVar3->Offsets).Right;
    uStack_110._4_4_ = (pFVar3->Offsets).Bottom;
    local_108 = (pFVar3->Alignment).field0_0x0._s_0.X;
    dStack_100 = (pFVar3->Alignment).field0_0x0._s_0.Y;
    local_f8._0_4_ = pFVar3->ZOrder;
    local_f8._4_1_ = pFVar3->bAutoRemoveOnWorldRemoved;
    local_f8._5_3_ = *(undefined3 *)&pFVar3->field_0x45;
    UGameViewportSubsystem::SetWidgetSlot
              (this,(UWidget *)param_1,(FGameViewportWidgetSlot *)&local_138._s_0);
  }
  return;
}

// execStopAllAnimations @ 146aaae70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execStopAllAnimations(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopAllAnimations((UUserWidget *)param_1);
  return;
}

// execStopAnimation @ 146aaae90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UUserWidget::execStopAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWidgetAnimation *local_res8;
  TSharedPtr<FWidgetAnimationState,1> local_18;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[0xc].field_0x20 = 0;
  if (local_res8 != (UWidgetAnimation *)0x0) {
    GetAnimationState((UUserWidget *)param_1,&local_18,local_res8);
    if (local_18.Object != (FWidgetAnimationState *)0x0) {
      if (local_18.Object == (FWidgetAnimationState *)0x0) {
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
      FWidgetAnimationState::Stop(local_18.Object);
      UpdateCanTick((UUserWidget *)param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execStopAnimationsAndLatentActions @ 146aaaf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserWidget::execStopAnimationsAndLatentActions(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopAllAnimations((UUserWidget *)param_1);
  CancelLatentActions((UUserWidget *)param_1);
  return;
}

// execStopListeningForAllInputActions @ 146aaafd0

void __cdecl
UUserWidget::execStopListeningForAllInputActions(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
    iVar1 = *(int *)(*(longlong *)&param_1[0x16].field_0x8 + 0x128);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      UInputComponent::RemoveActionBinding(*(UInputComponent **)&param_1[0x16].field_0x8,iVar1);
    }
    if ((*(longlong *)&param_1[0x16].field_0x8 != 0) &&
       (plVar2 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1),
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0xda0))(plVar2,*(undefined8 *)&param_1[0x16].field_0x8);
    }
    (**(code **)(**(longlong **)&param_1[0x16].field_0x8 + 0x508))();
    UObjectBaseUtility::MarkAsGarbage(*(UObjectBaseUtility **)&param_1[0x16].field_0x8);
    *(undefined8 *)&param_1[0x16].field_0x8 = 0;
  }
  return;
}

// execStopListeningForInputAction @ 146aab090

void __cdecl
UUserWidget::execStopListeningForInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char local_res8 [8];
  longlong local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar5 = local_res10;
  cVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x16].field_0x8 != 0) &&
     (uVar8 = *(int *)(*(longlong *)&param_1[0x16].field_0x8 + 0x128) - 1, -1 < (int)uVar8)) {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      lVar2 = *(longlong *)&param_1[0x16].field_0x8;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar2 + 0x128)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar9 + *(longlong *)(lVar2 + 0x120));
      if ((*(longlong *)(lVar2 + 4) == lVar5) && (*(char *)(lVar2 + 2) == cVar4)) {
        UInputComponent::RemoveActionBinding(*(UInputComponent **)&param_1[0x16].field_0x8,uVar8);
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// execUnbindAllFromAnimationFinished @ 146aab710

void __cdecl
UUserWidget::execUnbindAllFromAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res8;
  <lambda_1> local_res10;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.InAnimation = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindAllFromAnimationFinished_::__l2::<lambda_1>_>
            ((TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *)&param_1[0x16].field_0x10
             ,&local_res10);
  return;
}

// execUnbindAllFromAnimationStarted @ 146aab7b0

void __cdecl
UUserWidget::execUnbindAllFromAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res8;
  <lambda_1> local_res10;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10.InAnimation = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindAllFromAnimationStarted_::__l2::<lambda_1>_>
            ((TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *)&param_1[0x16].field_0x10
             ,&local_res10);
  return;
}

// execUnbindFromAnimationFinished @ 146aab850

void __cdecl
UUserWidget::execUnbindFromAnimationFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res8;
  FReadAccessScope local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  undefined8 local_38;
  undefined8 local_30;
  FWidgetAnimationDynamicEvent local_28;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_38 = 0;
  local_30 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_28._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_40,&local_58);
  local_28._8_8_ = local_38;
  local_28._16_8_ = local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  local_58.DestructionSentinel._0_8_ = local_res8;
  local_58.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)&local_28;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindFromAnimationFinished_::__l2::<lambda_1>_>
            ((TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *)&param_1[0x16].field_0x10
             ,(<lambda_1> *)&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  return;
}

// execUnbindFromAnimationStarted @ 146aab980

void __cdecl
UUserWidget::execUnbindFromAnimationStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidgetAnimation *local_res8;
  FReadAccessScope local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  undefined8 local_38;
  undefined8 local_30;
  FWidgetAnimationDynamicEvent local_28;
  
  local_res8 = (UWidgetAnimation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_38 = 0;
  local_30 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_28._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_40,&local_58);
  local_28._8_8_ = local_38;
  local_28._16_8_ = local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  local_58.DestructionSentinel._0_8_ = local_res8;
  local_58.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)&local_28;
  TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_>::
  RemoveAll<_UUserWidget::UnbindFromAnimationStarted_::__l2::<lambda_1>_>
            ((TArray<FAnimationEventBinding,TSizedDefaultAllocator<32>_> *)&param_1[0x16].field_0x10
             ,(<lambda_1> *)&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  return;
}

// execUnregisterInputComponent @ 146aabca0

void __cdecl
UUserWidget::execUnregisterInputComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2d8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146aabcef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xda0))
                (plVar1,*(undefined8 *)&param_1[0x16].field_0x8,*(code **)(*plVar1 + 0xda0));
      return;
    }
  }
  return;
}

// operator() @ 1504f76b0

bool __thiscall `UUserWidget::ClearStoppedAnimationStates'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279341845>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279341845>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f76f0

bool __thiscall
`UUserWidget::ConditionalTearDownAnimations'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279339639>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279339639>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f7770

bool __thiscall `UUserWidget::TearDownAnimations'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279339657>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279339657>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f77b0

bool __thiscall `UUserWidget::NativeTick'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279341125>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279341125>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f7850

bool __thiscall `UUserWidget::SetContentForSlot'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279340330>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279340330>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f7890

bool __thiscall `UUserWidget::TickActionsAndAnimation'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279341172>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279341172>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f78d0

bool __thiscall `UUserWidget::CreateInstanceInternal'::__l8::<lambda_1>::operator()(void *this)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  uVar8 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1168331920279341805>);
  if (bVar5) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    puVar2 = *(ulonglong **)this;
    uVar3 = *puVar2;
    if ((uVar3 != 0) && (pUVar7 = UUserWidget::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(uVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar8 = *puVar2;
      }
    }
    local_res18 = *(FName *)(uVar8 + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    uVar8 = 3;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1168331920279341805>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504f79d7;
    }
  }
  bVar5 = false;
LAB_1504f79d7:
  if (((uVar8 & 2) != 0) &&
     (uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd),
     local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (((uVar8 & 1) != 0) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

