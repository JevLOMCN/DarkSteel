// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// HandleAnalogInputEvent @ 147becee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleAnalogInputEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,
          FAnalogInputEvent *param_2)

{
  longlong lVar1;
  FKey local_28;
  
  if (__real_38d1b717 < (float)((uint)param_2->AnalogValue & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    local_28.KeyName = (FName)param_2->_padding_;
    lVar1 = param_2->_padding_;
    local_28.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)param_2->_padding_;
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  }
  return false;
}

// HandleKeyDownEvent @ 147bed230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleKeyDownEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  longlong lVar1;
  FKey local_28;
  
  lVar1 = param_2->_padding_;
  local_28.KeyName = (param_2->Key).KeyName;
  local_28.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  return false;
}

// HandleMouseButtonDoubleClickEvent @ 147bed740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleMouseButtonDoubleClickEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  longlong lVar1;
  FKey local_28;
  
  lVar1 = param_2->_padding_;
  local_28.KeyName = (param_2->EffectingButton).KeyName;
  local_28.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  return false;
}

// HandleMouseButtonDownEvent @ 147bed790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleMouseButtonDownEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  longlong lVar1;
  FKey local_28;
  
  lVar1 = param_2->_padding_;
  local_28.KeyName = (param_2->EffectingButton).KeyName;
  local_28.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  return false;
}

// HandleMouseMoveEvent @ 147bed7e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleMouseMoveEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  longlong lVar1;
  FKey local_28;
  
  if ((__real_38d1b717 <
       (float)(*(uint *)&param_2->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     (__real_38d1b717 <
      (float)(*(uint *)&(param_2->CursorDelta).field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    local_28.KeyName = (param_2->EffectingButton).KeyName;
    lVar1 = param_2->_padding_;
    local_28.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  }
  return false;
}

// HandleMouseWheelOrGestureEvent @ 147bed860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInputDeviceSubsystemProcessor::HandleMouseWheelOrGestureEvent
          (FInputDeviceSubsystemProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2,
          FPointerEvent *param_3)

{
  longlong lVar1;
  FKey local_28;
  
  lVar1 = param_2->_padding_;
  local_28.KeyName = (param_2->EffectingButton).KeyName;
  local_28.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  UpdateLatestDevice(this,&local_28,(FInputDeviceId)(int)lVar1);
  return false;
}

// Tick @ 147c05310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputDeviceSubsystemProcessor::Tick
          (FInputDeviceSubsystemProcessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateLatestDevice @ 147c0b1b0

void __thiscall
FInputDeviceSubsystemProcessor::UpdateLatestDevice
          (FInputDeviceSubsystemProcessor *this,FKey *param_1,FInputDeviceId param_2)

{
  bool bVar1;
  UInputDeviceSubsystem *this_00;
  FInputDeviceScope *pFVar2;
  UInputPlatformSettings *this_01;
  FHardwareDeviceIdentifier *pFVar3;
  wchar_t *pwVar4;
  FName local_res10;
  FHardwareDeviceIdentifier local_28;
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 == (UInputDeviceSubsystem *)0x0) goto LAB_147c0b28d;
  pFVar2 = FInputDeviceScope::GetCurrent();
  if (pFVar2 == (FInputDeviceScope *)0x0) {
    bVar1 = FKey::IsGamepadKey(param_1);
    if (bVar1) goto LAB_147c0b28d;
    UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_28,param_2);
    bVar1 = FHardwareDeviceIdentifier::operator==(&local_28,&FHardwareDeviceIdentifier::Invalid);
    if (!bVar1) goto LAB_147c0b28d;
    pFVar3 = &FHardwareDeviceIdentifier::DefaultKeyboardAndMouse;
  }
  else {
    if ((pFVar2->HardwareDeviceIdentifier).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->HardwareDeviceIdentifier).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,pwVar4);
    this_01 = UInputPlatformSettings::Get();
    pFVar3 = UInputPlatformSettings::GetHardwareDeviceForClassName(this_01,local_res10);
    if (pFVar3 == (FHardwareDeviceIdentifier *)0x0) {
      FHardwareDeviceIdentifier::FHardwareDeviceIdentifier
                (&local_28,pFVar2->InputDeviceName,local_res10,Unspecified,Unspecified);
      pFVar3 = &local_28;
    }
  }
  UInputDeviceSubsystem::SetMostRecentlyUsedHardwareDevice(this_00,param_2,pFVar3);
LAB_147c0b28d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

