// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 112

// StaticClass @ 147d5a940

UClass * __cdecl UKismetInputLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetInputLibrary",
               &Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton,
               StaticRegisterNativesUKismetInputLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetInputLibrary>,
               InternalVTableHelperCtorCaller<UKismetInputLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton;
}

// UKismetInputLibrary @ 147d7a030

UKismetInputLibrary * __thiscall
UKismetInputLibrary::UKismetInputLibrary(UKismetInputLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetInputLibrary__6B_;
  return this;
}

// UKismetInputLibrary @ 147d7a060

UKismetInputLibrary * __thiscall
UKismetInputLibrary::UKismetInputLibrary(UKismetInputLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetInputLibrary__6B_;
  return this;
}

// ~UKismetInputLibrary @ 147d7ba70

void __thiscall UKismetInputLibrary::~UKismetInputLibrary(UKismetInputLibrary *this)

{
  *(undefined ***)this = &___7UKismetInputLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CalibrateTilt @ 147d8c1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UKismetInputLibrary::CalibrateTilt(void)

{
  code *UNRECOVERED_JUMPTABLE;
  UEngine *pUVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pUVar1 = GEngine;
  UNRECOVERED_JUMPTABLE = *(code **)(GEngine->_padding_ + 8);
  pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Could not recover jumptable at 0x000147d8c22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&pUVar1->_padding_,0,L"CALIBRATEMOTION",pFVar2);
  return;
}

// EqualEqual_InputChordInputChord @ 147d99df0

bool __cdecl
UKismetInputLibrary::EqualEqual_InputChordInputChord(FInputChord *param_1,FInputChord *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if ((param_1->Key).KeyName == (param_2->Key).KeyName) {
    uVar1 = *(undefined4 *)&param_1->field_0x18;
    uVar2 = *(undefined4 *)&param_2->field_0x18;
    if ((((((ZPULL(uVar1,0,1) ^ ZPULL(uVar2,0,1)) & 1) == 0) && (((uVar1 ^ uVar2) & 2) == 0)) &&
        (((uVar1 ^ uVar2) & 4) == 0)) && (((uVar1 ^ uVar2) & 8) == 0)) {
      bVar3 = true;
      goto LAB_147d99e3a;
    }
  }
  bVar3 = false;
LAB_147d99e3a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// EqualEqual_KeyKey @ 147d99e60

bool __cdecl UKismetInputLibrary::EqualEqual_KeyKey(FKey *param_1,FKey *param_2)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = param_2->KeyName;
  FVar2 = param_1->KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return FVar2 == FVar1;
}

// GetAnalogValue @ 147da3ec0

float __cdecl UKismetInputLibrary::GetAnalogValue(FAnalogInputEvent *param_1)

{
  return param_1->AnalogValue;
}

// GetKey @ 147da6370

FKey * __cdecl UKismetInputLibrary::GetKey(FKey *__return_storage_ptr__,FKeyEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->KeyName = (param_1->Key).KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetModifierKeysState @ 147da68e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateModifierKeysState __cdecl UKismetInputLibrary::GetModifierKeysState(void)

{
  ushort uVar1;
  FModifierKeysState FVar2;
  FSlateApplication *this;
  undefined6 extraout_var;
  byte bVar3;
  byte bVar4;
  byte *in_RCX;
  bool bVar5;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this = FSlateApplication::Get();
    FVar2 = FSlateApplication::GetModifierKeys(this);
    uVar1 = *(ushort *)CONCAT62(extraout_var,FVar2);
    bVar5 = (uVar1 & 0xc) != 0;
    bVar4 = bVar5 | 2;
    if ((uVar1 & 0x30) == 0) {
      bVar4 = bVar5;
    }
    bVar3 = bVar4 | 4;
    if ((uVar1 & 3) == 0) {
      bVar3 = bVar4;
    }
    bVar4 = bVar3 | 8;
    if ((uVar1 & 0xc0) == 0) {
      bVar4 = bVar3;
    }
    *in_RCX = bVar4;
    return (FSlateModifierKeysState)(uchar)in_RCX;
  }
  *in_RCX = 0;
  return (FSlateModifierKeysState)(uchar)in_RCX;
}

// GetPrivateStaticClass @ 147da7e70

UClass * __cdecl UKismetInputLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetInputLibrary",
               &Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton,
               StaticRegisterNativesUKismetInputLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetInputLibrary>,
               InternalVTableHelperCtorCaller<UKismetInputLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetInputLibrary.InnerSingleton;
}

// GetUserIndex @ 147daa270

int __cdecl UKismetInputLibrary::GetUserIndex(FKeyEvent *param_1)

{
  return *(int *)((longlong)&param_1->_padding_ + 4);
}

// InputChord_GetDisplayName @ 147dace10

FText * __cdecl
UKismetInputLibrary::InputChord_GetDisplayName(FText *__return_storage_ptr__,FInputChord *param_1)

