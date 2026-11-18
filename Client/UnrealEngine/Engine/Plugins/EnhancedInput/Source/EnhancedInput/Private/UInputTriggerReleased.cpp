// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b7d00

UClass * __cdecl UInputTriggerReleased::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerReleased",
               &Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton,
               StaticRegisterNativesUInputTriggerReleased,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerReleased>,
               InternalVTableHelperCtorCaller<UInputTriggerReleased>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton;
}

// UInputTriggerReleased @ 14a6cd880

UInputTriggerReleased * __thiscall
UInputTriggerReleased::UInputTriggerReleased(UInputTriggerReleased *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInputTriggerReleased__6B_;
  return this;
}

// UInputTriggerReleased @ 14a6cd8e0

UInputTriggerReleased * __thiscall
UInputTriggerReleased::UInputTriggerReleased
          (UInputTriggerReleased *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInputTriggerReleased__6B_;
  return this;
}

// ~UInputTriggerReleased @ 14a6cfbb0

void __thiscall UInputTriggerReleased::~UInputTriggerReleased(UInputTriggerReleased *this)

{
  *(undefined ***)this = &___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6defa0

FString * __thiscall
UInputTriggerReleased::GetDebugState(UInputTriggerReleased *this,FString *__return_storage_ptr__)

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
    pFVar2 = ::FString::FString(&local_18,L"Released:Held");
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

// GetPrivateStaticClass @ 14a6e2130

UClass * __cdecl UInputTriggerReleased::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerReleased",
               &Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton,
               StaticRegisterNativesUInputTriggerReleased,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerReleased>,
               InternalVTableHelperCtorCaller<UInputTriggerReleased>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerReleased.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2750

ETriggerEventsSupported __thiscall
UInputTriggerReleased::GetSupportedTriggerEvents(UInputTriggerReleased *this)

{
  return Instant;
}

// StaticRegisterNativesUInputTriggerReleased @ 14a6fb7a0

void __cdecl UInputTriggerReleased::StaticRegisterNativesUInputTriggerReleased(void)

{
  return;
}

// UpdateState_Implementation @ 14a700c20

ETriggerState __thiscall
UInputTriggerReleased::UpdateState_Implementation
          (UInputTriggerReleased *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  ETriggerState EVar1;
  float fVar2;
  
  fVar2 = FInputActionValue::GetMagnitudeSq(param_2);
  if (*(float *)&this->field_0x28 * *(float *)&this->field_0x28 <= fVar2) {
    return Ongoing;
  }
  fVar2 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->field_0x30);
  EVar1 = None;
  if (*(float *)&this->field_0x28 * *(float *)&this->field_0x28 <= fVar2) {
    EVar1 = Triggered;
  }
  return EVar1;
}

