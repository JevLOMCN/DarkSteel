// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 16

// FCommonInputPreprocessor @ 14a771840

FCommonInputPreprocessor * __thiscall
FCommonInputPreprocessor::FCommonInputPreprocessor
          (FCommonInputPreprocessor *this,UCommonInputSubsystem *param_1)

{
  *(undefined8 *)&(this->OnGamepadChangeDetected).field_0x18 = 2;
  this->_padding_ = (longlong)&___7FCommonInputPreprocessor__6B_;
  *(undefined8 *)&this->OnGamepadChangeDetected = 0;
  *(undefined8 *)&(this->OnGamepadChangeDetected).field_0x8 = 0;
  *(undefined8 *)&(this->OnGamepadChangeDetected).field_0x10 = 0;
  this->bIgnoreNextMove = false;
  this->InputSubsystem = param_1;
  *(undefined8 *)this->FilterInputTypeWithReasons = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[0].field_0x8 = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[0].field_0x20 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x28 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x2c = 0x80;
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x34 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x30 = 0xffffffff;
  *(undefined8 *)&this->FilterInputTypeWithReasons[0].field_0x40 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x48 = 0;
  *(undefined8 *)(this->FilterInputTypeWithReasons + 1) = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[1].field_0x8 = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[1].field_0x20 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x28 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x2c = 0x80;
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x34 = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[1].field_0x40 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x48 = 0;
  *(undefined8 *)(this->FilterInputTypeWithReasons + 2) = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[2].field_0x8 = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[2].field_0x20 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x28 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x2c = 0x80;
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x34 = 0;
  *(undefined8 *)&this->FilterInputTypeWithReasons[2].field_0x40 = 0;
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x48 = 0;
  (this->LastSeenGamepadInputDeviceName).ComparisonIndex = 0;
  (this->LastSeenGamepadInputDeviceName).Number = 0;
  (this->LastSeenGamepadHardwareDeviceIdentifier).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LastSeenGamepadHardwareDeviceIdentifier).Data.ArrayNum = 0;
  (this->LastSeenGamepadHardwareDeviceIdentifier).Data.ArrayMax = 0;
  this->InputMethodPermissions[0] = false;
  this->InputMethodPermissions[1] = false;
  this->InputMethodPermissions[2] = false;
  return this;
}

// ~FCommonInputPreprocessor @ 14a7723f0

void __thiscall FCommonInputPreprocessor::~FCommonInputPreprocessor(FCommonInputPreprocessor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->LastSeenGamepadHardwareDeviceIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->FilterInputTypeWithReasons[2].field_0x48 = 0;
  pvVar2 = *(void **)&this->FilterInputTypeWithReasons[2].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FilterInputTypeWithReasons + 2));
  *(undefined4 *)&this->FilterInputTypeWithReasons[1].field_0x48 = 0;
  pvVar2 = *(void **)&this->FilterInputTypeWithReasons[1].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->FilterInputTypeWithReasons + 1));
  *(undefined4 *)&this->FilterInputTypeWithReasons[0].field_0x48 = 0;
  pvVar2 = *(void **)&this->FilterInputTypeWithReasons[0].field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->FilterInputTypeWithReasons);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGamepadChangeDetected).field_0x8,
             *(int *)&(this->OnGamepadChangeDetected).field_0x10);
  pvVar2 = *(void **)&(this->OnGamepadChangeDetected).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGamepadChangeDetected);
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  return;
}

// GetDebugName @ 14a775230

wchar_t * __thiscall FCommonInputPreprocessor::GetDebugName(FCommonInputPreprocessor *this)

{
  return L"CommonInput";
}

// GetInputType @ 14a7757a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ECommonInputType __thiscall
FCommonInputPreprocessor::GetInputType(FCommonInputPreprocessor *this,FKey *param_1)

