// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b8890

UClass * __cdecl UInputTriggerChordAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerChordAction",
               &Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton,
               StaticRegisterNativesUInputTriggerChordAction,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerChordAction>,
               InternalVTableHelperCtorCaller<UInputTriggerChordAction>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton;
}

// UInputTriggerChordAction @ 14a6cd1d0

UInputTriggerChordAction * __thiscall
UInputTriggerChordAction::UInputTriggerChordAction
          (UInputTriggerChordAction *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputTriggerChordAction__6B_;
  (this->ChordAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  return this;
}

// UInputTriggerChordAction @ 14a6cd230

UInputTriggerChordAction * __thiscall
UInputTriggerChordAction::UInputTriggerChordAction
          (UInputTriggerChordAction *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputTriggerChordAction__6B_;
  (this->ChordAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  return this;
}

// ~UInputTriggerChordAction @ 14a6cfa80

void __thiscall UInputTriggerChordAction::~UInputTriggerChordAction(UInputTriggerChordAction *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1b30

UClass * __cdecl UInputTriggerChordAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerChordAction",
               &Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton,
               StaticRegisterNativesUInputTriggerChordAction,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerChordAction>,
               InternalVTableHelperCtorCaller<UInputTriggerChordAction>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerChordAction.InnerSingleton;
}

// GetTriggerType_Implementation @ 14a6e2870

ETriggerType __thiscall
UInputTriggerChordAction::GetTriggerType_Implementation(UInputTriggerChordAction *this)

{
  return Implicit;
}

// IsBlocking @ 14a6e5810

bool __thiscall
UInputTriggerChordAction::IsBlocking(UInputTriggerChordAction *this,ETriggerState param_1)

{
  return param_1 != Triggered;
}

// StaticRegisterNativesUInputTriggerChordAction @ 14a6fb720

void __cdecl UInputTriggerChordAction::StaticRegisterNativesUInputTriggerChordAction(void)

{
  return;
}

// UpdateState_Implementation @ 14a7002a0

ETriggerState __thiscall
UInputTriggerChordAction::UpdateState_Implementation
          (UInputTriggerChordAction *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  UInputAction *pUVar1;
  FInputActionInstance *pFVar2;
  UInputAction *local_res8;
  
  pUVar1 = (this->ChordAction).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar2 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
           ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                   *)&param_1->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_res8);
  if (pFVar2 != (FInputActionInstance *)0x0) {
    if ((pFVar2->TriggerStateTracker).bEvaluatedTriggers == false) {
      return (pFVar2->TriggerStateTracker).NoTriggerState;
    }
    if ((pFVar2->TriggerStateTracker).bBlocking == false) {
      if ((((pFVar2->TriggerStateTracker).bFoundExplicit == false) ||
          ((pFVar2->TriggerStateTracker).bAnyExplictTriggered != false)) &&
         ((pFVar2->TriggerStateTracker).bAllImplicitsTriggered != false)) {
        return Triggered;
      }
      return (pFVar2->TriggerStateTracker).bFoundActiveTrigger != false;
    }
  }
  return None;
}

