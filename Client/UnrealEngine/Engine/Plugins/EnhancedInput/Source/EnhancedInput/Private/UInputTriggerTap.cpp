// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b80d0

UClass * __cdecl UInputTriggerTap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerTap",
               &Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton,
               StaticRegisterNativesUInputTriggerTap,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerTap>,
               InternalVTableHelperCtorCaller<UInputTriggerTap>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton;
}

// UInputTriggerTap @ 14a6cda60

UInputTriggerTap * __thiscall
UInputTriggerTap::UInputTriggerTap(UInputTriggerTap *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerTap__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->TapReleaseTimeThreshold = 0.2;
  return this;
}

// UInputTriggerTap @ 14a6cdad0

UInputTriggerTap * __thiscall
UInputTriggerTap::UInputTriggerTap(UInputTriggerTap *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerTap__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->TapReleaseTimeThreshold = 0.2;
  return this;
}

// ~UInputTriggerTap @ 14a6cfbf0

void __thiscall UInputTriggerTap::~UInputTriggerTap(UInputTriggerTap *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e22b0

UClass * __cdecl UInputTriggerTap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerTap",
               &Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton,
               StaticRegisterNativesUInputTriggerTap,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerTap>,
               InternalVTableHelperCtorCaller<UInputTriggerTap>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerTap.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2760

ETriggerEventsSupported __thiscall
UInputTriggerTap::GetSupportedTriggerEvents(UInputTriggerTap *this)

{
  return Instant;
}

// StaticRegisterNativesUInputTriggerTap @ 14a6fb7c0

void __cdecl UInputTriggerTap::StaticRegisterNativesUInputTriggerTap(void)

{
  return;
}

// UpdateState_Implementation @ 14a700ea0

ETriggerState __thiscall
UInputTriggerTap::UpdateState_Implementation
          (UInputTriggerTap *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  float fVar1;
  ETriggerState EVar2;
  float fVar3;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  
  local_48._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
  uStack_30 = *(undefined8 *)&param_2->ValueType;
  EVar2 = None;
  fVar1 = *(float *)&this->_padding_;
  fVar3 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_48._s_0);
  if (fVar3 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    *(undefined4 *)&this->_padding_ = 0;
  }
  else {
    EVar2 = Ongoing;
    fVar3 = __real_3f800000;
    if (param_1 != (UEnhancedPlayerInput *)0x0) {
      fVar3 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      param_3 = fVar3 * param_3;
    }
    *(float *)&this->_padding_ = param_3 + *(float *)&this->_padding_;
  }
  fVar3 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->_padding_);
  if (((fVar3 < *(float *)&this->_padding_ * *(float *)&this->_padding_) || (EVar2 != None)) ||
     (this->TapReleaseTimeThreshold <= fVar1)) {
    if (this->TapReleaseTimeThreshold < *(float *)&this->_padding_ ||
        this->TapReleaseTimeThreshold == *(float *)&this->_padding_) {
      EVar2 = None;
    }
  }
  else {
    EVar2 = Triggered;
  }
  return EVar2;
}

