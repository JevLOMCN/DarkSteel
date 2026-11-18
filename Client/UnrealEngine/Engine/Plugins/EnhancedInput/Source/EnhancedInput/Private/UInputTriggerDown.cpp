// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b7600

UClass * __cdecl UInputTriggerDown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerDown",
               &Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton,
               StaticRegisterNativesUInputTriggerDown,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerDown>,
               InternalVTableHelperCtorCaller<UInputTriggerDown>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton;
}

// UInputTriggerDown @ 14a6cd440

UInputTriggerDown * __thiscall
UInputTriggerDown::UInputTriggerDown(UInputTriggerDown *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInputTriggerDown__6B_;
  return this;
}

// UInputTriggerDown @ 14a6cd4a0

UInputTriggerDown * __thiscall
UInputTriggerDown::UInputTriggerDown(UInputTriggerDown *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInputTriggerDown__6B_;
  return this;
}

// ~UInputTriggerDown @ 14a6cfb10

void __thiscall UInputTriggerDown::~UInputTriggerDown(UInputTriggerDown *this)

{
  *(undefined ***)this = &___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1d70

UClass * __cdecl UInputTriggerDown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerDown",
               &Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton,
               StaticRegisterNativesUInputTriggerDown,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerDown>,
               InternalVTableHelperCtorCaller<UInputTriggerDown>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerDown.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2720

ETriggerEventsSupported __thiscall
UInputTriggerDown::GetSupportedTriggerEvents(UInputTriggerDown *this)

{
  return Instant;
}

// StaticRegisterNativesUInputTriggerDown @ 14a6fb750

void __cdecl UInputTriggerDown::StaticRegisterNativesUInputTriggerDown(void)

{
  return;
}

// UpdateState_Implementation @ 14a7008b0

ETriggerState __thiscall
UInputTriggerDown::UpdateState_Implementation
          (UInputTriggerDown *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  ETriggerState EVar1;
  float fVar2;
  
  fVar2 = FInputActionValue::GetMagnitudeSq(param_2);
  EVar1 = None;
  if (*(float *)&this->field_0x28 * *(float *)&this->field_0x28 <= fVar2) {
    EVar1 = Triggered;
  }
  return EVar1;
}

