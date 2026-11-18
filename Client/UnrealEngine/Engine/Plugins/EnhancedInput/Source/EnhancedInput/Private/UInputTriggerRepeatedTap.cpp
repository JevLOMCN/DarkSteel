// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b8320

UClass * __cdecl UInputTriggerRepeatedTap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerRepeatedTap",
               &Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton,
               StaticRegisterNativesUInputTriggerRepeatedTap,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerRepeatedTap>,
               InternalVTableHelperCtorCaller<UInputTriggerRepeatedTap>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton;
}

// UInputTriggerRepeatedTap @ 14a6cd940

UInputTriggerRepeatedTap * __thiscall
UInputTriggerRepeatedTap::UInputTriggerRepeatedTap
          (UInputTriggerRepeatedTap *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerRepeatedTap__6B_;
  this->RepeatDelay = 0.5;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->RepeatTime = 0.0;
  this->NumberOfTapsWhichTriggerRepeat = 2;
  this->TapReleaseTimeThreshold = 0.2;
  this->NumberOfTapsSinceLastTrigger = 0;
  return this;
}

// UInputTriggerRepeatedTap @ 14a6cd9d0

UInputTriggerRepeatedTap * __thiscall
UInputTriggerRepeatedTap::UInputTriggerRepeatedTap
          (UInputTriggerRepeatedTap *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerRepeatedTap__6B_;
  this->RepeatDelay = 0.5;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->RepeatTime = 0.0;
  this->NumberOfTapsWhichTriggerRepeat = 2;
  this->TapReleaseTimeThreshold = 0.2;
  this->NumberOfTapsSinceLastTrigger = 0;
  return this;
}

// ~UInputTriggerRepeatedTap @ 14a6cfbd0

void __thiscall UInputTriggerRepeatedTap::~UInputTriggerRepeatedTap(UInputTriggerRepeatedTap *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6df070

FString * __thiscall
UInputTriggerRepeatedTap::GetDebugState
          (UInputTriggerRepeatedTap *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Repeated Taps:%d/%d");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a6e21f0

UClass * __cdecl UInputTriggerRepeatedTap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerRepeatedTap",
               &Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton,
               StaticRegisterNativesUInputTriggerRepeatedTap,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerRepeatedTap>,
               InternalVTableHelperCtorCaller<UInputTriggerRepeatedTap>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerRepeatedTap.InnerSingleton;
}

// StaticRegisterNativesUInputTriggerRepeatedTap @ 14a6fb7b0

void __cdecl UInputTriggerRepeatedTap::StaticRegisterNativesUInputTriggerRepeatedTap(void)

{
  return;
}

// UpdateState_Implementation @ 14a700c80

/* WARNING: Enum "Type": Some values do not have unique names */

ETriggerState __thiscall
UInputTriggerRepeatedTap::UpdateState_Implementation
          (UInputTriggerRepeatedTap *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  ETriggerState EVar7;
  float fVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  
  local_58._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_58._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
  uStack_40 = *(undefined8 *)&param_2->ValueType;
  EVar7 = None;
  fVar9 = *(float *)&this->_padding_;
  fVar8 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_58._s_0);
  if (fVar8 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    *(undefined4 *)&this->_padding_ = 0;
  }
  else {
    EVar7 = Ongoing;
    fVar8 = __real_3f800000;
    if (param_1 != (UEnhancedPlayerInput *)0x0) {
      fVar8 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      param_3 = fVar8 * param_3;
    }
    *(float *)&this->_padding_ = param_3 + *(float *)&this->_padding_;
  }
  fVar8 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->_padding_);
  if (((fVar8 < *(float *)&this->_padding_ * *(float *)&this->_padding_) || (EVar7 != None)) ||
     (this->TapReleaseTimeThreshold <= fVar9)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  bVar1 = dVar3 != this->RepeatTime;
  bVar2 = this->RepeatTime <= dVar3;
  if ((0 < this->NumberOfTapsSinceLastTrigger) ||
     ((bVar4 && (fVar9 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->_padding_),
                *(float *)&this->_padding_ * *(float *)&this->_padding_ <= fVar9)))) {
    EVar7 = Ongoing;
  }
  if (((bVar2 && bVar1) && (0 < this->NumberOfTapsSinceLastTrigger)) ||
     (this->TapReleaseTimeThreshold < *(float *)&this->_padding_ ||
      this->TapReleaseTimeThreshold == *(float *)&this->_padding_)) {
    EVar7 = None;
    if (bVar4) goto LAB_14a700dd1;
  }
  else {
    if (bVar4) {
      if (!bVar2 || !bVar1) {
        iVar5 = this->NumberOfTapsSinceLastTrigger + 1;
        this->NumberOfTapsSinceLastTrigger = iVar5;
        EVar7 = (this->NumberOfTapsWhichTriggerRepeat + -1 <= iVar5) + Ongoing;
      }
LAB_14a700dd1:
      this->RepeatTime = dVar3 + this->RepeatDelay;
    }
    if ((EVar7 & ~Triggered) != None) goto LAB_14a700de8;
  }
  this->NumberOfTapsSinceLastTrigger = 0;
LAB_14a700de8:
  if (5 < (byte)LogEnhancedInput._0_1_) {
    if (EVar7 == None) {
      pwVar6 = L"None";
    }
    else if (EVar7 == Ongoing) {
      pwVar6 = L"Ongoing";
    }
    else if (EVar7 == Triggered) {
      pwVar6 = L"Triggered";
    }
    else {
      pwVar6 = L"Invalid";
    }
    ::FString::FString((FString *)&local_58._s_0,pwVar6);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    if ((void *)local_58._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_58._s_0.X);
    }
  }
  return EVar7;
}

