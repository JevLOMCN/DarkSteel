// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b8a60

UClass * __cdecl UInputTriggerChordBlocker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerChordBlocker",
               &Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton,
               StaticRegisterNativesUInputTriggerChordBlocker,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerChordBlocker>,
               InternalVTableHelperCtorCaller<UInputTriggerChordBlocker>,local_res8,
               UInputTriggerChordAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton;
}

// UInputTriggerChordBlocker @ 14a6cd290

UInputTriggerChordBlocker * __thiscall
UInputTriggerChordBlocker::UInputTriggerChordBlocker
          (UInputTriggerChordBlocker *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInputTriggerChordBlocker__6B_;
  *(undefined8 *)&this->field_0x50 = 0;
  return this;
}

// UInputTriggerChordBlocker @ 14a6cd2f0

UInputTriggerChordBlocker * __thiscall
UInputTriggerChordBlocker::UInputTriggerChordBlocker
          (UInputTriggerChordBlocker *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInputTriggerChordBlocker__6B_;
  *(undefined8 *)&this->field_0x50 = 0;
  return this;
}

// ~UInputTriggerChordBlocker @ 14a6cfaa0

void __thiscall
UInputTriggerChordBlocker::~UInputTriggerChordBlocker(UInputTriggerChordBlocker *this)

{
  *(undefined ***)this = &___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1bf0

UClass * __cdecl UInputTriggerChordBlocker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerChordBlocker",
               &Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton,
               StaticRegisterNativesUInputTriggerChordBlocker,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerChordBlocker>,
               InternalVTableHelperCtorCaller<UInputTriggerChordBlocker>,local_res8,
               UInputTriggerChordAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerChordBlocker.InnerSingleton;
}

// GetTriggerType_Implementation @ 14a6e2880

ETriggerType __thiscall
UInputTriggerChordBlocker::GetTriggerType_Implementation(UInputTriggerChordBlocker *this)

{
  return Blocker;
}

// IsBlocking @ 14a6e5820

bool __thiscall
UInputTriggerChordBlocker::IsBlocking(UInputTriggerChordBlocker *this,ETriggerState param_1)

{
  return param_1 == Triggered;
}

// StaticRegisterNativesUInputTriggerChordBlocker @ 14a6fb730

void __cdecl UInputTriggerChordBlocker::StaticRegisterNativesUInputTriggerChordBlocker(void)

{
  return;
}