{
  FInputChord::GetInputText(param_1,__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// InputEvent_IsAltDown @ 147dace40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsAltDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftAltDown != 0 || (param_1->ModifierKeys).bIsRightAltDown != 0
  ;
}

// InputEvent_IsCommandDown @ 147dace50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsCommandDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftCommandDown != 0 ||
         (param_1->ModifierKeys).bIsRightCommandDown != 0;
}

// InputEvent_IsControlDown @ 147dace60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsControlDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftControlDown != 0 ||
         (param_1->ModifierKeys).bIsRightControlDown != 0;
}

// InputEvent_IsLeftAltDown @ 147dace70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsLeftAltDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftAltDown;
}

// InputEvent_IsLeftCommandDown @ 147dace80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsLeftCommandDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftCommandDown;
}

// InputEvent_IsLeftControlDown @ 147dace90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsLeftControlDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftControlDown;
}

// InputEvent_IsLeftShiftDown @ 147dacea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsLeftShiftDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftShiftDown;
}

// InputEvent_IsRepeat @ 147daceb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsRepeat(FInputEvent *param_1)

{
  return param_1->bIsRepeat;
}

// InputEvent_IsRightAltDown @ 147dacec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsRightAltDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsRightAltDown;
}

// InputEvent_IsRightCommandDown @ 147daced0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsRightCommandDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsRightCommandDown;
}

// InputEvent_IsRightControlDown @ 147dacee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsRightControlDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsRightControlDown;
}

// InputEvent_IsRightShiftDown @ 147dacef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsRightShiftDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsRightShiftDown;
}

// InputEvent_IsShiftDown @ 147dacf00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UKismetInputLibrary::InputEvent_IsShiftDown(FInputEvent *param_1)

{
  return (param_1->ModifierKeys).bIsLeftShiftDown != 0 ||
         (param_1->ModifierKeys).bIsRightShiftDown != 0;
}

// Key_GetDisplayName @ 147db1940

FText * __cdecl
UKismetInputLibrary::Key_GetDisplayName(FText *__return_storage_ptr__,FKey *param_1,bool param_2)

{
  FKey::GetDisplayName(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Key_GetNavigationAction @ 147db1970

/* WARNING: Enum "Type": Some values do not have unique names */

EUINavigationAction __cdecl UKismetInputLibrary::Key_GetNavigationAction(FKey *param_1)

{
  EUINavigationAction EVar1;
  FSlateApplication *pFVar2;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000147db199d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*(longlong *)pFVar2 + 0xb8))
                      (pFVar2,param_1,*(code **)(*(longlong *)pFVar2 + 0xb8));
    return EVar1;
  }
  return Invalid;
}

// Key_GetNavigationActionFromKey @ 147db19b0

/* WARNING: Enum "Type": Some values do not have unique names */

EUINavigationAction __cdecl UKismetInputLibrary::Key_GetNavigationActionFromKey(FKeyEvent *param_1)

{
  EUINavigationAction EVar1;
  FSlateApplication *pFVar2;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000147db19dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*(longlong *)pFVar2 + 0xb0))
                      (pFVar2,param_1,*(code **)(*(longlong *)pFVar2 + 0xb0));
    return EVar1;
  }
  return Invalid;
}

// Key_GetNavigationDirectionFromAnalog @ 147db19f0

/* WARNING: Enum "Type": Some values do not have unique names */

EUINavigation __cdecl
UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(FAnalogInputEvent *param_1)

{
  EUINavigation EVar1;
  FSlateApplication *pFVar2;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000147db1a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*(longlong *)pFVar2 + 0xa8))
                      (pFVar2,param_1,*(code **)(*(longlong *)pFVar2 + 0xa8));
    return EVar1;
  }
  return Invalid;
}

// Key_GetNavigationDirectionFromKey @ 147db1a30

/* WARNING: Enum "Type": Some values do not have unique names */

EUINavigation __cdecl UKismetInputLibrary::Key_GetNavigationDirectionFromKey(FKeyEvent *param_1)

{
  EUINavigation EVar1;
  FSlateApplication *pFVar2;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000147db1a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(*(longlong *)pFVar2 + 0xa0))
                      (pFVar2,param_1,*(code **)(*(longlong *)pFVar2 + 0xa0));
    return EVar1;
  }
  return Invalid;
}

// Key_IsAnalog @ 147db1a70

bool __cdecl UKismetInputLibrary::Key_IsAnalog(FKey *param_1)

{
  EInputAxisType EVar1;
  FKeyDetails *pFVar2;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar2 = (param_1->KeyDetails).Object;
  if ((pFVar2 != (FKeyDetails *)0x0) &&
     ((EVar1 = pFVar2->AxisType, EVar1 == Axis1D || ((byte)(EVar1 - Axis2D) < 2)))) {
    return true;
  }
  return false;
}

