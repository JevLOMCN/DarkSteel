// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b7e90

UClass * __cdecl UInputTriggerHold::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerHold",
               &Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton,
               StaticRegisterNativesUInputTriggerHold,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerHold>,
               InternalVTableHelperCtorCaller<UInputTriggerHold>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton;
}

// UInputTriggerHold @ 14a6cd500

UInputTriggerHold * __thiscall
UInputTriggerHold::UInputTriggerHold(UInputTriggerHold *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerHold__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->bTriggered = false;
  this->HoldTimeThreshold = 1.0;
  this->bIsOneShot = false;
  return this;
}

// UInputTriggerHold @ 14a6cd580

UInputTriggerHold * __thiscall
UInputTriggerHold::UInputTriggerHold(UInputTriggerHold *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerHold__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->bTriggered = false;
  this->HoldTimeThreshold = 1.0;
  this->bIsOneShot = false;
  return this;
}

// ~UInputTriggerHold @ 14a6cfb30

void __thiscall UInputTriggerHold::~UInputTriggerHold(UInputTriggerHold *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6ded10

FString * __thiscall
UInputTriggerHold::GetDebugState(UInputTriggerHold *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  FVar2.Data = (FScriptContainerElement *)0x0;
  bVar1 = *(float *)&this->_padding_ == 0.0;
  if (bVar1) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar3 = &local_28;
  }
  else {
    ::FString::PrintfImpl(&local_18,L"Hold:%.2f/%.2f");
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

// GetPrivateStaticClass @ 14a6e1e30

UClass * __cdecl UInputTriggerHold::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerHold",
               &Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton,
               StaticRegisterNativesUInputTriggerHold,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerHold>,
               InternalVTableHelperCtorCaller<UInputTriggerHold>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerHold.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2730

ETriggerEventsSupported __thiscall
UInputTriggerHold::GetSupportedTriggerEvents(UInputTriggerHold *this)

{
  return Ongoing;
}

// StaticRegisterNativesUInputTriggerHold @ 14a6fb760

void __cdecl UInputTriggerHold::StaticRegisterNativesUInputTriggerHold(void)

{
  return;
}

// UpdateState_Implementation @ 14a7008f0

ETriggerState __thiscall
UInputTriggerHold::UpdateState_Implementation
          (UInputTriggerHold *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  bool bVar1;
  bool bVar2;
  ETriggerState EVar3;
  float fVar4;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  
  local_38._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
  uStack_20 = *(undefined8 *)&param_2->ValueType;
  EVar3 = None;
  fVar4 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_38._s_0);
  if (fVar4 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    *(undefined4 *)&this->_padding_ = 0;
    fVar4 = 0.0;
  }
  else {
    EVar3 = Ongoing;
    fVar4 = __real_3f800000;
    if (param_1 != (UEnhancedPlayerInput *)0x0) {
      fVar4 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      param_3 = fVar4 * param_3;
    }
    fVar4 = param_3 + *(float *)&this->_padding_;
    *(float *)&this->_padding_ = fVar4;
  }
  bVar2 = this->HoldTimeThreshold <= fVar4;
  bVar1 = this->bTriggered;
  this->bTriggered = bVar2;
  if (bVar2) {
    if ((bVar1 == false) || (this->bIsOneShot == false)) {
      EVar3 = Triggered;
    }
    else {
      EVar3 = None;
    }
  }
  return EVar3;
}