{
  bool bVar1;
  ECommonInputType EVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_b8 [32];
  FKey local_78;
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  FName local_48;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *local_38;
  FName local_30;
  FKeyDetails *local_28;
  TReferenceControllerBase<1> *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar1 = FKey::IsGamepadKey(param_1);
  if ((bVar1) || (this->InputSubsystem->bIsGamepadSimulatedClick != false)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_78.KeyName = EKeys::Android_Back.KeyName;
      local_78.KeyDetails.Object = EKeys::Android_Back.KeyDetails.Object;
      local_78.KeyDetails.SharedReferenceCount =
           (FSharedReferencer<1>)
           EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Android_Back.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = EKeys::Android_Menu.KeyName;
      local_58 = EKeys::Android_Menu.KeyDetails.Object;
      local_50 = EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Android_Menu.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = EKeys::Android_Volume_Down.KeyName;
      local_40 = EKeys::Android_Volume_Down.KeyDetails.Object;
      local_38 = EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Android_Volume_Down.KeyDetails.SharedReferenceCount.ReferenceController)
                   ->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = EKeys::Android_Volume_Up.KeyName;
      local_28 = EKeys::Android_Volume_Up.KeyDetails.Object;
      local_20 = EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Android_Volume_Up.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      PhysicalMobileKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      PhysicalMobileKeys.ArrayNum = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,4,0,&PhysicalMobileKeys.AllocatorInstance,4,&PhysicalMobileKeys.ArrayMax);
      ConstructItems<FKey,FKey,int>(PhysicalMobileKeys.AllocatorInstance.Data,&local_78,4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
      atexit(`UCommonInputSubsystem::IsMobileGamepadKey'::__l2::
             _dynamic_atexit_destructor_for__PhysicalMobileKeys__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((FName *)PhysicalMobileKeys.AllocatorInstance.Data !=
        (FName *)(PhysicalMobileKeys.AllocatorInstance.Data +
                 (longlong)PhysicalMobileKeys.ArrayNum * 0x18)) {
      FVar3.Data = PhysicalMobileKeys.AllocatorInstance.Data;
      do {
        if (*(FName *)FVar3.Data == param_1->KeyName) {
          return Touch;
        }
        FVar3.Data = FVar3.Data + 0x18;
      } while ((FName *)FVar3.Data !=
               (FName *)(PhysicalMobileKeys.AllocatorInstance.Data +
                        (longlong)PhysicalMobileKeys.ArrayNum * 0x18));
    }
    EVar2 = Gamepad;
  }
  else {
    EVar2 = MouseAndKeyboard;
  }
  return EVar2;
}

// GetInputType @ 14a775a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECommonInputType __thiscall
FCommonInputPreprocessor::GetInputType(FCommonInputPreprocessor *this,FPointerEvent *param_1)

{
  UGameViewportClient *this_00;
  bool bVar1;
  ULocalPlayer *pUVar2;
  FSlateApplication *this_01;
  
  pUVar2 = ULocalPlayerSubsystem::GetLocalPlayerChecked<ULocalPlayer>
                     ((ULocalPlayerSubsystem *)this->InputSubsystem);
  if (param_1->bIsTouchEvent != false) {
    return Touch;
  }
  if (this->InputSubsystem->bIsGamepadSimulatedClick == false) {
    this_00 = (pUVar2->ViewportClient).field0_0x0.DebugPtr;
    if ((this_00 != (UGameViewportClient *)0x0) &&
       (bVar1 = UGameViewportClient::GetUseMouseForTouch(this_00), bVar1)) {
      return Touch;
    }
    this_01 = FSlateApplication::Get();
    bVar1 = FSlateApplication::IsFakingTouchEvents(this_01);
    return -bVar1 & Touch;
  }
  return Gamepad;
}

// HandleAnalogInputEvent @ 14a776400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleAnalogInputEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  ECommonInputType EVar1;
  bool bVar2;
  FKey local_28;
  
  local_28.KeyName = (FName)param_2->_padding_;
  local_28.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  EVar1 = GetInputType(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  bVar2 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar1);
  if ((bVar2) && (this->InputMethodPermissions[EVar1] != false)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// HandleKeyDownEvent @ 14a7764a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleKeyDownEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  ECommonInputType EVar1;
  bool bVar2;
  FKey local_28;
  
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
  EVar1 = GetInputType(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  bVar2 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar1);
  if (bVar2) {
    if (this->InputMethodPermissions[EVar1] != false) {
      return true;
    }
    RefreshCurrentInputMethod(this,EVar1);
  }
  return false;
}

// HandleMouseButtonDoubleClickEvent @ 14a776550

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleMouseButtonDoubleClickEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  ECommonInputType EVar1;
  bool bVar2;
  
  EVar1 = GetInputType(this,param_2);
  bVar2 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar1);
  if (bVar2) {
    if (this->InputMethodPermissions[EVar1] != false) {
      return true;
    }
    RefreshCurrentInputMethod(this,EVar1);
  }
  return false;
}

// HandleMouseButtonDownEvent @ 14a7765d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleMouseButtonDownEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  ECommonInputType EVar1;
  bool bVar2;
  
  EVar1 = GetInputType(this,param_2);
  bVar2 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar1);
  if (bVar2) {
    if (this->InputMethodPermissions[EVar1] != false) {
      return true;
    }
    RefreshCurrentInputMethod(this,EVar1);
  }
  return false;
}

// HandleMouseMoveEvent @ 14a776650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleMouseMoveEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  ECommonInputType EVar1;
  bool bVar2;
  
  EVar1 = GetInputType(this,param_2);
  bVar2 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar1);
  if (bVar2) {
    if (this->bIgnoreNextMove == false) {
      if ((__real_38d1b717 <
           (float)(*(uint *)&param_2->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
         (__real_38d1b717 <
          (float)(*(uint *)&(param_2->CursorDelta).field_0x4 &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        if (this->InputMethodPermissions[EVar1] != false) {
          return true;
        }
        RefreshCurrentInputMethod(this,EVar1);
      }
    }
    else {
      this->bIgnoreNextMove = false;
    }
  }
  return false;
}

// HandleMouseWheelOrGestureEvent @ 14a776700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonInputPreprocessor::HandleMouseWheelOrGestureEvent
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FPointerEvent *param_2,
          FPointerEvent *param_3)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  ECommonInputType EVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (param_3 != (FPointerEvent *)0x0) {
    param_2 = param_3;
  }
  EVar3 = GetInputType(this,param_2);
  bVar4 = IsRelevantInput(this,param_1,(FInputEvent *)param_2,EVar3);
  pTVar2 = CVarShouldMouseWheelAndGestureRefreshInputMethod.Ref;
  if (bVar4) {
    if (this->InputMethodPermissions[EVar3] != false) {
      return true;
    }
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (pTVar2->ShadowedValue[0] != false) {
      RefreshCurrentInputMethod(this,EVar3);
    }
  }
  return false;
}

// IsInputMethodBlocked @ 14a777140

bool __thiscall
FCommonInputPreprocessor::IsInputMethodBlocked
          (FCommonInputPreprocessor *this,ECommonInputType param_1)

{
  return this->InputMethodPermissions[param_1];
}

// IsRelevantInput @ 14a777380

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
FCommonInputPreprocessor::IsRelevantInput
          (FCommonInputPreprocessor *this,FSlateApplication *param_1,FInputEvent *param_2,
          ECommonInputType param_3)

{
  char cVar1;
  UCommonInputSettings *pUVar2;
  ULocalPlayer *pUVar3;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 8))(param_1);
  if (((cVar1 == '\0') && (param_1->bHandleDeviceInputWhenApplicationNotActive == false)) &&
     ((pUVar2 = ICommonInputModule::GetSettings(), pUVar2->bAllowOutOfFocusDeviceInput == false ||
      (param_3 != Gamepad)))) {
    return false;
  }
  pUVar3 = ULocalPlayerSubsystem::GetLocalPlayerChecked<ULocalPlayer>
                     ((ULocalPlayerSubsystem *)this->InputSubsystem);
  return pUVar3->ControllerId == param_2->UserIndex;
}

// RefreshCurrentInputMethod @ 14a7783d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCommonInputPreprocessor::RefreshCurrentInputMethod
          (FCommonInputPreprocessor *this,ECommonInputType param_1)

{
  FName *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  UCommonInputSubsystem *this_00;
  FName FVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  UCommonInputSettings *pUVar13;
  UClass *this_01;
  UCommonInputPlatformSettings *pUVar14;
  FInputDeviceScope *pFVar15;
  uint uVar16;
  longlong lVar17;
  FName local_res8;
  FString local_48;
  FDestructionSentinel local_38;
  
  this_00 = this->InputSubsystem;
  if (((this_00->RawInputType != param_1) || (this_00->bInputMethodLockedByThrashing != false)) &&
     (bVar8 = UCommonInputSubsystem::PlatformSupportsInputType(this_00,param_1), bVar8)) {
    this_00->RawInputType = param_1;
    bVar8 = UCommonInputSubsystem::CheckForInputMethodThrashing(this_00,param_1);
    this_00->bInputMethodLockedByThrashing = bVar8;
    if (!bVar8) {
      UCommonInputSubsystem::RecalculateCurrentInputType(this_00);
    }
  }
  if ((param_1 == Gamepad) &&
     (pUVar13 = ICommonInputModule::GetSettings(),
     pUVar13->bEnableAutomaticGamepadTypeDetection != false)) {
    this_01 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pUVar14 = UPlatformSettingsManager::GetSettingsForPlatform<UCommonInputPlatformSettings>
                        ((UPlatformSettingsManager *)
                         (this_01->ClassDefaultObject).field0_0x0.DebugPtr);
    if ((pUVar14->bCanChangeGamepadType != false) &&
       (pFVar15 = FInputDeviceScope::GetCurrent(), pFVar15 != (FInputDeviceScope *)0x0)) {
      pFVar1 = &pFVar15->InputDeviceName;
      if (*pFVar1 == this->LastSeenGamepadInputDeviceName) {
        iVar11 = (pFVar15->HardwareDeviceIdentifier).Data.ArrayNum;
        iVar3 = (this->LastSeenGamepadHardwareDeviceIdentifier).Data.ArrayNum;
        if (iVar11 == iVar3) {
          if (iVar11 < 2) {
            return;
          }
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)
                              (pFVar15->HardwareDeviceIdentifier).Data.AllocatorInstance.Data,
                              (wchar_t *)
                              (this->LastSeenGamepadHardwareDeviceIdentifier).Data.AllocatorInstance
                              .Data);
          bVar8 = iVar11 == 0;
        }
        else {
          bVar8 = iVar11 + iVar3 == 1;
        }
        if (bVar8) {
          return;
        }
      }
      this->LastSeenGamepadInputDeviceName = *pFVar1;
      ::FString::operator=
                (&this->LastSeenGamepadHardwareDeviceIdentifier,&pFVar15->HardwareDeviceIdentifier);
      FVar4 = this->InputSubsystem->GamepadInputType;
      pUVar14 = UCommonInputPlatformSettings::Get();
      UCommonInputPlatformSettings::GetBestGamepadNameForHardware
                (pUVar14,(FName)&local_res8,FVar4,(FString *)*pFVar1);
      if (local_res8 != FVar4) {
        if (4 < (byte)LogCommonInput._0_1_) {
          ::FName::ToString(&local_res8,&local_48);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonInput);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        UCommonInputSubsystem::SetGamepadInputType(this->InputSubsystem,local_res8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnGamepadChangeDetected,(FWriteAccessScope *)&local_38);
        puVar2 = &(this->OnGamepadChangeDetected).field_0x1c;
        *(int *)puVar2 = *(int *)puVar2 + 1;
        bVar8 = false;
        uVar16 = *(int *)&(this->OnGamepadChangeDetected).field_0x10 - 1;
        if (-1 < (int)uVar16) {
          lVar17 = (longlong)(int)uVar16 << 4;
          bVar8 = false;
          do {
            uVar12 = 0;
            if ((int)uVar16 < *(int *)&(this->OnGamepadChangeDetected).field_0x10) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = *(longlong *)&(this->OnGamepadChangeDetected).field_0x8;
            if (((*(int *)(lVar17 + 8 + lVar5) == 0) ||
                (plVar6 = *(longlong **)(lVar17 + lVar5), plVar6 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar6 + 0x68))(), cVar10 == '\0')) {
              bVar8 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar16 = uVar16 - 1;
          } while (-1 < (int)uVar16);
        }
        puVar2 = &(this->OnGamepadChangeDetected).field_0x1c;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnGamepadChangeDetected,false);
        }
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
    }
  }
  return;
}

// SetInputTypeFilter @ 14a778c50

void __thiscall
FCommonInputPreprocessor::SetInputTypeFilter
          (FCommonInputPreprocessor *this,ECommonInputType param_1,FName param_2,bool param_3)

{
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool *pbVar4;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  byte bVar17;
  undefined1 local_res10 [8];
  FName local_res18;
  undefined1 local_res20 [8];
  undefined4 uStack_9c;
  TPairInitializer<FName_const_&,bool_const_&> local_98;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName *local_58;
  undefined1 *local_50;
  
  pbVar4 = (bool *)(ulonglong)param_1;
  local_58 = &local_res18;
  local_50 = local_res20;
  this_00 = (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
             *)(this->FilterInputTypeWithReasons + (longlong)pbVar4);
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_98.Value = pbVar4;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,bool_const_&>_>(this_00,&local_98,(bool *)&local_58);
  iVar2 = *(int *)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x28;
  TStack_80.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x10;
  iVar12 = 0;
  bVar17 = false;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_80.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a778d3d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_98.Key._4_4_ = (int)lVar9;
    iVar8 = local_98.Key._4_4_ + -1 + iVar14;
    if (iVar2 < iVar8) {
      iVar8 = iVar2;
    }
  }
LAB_14a778d3d:
  uVar11 = *(uint *)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x28;
  puVar16 = &this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iVar8;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uVar7,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_80._28_4_ = iVar8;
  TStack_80.BaseBitIndex = iVar14;
  uStack_60 = CONCAT44(uStack_9c,
                       *(int *)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x8 -
                       *(int *)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x34);
  local_88 = this_00;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&this->FilterInputTypeWithReasons[(longlong)pbVar4].field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar16;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a778e40;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14a778e40:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar5 == this_00)
       ) break;
    bVar17 = bVar17 | *(byte *)(*(longlong *)&pTVar5->Elements + 8 +
                               (longlong)TStack_80.CurrentBitIndex * 0x14);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  (local_98.Value + 0x31)[(longlong)this] = (bool)bVar17;
  return;
}

// Tick @ 14a7792f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCommonInputPreprocessor::Tick
          (FCommonInputPreprocessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

