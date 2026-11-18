// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b7fd0

UClass * __cdecl UInputTriggerHoldAndRelease::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerHoldAndRelease",
               &Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton,
               StaticRegisterNativesUInputTriggerHoldAndRelease,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerHoldAndRelease>,
               InternalVTableHelperCtorCaller<UInputTriggerHoldAndRelease>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton;
}

// UInputTriggerHoldAndRelease @ 14a6cd600

UInputTriggerHoldAndRelease * __thiscall
UInputTriggerHoldAndRelease::UInputTriggerHoldAndRelease
          (UInputTriggerHoldAndRelease *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerHoldAndRelease__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->HoldTimeThreshold = 0.5;
  return this;
}

// UInputTriggerHoldAndRelease @ 14a6cd670

UInputTriggerHoldAndRelease * __thiscall
UInputTriggerHoldAndRelease::UInputTriggerHoldAndRelease
          (UInputTriggerHoldAndRelease *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerHoldAndRelease__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->HoldTimeThreshold = 0.5;
  return this;
}

// ~UInputTriggerHoldAndRelease @ 14a6cfb50

void __thiscall
UInputTriggerHoldAndRelease::~UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1ef0

UClass * __cdecl UInputTriggerHoldAndRelease::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerHoldAndRelease",
               &Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton,
               StaticRegisterNativesUInputTriggerHoldAndRelease,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerHoldAndRelease>,
               InternalVTableHelperCtorCaller<UInputTriggerHoldAndRelease>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.InnerSingleton;
}

// StaticRegisterNativesUInputTriggerHoldAndRelease @ 14a6fb770

void __cdecl UInputTriggerHoldAndRelease::StaticRegisterNativesUInputTriggerHoldAndRelease(void)

{
  return;
}

// UpdateState_Implementation @ 14a7009c0

ETriggerState __thiscall
UInputTriggerHoldAndRelease::UpdateState_Implementation
          (UInputTriggerHoldAndRelease *this,UEnhancedPlayerInput *param_1,
          FInputActionValue *param_2,float param_3)

{
  ETriggerState EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  
  fVar4 = __real_3f800000;
  fVar2 = __real_3f800000;
  if (param_1 != (UEnhancedPlayerInput *)0x0) {
    fVar2 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
  }
  fVar5 = param_3;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    fVar5 = fVar2 * param_3;
  }
  local_58._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_58._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
  uStack_40 = *(undefined8 *)&param_2->ValueType;
  EVar1 = None;
  fVar2 = *(float *)&this->_padding_;
  fVar3 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_58._s_0);
  if (fVar3 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    *(undefined4 *)&this->_padding_ = 0;
  }
  else {
    EVar1 = Ongoing;
    if (param_1 != (UEnhancedPlayerInput *)0x0) {
      fVar4 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      param_3 = fVar4 * param_3;
    }
    *(float *)&this->_padding_ = param_3 + *(float *)&this->_padding_;
  }
  if ((this->HoldTimeThreshold <= fVar5 + fVar2) && (EVar1 == None)) {
    EVar1 = Triggered;
  }
  return EVar1;
}

