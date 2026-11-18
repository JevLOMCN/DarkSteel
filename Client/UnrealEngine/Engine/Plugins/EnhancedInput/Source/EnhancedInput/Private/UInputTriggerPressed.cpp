// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b7830

UClass * __cdecl UInputTriggerPressed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerPressed",
               &Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton,
               StaticRegisterNativesUInputTriggerPressed,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerPressed>,
               InternalVTableHelperCtorCaller<UInputTriggerPressed>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton;
}

// UInputTriggerPressed @ 14a6cd6e0

UInputTriggerPressed * __thiscall
UInputTriggerPressed::UInputTriggerPressed(UInputTriggerPressed *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0x3f000000;
  *(undefined ***)this = &___7UInputTrigger__6B_;
  this->field_0x2c = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x38 = uVar1;
  *(double *)&this->field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->field_0x48 = 0;
  *(undefined ***)this = &___7UInputTriggerPressed__6B_;
  return this;
}

// UInputTriggerPressed @ 14a6cd740

UInputTriggerPressed * __thiscall
UInputTriggerPressed::UInputTriggerPressed(UInputTriggerPressed *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0x3f000000;
  *(undefined ***)this = &___7UInputTrigger__6B_;
  this->field_0x2c = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x38 = uVar1;
  *(double *)&this->field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->field_0x48 = 0;
  *(undefined ***)this = &___7UInputTriggerPressed__6B_;
  return this;
}

// ~UInputTriggerPressed @ 14a6cfb70

void __thiscall UInputTriggerPressed::~UInputTriggerPressed(UInputTriggerPressed *this)

{
  *(undefined ***)this = &___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6dede0

FString * __thiscall
UInputTriggerPressed::GetDebugState(UInputTriggerPressed *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  float fVar3;
  FString local_28;
  FString local_18;
  
  fVar3 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->field_0x30);
  bVar1 = fVar3 < *(float *)&this->field_0x28 * *(float *)&this->field_0x28;
  if (bVar1) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar2 = ::FString::FString(&local_18,L"Pressed:Held");
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
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

// GetPrivateStaticClass @ 14a6e1fb0

UClass * __cdecl UInputTriggerPressed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerPressed",
               &Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton,
               StaticRegisterNativesUInputTriggerPressed,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerPressed>,
               InternalVTableHelperCtorCaller<UInputTriggerPressed>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerPressed.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2740

ETriggerEventsSupported __thiscall
UInputTriggerPressed::GetSupportedTriggerEvents(UInputTriggerPressed *this)

{
  return Instant;
}

// StaticRegisterNativesUInputTriggerPressed @ 14a6fb780

void __cdecl UInputTriggerPressed::StaticRegisterNativesUInputTriggerPressed(void)

{
  return;
}

// UpdateState_Implementation @ 14a700ad0

ETriggerState __thiscall
UInputTriggerPressed::UpdateState_Implementation
          (UInputTriggerPressed *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  float fVar1;
  
  fVar1 = FInputActionValue::GetMagnitudeSq(param_2);
  if (*(float *)&this->field_0x28 * *(float *)&this->field_0x28 <= fVar1) {
    fVar1 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->field_0x30);
    if (fVar1 < *(float *)&this->field_0x28 * *(float *)&this->field_0x28) {
      return Triggered;
    }
  }
  return None;
}