// Key_IsAxis1D @ 147db1a80

bool __cdecl UKismetInputLibrary::Key_IsAxis1D(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis1D;
  }
  return false;
}

// Key_IsAxis2D @ 147db1a90

bool __cdecl UKismetInputLibrary::Key_IsAxis2D(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis2D;
  }
  return false;
}

// Key_IsAxis3D @ 147db1aa0

bool __cdecl UKismetInputLibrary::Key_IsAxis3D(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Axis3D;
  }
  return false;
}

// Key_IsButtonAxis @ 147db1ab0

bool __cdecl UKismetInputLibrary::Key_IsButtonAxis(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->AxisType == Button;
  }
  return false;
}

// Key_IsDigital @ 147db1ac0

bool __cdecl UKismetInputLibrary::Key_IsDigital(FKey *param_1)

{
  EInputAxisType EVar1;
  FKeyDetails *pFVar2;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar2 = (param_1->KeyDetails).Object;
  if (((pFVar2 != (FKeyDetails *)0x0) && (EVar1 = pFVar2->AxisType, EVar1 != Axis1D)) &&
     (1 < (byte)(EVar1 - Axis2D))) {
    return true;
  }
  return false;
}

// Key_IsGamepadKey @ 147db1ad0

bool __cdecl UKismetInputLibrary::Key_IsGamepadKey(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsGamepadKey;
  }
  return false;
}

// Key_IsKeyboardKey @ 147db1ae0

bool __cdecl UKismetInputLibrary::Key_IsKeyboardKey(FKey *param_1)

