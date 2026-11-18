// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 13

// GetDebugName @ 14a6dece0

wchar_t * __thiscall FEnhancedInputWorldProcessor::GetDebugName(FEnhancedInputWorldProcessor *this)

{
  return L"EnhancedInputWorldPreprocessor";
}

// HandleAnalogInputEvent @ 14a6e3190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleAnalogInputEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  float fVar1;
  longlong lVar2;
  FKey local_78;
  FInputKeyEventArgs local_58;
  
  local_78.KeyName = (FName)param_2->_padding_;
  lVar2 = param_2->_padding_;
  fVar1 = param_2->AnalogValue;
  local_78.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_78,IE_Pressed,fVar1,1,(FInputDeviceId)(int)lVar2,false,
             (FViewport *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleKeyDownEvent @ 14a6e3290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleKeyDownEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  longlong lVar1;
  bool bVar2;
  FKey local_88;
  FKey local_70;
  FInputKeyEventArgs local_58;
  
  local_70.KeyName = (param_2->Key).KeyName;
  lVar1 = param_2->_padding_;
  local_70.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_70.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_70.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = FKey::IsAnalog(&local_70);
  local_88.KeyName = (param_2->Key).KeyName;
  local_88.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_88.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_88.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_88,IE_Pressed,__real_3f800000,(uint)bVar2,(FInputDeviceId)(int)lVar1,
             false,(FViewport *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleKeyUpEvent @ 14a6e33b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleKeyUpEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  longlong lVar1;
  bool bVar2;
  FKey local_88;
  FKey local_70;
  FInputKeyEventArgs local_58;
  
  local_70.KeyName = (param_2->Key).KeyName;
  lVar1 = param_2->_padding_;
  local_70.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_70.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_70.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = FKey::IsAnalog(&local_70);
  local_88.KeyName = (param_2->Key).KeyName;
  local_88.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_88.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_88.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_88,IE_Released,0.0,(uint)bVar2,(FInputDeviceId)(int)lVar1,false,
             (FViewport *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleMouseButtonDoubleClickEvent @ 14a6e34d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleMouseButtonDoubleClickEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  longlong lVar2;
  FKey local_78;
  FInputKeyEventArgs local_58;
  
  local_78.KeyName = (param_2->EffectingButton).KeyName;
  bVar1 = param_2->bIsTouchEvent;
  lVar2 = param_2->_padding_;
  local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_78,IE_DoubleClick,__real_3f800000,0,(FInputDeviceId)(int)lVar2,bVar1,
             (FViewport *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleMouseButtonDownEvent @ 14a6e35a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleMouseButtonDownEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  longlong lVar2;
  FKey local_78;
  FInputKeyEventArgs local_58;
  
  local_78.KeyName = (param_2->EffectingButton).KeyName;
  bVar1 = param_2->bIsTouchEvent;
  lVar2 = param_2->_padding_;
  local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_78,IE_Pressed,__real_3f800000,0,(FInputDeviceId)(int)lVar2,bVar1,
             (FViewport *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleMouseButtonUpEvent @ 14a6e3670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleMouseButtonUpEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  longlong lVar2;
  FKey local_78;
  FInputKeyEventArgs local_58;
  
  local_78.KeyName = (param_2->EffectingButton).KeyName;
  bVar1 = param_2->bIsTouchEvent;
  lVar2 = param_2->_padding_;
  local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_58,&local_78,IE_Released,0.0,0,(FInputDeviceId)(int)lVar2,bVar1,(FViewport *)0x0
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
  local_58.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// HandleMouseMoveEvent @ 14a6e3740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleMouseMoveEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  int *piVar1;
  float fVar2;
  
  fVar2 = *(float *)&(param_2->CursorDelta).field_0x4;
  (this->CachedCursorDelta).field0_0x0._s_0.X = (double)*(float *)&param_2->CursorDelta;
  (this->CachedCursorDelta).field0_0x0._s_0.Y = (double)fVar2;
  (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X =
       (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X + 1;
  piVar1 = &(this->NumCursorSamplesThisFrame).field0_0x0._s_0.Y;
  *piVar1 = *piVar1 + 1;
  return false;
}

// HandleMouseWheelOrGestureEvent @ 14a6e3770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnhancedInputWorldProcessor::HandleMouseWheelOrGestureEvent
          (FEnhancedInputWorldProcessor *this,FSlateApplication *param_1,FPointerEvent *param_2,
          FPointerEvent *param_3)

{
  FKey *pFVar1;
  FInputKeyEventArgs local_c8;
  FInputKeyEventArgs local_78;
  FKey local_28;
  
  pFVar1 = &EKeys::MouseScrollUp;
  if (*(float *)&(param_2->WheelOrGestureDelta).field_0x4 < 0.0) {
    pFVar1 = &EKeys::MouseScrollDown;
  }
  local_28.KeyName = pFVar1->KeyName;
  local_28.KeyDetails.Object = (pFVar1->KeyDetails).Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (pFVar1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyEventArgs::CreateSimulated
            (&local_78,&local_28,IE_Pressed,__real_3f800000,0,
             (FInputDeviceId)(int)param_2->_padding_,param_2->bIsTouchEvent,(FViewport *)0x0);
  local_c8.Viewport = local_78.Viewport;
  local_c8.ControllerId = local_78.ControllerId;
  local_c8.InputDevice.InternalId = local_78.InputDevice.InternalId;
  local_c8.Key.KeyName = local_78.Key.KeyName;
  local_c8.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  local_c8.Key.KeyDetails.Object = local_78.Key.KeyDetails.Object;
  local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8.NumSamples = local_78.NumSamples;
  local_c8.bIsTouchEvent = local_78.bIsTouchEvent;
  local_c8.bIsSimulatedInput = local_78.bIsSimulatedInput;
  local_c8.EventTimestamp = local_78.EventTimestamp;
  local_c8.AmountDepressed = local_78.AmountDepressed;
  local_c8.Event = IE_Released;
  local_78.DeltaTime = local_c8.DeltaTime;
  InputKeyToSubsystem(this,&local_78);
  InputKeyToSubsystem(this,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  FInputKeyEventArgs::CreateSimulated
            (&local_c8,&EKeys::MouseWheelAxis,IE_Axis,
             *(float *)&(param_2->WheelOrGestureDelta).field_0x4,1,
             (FInputDeviceId)(int)param_2->_padding_,param_2->bIsTouchEvent,(FViewport *)0x0);
  local_c8.DeltaTime = (float)(param_1->CurrentTime - param_1->LastTickTime);
  InputKeyToSubsystem(this,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return false;
}

// InputKeyToSubsystem @ 14a6e55e0

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

bool __thiscall
FEnhancedInputWorldProcessor::InputKeyToSubsystem
          (FEnhancedInputWorldProcessor *this,FInputKeyEventArgs *param_1)

{
  UWorldSubsystem *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 local_res18 [8];
  FString local_38;
  TObjectIterator<UEnhancedInputWorldSubsystem> local_28;
  
  bVar10 = 0;
  pUVar7 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  if ((*(byte *)((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x20) != 0) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = UEnhancedInputWorldSubsystem::StaticClass();
    GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(&local_28);
    while ((lVar9 = (longlong)local_28.Index, -1 < local_28.Index &&
           (local_28.Index < local_28.ObjectArray.ArrayNum))) {
      uVar6 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = *(UWorldSubsystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
      if (this_00[7]._padding_ == 0) {
        local_res18[0] = 0;
        `UEnhancedInputWorldSubsystem::InputKey'::__l2::<lambda_1>::operator()(local_res18);
        TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(&local_28);
      }
      else {
        if (6 < (byte)LogWorldSubsystemInput._0_1_) {
          FKey::ToString(&param_1->Key,&local_38);
          pUVar8 = UWorldSubsystem::GetWorld(this_00);
          ::LexToString((uint)(pUVar8->WorldType).Value);
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogWorldSubsystemInput);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        bVar4 = (**(code **)(*(longlong *)this_00[7]._padding_ + 0x2b8))
                          ((longlong *)this_00[7]._padding_,param_1);
        bVar10 = bVar10 | bVar4;
        TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(&local_28);
      }
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return (bool)bVar10;
}

// ProcessAccumulatedPointerInput @ 14a6eb050

void __thiscall
FEnhancedInputWorldProcessor::ProcessAccumulatedPointerInput
          (FEnhancedInputWorldProcessor *this,float param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  int *piVar2;
  undefined1 local_res10 [24];
  FInputKeyEventArgs local_68;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,local_res10);
  FInputKeyEventArgs::CreateSimulated
            (&local_68,&EKeys::MouseX,IE_Axis,(float)(this->CachedCursorDelta).field0_0x0._s_0.X,
             (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X,(FInputDeviceId)*piVar2,false,
             (FViewport *)0x0);
  local_68.DeltaTime = param_1;
  InputKeyToSubsystem(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,local_res10);
  FInputKeyEventArgs::CreateSimulated
            (&local_68,&EKeys::MouseY,IE_Axis,(float)(this->CachedCursorDelta).field0_0x0._s_0.Y,
             (this->NumCursorSamplesThisFrame).field0_0x0._s_0.Y,(FInputDeviceId)*piVar2,false,
             (FViewport *)0x0);
  local_68.DeltaTime = param_1;
  InputKeyToSubsystem(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  (this->NumCursorSamplesThisFrame).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->CachedCursorDelta).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// Tick @ 14a6fb9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEnhancedInputWorldProcessor::Tick
          (FEnhancedInputWorldProcessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  IPlatformInputDeviceMapper *pIVar1;
  int *piVar2;
  undefined1 local_res10 [24];
  FInputKeyEventArgs local_68;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,local_res10);
  FInputKeyEventArgs::CreateSimulated
            (&local_68,&EKeys::MouseX,IE_Axis,(float)(this->CachedCursorDelta).field0_0x0._s_0.X,
             (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X,(FInputDeviceId)*piVar2,false,
             (FViewport *)0x0);
  local_68.DeltaTime = param_1;
  InputKeyToSubsystem(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,local_res10);
  FInputKeyEventArgs::CreateSimulated
            (&local_68,&EKeys::MouseY,IE_Axis,(float)(this->CachedCursorDelta).field0_0x0._s_0.Y,
             (this->NumCursorSamplesThisFrame).field0_0x0._s_0.Y,(FInputDeviceId)*piVar2,false,
             (FViewport *)0x0);
  local_68.DeltaTime = param_1;
  InputKeyToSubsystem(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  (this->NumCursorSamplesThisFrame).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->CachedCursorDelta).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateCachedPointerPosition @ 14a6ffee0

void __thiscall
FEnhancedInputWorldProcessor::UpdateCachedPointerPosition
          (FEnhancedInputWorldProcessor *this,FPointerEvent *param_1)

{
  int *piVar1;
  float fVar2;
  
  fVar2 = *(float *)&(param_1->CursorDelta).field_0x4;
  (this->CachedCursorDelta).field0_0x0._s_0.X = (double)*(float *)&param_1->CursorDelta;
  (this->CachedCursorDelta).field0_0x0._s_0.Y = (double)fVar2;
  (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X =
       (this->NumCursorSamplesThisFrame).field0_0x0._s_0.X + 1;
  piVar1 = &(this->NumCursorSamplesThisFrame).field0_0x0._s_0.Y;
  *piVar1 = *piVar1 + 1;
  return;
}

