// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b8430

UClass * __cdecl UInputTriggerPulse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerPulse",
               &Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton,
               StaticRegisterNativesUInputTriggerPulse,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerPulse>,
               InternalVTableHelperCtorCaller<UInputTriggerPulse>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton;
}

// UInputTriggerPulse @ 14a6cd7a0

UInputTriggerPulse * __thiscall
UInputTriggerPulse::UInputTriggerPulse(UInputTriggerPulse *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerPulse__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->TriggerCount = 0;
  this->bTriggerOnStart = true;
  this->Interval = 1.0;
  this->TriggerLimit = 0;
  return this;
}

// UInputTriggerPulse @ 14a6cd810

UInputTriggerPulse * __thiscall
UInputTriggerPulse::UInputTriggerPulse(UInputTriggerPulse *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UInputTriggerPulse__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->TriggerCount = 0;
  this->bTriggerOnStart = true;
  this->Interval = 1.0;
  this->TriggerLimit = 0;
  return this;
}

// ~UInputTriggerPulse @ 14a6cfb90

void __thiscall UInputTriggerPulse::~UInputTriggerPulse(UInputTriggerPulse *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6deeb0

FString * __thiscall
UInputTriggerPulse::GetDebugState(UInputTriggerPulse *this,FString *__return_storage_ptr__)

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
    ::FString::PrintfImpl(&local_18,L"Triggers:%d/%d, Interval:%.2f/%.2f");
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

// GetPrivateStaticClass @ 14a6e2070

UClass * __cdecl UInputTriggerPulse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerPulse",
               &Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton,
               StaticRegisterNativesUInputTriggerPulse,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerPulse>,
               InternalVTableHelperCtorCaller<UInputTriggerPulse>,local_res8,
               UInputTriggerTimedBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerPulse.InnerSingleton;
}

// StaticRegisterNativesUInputTriggerPulse @ 14a6fb790

void __cdecl UInputTriggerPulse::StaticRegisterNativesUInputTriggerPulse(void)

{
  return;
}

// UpdateState_Implementation @ 14a700b20

ETriggerState __thiscall
UInputTriggerPulse::UpdateState_Implementation
          (UInputTriggerPulse *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  
  local_38._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_2->Value).field0_0x0._s_0.Z;
  uStack_20 = *(undefined8 *)&param_2->ValueType;
  fVar3 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_38._s_0);
  if (fVar3 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    *(undefined4 *)&this->_padding_ = 0;
    this->TriggerCount = 0;
    return None;
  }
  fVar3 = __real_3f800000;
  if (param_1 != (UEnhancedPlayerInput *)0x0) {
    fVar3 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
  }
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    param_3 = fVar3 * param_3;
  }
  fVar3 = param_3 + *(float *)&this->_padding_;
  *(float *)&this->_padding_ = fVar3;
  if ((this->TriggerLimit != 0) && (this->TriggerLimit <= this->TriggerCount)) {
    return None;
  }
  iVar1 = this->TriggerCount + 1;
  iVar2 = this->TriggerCount;
  if (this->bTriggerOnStart == false) {
    iVar2 = iVar1;
  }
  if (fVar3 <= (float)iVar2 * this->Interval) {
    return Ongoing;
  }
  this->TriggerCount = iVar1;
  return Triggered;
}