{
  bool bVar1;
  
  bVar1 = FKey::IsBindableInBlueprints(param_1);
  if (bVar1) {
    bVar1 = FKey::IsGamepadKey(param_1);
    if (!bVar1) {
      bVar1 = FKey::IsMouseButton(param_1);
      if (!bVar1) {
        bVar1 = FKey::IsTouch(param_1);
        if (!bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// Key_IsModifierKey @ 147db1b30

bool __cdecl UKismetInputLibrary::Key_IsModifierKey(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsModifierKey;
  }
  return false;
}

// Key_IsMouseButton @ 147db1b40

bool __cdecl UKismetInputLibrary::Key_IsMouseButton(FKey *param_1)

{
  FKeyDetails *pFVar1;
  
  FKey::ConditionalLookupKeyDetails(param_1);
  pFVar1 = (param_1->KeyDetails).Object;
  if (pFVar1 != (FKeyDetails *)0x0) {
    return pFVar1->bIsMouseButton;
  }
  return false;
}

// Key_IsValid @ 147db1b50

bool __cdecl UKismetInputLibrary::Key_IsValid(FKey *param_1)

{
  if (param_1->KeyName != (FName)0x0) {
    FKey::ConditionalLookupKeyDetails(param_1);
    return (param_1->KeyDetails).Object != (FKeyDetails *)0x0;
  }
  return false;
}

// ModifierKeysState_IsAltDown @ 147db7ab0

bool __cdecl UKismetInputLibrary::ModifierKeysState_IsAltDown(FSlateModifierKeysState *param_1)

{
  return (bool)(param_1->ModifierKeysStateMask >> 1 & 1);
}

// ModifierKeysState_IsCommandDown @ 147db7ac0

bool __cdecl UKismetInputLibrary::ModifierKeysState_IsCommandDown(FSlateModifierKeysState *param_1)

{
  return (bool)(param_1->ModifierKeysStateMask >> 3 & 1);
}

// ModifierKeysState_IsControlDown @ 147db7ad0

bool __cdecl UKismetInputLibrary::ModifierKeysState_IsControlDown(FSlateModifierKeysState *param_1)

{
  return (bool)(param_1->ModifierKeysStateMask & 1);
}

// ModifierKeysState_IsShiftDown @ 147db7ae0

bool __cdecl UKismetInputLibrary::ModifierKeysState_IsShiftDown(FSlateModifierKeysState *param_1)

{
  return (bool)(param_1->ModifierKeysStateMask >> 2 & 1);
}

// PointerEvent_GetCursorDelta @ 147db8c20

TVector2<double> * __cdecl
UKismetInputLibrary::PointerEvent_GetCursorDelta
          (TVector2<double> *__return_storage_ptr__,FPointerEvent *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&(param_1->CursorDelta).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&param_1->CursorDelta;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// PointerEvent_GetEffectingButton @ 147db8c50

FKey * __cdecl
UKismetInputLibrary::PointerEvent_GetEffectingButton
          (FKey *__return_storage_ptr__,FPointerEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->KeyName = (param_1->EffectingButton).KeyName;
  (__return_storage_ptr__->KeyDetails).Object = (param_1->EffectingButton).KeyDetails.Object;
  pTVar1 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// PointerEvent_GetGestureDelta @ 147db8c80

TVector2<double> * __cdecl
UKismetInputLibrary::PointerEvent_GetGestureDelta
          (TVector2<double> *__return_storage_ptr__,FPointerEvent *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&(param_1->WheelOrGestureDelta).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&param_1->WheelOrGestureDelta;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// PointerEvent_GetGestureType @ 147db8cb0

ESlateGesture __cdecl UKismetInputLibrary::PointerEvent_GetGestureType(FPointerEvent *param_1)

{
  switch(param_1->GestureType) {
  default:
    return None;
  case Scroll:
    return Scroll;
  case Magnify:
    return Magnify;
  case Swipe:
    return Swipe;
  case Rotate:
    return Rotate;
  case LongPress:
    return LongPress;
  }
}

// PointerEvent_GetLastScreenSpacePosition @ 147db8d00

TVector2<double> * __cdecl
UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition
          (TVector2<double> *__return_storage_ptr__,FPointerEvent *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&(param_1->LastScreenSpacePosition).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&param_1->LastScreenSpacePosition;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// PointerEvent_GetPointerIndex @ 147db8d30

int __cdecl UKismetInputLibrary::PointerEvent_GetPointerIndex(FPointerEvent *param_1)

{
  return param_1->PointerIndex;
}

// PointerEvent_GetScreenSpacePosition @ 147db8d40

TVector2<double> * __cdecl
UKismetInputLibrary::PointerEvent_GetScreenSpacePosition
          (TVector2<double> *__return_storage_ptr__,FPointerEvent *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&(param_1->ScreenSpacePosition).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&param_1->ScreenSpacePosition;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// PointerEvent_GetTouchpadIndex @ 147db8d70

int __cdecl UKismetInputLibrary::PointerEvent_GetTouchpadIndex(FPointerEvent *param_1)

{
  return param_1->TouchpadIndex;
}

// PointerEvent_GetUserIndex @ 147db8d80

int __cdecl UKismetInputLibrary::PointerEvent_GetUserIndex(FPointerEvent *param_1)

{
  return *(int *)((longlong)&param_1->_padding_ + 4);
}

// PointerEvent_GetWheelDelta @ 147db8d90

float __cdecl UKismetInputLibrary::PointerEvent_GetWheelDelta(FPointerEvent *param_1)

{
  return *(float *)&(param_1->WheelOrGestureDelta).field_0x4;
}

// PointerEvent_IsMouseButtonDown @ 147db8da0

bool __cdecl
UKismetInputLibrary::PointerEvent_IsMouseButtonDown(FPointerEvent *param_1,FKey *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  pTVar1 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  FVar2 = param_2->KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = param_1->PressedButtons;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
    FVar5 = (pTVar3->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&pTVar3->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(pTVar3->HashSize - 1U & FVar2.Number + uVar4) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(FName *)((longlong)iVar6 * 0x20 + *(longlong *)&pTVar3->Elements) == FVar2)
        goto LAB_147db8e2b;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&pTVar3->Elements);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_147db8e2b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return iVar6 != -1;
}

// PointerEvent_IsTouchEvent @ 147db8e70

bool __cdecl UKismetInputLibrary::PointerEvent_IsTouchEvent(FPointerEvent *param_1)

{
  return param_1->bIsTouchEvent;
}

// StaticRegisterNativesUKismetInputLibrary @ 147dc4110

void __cdecl UKismetInputLibrary::StaticRegisterNativesUKismetInputLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x35;
  local_18.DataPtr = Z_Construct_UClass_UKismetInputLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCalibrateTilt @ 147dd9c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UKismetInputLibrary::execCalibrateTilt(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  UEngine *pUVar1;
  FOutputDeviceRedirector *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GEngine;
  UNRECOVERED_JUMPTABLE = *(code **)(GEngine->_padding_ + 8);
  pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Could not recover jumptable at 0x000147dd9c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&pUVar1->_padding_,0,L"CALIBRATEMOTION",pFVar2);
  return;
}

// execEqualEqual_InputChordInputChord @ 147df1070

void __cdecl
UKismetInputLibrary::execEqualEqual_InputChordInputChord
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSharedReferencer<1> FVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  FInputChord local_48;
  FInputChord local_28;
  
  FInputChord::FInputChord(&local_28);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FInputChord::FInputChord(&local_48);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar2.ReferenceController = local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = local_48._24_4_ & 0xf;
  if (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = local_28._24_4_ & 0xf;
  if ((((local_28.Key.KeyName == local_48.Key.KeyName) &&
       (((local_28.bShift ^ local_48.bShift) & 1) == 0)) && (((uVar3 ^ uVar4) & 2) == 0)) &&
     ((((uVar3 ^ uVar4) & 4) == 0 && (((uVar3 ^ uVar4) & 0xfffffff8) == 0)))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  *(undefined1 *)param_3 = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execEqualEqual_KeyKey @ 147df1370

void __cdecl
UKismetInputLibrary::execEqualEqual_KeyKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong local_38 [2];
  TReferenceControllerBase<1> *pTStack_28;
  longlong local_20 [2];
  TReferenceControllerBase<1> *pTStack_10;
  
  local_20[0] = 0;
  local_20[1] = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  lVar4 = local_20[0];
  pTVar3 = pTStack_28;
  lVar2 = local_38[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(bool *)param_3 = lVar4 == lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execGetAnalogValue @ 147df7180

void __cdecl UKismetInputLibrary::execGetAnalogValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnalogInputEvent *pFVar2;
  FModifierKeysState local_res10 [4];
  FKey local_78;
  FAnalogInputEvent local_58;
  
  local_78.KeyName.ComparisonIndex.Value = 0;
  local_78.KeyName.Number = 0;
  INSERT(local_res10[0],0,8,1);
  INSERT(local_res10[0],0,7,1);
  INSERT(local_res10[0],0,6,1);
  INSERT(local_res10[0],0,5,1);
  INSERT(local_res10[0],0,4,1);
  INSERT(local_res10[0],0,3,1);
  INSERT(local_res10[0],0,2,1);
  INSERT(local_res10[0],0,1,1);
  INSERT(local_res10[0],0,0,1);
  local_78.KeyDetails.Object = (FKeyDetails *)0x0;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FKeyEvent::FKeyEvent((FKeyEvent *)&local_58,&local_78,local_res10,0,false,0,0);
  local_58.AnalogValue = 0.0;
  local_58._padding_ = (longlong)&___7FAnalogInputEvent__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar2 = &local_58;
  if ((FAnalogInputEvent *)param_2->MostRecentPropertyAddress != (FAnalogInputEvent *)0x0) {
    pFVar2 = (FAnalogInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = pFVar2->AnalogValue;
  FAnalogInputEvent::~FAnalogInputEvent(&local_58);
  return;
}

// execGetKey @ 147dfb010

void __cdecl UKismetInputLibrary::execGetKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FKeyEvent *pFVar3;
  FKeyDetails *local_70;
  FSharedReferencer<1> local_68 [2];
  FKeyEvent local_58;
  
  FKeyEvent::FKeyEvent(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar3 = &local_58;
  if ((FKeyEvent *)param_2->MostRecentPropertyAddress != (FKeyEvent *)0x0) {
    pFVar3 = (FKeyEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68[0].ReferenceController =
       (pFVar3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (pFVar3->Key).KeyName;
  local_70 = (pFVar3->Key).KeyDetails.Object;
  if (local_68[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_68[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FName *)param_3 = FVar2;
  if ((FKeyDetails **)((longlong)param_3 + 8) != &local_70) {
    *(FKeyDetails **)((longlong)param_3 + 8) = local_70;
    local_70 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68[0].ReferenceController);
  FKeyEvent::~FKeyEvent(&local_58);
  return;
}

// execGetModifierKeysState @ 147dfbec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execGetModifierKeysState(UObject *param_1,FFrame *param_2,void *param_3)

{
  ushort uVar1;
  FModifierKeysState FVar2;
  FSlateApplication *this;
  undefined6 extraout_var;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this = FSlateApplication::Get();
    FVar2 = FSlateApplication::GetModifierKeys(this);
    uVar1 = *(ushort *)CONCAT62(extraout_var,FVar2);
    bVar5 = (uVar1 & 0xc) != 0;
    bVar4 = bVar5 | 2;
    if ((uVar1 & 0x30) == 0) {
      bVar4 = bVar5;
    }
    bVar3 = bVar4 | 4;
    if ((uVar1 & 3) == 0) {
      bVar3 = bVar4;
    }
    bVar4 = bVar3 | 8;
    if ((uVar1 & 0xc0) == 0) {
      bVar4 = bVar3;
    }
    *(byte *)param_3 = bVar4;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetUserIndex @ 147e00690

void __cdecl UKismetInputLibrary::execGetUserIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FKeyEvent *pFVar2;
  FKeyEvent local_58;
  
  FKeyEvent::FKeyEvent(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar2 = &local_58;
  if ((FKeyEvent *)param_2->MostRecentPropertyAddress != (FKeyEvent *)0x0) {
    pFVar2 = (FKeyEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)((longlong)&pFVar2->_padding_ + 4);
  FKeyEvent::~FKeyEvent(&local_58);
  return;
}

// execInputChord_GetDisplayName @ 147e02d00

void __cdecl
UKismetInputLibrary::execInputChord_GetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputChord *this;
  FText local_38;
  FInputChord local_28;
  
  FInputChord::FInputChord(&local_28);
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
  this = &local_28;
  if ((FInputChord *)param_2->MostRecentPropertyAddress != (FInputChord *)0x0) {
    this = (FInputChord *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInputChord::GetInputText(this,&local_38,true);
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execInputEvent_IsAltDown @ 147e02dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsAltDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       (pFVar2->ModifierKeys).bIsLeftAltDown != 0 || (pFVar2->ModifierKeys).bIsRightAltDown != 0;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsCommandDown @ 147e02eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsCommandDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       (pFVar2->ModifierKeys).bIsLeftCommandDown != 0 ||
       (pFVar2->ModifierKeys).bIsRightCommandDown != 0;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsControlDown @ 147e02f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsControlDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       (pFVar2->ModifierKeys).bIsLeftControlDown != 0 ||
       (pFVar2->ModifierKeys).bIsRightControlDown != 0;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsLeftAltDown @ 147e03070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsLeftAltDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsLeftAltDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsLeftCommandDown @ 147e03160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsLeftCommandDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsLeftCommandDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsLeftControlDown @ 147e03250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsLeftControlDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsLeftControlDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsLeftShiftDown @ 147e03340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsLeftShiftDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsLeftShiftDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsRepeat @ 147e03420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsRepeat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = pFVar2->bIsRepeat;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsRightAltDown @ 147e03500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsRightAltDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsRightAltDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsRightCommandDown @ 147e035f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsRightCommandDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsRightCommandDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsRightControlDown @ 147e036e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsRightControlDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsRightControlDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsRightShiftDown @ 147e037d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsRightShiftDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (pFVar2->ModifierKeys).bIsRightShiftDown;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execInputEvent_IsShiftDown @ 147e038c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execInputEvent_IsShiftDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_38;
  
  local_38.bIsRepeat = false;
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.InputDeviceId.InternalId = -1;
  local_38.ModifierKeys.bAreCapsLocked = 0;
  local_38.ModifierKeys.bIsRightCommandDown = 0;
  local_38.ModifierKeys.bIsLeftCommandDown = 0;
  local_38.ModifierKeys.bIsRightAltDown = 0;
  local_38.ModifierKeys.bIsLeftAltDown = 0;
  local_38.ModifierKeys.bIsRightControlDown = 0;
  local_38.ModifierKeys.bIsLeftControlDown = 0;
  local_38.ModifierKeys.bIsRightShiftDown = 0;
  local_38.ModifierKeys.bIsLeftShiftDown = 0;
  local_38.UserIndex = 0;
  local_38.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_38.EventTimestamp = (ulong64)local_res10;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       (pFVar2->ModifierKeys).bIsLeftShiftDown != 0 || (pFVar2->ModifierKeys).bIsRightShiftDown != 0
  ;
  FInputEvent::~FInputEvent(&local_38);
  return;
}

// execKey_GetDisplayName @ 147e09690

void __cdecl
UKismetInputLibrary::execKey_GetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FKey *this;
  int local_res10 [2];
  FText local_38;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  local_res10[0] = 0;
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
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
  FKey::GetDisplayName(this,&local_38,local_res10[0] != 0);
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_GetNavigationAction @ 147e097b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execKey_GetNavigationAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSlateApplication *pFVar3;
  uchar *puVar4;
  uchar local_28 [16];
  TReferenceControllerBase<1> *pTStack_18;
  
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
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
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
  puVar4 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    uVar2 = 3;
  }
  else {
    pFVar3 = FSlateApplication::Get();
    uVar2 = (**(code **)(*(longlong *)pFVar3 + 0xb8))(pFVar3,puVar4);
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execKey_GetNavigationActionFromKey @ 147e09890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execKey_GetNavigationActionFromKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSlateApplication *pFVar3;
  FKeyEvent *pFVar4;
  FKeyEvent local_58;
  
  FKeyEvent::FKeyEvent(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar4 = &local_58;
  if ((FKeyEvent *)param_2->MostRecentPropertyAddress != (FKeyEvent *)0x0) {
    pFVar4 = (FKeyEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    uVar2 = 3;
  }
  else {
    pFVar3 = FSlateApplication::Get();
    uVar2 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3,pFVar4);
  }
  *(undefined1 *)param_3 = uVar2;
  FKeyEvent::~FKeyEvent(&local_58);
  return;
}

// execKey_GetNavigationDirectionFromAnalog @ 147e09970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSlateApplication *pFVar3;
  FAnalogInputEvent *pFVar4;
  FModifierKeysState local_res10 [4];
  FKey local_78;
  FAnalogInputEvent local_58;
  
  local_78.KeyName.ComparisonIndex.Value = 0;
  local_78.KeyName.Number = 0;
  INSERT(local_res10[0],0,8,1);
  INSERT(local_res10[0],0,7,1);
  INSERT(local_res10[0],0,6,1);
  INSERT(local_res10[0],0,5,1);
  INSERT(local_res10[0],0,4,1);
  INSERT(local_res10[0],0,3,1);
  INSERT(local_res10[0],0,2,1);
  INSERT(local_res10[0],0,1,1);
  INSERT(local_res10[0],0,0,1);
  local_78.KeyDetails.Object = (FKeyDetails *)0x0;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FKeyEvent::FKeyEvent((FKeyEvent *)&local_58,&local_78,local_res10,0,false,0,0);
  local_58.AnalogValue = 0.0;
  local_58._padding_ = (longlong)&___7FAnalogInputEvent__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar4 = &local_58;
  if ((FAnalogInputEvent *)param_2->MostRecentPropertyAddress != (FAnalogInputEvent *)0x0) {
    pFVar4 = (FAnalogInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    uVar2 = 7;
  }
  else {
    pFVar3 = FSlateApplication::Get();
    uVar2 = (**(code **)(*(longlong *)pFVar3 + 0xa8))(pFVar3,pFVar4);
  }
  *(undefined1 *)param_3 = uVar2;
  FAnalogInputEvent::~FAnalogInputEvent(&local_58);
  return;
}

// execKey_GetNavigationDirectionFromKey @ 147e09a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetInputLibrary::execKey_GetNavigationDirectionFromKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSlateApplication *pFVar3;
  FKeyEvent *pFVar4;
  FKeyEvent local_58;
  
  FKeyEvent::FKeyEvent(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar4 = &local_58;
  if ((FKeyEvent *)param_2->MostRecentPropertyAddress != (FKeyEvent *)0x0) {
    pFVar4 = (FKeyEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    uVar2 = 7;
  }
  else {
    pFVar3 = FSlateApplication::Get();
    uVar2 = (**(code **)(*(longlong *)pFVar3 + 0xa0))(pFVar3,pFVar4);
  }
  *(undefined1 *)param_3 = uVar2;
  FKeyEvent::~FKeyEvent(&local_58);
  return;
}

// execKey_IsAnalog @ 147e09b70

void __cdecl UKismetInputLibrary::execKey_IsAnalog(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsAnalog(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsAxis1D @ 147e09c20

void __cdecl UKismetInputLibrary::execKey_IsAxis1D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsAxis1D(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsAxis2D @ 147e09cd0

void __cdecl UKismetInputLibrary::execKey_IsAxis2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsAxis2D(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsAxis3D @ 147e09d80

void __cdecl UKismetInputLibrary::execKey_IsAxis3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsAxis3D(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsButtonAxis @ 147e09e30

void __cdecl
UKismetInputLibrary::execKey_IsButtonAxis(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsButtonAxis(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsDigital @ 147e09ee0

void __cdecl UKismetInputLibrary::execKey_IsDigital(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsDigital(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsGamepadKey @ 147e09f90

void __cdecl
UKismetInputLibrary::execKey_IsGamepadKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsGamepadKey(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsKeyboardKey @ 147e0a040

void __cdecl
UKismetInputLibrary::execKey_IsKeyboardKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsBindableInBlueprints(this);
  if (bVar2) {
    bVar2 = FKey::IsGamepadKey(this);
    if (!bVar2) {
      bVar2 = FKey::IsMouseButton(this);
      if (!bVar2) {
        bVar2 = FKey::IsTouch(this);
        if (!bVar2) {
          uVar3 = 1;
          goto LAB_147e0a100;
        }
      }
    }
  }
  uVar3 = 0;
LAB_147e0a100:
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsModifierKey @ 147e0a130

void __cdecl
UKismetInputLibrary::execKey_IsModifierKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsModifierKey(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsMouseButton @ 147e0a1e0

void __cdecl
UKismetInputLibrary::execKey_IsMouseButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsMouseButton(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execKey_IsValid @ 147e0a290

void __cdecl UKismetInputLibrary::execKey_IsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FKey *this;
  FKey local_28;
  
  local_28.KeyName.ComparisonIndex.Value = 0;
  local_28.KeyName.Number = 0;
  local_28.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this = &local_28;
  if ((FKey *)param_2->MostRecentPropertyAddress != (FKey *)0x0) {
    this = (FKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FKey::IsValid(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// execModifierKeysState_IsAltDown @ 147e1af70

void __cdecl
UKismetInputLibrary::execModifierKeysState_IsAltDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res10 [8];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 >> 1 & 1;
  return;
}

// execModifierKeysState_IsCommandDown @ 147e1b010

void __cdecl
UKismetInputLibrary::execModifierKeysState_IsCommandDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res10 [8];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 >> 3 & 1;
  return;
}

// execModifierKeysState_IsControlDown @ 147e1b0b0

void __cdecl
UKismetInputLibrary::execModifierKeysState_IsControlDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res10 [8];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 & 1;
  return;
}

// execModifierKeysState_IsShiftDown @ 147e1b150

void __cdecl
UKismetInputLibrary::execModifierKeysState_IsShiftDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_res10 [8];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 >> 2 & 1;
  return;
}

// execPointerEvent_GetCursorDelta @ 147e21150

void __cdecl
UKismetInputLibrary::execPointerEvent_GetCursorDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FPointerEvent *pFVar3;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&(pFVar3->CursorDelta).field_0x4;
  *(double *)param_3 = (double)*(float *)&pFVar3->CursorDelta;
  *(double *)((longlong)param_3 + 8) = (double)fVar1;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetEffectingButton @ 147e21220

void __cdecl
UKismetInputLibrary::execPointerEvent_GetEffectingButton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPointerEvent *pFVar3;
  FKeyDetails *local_a0;
  FSharedReferencer<1> local_98 [2];
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0].ReferenceController =
       (pFVar3->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (pFVar3->EffectingButton).KeyName;
  local_a0 = (pFVar3->EffectingButton).KeyDetails.Object;
  if (local_98[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_98[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FName *)param_3 = FVar2;
  if ((FKeyDetails **)((longlong)param_3 + 8) != &local_a0) {
    *(FKeyDetails **)((longlong)param_3 + 8) = local_a0;
    local_a0 = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),local_98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98[0].ReferenceController);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetGestureDelta @ 147e21320

void __cdecl
UKismetInputLibrary::execPointerEvent_GetGestureDelta
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FPointerEvent *pFVar3;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&(pFVar3->WheelOrGestureDelta).field_0x4;
  *(double *)param_3 = (double)*(float *)&pFVar3->WheelOrGestureDelta;
  *(double *)((longlong)param_3 + 8) = (double)fVar1;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetGestureType @ 147e213f0

void __cdecl
UKismetInputLibrary::execPointerEvent_GetGestureType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FPointerEvent *pFVar3;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(pFVar3->GestureType) {
  default:
    uVar2 = 0;
    break;
  case Scroll:
    uVar2 = 1;
    break;
  case Magnify:
    uVar2 = 2;
    break;
  case Swipe:
    uVar2 = 3;
    break;
  case Rotate:
    uVar2 = 4;
    break;
  case LongPress:
    uVar2 = 5;
  }
  *(undefined1 *)param_3 = uVar2;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetLastScreenSpacePosition @ 147e214f0

void __cdecl
UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FPointerEvent *pFVar3;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&(pFVar3->LastScreenSpacePosition).field_0x4;
  *(double *)param_3 = (double)*(float *)&pFVar3->LastScreenSpacePosition;
  *(double *)((longlong)param_3 + 8) = (double)fVar1;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetPointerIndex @ 147e215c0

void __cdecl
UKismetInputLibrary::execPointerEvent_GetPointerIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)param_3 = pFVar2->PointerIndex;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetScreenSpacePosition @ 147e21670

void __cdecl
UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FPointerEvent *pFVar3;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar3 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar3 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&(pFVar3->ScreenSpacePosition).field_0x4;
  *(double *)param_3 = (double)*(float *)&pFVar3->ScreenSpacePosition;
  *(double *)((longlong)param_3 + 8) = (double)fVar1;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetTouchpadIndex @ 147e21740

void __cdecl
UKismetInputLibrary::execPointerEvent_GetTouchpadIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)param_3 = pFVar2->TouchpadIndex;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetUserIndex @ 147e217f0

void __cdecl
UKismetInputLibrary::execPointerEvent_GetUserIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)((longlong)&pFVar2->_padding_ + 4);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_GetWheelDelta @ 147e218a0

void __cdecl
UKismetInputLibrary::execPointerEvent_GetWheelDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&(pFVar2->WheelOrGestureDelta).field_0x4;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_IsMouseButtonDown @ 147e21950

void __cdecl
UKismetInputLibrary::execPointerEvent_IsMouseButtonDown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FProperty *pFVar2;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FPointerEvent *pFVar9;
  longlong local_a8 [2];
  TReferenceControllerBase<1> *pTStack_98;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a8[0] = 0;
  pFVar9 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar9 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  local_a8[1] = 0;
  pTStack_98 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pTVar5 = pTStack_98;
  lVar4 = local_a8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_98 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_98->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pTVar3 = pFVar9->PressedButtons;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_a8[0]);
  if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
    FVar7 = (pTVar3->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&pTVar3->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)(pTVar3->HashSize - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar6) * 4
                    );
    if (iVar8 != -1) {
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + *(longlong *)&pTVar3->Elements) == lVar4)
        goto LAB_147e21aab;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&pTVar3->Elements);
      } while (iVar8 != -1);
    }
  }
  iVar8 = -1;
LAB_147e21aab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(bool *)param_3 = iVar8 != -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execPointerEvent_IsTouchEvent @ 147e21b00

void __cdecl
UKismetInputLibrary::execPointerEvent_IsTouchEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = pFVar2->bIsTouchEvent;
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

