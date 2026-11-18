// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 10

// StaticClass @ 14a6b74a0

UClass * __cdecl UInputTriggerTimedBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerTimedBase",
               &Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton,
               StaticRegisterNativesUInputTriggerTimedBase,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Input",InternalConstructor<UInputTriggerTimedBase>,
               InternalVTableHelperCtorCaller<UInputTriggerTimedBase>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton;
}

// UInputTriggerTimedBase @ 14a6cdb40

UInputTriggerTimedBase * __thiscall
UInputTriggerTimedBase::UInputTriggerTimedBase(UInputTriggerTimedBase *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerTimedBase__6B_;
  this->HeldDuration = 0.0;
  this->bAffectedByTimeDilation = false;
  return this;
}

// UInputTriggerTimedBase @ 14a6cdbb0

UInputTriggerTimedBase * __thiscall
UInputTriggerTimedBase::UInputTriggerTimedBase
          (UInputTriggerTimedBase *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerTimedBase__6B_;
  this->HeldDuration = 0.0;
  this->bAffectedByTimeDilation = false;
  return this;
}

// ~UInputTriggerTimedBase @ 14a6cfc10

void __thiscall UInputTriggerTimedBase::~UInputTriggerTimedBase(UInputTriggerTimedBase *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateHeldDuration @ 14a6d60e0

float __thiscall
UInputTriggerTimedBase::CalculateHeldDuration
          (UInputTriggerTimedBase *this,UEnhancedPlayerInput *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  if (param_1 != (UEnhancedPlayerInput *)0x0) {
    fVar1 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
  }
  if (this->bAffectedByTimeDilation != false) {
    param_2 = fVar1 * param_2;
  }
  return param_2 + this->HeldDuration;
}

// GetDebugState @ 14a6df0a0

FString * __thiscall
UInputTriggerTimedBase::GetDebugState(UInputTriggerTimedBase *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  FVar2.Data = (FScriptContainerElement *)0x0;
  bVar1 = this->HeldDuration == 0.0;
  if (bVar1) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar3 = &local_28;
  }
  else {
    ::FString::PrintfImpl(&local_18,L"Held:%.2f");
    pFVar3 = &local_18;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar2.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a6e2370

UClass * __cdecl UInputTriggerTimedBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerTimedBase",
               &Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton,
               StaticRegisterNativesUInputTriggerTimedBase,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Input",InternalConstructor<UInputTriggerTimedBase>,
               InternalVTableHelperCtorCaller<UInputTriggerTimedBase>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerTimedBase.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2770

ETriggerEventsSupported __thiscall
UInputTriggerTimedBase::GetSupportedTriggerEvents(UInputTriggerTimedBase *this)

{
  return Ongoing;
}

// StaticRegisterNativesUInputTriggerTimedBase @ 14a6fb7d0

void __cdecl UInputTriggerTimedBase::StaticRegisterNativesUInputTriggerTimedBase(void)

{
  return;
}

// UpdateState_Implementation @ 14a700f90

ETriggerState __thiscall
UInputTriggerTimedBase::UpdateState_Implementation
          (UInputTriggerTimedBase *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  float fVar1;
  
  fVar1 = FInputActionValue::GetMagnitudeSq(param_2);
  if (fVar1 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    this->HeldDuration = 0.0;
    return None;
  }
  fVar1 = __real_3f800000;
  if (param_1 != (UEnhancedPlayerInput *)0x0) {
    fVar1 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
  }
  if (this->bAffectedByTimeDilation != false) {
    param_3 = fVar1 * param_3;
  }
  this->HeldDuration = param_3 + this->HeldDuration;
  return Ongoing;
}

